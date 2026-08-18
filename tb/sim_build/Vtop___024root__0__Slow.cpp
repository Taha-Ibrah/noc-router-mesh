// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__switch_allocator__DOT__port_west__DOT__clk__0 
        = vlSelfRef.switch_allocator__DOT__port_west__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__switch_allocator__DOT__port_west__DOT__rst_n__0 
        = vlSelfRef.switch_allocator__DOT__port_west__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__switch_allocator__DOT__port_south__DOT__clk__0 
        = vlSelfRef.switch_allocator__DOT__port_south__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__switch_allocator__DOT__port_south__DOT__rst_n__0 
        = vlSelfRef.switch_allocator__DOT__port_south__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__switch_allocator__DOT__port_east__DOT__clk__0 
        = vlSelfRef.switch_allocator__DOT__port_east__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__switch_allocator__DOT__port_east__DOT__rst_n__0 
        = vlSelfRef.switch_allocator__DOT__port_east__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__switch_allocator__DOT__port_north__DOT__clk__0 
        = vlSelfRef.switch_allocator__DOT__port_north__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__switch_allocator__DOT__port_north__DOT__rst_n__0 
        = vlSelfRef.switch_allocator__DOT__port_north__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__switch_allocator__DOT__port_local__DOT__clk__0 
        = vlSelfRef.switch_allocator__DOT__port_local__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__switch_allocator__DOT__port_local__DOT__rst_n__0 
        = vlSelfRef.switch_allocator__DOT__port_local__DOT__rst_n;
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
            VL_FATAL_MT("/Users/taha.ibrah/Downloads/noc-router-mesh/rtl/switch_allocator.sv", 20, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
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

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

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
                Vtop___024root___ico_sequent__TOP__0(vlSelf);
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

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge switch_allocator.port_west.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge switch_allocator.port_west.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge switch_allocator.port_south.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge switch_allocator.port_south.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(posedge switch_allocator.port_east.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(negedge switch_allocator.port_east.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @(posedge switch_allocator.port_north.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @(negedge switch_allocator.port_north.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @(posedge switch_allocator.port_local.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @(negedge switch_allocator.port_local.rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->grant_accepted = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7206175099999686811ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->requests[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2409807035581595736ull);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->grants[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9146194897259083180ull);
    }
    vlSelf->switch_allocator__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8748102071354936237ull);
    vlSelf->switch_allocator__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14417157917372011626ull);
    vlSelf->switch_allocator__DOT__grant_accepted = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7583469205751566421ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->switch_allocator__DOT__requests[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14735903708983834044ull);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->switch_allocator__DOT__grants[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12710173479556339811ull);
    }
    vlSelf->switch_allocator__DOT__port_west__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7711445057230318242ull);
    vlSelf->switch_allocator__DOT__port_west__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15122092930361738901ull);
    vlSelf->switch_allocator__DOT__port_west__DOT__grant_accepted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10738595087198023938ull);
    vlSelf->switch_allocator__DOT__port_west__DOT__request = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3129145780458912943ull);
    vlSelf->switch_allocator__DOT__port_west__DOT__grant = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12650832275177051511ull);
    vlSelf->switch_allocator__DOT__port_west__DOT__priority_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6047002946842404142ull);
    vlSelf->switch_allocator__DOT__port_west__DOT__held_grant = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10327322080328069156ull);
    vlSelf->switch_allocator__DOT__port_west__DOT__holding_grant = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5005553756594646141ull);
    vlSelf->switch_allocator__DOT__port_west__DOT__offset = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4843447872522538113ull);
    vlSelf->switch_allocator__DOT__port_west__DOT__request_index = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6418223229724198717ull);
    vlSelf->switch_allocator__DOT__port_west__DOT__unnamedblk1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17125228361396356605ull);
    vlSelf->switch_allocator__DOT__port_south__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10797949707204396180ull);
    vlSelf->switch_allocator__DOT__port_south__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11831672479048154071ull);
    vlSelf->switch_allocator__DOT__port_south__DOT__grant_accepted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9675667184926537713ull);
    vlSelf->switch_allocator__DOT__port_south__DOT__request = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5998273444965248500ull);
    vlSelf->switch_allocator__DOT__port_south__DOT__grant = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9875924360736447271ull);
    vlSelf->switch_allocator__DOT__port_south__DOT__priority_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11841291725181539292ull);
    vlSelf->switch_allocator__DOT__port_south__DOT__held_grant = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 949534059086601298ull);
    vlSelf->switch_allocator__DOT__port_south__DOT__holding_grant = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17678622223672416023ull);
    vlSelf->switch_allocator__DOT__port_south__DOT__offset = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5681616009629413069ull);
    vlSelf->switch_allocator__DOT__port_south__DOT__request_index = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12150773277523952383ull);
    vlSelf->switch_allocator__DOT__port_south__DOT__unnamedblk1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12983993394781893796ull);
    vlSelf->switch_allocator__DOT__port_east__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14067213157871134073ull);
    vlSelf->switch_allocator__DOT__port_east__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13802743998071971426ull);
    vlSelf->switch_allocator__DOT__port_east__DOT__grant_accepted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2392143507337459449ull);
    vlSelf->switch_allocator__DOT__port_east__DOT__request = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2359627198612893653ull);
    vlSelf->switch_allocator__DOT__port_east__DOT__grant = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14684509736607873132ull);
    vlSelf->switch_allocator__DOT__port_east__DOT__priority_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8128180377264508209ull);
    vlSelf->switch_allocator__DOT__port_east__DOT__held_grant = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1546764766602658588ull);
    vlSelf->switch_allocator__DOT__port_east__DOT__holding_grant = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3002748702772646983ull);
    vlSelf->switch_allocator__DOT__port_east__DOT__offset = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15314913575650482631ull);
    vlSelf->switch_allocator__DOT__port_east__DOT__request_index = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9050535050681508044ull);
    vlSelf->switch_allocator__DOT__port_east__DOT__unnamedblk1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1266056674308025003ull);
    vlSelf->switch_allocator__DOT__port_north__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 532000151387812360ull);
    vlSelf->switch_allocator__DOT__port_north__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2341909993715993180ull);
    vlSelf->switch_allocator__DOT__port_north__DOT__grant_accepted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13524463320229497877ull);
    vlSelf->switch_allocator__DOT__port_north__DOT__request = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6672660199044660356ull);
    vlSelf->switch_allocator__DOT__port_north__DOT__grant = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15701653229298774794ull);
    vlSelf->switch_allocator__DOT__port_north__DOT__priority_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14988556300892978380ull);
    vlSelf->switch_allocator__DOT__port_north__DOT__held_grant = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9370099190329813298ull);
    vlSelf->switch_allocator__DOT__port_north__DOT__holding_grant = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17626160026126152448ull);
    vlSelf->switch_allocator__DOT__port_north__DOT__offset = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14839871921630956022ull);
    vlSelf->switch_allocator__DOT__port_north__DOT__request_index = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2786518240899631891ull);
    vlSelf->switch_allocator__DOT__port_north__DOT__unnamedblk1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14657059269628584414ull);
    vlSelf->switch_allocator__DOT__port_local__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9049270079587659463ull);
    vlSelf->switch_allocator__DOT__port_local__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17430244364733162301ull);
    vlSelf->switch_allocator__DOT__port_local__DOT__grant_accepted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7251443948312223690ull);
    vlSelf->switch_allocator__DOT__port_local__DOT__request = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5151470946070038364ull);
    vlSelf->switch_allocator__DOT__port_local__DOT__grant = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3123871833292668426ull);
    vlSelf->switch_allocator__DOT__port_local__DOT__priority_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15726170420937054ull);
    vlSelf->switch_allocator__DOT__port_local__DOT__held_grant = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13529164773422760670ull);
    vlSelf->switch_allocator__DOT__port_local__DOT__holding_grant = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16487419923036116811ull);
    vlSelf->switch_allocator__DOT__port_local__DOT__offset = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15459841521252075695ull);
    vlSelf->switch_allocator__DOT__port_local__DOT__request_index = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15220065817121720634ull);
    vlSelf->switch_allocator__DOT__port_local__DOT__unnamedblk1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13430932576890222513ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__switch_allocator__DOT__port_west__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__switch_allocator__DOT__port_west__DOT__rst_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__switch_allocator__DOT__port_south__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__switch_allocator__DOT__port_south__DOT__rst_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__switch_allocator__DOT__port_east__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__switch_allocator__DOT__port_east__DOT__rst_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__switch_allocator__DOT__port_north__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__switch_allocator__DOT__port_north__DOT__rst_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__switch_allocator__DOT__port_local__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__switch_allocator__DOT__port_local__DOT__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
