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
