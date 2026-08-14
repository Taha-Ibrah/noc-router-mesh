//======================================================================
//Module Purpose: Define the shared languages:
//port enums, flit format, coordinate widths, packet/flit types, parameters
//
//
//This file does not describe hardware itself, rather it serves as
// a package to be imported
//
//Modules can access these definitions with:
//  import noc_pkg::*;
//======================================================================

package noc_pkg;

    //==================================================================
    // NETWORK PARAMETERS
    //==================================================================

    //Baseline NoC is a 4x4 mesh
    localparam int MESH_X = 4;
    localparam int MESH_Y = 4;

    // Each router has:
    // North, South, East, West, and Local ports.
    localparam int NUM_PORTS = 5;

    // Width of one flit.
    //
    // Every physical NoC link transfers one FLIT_WIDTH-sized
    // piece of data at a time.
    localparam int FLIT_WIDTH = 64; //every flit moving between routers is 64 bits wide

    // Number of entries in each input FIFO.
    //
    // Can be changed later during performance experiments.
    localparam int FIFO_DEPTH = 4; //each input FIFO can store 4 flits
    localparam int FIFO_ADDR_WIDTH = $clog2(FIFO_DEPTH); //# of bits needed to indice through fifo address
    //EX:
    // North FIFO: 4 flits
    // South FIFO: 4 flits
    // East FIFO:  4 flits
    // West FIFO:  4 flits
    // Local FIFO: 4 flits


    // ========================================================
    // COORDINATE WIDTHS
    // ========================================================

    // Each router needs an X and Y coordinate so the routing
    // logic knows where it is in the mesh.
    //
    // In a 4x4 mesh, valid X/Y values are 0 through 3,
    // which requires 2 bits:
    //
    //   0 = 2'b00
    //   1 = 2'b01
    //   2 = 2'b10
    //   3 = 2'b11


    // Keep a one-router dimension representable: $clog2(1) is 0,
    // but a packed logic field must still have at least one bit.
    localparam int X_WIDTH = (MESH_X > 1) ? $clog2(MESH_X) : 1;
    localparam int Y_WIDTH = (MESH_Y > 1) ? $clog2(MESH_Y) : 1;


    // ========================================================
    // PORT DEFINITIONS
    // ========================================================

    //Using readable names for each port in each router
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

    // A packet can contain multiple flits:
    //
    //      HEAD -> BODY -> BODY -> TAIL
    //
    // HEAD:
    //      First flit of a multi-flit packet.
    //
    // BODY:
    //      Middle flit of a packet.
    //
    // TAIL:
    //      Final flit. Releases wormhole resources.
    //
    // SINGLE:
    //      Packet consisting of exactly one flit.
    //
    typedef enum logic [1:0] {
        FLIT_BODY   = 2'b00,
        FLIT_HEAD   = 2'b01,
        FLIT_TAIL   = 2'b10,
        FLIT_SINGLE = 2'b11
    } flit_type_t;



    // ========================================================
    // PACKET / FLIT FIELD WIDTHS
    // ========================================================

    // packet_id is an 8-bit tag carried by every flit. It does not affect
    // routing; it lets a testbench or debug trace associate flits with the
    // packet that produced them. IDs may be reused after outstanding traffic
    // with the old ID has drained.
    localparam int PACKET_ID_WIDTH = 8;

    // A flit is exactly FLIT_WIDTH bits. The control fields consume the bits
    // listed below, and payload receives everything left over:
    //
    //   payload = total flit width
    //             - flit type - destination X - destination Y - packet ID
    //
    // With the default parameters: 64 - 2 - 2 - 2 - 8 = 50 payload bits.
    // FLIT_WIDTH must be large enough for PAYLOAD_WIDTH to remain positive.
    // $bits(flit_type_t) keeps this calculation correct if that enum changes.
    localparam int PAYLOAD_WIDTH =
        FLIT_WIDTH
        - $bits(flit_type_t)
        - X_WIDTH
        - Y_WIDTH
        - PACKET_ID_WIDTH;


    // ========================================================
    // FLIT FORMAT
    // ========================================================

    // flit_t is the value transferred whenever a physical NoC link sends one
    // flit; the link's flow-control signals are separate from this data type.
    //
    // A packed struct is laid out from most-significant field to
    // least-significant field in declaration order. With the default 4x4,
    // 64-bit configuration, casting flit_t to logic [63:0] gives:
    //
    //   [63:62] flit_type   Packet position: HEAD, BODY, TAIL, or SINGLE
    //   [61:60] dest_x      Destination column (0 through 3)
    //   [59:58] dest_y      Destination row    (0 through 3)
    //   [57:50] packet_id   Debug/verification tag
    //   [49:0]  payload     Data carried by this flit
    //
    // Every flit uses this same physical layout. Code should access named
    // fields rather than hard-coded slices so parameter changes remain safe.
    typedef struct packed {

        // Identifies this flit's position within its packet.
        flit_type_t flit_type;

        // Coordinates consumed by the routing logic.
        logic [X_WIDTH-1:0] dest_x;
        logic [Y_WIDTH-1:0] dest_y;

        // Packet-tracking tag; routers do not use it to choose an output.
        logic [PACKET_ID_WIDTH-1:0] packet_id;

        // Application/test payload available after the control fields.
        logic [PAYLOAD_WIDTH-1:0] payload;

    } flit_t;


    // ========================================================
    // ARBITRATION TYPES
    // ========================================================

    // To show how many input ports are requesting an output
    typedef logic [NUM_PORTS-1:0] request_t;

    // round robin arbitration produces grant_t, where
    // one input wins priority.
    typedef logic [NUM_PORTS-1:0] grant_t;


    // ========================================================
    // HELPER FUNCTIONS
    // ========================================================

    // Translate an output direction at one router into the corresponding
    // input direction at its neighbor. For example, a flit leaving router A
    // through EAST_PORT enters router B through WEST_PORT. LOCAL_PORT has no
    // neighbor, so it maps to itself. The default also maps an invalid or
    // unknown enum encoding to LOCAL_PORT.
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


    // True when allocation/control logic should treat this flit as the start
    // of a new packet. SINGLE is both a packet start and a packet end.
    function automatic logic is_head(input flit_t flit);

        return (flit.flit_type == FLIT_HEAD) ||
               (flit.flit_type == FLIT_SINGLE);

    endfunction


    // True when wormhole control may release resources held by this packet
    // after the flit advances. SINGLE returns true because it ends immediately.
    function automatic logic is_tail(input flit_t flit);

        return (flit.flit_type == FLIT_TAIL) ||
               (flit.flit_type == FLIT_SINGLE);

    endfunction


endpackage
