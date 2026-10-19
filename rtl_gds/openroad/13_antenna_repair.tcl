# Locate the project and SKY130 library.
set PROJECT_DIR [file normalize [file join [file dirname [info script]] ..]]
set CELL_DIR /Users/taha.ibrah/.ciel/sky130A/libs.ref/sky130_fd_sc_hd
set OUTPUT $PROJECT_DIR/build/openroad/noc_mesh_antenna_repair

# Resume the completed detailed-routing checkpoint.
read_liberty $CELL_DIR/lib/sky130_fd_sc_hd__tt_025C_1v80.lib
read_db $PROJECT_DIR/build/openroad/noc_mesh_detailed_route.odb
read_sdc $PROJECT_DIR/build/openroad/noc_mesh_detailed_route.sdc

set_propagated_clock [all_clocks]
set_thread_count 4
global_connect

# Preserve the previous routing settings.
set_routing_layers -signal met1-met5 -clock met3-met5
set_global_routing_layer_adjustment met1-met5 0.20

# Insert antenna diodes. This command also legalizes their placement
# and updates global routing for affected connections.
set diodes_added [repair_antennas sky130_fd_sc_hd__diode_2 \
    -iterations 1]

global_connect

# Save the inserted diodes before starting detailed routing.
write_db ${OUTPUT}_before_reroute.odb
write_def ${OUTPUT}_before_reroute.def
write_sdc ${OUTPUT}_before_reroute.sdc
write_guides ${OUTPUT}_before_reroute.guide

check_placement -verbose

# Reconnect the repaired nets using detailed routing.
detailed_route \
    -output_drc $PROJECT_DIR/reports/antenna_repair_drc.rpt \
    -drc_report_iter_step 5 \
    -verbose 1

# Save the routed repair.
write_db ${OUTPUT}.odb
write_def ${OUTPUT}.def
write_verilog ${OUTPUT}.v
write_sdc ${OUTPUT}.sdc

puts "\nANTENNA REPAIR METRICS"
puts "Diodes added: $diodes_added"
report_design_area

puts "All signal nets routed (1=yes, 0=no): [design_is_routed]"
puts "Router geometry violations: [detailed_route_num_drvs]"

check_antennas \
    -report_file $PROJECT_DIR/reports/antenna_repair_antenna.rpt

puts "\nAntenna-repair checkpoint saved."

# Settings:
# - diode_2 is a SKY130 HD antenna-protection cell.
# - Perform one repair pass, then verify the actual routed result.
# - Save intermediate DRC reports every five routing iterations.
# - Keep a checkpoint containing the diodes before rerouting.