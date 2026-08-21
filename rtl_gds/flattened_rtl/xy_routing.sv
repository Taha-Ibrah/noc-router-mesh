//Purpose of the module:
//compare current coordinate to intended packet destination
//X Route first, then Y Route

//combinational module:
//WHY: no states to remember, and each router independently looks at its own
// xy routing and the packet destination, and decides the next hop only.

import noc_pkg::*;

module xy_routing (
    input  logic [X_WIDTH-1:0] current_x,
    input  logic [Y_WIDTH-1:0] current_y,

    input  logic [X_WIDTH-1:0] dest_x,
    input  logic [Y_WIDTH-1:0] dest_y,

    output logic [2:0] route_out //the end goal is to determine what port to go to
    //port matters more than the end coordination...
);
    always_comb begin
        // Resolve the X coordinate before considering Y.
        if (dest_x > current_x)
            route_out = EAST_PORT;
        else if (dest_x < current_x)
            route_out = WEST_PORT;

        // Once X matches, move along Y; larger Y is north.
        else if (dest_y > current_y)
            route_out = NORTH_PORT;
        else if (dest_y < current_y)
            route_out = SOUTH_PORT;

        // Both coordinates match, so deliver to this router.
        else
            route_out = LOCAL_PORT;
    end

endmodule
