//Switch allocator instantiates 5 round robin arbiters,
//One for each output port.

/*
switch_allocator
├── RR arbiter for NORTH
├── RR arbiter for SOUTH
├── RR arbiter for EAST
├── RR arbiter for WEST
└── RR arbiter for LOCAL
*/

import noc_pkg::*;




//current module: The current allocator arbitrates every flit independently.
//In order for every flit to remain together, use output-locking (wormhole method)
module switch_allocator(
    input logic clk,
    input logic rst_n,

    input logic [NUM_PORTS-1:0] grant_accepted, // Marks which outputs completed their transfers.

    input request_t requests [NUM_PORTS], //5 request vectors, 1 for each output port
    output grant_t grants [NUM_PORTS] //5 one-hot grant vectors. Each vector identifies which input won access to that output
);

    round_robin port_local(
        .clk     (clk),
        .rst_n   (rst_n),
        .grant_accepted (grant_accepted[LOCAL_PORT]),
        .request (requests[LOCAL_PORT]),
        .grant   (grants[LOCAL_PORT])
    );

    round_robin port_north(
        .clk     (clk),
        .rst_n   (rst_n),
        .grant_accepted (grant_accepted[NORTH_PORT]),
        .request (requests[NORTH_PORT]),
        .grant   (grants[NORTH_PORT])
    );

    round_robin port_east(
        .clk     (clk),
        .rst_n   (rst_n),
        .grant_accepted (grant_accepted[EAST_PORT]),
        .request (requests[EAST_PORT]),
        .grant   (grants[EAST_PORT])
    );

    round_robin port_south(
        .clk     (clk),
        .rst_n   (rst_n),
        .grant_accepted (grant_accepted[SOUTH_PORT]),
        .request (requests[SOUTH_PORT]),
        .grant   (grants[SOUTH_PORT])
    );

    round_robin port_west(
        .clk     (clk),
        .rst_n   (rst_n),
        .grant_accepted (grant_accepted[WEST_PORT]),
        .request (requests[WEST_PORT]),
        .grant   (grants[WEST_PORT])
    );
endmodule
