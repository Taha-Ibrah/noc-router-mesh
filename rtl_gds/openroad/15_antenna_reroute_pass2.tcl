# Locate the project and library.
set PROJECT_DIR [file normalize [file join [file dirname [info script]] ..]]
set CELL_DIR /Users/taha.ibrah/.ciel/sky130A/libs.ref/sky130_fd_sc_hd
set OUTPUT $PROJECT_DIR/build/openroad/noc_mesh_antenna_pass2_routed

# Resume the checkpoint containing the additional diodes.
read_liberty $CELL_DIR/lib/sky130_fd_sc_hd__tt_025C_1v80.lib
read_db $PROJECT_DIR/build/openroad/noc_mesh_antenna_pass2.odb
read_sdc $PROJECT_DIR/build/openroad/noc_mesh_antenna_pass2.sdc

set_propagated_clock [all_clocks]
set_thread_count 4
global_connect

set_routing_layers -signal met1-met5 -clock met3-met5
read_guides $PROJECT_DIR/build/openroad/noc_mesh_antenna_pass2.guide

check_placement -verbose

# Complete detailed routing for the updated design.
detailed_route \
    -output_drc $PROJECT_DIR/reports/antenna_pass2_drc.rpt \
    -drc_report_iter_step 5 \
    -verbose 1

# Save the routed checkpoint before generating reports.
write_db ${OUTPUT}.odb
write_def ${OUTPUT}.def
write_verilog ${OUTPUT}.v
write_sdc ${OUTPUT}.sdc

puts "\nSECOND-PASS ROUTING METRICS"
report_design_area

puts "All signal nets routed (1=yes, 0=no): [design_is_routed]"
puts "Router geometry violations: [detailed_route_num_drvs]"

# Check the actual antenna limits without the repair safety margin.
check_antennas \
    -report_file $PROJECT_DIR/reports/antenna_pass2_antenna.rpt

puts "\nSecond-pass routed checkpoint saved."