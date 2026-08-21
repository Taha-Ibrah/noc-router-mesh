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

    // Output p uses bits p*NUM_PORTS +: NUM_PORTS in both packed buses.
    input logic [(NUM_PORTS*NUM_PORTS)-1:0] requests,
    output logic [(NUM_PORTS*NUM_PORTS)-1:0] grants
);

    round_robin port_local(
        .clk     (clk),
        .rst_n   (rst_n),
        .grant_accepted (grant_accepted[LOCAL_PORT]),
        .request (requests[(LOCAL_PORT*NUM_PORTS) +: NUM_PORTS]),
        .grant   (grants[(LOCAL_PORT*NUM_PORTS) +: NUM_PORTS])
    );

    round_robin port_north(
        .clk     (clk),
        .rst_n   (rst_n),
        .grant_accepted (grant_accepted[NORTH_PORT]),
        .request (requests[(NORTH_PORT*NUM_PORTS) +: NUM_PORTS]),
        .grant   (grants[(NORTH_PORT*NUM_PORTS) +: NUM_PORTS])
    );

    round_robin port_east(
        .clk     (clk),
        .rst_n   (rst_n),
        .grant_accepted (grant_accepted[EAST_PORT]),
        .request (requests[(EAST_PORT*NUM_PORTS) +: NUM_PORTS]),
        .grant   (grants[(EAST_PORT*NUM_PORTS) +: NUM_PORTS])
    );

    round_robin port_south(
        .clk     (clk),
        .rst_n   (rst_n),
        .grant_accepted (grant_accepted[SOUTH_PORT]),
        .request (requests[(SOUTH_PORT*NUM_PORTS) +: NUM_PORTS]),
        .grant   (grants[(SOUTH_PORT*NUM_PORTS) +: NUM_PORTS])
    );

    round_robin port_west(
        .clk     (clk),
        .rst_n   (rst_n),
        .grant_accepted (grant_accepted[WEST_PORT]),
        .request (requests[(WEST_PORT*NUM_PORTS) +: NUM_PORTS]),
        .grant   (grants[(WEST_PORT*NUM_PORTS) +: NUM_PORTS])
    );
endmodule
