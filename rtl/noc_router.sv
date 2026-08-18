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

    // One incoming flit value for each of the five input ports.
    // input_flits[port] is meaningful only while input_valid[port] is high.
    // A flit is stored on a rising clock edge when valid and ready are both 1.
    // Port indexes are 0=LOCAL, 1=NORTH, 2=EAST, 3=SOUTH, and 4=WEST.
    input flit_t input_flits [NUM_PORTS],

    // One valid bit from each sender. A high bit says the matching input_flit
    // contains real data. The sender must keep that flit stable until this
    // router raises the matching input_ready bit and accepts it.
    input logic [NUM_PORTS-1:0] input_valid,

    // One ready bit returned to each sender. A bit is high when the matching
    // input FIFO has room. Valid and ready being high together completes the
    // input transfer and stores the flit in that FIFO.
    output logic [NUM_PORTS-1:0] input_ready,

    // One outgoing flit value for each output port. The crossbar selects these
    // values from the five FIFO fronts according to allocator_grants. A value
    // is meaningful only when its matching output_valid bit is high.
    output flit_t output_flits [NUM_PORTS],

    // One valid bit for each outgoing flit. A high bit means an input won that
    // output and the crossbar is presenting its flit. During a stall, valid
    // and the selected flit remain unchanged until the receiver accepts them.
    output logic [NUM_PORTS-1:0] output_valid,

    // One ready bit supplied by each receiving neighbor or local endpoint.
    // A high bit allows the matching valid output flit to transfer. A low bit
    // stalls that output, keeps its grant, and prevents the source FIFO pop.
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
    request_t allocator_requests [NUM_PORTS]; //array of bits
    grant_t allocator_grants [NUM_PORTS]; //array of bits - only one bit is high
    logic [NUM_PORTS-1:0] fifo_read_request; //bit vector

    // PURPOSE: Convert the five individual XY-routing decisions into the 5x5
    // request matrix expected by the switch allocator. The matrix is arranged
    // as allocator_requests[output][input]. Rebuilding the entire matrix here
    // keeps this block purely combinational and prevents old requests from
    // remaining after a FIFO becomes empty or changes its desired output.
    always_comb begin
        // Clear all five output request vectors before creating new requests.
        for (integer output_port = 0; output_port < NUM_PORTS; output_port = output_port + 1)
            allocator_requests[output_port] = '0;

        // Each non-empty input FIFO requests the output chosen by its XY router.
        for (integer input_port = 0; input_port < NUM_PORTS; input_port = input_port + 1) begin
            if (!empty[input_port])
                // First index is the requested output; second index is the requesting input.
                allocator_requests[requested_output[input_port]][input_port] = 1'b1;
                //Example: if the NORTH input wants the EAST output:
                //allocator_requests[EAST_PORT][NORTH_PORT] = 1'b1;
        end
    end


    // PURPOSE: Decide which input FIFO may remove its front flit this cycle.
    // A routing decision alone is not enough: that input must win its requested
    // output, and the receiver attached to that output must also be ready. This
    // makes a FIFO read occur only for a completed output handshake, preventing
    // a stalled or losing flit from being discarded.
    always_comb begin
        // Check whether each input won access to the one output it requested.
        for (integer input_port = 0; input_port < NUM_PORTS; input_port = input_port + 1) begin
            if (!empty[input_port]) begin
                // Pop the FIFO only when it was granted and the receiver is ready.
                fifo_read_request[input_port] =
                    allocator_grants[requested_output[input_port]][input_port] &&
                    output_ready[requested_output[input_port]];
            end else begin
                // An empty FIFO has nothing to remove.
                fifo_read_request[input_port] = 1'b0;
            end
        end
    end

    // PURPOSE: Tell each receiver whether its matching output_flit contains a
    // real flit selected by the allocator and crossbar. The same grant vector
    // controls both the selected data and its valid bit, keeping them matched.
    //
    // allocator_grants[output_port] is a five-bit one-hot vector. Each bit
    // represents one input FIFO that could be connected to that output. When
    // every grant bit is 0, no input won the output and its flit is not valid.
    // When one grant bit is 1, the crossbar places that winning input's flit
    // on the output, so the matching output_valid bit must also become 1.
    //
    // The reduction-OR operator (|) combines the five grant bits into one
    // valid bit. output_valid is intentionally independent of output_ready:
    // valid says that data is available, while ready comes from the receiver
    // and says whether that data can be accepted during the current cycle.
    always_comb begin
        for (integer output_port = 0; output_port < NUM_PORTS; output_port = output_port + 1) begin
            output_valid[output_port] = |allocator_grants[output_port];
        end
    end

    //LOCAL INPUT FIFO BUFFER
    fifo_buffer local_input_buffer(
        .clk           (clk),
        .rst_n         (rst_n),

        .write_request (input_valid[LOCAL_PORT]),
        .read_request  (fifo_read_request[LOCAL_PORT]),

        .flit_in       (input_flits[LOCAL_PORT]),
        .flit_out      (fifo_flits[LOCAL_PORT]),

        .full          (full[LOCAL_PORT]),
        .empty         (empty[LOCAL_PORT])
    );

    fifo_buffer north_input_buffer(
        .clk           (clk),
        .rst_n         (rst_n),

        .write_request (input_valid[NORTH_PORT]),
        .read_request  (fifo_read_request[NORTH_PORT]),

        .flit_in       (input_flits[NORTH_PORT]),
        .flit_out      (fifo_flits[NORTH_PORT]),

        .full          (full[NORTH_PORT]),
        .empty         (empty[NORTH_PORT])
    );

    fifo_buffer east_input_buffer(
        .clk           (clk),
        .rst_n         (rst_n),

        .write_request (input_valid[EAST_PORT]),
        .read_request  (fifo_read_request[EAST_PORT]),

        .flit_in       (input_flits[EAST_PORT]),
        .flit_out      (fifo_flits[EAST_PORT]),

        .full          (full[EAST_PORT]),
        .empty         (empty[EAST_PORT])
    );

    fifo_buffer south_input_buffer(
        .clk           (clk),
        .rst_n         (rst_n),

        .write_request (input_valid[SOUTH_PORT]),
        .read_request  (fifo_read_request[SOUTH_PORT]),

        .flit_in       (input_flits[SOUTH_PORT]),
        .flit_out      (fifo_flits[SOUTH_PORT]),

        .full          (full[SOUTH_PORT]),
        .empty         (empty[SOUTH_PORT])
    );

    fifo_buffer west_input_buffer(
        .clk           (clk),
        .rst_n         (rst_n),

        .write_request (input_valid[WEST_PORT]),
        .read_request  (fifo_read_request[WEST_PORT]),

        .flit_in       (input_flits[WEST_PORT]),
        .flit_out      (fifo_flits[WEST_PORT]),

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
