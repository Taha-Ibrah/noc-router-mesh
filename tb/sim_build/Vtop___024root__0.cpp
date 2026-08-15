// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__ico
        vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VicoTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vtop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_ico
            if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_sequent__TOP__0
                    vlSelfRef.crossbar_5x5__DOT__input_flits 
                        = vlSelfRef.input_flits;
                    vlSelfRef.crossbar_5x5__DOT__grants 
                        = vlSelfRef.grants;
                    vlSelfRef.crossbar_5x5__DOT__output_port = 0U;
                    while (VL_GTS_III(32, 5U, vlSelfRef.crossbar_5x5__DOT__output_port)) {
                        if (VL_LIKELY(((4U >= (7U & vlSelfRef.crossbar_5x5__DOT__output_port))))) {
                            vlSelfRef.crossbar_5x5__DOT__output_flits[(7U 
                                                                       & vlSelfRef.crossbar_5x5__DOT__output_port)] = 0ULL;
                        }
                        vlSelfRef.crossbar_5x5__DOT__input_port = 0U;
                        while (VL_GTS_III(32, 5U, vlSelfRef.crossbar_5x5__DOT__input_port)) {
                            if (((4U >= (7U & vlSelfRef.crossbar_5x5__DOT__input_port)) 
                                 && (1U & (((4U >= 
                                             (7U & vlSelfRef.crossbar_5x5__DOT__output_port))
                                             ? vlSelfRef.crossbar_5x5__DOT__grants
                                            [(7U & vlSelfRef.crossbar_5x5__DOT__output_port)]
                                             : 0U) 
                                           >> (7U & vlSelfRef.crossbar_5x5__DOT__input_port))))) {
                                if (VL_LIKELY(((4U 
                                                >= 
                                                (7U 
                                                 & vlSelfRef.crossbar_5x5__DOT__output_port))))) {
                                    vlSelfRef.crossbar_5x5__DOT__output_flits[(7U 
                                                                               & vlSelfRef.crossbar_5x5__DOT__output_port)] 
                                        = vlSelfRef.crossbar_5x5__DOT__input_flits
                                        [((4U >= (7U 
                                                  & vlSelfRef.crossbar_5x5__DOT__input_port))
                                           ? (7U & vlSelfRef.crossbar_5x5__DOT__input_port)
                                           : 0U)];
                                }
                            }
                            vlSelfRef.crossbar_5x5__DOT__input_port 
                                = ((IData)(1U) + vlSelfRef.crossbar_5x5__DOT__input_port);
                        }
                        vlSelfRef.crossbar_5x5__DOT__output_port 
                            = ((IData)(1U) + vlSelfRef.crossbar_5x5__DOT__output_port);
                    }
                    vlSelfRef.output_flits = vlSelfRef.crossbar_5x5__DOT__output_flits;
                }
            }
        }
    }
    return (__VicoExecute);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/Users/taha.ibrah/Downloads/noc-router-mesh/rtl/crossbar_5x5_switch.sv", 27, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vtop___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
