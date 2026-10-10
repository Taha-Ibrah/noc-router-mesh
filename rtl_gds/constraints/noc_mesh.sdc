# Pre-layout constraints. Time: ns; capacitance: pF.
# I/O values are provisional assumptions. Reset-release timing is separate.

set CLK_NAME              clk
set CLK_PERIOD_NS         20.0
set CLK_RISE_NS            0.0
set CLK_FALL_NS           [expr {$CLK_PERIOD_NS / 2.0}]
set SETUP_UNCERTAINTY_NS   0.20
set HOLD_UNCERTAINTY_NS    0.05
set CLOCK_TRANSITION_NS    0.10

# External interface: maximum delays affect setup; minimum delays affect hold.
set INPUT_DELAY_MAX_NS     1.0
set INPUT_DELAY_MIN_NS     0.0
set OUTPUT_DELAY_MAX_NS    1.0
set OUTPUT_DELAY_MIN_NS    0.0
set INPUT_TRANSITION_NS    0.10
set OUTPUT_LOAD_PF         0.02

create_clock -name $CLK_NAME -period $CLK_PERIOD_NS -waveform [list $CLK_RISE_NS $CLK_FALL_NS] [get_ports clk]
set_clock_uncertainty -setup $SETUP_UNCERTAINTY_NS [get_clocks $CLK_NAME]
set_clock_uncertainty -hold $HOLD_UNCERTAINTY_NS [get_clocks $CLK_NAME]
set_clock_transition $CLOCK_TRANSITION_NS [get_clocks $CLK_NAME]

# All data interfaces use this clock. Clock and reset are excluded below.
set DATA_INPUTS [get_ports {local_input_flits* local_input_valid* local_output_ready*}]
set DATA_OUTPUTS [get_ports {local_input_ready* local_output_flits* local_output_valid*}]

set_input_delay -max $INPUT_DELAY_MAX_NS -clock [get_clocks $CLK_NAME] $DATA_INPUTS
set_input_delay -min $INPUT_DELAY_MIN_NS -clock [get_clocks $CLK_NAME] $DATA_INPUTS
set_output_delay -max $OUTPUT_DELAY_MAX_NS -clock [get_clocks $CLK_NAME] $DATA_OUTPUTS
set_output_delay -min $OUTPUT_DELAY_MIN_NS -clock [get_clocks $CLK_NAME] $DATA_OUTPUTS
set_input_transition $INPUT_TRANSITION_NS $DATA_INPUTS
set_load $OUTPUT_LOAD_PF $DATA_OUTPUTS

# Hold active-low reset inactive during functional timing analysis.
set_case_analysis 1 [get_ports rst_n]lin

# Actual slack and pass/fail results are computed by noc_mesh_sta.tcl.
