// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_NOC_PKG_H_
#define VERILATED_VTOP_NOC_PKG_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_noc_pkg final {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr IData/*31:0*/ MESH_X = 4U;
    static constexpr IData/*31:0*/ MESH_Y = 4U;
    static constexpr IData/*31:0*/ NUM_PORTS = 5U;
    static constexpr IData/*31:0*/ FLIT_WIDTH = 0x00000040U;
    static constexpr IData/*31:0*/ FIFO_DEPTH = 4U;
    static constexpr IData/*31:0*/ FIFO_ADDR_WIDTH = 2U;
    static constexpr IData/*31:0*/ X_WIDTH = 2U;
    static constexpr IData/*31:0*/ Y_WIDTH = 2U;
    static constexpr IData/*31:0*/ PORT_WIDTH = 3U;
    static constexpr IData/*31:0*/ FLIT_TYPE_WIDTH = 2U;
    static constexpr IData/*31:0*/ PACKET_ID_WIDTH = 8U;
    static constexpr IData/*31:0*/ PAYLOAD_WIDTH = 0x00000032U;

    // CONSTRUCTORS
    Vtop_noc_pkg();
    ~Vtop_noc_pkg();
    void ctor(Vtop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop_noc_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
