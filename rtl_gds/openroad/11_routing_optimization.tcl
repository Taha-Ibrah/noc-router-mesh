# Locate the project and SKY130 library.
set PROJECT_DIR [file normalize [file join [file dirname [info script]] ..]]
set CELL_DIR /Users/taha.ibrah/.ciel/sky130A/libs.ref/sky130_fd_sc_hd
set OUTPUT $PROJECT_DIR/build/openroad/noc_mesh_route_opt

# Resume the global-routing checkpoint.
read_liberty $CELL_DIR/lib/sky130_fd_sc_hd__tt_025C_1v80.lib
read_db $PROJECT_DIR/build/openroad/noc_mesh_global_route.odb
read_sdc $PROJECT_DIR/build/openroad/noc_mesh_global_route.sdc
set_propagated_clock [all_clocks]
global_connect

# Use the same SKY130 resistance and capacitance settings.
set_layer_rc -layer li1  -resistance 7.176e-2   -capacitance 1.499e-4
set_layer_rc -layer met1 -resistance 1.20565e-3 -capacitance 1.72375e-4
set_layer_rc -layer met2 -resistance 1.22132e-3 -capacitance 1.36233e-4
set_layer_rc -layer met3 -resistance 1.66281e-4 -capacitance 2.14962e-4
set_layer_rc -layer met4 -resistance 1.68093e-4 -capacitance 1.48128e-4
set_layer_rc -layer met5 -resistance 1.83558e-5 -capacitance 1.54087e-4

set_layer_rc -via mcon -resistance 9.249146e-3
set_layer_rc -via via  -resistance 4.5e-3
set_layer_rc -via via2 -resistance 3.368786e-3
set_layer_rc -via via3 -resistance 0.376635e-3
set_layer_rc -via via4 -resistance 0.00580e-3

set_wire_rc -signal -layer met1
set_wire_rc -clock -layer met3

set_routing_layers -signal met1-met5 -clock met3-met5
set_global_routing_layer_adjustment met1-met5 0.20

# Rebuild the router's internal state in this new OpenROAD session.
global_route -congestion_iterations 50
estimate_parasitics -global_routing

# Allow electrical repair to see reset as a changing signal.
unset_case_analysis [get_ports rst_n]
estimate_parasitics -global_routing

repair_design -slew_margin 5 -cap_margin 5

# Restore normal-operation assumptions before timing repair.
set_case_analysis 1 [get_ports rst_n]

# Legalize added cells and update affected routes.
global_route -start_incremental
detailed_placement
global_route -end_incremental
estimate_parasitics -global_routing

# Repair timing if electrical repair introduced timing violations.
repair_timing -setup
repair_timing -hold -hold_margin 0.05

global_route -start_incremental
detailed_placement
global_route -end_incremental

# Check placement and reconnect new cells to power.
check_placement -verbose
global_connect
check_power_grid -net VDD
check_power_grid -net VSS

# Re-route the repaired design and refresh wire estimates.
global_route \
    -guide_file ${OUTPUT}.guide \
    -congestion_iterations 50 \
    -verbose

estimate_parasitics -global_routing \
    -spef_file ${OUTPUT}_est.spef

# Save the repaired checkpoint before generating reports.
write_db ${OUTPUT}.odb
write_def ${OUTPUT}.def
write_verilog ${OUTPUT}.v
write_sdc ${OUTPUT}.sdc
write_global_route_segments ${OUTPUT}.segments

# Save details of any remaining electrical violations.
report_check_types -max_slew -max_capacitance -violators \
    > $PROJECT_DIR/reports/routing_optimization_electrical.rpt

puts "\nROUTING OPTIMIZATION METRICS"
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

puts "\nRouting optimization saved."

# Settings:
# - Routing layers and capacity reduction match the previous stage.
# - Electrical margins target 5% below the applicable limits.
# - Hold repair targets 0.05 ns of positive slack.
# - Parasitics remain global-routing estimates.