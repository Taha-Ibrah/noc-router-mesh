Architecture during ASIC (RTL-GDSII) Flow.

**Statistics can be viewed in .log files.**

Common Terminology:

_Process Design Kit (PDK)_ - Complete collection of files provided by semiconductor foundry.
    - Timing/Power (.lib): Gate delays, power arcs, pin directions for synthesis and STA
    - Behavior Models (.v): Verilog description of standard cells for functional simulation
    - Physical Abstractions (.lef): Boundary sizes and pin locations for Place & Route.
    - Full Layout (.gds/.oat): Exact transistor geometries and silicon mask layers.
    - ETC.

_Cells_ - pre-designed, pre-tested functional building blocks provided by foundry PDK. Designers snap these ready-made blocks together.

_Driver_ - This is the cell output that sends an electrical signal onto a wire.

_How are slew and capacitance violations caused?_ - **Capacitance violations** happen when a driver has more electrical load than its allowed limit. The load comes from input pins of connected cells, and the connecting wires. **Slew Violations** happen when signal rises of falls too slowly.
**EXAMPLE**
| Capacitance | A driver sees **0.320 pF**, exceeding its **0.048 pF** limit |
| Slew | Its transition takes **9.195 ns**, exceeding its **1.487 ns** limit |

_Why is Capacitance so important in ASIC?_ - Capacitance matters because every signal transition requires movement of electrical charge. A driver must charge a connection to raise its voltage and discharge it to lower its voltage.



**1: UNMAPPED Yosys (GENERIC Gate-level synthesis)**
- Open-source framework for RTL Logic Synthesis
- Converts HDL to a gate-level netlist
- In unmapped synthesis, hdl is evaluated independently from any technology. Evaluates through generic logic gates and represnts in generic logic representations.
***Issue:***
- The original RTL used unpacked arrays of flit structs as module ports. Yosys frontend had limited support for SystemVerilog constructs.
- Created a "Flattened" RTL version, consisting of one long row of bits.
- This change addressed how the hardware was expressed - not the intended NoC behavior. "Flattening" means to simplify the data interface, rather than merging the entire module hierarchy.

**2: MAPPED SYNTHESIS (Using Yosys)**
- To continue with mapped synthesis, 2 items are needed
    - Unmapped netlist
    - Target Technology Library (.lib file): Catalog of physical gates available in target ASIC process or FPGA family. In this case, using SKYWater Technology Open-Source 130-nm cells.
- Produced technology-mapped netlist. Replaced generic logic with exact physical standard cells available in (.lib) file.

**3: OpenSTA (Static Timing Analysis)**
- After synthesis, move onto static timing analysis.
- Inputs required:
    - Complete timing constraint file (.sdc)
    - Gate-level Netlist (.v): Structural Verilog from synthesis
    - Target timing library from .lib: Gate delays and pin requirements from foundry PDK
- Calculates whether every register-to-register path in MAPPED netlist meets speed requirements set by the timing constraints (.sdc file).
    Key components of the .sdc file:
        - _Input Delay:_
        - _Output Delay:_
        - _Hold Uncertainty:_
        - _Clock Transition:_
        - _Output Load:_
- Checks for setup and hold violations.
    - Setup Violation: data arrives too late for clk edge
    - Hold Violation: data changes too quickly
- Important Outputs:
    - __Worst Negative Slack (WNS):__ Single worst timing violation in the entire chip. (-)ve slack means that chip will not work reliably at target clock speeds (data arrived late).
    - __Total Negative Slack (TNS):__ Sum of all negative slacks. Tells how widespread timing problems are in the entire chip.
    - __Slew Violations:__ A signal transition time (how fast voltage rises/falls) that exceeds maximum allowed limit. The signal is changing too slowly, risking logic errors, noise, power loss.
    - __Capacitive Violations:__ Total load capacitance (pin capacitance of receiver gates plus wire routing capacitance) attached to an output in that exceeds driver's maximum allowed limit. This means driver cell is overloaded.

**4: Floorplanning (OpenROAD):** First step of PHYSICAL DESIGN. Define chip's core area, shape, place large macros (IP blocks), build power distribution network, and reserve space for I/O pins before standard cell placement.
    - Die & Core Sizing: Setting total chip dimension and usable area for standard cells.
    - Macro placement: Positioning fixed blocks so routing channels remain open and congestion is minimized.
    - Power Distribution Network: Design metal power railes, rings, and stripes to prevent voltage (IR drop)
    - Pin Assignment: Placing input/output signal pads or bump locations around chip periphery.

**5: Pin Placement:** Physical assignment of chip's input, output and clock ports along the die or core boundaries, aligning internal logic with package pins.
    - Minimize wirelength: Position I/O pins close to internal registers or IP blocks to reduce delay.
    - Reduce Edge Congestion: Spread out signal pins evenly around perimenter to prevent routing bottlenecks where all wires try to exit cores at once.
    - Power/Clock Allocation: Dedicate clean, noise-isolated regions for power pads and clock input pins to maintain **signal integrity.**

**6: Tap/Endcap Insertion:** Non-logic helper cells are injected into standard cell rows to prevent electrical failure (latch-up) and satisfy foundry manufacturing rules at row boundaries.
    - Tap Cell: Connect semiconductor substrate (p-type silicon) and n-well directly to ground and power
    - Endcap Cell: Cap the open physical edges of standard cell rows.

**7: PDN Generation:** This is the chip's internal electrical grid. Delivers stable power (V_DD) and ground (V_SS) from external pins to every single transistor, preventing voltage drops.
    - If the power grid is too thin or poorly designed, high currents flowing through resistive metal wires cause voltage drop known as IR Drop.

**8: Glocal Placement:** EDA tools determines the approximate locations for standard cells inside the core. Arranges the actual circuit and adjusts cell positioning to improve the arrangement. Tool estimates wire lengths and routing demand, since the goal is to establish a useful overall arrangement.

**9: Placement Optimization:** Improves the circuit after global placement has established approximate cell connections. Because OpenROAD has a better connection on how long the connections will be and how much electrical load each driver must handle, it uses that information to then:
    - Insert Buffers: Split a large load so one gate does not have to drive every receiver directly.
    - Resize cells: Replace weak gate with stronger version that performs the same logic.
    - Improve critical connection: Adjust circuit and placement to reduce dealys on path that fail timing.
    - THIS IS WHERE SLEW AND CAPACITANCE VIOLATIONS CAN BE ADDRESSED.

**10: Detailed Placement:** Makes the cell positions physically legal.
    - Each cell sits on allowed row and placement site, valid orientation, and fits without overlapping.

**11: Clock-tree Synthesis (CTS):** Bulds the network that delivers clk to the flip-flops.
    - OpenROAD inserts clock buffers and dividers the connections into branches, with each branch serving a group of clock pins.
    - CTS tries to control the following:
        - Clock Skew: the difference in clock arrival time between flip-flops
        - Insertion delay: The time the clock takes to travel from its source to a flip-flop
        - Slew and Capacitance: Whether each branch has a sufficiently sharp transition and manageable load.

**12: Post-CTS Optimization:** Repairs timing after the clock tree has been built.
    - After CTS, clock now reaches flip-flops at different times
    - OpenROAD checks:
        - _Setup:_ data must arrive before the receiving register's clock edge.
        - _Hold:_ data must remain stable long enough after that edge

**13: Global Routing:** OpenROAD divides the layout into regions and estimates how many wires each region can accommodate on each metal layer. It then chooses routes that connect the cells while avoiding crowded areas.
    - The main objective it to plan the path that wires will take between cell pins.

**14: Routing Optimization:** Imporoves/Optimizes the design using the wire estimates from global routing.
    - Insert of adjust buffers on long/heavily loaded connections.
    - Resize gates where stronger drivers are needed.
    - Repair setup and hold timing affected by estimated wires
    - This can be another opportunity to reduce slew and capacitance violations.

**15: Detailed Routing:** Creates the exact metal wires and vias that connect the cell pins. Must obey the specifications.
    - Checks for unrouted connections, shorts (wires that accidentally connect different nets), and design-rule violations.

**16: Finishing:** Adds the physical structure needed to complete the layout.
    - Filler cells: Occupy gaps between standard cells and maintain continuity of power rails and well structures along rows.
    - Metal fill: Adds extra metal shapes in sparse areas to meet manufacturing density requirement.

**17: Parasitic Extraction:** Calculates the resistance and capacitance of the routed connections. Results are stored in .SPEF file, and OpenSTA combines information with final netlist, cell timing libraries, and SDC constraints to check timing again.
    - Demonstrates how actual wiring effects setup/hold slack, signal transition, and capacitive loads.
    - If violations remain, need further work.

**18: Final Checks and Export:**

| **Final STA** | Setup and hold timing pass using extracted wire resistance/capacitance at the required operating corners |
| **Electrical checks** | Slew and capacitance stay within applicable limits |
| **DRC** | Physical shapes obey manufacturing rules, such as wire spacing, width, and via placement |
| **LVS** | The circuit extracted from the layout matches the intended final netlist |
| **Connectivity and power checks** | Required signal and power connections are complete |

- Failures can send you back to earlier stages.
- Preserve the final netlist, SPEF, SDC, physical checkpoints, and verification reports. The flow then generates **GDSII** which can be inspected in KLayout.