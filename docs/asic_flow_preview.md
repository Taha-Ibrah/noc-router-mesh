Architecture during ASIC (RTL-GDSII) Flow.

**Statistics can be viewed in .log files.**

**Common Terminology:**

_Process Design Kit (PDK)_ - Complete collection of files provided by semiconductor foundry.
    - Timing/Power (.lib): Gate delays, power arcs, pin directions for synthesis and STA
    - Behavior Models (.v): Verilog description of standard cells for functional simulation
    - Physical Abstractions (.lef): Boundary sizes and pin locations for Place & Route.
    - Full Layout (.gds/.oat): Exact transistor geometries and silicon mask layers.
    - ETC.

_Cells_ - pre-designed, pre-tested functional building blocks provided by foundry PDK. Designers snap these ready-made blocks together.

_Driver_ - This is the cell output that sends an electrical signal onto a wire.

__How are common ASIC violations caused?__

**Capacitance violations** happen when a driver has more electrical load than its allowed limit. The load comes from input pins of connected cells and the connecting wires.

**Slew violations** happen when a signal rises or falls more slowly than its allowed transition-time limit.

**Setup violations** happen when data arrives too late to meet the receiving register's setup deadline.

**Hold violations** happen when new data arrives too early, before the receiving register's hold requirement is satisfied.

**Fanout violations** happen when a driver's total fanout load exceeds its allowed limit. Fanout load may use weighted pin loads rather than a simple pin count.

**Antenna violations** happen when exposed metal or via area relative to connected transistor gate area exceeds the manufacturing antenna rules, accounting for protective diode diffusion. Charge collected during plasma etching can damage the gate oxide.

**Short violations** happen when conductive shapes unintentionally connect nets that should remain separate.

**Metal-spacing violations** happen when metal shapes are closer together than the applicable spacing rule allows.

**Via/cut-spacing violations** happen when contact or via cuts are closer together than their required minimum spacing.

**Minimum-geometry violations** happen when a wire is too narrow, a metal shape has too little area, or an enclosed hole is smaller than the applicable rule permits.

**Placement violations** happen when cells overlap, extend outside allowed placement regions, or do not occupy legal row sites and orientations.

**Unrouted/open connections** happen when a required connection has no continuous conductive path between its pins.

**Metal-density violations** happen when the metal coverage inside a specified checking window falls outside the permitted range.

**LVS mismatches** happen when the circuit extracted from the layout differs from the reference netlist in devices or connections. LVS means Layout Versus Schematic.

**IR-drop violations** happen when voltage lost through the power network exceeds the selected supply-drop budget.

**EXAMPLES**

These examples illustrate failing checks; they are not a list of current project violations. Limits depend on the applicable library, constraints, and process rules.

| Violation | Example |
|---|---|
| Capacitance | A driver sees **0.320 pF**, exceeding its **0.048 pF** limit |
| Slew | Its transition takes **9.195 ns**, exceeding its **1.487 ns** limit |
| Setup | Data arrives at **19.40 ns**, after its **19.00 ns** deadline: slack is **-0.40 ns** |
| Hold | New data arrives at **0.10 ns**, but must not arrive before **0.20 ns**: slack is **-0.10 ns** |
| Fanout | A driver sees **64 unit-weight loads**, exceeding a fanout limit of **32** |
| Antenna | A measured antenna ratio is **476.02**, exceeding its allowed ratio of **400.00** |
| Short | Metal belonging to **net A** touches metal belonging to **net B**, electrically connecting them |
| Metal spacing | Two met1 wires are **0.10 µm** apart where the applicable minimum spacing is **0.14 µm** |
| Via/cut spacing | Two via cuts are **0.10 µm** apart where the applicable minimum spacing is **0.17 µm** |
| Minimum wire width | A met1 wire is **0.10 µm** wide where the applicable minimum width is **0.14 µm** |
| Minimum metal area | A met1 shape has **0.050 µm²** area where the applicable minimum is **0.083 µm²** |
| Minimum hole area | A hole enclosed by met1 has **0.080 µm²** area where the applicable minimum is **0.140 µm²** |
| Placement | Two standard cells occupy **the same row sites**, causing an overlap |
| Unrouted/open | A driver output and its receiving input **have no continuous wire-and-via connection** |
| Metal density | A checking window has **20% metal coverage**, below an illustrative **30% minimum** |
| LVS | The reference netlist connects **A to B**, but the extracted layout connects **A to C** |
| IR drop | A **1.80 V** supply reaches a cell at **1.60 V**: the **0.20 V** drop exceeds an illustrative **0.10 V** budget |

References: [SKY130 antenna rules](https://skywater-pdk.readthedocs.io/en/main/rules/antenna.html), [OpenROAD electrical/timing repair](https://openroad.readthedocs.io/en/latest/main/src/rsz/README.html), [KLayout LVS](https://www.klayout.de/doc/manual/lvs_intro.html).

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
        - Post_CTS also checks for any remaining electrical violations.

**13: Global Routing:** OpenROAD divides the layout into regions and estimates how many wires each region can accommodate on each metal layer. It then chooses routes that connect the cells while avoiding crowded areas.
    - The main objective it to plan the path that wires will take between cell pins.
    - Electrical violations may return, but further optimized in later stages.

**14: Routing Optimization:** Imporoves/Optimizes the design using the wire estimates from global routing.
    - Insert of adjust buffers on long/heavily loaded connections.
    - Resize gates where stronger drivers are needed.
    - Repair setup and hold timing affected by estimated wires
    - This can be another opportunity to reduce slew and capacitance violations.

**15: Detailed Routing:** Creates the exact metal wires and vias that connect the cell pins. Must obey the specifications.
    - Checks for unrouted connections, shorts (wires that accidentally connect different nets), and design-rule violations.
    - Takes considerably longer than the rest of the steps in terminal.

**16: Antenna Check:** Subsection of Detailed routing. Serves as an OPTIONAL repair loop when violations are found. After this is done, reroute and recheck the physical design to ensure there are no violations found within.
    - Several passes may be done in order to fix violating nets / failing pins.

**17: Repairs and Reroute:** Repairs timing and electrical violations, then updates the physical wiring for the changed design.
    - Resize drivers and insert buffers to address slew and capacitance violations.
    - Preserve existing hold-delay cells and add delay where needed to repair hold timing while maintaining setup timing.
    - Legalize changed cells, update routing guides, and rerun detailed routing to connect added cells and repair routing geometry violations.
    - Fix any antenna violations with diode insertion.

**18: Violation Verification Extraction:** Extracts resistance and capacitance from the repaired, rerouted design to verify whether the repairs worked.
    - Generate a fresh .SPEF file and run STA with the matching netlist, timing library, and SDC constraints.
    - Recheck setup, hold, slew, capacitance, routing connectivity, router geometry, and antenna violations using the appropriate tools/reports.
    - Repeat repairs, rerouting, and verification if violations remain. This closure check comes before finishing; final extraction follows finishing changes that affect parasitics.

**19: Finishing:** Adds the physical structure needed to complete the layout.
    - Filler cells: Occupy gaps between standard cells and maintain continuity of power rails and well structures along rows.
    - Metal fill: Adds extra metal shapes in sparse areas to improve manufacturing density. Density must be measured afterward to verify that the required coverage limits are met.

**20: Parasitic Extraction:** Calculates the resistance and capacitance of the routed connections. Results are stored in .SPEF file, and OpenSTA combines information with final netlist, cell timing libraries, and SDC constraints to check timing again.
    - Demonstrates how actual wiring effects setup/hold slack, signal transition, and capacitive loads.
    - If violations remain, need further work.

**21: GDS Export and Final Verification:**

Export the current layout to **GDSII before running GDS-based DRC, density verification, and LVS**. Exporting a GDS does not mean those checks have passed. In this project, KLayout combines the finished DEF, technology/cell LEFs, SKY130 cell GDS, and layer map to produce `build/openroad/noc_mesh_finished.gds`.

**DRC — Design Rule Checking**

- **Purpose:** Check whether the physical shapes obey manufacturing rules: minimum width, spacing, area, contact/via enclosure, and manufacturing grid/angle requirements.
- **Inputs:** The final GDS with actual standard-cell geometry and the matching PDK rule deck. A DEF/LEF abstract view alone does not contain every transistor-level shape needed for these checks.
- **Project tools:** KLayout **0.30.12** and SKY130's `sky130A_mr.drc`. The completed run enabled FEOL (transistor/contact layers), BEOL (interconnect layers), and off-grid/angle checks. The optional floating-metal rule group was disabled.
- **Outputs:** A `.lyrdb` marker report identifies the rule, cell, and geometry of each finding. The `.log` records execution details and the enabled options. Check the report's marker count after the run finishes; a successful process exit alone does not prove zero violations.
- **Current result:** `noc_mesh_drc_03012.lyrdb` contains **0 markers** for the enabled checks. KLayout 0.30.10 produced false `li.5` findings on the same geometry; record the software version and rule settings with the result.
- **If a check fails:** Inspect its marker in KLayout, identify the source, repair the relevant routing/fill/layout, export a fresh GDS, and rerun verification. For findings inside library cells, check the library and checker compatibility first.

**Metal-Density Verification**

- **Purpose:** Measure the fraction of a checking area covered by metal, including fill: **density = metal-covered area / checking area**. The coverage distribution matters for manufacturing processes such as planarization.
- **Global checks** measure coverage over the whole design boundary. **Local checks** measure smaller windows stepped across the layout; a passing global average can hide a sparse or crowded local area.
- **Minimum density** checks for insufficient metal coverage. **Maximum density** checks for excessive coverage. Apply the limits, window sizes, and exceptions from the selected process/runset; there is no single percentage suitable for every layer or process.
- **Current project checker:** `met_min_ca_density.lydrc` checks whole-design maximum coverage only: **60% for li1 and met1–met4**, and **76% for met5**. Its `*_ca_density` log values are clear-area fractions, so metal coverage is `1 - ca_density`.
- **Current result:** `noc_mesh_density_global.lyrdb` contains **0 markers**. This passes the installed check's global upper limits; **minimum-density and local-window verification remain pending**.
- **Further coverage:** The installed SKY130 Magic `check_density.py` provides minimum/maximum checks using **700 × 700 µm windows stepped by 70 µm**, plus whole-design results. It also checks layers beyond the routing metals. A compatible Magic installation is needed to run that checker.
- **If density fails:** Adjust the fill pattern, allowed sizes, spacing, or coverage area according to the failing rule. Regenerate the fill and GDS, then repeat density verification and DRC. Added metal can affect capacitance, so its timing effects also need verification.

**LVS — Layout Versus Schematic**

- **Purpose:** Extract the circuit represented by the layout and compare it with the intended final netlist. A layout can have legal spacing and widths while containing an incorrect electrical connection.
- **Layout input:** The final GDS and the PDK's device-extraction and connectivity setup, which identify transistors, contacts, wires, and connected nets.
- **Reference input:** Use the matching final physical-design netlist, such as `noc_mesh_finished.v`, together with the SKY130 cell circuit definitions and PDK comparison setup. This reference must account for buffers, resized cells, and antenna diodes added during physical design.
- **Power and physical cells:** Account for VDD/VSS, well/body connections, and physical-only cells according to the chosen PDK LVS setup.
- **Open-source tools:** A common flow uses **Magic** to extract a SPICE netlist and **Netgen** to compare the extracted and reference circuits. KLayout can also perform LVS with a suitable extraction/comparison runset.
- **Typical mismatches:** An open connection splits one intended net into multiple nets; a short joins different nets. Incorrect ports, missing devices, or device-parameter differences can also prevent a match.
- **Outputs and pass condition:** Preserve the extracted circuit netlist and comparison report/log. A pass requires an explicit circuit-match result with no unexplained connectivity, device, parameter, or port mismatches. **LVS has not yet been run for this project.**

**Remaining Final Checks**

- Verify setup/hold timing and slew/capacitance limits at the required operating corners. The current OpenRCX flow extracts routed-wire RC but does not model the added floating `dbFill` rectangles; its SPEF is not proof of fill-aware timing closure.
- Confirm required signal/power connectivity and complete the planned power-integrity checks. LVS verifies circuit correspondence; timing analysis verifies speed requirements.
- After repairs, regenerate the affected physical views and repeat the relevant checks. Preserve the matching GDS, netlist, SPEF, SDC, ODB/DEF checkpoints, tool versions, and reports.

**Current Verification Status**

Reports for these checks are kept under `rtl_gds/reports/drc_lvs/`. The numbered flow above describes the overall process; these numbers do not correspond one-to-one with the project's Tcl filenames.

| Check | Current status | Main report |
|---|---|---|
| Enabled geometry DRC | **Passed — 0 markers**, KLayout 0.30.12 | `noc_mesh_drc_03012.lyrdb` and `.log` |
| Global maximum density | **Passed — 0 markers** under the installed checker | `noc_mesh_density_global.lyrdb` and `.log` |
| Minimum and local-window density | **Pending** | Not yet generated |
| LVS | **Pending** | Not yet generated |
| Fill-aware final timing | **Pending** | Not yet generated |

References: [KLayout DRC](https://www.klayout.de/doc/manual/drc_basic.html), [SKY130 process rules](https://skywater-pdk.readthedocs.io/en/main/rules/periphery.html), [KLayout LVS](https://www.klayout.de/doc/manual/lvs_intro.html), [Netgen](https://github.com/RTimothyEdwards/netgen), [KLayout DRC regression](https://github.com/KLayout/klayout/issues/2423).
