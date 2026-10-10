Architecture during ASIC (RTL-GDSII) Flow.

Common Terminology:

_Process Design Kit (PDK)_ - Complete collection of files provided by semiconductor foundry.
    - Timing/Power (.lib): Gate delays, power arcs, pin directions for synthesis and STA
    - Behavior Models (.v): Verilog description of standard cells for functional simulation
    - Physical Abstractions (.lef): Boundary sizes and pin locations for Place & Route.
    - Full Layout (.gds/.oat): Exact transistor geometries and silicon mask layers.
    - ETC.

_Cells_ - pre-designed, pre-tested functional building blocks provided by foundry PDK. Designers snap these ready-made blocks together.



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

**7: Glocal Placement:**

**8: Placement Optimization:**

**9: Detailed Placement:**

**10: Clock-tree Synthesis:**

**11: Post-CTS Optimization:**

**12: Global Routing:**

**13: Routing Optimization:**

**14: Detailed Routing:**

**15: Finishing:**

**16: Parasitic Extraction:**

**17: Final Checks and Export:**