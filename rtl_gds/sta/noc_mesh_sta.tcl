# Initial timing analysis: SKY130 typical corner, before layout.
set PROJECT_DIR [file normalize [file join [file dirname [info script]] ..]]

# Load cell models, mapped circuit, and timing requirements.
read_liberty /Users/taha.ibrah/.ciel/sky130A/libs.ref/sky130_fd_sc_hd/lib/sky130_fd_sc_hd__tt_025C_1v80.lib
read_verilog [file join $PROJECT_DIR build noc_mesh_mapped.v]
link_design noc_mesh
read_sdc [file join $PROJECT_DIR constraints noc_mesh.sdc]

puts "\nCONSTRAINT CHECKS"
set CONSTRAINTS_OK [check_setup -verbose]

# Show the ten worst paths per group for setup and hold.
puts "\nSETUP PATHS"
report_checks -path_delay max -group_path_count 10 -fields {slew capacitance fanout} -digits 3
puts "\nHOLD PATHS"
report_checks -path_delay min -group_path_count 10 -fields {slew capacitance fanout} -digits 3

# Save long electrical details separately; keep the terminal summary short.
file mkdir [file join $PROJECT_DIR reports]
set ELECTRICAL_REPORT [file join $PROJECT_DIR reports opensta_electrical.rpt]
report_check_types -max_slew -max_capacitance -max_fanout -violators -digits 3 > $ELECTRICAL_REPORT
puts "\nElectrical details saved to: $ELECTRICAL_REPORT"

# Query your installed OpenSTA for status and violation counts.
set SETUP_OK [expr {[sta::worst_slack_cmd max] >= 0}]
set HOLD_OK [expr {[sta::worst_slack_cmd min] >= 0}]
set SLEW_VIOLATIONS [sta::max_slew_violation_count]
set CAP_VIOLATIONS [sta::max_capacitance_violation_count]
set FANOUT_VIOLATIONS [sta::max_fanout_violation_count]

puts "\nMAIN METRICS (times in ns)"
puts [format "Clock target: %.3f ns / %.2f MHz" $CLK_PERIOD_NS [expr {1000.0 / $CLK_PERIOD_NS}]]
puts "Constraint coverage: [expr {$CONSTRAINTS_OK ? "PASS" : "FAIL"}]"

# PASS requires nonnegative slack. WNS/TNS should both be zero.
puts "\nSetup: [expr {$SETUP_OK ? "PASS" : "FAIL"}]"
report_worst_slack -max -digits 3
report_wns -max -digits 3
report_tns -max -digits 3

puts "\nHold: [expr {$HOLD_OK ? "PASS" : "FAIL"}]"
report_worst_slack -min -digits 3
report_wns -min -digits 3
report_tns -min -digits 3

puts "\nSlew violations:        $SLEW_VIOLATIONS"
puts "Capacitance violations: $CAP_VIOLATIONS"
puts "Fanout violations:      $FANOUT_VIOLATIONS"
puts "Electrical checks: [expr {($SLEW_VIOLATIONS + $CAP_VIOLATIONS + $FANOUT_VIOLATIONS) == 0 ? "PASS" : "FAIL"}]"
puts "\nConstraint issues or electrical violations also need repair."
puts "Pre-layout typical-corner results only; reset release and final routed timing are separate."
