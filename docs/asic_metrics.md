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

## Post-CTS Optimization

| Metric | Value |
|---|---:|
| Status | Completed |
| Timing model | Placement-estimated parasitics; propagated clock |
| Initial hold-violating endpoints | 8,106 |
| Hold buffers inserted | 2,997 |
| Cells resized during electrical repair | 1 |
| Cells resized during hold repair | 49 |
| Final placement violations | 0 |
| VDD / VSS connectivity | PASS / PASS |
| Worst setup slack | +7.973 ns |
| Setup WNS / TNS | 0.000 / 0.000 ns |
| Worst hold slack after legalization | +0.042 ns |
| Hold WNS / TNS | 0.000 / 0.000 ns |
| Setup / hold status | PASS / PASS |
| Slew violations | 0 |
| Capacitance violations | 0 |
| Electrical status | PASS |
| Design area | 916,185 µm² |
| Reported design utilization | 43% |
| Total instances | 93,639 |

### Files

Paths are relative to `rtl_gds/`.

| File | Role |
|---|---|
| `openroad/09_post_cts_optimization.tcl` | Stage script (input) |
| `build/openroad/noc_mesh_post_cts.def` | Generated post-CTS DEF |
| `build/openroad/noc_mesh_post_cts.odb` | Generated post-CTS OpenROAD checkpoint |
| `build/openroad/noc_mesh_post_cts.v` | Generated post-CTS V |
| `build/openroad/noc_mesh_post_cts.sdc` | Generated post-CTS SDC |
| `reports/post_cts_optimization.log` | Run log and metrics |
| `reports/post_cts_hold.rpt` | Detailed hold-path report |

## Global Routing

| Metric | Value |
|---|---:|
| Status | Completed |
| Timing model | Global-routing-estimated parasitics; propagated clock |
| Signal routing layers | met1–met5 |
| Clock routing layers | met3–met5 |
| Routing capacity reduction setting | 20% |
| Routed nets | 63,896 |
| Final routing overflow | 0 |
| Average routing resource usage | 45.53% |
| Estimated wire length | 6,642,981 µm |
| Planned vias | 591,625 |
| Global routing runtime | 13 s |
| Worst setup slack | +7.412 ns |
| Setup TNS | 0.000 ns |
| Worst hold slack | +0.052 ns |
| Hold TNS | 0.000 ns |
| Setup / hold status | PASS / PASS |
| Slew violations | 1,225 |
| Capacitance violations | 33 |
| Electrical status | FAIL |
| Reset net terminals before reset repair | 1,109 |
| Design area | 916,185 µm² |
| Reported design utilization | 43% |
| Total instances | 93,639 |

### Files

Paths are relative to `rtl_gds/`.

| File | Role |
|---|---|
| `openroad/10_global_routing.tcl` | Stage script (input) |
| `build/openroad/noc_mesh_global_route.def` | Generated global-routing DEF |
| `build/openroad/noc_mesh_global_route.odb` | Generated global-routing OpenROAD checkpoint |
| `build/openroad/noc_mesh_global_route.v` | Generated global-routing V |
| `build/openroad/noc_mesh_global_route.sdc` | Generated global-routing SDC |
| `build/openroad/noc_mesh_global_route.guide` | Routing guides |
| `build/openroad/noc_mesh_global_route.segments` | Global-route segments |
| `build/openroad/noc_mesh_global_route_est.spef` | Estimated global-route parasitics |
| `reports/global_routing.log` | Run log, congestion table, and timing metrics |
| `reports/global_route_congestion.rpt` | Requested report; not generated in this run |

## Routing Optimization

| Metric | Value |
|---|---:|
| Status | Completed; electrical repair incomplete |
| Timing model | Global-routing-estimated parasitics; propagated clock |
| Electrical-repair buffers inserted | 33 |
| Cells resized during electrical repair | 43 |
| Nets repaired during electrical repair | 36 |
| Additional hold buffers inserted | 3 |
| Final placement violations | 0 |
| VDD / VSS connectivity | PASS / PASS |
| Final routing overflow | 0 |
| Routed nets | 63,932 |
| Estimated wire length | 6,651,827 µm |
| Planned vias | 592,547 |
| Worst setup slack | +7.288 ns |
| Setup TNS | 0.000 ns |
| Worst hold slack | +0.060 ns |
| Hold TNS | 0.000 ns |
| Setup / hold status | PASS / PASS |
| Slew violations | 43 |
| Capacitance violations | 11 |
| Electrical status | FAIL |
| Design area | 917,145 µm² |
| Reported design utilization | 43% |
| Total instances | 93,675 |

### Files

Paths are relative to `rtl_gds/`.

| File | Role |
|---|---|
| `openroad/11_routing_optimization.tcl` | Stage script (input) |
| `build/openroad/noc_mesh_route_opt.def` | Generated optimized-routing DEF |
| `build/openroad/noc_mesh_route_opt.odb` | Generated optimized-routing OpenROAD checkpoint |
| `build/openroad/noc_mesh_route_opt.v` | Generated optimized-routing V |
| `build/openroad/noc_mesh_route_opt.sdc` | Generated optimized-routing SDC |
| `build/openroad/noc_mesh_route_opt.guide` | Updated routing guides |
| `build/openroad/noc_mesh_route_opt.segments` | Updated global-route segments |
| `build/openroad/noc_mesh_route_opt_est.spef` | Estimated global-route parasitics |
| `reports/routing_optimization.log` | Run log and metrics |
| `reports/routing_optimization_electrical.rpt` | Remaining slew and capacitance violations |

## Detailed Routing

| Metric | Value |
|---|---:|
| Status | Completed; antenna repair required |
| All signal nets routed | YES |
| Final router geometry violations | 0 |
| Antenna-violating nets | 1,038 |
| Antenna-violating pins | 1,685 |
| Antenna status | FAIL |
| Final routing iteration label | 39 |
| Routed wire length | 5,384,826 µm |
| Routed vias | 670,996 |
| Detailed-router reported runtime | 12,657.19 s |
| Reported peak memory | 4,294.33 MB |
| Design area | 917,145 µm² |
| Reported design utilization | 43% |
| Total instances | 93,675 |
| Extracted post-route setup / hold analysis | Not run |
| Post-route slew / capacitance counts | Not measured |

### Files

Paths are relative to `rtl_gds/`.

| File | Role |
|---|---|
| `openroad/12_detailed_routing.tcl` | Stage script (input) |
| `build/openroad/noc_mesh_detailed_route.def` | Generated detailed-routing DEF |
| `build/openroad/noc_mesh_detailed_route.odb` | Generated detailed-routing OpenROAD checkpoint |
| `build/openroad/noc_mesh_detailed_route.v` | Generated detailed-routing V |
| `build/openroad/noc_mesh_detailed_route.sdc` | Generated detailed-routing SDC |
| `reports/detailed_routing.log` | Run log and final routing metrics |
| `reports/detailed_routing_drc.rpt` | Final router DRC report; empty (0 violations) |
| `reports/detailed_routing_antenna.rpt` | Antenna report before repair |

## Antenna Repair — Pass 1

| Metric | Value |
|---|---:|
| Status | Completed; antenna repair incomplete |
| Diodes inserted | 2,499 |
| Diode cell | sky130_fd_sc_hd__diode_2 |
| Initial / final antenna-violating nets | 1,038 / 62 |
| Initial / final antenna-violating pins | 1,685 / 80 |
| Antenna status | FAIL |
| All signal nets routed | YES |
| Final router geometry violations | 0 |
| Final routing iteration label | 60 |
| Routed wire length | 5,384,349 µm |
| Routed vias | 690,585 |
| Detailed-router reported runtime | 35,938.54 s |
| Reported peak memory | 4,185.58 MB |
| Design area | 923,398 µm² |
| Reported design utilization | 44% |
| Total instances | 96,174 |
| Extracted post-route setup / hold analysis | Not run |
| Post-route slew / capacitance counts | Not measured |

### Files

Paths are relative to `rtl_gds/`.

| File | Role |
|---|---|
| `openroad/13_antenna_repair.tcl` | Stage script (input) |
| `build/openroad/noc_mesh_antenna_repair_before_reroute.def` | Intermediate diode-insertion DEF |
| `build/openroad/noc_mesh_antenna_repair_before_reroute.odb` | Intermediate diode-insertion OpenROAD checkpoint |
| `build/openroad/noc_mesh_antenna_repair_before_reroute.sdc` | Intermediate diode-insertion SDC |
| `build/openroad/noc_mesh_antenna_repair_before_reroute.guide` | Intermediate routing guides |
| `build/openroad/noc_mesh_antenna_repair.def` | Generated routed antenna-repair DEF |
| `build/openroad/noc_mesh_antenna_repair.odb` | Generated routed antenna-repair OpenROAD checkpoint |
| `build/openroad/noc_mesh_antenna_repair.v` | Generated routed antenna-repair V |
| `build/openroad/noc_mesh_antenna_repair.sdc` | Generated routed antenna-repair SDC |
| `reports/antenna_repair.log` | Diode-insertion and rerouting log |
| `reports/antenna_repair_drc.rpt` | Final router DRC report; empty (0 violations) |
| `reports/antenna_repair_drc.rpt-*.rpt` | Historical DRC reports from routing iterations |
| `reports/antenna_repair_antenna.rpt` | Latest remaining antenna violations |