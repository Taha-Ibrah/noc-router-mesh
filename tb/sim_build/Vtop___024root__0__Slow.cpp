// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/Users/taha.ibrah/Downloads/noc-router-mesh/rtl/crossbar_5x5_switch.sv", 27, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtop___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
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
    return (__VstlExecute);
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->input_flits[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1253407704872256344ull);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->grants[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9146194897259083180ull);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->output_flits[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2985388486606312364ull);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->crossbar_5x5__DOT__input_flits[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15583788468047565711ull);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->crossbar_5x5__DOT__grants[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17189846280323062115ull);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->crossbar_5x5__DOT__output_flits[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8371623315474978414ull);
    }
    vlSelf->crossbar_5x5__DOT__output_port = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12220421254414253264ull);
    vlSelf->crossbar_5x5__DOT__input_port = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2241226337573114746ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
}
