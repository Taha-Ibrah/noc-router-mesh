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
                    vlSelfRef.round_robin__DOT__clk 
                        = vlSelfRef.clk;
                    vlSelfRef.round_robin__DOT__rst_n 
                        = vlSelfRef.rst_n;
                    vlSelfRef.round_robin__DOT__request 
                        = vlSelfRef.request;
                    vlSelfRef.round_robin__DOT__grant = 0U;
                    vlSelfRef.round_robin__DOT__offset = 0U;
                    while (VL_GTS_III(32, 5U, vlSelfRef.round_robin__DOT__offset)) {
                        vlSelfRef.round_robin__DOT__request_index 
                            = ((IData)(vlSelfRef.round_robin__DOT__priority_ptr) 
                               + vlSelfRef.round_robin__DOT__offset);
                        if (VL_LTES_III(32, 5U, vlSelfRef.round_robin__DOT__request_index)) {
                            vlSelfRef.round_robin__DOT__request_index 
                                = (vlSelfRef.round_robin__DOT__request_index 
                                   - (IData)(5U));
                        }
                        if (((0U == (IData)(vlSelfRef.round_robin__DOT__grant)) 
                             & ((4U >= (7U & vlSelfRef.round_robin__DOT__request_index)) 
                                && (1U & ((IData)(vlSelfRef.round_robin__DOT__request) 
                                          >> (7U & vlSelfRef.round_robin__DOT__request_index)))))) {
                            if (VL_LIKELY(((4U >= (7U 
                                                   & vlSelfRef.round_robin__DOT__request_index))))) {
                                vlSelfRef.round_robin__DOT__grant 
                                    = ((IData)(vlSelfRef.round_robin__DOT__grant) 
                                       | (0x1fU & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & vlSelfRef.round_robin__DOT__request_index))));
                            }
                        }
                        vlSelfRef.round_robin__DOT__offset 
                            = ((IData)(1U) + vlSelfRef.round_robin__DOT__offset);
                    }
                    vlSelfRef.grant = vlSelfRef.round_robin__DOT__grant;
                }
            }
        }
    }
    return (__VicoExecute);
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
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

void Vtop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((((~ (IData)(vlSelfRef.round_robin__DOT__rst_n)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__round_robin__DOT__rst_n__0)) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.round_robin__DOT__clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__round_robin__DOT__clk__0))))));
        vlSelfRef.__Vtrigprevexpr___TOP__round_robin__DOT__clk__0 
            = vlSelfRef.round_robin__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__round_robin__DOT__rst_n__0 
            = vlSelfRef.round_robin__DOT__rst_n;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtop___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    if (vlSelfRef.round_robin__DOT__rst_n) {
                        vlSelfRef.round_robin__DOT__unnamedblk1__DOT__i = 0U;
                        while (VL_GTS_III(32, 5U, vlSelfRef.round_robin__DOT__unnamedblk1__DOT__i)) {
                            if (((4U >= (7U & vlSelfRef.round_robin__DOT__unnamedblk1__DOT__i)) 
                                 && (1U & ((IData)(vlSelfRef.round_robin__DOT__grant) 
                                           >> (7U & vlSelfRef.round_robin__DOT__unnamedblk1__DOT__i))))) {
                                vlSelfRef.round_robin__DOT__priority_ptr 
                                    = ((4U == vlSelfRef.round_robin__DOT__unnamedblk1__DOT__i)
                                        ? 0U : (7U 
                                                & ((IData)(1U) 
                                                   + vlSelfRef.round_robin__DOT__unnamedblk1__DOT__i)));
                            }
                            vlSelfRef.round_robin__DOT__unnamedblk1__DOT__i 
                                = ((IData)(1U) + vlSelfRef.round_robin__DOT__unnamedblk1__DOT__i);
                        }
                    } else {
                        vlSelfRef.round_robin__DOT__priority_ptr = 0U;
                    }
                    vlSelfRef.round_robin__DOT__grant = 0U;
                    vlSelfRef.round_robin__DOT__offset = 0U;
                    while (VL_GTS_III(32, 5U, vlSelfRef.round_robin__DOT__offset)) {
                        vlSelfRef.round_robin__DOT__request_index 
                            = ((IData)(vlSelfRef.round_robin__DOT__priority_ptr) 
                               + vlSelfRef.round_robin__DOT__offset);
                        if (VL_LTES_III(32, 5U, vlSelfRef.round_robin__DOT__request_index)) {
                            vlSelfRef.round_robin__DOT__request_index 
                                = (vlSelfRef.round_robin__DOT__request_index 
                                   - (IData)(5U));
                        }
                        if (((0U == (IData)(vlSelfRef.round_robin__DOT__grant)) 
                             & ((4U >= (7U & vlSelfRef.round_robin__DOT__request_index)) 
                                && (1U & ((IData)(vlSelfRef.round_robin__DOT__request) 
                                          >> (7U & vlSelfRef.round_robin__DOT__request_index)))))) {
                            if (VL_LIKELY(((4U >= (7U 
                                                   & vlSelfRef.round_robin__DOT__request_index))))) {
                                vlSelfRef.round_robin__DOT__grant 
                                    = ((IData)(vlSelfRef.round_robin__DOT__grant) 
                                       | (0x1fU & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & vlSelfRef.round_robin__DOT__request_index))));
                            }
                        }
                        vlSelfRef.round_robin__DOT__offset 
                            = ((IData)(1U) + vlSelfRef.round_robin__DOT__offset);
                    }
                    vlSelfRef.grant = vlSelfRef.round_robin__DOT__grant;
                }
            }
        }
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/Users/taha.ibrah/Downloads/noc-router-mesh/rtl/round_robin_arbitration.sv", 21, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vtop___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/Users/taha.ibrah/Downloads/noc-router-mesh/rtl/round_robin_arbitration.sv", 21, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/Users/taha.ibrah/Downloads/noc-router-mesh/rtl/round_robin_arbitration.sv", 21, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vtop___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtop___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
    if (VL_UNLIKELY(((vlSelfRef.request & 0xe0U)))) {
        Verilated::overWidthError("request");
    }
}
#endif  // VL_DEBUG
