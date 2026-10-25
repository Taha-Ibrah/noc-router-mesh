# ASIC File Guide

Purpose and use cases of the files used in this project's ASIC flow. Ordinary RTL and programming source files, such as `.sv`, `.py`, `.cpp`, and `.h`, are omitted. Generated Verilog netlists are included because they are important ASIC-flow outputs.

Project paths below are relative to `rtl_gds/`. PDK files come from `~/.ciel/sky130A/`.

## Physical Design and Netlists

| File type | Purpose | Use case in this project |
|---|---|---|
| `.odb` | Binary OpenDB checkpoint containing loaded technology and cell LEF information, connectivity, placement, and the routing available at that stage. | Resume a stage or inspect the layout in OpenROAD GUI using `read_db`. Timing libraries and constraints still need to be loaded separately for timing analysis. |
| `.def` | Design Exchange Format: text describing the die, rows, cell instances, placement, pins, nets, and any saved routing. | Exchange the physical design with other tools. Import into KLayout with the technology and standard-cell LEFs. A floorplan DEF has less information than a detailed-routing DEF. |
| `.v` — generated netlist | Verilog describing instantiated cells and their connections. The mapped netlist uses SKY130 cell names. | Supply the circuit to physical design, STA, or gate-level simulation. Use a netlist matching the physical checkpoint, since optimization can add buffers, resize cells, and insert diodes. It does not contain wire geometry. |
| `.guide` | Approximate regions and metal layers assigned to nets by global routing. | Guide detailed routing. Guides describe where wires should run; they are not the completed wire-and-via layout. |
| `.segments` | Saved global-route segments in OpenROAD's routing format. | Restore global-routing information for further analysis or incremental routing with `read_global_route_segments`. These are global routes, not final detailed wires. |
| `.gds` / `.gdsii` | GDSII layout geometry arranged in cells and layers. | Export a physical layout for viewing or verification. Merge standard-cell GDS geometry into the chip layout to include cell internals. The PDK's `sky130_fd_sc_hd.gds` contains library cells, not your complete NoC. |
| `.oas` / `.oasis` | OASIS layout geometry, an alternative to GDSII that often stores layouts more compactly. | Exchange or inspect layouts in tools such as KLayout when the chosen flow supports OASIS. |

An `.odb`, `.def`, or `.gds` filename does not prove that the design passes verification. Check the corresponding reports.

## Timing and Parasitics

| File type | Purpose | Use case in this project |
|---|---|---|
| `.sdc` | Synopsys Design Constraints: clocks, input/output delays, uncertainties, loads, transitions, timing exceptions, and other analysis constraints. | Tell OpenSTA/OpenROAD what timing and electrical conditions to check. `constraints/noc_mesh.sdc` is an input; exported stage-specific SDCs preserve the settings used for that checkpoint. It contains requirements, not measured results. |
| `.lib` | Liberty cell characterization: timing arcs, pin capacitance, transition/load limits, and power data for a particular process, voltage, and temperature corner. | Map logic to SKY130 cells and calculate cell delays and electrical limits. Your current library is `sky130_fd_sc_hd__tt_025C_1v80.lib`. It does not contain the cells' full physical geometry. |
| `.spef` | Standard Parasitic Exchange Format: interconnect resistance and capacitance, including coupling capacitance where represented. | Combine with the matching netlist/checkpoint, Liberty library, and SDC for timing analysis. The project's `_est.spef` files are global-route estimates; post-route extraction generates parasitics from detailed wires. |
| `.sdf` | Standard Delay Format: calculated cell/interconnect delays and timing checks for simulation back-annotation. | Optional gate-level timing simulation. This flow has not generated an SDF yet; it does not replace SPEF-based STA. |

## Scripts and Build Control

| File type | Purpose | Use case in this project |
|---|---|---|
| `.tcl` | Tcl commands interpreted by a particular tool, with that tool's additional commands. | Run OpenROAD stages and OpenSTA analysis. Scripts in `openroad/` create checkpoints and reports. A generated Tcl file, such as `noc_mesh_pin_placement.tcl`, can instead record reusable pin coordinates. |
| `.ys` | Yosys command script. | Run synthesis and technology mapping using files such as `synth/synth_generic.ys` and `synth/map_sky130.ys`. Yosys script syntax is distinct from Tcl. |
| `Makefile` / `.mk` | Build targets, commands, and dependencies. | Run simulation targets and rebuild what changed. Handwritten Makefiles provide user-facing targets; generated `.mk` files under `sim_build/` support the simulator build. |
| `.gitignore` | Patterns specifying which untracked files Git should ignore. | Keep selected generated files out of future commits. It does not delete local files or automatically untrack files already committed. |

## Reports and Simulation Outputs

| File type | Purpose | Use case in this project |
|---|---|---|
| `.log` | Tool execution transcript: commands/messages, warnings, errors, progress, runtime, and printed metrics. | Check whether a stage completed and diagnose failures. For example, `reports/antenna_reroute_pass2.log` records the second antenna rerouting run. |
| `.rpt` | A focused report whose contents depend on the generating command. | Inspect timing paths, slew/capacitance failures, routing DRC, or antenna ratios. Examples include `post_cts_hold.rpt` and `antenna_pass2_antenna.rpt`. |
| `.rpt-<N>.rpt` | This project's filename pattern for an intermediate router DRC report from iteration N. | Locate the nets, layers, and coordinates of violations during routing. Old reports can contain violations that the final run fixed. |
| `.xml` | Structured test results; the project's `results.xml` files summarize simulation test cases and failures. | Review or automatically process Cocotb test outcomes. These are simulation results, not physical-layout verification reports. |
| `.json` | Tool-specific structured configuration or results. | Store machine-readable metrics or settings when a tool generates or consumes JSON. The detailed-placement script requests a JSON report, but that report was not generated in its recorded run. |
| `.vcd` / `.fst` | Signal waveform traces from simulation. | Inspect flits, FIFO state, and control signals in GTKWave when waveform dumping is enabled. These are optional outputs and are not currently present in the scanned project. |
| `.md` | Markdown documentation. | Read architecture, flow explanations, file descriptions, and stage metrics under `docs/`. |
| `.png` | Raster image. | Store diagrams or exported layout screenshots, such as `docs/images/mesh_diagram.png`. |

In the completed detailed-routing runs, an empty final DRC `.rpt` accompanies a reported zero router-violation count. Confirm completion in the `.log`; an empty file alone is not proof of a successful run.

## PDK and Application Files

These supply technology/library information or application settings. Most are outside the project repository.

| File type | Purpose | Use case |
|---|---|---|
| `.lef` | Library Exchange Format: technology definitions or physical cell abstracts, depending on the file. | Load routing layers, sites, cell dimensions, pins, and obstructions for place-and-route or DEF viewing. LEF cell abstracts do not contain the full transistor layout. |
| `.tlef` | A technology LEF, conventionally named with a different extension. | Load the SKY130 layer, via, and routing-rule definitions before the cell LEF. If a viewer filters out `.tlef`, make a `.lef`-named copy without changing the PDK original. |
| `.mag` | Magic's native cell-layout format. | Open and edit cell geometry in Magic. All referenced cells must be available, for example through the PDK's standard-cell `mag/` directory. |
| `.magicrc` | Magic startup configuration. | Load the correct technology, supporting Tcl, library search paths, and defaults. This PDK provides `libs.tech/magic/sky130A.magicrc`; its `PDK_ROOT` setting must resolve to the installed PDK location. |
| `.tech` | Magic technology definitions, including layer interpretation and technology-specific rules. | Interpret SKY130 geometry and perform the checks/extraction supported by the loaded technology. This is different from a technology LEF. |
| `.lyt` | KLayout technology configuration, including reader settings and layer mapping. | Select a configured SKY130 environment. The installed file is `libs.tech/klayout/tech/sky130A.lyt`. |
| `.lyp` | KLayout layer display properties, such as colors, patterns, and visibility. | Make layers easier to inspect. This file controls presentation rather than physical circuit geometry. |
| `.lydrc` / `.lylvs` | KLayout DRC or LVS runsets, where supplied by the selected verification flow. | Run the associated rule checks or layout-versus-netlist comparison. A `.lyt` or `.lyp` alone is not a verification rule deck. |
| `.spice` / `.sp` | SPICE circuit netlists or device-model definitions, depending on the file. | Represent an extracted circuit, provide reference subcircuits for LVS, or simulate a circuit with the required device models. |
| `.cdl` | Circuit Description Language: a SPICE-like transistor-level circuit description. | Supply reference cell circuits for LVS. The installed standard-cell library includes `libs.ref/sky130_fd_sc_hd/cdl/sky130_fd_sc_hd.cdl`. |
| `.rules` / `rules.openrcx.*` | Precomputed extraction calibration data for a process and RC corner. | Tell OpenRCX how to calculate wire resistance and capacitance. The installed files can end in `.calibre`, `.magic`, or `.spef_extractor`; those names identify calibration variants, not a requirement to execute those other tools. |

## Generated Simulator Build Files

These occur under `tb/sim_build/` and `rtl_gds/flattened_tb/sim_build/`.

| File | Purpose and use case |
|---|---|
| `.o` | Compiled object code linked into the simulation executable. |
| `.a` | Archive of compiled objects used when linking the simulation executable. |
| `.d` | Compiler dependency information used to decide which generated files need rebuilding. |
| `.gch` | Precompiled header cache that speeds up compilation. |
| `.dat` | Tool-specific metadata; `Vtop__verFiles.dat` records Verilator build/source information. |
| `Vtop` | Generated simulator executable. The test flow runs it; it is not an ASIC layout file. |

## Which Files to Open

| Task | File combination |
|---|---|
| View the current layout in OpenROAD GUI | `build/openroad/noc_mesh_antenna_pass2_routed.odb` |
| Analyze post-route timing | Matching checkpoint/netlist + `.lib` + `.sdc` + extracted `.spef` |
| View a DEF in KLayout | Design `.def` + technology LEF + standard-cell LEF |
| Inspect full geometry in KLayout | Merged chip `.gds`/`.oas`; technology/layer-display settings as appropriate |
| Inspect full geometry in Magic | SKY130 startup/technology configuration + merged GDS or the complete MAG hierarchy |
| Run LVS using extracted netlists | Extracted circuit netlist + reference netlist/library circuits + the selected tool's PDK setup/rules |

`_before_reroute` identifies an intermediate checkpoint whose changed connections still require detailed routing. In the current flow, `noc_mesh_antenna_pass2.*` saves added diodes before that routing, while `noc_mesh_antenna_pass2_routed.*` saves the completed routing result. Keep stage-matched files together and read the reports to determine verification status.

## References

- [OpenDB database documentation](https://openroad.readthedocs.io/en/latest/main/src/odb/README.html)
- [OpenRCX extraction and SPEF documentation](https://openroad.readthedocs.io/en/latest/main/src/rcx/README.html)
- [KLayout LEF/DEF import](https://klayout.de/doc/about/lef_def_import.html)
- [SKY130 PDK file types](https://skywater-pdk.readthedocs.io/en/main/contents/file_types.html)
