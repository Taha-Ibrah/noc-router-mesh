# Locate the project and timing library.
set PROJECT_DIR [file normalize [file join [file dirname [info script]] ..]]
set CELL_DIR /Users/taha.ibrah/.ciel/sky130A/libs.ref/sky130_fd_sc_hd

# Resume the floorplan and load timing constraints.
read_liberty $CELL_DIR/lib/sky130_fd_sc_hd__tt_025C_1v80.lib
read_db $PROJECT_DIR/build/openroad/noc_mesh_floorplan.odb
read_sdc $PROJECT_DIR/constraints/noc_mesh.sdc

# Place pins using horizontal met3 and vertical met2.
# Keep two-track spacing and avoid the corners by 5 um.
place_pins -hor_layers met3 -ver_layers met2 \
    -min_distance 2 -min_distance_in_tracks \
    -corner_avoidance 5

# Save the new checkpoints and reusable pin coordinates.
write_db $PROJECT_DIR/build/openroad/noc_mesh_pins.odb
write_def $PROJECT_DIR/build/openroad/noc_mesh_pins.def
write_pin_placement $PROJECT_DIR/build/openroad/noc_mesh_pin_placement.tcl

puts "\nPin placement saved."

# Settings and rationale
# - Horizontal layer met3: matches the PDK's horizontal routing direction.
# - Vertical layer met2: matches the PDK's vertical routing direction.
#   Together they provide complementary directions for pin access.
# - Minimum distance 2 tracks: initial pin separation while leaving capacity
#   for 2,114 interface bits; revisit if pin access becomes congested.
# - Corner avoidance 5 um: leaves space where neighboring edges meet.
# - Input floorplan ODB: preserves the established geometry and tracks.
# - Pin-coordinate Tcl export: records positions for reproducible placement.
# There are no explicit signal-to-edge assignments or interface groups here.
# The tool chooses locations subject to the selected layers and spacing.
#
# SKY130 components used
# - PDK installation: sky130A; high-density library: sky130_fd_sc_hd.
# - The floorplan ODB carries technology and cell information originally
#   loaded from sky130_fd_sc_hd__nom.tlef and sky130_fd_sc_hd.lef.
# - met2: vertical, 0.46 um track pitch, 0.14 um default wire width.
# - met3: horizontal, 0.68 um track pitch, 0.30 um default wire width.
#   Pin shapes also depend on applicable minimum-area and other rules.
# - sky130_fd_sc_hd__tt_025C_1v80.lib is reloaded for timing/electrical
#   models at typical process, 25 C, and 1.80 V.
# - noc_mesh.sdc supplies the clock and external-interface assumptions.
# Full cell GDS layouts are used later when generating the final GDS.
