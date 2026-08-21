// Top-level 4x4 Network-on-Chip mesh.
//
// Every coordinate contains one noc_router. The four directional ports connect
// to neighboring routers, while each LOCAL port connects to an external node.

import noc_pkg::*;

module noc_mesh (
    input logic clk,
    input logic rst_n,

    // All endpoint buses use index x*MESH_Y + y for coordinate (x,y).
    // Each input flit occupies one FLIT_WIDTH-bit section at that index.
    input logic [(MESH_X*MESH_Y*FLIT_WIDTH)-1:0] local_input_flits,

    // One input-valid bit per endpoint.
    input logic [(MESH_X*MESH_Y)-1:0] local_input_valid,

    // One input-ready bit per endpoint.
    output logic [(MESH_X*MESH_Y)-1:0] local_input_ready,

    // Each output flit uses the same packed coordinate ordering as the inputs.
    output logic [(MESH_X*MESH_Y*FLIT_WIDTH)-1:0] local_output_flits,

    // One output-valid bit per endpoint.
    output logic [(MESH_X*MESH_Y)-1:0] local_output_valid,

    // One output-ready bit per endpoint.
    input logic [(MESH_X*MESH_Y)-1:0] local_output_ready
);

    // Integer forms keep packed-bus index arithmetic at one consistent width.
    localparam integer LOCAL_PORT_INDEX = integer'(LOCAL_PORT);
    localparam integer NORTH_PORT_INDEX = integer'(NORTH_PORT);
    localparam integer EAST_PORT_INDEX  = integer'(EAST_PORT);
    localparam integer SOUTH_PORT_INDEX = integer'(SOUTH_PORT);
    localparam integer WEST_PORT_INDEX  = integer'(WEST_PORT);

    // Packed five-port interfaces for every router in the mesh.
    logic [(MESH_X*MESH_Y*NUM_PORTS*FLIT_WIDTH)-1:0] router_input_flits;
    logic [(MESH_X*MESH_Y*NUM_PORTS)-1:0] router_input_valid;
    logic [(MESH_X*MESH_Y*NUM_PORTS)-1:0] router_input_ready;

    logic [(MESH_X*MESH_Y*NUM_PORTS*FLIT_WIDTH)-1:0] router_output_flits;
    logic [(MESH_X*MESH_Y*NUM_PORTS)-1:0] router_output_valid;
    logic [(MESH_X*MESH_Y*NUM_PORTS)-1:0] router_output_ready;

    // genvar loops create physical hardware instances rather than runtime loops.
    genvar x;
    genvar y;
    generate
        for (x = 0; x < MESH_X; x = x + 1) begin : router_column
            for (y = 0; y < MESH_Y; y = y + 1) begin : router_row

                // Each router owns one consecutive group of five port signals.
                localparam integer ROUTER_INDEX = (x * MESH_Y) + y;
                localparam integer ROUTER_PORT_BASE = ROUTER_INDEX * NUM_PORTS;
                localparam integer ROUTER_FLIT_BASE =
                    ROUTER_PORT_BASE * FLIT_WIDTH;
                localparam integer LOCAL_FLIT_BASE = ROUTER_INDEX * FLIT_WIDTH;

                // Give each router its fixed coordinate in the mesh.
                noc_router #(
                    .ROUTER_X (X_WIDTH'(x)),
                    .ROUTER_Y (Y_WIDTH'(y))
                ) router (
                    .clk           (clk),
                    .rst_n         (rst_n),
                    .input_flits   (router_input_flits[ROUTER_FLIT_BASE +: (NUM_PORTS*FLIT_WIDTH)]),
                    .input_valid   (router_input_valid[ROUTER_PORT_BASE +: NUM_PORTS]),
                    .input_ready   (router_input_ready[ROUTER_PORT_BASE +: NUM_PORTS]),
                    .output_flits  (router_output_flits[ROUTER_FLIT_BASE +: (NUM_PORTS*FLIT_WIDTH)]),
                    .output_valid  (router_output_valid[ROUTER_PORT_BASE +: NUM_PORTS]),
                    .output_ready  (router_output_ready[ROUTER_PORT_BASE +: NUM_PORTS])
                );

                // Connect the external node to this router's LOCAL port.
                assign router_input_flits[
                    (ROUTER_FLIT_BASE + LOCAL_PORT_INDEX*FLIT_WIDTH) +: FLIT_WIDTH
                ] = local_input_flits[LOCAL_FLIT_BASE +: FLIT_WIDTH];
                assign router_input_valid[ROUTER_PORT_BASE + LOCAL_PORT_INDEX] =
                    local_input_valid[ROUTER_INDEX];
                assign local_input_ready[ROUTER_INDEX] =
                    router_input_ready[ROUTER_PORT_BASE + LOCAL_PORT_INDEX];

                assign local_output_flits[LOCAL_FLIT_BASE +: FLIT_WIDTH] =
                    router_output_flits[
                        (ROUTER_FLIT_BASE + LOCAL_PORT_INDEX*FLIT_WIDTH) +: FLIT_WIDTH
                    ];
                assign local_output_valid[ROUTER_INDEX] =
                    router_output_valid[ROUTER_PORT_BASE + LOCAL_PORT_INDEX];
                assign router_output_ready[ROUTER_PORT_BASE + LOCAL_PORT_INDEX] =
                    local_output_ready[ROUTER_INDEX];

                //EX: ENTERING FROM THE NORTH OF THE ROUTER 
                //NORTH input receives the north neighbor's SOUTH output.
                if (y < MESH_Y - 1) begin : connect_north
                    localparam integer NORTH_ROUTER_INDEX =
                        (x * MESH_Y) + (y + 1);
                    localparam integer NORTH_PORT_BASE =
                        NORTH_ROUTER_INDEX * NUM_PORTS;
                    localparam integer NORTH_FLIT_BASE =
                        NORTH_PORT_BASE * FLIT_WIDTH;

                    assign router_input_flits[
                        (ROUTER_FLIT_BASE + NORTH_PORT_INDEX*FLIT_WIDTH) +: FLIT_WIDTH
                    ] = router_output_flits[
                        (NORTH_FLIT_BASE + SOUTH_PORT_INDEX*FLIT_WIDTH) +: FLIT_WIDTH
                    ];
                    assign router_input_valid[ROUTER_PORT_BASE + NORTH_PORT_INDEX] =
                        router_output_valid[NORTH_PORT_BASE + SOUTH_PORT_INDEX];
                    assign router_output_ready[ROUTER_PORT_BASE + NORTH_PORT_INDEX] =
                        router_input_ready[NORTH_PORT_BASE + SOUTH_PORT_INDEX];
                end else begin : block_north_boundary
                    assign router_input_flits[
                        (ROUTER_FLIT_BASE + NORTH_PORT_INDEX*FLIT_WIDTH) +: FLIT_WIDTH
                    ] = '0;
                    assign router_input_valid[ROUTER_PORT_BASE + NORTH_PORT_INDEX] = 1'b0;
                    assign router_output_ready[ROUTER_PORT_BASE + NORTH_PORT_INDEX] = 1'b0;
                end

                // EAST input receives the east neighbor's WEST output.
                if (x < MESH_X - 1) begin : connect_east
                    localparam integer EAST_ROUTER_INDEX =
                        ((x + 1) * MESH_Y) + y;
                    localparam integer EAST_PORT_BASE =
                        EAST_ROUTER_INDEX * NUM_PORTS;
                    localparam integer EAST_FLIT_BASE =
                        EAST_PORT_BASE * FLIT_WIDTH;

                    assign router_input_flits[
                        (ROUTER_FLIT_BASE + EAST_PORT_INDEX*FLIT_WIDTH) +: FLIT_WIDTH
                    ] = router_output_flits[
                        (EAST_FLIT_BASE + WEST_PORT_INDEX*FLIT_WIDTH) +: FLIT_WIDTH
                    ];
                    assign router_input_valid[ROUTER_PORT_BASE + EAST_PORT_INDEX] =
                        router_output_valid[EAST_PORT_BASE + WEST_PORT_INDEX];
                    assign router_output_ready[ROUTER_PORT_BASE + EAST_PORT_INDEX] =
                        router_input_ready[EAST_PORT_BASE + WEST_PORT_INDEX];
                end else begin : block_east_boundary
                    assign router_input_flits[
                        (ROUTER_FLIT_BASE + EAST_PORT_INDEX*FLIT_WIDTH) +: FLIT_WIDTH
                    ] = '0;
                    assign router_input_valid[ROUTER_PORT_BASE + EAST_PORT_INDEX] = 1'b0;
                    assign router_output_ready[ROUTER_PORT_BASE + EAST_PORT_INDEX] = 1'b0;
                end

                // SOUTH input receives the south neighbor's NORTH output.
                if (y > 0) begin : connect_south
                    localparam integer SOUTH_ROUTER_INDEX =
                        (x * MESH_Y) + (y - 1);
                    localparam integer SOUTH_PORT_BASE =
                        SOUTH_ROUTER_INDEX * NUM_PORTS;
                    localparam integer SOUTH_FLIT_BASE =
                        SOUTH_PORT_BASE * FLIT_WIDTH;

                    assign router_input_flits[
                        (ROUTER_FLIT_BASE + SOUTH_PORT_INDEX*FLIT_WIDTH) +: FLIT_WIDTH
                    ] = router_output_flits[
                        (SOUTH_FLIT_BASE + NORTH_PORT_INDEX*FLIT_WIDTH) +: FLIT_WIDTH
                    ];
                    assign router_input_valid[ROUTER_PORT_BASE + SOUTH_PORT_INDEX] =
                        router_output_valid[SOUTH_PORT_BASE + NORTH_PORT_INDEX];
                    assign router_output_ready[ROUTER_PORT_BASE + SOUTH_PORT_INDEX] =
                        router_input_ready[SOUTH_PORT_BASE + NORTH_PORT_INDEX];
                end else begin : block_south_boundary
                    assign router_input_flits[
                        (ROUTER_FLIT_BASE + SOUTH_PORT_INDEX*FLIT_WIDTH) +: FLIT_WIDTH
                    ] = '0;
                    assign router_input_valid[ROUTER_PORT_BASE + SOUTH_PORT_INDEX] = 1'b0;
                    assign router_output_ready[ROUTER_PORT_BASE + SOUTH_PORT_INDEX] = 1'b0;
                end

                // WEST input receives the west neighbor's EAST output.
                if (x > 0) begin : connect_west
                    localparam integer WEST_ROUTER_INDEX =
                        ((x - 1) * MESH_Y) + y;
                    localparam integer WEST_PORT_BASE =
                        WEST_ROUTER_INDEX * NUM_PORTS;
                    localparam integer WEST_FLIT_BASE =
                        WEST_PORT_BASE * FLIT_WIDTH;

                    assign router_input_flits[
                        (ROUTER_FLIT_BASE + WEST_PORT_INDEX*FLIT_WIDTH) +: FLIT_WIDTH
                    ] = router_output_flits[
                        (WEST_FLIT_BASE + EAST_PORT_INDEX*FLIT_WIDTH) +: FLIT_WIDTH
                    ];
                    assign router_input_valid[ROUTER_PORT_BASE + WEST_PORT_INDEX] =
                        router_output_valid[WEST_PORT_BASE + EAST_PORT_INDEX];
                    assign router_output_ready[ROUTER_PORT_BASE + WEST_PORT_INDEX] =
                        router_input_ready[WEST_PORT_BASE + EAST_PORT_INDEX];
                end else begin : block_west_boundary
                    assign router_input_flits[
                        (ROUTER_FLIT_BASE + WEST_PORT_INDEX*FLIT_WIDTH) +: FLIT_WIDTH
                    ] = '0;
                    assign router_input_valid[ROUTER_PORT_BASE + WEST_PORT_INDEX] = 1'b0;
                    assign router_output_ready[ROUTER_PORT_BASE + WEST_PORT_INDEX] = 1'b0;
                end

            end
        end
    endgenerate

endmodule
