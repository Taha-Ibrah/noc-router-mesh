# Locate the project and SKY130 library.
set PROJECT_DIR [file normalize [file join [file dirname [info script]] ..]]
set CELL_DIR /Users/taha.ibrah/.ciel/sky130A/libs.ref/sky130_fd_sc_hd

# Resume CTS, including its propagated-clock constraints.
read_liberty $CELL_DIR/lib/sky130_fd_sc_hd__tt_025C_1v80.lib
read_db $PROJECT_DIR/build/openroad/noc_mesh_cts.odb
read_sdc $PROJECT_DIR/build/openroad/noc_mesh_cts.sdc

# Restore the wire estimates.
set_layer_rc -layer met1 -resistance 1.20565e-3 -capacitance 1.72375e-4
set_layer_rc -layer met3 -resistance 1.66281e-4 -capacitance 2.14962e-4
set_wire_rc -signal -layer met1
set_wire_rc -clock -layer met3
set_propagated_clock [all_clocks]
estimate_parasitics -placement

puts "\nBEFORE REPAIR"
report_worst_slack -max -digits 3
report_worst_slack -min -digits 3
report_tns -min -digits 3

# Repair electrical issues, then setup, then hold.
repair_design
repair_timing -setup
repair_timing -hold -hold_margin 0.05

# Legalize added cells and refresh timing estimates.
detailed_placement
check_placement -verbose
global_connect
estimate_parasitics -placement

check_power_grid -net VDD
check_power_grid -net VSS

# Save the repaired checkpoint.
write_db $PROJECT_DIR/build/openroad/noc_mesh_post_cts.odb
write_def $PROJECT_DIR/build/openroad/noc_mesh_post_cts.def
write_verilog $PROJECT_DIR/build/openroad/noc_mesh_post_cts.v
write_sdc $PROJECT_DIR/build/openroad/noc_mesh_post_cts.sdc

puts "\nAFTER REPAIR"
report_design_area

puts "\nSetup timing:"
report_worst_slack -max -digits 3
report_wns -max -digits 3
report_tns -max -digits 3

puts "\nHold timing:"
report_worst_slack -min -digits 3
report_wns -min -digits 3
report_tns -min -digits 3

puts "\nElectrical checks:"
puts "Slew violations: [sta::max_slew_violation_count]"
puts "Capacitance violations: [sta::max_capacitance_violation_count]"

# Save detailed hold paths for investigating any remaining failures.
report_checks -path_delay min -group_path_count 5 \
    -format full_clock_expanded -digits 3 \
    > $PROJECT_DIR/reports/post_cts_hold.rpt

puts "\nPost-CTS optimization checkpoint saved."

# Hold repair targets 0.05 ns positive margin.
# Setup violations are not explicitly allowed during hold repair.
# Final checks occur after legalization because cell movement affects timing.