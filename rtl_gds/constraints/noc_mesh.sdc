# 100 MHz clock with a 50% duty cycle.
create_clock -name clk \
    -period 10.0 \
    -waveform {0.0 5.0} \
    [get_ports clk]

# Separate setup and hold margins.
set_clock_uncertainty -setup 0.20 [get_clocks clk]
set_clock_uncertainty -hold  0.05 [get_clocks clk]

# External data inputs, excluding clk and rst_n.
set data_inputs [get_ports {
    local_input_flits*
    local_input_valid*
    local_output_ready*
}]

# External data outputs.
set data_outputs [get_ports {
    local_input_ready*
    local_output_flits*
    local_output_valid*
}]

# Provisional interface timing assumptions.
set_input_delay  -max 1.0 -clock [get_clocks clk] $data_inputs
set_input_delay  -min 0.0 -clock [get_clocks clk] $data_inputs
set_output_delay -max 1.0 -clock [get_clocks clk] $data_outputs
set_output_delay -min 0.0 -clock [get_clocks clk] $data_outputs