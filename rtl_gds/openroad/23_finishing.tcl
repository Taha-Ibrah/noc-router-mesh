# === REPAIR/REROUTE PURPOSE HEADER ============================================
# PURPOSE: FINISH THE CLEAN PASS 5 LAYOUT WITH CELL FILLERS AND DUMMY METAL FILL.
# GOAL: CLOSE STANDARD-CELL ROW GAPS, ADD METAL FILL, AND CHECK PLACEMENT,
#       SUPPLY CONNECTIVITY, ANTENNA RULES, AND NOMINAL ROUTED-WIRE TIMING.
# HOW IT WORKS: INSERT SKY130 HD FILLERS, FILL AVAILABLE CORE SPACE ON MET1-MET5,
#               SAVE PHYSICAL VIEWS, EXTRACT ROUTED-WIRE RC, AND RUN STA.
#               DENSITY VERIFICATION AND FULL PDK DRC/LVS FOLLOW GDS EXPORT.
# ============================================================================

# 1. Paths: use the antenna-clean pass 5 checkpoint and separate finished outputs.
set PROJECT_DIR [file normalize [file join [file dirname [info script]] ..]]
set PDK_DIR /Users/taha.ibrah/.ciel/sky130A
set CELL_DIR $PDK_DIR/libs.ref/sky130_fd_sc_hd
set INPUT $PROJECT_DIR/build/openroad/noc_mesh_antenna_pass5
set OUTPUT $PROJECT_DIR/build/openroad/noc_mesh_finished
set REPORT $PROJECT_DIR/reports/finishing
set LIBERTY $CELL_DIR/lib/sky130_fd_sc_hd__tt_025C_1v80.lib
set RC_RULES $PDK_DIR/libs.tech/librelane/rules.openrcx.sky130A.nom.calibre
set FILL_RULES ${OUTPUT}_fill_rules.json
set PDK_MAP $PDK_DIR/libs.tech/klayout/tech/sky130A.map
set FILL_MAP ${OUTPUT}_fill.map

foreach INPUT_FILE [list ${INPUT}.odb ${INPUT}.sdc $LIBERTY $RC_RULES $PDK_MAP] {
    if {![file isfile $INPUT_FILE]} {error "Required input is missing: $INPUT_FILE"}
}
file mkdir $PROJECT_DIR/reports [file dirname $OUTPUT]

# 2. Load the routed design. Finishing adds physical-only fillers; existing logic
# cells and signal routes are retained. No placement optimization or reroute is run.
read_liberty $LIBERTY
read_db ${INPUT}.odb
read_sdc ${INPUT}.sdc
set_propagated_clock [all_clocks]
set_thread_count 4
global_connect
if {![design_is_routed]} {error "Finishing requires the completed pass 5 routed design."}
set BLOCK [ord::get_db_block]

# 3. Insert large-to-small fillers to close row gaps and continue wells/PG rails.
# Use the four filler sizes available in the matching SKY130 HD library.
# Cell fillers continue the wells/rails; dummy metal fill is added separately below.
set FILLER_MASTERS {
    sky130_fd_sc_hd__fill_8
    sky130_fd_sc_hd__fill_4
    sky130_fd_sc_hd__fill_2
    sky130_fd_sc_hd__fill_1
}
foreach NAME $FILLER_MASTERS {
    if {[[ord::get_db] findMaster $NAME] == "NULL"} {error "Missing filler master: $NAME"}
}
set INSTANCES_BEFORE [llength [$BLOCK getInsts]]
filler_placement -prefix FINISH_FILLER_ -verbose $FILLER_MASTERS
set FILLERS_ADDED [expr {[llength [$BLOCK getInsts]] - $INSTANCES_BEFORE}]
global_connect

# 4. Add floating metal rectangles in available core space on met1-met5.
# The settings below define rectangle sizes, fill-to-fill spacing, and a conservative
# 3 um clearance from existing metal. OpenROAD uses the core boundary by default.
# This inserts fill; it does not measure density or guarantee density compliance.
if {[llength [$BLOCK getFills]] > 0} {
    error "Input already contains metal fill. Start from the unfilled pass 5 checkpoint."
}
# Keep the settings here. OpenROAD requires JSON on disk, so generate it in
# build/openroad/ automatically. Each row is: layer, square sizes (um), gap (um).
set FILL_LAYER_RULES {
    {met1 {2.0 1.0 0.58 0.3} 0.3}
    {met2 {2.0 1.0 0.58 0.3} 0.3}
    {met3 {2.0 1.0 0.58}     0.3}
    {met4 {2.0 1.0 0.58}     0.3}
    {met5 {3.0}              1.6}
}
set FILL_JSON_LAYERS {}
foreach LAYER_RULE $FILL_LAYER_RULES {
    lassign $LAYER_RULE LAYER SIZES GAP
    set SIZES_JSON [join $SIZES ,]
    lappend FILL_JSON_LAYERS [format {
        "%s": {"name": "%s", "space_to_outline": 0,
            "non-opc": {"datatype": [0], "width": [%s], "height": [%s],
                "space_to_fill": %s, "space_to_non_fill": 3.0}}
    } $LAYER $LAYER $SIZES_JSON $SIZES_JSON $GAP]
}
set RULES_OUT [open $FILL_RULES w]
puts $RULES_OUT [format {{"layers": {%s}}} [join $FILL_JSON_LAYERS ,]]
close $RULES_OUT

density_fill -rules $FILL_RULES
set METAL_FILLS [llength [$BLOCK getFills]]
if {$METAL_FILLS == 0} {error "Metal fill insertion produced no shapes."}

# Preserve DEF FILLS during the later KLayout import. The stock map has no FILL
# entries; append drawing-layer mappings to a project copy without changing the PDK.
set MAP_IN [open $PDK_MAP r]
set MAP_TEXT [read $MAP_IN]
close $MAP_IN
set MAP_OUT [open $FILL_MAP w]
puts $MAP_OUT $MAP_TEXT
puts $MAP_OUT "\n# DEF dummy metal fill: preserve on the matching SKY130 drawing layers."
foreach {LAYER GDS_LAYER} {met1 68 met2 69 met3 70 met4 71 met5 72} {
    puts $MAP_OUT "$LAYER FILL $GDS_LAYER 20"
}
close $MAP_OUT

# 5. Check the completed placement and the physical VDD/VSS grid connections.
# This is a connectivity check, not a voltage-drop/IR analysis or full PDK DRC.
check_placement -verbose -report_file_name ${REPORT}_placement.json
check_power_grid -net VDD
check_power_grid -net VSS
if {![design_is_routed]} {error "Signal routing is incomplete after filler insertion."}

# Save matching physical views and a supply-aware netlist before analysis.
write_db ${OUTPUT}.odb
write_def ${OUTPUT}.def
write_verilog -include_pwr_gnd ${OUTPUT}.v
write_sdc ${OUTPUT}.sdc

# 6. Verify the finished checkpoint at the same nominal corner as pass 5.
# This OpenRCX flow extracts routed nets; its dbFill rectangles are not included
# in that extraction. These timing reports do not establish fill-aware signoff.
set ANTENNA_VIOLATIONS [check_antennas -report_file ${REPORT}_antenna.rpt]
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

puts "\nFINISHING — PHYSICAL AND TIMING CHECKS"
puts "Filler cells added: $FILLERS_ADDED"
puts "Metal fill shapes added: $METAL_FILLS"
puts "Metal density verification: PENDING — check the exported GDS."
puts "Antenna-violating nets: $ANTENNA_VIOLATIONS"
puts "All signal nets routed: [design_is_routed]"
report_design_area
puts "\nSetup / hold slack — TT 25 C / 1.8 V, routed-wire RC:"
puts "Floating metal-fill coupling: not modeled in this OpenRCX flow."
report_worst_slack -max
report_worst_slack -min
puts "Slew violations: $SLEW_VIOLATIONS"
puts "Capacitance violations: $CAP_VIOLATIONS"
if {$ANTENNA_VIOLATIONS > 0 || $SETUP_SLACK < 0.0 || $HOLD_SLACK < 0.0 ||
    $SLEW_VIOLATIONS > 0 || $CAP_VIOLATIONS > 0 ||
    [file size ${REPORT}_constraints.rpt] > 0} {
    error "Finishing checks are incomplete. Inspect ${REPORT}_*.rpt before continuing."
}

# 7. Final output summary. Density verification and full PDK DRC/LVS remain separate.
puts "\nFINISHING — OUTPUTS"
puts "Physical checkpoint: ${OUTPUT}.odb"
puts "Physical export: ${OUTPUT}.def"
puts "KLayout layer map (includes metal fill): $FILL_MAP"
puts "Supply-aware netlist: ${OUTPUT}.v"
puts "Constraints: ${OUTPUT}.sdc"
puts "Extracted parasitics: ${OUTPUT}.spef"
puts "Reports: ${REPORT}_*.rpt"
puts "Finishing completed. Export GDS using $FILL_MAP with fill import enabled."
puts "Next: verify GDS metal density and PDK DRC/LVS; validate fill effects on timing."

# Embedded fill settings: based on OpenROAD-flow-scripts' SKY130 HD fill.json:
# https://github.com/The-OpenROAD-Project/OpenROAD-flow-scripts/blob/master/flow/platforms/sky130hd/fill.json
# Keep its 3 um signal clearance and 0.3 um fill spacing (1.6 um on met5).
# Omit its 0.4 x 0.4 um met3/met4 candidates: 0.16 um^2 is below SKY130's
# 0.24 um^2 minimum area. The smallest met3/met4 candidate here is 0.58 um square.
# Generated JSON selects layers by name; GDS layer numbers belong in FILL_MAP.
# The current design uses SKY130A / sky130_fd_sc_hd cells and nominal RC rules.
