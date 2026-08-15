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
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VicoPhaseResult;
    IData/*31:0*/ crossbar_5x5__DOT__output_port;
    IData/*31:0*/ crossbar_5x5__DOT__input_port;
    VlUnpacked<QData/*63:0*/, 5> input_flits;
    VlUnpacked<CData/*4:0*/, 5> grants;
    VlUnpacked<QData/*63:0*/, 5> output_flits;
    VlUnpacked<QData/*63:0*/, 5> crossbar_5x5__DOT__input_flits;
    VlUnpacked<CData/*4:0*/, 5> crossbar_5x5__DOT__grants;
    VlUnpacked<QData/*63:0*/, 5> crossbar_5x5__DOT__output_flits;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
