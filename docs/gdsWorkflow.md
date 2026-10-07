# Why There Are Two RTL Versions

The `rtl/` folder contains the finalized, readable SystemVerilog used for understanding and normal simulation.

The `rtl_gds/flattened_rtl/` folder contains the same NoC design with complex ports flattened into packed vectors so native Yosys can synthesize it. This version is used for the RTL-to-GDS workflow, while `rtl/` remains the clean reference design.

## Flattened RTL Changes

- Unpacked arrays and custom-type module ports were replaced with packed `logic` vectors.
- Base offsets and `+:` part-selects are used to access individual ports, flits, routers, requests, and grants within those vectors.
- Explicit widths and index conversions were added where Yosys or Verilator required them.
- The routing, buffering, arbitration, crossbar, and mesh behavior remains the same.

## Flattened Testbench Changes

- Cocotb reads and writes complete packed buses instead of directly indexing SystemVerilog arrays.
- Small packing and unpacking helpers select the correct flit, port, request, grant, or mesh coordinate.
- The Makefile reads RTL from `flattened_rtl/`; the tests still verify the same design behavior as the readable version.


## RTL-to-GDS Roadmap

**RTL**
→ describes WHAT the hardware does
**.lib**
→ describes HOW FAST the actual SKY130 cells are
**.sdc**
→ describes HOW FAST YOU REQUIRE the design to run
**Yosys**
→ converts your RTL into a gate-level netlist using standard cells
**OpenSTA**
→ checks whether the synthesized netlist can meet the timing requirements in the .sdc using delays from the .lib
**.lef**
→ describes the PHYSICAL size, pins, and routing blockages of standard cells
**OpenROAD**
→ physically places the cells, builds the clock tree, routes wires, and optimizes timing/congestion
**.spef**
→ describes the parasitic resistance/capacitance of the routed wires
**post-route STA**
→ checks timing again using the REAL wire delays after routing
**.gds**
→ final physical layout database used for fabrication
**KLayout**
→ lets you visually inspect the final GDS layout



**1: Synthesizing with Yosys**
- To synthesize the rtl, first ensure to edit/redesign rtl syntax to be compatible with Native Yosys
- Synthesized Netlist: Digital circuit descriptionconverted from abstract hardware code (Verilog or VHDL). It replaced high-level constructs with basic components (AND, OR, FF, etc)

**2: Choose PDK and standard-cell library**
- The current Yosys output uses generic logic and is not yet tied to a fabrication process.
- Choose a PDK, such as SKY130, and a standard-cell library, such as `sky130_fd_sc_hd`.
- The `.lib` file describes each cell's logic function, delay, power, and timing limits at a specific process corner.
- Update the Yosys script to use `dfflibmap` and `abc` with that `.lib`. This replaces generic gates and flip-flops with real cells from the selected library.
- The technology-mapped Verilog netlist becomes the input to timing analysis and physical design.

**3: Create a constraints (.sdc) file**
- Define the clock name, clock port, and required clock period with `create_clock`.
- Add realistic input delays, output delays, clock uncertainty, transition limits, and output loads.
- Identify special paths when necessary, such as treating the asynchronous reset as a false path.
- The SDC states the timing target; it does not change the RTL's behavior.

**4: OpenSTA**
- Read the technology-mapped netlist, matching `.lib`, and `.sdc` constraints.
- Check setup and hold timing, worst slack, clock paths, and unconstrained paths.
- Positive slack means the analyzed path meets its timing requirement; negative slack is a timing violation that must be corrected.
- This first timing check occurs before physical routing, so wire delays are estimated rather than extracted from a layout.

**5: OpenROAD**
- Read the mapped netlist, SDC, timing `.lib`, technology LEF, and standard-cell LEF files.
- Create the floorplan, place I/O pins and standard cells, build the power grid, and perform clock-tree synthesis.
- Route the signal wires, extract their parasitic resistance and capacitance into SPEF, and run post-route timing analysis.
- Produce physical-design results such as DEF, SPEF, timing reports, an updated netlist, and the final GDS layout.
- Resolve placement, congestion, routing, setup, and hold violations before treating the layout as complete.

**6: KLayout**
- Open the generated GDS to inspect the die, standard cells, power grid, clock tree, routing, and I/O pins.
- Run the PDK's DRC deck to check that the layout follows fabrication geometry rules.
- LVS should also be run with the appropriate PDK flow to confirm that the physical layout matches the synthesized circuit.
