# === REPAIR/REROUTE PURPOSE HEADER ============================================
# PURPOSE: FOCUS THE FIFTH ANTENNA-REPAIR PASS ON THE SIX KNOWN FAILING NETS FROM PASS
#          4.
# GOAL: ELIMINATE THE NINE REPORTED FAILING PINS WHILE RESTRICTING NEW DIODE CONNECTIONS
#       TO THOSE SIX NETS.
# HOW IT WORKS: RESOLVE THE NINE PINS INTO SIX NETS, REPAIR WITH ZERO EXTRA RATIO MARGIN
#               USING ACTUAL PDK LIMITS, AND REJECT UNEXPECTED CELL ADDITIONS OR DIODE
#               CONNECTIONS OUTSIDE THAT NET SET BEFORE SAVING/REROUTING. REROUTE,
#               EXTRACT FRESH RC, AND VERIFY THE WHOLE NOC. DETAILED ROUTING MAY ADJUST
#               GEOMETRY BEYOND THE TARGET NETS.
# ============================================================================

# ANTENNA REPAIR PASS 5 — focus on the six nets / nine pins reported by pass 4.
# Use the existing pass 4 antenna report as the baseline; do not repeat its
# pre-repair measurements. Final verification still covers the whole design.

# 1. PATHS: keep the pass 4 checkpoint intact and save this attempt as pass 5.
set PROJECT_DIR [file normalize [file join [file dirname [info script]] ..]]
set PDK_DIR /Users/taha.ibrah/.ciel/sky130A
set CELL_DIR $PDK_DIR/libs.ref/sky130_fd_sc_hd
set INPUT $PROJECT_DIR/build/openroad/noc_mesh_antenna_pass4
set OUTPUT $PROJECT_DIR/build/openroad/noc_mesh_antenna_pass5
set REPORT $PROJECT_DIR/reports/antenna_pass5
set LIBERTY $CELL_DIR/lib/sky130_fd_sc_hd__tt_025C_1v80.lib
set RC_RULES $PDK_DIR/libs.tech/librelane/rules.openrcx.sky130A.nom.calibre

foreach INPUT_FILE [list ${INPUT}.odb ${INPUT}.sdc $LIBERTY $RC_RULES] {
    if {![file isfile $INPUT_FILE]} {error "Required input is missing: $INPUT_FILE"}
}
file mkdir $PROJECT_DIR/reports

# 2. LOAD: restore the matching physical design, constraints, and cell timing.
read_liberty $LIBERTY
read_db ${INPUT}.odb
read_sdc ${INPUT}.sdc
set_propagated_clock [all_clocks]
set_thread_count 4
global_connect
if {![design_is_routed]} {error "Pass 5 requires the completed pass 4 routed checkpoint."}

# Keep routing ranges and capacity assumptions consistent with pass 4.
set_routing_layers -signal met1-met5 -clock met3-met5
set_global_routing_layer_adjustment met1-met5 0.20

# 3. TARGETS: these are the nine failing pins in antenna_pass4_antenna.rpt.
# Eight failures are on met3; hold12502/A fails on met2. Resolve nets from pins
# to avoid manually escaping the crossbar net's brackets and hierarchy characters.
# These lookups validate the target list; they do not rerun baseline diagnostics.
set TARGET_LOADS {
    {hold12502 A}
    {_82895_ D}
    {_82963_ D}
    {_83030_ D}
    {_83097_ D}
    {_43565_ A2}
    {_34050_ B1}
    {_43463_ A}
    {hold10632 A}
}
set BLOCK [ord::get_db_block]
set TARGET_NETS {}
foreach LOAD $TARGET_LOADS {
    lassign $LOAD INSTANCE_NAME PIN_NAME
    set INSTANCE [$BLOCK findInst $INSTANCE_NAME]
    if {$INSTANCE == "NULL"} {error "Target instance is missing: $INSTANCE_NAME"}
    set TERMINAL [$INSTANCE findITerm $PIN_NAME]
    if {$TERMINAL == "NULL"} {error "Target pin is missing: $INSTANCE_NAME/$PIN_NAME"}
    set NET [$TERMINAL getNet]
    if {$NET == "NULL"} {error "Target pin is disconnected: $INSTANCE_NAME/$PIN_NAME"}
    dict set TARGET_NETS [$NET getName] 1
}
if {[dict size $TARGET_NETS] != 6} {
    error "The target pins no longer map to six nets. Review the pass 4 report/input pairing."
}
puts "Targeting [dict size $TARGET_NETS] nets / [llength $TARGET_LOADS] pins from pass 4."

# 4. FOCUSED REPAIR: use the actual antenna limits, with zero EXTRA ratio margin.
# OpenROAD checks the design internally; repair_antennas has no per-net filter.
# A zero margin avoids selecting currently passing near-limit nets for extra
# protection. It does not relax the PDK limits. Check every new diode below to
# ensure its signal connection belongs to one of our six target nets.
# Snapshot instance names only to identify new cells; no baseline reports are made.
set EXISTING_INSTANCES {}
foreach INSTANCE [$BLOCK getInsts] {
    dict set EXISTING_INSTANCES [$INSTANCE getName] 1
}

repair_antennas sky130_fd_sc_hd__diode_2 \
    -iterations 1 \
    -ratio_margin 0
global_connect

# Count actual new diodes and reject unexpected cell additions before saving or
# rerouting. Placement legalization and routing may also adjust nearby geometry;
# this check restricts the new diode connections, not every physical wire shape.
set DIODES_ADDED 0
set UNEXPECTED_CHANGES {}
foreach INSTANCE [$BLOCK getInsts] {
    set INSTANCE_NAME [$INSTANCE getName]
    if {[dict exists $EXISTING_INSTANCES $INSTANCE_NAME]} {continue}
    set MASTER_NAME [[$INSTANCE getMaster] getName]
    if {$MASTER_NAME ne "sky130_fd_sc_hd__diode_2"} {
        lappend UNEXPECTED_CHANGES "$INSTANCE_NAME uses unexpected cell $MASTER_NAME"
        continue
    }
    set TERMINAL [$INSTANCE findITerm DIODE]
    if {$TERMINAL == "NULL"} {
        lappend UNEXPECTED_CHANGES "$INSTANCE_NAME has no DIODE pin"
        continue
    }
    set NET [$TERMINAL getNet]
    if {$NET == "NULL"} {
        lappend UNEXPECTED_CHANGES "$INSTANCE_NAME has a disconnected DIODE pin"
        continue
    }
    set NET_NAME [$NET getName]
    incr DIODES_ADDED
    if {![dict exists $TARGET_NETS $NET_NAME]} {
        lappend UNEXPECTED_CHANGES "$INSTANCE_NAME connects outside the target set: $NET_NAME"
    } else {
        puts "New protection diode: $INSTANCE_NAME -> $NET_NAME"
    }
}
if {[llength $UNEXPECTED_CHANGES] > 0} {
    error "Repair exceeded the six target nets; rerouting was not started: [join $UNEXPECTED_CHANGES {; }]"
}
if {$DIODES_ADDED == 0} {
    error "No new diodes were inserted. Inspect the pass 4 failing connections before another reroute."
}
puts "Diodes added on the target nets: $DIODES_ADDED"

# 5. CHECKPOINT: preserve the diode additions before the longer rerouting step.
# repair_antennas already legalizes placement and updates affected global routes.
# Check placement legality and save the matching database, netlist, constraints,
# physical export, and guides so the repair can be resumed independently.
check_placement -verbose
write_db ${OUTPUT}_before_reroute.odb
write_def ${OUTPUT}_before_reroute.def
write_verilog ${OUTPUT}_before_reroute.v
write_sdc ${OUTPUT}_before_reroute.sdc
write_guides ${OUTPUT}_before_reroute.guide

# 6. ROUTE: use the updated guides and retained routing state. The detailed router
# can process geometry beyond the six targets while resolving routing conflicts.
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

# 7. VERIFY ROUTING: final antenna and geometry checks cover the entire NoC.
set ALL_ROUTED [design_is_routed]
set ROUTER_DRVS [detailed_route_num_drvs]
if {!$ALL_ROUTED || $ROUTER_DRVS > 0} {
    error "Routing checks failed: routed=$ALL_ROUTED, router violations=$ROUTER_DRVS. Inspect ${REPORT}_drc.rpt."
}
set ANTENNA_AFTER [check_antennas -report_file ${REPORT}_antenna.rpt]

# 8. EXTRACT AND TIME: new diodes/wires require fresh RC, even for a small repair.
# The '.calibre' file is OpenRCX calibration data; no Calibre executable is used.
define_process_corner -ext_model_index 0 nominal
set_extraction_rules_file $RC_RULES
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

# 9. SUMMARY: print the metrics together and stop clearly if closure is incomplete.
# Positive slack passes; antenna, router, slew, and capacitance counts must be zero.
puts "\nANTENNA PASS 5 — FINAL METRICS"
puts "Targeted nets / pins: [dict size $TARGET_NETS] / [llength $TARGET_LOADS]"
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

set FAILURES {}
if {$ANTENNA_AFTER > 0} {lappend FAILURES "$ANTENNA_AFTER antenna-violating nets remain"}
if {$SETUP_SLACK < 0.0} {lappend FAILURES "setup timing fails"}
if {$HOLD_SLACK < 0.0} {lappend FAILURES "hold timing fails"}
if {$SLEW_VIOLATIONS > 0} {lappend FAILURES "$SLEW_VIOLATIONS slew violations remain"}
if {$CAP_VIOLATIONS > 0} {lappend FAILURES "$CAP_VIOLATIONS capacitance violations remain"}
# This build produces an empty check_setup report when coverage checks are clean.
if {[file size ${REPORT}_constraints.rpt] > 0} {
    lappend FAILURES "timing coverage/constraint issues require review"
}
if {[llength $FAILURES] > 0} {
    puts "\nResult: INCOMPLETE"
    error [join $FAILURES "; "]
}
puts "\nResult: PASS for antenna, router geometry, and extracted timing/electrical checks."
puts "Full PDK DRC, LVS, and other timing corners still require verification."
