# === REPAIR/REROUTE PURPOSE HEADER ============================================
# PURPOSE: CONTINUE ANTENNA REPAIR FROM THE COMPLETED PASS 3 ROUTED CHECKPOINT.
# GOAL: REDUCE THE REMAINING ANTENNA FAILURES WHILE PRESERVING ROUTED TIMING AND
#       ELECTRICAL CLOSURE.
# HOW IT WORKS: USE PASS 3 REPORTS AS THE BASELINE AND RUN ONE DIODE_2 REPAIR PASS WITH
#               A 10% RATIO MARGIN. SAVE A RESTART CHECKPOINT, STOP IF NO DIODES WERE
#               ADDED, THEN REROUTE AND EXTRACT FRESH RC. CHECK FINAL ANTENNA, GEOMETRY,
#               TIMING, AND ELECTRICAL RESULTS; REPORT REMAINING FAILURES.
# ============================================================================

# ANTENNA REPAIR PASS 4
# Continue from pass 3, attempt one additional diode pass, reroute, and verify
# the routed result with fresh extraction. Use pass 3 reports for starting metrics.
# This retains your current diode-repair approach. It is not a guarantee that
# every remaining antenna violation can be repaired with diodes.

# 1. PATHS: identify the input checkpoint and give this pass separate outputs.
# [info script] finds this script; dirname and .. locate the rtl_gds directory.
# INPUT, OUTPUT, and REPORT are filename prefixes; extensions are added below.
set PROJECT_DIR [file normalize [file join [file dirname [info script]] ..]]
set PDK_DIR /Users/taha.ibrah/.ciel/sky130A
set CELL_DIR $PDK_DIR/libs.ref/sky130_fd_sc_hd

set INPUT $PROJECT_DIR/build/openroad/noc_mesh_antenna_pass3
set OUTPUT $PROJECT_DIR/build/openroad/noc_mesh_antenna_pass4
set REPORT $PROJECT_DIR/reports/antenna_pass4
set LIBERTY $CELL_DIR/lib/sky130_fd_sc_hd__tt_025C_1v80.lib
set RC_RULES $PDK_DIR/libs.tech/librelane/rules.openrcx.sky130A.nom.calibre

# Stop early if a required input is missing, before modifying anything in memory.
foreach INPUT_FILE [list ${INPUT}.odb ${INPUT}.sdc $LIBERTY $RC_RULES] {
    if {![file isfile $INPUT_FILE]} {
        error "Required input file is missing: $INPUT_FILE"
    }
}
file mkdir $PROJECT_DIR/reports

# 2. LOAD: combine physical data, cell timing, and the matching constraints.
# Liberty provides cell delays/limits at TT, 25 C, 1.8 V. ODB contains the cells,
# placement, wires, and technology. SDC defines clocks and interface assumptions.
read_liberty $LIBERTY
read_db ${INPUT}.odb
read_sdc ${INPUT}.sdc

# Propagated clocks use the implemented clock network rather than an ideal clock.
# Four threads match your previous runs. global_connect reapplies the supply/body
# pin connection rules stored in the checkpoint (VPWR/VPB and VGND/VNB).
set_propagated_clock [all_clocks]
set_thread_count 4
global_connect

if {![design_is_routed]} {
    error "The input checkpoint must have completed signal routing."
}
check_placement -verbose

# 3. ROUTING SETTINGS: preserve the ranges used by the completed pass 3 design.
# Signal wires may use met1-met5; clock wires may use met3-met5.
# The 0.20 adjustment reduces the capacity assumed by global routing by 20%.
set_routing_layers -signal met1-met5 -clock met3-met5
set_global_routing_layer_adjustment met1-met5 0.20

# 4. REPAIR: retain your one-pass diode insertion with a 10% antenna margin.
# The margin uses 90% of the applicable ratio limit as the repair target.
# This command connects diode signal pins, legalizes their placement, and updates
# affected global routes. It does not establish final detailed-route closure.
# GRT-0243 means at least some violations were not repairable by this diode pass.
set DIODES_ADDED [repair_antennas sky130_fd_sc_hd__diode_2 \
    -iterations 1 \
    -ratio_margin 10]
global_connect
puts "Diodes inserted by this pass: $DIODES_ADDED"

# 5. RESTART POINT: save the new repairs before spending time on detailed routing.
# ODB is the main physical checkpoint; SDC preserves the matching constraints.
# DEF and Verilog provide portable physical/netlist exports. The guide file stores
# the updated routing corridors. check_placement checks legality without moving cells.
write_db ${OUTPUT}_before_reroute.odb
write_def ${OUTPUT}_before_reroute.def
write_verilog ${OUTPUT}_before_reroute.v
write_sdc ${OUTPUT}_before_reroute.sdc
write_guides ${OUTPUT}_before_reroute.guide
check_placement -verbose

# Stop before an expensive reroute if this pass inserted no new diodes.
# Use the existing pass 3 antenna report to decide on another repair approach.
if {$DIODES_ADDED == 0} {
    error "No new diodes were inserted. Review $PROJECT_DIR/reports/antenna_pass3_antenna.rpt before choosing routing or diode-connection changes."
}

# 6. DETAILED ROUTING: reconnect the added diodes and resolve routing geometry.
# repair_antennas has already updated the affected global routes. Preserve that
# repair state and let detailed_route use its guides. Save intermediate geometry
# reports every five iterations; this is usually the longest section of the script.
detailed_route \
    -output_drc ${REPORT}_drc.rpt \
    -drc_report_iter_step 5 \
    -verbose 1

# Save the routed result before analysis, so later reporting/check failures do not
# discard a completed routing run. These files all describe the same pass 4 design.
global_connect
write_db ${OUTPUT}.odb
write_def ${OUTPUT}.def
write_verilog ${OUTPUT}.v
write_sdc ${OUTPUT}.sdc
write_guides ${OUTPUT}.guide

# 7. ROUTED CHECKS: check routing completion and the detailed router's geometry.
# Router geometry checks cover the rules supported by the router; full PDK DRC
# and LVS are separate checks. Stop before extraction if this routing is invalid.
set ALL_ROUTED [design_is_routed]
set ROUTER_DRVS [detailed_route_num_drvs]
puts "\nANTENNA PASS 4 — ROUTING RESULTS"
puts "All signal nets routed: $ALL_ROUTED"
puts "Router geometry violations: $ROUTER_DRVS"
if {!$ALL_ROUTED || $ROUTER_DRVS > 0} {
    error "Routing checks failed. Inspect ${REPORT}_drc.rpt and the saved pass 4 checkpoint."
}

# Check the actual new wires, not just the repair command's prediction.
# Compare this result with the existing pass 3 report when assessing improvement.
set ANTENNA_AFTER [check_antennas -report_file ${REPORT}_antenna.rpt]
puts "Antenna-violating nets after: $ANTENNA_AFTER"
report_design_area

# 8. EXTRACTION AND STA: diode additions and rerouting change wire capacitance
# and resistance. Extract this new design; the old pass 3 SPEF is no longer a
# valid model for the changed connections. The rules file is OpenRCX calibration
# data despite its filename ending in '.calibre'; no Calibre executable is used.
define_process_corner -ext_model_index 0 nominal
set_extraction_rules_file $RC_RULES
extract_parasitics
write_spef ${OUTPUT}.spef
read_spef ${OUTPUT}.spef

# Check timing coverage and record nets missing parasitic annotation. Unused
# clkload outputs were unannotated in pass 3; a nonzero annotation count should
# be investigated by net type rather than automatically treated as a signal failure.
check_setup -verbose > ${REPORT}_constraints.rpt
report_parasitic_annotation -report_unannotated > ${REPORT}_annotation.rpt

# '-max' checks late data/setup; '-min' checks early data/hold. The extra fields
# show load, slew, and fanout on the ten worst reported paths. Electrical reports
# list pins whose slew or capacitance exceeds the library limits.
report_checks -path_delay max -group_path_count 10 \
    -fields {slew capacitance fanout} > ${REPORT}_setup.rpt
report_checks -path_delay min -group_path_count 10 \
    -fields {slew capacitance fanout} > ${REPORT}_hold.rpt
report_check_types -max_slew -max_capacitance -violators \
    > ${REPORT}_electrical.rpt

# Capture numeric results for the final pass/fail decision. Slack >= 0 is passing;
# negative slack means a timing requirement was missed. Slew/cap counts must be zero.
set SETUP_SLACK [sta::worst_slack_cmd max]
set HOLD_SLACK [sta::worst_slack_cmd min]
set SLEW_VIOLATIONS [sta::max_slew_violation_count]
set CAP_VIOLATIONS [sta::max_capacitance_violation_count]

# 9. SUMMARY: print the main metrics together at the end of the terminal log.
# Positive worst slack shows remaining margin; WNS/TNS report negative slack only.
puts "\nANTENNA PASS 4 — FINAL METRICS"
puts "Diodes added: $DIODES_ADDED"
puts "Antenna-violating nets after: $ANTENNA_AFTER"
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

# Record each remaining failure so the final error explains why closure is incomplete.
# Saved checkpoints/reports remain available even when this decision reports failure.
set FAILURES {}
if {$ANTENNA_AFTER > 0} {lappend FAILURES "$ANTENNA_AFTER antenna-violating nets remain"}
if {$SETUP_SLACK < 0.0} {lappend FAILURES "setup timing fails"}
if {$HOLD_SLACK < 0.0} {lappend FAILURES "hold timing fails"}
if {$SLEW_VIOLATIONS > 0} {lappend FAILURES "$SLEW_VIOLATIONS slew violations remain"}
if {$CAP_VIOLATIONS > 0} {lappend FAILURES "$CAP_VIOLATIONS capacitance violations remain"}

# In this OpenSTA build, check_setup's clean report is empty. Reported constraint
# or timing-coverage issues require review before declaring the run a pass.
if {[file size ${REPORT}_constraints.rpt] > 0} {
    lappend FAILURES "timing coverage/constraint issues were reported; inspect ${REPORT}_constraints.rpt"
}
if {[llength $FAILURES] > 0} {
    puts "\nResult: INCOMPLETE"
    error [join $FAILURES "; "]
}

puts "\nResult: PASS for antenna, router geometry, and extracted timing/electrical checks."
puts "This covers TT / nominal RC; full PDK DRC, LVS, and other timing corners remain separate."
