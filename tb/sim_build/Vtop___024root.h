// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
class Vtop_noc_pkg;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final {
  public:
    // CELLS
    Vtop_noc_pkg* __PVT__noc_pkg;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(grant_accepted,4,0);
        CData/*0:0*/ switch_allocator__DOT__clk;
        CData/*0:0*/ switch_allocator__DOT__rst_n;
        CData/*4:0*/ switch_allocator__DOT__grant_accepted;
        CData/*0:0*/ switch_allocator__DOT__port_west__DOT__clk;
        CData/*0:0*/ switch_allocator__DOT__port_west__DOT__rst_n;
        CData/*0:0*/ switch_allocator__DOT__port_west__DOT__grant_accepted;
        CData/*4:0*/ switch_allocator__DOT__port_west__DOT__request;
        CData/*4:0*/ switch_allocator__DOT__port_west__DOT__grant;
        CData/*2:0*/ switch_allocator__DOT__port_west__DOT__priority_ptr;
        CData/*4:0*/ switch_allocator__DOT__port_west__DOT__held_grant;
        CData/*0:0*/ switch_allocator__DOT__port_west__DOT__holding_grant;
        CData/*0:0*/ switch_allocator__DOT__port_south__DOT__clk;
        CData/*0:0*/ switch_allocator__DOT__port_south__DOT__rst_n;
        CData/*0:0*/ switch_allocator__DOT__port_south__DOT__grant_accepted;
        CData/*4:0*/ switch_allocator__DOT__port_south__DOT__request;
        CData/*4:0*/ switch_allocator__DOT__port_south__DOT__grant;
        CData/*2:0*/ switch_allocator__DOT__port_south__DOT__priority_ptr;
        CData/*4:0*/ switch_allocator__DOT__port_south__DOT__held_grant;
        CData/*0:0*/ switch_allocator__DOT__port_south__DOT__holding_grant;
        CData/*0:0*/ switch_allocator__DOT__port_east__DOT__clk;
        CData/*0:0*/ switch_allocator__DOT__port_east__DOT__rst_n;
        CData/*0:0*/ switch_allocator__DOT__port_east__DOT__grant_accepted;
        CData/*4:0*/ switch_allocator__DOT__port_east__DOT__request;
        CData/*4:0*/ switch_allocator__DOT__port_east__DOT__grant;
        CData/*2:0*/ switch_allocator__DOT__port_east__DOT__priority_ptr;
        CData/*4:0*/ switch_allocator__DOT__port_east__DOT__held_grant;
        CData/*0:0*/ switch_allocator__DOT__port_east__DOT__holding_grant;
        CData/*0:0*/ switch_allocator__DOT__port_north__DOT__clk;
        CData/*0:0*/ switch_allocator__DOT__port_north__DOT__rst_n;
        CData/*0:0*/ switch_allocator__DOT__port_north__DOT__grant_accepted;
        CData/*4:0*/ switch_allocator__DOT__port_north__DOT__request;
        CData/*4:0*/ switch_allocator__DOT__port_north__DOT__grant;
        CData/*2:0*/ switch_allocator__DOT__port_north__DOT__priority_ptr;
        CData/*4:0*/ switch_allocator__DOT__port_north__DOT__held_grant;
        CData/*0:0*/ switch_allocator__DOT__port_north__DOT__holding_grant;
        CData/*0:0*/ switch_allocator__DOT__port_local__DOT__clk;
        CData/*0:0*/ switch_allocator__DOT__port_local__DOT__rst_n;
        CData/*0:0*/ switch_allocator__DOT__port_local__DOT__grant_accepted;
        CData/*4:0*/ switch_allocator__DOT__port_local__DOT__request;
        CData/*4:0*/ switch_allocator__DOT__port_local__DOT__grant;
        CData/*2:0*/ switch_allocator__DOT__port_local__DOT__priority_ptr;
        CData/*4:0*/ switch_allocator__DOT__port_local__DOT__held_grant;
        CData/*0:0*/ switch_allocator__DOT__port_local__DOT__holding_grant;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__switch_allocator__DOT__port_west__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__switch_allocator__DOT__port_west__DOT__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__switch_allocator__DOT__port_south__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__switch_allocator__DOT__port_south__DOT__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__switch_allocator__DOT__port_east__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__switch_allocator__DOT__port_east__DOT__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__switch_allocator__DOT__port_north__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__switch_allocator__DOT__port_north__DOT__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__switch_allocator__DOT__port_local__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__switch_allocator__DOT__port_local__DOT__rst_n__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        IData/*31:0*/ switch_allocator__DOT__port_west__DOT__offset;
        IData/*31:0*/ switch_allocator__DOT__port_west__DOT__request_index;
    };
    struct {
        IData/*31:0*/ switch_allocator__DOT__port_west__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ switch_allocator__DOT__port_south__DOT__offset;
        IData/*31:0*/ switch_allocator__DOT__port_south__DOT__request_index;
        IData/*31:0*/ switch_allocator__DOT__port_south__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ switch_allocator__DOT__port_east__DOT__offset;
        IData/*31:0*/ switch_allocator__DOT__port_east__DOT__request_index;
        IData/*31:0*/ switch_allocator__DOT__port_east__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ switch_allocator__DOT__port_north__DOT__offset;
        IData/*31:0*/ switch_allocator__DOT__port_north__DOT__request_index;
        IData/*31:0*/ switch_allocator__DOT__port_north__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ switch_allocator__DOT__port_local__DOT__offset;
        IData/*31:0*/ switch_allocator__DOT__port_local__DOT__request_index;
        IData/*31:0*/ switch_allocator__DOT__port_local__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*4:0*/, 5> requests;
        VlUnpacked<CData/*4:0*/, 5> grants;
        VlUnpacked<CData/*4:0*/, 5> switch_allocator__DOT__requests;
        VlUnpacked<CData/*4:0*/, 5> switch_allocator__DOT__grants;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr IData/*31:0*/ switch_allocator__DOT__port_west__DOT__PRIORITY_WIDTH = 3U;
    static constexpr IData/*31:0*/ switch_allocator__DOT__port_south__DOT__PRIORITY_WIDTH = 3U;
    static constexpr IData/*31:0*/ switch_allocator__DOT__port_east__DOT__PRIORITY_WIDTH = 3U;
    static constexpr IData/*31:0*/ switch_allocator__DOT__port_north__DOT__PRIORITY_WIDTH = 3U;
    static constexpr IData/*31:0*/ switch_allocator__DOT__port_local__DOT__PRIORITY_WIDTH = 3U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
