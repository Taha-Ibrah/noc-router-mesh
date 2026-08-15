// Shared parameters, types, and helper functions for the NoC.

package noc_pkg;

    // ========================================================
    // NETWORK PARAMETERS
    // ========================================================

    // Default mesh dimensions.
    localparam int MESH_X = 4;
    localparam int MESH_Y = 4;

    // North, east, south, west, and local ports.
    localparam int NUM_PORTS = 5;

    // Bits transferred per flit.
    localparam int FLIT_WIDTH = 64;

    // Entries and address bits per input FIFO.
    localparam int FIFO_DEPTH = 4;
    localparam int FIFO_ADDR_WIDTH = $clog2(FIFO_DEPTH);


    // ========================================================
    // COORDINATE WIDTHS
    // ========================================================

    // Minimum width of 1 supports a single-router dimension.
    localparam int X_WIDTH = (MESH_X > 1) ? $clog2(MESH_X) : 1;
    localparam int Y_WIDTH = (MESH_Y > 1) ? $clog2(MESH_Y) : 1;


    // ========================================================
    // PORT DEFINITIONS
    // ========================================================

    typedef enum logic[2:0] {
        LOCAL_PORT = 3'd0,
        NORTH_PORT = 3'd1,
        EAST_PORT = 3'd2,
        SOUTH_PORT = 3'd3,
        WEST_PORT = 3'd4
    } port_t;


    // ========================================================
    // FLIT TYPES
    // ========================================================

    // Multi-flit packets use HEAD, BODY, and TAIL; SINGLE stands alone.
    typedef enum logic [1:0] {
        FLIT_BODY   = 2'b00,
        FLIT_HEAD   = 2'b01,
        FLIT_TAIL   = 2'b10,
        FLIT_SINGLE = 2'b11
    } flit_type_t;



    // ========================================================
    // PACKET / FLIT FIELD WIDTHS
    // ========================================================

    // Packet-tracking tag used for debug and verification.
    localparam int PACKET_ID_WIDTH = 8;

    // Remaining bits after the routing and tracking fields.
    localparam int PAYLOAD_WIDTH =
        FLIT_WIDTH
        - $bits(flit_type_t)
        - X_WIDTH
        - Y_WIDTH
        - PACKET_ID_WIDTH;


    // ========================================================
    // FLIT FORMAT
    // ========================================================

    // Default packed layout, from most to least significant bit:
    //
    //   [63:62] flit_type   Packet position: HEAD, BODY, TAIL, or SINGLE
    //   [61:60] dest_x      Destination X coordinate
    //   [59:58] dest_y      Destination Y coordinate
    //   [57:50] packet_id   Tracking tag
    //   [49:0]  payload     Flit data
    typedef struct packed {
        flit_type_t flit_type;
        logic [X_WIDTH-1:0] dest_x;
        logic [Y_WIDTH-1:0] dest_y;
        logic [PACKET_ID_WIDTH-1:0] packet_id;
        logic [PAYLOAD_WIDTH-1:0] payload;
    } flit_t;


    // ========================================================
    // ARBITRATION TYPES
    // ========================================================

    // One request bit per input port.
    typedef logic [NUM_PORTS-1:0] request_t;

    // One-hot grant with at most one winning input port.
    typedef logic [NUM_PORTS-1:0] grant_t;


    // ========================================================
    // HELPER FUNCTIONS
    // ========================================================

    // Return the matching input direction at the neighboring router.
    function automatic port_t opposite_port(input port_t port);
        case (port)

            NORTH_PORT:
                opposite_port = SOUTH_PORT;

            SOUTH_PORT:
                opposite_port = NORTH_PORT;

            EAST_PORT:
                opposite_port = WEST_PORT;

            WEST_PORT:
                opposite_port = EAST_PORT;

            default:
                opposite_port = LOCAL_PORT;

        endcase

    endfunction


    // HEAD and SINGLE begin a packet.
    function automatic logic is_head(input flit_t flit);

        return (flit.flit_type == FLIT_HEAD) ||
               (flit.flit_type == FLIT_SINGLE);

    endfunction


    // TAIL and SINGLE end a packet.
    function automatic logic is_tail(input flit_t flit);

        return (flit.flit_type == FLIT_TAIL) ||
               (flit.flit_type == FLIT_SINGLE);

    endfunction


endpackage
