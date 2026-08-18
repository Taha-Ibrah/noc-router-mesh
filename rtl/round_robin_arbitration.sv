//Purpose of round robin arbitration:
//Arbiter answers "If multiple inputs want the same output port, who gets this cycle?"

// Exmaple:
// North wants EAST
// West wants EAST
// Local wants EAST
// East arbiter sees: requests = [North, West, East]

//impementation:
//request vector
//      ↓
//priority/last_grant register
//      ↓
//combinational winner selection
//      ↓
//one-hot grant vector

import noc_pkg::*;

module round_robin(
    input logic clk,
    input logic rst_n,

    input logic grant_accepted, // High when the granted flit completes its ready/valid transfer.

    // one request bit per input port
    input request_t request,

    // one-hot winner
    output grant_t grant
);
    // Index of the requester that receives first priority.
    localparam int PRIORITY_WIDTH = $clog2(NUM_PORTS);
    logic [PRIORITY_WIDTH-1:0] priority_ptr;
    grant_t held_grant; // Remembers the winning input while its output is stalled.
    logic holding_grant; // High while held_grant must remain unchanged.

    integer offset;
    integer request_index; //which actual request bit am I checking right now?

    // Scan once from the current priority and select the first request.
    always_comb begin
        grant = '0;
        request_index = 0;

        // Keep the same winner while its receiving output is stalled.
        if (holding_grant) begin
            grant = held_grant;
        end else begin
            for (offset = 0; offset < NUM_PORTS; offset = offset + 1) begin
                request_index = int'(priority_ptr) + offset;

                if (request_index >= NUM_PORTS)
                    request_index = request_index - NUM_PORTS;

                if ((grant == '0) && request[request_index])
                    grant[request_index] = 1'b1;
            end
        end
    end

    // Hold an unaccepted grant. Advance priority only after the transfer occurs.
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            priority_ptr <= '0;
            held_grant <= '0;
            holding_grant <= 1'b0;
        end else if (grant_accepted && (grant != '0)) begin
            held_grant <= '0;
            holding_grant <= 1'b0;

            for (integer i = 0; i < NUM_PORTS; i = i + 1) begin
                if (grant[i]) begin
                    if (i == NUM_PORTS - 1)
                        priority_ptr <= '0;
                    else
                        priority_ptr <= PRIORITY_WIDTH'(i + 1);
                end
            end
        end else if (grant != '0) begin
            held_grant <= grant;
            holding_grant <= 1'b1;
        end else begin
            held_grant <= '0;
            holding_grant <= 1'b0;
        end
    end

endmodule

//What are handshakes in hardware design? 
//a protocol using dedicated control signals (like request and acknowledge)
// to coordinate the safe transfer of data between two digital circuits or systems
