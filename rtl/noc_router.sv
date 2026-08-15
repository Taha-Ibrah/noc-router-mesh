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
    // This router's address in the mesh.
    // For example, ROUTER_X=2 and ROUTER_Y=1 means router (2,1).
    parameter logic [X_WIDTH-1:0] ROUTER_X = '0,
    parameter logic [Y_WIDTH-1:0] ROUTER_Y = '0
) (
    // clk is the timing signal. Stored values update on its rising edge.
    // rst_n clears stored values when it is 0; normal operation uses 1.
    input logic clk,
    input logic rst_n,

    // These are the five flits trying to enter the router, one per port.
    // The array positions are:
    //   0=LOCAL, 1=NORTH, 2=EAST, 3=SOUTH, 4=WEST.
    input flit_t input_flits [NUM_PORTS],

    // Each bit says whether the matching input_flit is real and ready to send.
    // Example: input_valid[LOCAL_PORT]=1 means the local flit is valid.
    input logic [NUM_PORTS-1:0] input_valid,

    // Each bit tells a sender whether this router has room for its flit.
    // A flit enters only when input_valid and input_ready are both 1.
    output logic [NUM_PORTS-1:0] input_ready,

    // These are the five flits leaving the router, one per output port.
    output flit_t output_flits [NUM_PORTS],

    // Each bit says whether the matching output_flit is real data.
    output logic [NUM_PORTS-1:0] output_valid,

    // Each bit tells this router whether the receiver has room for a flit.
    // A flit leaves only when output_valid and output_ready are both 1.
    input logic [NUM_PORTS-1:0] output_ready
);


    //BIT VECTOR: WHEN BRACKETS COME BEFORE THE VARIABLE NAME
    //UNPACKED ARRAY: BRACKETS AFTER THE VARIABLE NAME DEFINE AN ARRAY


    logic [NUM_PORTS-1:0] full;
    logic [NUM_PORTS-1:0] empty;
    flit_t fifo_flits [NUM_PORTS];
    port_t requested_output [NUM_PORTS]; //STORES THE CHOSEN DIRECTION BY XY_ROUTING FOR EACH FIFO'S FRONT FLIT

    assign input_ready[LOCAL_PORT] = !full[LOCAL_PORT];
    assign input_ready[NORTH_PORT] = !full[NORTH_PORT];
    assign input_ready[EAST_PORT]  = !full[EAST_PORT];
    assign input_ready[SOUTH_PORT] = !full[SOUTH_PORT];
    assign input_ready[WEST_PORT]  = !full[WEST_PORT];


    //REQUIRED INTERNAL MODULES FOR SWITCH ALLOCATOR:
    request_t allocator_requests [NUM_PORTS]; //array
    grant_t allocator_grants [NUM_PORTS]; //array
    logic [NUM_PORTS-1:0] fifo_read_request; //bit vector


    //LOCAL INPUT FIFO BUFFER
    fifo_buffer local_input_buffer(
        .clk           (clk),
        .rst_n         (rst_n),

        .write_request (input_valid[LOCAL_PORT]),
        .read_request  (1'b0),

        .flit_in       (input_flits[LOCAL_PORT]),
        .flit_out      (fifo_flits[LOCAL_PORT]),

        .full          (full[LOCAL_PORT]),
        .empty         (empty[LOCAL_PORT])
    );

    fifo_buffer north_input_buffer(
        .clk           (clk),
        .rst_n         (rst_n),

        .write_request (input_valid[NORTH_PORT]),
        .read_request  (1'b0),

        .flit_in       (input_flits[NORTH_PORT]),
        .flit_out      (fifo_flits[NORTH_PORT]),

        .full          (full[NORTH_PORT]),
        .empty         (empty[NORTH_PORT])
    );

    fifo_buffer east_input_buffer(
        .clk           (clk),
        .rst_n         (rst_n),

        .write_request (input_valid[EAST_PORT]),
        .read_request  (1'b0),

        .flit_in       (input_flits[EAST_PORT]),
        .flit_out      (fifo_flits[EAST_PORT]),

        .full          (full[EAST_PORT]),
        .empty         (empty[EAST_PORT])
    );

    fifo_buffer south_input_buffer(
        .clk           (clk),
        .rst_n         (rst_n),

        .write_request (input_valid[SOUTH_PORT]),
        .read_request  (1'b0),

        .flit_in       (input_flits[SOUTH_PORT]),
        .flit_out      (fifo_flits[SOUTH_PORT]),

        .full          (full[SOUTH_PORT]),
        .empty         (empty[SOUTH_PORT])
    );

    fifo_buffer west_input_buffer(
        .clk           (clk),
        .rst_n         (rst_n),

        .write_request (input_valid[WEST_PORT]),
        .read_request  (1'b0),

        .flit_in       (input_flits[WEST_PORT]),
        .flit_out      (fifo_flits[WEST_PORT]),

        .full          (full[WEST_PORT]),
        .empty         (empty[WEST_PORT])
    );


    //xy_routing unit sits in between the input FIFOs and the switch allocator.

    //5 instances of routing unit is required so that the routing can happen in
    //parallel (if no contention happens)

    //Module is cheap combinational logic. Instantiating 5 times is affordable
    //Routers only function is to point at the next router the flit goes to.
    xy_routing local_routing_unit(
        .current_x (ROUTER_X),
        .current_y (ROUTER_Y),

        .dest_x    (fifo_flits[LOCAL_PORT].dest_x),
        .dest_y    (fifo_flits[LOCAL_PORT].dest_y),

        .route_out (requested_output[LOCAL_PORT])
    );

    xy_routing north_routing_unit(
        .current_x (ROUTER_X),
        .current_y (ROUTER_Y),

        .dest_x    (fifo_flits[NORTH_PORT].dest_x),
        .dest_y    (fifo_flits[NORTH_PORT].dest_y),

        .route_out (requested_output[NORTH_PORT])
    );

    xy_routing east_routing_unit(
        .current_x (ROUTER_X),
        .current_y (ROUTER_Y),

        .dest_x    (fifo_flits[EAST_PORT].dest_x),
        .dest_y    (fifo_flits[EAST_PORT].dest_y),

        .route_out (requested_output[EAST_PORT])
    );

    xy_routing south_routing_unit(
        .current_x (ROUTER_X),
        .current_y (ROUTER_Y),

        .dest_x    (fifo_flits[SOUTH_PORT].dest_x),
        .dest_y    (fifo_flits[SOUTH_PORT].dest_y),

        .route_out (requested_output[SOUTH_PORT])
    );

    xy_routing west_routing_unit(
        .current_x (ROUTER_X),
        .current_y (ROUTER_Y),

        .dest_x    (fifo_flits[WEST_PORT].dest_x),
        .dest_y    (fifo_flits[WEST_PORT].dest_y),

        .route_out (requested_output[WEST_PORT])
    );


    //Now moving onto the switch allocator.
    //Recevies the 5 XY-routing decisions. Decides which input FIFO may use each port.

    switch_allocator arbiter(
        .clk(clk),
        .rst_n(rst_n),
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