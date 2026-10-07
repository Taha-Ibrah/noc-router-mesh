Architecture during ASIC (RTL-GDSII) Flow.

Common Terminology:

Process Design Kit (PDK) - Complete collection of files provided by semiconductor foundry.
    - Timing/Power (.lib): Gate delays, power arcs, pin directions for synthesis and STA
    - Behavior Models (.v): Verilog description of standard cells for functional simulation
    - Physical Abstractions (.lef): Boundary sizes and pin locations for Place & Route.
    - Full Layout (.gds/.oat): Exact transistor geometries and silicon mask layers.
    - ETC.




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
- Checks for setup and hold violations.
    - Setup Violation: data arrives too late for clk edge
    - Hold Violation: data changes too quickly
