# Locate the project and SKY130 library.
set PROJECT_DIR [file normalize [file join [file dirname [info script]] ..]]
set CELL_DIR /Users/taha.ibrah/.ciel/sky130A/libs.ref/sky130_fd_sc_hd

# Resume global placement.
read_liberty $CELL_DIR/lib/sky130_fd_sc_hd__tt_025C_1v80.lib
read_db $PROJECT_DIR/build/openroad/noc_mesh_global_place.odb
read_sdc $PROJECT_DIR/constraints/noc_mesh.sdc

# Use the same wire estimates as global placement.
set_layer_rc -layer met1 -resistance 1.20565e-3 -capacitance 1.72375e-4
set_layer_rc -layer met3 -resistance 1.66281e-4 -capacitance 2.14962e-4
set_wire_rc -signal -layer met1
set_wire_rc -clock -layer met3
estimate_parasitics -placement

puts "\nBEFORE REPAIR"
puts "Slew violations: [sta::max_slew_violation_count]"
puts "Capacitance violations: [sta::max_capacitance_violation_count]"

# Buffer and resize cells to repair electrical violations.
repair_design

# Connect added cells and refresh wire estimates.
global_connect
estimate_parasitics -placement

puts "\nAFTER REPAIR"
report_design_area

puts "\nSetup timing:"
report_worst_slack -max -digits 3
report_tns -max -digits 3

puts "\nHold timing:"
report_worst_slack -min -digits 3
report_tns -min -digits 3

puts "\nElectrical checks:"
puts "Slew violations: [sta::max_slew_violation_count]"
puts "Capacitance violations: [sta::max_capacitance_violation_count]"
puts "Fanout violations: [sta::max_fanout_violation_count]"

# Save the modified circuit and physical checkpoint.
write_db $PROJECT_DIR/build/openroad/noc_mesh_place_opt.odb
write_def $PROJECT_DIR/build/openroad/noc_mesh_place_opt.def
write_verilog $PROJECT_DIR/build/openroad/noc_mesh_place_opt.v

puts "\nPlacement optimization saved."

# repair_design targets slew, capacitance, fanout, and long-wire issues.
# It may add buffers or replace cells with stronger versions.
# Detailed placement will legalize the modified cell positions next.