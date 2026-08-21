// Top-level interface for one router in the 2D mesh.
//
// Each router has five bidirectional connections represented as separate
// input and output channels: LOCAL, NORTH, EAST, SOUTH, and WEST. The local
// channel connects to the processing element; the other four connect to
// neighboring routers.
//
// Internally, incoming flits will pass through this pipeline:
//
//   input channel -> FIFO -> XY routing -> switch allocator -> crossbar
//
// Every channel uses ready/valid flow control. A flit transfers on a rising
// clock edge only when both valid and ready are high for that port.

import noc_pkg::*;

module noc_router #(
    // Router coordinates in the mesh.
    parameter logic [X_WIDTH-1:0] ROUTER_X = '0,
    parameter logic [Y_WIDTH-1:0] ROUTER_Y = '0
) (
    // Clock and active-low reset.
    input logic clk,
    input logic rst_n,

    // Five input flits packed in LOCAL, NORTH, EAST, SOUTH, WEST order.
    // Port p occupies bits p*FLIT_WIDTH +: FLIT_WIDTH.
    input logic [(NUM_PORTS*FLIT_WIDTH)-1:0] input_flits,

    // Senders hold valid flits stable until accepted.
    // Driven by the sender: 1 means the matching input_flit contains real data.
    input logic [NUM_PORTS-1:0] input_valid,

    // High when the corresponding input FIFO has room.
    // Driven by this router: 1 means that input port can accept a flit.
    output logic [NUM_PORTS-1:0] input_ready,

    // Five crossbar-selected flits packed using the same port ordering.
    output logic [(NUM_PORTS*FLIT_WIDTH)-1:0] output_flits,

    // Valid outputs remain stable while stalled.
    // Driven by this router: 1 means the matching output_flit contains real data.
    output logic [NUM_PORTS-1:0] output_valid,

    // Readiness from neighboring routers or the local endpoint.
    // Driven by the receiver: 1 means that output port's flit can be accepted.
    input logic [NUM_PORTS-1:0] output_ready
);

    // Per-port FIFO state and routing decisions.
    logic [NUM_PORTS-1:0] full;
    logic [NUM_PORTS-1:0] empty;
    logic [(NUM_PORTS*FLIT_WIDTH)-1:0] fifo_flits;
    logic [(NUM_PORTS*PORT_WIDTH)-1:0] requested_output;

    // Starting bit positions of the destination fields inside each flit.
    localparam int DEST_Y_LSB = PAYLOAD_WIDTH + PACKET_ID_WIDTH;
    localparam int DEST_X_LSB = DEST_Y_LSB + Y_WIDTH;

    assign input_ready[LOCAL_PORT] = !full[LOCAL_PORT];
    assign input_ready[NORTH_PORT] = !full[NORTH_PORT];
    assign input_ready[EAST_PORT]  = !full[EAST_PORT];
    assign input_ready[SOUTH_PORT] = !full[SOUTH_PORT];
    assign input_ready[WEST_PORT]  = !full[WEST_PORT];

    // Switch-allocation control signals.
    logic [(NUM_PORTS*NUM_PORTS)-1:0] allocator_requests;
    logic [(NUM_PORTS*NUM_PORTS)-1:0] allocator_grants;
    logic [NUM_PORTS-1:0] fifo_read_request;

    // Build the request matrix as allocator_requests[output][input].
    always_comb begin
        allocator_requests = '0;

        for (integer input_port = 0; input_port < NUM_PORTS; input_port = input_port + 1) begin
            if (!empty[input_port])
                allocator_requests[
                    (requested_output[(input_port*PORT_WIDTH) +: PORT_WIDTH] * NUM_PORTS)
                    + input_port
                ] = 1'b1;
        end
    end

    // Pop a FIFO only when its grant completes an output handshake.
    always_comb begin
        for (integer input_port = 0; input_port < NUM_PORTS; input_port = input_port + 1) begin
            if (!empty[input_port]) begin
                fifo_read_request[input_port] =
                    allocator_grants[
                        (requested_output[(input_port*PORT_WIDTH) +: PORT_WIDTH] * NUM_PORTS)
                        + input_port
                    ] &&
                    output_ready[
                        requested_output[(input_port*PORT_WIDTH) +: PORT_WIDTH]
                    ];
            end else begin
                fifo_read_request[input_port] = 1'b0;
            end
        end
    end

    // An output is valid whenever its one-hot grant vector is nonzero.
    always_comb begin
        for (integer output_port = 0; output_port < NUM_PORTS; output_port = output_port + 1) begin
            output_valid[output_port] =
                |allocator_grants[(output_port*NUM_PORTS) +: NUM_PORTS];
        end
    end

    //LOCAL INPUT FIFO BUFFER
    fifo_buffer local_input_buffer(
        .clk           (clk),
        .rst_n         (rst_n),

        .write_request (input_valid[LOCAL_PORT]),
        .read_request  (fifo_read_request[LOCAL_PORT]),

        .flit_in       (input_flits[(LOCAL_PORT*FLIT_WIDTH) +: FLIT_WIDTH]),
        .flit_out      (fifo_flits[(LOCAL_PORT*FLIT_WIDTH) +: FLIT_WIDTH]),

        .full          (full[LOCAL_PORT]),
        .empty         (empty[LOCAL_PORT])
    );

    fifo_buffer north_input_buffer(
        .clk           (clk),
        .rst_n         (rst_n),

        .write_request (input_valid[NORTH_PORT]),
        .read_request  (fifo_read_request[NORTH_PORT]),

        .flit_in       (input_flits[(NORTH_PORT*FLIT_WIDTH) +: FLIT_WIDTH]),
        .flit_out      (fifo_flits[(NORTH_PORT*FLIT_WIDTH) +: FLIT_WIDTH]),

        .full          (full[NORTH_PORT]),
        .empty         (empty[NORTH_PORT])
    );

    fifo_buffer east_input_buffer(
        .clk           (clk),
        .rst_n         (rst_n),

        .write_request (input_valid[EAST_PORT]),
        .read_request  (fifo_read_request[EAST_PORT]),

        .flit_in       (input_flits[(EAST_PORT*FLIT_WIDTH) +: FLIT_WIDTH]),
        .flit_out      (fifo_flits[(EAST_PORT*FLIT_WIDTH) +: FLIT_WIDTH]),

        .full          (full[EAST_PORT]),
        .empty         (empty[EAST_PORT])
    );

    fifo_buffer south_input_buffer(
        .clk           (clk),
        .rst_n         (rst_n),

        .write_request (input_valid[SOUTH_PORT]),
        .read_request  (fifo_read_request[SOUTH_PORT]),

        .flit_in       (input_flits[(SOUTH_PORT*FLIT_WIDTH) +: FLIT_WIDTH]),
        .flit_out      (fifo_flits[(SOUTH_PORT*FLIT_WIDTH) +: FLIT_WIDTH]),

        .full          (full[SOUTH_PORT]),
        .empty         (empty[SOUTH_PORT])
    );

    fifo_buffer west_input_buffer(
        .clk           (clk),
        .rst_n         (rst_n),

        .write_request (input_valid[WEST_PORT]),
        .read_request  (fifo_read_request[WEST_PORT]),

        .flit_in       (input_flits[(WEST_PORT*FLIT_WIDTH) +: FLIT_WIDTH]),
        .flit_out      (fifo_flits[(WEST_PORT*FLIT_WIDTH) +: FLIT_WIDTH]),

        .full          (full[WEST_PORT]),
        .empty         (empty[WEST_PORT])
    );



    //5 instances of routing unit is required so that the routing can happen in
    //parallel (if no contention happens)

    //Module is cheap combinational logic. Instantiating 5 times is affordable
    //Routers only function is to point at the next router the flit goes to.
    xy_routing local_routing_unit(
        .current_x (ROUTER_X),
        .current_y (ROUTER_Y),

        .dest_x    (fifo_flits[(LOCAL_PORT*FLIT_WIDTH + DEST_X_LSB) +: X_WIDTH]),
        .dest_y    (fifo_flits[(LOCAL_PORT*FLIT_WIDTH + DEST_Y_LSB) +: Y_WIDTH]),

        .route_out (requested_output[(LOCAL_PORT*PORT_WIDTH) +: PORT_WIDTH])
    );

    xy_routing north_routing_unit(
        .current_x (ROUTER_X),
        .current_y (ROUTER_Y),

        .dest_x    (fifo_flits[(NORTH_PORT*FLIT_WIDTH + DEST_X_LSB) +: X_WIDTH]),
        .dest_y    (fifo_flits[(NORTH_PORT*FLIT_WIDTH + DEST_Y_LSB) +: Y_WIDTH]),

        .route_out (requested_output[(NORTH_PORT*PORT_WIDTH) +: PORT_WIDTH])
    );

    xy_routing east_routing_unit(
        .current_x (ROUTER_X),
        .current_y (ROUTER_Y),

        .dest_x    (fifo_flits[(EAST_PORT*FLIT_WIDTH + DEST_X_LSB) +: X_WIDTH]),
        .dest_y    (fifo_flits[(EAST_PORT*FLIT_WIDTH + DEST_Y_LSB) +: Y_WIDTH]),

        .route_out (requested_output[(EAST_PORT*PORT_WIDTH) +: PORT_WIDTH])
    );

    xy_routing south_routing_unit(
        .current_x (ROUTER_X),
        .current_y (ROUTER_Y),

        .dest_x    (fifo_flits[(SOUTH_PORT*FLIT_WIDTH + DEST_X_LSB) +: X_WIDTH]),
        .dest_y    (fifo_flits[(SOUTH_PORT*FLIT_WIDTH + DEST_Y_LSB) +: Y_WIDTH]),

        .route_out (requested_output[(SOUTH_PORT*PORT_WIDTH) +: PORT_WIDTH])
    );

    xy_routing west_routing_unit(
        .current_x (ROUTER_X),
        .current_y (ROUTER_Y),

        .dest_x    (fifo_flits[(WEST_PORT*FLIT_WIDTH + DEST_X_LSB) +: X_WIDTH]),
        .dest_y    (fifo_flits[(WEST_PORT*FLIT_WIDTH + DEST_Y_LSB) +: Y_WIDTH]),

        .route_out (requested_output[(WEST_PORT*PORT_WIDTH) +: PORT_WIDTH])
    );


    //Now moving onto the switch allocator.
    //Recevies the 5 XY-routing decisions. Decides which input FIFO may use each port.

    switch_allocator arbiter(
        .clk(clk),
        .rst_n(rst_n),
        .grant_accepted(output_valid & output_ready), // Advance only outputs that completed a transfer.
        .requests(allocator_requests),
        .grants(allocator_grants)
    );
    //Switch allocator never directly handles flit data.
    //It only handles control bits.

    //5x5 Crossbar: This is the module that transfers the flit.
    crossbar_5x5 crossbar(
        .input_flits(fifo_flits),
        .grants(allocator_grants),
        .output_flits(output_flits)
    );
endmodule
