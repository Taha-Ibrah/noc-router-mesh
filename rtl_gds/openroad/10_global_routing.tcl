# Locate the project and SKY130 library.
set PROJECT_DIR [file normalize [file join [file dirname [info script]] ..]]
set CELL_DIR /Users/taha.ibrah/.ciel/sky130A/libs.ref/sky130_fd_sc_hd

# Resume the repaired post-CTS design.
read_liberty $CELL_DIR/lib/sky130_fd_sc_hd__tt_025C_1v80.lib
read_db $PROJECT_DIR/build/openroad/noc_mesh_post_cts.odb
read_sdc $PROJECT_DIR/build/openroad/noc_mesh_post_cts.sdc
set_propagated_clock [all_clocks]
global_connect

# SKY130 HD reference wire/via resistance and capacitance estimates.
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

# Permit signals on met1-met5 and clocks on met3-met5.
# Reserve 20% of nominal routing capacity as planning headroom.
set_routing_layers -signal met1-met5 -clock met3-met5
set_global_routing_layer_adjustment met1-met5 0.20

# Generate routing guides and congestion information.
global_route \
    -guide_file $PROJECT_DIR/build/openroad/noc_mesh_global_route.guide \
    -congestion_iterations 50 \
    -congestion_report_file $PROJECT_DIR/reports/global_route_congestion.rpt \
    -verbose

# Estimate parasitics from the planned routes.
estimate_parasitics -global_routing \
    -spef_file $PROJECT_DIR/build/openroad/noc_mesh_global_route_est.spef

# Save checkpoints and route segments for subsequent optimization.
write_db $PROJECT_DIR/build/openroad/noc_mesh_global_route.odb
write_def $PROJECT_DIR/build/openroad/noc_mesh_global_route.def
write_verilog $PROJECT_DIR/build/openroad/noc_mesh_global_route.v
write_sdc $PROJECT_DIR/build/openroad/noc_mesh_global_route.sdc
write_global_route_segments $PROJECT_DIR/build/openroad/noc_mesh_global_route.segments

puts "\nGLOBAL ROUTING METRICS"
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

puts "\nGlobal routing saved."

# Settings:
# - Layer ranges and 20% capacity reduction follow SKY130 HD reference settings.
# - Up to 50 congestion-reduction iterations use OpenROAD's default limit.
# - The SPEF contains global-route estimates, not final detailed-route extraction.