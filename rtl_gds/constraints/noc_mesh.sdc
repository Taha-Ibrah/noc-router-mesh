###############################################################################
# noc_mesh pre-layout timing constraints
#
# Liberty units for this SKY130 library:
#   time        = ns
#   capacitance = pF
#
# Interface assumptions:
#   - All data ports are synchronous to the top-level clk port.
#   - The external input/output delays, slews, and loads below are provisional.
#     Replace them with values from the real neighboring block or board.
#   - rst_n is an asynchronous, active-low reset. Functional STA holds it
#     inactive; reset recovery/removal should be verified separately.
###############################################################################

# Centralized values make timing assumptions easy to review and change.
set CLK_NAME              clk
set CLK_PERIOD_NS         10.0
set CLK_RISE_NS            0.0
set CLK_FALL_NS            5.0
set SETUP_UNCERTAINTY_NS   0.20
set HOLD_UNCERTAINTY_NS    0.05
set CLOCK_TRANSITION_NS    0.10
set INPUT_DELAY_MAX_NS     1.0
set INPUT_DELAY_MIN_NS     0.0
set INPUT_TRANSITION_NS    0.10
set OUTPUT_DELAY_MAX_NS    1.0
set OUTPUT_DELAY_MIN_NS    0.0
set OUTPUT_LOAD_PF         0.02

###############################################################################
# Clock definition
###############################################################################

# A 10 ns period is 100 MHz. The waveform gives a 50 percent duty cycle.
create_clock -name $CLK_NAME \
    -period $CLK_PERIOD_NS \
    -waveform [list $CLK_RISE_NS $CLK_FALL_NS] \
    [get_ports clk]

# Setup and hold uncertainty reserve margin for jitter and pre-CTS skew.
set_clock_uncertainty -setup $SETUP_UNCERTAINTY_NS [get_clocks $CLK_NAME]
set_clock_uncertainty -hold  $HOLD_UNCERTAINTY_NS  [get_clocks $CLK_NAME]

# Model the clock slew before a propagated clock tree is available.
set_clock_transition $CLOCK_TRANSITION_NS [get_clocks $CLK_NAME]

###############################################################################
# Data-port collections
###############################################################################

# External synchronous inputs; clk and rst_n are intentionally excluded.
set DATA_INPUTS [get_ports {
    local_input_flits*
    local_input_valid*
    local_output_ready*
}]

# External synchronous outputs.
set DATA_OUTPUTS [get_ports {
    local_input_ready*
    local_output_flits*
    local_output_valid*
}]

###############################################################################
# External interface timing
###############################################################################

# Maximum delay constrains setup analysis; minimum delay constrains hold.
set_input_delay  -max $INPUT_DELAY_MAX_NS  -clock [get_clocks $CLK_NAME] $DATA_INPUTS
set_input_delay  -min $INPUT_DELAY_MIN_NS  -clock [get_clocks $CLK_NAME] $DATA_INPUTS
set_output_delay -max $OUTPUT_DELAY_MAX_NS -clock [get_clocks $CLK_NAME] $DATA_OUTPUTS
set_output_delay -min $OUTPUT_DELAY_MIN_NS -clock [get_clocks $CLK_NAME] $DATA_OUTPUTS

# Approximate external signal slew and output pin loading. Replace these values
# when the actual driving cells, package, board, or receiving loads are known.
set_input_transition $INPUT_TRANSITION_NS $DATA_INPUTS
set_load $OUTPUT_LOAD_PF $DATA_OUTPUTS

###############################################################################
# Functional-mode reset handling
###############################################################################

# Hold asynchronous reset deasserted while analyzing normal data paths.
# This does not prove safe reset release; use synchronized deassertion and a
# separate recovery/removal analysis for that requirement.
set_case_analysis 1 [get_ports rst_n]
