# Locate the project and SKY130 library.
set PROJECT_DIR [file normalize [file join [file dirname [info script]] ..]]
set CELL_DIR /Users/taha.ibrah/.ciel/sky130A/libs.ref/sky130_fd_sc_hd

# Resume detailed placement.
read_liberty $CELL_DIR/lib/sky130_fd_sc_hd__tt_025C_1v80.lib
read_db $PROJECT_DIR/build/openroad/noc_mesh_detailed_place.odb
read_sdc $PROJECT_DIR/constraints/noc_mesh.sdc

# Keep the same estimated wire models.
set_layer_rc -layer met1 -resistance 1.20565e-3 -capacitance 1.72375e-4
set_layer_rc -layer met3 -resistance 1.66281e-4 -capacitance 2.14962e-4
set_wire_rc -signal -layer met1
set_wire_rc -clock -layer met3

# Build the clock tree using SKY130 clock buffers.
clock_tree_synthesis \
    -root_buf sky130_fd_sc_hd__clkbuf_16 \
    -buf_list {sky130_fd_sc_hd__clkbuf_4 sky130_fd_sc_hd__clkbuf_8 sky130_fd_sc_hd__clkbuf_16} \
    -sink_clustering_enable

# Legalize the new clock cells and connect their power pins.
detailed_placement
check_placement -verbose
global_connect
check_power_grid -net VDD
check_power_grid -net VSS

# Analyze the constructed clock network instead of an ideal clock.
set_propagated_clock [all_clocks]
estimate_parasitics -placement

# Save checkpoints before printing reports.
write_db $PROJECT_DIR/build/openroad/noc_mesh_cts.odb
write_def $PROJECT_DIR/build/openroad/noc_mesh_cts.def
write_verilog $PROJECT_DIR/build/openroad/noc_mesh_cts.v
write_sdc $PROJECT_DIR/build/openroad/noc_mesh_cts.sdc

puts "\nCTS METRICS"
report_cts -out_file $PROJECT_DIR/reports/cts_summary.rpt
report_design_area

puts "\nSetup timing:"
report_worst_slack -max -digits 3
report_tns -max -digits 3
report_clock_skew -setup

puts "\nHold timing:"
report_worst_slack -min -digits 3
report_tns -min -digits 3
report_clock_skew -hold

puts "\nElectrical checks:"
puts "Slew violations: [sta::max_slew_violation_count]"
puts "Capacitance violations: [sta::max_capacitance_violation_count]"

puts "\nCTS saved."

# Settings:
# - clkbuf_16 is the root buffer.
# - clkbuf_4/8/16 give CTS several clock-buffer strengths to choose from.
# - Sink clustering groups nearby clock receivers.
# - met3 supplies the estimated clock-wire RC model.
# - Propagated clocks include clock-network delays in timing analysis.
# - The exported SDC records the post-CTS clock settings for later stages.