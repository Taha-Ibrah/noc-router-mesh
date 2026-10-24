# Locate the project and library.
set PROJECT_DIR [file normalize [file join [file dirname [info script]] ..]]
set CELL_DIR /Users/taha.ibrah/.ciel/sky130A/libs.ref/sky130_fd_sc_hd
set OUTPUT $PROJECT_DIR/build/openroad/noc_mesh_antenna_pass2

# Load the latest completed antenna-repair checkpoint.
read_liberty $CELL_DIR/lib/sky130_fd_sc_hd__tt_025C_1v80.lib
read_db $PROJECT_DIR/build/openroad/noc_mesh_antenna_repair.odb
read_sdc $PROJECT_DIR/build/openroad/noc_mesh_antenna_repair.sdc

set_propagated_clock [all_clocks]
set_thread_count 4
global_connect

# Keep the existing routing settings.
set_routing_layers -signal met1-met5 -clock met3-met5
set_global_routing_layer_adjustment met1-met5 0.20

# Attempt another diode-insertion pass with 10% antenna margin.
set diodes_added [repair_antennas sky130_fd_sc_hd__diode_2 \
    -iterations 1 \
    -ratio_margin 10]

global_connect

# Save the repair before detailed rerouting.
write_db ${OUTPUT}.odb
write_def ${OUTPUT}.def
write_verilog ${OUTPUT}.v
write_sdc ${OUTPUT}.sdc
write_guides ${OUTPUT}.guide

check_placement -verbose

puts "\nSECOND ANTENNA REPAIR PASS"
puts "Additional diodes inserted: $diodes_added"
report_design_area
puts "Checkpoint saved. Detailed rerouting is still required."