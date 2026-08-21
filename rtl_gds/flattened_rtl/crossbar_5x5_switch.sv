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
    // Five flits packed together; input p occupies p*FLIT_WIDTH +: FLIT_WIDTH.
    input  logic [(NUM_PORTS*FLIT_WIDTH)-1:0] input_flits,

    // Bit output*NUM_PORTS + input tells which input won that output.
    input  logic [(NUM_PORTS*NUM_PORTS)-1:0] grants,

    // Five output flits packed in the same port order as the input bus.
    output logic [(NUM_PORTS*FLIT_WIDTH)-1:0] output_flits
);

    // Loop indexes for the five outputs and five possible input sources.
    integer output_port;
    integer input_port;

    // Grants come from the switch allocator after it resolves contention.
    always_comb begin
        output_flits = '0;

        // Process each output independently.
        for (output_port = 0; output_port < NUM_PORTS; output_port = output_port + 1) begin
            // grants[output_port][input_port] connects that input to this output.
            // The allocator keeps each grant vector one-hot.
            for (input_port = 0; input_port < NUM_PORTS; input_port = input_port + 1) begin
                if (grants[(output_port*NUM_PORTS) + input_port])
                    output_flits[(output_port*FLIT_WIDTH) +: FLIT_WIDTH] =
                        input_flits[(input_port*FLIT_WIDTH) +: FLIT_WIDTH];

            //RECALL: 0(N^2) TIME COMPLEXITY
            end
        end
    end

endmodule
