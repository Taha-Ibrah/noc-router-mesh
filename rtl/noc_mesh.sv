// Top-level 4x4 Network-on-Chip mesh.
//
// Every coordinate contains one noc_router. The four directional ports connect
// to neighboring routers, while each LOCAL port connects to an external node.

import noc_pkg::*;

module noc_mesh (
    input logic clk,
    input logic rst_n,

    // Flits injected into each router's LOCAL input; indexed as [x][y].
    input flit_t local_input_flits [MESH_X][MESH_Y],

    // A node sets valid when its matching local_input_flit contains real data.
    input logic local_input_valid [MESH_X][MESH_Y],

    // A router sets ready when its LOCAL input FIFO can accept a flit.
    output logic local_input_ready [MESH_X][MESH_Y],

    // Flits delivered from each router's LOCAL output to its attached node.
    output flit_t local_output_flits [MESH_X][MESH_Y],

    // A router sets valid when its matching local_output_flit contains real data.
    output logic local_output_valid [MESH_X][MESH_Y],

    // A node sets ready when it can accept a flit from its LOCAL output.
    input logic local_output_ready [MESH_X][MESH_Y]
);

    // Complete five-port interfaces for every router in the mesh.
    // The array indexes are [x coordinate][y coordinate][router port].
    flit_t router_input_flits [MESH_X][MESH_Y][NUM_PORTS];
    logic [NUM_PORTS-1:0] router_input_valid [MESH_X][MESH_Y];
    logic [NUM_PORTS-1:0] router_input_ready [MESH_X][MESH_Y];

    flit_t router_output_flits [MESH_X][MESH_Y][NUM_PORTS];
    logic [NUM_PORTS-1:0] router_output_valid [MESH_X][MESH_Y];
    logic [NUM_PORTS-1:0] router_output_ready [MESH_X][MESH_Y];

    // genvar loops create physical hardware instances rather than runtime loops.
    genvar x;
    genvar y;
    generate
        for (x = 0; x < MESH_X; x = x + 1) begin : router_column
            for (y = 0; y < MESH_Y; y = y + 1) begin : router_row

                // Give each router its fixed coordinate in the mesh.
                noc_router #(
                    .ROUTER_X (X_WIDTH'(x)),
                    .ROUTER_Y (Y_WIDTH'(y))
                ) router (
                    .clk           (clk),
                    .rst_n         (rst_n),
                    .input_flits   (router_input_flits[x][y]),
                    .input_valid   (router_input_valid[x][y]),
                    .input_ready   (router_input_ready[x][y]),
                    .output_flits  (router_output_flits[x][y]),
                    .output_valid  (router_output_valid[x][y]),
                    .output_ready  (router_output_ready[x][y])
                );

                // Connect the external node to this router's LOCAL port.
                assign router_input_flits[x][y][LOCAL_PORT] =
                    local_input_flits[x][y];
                assign router_input_valid[x][y][LOCAL_PORT] =
                    local_input_valid[x][y];
                assign local_input_ready[x][y] =
                    router_input_ready[x][y][LOCAL_PORT];

                assign local_output_flits[x][y] =
                    router_output_flits[x][y][LOCAL_PORT];
                assign local_output_valid[x][y] =
                    router_output_valid[x][y][LOCAL_PORT];
                assign router_output_ready[x][y][LOCAL_PORT] =
                    local_output_ready[x][y];

                //EX: ENTERING FROM THE NORTH OF THE ROUTER 
                //NORTH input receives the north neighbor's SOUTH output.
                if (y < MESH_Y - 1) begin : connect_north
                    assign router_input_flits[x][y][NORTH_PORT] =
                        router_output_flits[x][y + 1][SOUTH_PORT];
                    assign router_input_valid[x][y][NORTH_PORT] =
                        router_output_valid[x][y + 1][SOUTH_PORT];
                    assign router_output_ready[x][y][NORTH_PORT] =
                        router_input_ready[x][y + 1][SOUTH_PORT];
                end else begin : block_north_boundary
                    assign router_input_flits[x][y][NORTH_PORT] = '0;
                    assign router_input_valid[x][y][NORTH_PORT] = 1'b0;
                    assign router_output_ready[x][y][NORTH_PORT] = 1'b0;
                end

                // EAST input receives the east neighbor's WEST output.
                if (x < MESH_X - 1) begin : connect_east
                    assign router_input_flits[x][y][EAST_PORT] =
                        router_output_flits[x + 1][y][WEST_PORT];
                    assign router_input_valid[x][y][EAST_PORT] =
                        router_output_valid[x + 1][y][WEST_PORT];
                    assign router_output_ready[x][y][EAST_PORT] =
                        router_input_ready[x + 1][y][WEST_PORT];
                end else begin : block_east_boundary
                    assign router_input_flits[x][y][EAST_PORT] = '0;
                    assign router_input_valid[x][y][EAST_PORT] = 1'b0;
                    assign router_output_ready[x][y][EAST_PORT] = 1'b0;
                end

                // SOUTH input receives the south neighbor's NORTH output.
                if (y > 0) begin : connect_south
                    assign router_input_flits[x][y][SOUTH_PORT] =
                        router_output_flits[x][y - 1][NORTH_PORT];
                    assign router_input_valid[x][y][SOUTH_PORT] =
                        router_output_valid[x][y - 1][NORTH_PORT];
                    assign router_output_ready[x][y][SOUTH_PORT] =
                        router_input_ready[x][y - 1][NORTH_PORT];
                end else begin : block_south_boundary
                    assign router_input_flits[x][y][SOUTH_PORT] = '0;
                    assign router_input_valid[x][y][SOUTH_PORT] = 1'b0;
                    assign router_output_ready[x][y][SOUTH_PORT] = 1'b0;
                end

                // WEST input receives the west neighbor's EAST output.
                if (x > 0) begin : connect_west
                    assign router_input_flits[x][y][WEST_PORT] =
                        router_output_flits[x - 1][y][EAST_PORT];
                    assign router_input_valid[x][y][WEST_PORT] =
                        router_output_valid[x - 1][y][EAST_PORT];
                    assign router_output_ready[x][y][WEST_PORT] =
                        router_input_ready[x - 1][y][EAST_PORT];
                end else begin : block_west_boundary
                    assign router_input_flits[x][y][WEST_PORT] = '0;
                    assign router_input_valid[x][y][WEST_PORT] = 1'b0;
                    assign router_output_ready[x][y][WEST_PORT] = 1'b0;
                end

            end
        end
    endgenerate

endmodule
