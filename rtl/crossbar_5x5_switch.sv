//This is the router's internal connection fabric.

//Conceptually:
//5 inputs
//   ↓
//5×5 crossbar
//   ↓
//5 outputs

// XY routing: “Which output does this flit want?”
// Switch allocator + RR: “If multiple inputs want that output, which one wins?”
// 5×5 crossbar: “Connect the winning input to that output.”

import noc_pkg::*;



//The following module is a combinational module

//Choosing between a combinational module vs a sequential module.
//A sequential module needs to remember previous inputs/outputs
//A combinational module does not need to remember anything, it just looks at the
//given inputs and immediately produces the result.

//For additional context: Switch allocator goes directly inside of the crossbar

module crossbar_5x5 (
    // One flit from each router input FIFO
    input  flit_t input_flits [NUM_PORTS],

    // One grant vector per output port
    // grants[output][input] tells which input won that output
    input  grant_t grants [NUM_PORTS],

    // One flit driven toward each router output port
    output flit_t output_flits [NUM_PORTS]
);

    // Loop indexes for the five outputs and five possible input sources.
    integer output_port;
    integer input_port;

    // Grants come from the switch allocator after it resolves contention.
    always_comb begin
        // Process each output independently.
        for (output_port = 0; output_port < NUM_PORTS; output_port = output_port + 1) begin
            // A default value prevents stale data when no input is granted.
            output_flits[output_port] = '0;

            // grants[output_port][input_port] connects that input to this output.
            // The allocator keeps each grant vector one-hot.
            for (input_port = 0; input_port < NUM_PORTS; input_port = input_port + 1) begin
                if (grants[output_port][input_port])
                    output_flits[output_port] = input_flits[input_port];

            //RECALL: 0(N^2) TIME COMPLEXITY
            end
        end
    end

endmodule
