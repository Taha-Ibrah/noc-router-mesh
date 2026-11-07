# Locate the project and SKY130 library.
set PROJECT_DIR [file normalize [file join [file dirname [info script]] ..]]
set CELL_DIR /Users/taha.ibrah/.ciel/sky130A/libs.ref/sky130_fd_sc_hd

set INPUT $PROJECT_DIR/build/openroad/noc_mesh_electrical_repair_routed
set SPEF $PROJECT_DIR/build/openroad/noc_mesh_electrical_repair_routed.spef
set OUTPUT $PROJECT_DIR/build/openroad/noc_mesh_electrical_cushion_before_reroute
set REPORT $PROJECT_DIR/reports/electrical_cushion

file mkdir $PROJECT_DIR/reports

# Load the latest routed design and its timing constraints.
read_liberty $CELL_DIR/lib/sky130_fd_sc_hd__tt_025C_1v80.lib
read_db ${INPUT}.odb
read_sdc ${INPUT}.sdc

set_propagated_clock [all_clocks]
set_thread_count 4
global_connect

# Wire estimates for connections changed during repair.
# These values match the earlier routing-optimization settings.
set_wire_rc -signal \
    -resistance 1.20565e-3 -capacitance 1.72375e-4

set_wire_rc -clock \
    -resistance 1.66281e-4 -capacitance 2.14962e-4

# Initialize incremental estimates, then load the extracted starting model.
estimate_parasitics -placement
read_spef $SPEF

puts "\nBEFORE REPAIR — EXTRACTED PARASITICS"
puts "Slew violations: [sta::max_slew_violation_count]"
puts "Capacitance violations: [sta::max_capacitance_violation_count]"

# Let repair consider reset-related electrical loads too.
unset_case_analysis [get_ports rst_n]


# Allow buffering at existing hold-cell inputs. The inherited instance locks
# otherwise prevent insertion (ODB-1211 / RSZ-3006). Hold timing is repaired below.
set HOLD_CELLS [get_cells {hold*}]
if {[llength $HOLD_CELLS] > 0} {
    unset_dont_touch $HOLD_CELLS
}
puts "Existing hold cells unlocked for repair: [llength $HOLD_CELLS]"

# Keep specialized probe cells excluded, as in synthesis.
set_dont_use [get_lib_cells {*/sky130_fd_sc_hd__probe*}]

# Aggressive experimental targets: 60% margin means 40% of each legal limit.
# This encourages buffering/sizing; it does not force a buffer-count multiplier.
set SLEW_MARGIN_PERCENT 60
set CAP_MARGIN_PERCENT 60
set INSTANCES_BEFORE [llength [[ord::get_db_block] getInsts]]

puts "\nELECTRICAL REPAIR MARGINS: slew=$SLEW_MARGIN_PERCENT%, cap=$CAP_MARGIN_PERCENT%"
repair_design -slew_margin $SLEW_MARGIN_PERCENT \
    -cap_margin $CAP_MARGIN_PERCENT -max_utilization 50

set ELECTRICAL_CELLS_ADDED [expr {
    [llength [[ord::get_db_block] getInsts]] - $INSTANCES_BEFORE
}]
puts "Additional instances from electrical repair: $ELECTRICAL_CELLS_ADDED"
puts "Previous 5% electrical pass added 32 buffers; this count is measured, not forced."

# Restore functional timing and legalize electrical repairs.
set_case_analysis 1 [get_ports rst_n]
detailed_placement
estimate_parasitics -placement

# Repair setup first if the new estimates show an actual setup failure.
if {[sta::worst_slack_cmd max] < 0.0} {
    repair_timing -setup -max_utilization 50
    detailed_placement
    estimate_parasitics -placement
}

# Cell resizing may remove intentional delay. Explicitly close hold afterward.
# Target 0.10 ns of hold margin while preserving setup timing.
repair_timing -hold -hold_margin 0.10 -max_utilization 50

# Legalize the new hold buffers and refresh timing estimates.
detailed_placement
estimate_parasitics -placement
check_placement -verbose
global_connect

# Save progress before generating optional reports.
# Changed connections still require routing.
write_db ${OUTPUT}.odb
write_def ${OUTPUT}.def
write_verilog ${OUTPUT}.v
write_sdc ${OUTPUT}.sdc

# Refresh estimates after placement changed.
# These results are previews, not extracted post-repair timing.
estimate_parasitics -placement

report_check_types -max_slew -max_capacitance -violators \
    > ${REPORT}_electrical_est.rpt

report_checks -path_delay max -group_path_count 10 \
    > ${REPORT}_setup_est.rpt

report_checks -path_delay min -group_path_count 10 \
    > ${REPORT}_hold_est.rpt

puts "\nAFTER REPAIR — PLACEMENT ESTIMATES ONLY"
report_design_area

puts "\nSetup:"
report_worst_slack -max
report_tns -max

puts "\nHold:"
report_worst_slack -min
report_tns -min

puts "\nSlew violations: [sta::max_slew_violation_count]"
puts "Capacitance violations: [sta::max_capacitance_violation_count]"

puts "\nSaved candidate: ${OUTPUT}.odb"

# A saved candidate is not automatically a passing repair. Stop on failures
# under the current estimate, while keeping the checkpoint/reports for diagnosis.
set PREVIEW_SETUP [sta::worst_slack_cmd max]
set PREVIEW_HOLD [sta::worst_slack_cmd min]
set PREVIEW_SLEW [sta::max_slew_violation_count]
set PREVIEW_CAP [sta::max_capacitance_violation_count]

if {$PREVIEW_SETUP < 0.0 || $PREVIEW_HOLD < 0.0 ||
    $PREVIEW_SLEW > 0 || $PREVIEW_CAP > 0} {
    error "Repair candidate still fails placement-estimated checks. Inspect electrical_cushion reports before rerouting."
}

puts "Placement-estimated checks pass; routed closure is not yet established."
puts "Next: retarget rerouting and extraction to this cushion candidate."

# Aggressive buffering experiment
# - Start from the latest routed checkpoint and its matching extracted SPEF,
#   which reported 198 slew and 55 capacitance violations in stage 19.
# - Increase electrical repair margins from 5% to 60%. The repair targets
#   become 40% of the applicable limits; actual buffer count is not prescribed.
# - Unlock inherited hold* instance locks so their inputs can be rebuffered.
#   Cell replacements are allowed; explicit hold repair restores required delay.
# - Keep specialized probe cells excluded.
# - Keep explicit hold repair with a 0.10 ns target and 50% utilization ceiling.
# - More buffering can increase area, power, routing congestion, and antenna
#   exposure; changed loads can also require additional hold repair.
# - Save to the separate electrical_cushion checkpoint/report names so the
#   previous routed result and reports remain available for comparison.
# - Stage 18 must be retargeted to this new checkpoint, with separate routed
#   output names. The following STA run must use that matching routed result.
# - Fail the script on negative estimated setup/hold slack or remaining
#   slew/capacitance failures; retain the candidate as a diagnostic checkpoint.
# - Final printed checks use placement estimates, not fresh routed extraction.
#   Measure the routed result before claiming electrical or timing closure.
