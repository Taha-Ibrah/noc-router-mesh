# Locate the project and SKY130 library.
set PROJECT_DIR [file normalize [file join [file dirname [info script]] ..]]
set CELL_DIR /Users/taha.ibrah/.ciel/sky130A/libs.ref/sky130_fd_sc_hd

# Resume the PDN checkpoint.
read_liberty $CELL_DIR/lib/sky130_fd_sc_hd__tt_025C_1v80.lib
read_db $PROJECT_DIR/build/openroad/noc_mesh_pdn.odb
read_sdc $PROJECT_DIR/constraints/noc_mesh.sdc

# Estimated wire resistance/capacitance from the SKY130 HD reference setup.
set_layer_rc -layer met1 -resistance 1.20565e-3 -capacitance 1.72375e-4
set_layer_rc -layer met3 -resistance 1.66281e-4 -capacitance 2.14962e-4
set_wire_rc -signal -layer met1
set_wire_rc -clock -layer met3

# Place cells while considering timing and estimated routing congestion.
global_placement -density 0.50 -timing_driven -routability_driven

# Connect supply pins, including any cells added during optimization.
global_connect
estimate_parasitics -placement

# Print initial placement and timing metrics.
puts "\nGLOBAL PLACEMENT METRICS"
report_design_area

puts "\nSetup timing:"
report_worst_slack -max -digits 3
report_tns -max -digits 3

puts "\nHold timing:"
report_worst_slack -min -digits 3
report_tns -min -digits 3

# Save the physical checkpoint and current circuit.
write_db $PROJECT_DIR/build/openroad/noc_mesh_global_place.odb
write_def $PROJECT_DIR/build/openroad/noc_mesh_global_place.def
write_verilog $PROJECT_DIR/build/openroad/noc_mesh_global_place.v

puts "\nGlobal placement saved."

# Settings:
# - Density 0.50: a starting local placement-density target.
#   It does not change the floorplan's original 35% utilization setting.
# - Timing-driven: gives additional attention to critical connections.
# - Routability-driven: spreads cells where routing demand is high.
# - Wire RC values are estimates; routed extraction comes later.
# - Detailed placement will legalize cell locations later.