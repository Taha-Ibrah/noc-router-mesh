# Locate the project and SKY130 library.
set PROJECT_DIR [file normalize [file join [file dirname [info script]] ..]]
set CELL_DIR /Users/taha.ibrah/.ciel/sky130A/libs.ref/sky130_fd_sc_hd
set OUTPUT $PROJECT_DIR/build/openroad/noc_mesh_detailed_route

# Load the latest optimized design and its routing guides.
read_liberty $CELL_DIR/lib/sky130_fd_sc_hd__tt_025C_1v80.lib
read_db $PROJECT_DIR/build/openroad/noc_mesh_route_opt.odb

# Remove the unused zero_ net only if it has no connections.
set block [ord::get_db_block]
set zero_net [$block findNet zero_]

if {$zero_net ne "NULL"} {
    if {[llength [$zero_net getITerms]] == 0 &&
        [llength [$zero_net getBTerms]] == 0} {
        odb::dbNet_destroy $zero_net
        puts "Removed unused zero_ net."
    } else {
        error "zero_ has connections; it requires proper tie-cell handling."
    }
}

read_sdc $PROJECT_DIR/build/openroad/noc_mesh_route_opt.sdc

set_propagated_clock [all_clocks]
global_connect

set_routing_layers -signal met1-met5 -clock met3-met5
read_guides $PROJECT_DIR/build/openroad/noc_mesh_route_opt.guide

# Use four CPU threads.
set_thread_count 4

# Create physical wires and vias using the loaded technology rules.
detailed_route \
    -output_drc $PROJECT_DIR/reports/detailed_routing_drc.rpt \
    -verbose 1

# Save the routed design before running optional reports.
write_db ${OUTPUT}.odb
write_def ${OUTPUT}.def
write_verilog ${OUTPUT}.v
write_sdc ${OUTPUT}.sdc

puts "\nDETAILED ROUTING METRICS"
report_design_area

puts "All signal nets routed (1=yes, 0=no): [design_is_routed]"
puts "Router geometry violations: [detailed_route_num_drvs]"

# Check antenna rules using the actual routed geometry.
check_antennas \
    -report_file $PROJECT_DIR/reports/detailed_routing_antenna.rpt

puts "\nDetailed-routing checkpoint saved."

# Settings:
# - Resume routing optimization rather than an older checkpoint.
# - Keep the previous signal and clock routing-layer ranges.
# - Four threads provide modest parallelism.
# - Use the router's default iteration schedule.
# - Timing must be rechecked after routed parasitic extraction.