## OpenSTA

| Metric | Value |
|---|---:|
| Analysis stage | Pre-layout |
| Clock period | 20.000 ns |
| Target frequency | 50.00 MHz |
| Constraint coverage | PASS |
| Setup status | PASS |
| Worst setup slack | +3.254 ns |
| Setup WNS | 0.000 ns |
| Setup TNS | 0.000 ns |
| Hold status | PASS |
| Worst hold slack | +0.024 ns |
| Hold WNS | 0.000 ns |
| Hold TNS | 0.000 ns |
| Slew violations | 50,087 |
| Capacitance violations | 758 |
| Fanout violations | 0 |
| Electrical status | FAIL |

## Floorplanning

| Metric | Value |
|---|---:|
| Die dimensions | 1,496.060 × 1,496.060 µm |
| Die area | 2.2382 mm² |
| Core dimensions | 1,455.440 × 1,452.480 µm |
| Core area | 2,113,997.491 µm² |
| Cell area | 742,041.677 µm² |
| Target utilization | 35.00% |
| Effective utilization | 35.10% |
| Cell instances | 53,947 |
| Cell rows | 534 |
| Sites per row | 3,164 |
| Placement site | unithd |
| Site dimensions | 0.46 × 2.72 µm |
| Requested core margin | 20 µm |

### Files

Paths are relative to `rtl_gds/`.

| File | Role |
|---|---|
| `openroad/01_floorplan.tcl` | Stage script (input) |
| `build/openroad/noc_mesh_floorplan.def` | Generated floorplan DEF |
| `build/openroad/noc_mesh_floorplan.odb` | Generated OpenROAD checkpoint |
| `reports/floorplan.log` | Run log |

## Pin Placement

| Metric | Value |
|---|---:|
| Status | Completed |
| Available pin slots | 5,414 |
| Pins placed | 2,114 / 2,114 |
| Pins without locations | 0 |
| Pins with connected internal cells | 2,114 |
| Pins without connected internal cells | 0 |
| Pins on met2 | 1,314 |
| Pins on met3 | 800 |
| Macro blocks | 0 |
| Estimated I/O HPWL (cells unplaced) | 1,907,117.12 µm |
| Exported place_pin commands | 2,114 |

### Files

Paths are relative to `rtl_gds/`.

| File | Role |
|---|---|
| `openroad/02_pin_placement.tcl` | Stage script (input) |
| `build/openroad/noc_mesh_pins.def` | Generated pin-placement DEF |
| `build/openroad/noc_mesh_pins.odb` | Generated OpenROAD checkpoint |
| `build/openroad/noc_mesh_pin_placement.tcl` | Generated pin-coordinate script |
| `reports/pin_placement.log` | Run log |

## Tap/Endcap Insertion

| Metric | Value |
|---|---:|
| Status | Completed |
| Tap cells inserted | 28,140 |
| Endcaps inserted | 1,068 |
| Total physical cells added | 29,208 |
| Total instances after insertion | 83,155 |
| Inserted cells fixed in place | 29,208 / 29,208 |
| Tap insertion distance setting | 14 µm |
| Tap cell | sky130_fd_sc_hd__tapvpwrvgnd_1 |
| Endcap cell | sky130_fd_sc_hd__decap_3 |
| Cell rows | 534 |
| Endcaps per row | 2 |

### Files

Paths are relative to `rtl_gds/`.

| File | Role |
|---|---|
| `openroad/03_tapcell.tcl` | Stage script (input) |
| `build/openroad/noc_mesh_taps.def` | Generated tap/endcap DEF |
| `build/openroad/noc_mesh_taps.odb` | Generated OpenROAD checkpoint |
| `reports/tapcell.log` | Run log |

## PDN Generation

| Metric | Value |
|---|---:|
| Status | Completed |
| Grid generation runtime | 0.47 s |
| Voltage domain | CORE |
| Power grid | core_grid |
| Power / ground nets | VDD / VSS |
| VDD connectivity (floorplanning check) | PASS |
| VSS connectivity (floorplanning check) | PASS |
| Special nets | 2 |
| Total instances | 83,155 |
| Top-level pin bits, including power/ground | 2,116 |
| met1 rail width | 0.48 µm |
| met4 strap width / pair pitch | 1.60 / 27.14 µm |
| met5 strap width / pair pitch | 1.60 / 27.20 µm |
| Power terminal layer | met5 |
| IR-drop analysis | Not run |

### Files

Paths are relative to `rtl_gds/`.

| File | Role |
|---|---|
| `openroad/04_pdn.tcl` | Stage script (input) |
| `build/openroad/noc_mesh_pdn.def` | Generated DEF with power grid |
| `build/openroad/noc_mesh_pdn.odb` | Generated OpenROAD checkpoint |
| `reports/pdn.log` | Run log |
| `reports/pdn_failed_vias.rpt` | Optional failed-via report; not generated in this run |

## Global Placement

| Metric | Value |
|---|---:|
| Status | Completed |
| Timing model | Placement-estimated parasitics; ideal clock |
| Clock period / target frequency | 20.000 ns / 50.00 MHz |
| Setup status | PASS |
| Worst setup slack | +8.850 ns |
| Setup TNS | 0.000 ns |
| Hold status | PASS |
| Worst hold slack | +0.064 ns |
| Hold TNS | 0.000 ns |
| Design area | 824,140 µm² |
| Reported utilization | 39% |
| Total instances | 87,191 |
| Placed movable instances | 57,983 |
| Fixed instances | 29,208 |
| Initial placement density target | 0.50 |
| Global placement iterations | 1,534 |
| Final estimated HPWL | 3,968,923.96 µm |
| Final weighted congestion | 1.0584 |
| Routability congestion target | Not reached |
| Final slew/capacitance violation counts | Not reported |

### Files

Paths are relative to `rtl_gds/`.

| File | Role |
|---|---|
| `openroad/05_global_placement.tcl` | Stage script (input) |
| `build/openroad/noc_mesh_global_place.def` | Generated global-placement DEF |
| `build/openroad/noc_mesh_global_place.odb` | Generated OpenROAD checkpoint |
| `build/openroad/noc_mesh_global_place.v` | Generated netlist after placement optimization |
| `reports/global_placement.log` | Run log |

## Placement Optimization

| Metric | Value |
|---|---:|
| Status | Completed |
| Timing model | Placement-estimated parasitics; ideal clock |
| Repair runtime | 1.78 s |
| Buffers inserted | 4 |
| Nets repaired | 4 |
| Existing cells resized | 0 |
| Initial slew violations | 1 |
| Initial capacitance violations (precheck) | 3 |
| Final slew violations | 0 |
| Final capacitance violations | 0 |
| Final fanout violations | 0 |
| Electrical status | PASS |
| Clock period / target frequency | 20.000 ns / 50.00 MHz |
| Setup status | PASS |
| Worst setup slack | +8.850 ns |
| Setup TNS | 0.000 ns |
| Hold status | PASS |
| Worst hold slack | +0.064 ns |
| Hold TNS | 0.000 ns |
| Design area | 824,212 µm² |
| Reported utilization | 39% |
| Total instances | 87,195 |
| Placed movable instances | 57,987 |
| Fixed instances | 29,208 |

### Files

Paths are relative to `rtl_gds/`.

| File | Role |
|---|---|
| `openroad/06_placement_optimization.tcl` | Stage script (input) |
| `build/openroad/noc_mesh_place_opt.def` | Generated optimized-placement DEF |
| `build/openroad/noc_mesh_place_opt.odb` | Generated OpenROAD checkpoint |
| `build/openroad/noc_mesh_place_opt.v` | Generated optimized netlist |
| `reports/placement_optimization.log` | Run log |

## Detailed Placement

| Metric | Value |
|---|---:|
| Status | Completed |
| Timing model | Placement-estimated parasitics; ideal clock |
| Placement violations before / after | 1,411 / 0 |
| Illegal cells before / after | 327 / 0 |
| Average cell displacement | 2.0 µm |
| Maximum cell displacement | 25.4 µm |
| Legalized estimated HPWL | 4,083,390.8 µm |
| Reported HPWL increase | 3% |
| VDD / VSS connectivity | PASS / PASS |
| Worst setup slack | +8.830 ns |
| Setup TNS | 0.000 ns |
| Worst hold slack | +0.066 ns |
| Hold TNS | 0.000 ns |
| Slew violations | 5 |
| Capacitance violations | 1 |
| Design area | 824,212 µm² |
| Reported design utilization | 39% |
| Total instances | 87,195 |

### Files

Paths are relative to `rtl_gds/`.

| File | Role |
|---|---|
| `openroad/07_detailed_placement.tcl` | Stage script (input) |
| `build/openroad/noc_mesh_detailed_place.def` | Generated legalized-placement DEF |
| `build/openroad/noc_mesh_detailed_place.odb` | Generated OpenROAD checkpoint |
| `build/openroad/noc_mesh_detailed_place.v` | Generated netlist |
| `reports/detailed_placement.log` | Run log |
| `reports/detailed_placement.json` | Requested report; not generated in this run |

## Clock Tree Synthesis

| Metric | Value |
|---|---:|
| Status | Completed; hold repair required |
| Timing model | Placement-estimated parasitics; propagated clock |
| Clock period / target frequency | 20.000 ns / 50.00 MHz |
| Clock roots | 1 |
| Original clock sinks | 17,408 |
| Clock buffers inserted | 1,854 |
| Clock buffer type used | sky130_fd_sc_hd__clkbuf_16 |
| Dummy balancing loads inserted | 1,593 |
| Clock subnets created | 1,854 |
| Leaf buffers | 1,703 |
| Maximum reported clock-tree level | 7 |
| CTS runtime | 4.92 s |
| Final placement violations | 0 |
| VDD / VSS connectivity | PASS / PASS |
| Setup status | PASS |
| Worst setup slack | +7.973 ns |
| Setup TNS | 0.000 ns |
| Hold status | FAIL |
| Worst hold slack | -1.661 ns |
| Hold TNS | -8,002.737 ns |
| Reported setup skew (includes uncertainty) | 0.36 ns |
| Reported hold skew (includes uncertainty) | -0.21 ns |
| Slew violations | 5 |
| Capacitance violations | 1 |
| Electrical status | FAIL |
| Design area | 885,696 µm² |
| Reported design utilization | 42% |
| Total instances | 90,642 |
| Placed movable instances | 61,434 |
| Fixed instances | 29,208 |

### Files

Paths are relative to `rtl_gds/`.

| File | Role |
|---|---|
| `openroad/08_cts.tcl` | Stage script (input) |
| `build/openroad/noc_mesh_cts.def` | Generated DEF with clock tree |
| `build/openroad/noc_mesh_cts.odb` | Generated OpenROAD checkpoint |
| `build/openroad/noc_mesh_cts.v` | Generated netlist with clock cells |
| `build/openroad/noc_mesh_cts.sdc` | Generated constraints with propagated clock |
| `reports/cts.log` | Run log and timing results |
| `reports/cts_summary.rpt` | Clock-tree counts and cell types |
