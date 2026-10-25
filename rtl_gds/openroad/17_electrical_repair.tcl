# Locate the project and SKY130 library.
set PROJECT_DIR [file normalize [file join [file dirname [info script]] ..]]
set CELL_DIR /Users/taha.ibrah/.ciel/sky130A/libs.ref/sky130_fd_sc_hd

set INPUT $PROJECT_DIR/build/openroad/noc_mesh_antenna_pass2_routed
set SPEF $PROJECT_DIR/build/openroad/noc_mesh_post_route.spef
set OUTPUT $PROJECT_DIR/build/openroad/noc_mesh_electrical_repair_before_reroute
set REPORT $PROJECT_DIR/reports/electrical_repair

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


# Preserve the cells previously inserted to satisfy hold timing.
set_dont_touch [get_cells {hold*}]

# Keep specialized probe cells excluded, as in synthesis.
set_dont_use [get_lib_cells {*/sky130_fd_sc_hd__probe*}]

# Insert buffers and resize drivers.
# Target 5% electrical margin; limit utilization to 50%.
repair_design -slew_margin 5 -cap_margin 5 \
    -max_utilization 50

# Restore functional timing and legalize electrical repairs.
set_case_analysis 1 [get_ports rst_n]
detailed_placement
estimate_parasitics -placement

# Add delay where data arrives too early.
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

puts "\nSaved: ${OUTPUT}.odb"
puts "Next: reroute this checkpoint and extract fresh parasitics."

# Changes that fixed the electrical and hold-timing failures
# - repair_design resizes drivers and inserts buffers to reduce excessive
#   loading and slow transitions. The electrical targets include 5% margin.
# - set_dont_touch on hold* preserves existing hold-delay cells. Without this,
#   electrical repair replaced nine delay cells with faster buffers, removing
#   intentional delay and contributing to hold failures.
# - set_dont_use excludes specialized probe cells from repair-cell selection,
#   consistent with the synthesis exclusions.
# - repair_timing -hold adds delay to paths whose data arrives too early.
#   The 0.10 ns margin is a repair target; it does not relax the SDC requirements.
#   The latest run inserted 63 hold buffers to reach that target.
# - detailed_placement legalizes the added cells; estimate_parasitics refreshes
#   the timing model after placement changes. All checks are reported again.
# Latest placement-estimated results: setup +7.97 ns, hold +0.10 ns,
# setup/hold TNS 0.00 ns, slew violations 0, capacitance violations 0.
# These are preliminary results. Rerouting and fresh RC extraction must confirm
# timing/electrical closure; antenna and physical verification remain separate.
