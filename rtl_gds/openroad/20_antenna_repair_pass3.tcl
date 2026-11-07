# Locate the project, SKY130 library, and electrically repaired input.
set PROJECT_DIR [file normalize [file join [file dirname [info script]] ..]]
set PDK_DIR /Users/taha.ibrah/.ciel/sky130A
set CELL_DIR $PDK_DIR/libs.ref/sky130_fd_sc_hd

set INPUT $PROJECT_DIR/build/openroad/noc_mesh_electrical_cushion_routed
set OUTPUT $PROJECT_DIR/build/openroad/noc_mesh_antenna_pass3
set REPORT $PROJECT_DIR/reports/antenna_pass3

file mkdir $PROJECT_DIR/reports

read_liberty $CELL_DIR/lib/sky130_fd_sc_hd__tt_025C_1v80.lib
read_db ${INPUT}.odb
read_sdc ${INPUT}.sdc

set_propagated_clock [all_clocks]
set_thread_count 4
global_connect

if {![design_is_routed]} {
    error "The input checkpoint must have completed signal routing."
}

# Check the actual routed input before inserting diodes.
set ANTENNA_BEFORE [check_antennas -report_file ${REPORT}_before.rpt]

set_routing_layers -signal met1-met5 -clock met3-met5
set_global_routing_layer_adjustment met1-met5 0.20

# One pass on detailed routing, with a 10% antenna margin.
# This command also legalizes the diodes and updates affected global routes.
set DIODES_ADDED [repair_antennas sky130_fd_sc_hd__diode_2 \
    -iterations 1 \
    -ratio_margin 10]

global_connect

# Preserve the repair before the longer detailed-routing step.
write_db ${OUTPUT}_before_reroute.odb
write_def ${OUTPUT}_before_reroute.def
write_verilog ${OUTPUT}_before_reroute.v
write_sdc ${OUTPUT}_before_reroute.sdc
write_guides ${OUTPUT}_before_reroute.guide
check_placement -verbose

# Reconnect the diode additions using the updated routing guides.
detailed_route \
    -output_drc ${REPORT}_drc.rpt \
    -drc_report_iter_step 5 \
    -verbose 1

global_connect
write_db ${OUTPUT}.odb
write_def ${OUTPUT}.def
write_verilog ${OUTPUT}.v
write_sdc ${OUTPUT}.sdc
write_guides ${OUTPUT}.guide

set ALL_ROUTED [design_is_routed]
set ROUTER_DRVS [detailed_route_num_drvs]
set ANTENNA_AFTER [check_antennas -report_file ${REPORT}_antenna.rpt]

puts "\nANTENNA PASS 3 — ROUTING RESULTS"
puts "Diodes added: $DIODES_ADDED"
puts "Antenna-violating nets before: $ANTENNA_BEFORE"
puts "Antenna-violating nets after: $ANTENNA_AFTER"
puts "All signal nets routed: $ALL_ROUTED"
puts "Router geometry violations: $ROUTER_DRVS"
report_design_area

if {!$ALL_ROUTED || $ROUTER_DRVS > 0} {
    error "Routing checks failed. Inspect ${REPORT}_drc.rpt and the saved checkpoint."
}

# Diodes add capacitance: extract the new routing before checking timing.
# This is an OpenRCX calibration file; no Calibre executable is needed.
define_process_corner -ext_model_index 0 nominal
set_extraction_rules_file \
    $PDK_DIR/libs.tech/librelane/rules.openrcx.sky130A.nom.calibre

extract_parasitics
write_spef ${OUTPUT}.spef
read_spef ${OUTPUT}.spef

check_setup -verbose > ${REPORT}_constraints.rpt
report_parasitic_annotation -report_unannotated > ${REPORT}_annotation.rpt

report_checks -path_delay max -group_path_count 10 \
    -fields {slew capacitance fanout} > ${REPORT}_setup.rpt
report_checks -path_delay min -group_path_count 10 \
    -fields {slew capacitance fanout} > ${REPORT}_hold.rpt
report_check_types -max_slew -max_capacitance -violators \
    > ${REPORT}_electrical.rpt

set SETUP_SLACK [sta::worst_slack_cmd max]
set HOLD_SLACK [sta::worst_slack_cmd min]
set SLEW_VIOLATIONS [sta::max_slew_violation_count]
set CAP_VIOLATIONS [sta::max_capacitance_violation_count]

puts "\nANTENNA PASS 3 — FINAL METRICS"
puts "Diodes added: $DIODES_ADDED"
puts "Antenna-violating nets: $ANTENNA_AFTER"
puts "All signal nets routed: $ALL_ROUTED"
puts "Router geometry violations: $ROUTER_DRVS"
report_design_area

puts "\nExtracted timing — TT 25 C / 1.8 V, nominal RC"
puts "\nSetup:"
report_worst_slack -max
report_wns -max
report_tns -max

puts "\nHold:"
report_worst_slack -min
report_wns -min
report_tns -min

puts "\nSlew violations: $SLEW_VIOLATIONS"
puts "Capacitance violations: $CAP_VIOLATIONS"
puts "\nCheckpoint saved: ${OUTPUT}.odb"
puts "SPEF saved: ${OUTPUT}.spef"
puts "Reports saved: ${REPORT}_*.rpt"

if {$ANTENNA_AFTER > 0 || $SETUP_SLACK < 0.0 || $HOLD_SLACK < 0.0 ||
    $SLEW_VIOLATIONS > 0 || $CAP_VIOLATIONS > 0} {
    error "Repair/verification is incomplete. Inspect the saved reports before another pass."
}

puts "Antenna, router geometry, and extracted timing/electrical checks pass."
puts "Full DRC, LVS, and other timing corners still require verification."

# Settings:
# - Start from the electrically clean cushion checkpoint; save a new result.
# - Use SKY130 HD diode_2, one repair iteration, and a 10% antenna margin.
# - Preserve the existing routing ranges and 20% capacity adjustment.
# - GRT-0243 means some violations cannot be fixed with diodes alone.
# - Keep a checkpoint before rerouting; final checks use fresh extracted RC.
