# Locate the project and SKY130 library.
set PROJECT_DIR [file normalize [file join [file dirname [info script]] ..]]
set CELL_DIR /Users/taha.ibrah/.ciel/sky130A/libs.ref/sky130_fd_sc_hd

# Resume the optimized placement.
read_liberty $CELL_DIR/lib/sky130_fd_sc_hd__tt_025C_1v80.lib
read_db $PROJECT_DIR/build/openroad/noc_mesh_place_opt.odb
read_sdc $PROJECT_DIR/constraints/noc_mesh.sdc

# Use the same wire estimates as previous stages.
set_layer_rc -layer met1 -resistance 1.20565e-3 -capacitance 1.72375e-4
set_layer_rc -layer met3 -resistance 1.66281e-4 -capacitance 2.14962e-4
set_wire_rc -signal -layer met1
set_wire_rc -clock -layer met3

# Align cells to legal sites and remove overlaps.
detailed_placement -report_file_name $PROJECT_DIR/reports/detailed_placement.json
check_placement -verbose

# Check power connectivity now that all cells have legal locations.
global_connect
check_power_grid -net VDD
check_power_grid -net VSS

# Refresh wire estimates after moving cells.
estimate_parasitics -placement

puts "\nDETAILED PLACEMENT METRICS"
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

# Save the legalized placement.
write_db $PROJECT_DIR/build/openroad/noc_mesh_detailed_place.odb
write_def $PROJECT_DIR/build/openroad/noc_mesh_detailed_place.def
write_verilog $PROJECT_DIR/build/openroad/noc_mesh_detailed_place.v

puts "\nDetailed placement saved."

# Default legalization settings let OpenROAD choose cell movements.
# Cell locations change, so timing and electrical results are checked again.
# The clock remains ideal until clock-tree synthesis.