# Locate the project, PDK, and latest routed checkpoint.
set PROJECT_DIR [file normalize [file join [file dirname [info script]] ..]]
set PDK_DIR /Users/taha.ibrah/.ciel/sky130A
set CELL_DIR $PDK_DIR/libs.ref/sky130_fd_sc_hd

set INPUT $PROJECT_DIR/build/openroad/noc_mesh_antenna_pass2_routed
set SPEF $PROJECT_DIR/build/openroad/noc_mesh_post_route.spef
set REPORT $PROJECT_DIR/reports/post_route

file mkdir $PROJECT_DIR/reports

# Load cell timing, physical design, and matching constraints.
read_liberty $CELL_DIR/lib/sky130_fd_sc_hd__tt_025C_1v80.lib
read_db ${INPUT}.odb
read_sdc ${INPUT}.sdc

set_propagated_clock [all_clocks]

if {![design_is_routed]} {
    error "Signal routing is incomplete."
}

# Extract resistance and capacitance from the routed wires.
# This is an OpenRCX calibration file; no Calibre executable is needed.
define_process_corner -ext_model_index 0 nominal
set_extraction_rules_file \
    $PDK_DIR/libs.tech/librelane/rules.openrcx.sky130A.nom.calibre

extract_parasitics
write_spef $SPEF

# Load extracted parasitics into the timing analyzer.
read_spef $SPEF

# Check timing coverage and whether nets received parasitic data.
check_setup -verbose > ${REPORT}_constraints.rpt
report_parasitic_annotation -report_unannotated \
    > ${REPORT}_annotation.rpt

# Save detailed setup, hold, and electrical reports.
report_checks -path_delay max -group_path_count 10 \
    -fields {slew capacitance fanout} \
    > ${REPORT}_setup.rpt

report_checks -path_delay min -group_path_count 10 \
    -fields {slew capacitance fanout} \
    > ${REPORT}_hold.rpt

report_check_types -max_slew -max_capacitance -violators \
    > ${REPORT}_electrical.rpt

# Print the main metrics at the end of the log.
puts "\nPOST-ROUTE TIMING — TT 25 C / 1.8 V, NOMINAL RC"

puts "\nSetup:"
report_worst_slack -max
report_wns -max
report_tns -max

puts "\nHold:"
report_worst_slack -min
report_wns -min
report_tns -min

puts "\nSlew violations: [sta::max_slew_violation_count]"
puts "Capacitance violations: [sta::max_capacitance_violation_count]"

puts "\nSPEF saved: $SPEF"
puts "Reports saved: ${REPORT}_*.rpt"