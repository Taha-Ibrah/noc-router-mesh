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

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.switch_allocator__DOT__clk = vlSelfRef.clk;
    vlSelfRef.switch_allocator__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.switch_allocator__DOT__grant_accepted 
        = vlSelfRef.grant_accepted;
    vlSelfRef.switch_allocator__DOT__requests = vlSelfRef.requests;
    vlSelfRef.switch_allocator__DOT__port_west__DOT__clk 
        = vlSelfRef.switch_allocator__DOT__clk;
    vlSelfRef.switch_allocator__DOT__port_south__DOT__clk 
        = vlSelfRef.switch_allocator__DOT__clk;
    vlSelfRef.switch_allocator__DOT__port_east__DOT__clk 
        = vlSelfRef.switch_allocator__DOT__clk;
    vlSelfRef.switch_allocator__DOT__port_north__DOT__clk 
        = vlSelfRef.switch_allocator__DOT__clk;
    vlSelfRef.switch_allocator__DOT__port_local__DOT__clk 
        = vlSelfRef.switch_allocator__DOT__clk;
    vlSelfRef.switch_allocator__DOT__port_west__DOT__rst_n 
        = vlSelfRef.switch_allocator__DOT__rst_n;
    vlSelfRef.switch_allocator__DOT__port_south__DOT__rst_n 
        = vlSelfRef.switch_allocator__DOT__rst_n;
    vlSelfRef.switch_allocator__DOT__port_east__DOT__rst_n 
        = vlSelfRef.switch_allocator__DOT__rst_n;
    vlSelfRef.switch_allocator__DOT__port_north__DOT__rst_n 
        = vlSelfRef.switch_allocator__DOT__rst_n;
    vlSelfRef.switch_allocator__DOT__port_local__DOT__rst_n 
        = vlSelfRef.switch_allocator__DOT__rst_n;
    vlSelfRef.switch_allocator__DOT__port_west__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.switch_allocator__DOT__grant_accepted) 
                 >> 4U));
    vlSelfRef.switch_allocator__DOT__port_south__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.switch_allocator__DOT__grant_accepted) 
                 >> 3U));
    vlSelfRef.switch_allocator__DOT__port_east__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.switch_allocator__DOT__grant_accepted) 
                 >> 2U));
    vlSelfRef.switch_allocator__DOT__port_north__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.switch_allocator__DOT__grant_accepted) 
                 >> 1U));
    vlSelfRef.switch_allocator__DOT__port_local__DOT__grant_accepted 
        = (1U & (IData)(vlSelfRef.switch_allocator__DOT__grant_accepted));
    vlSelfRef.switch_allocator__DOT__port_west__DOT__request 
        = vlSelfRef.switch_allocator__DOT__requests[4U];
    vlSelfRef.switch_allocator__DOT__port_south__DOT__request 
        = vlSelfRef.switch_allocator__DOT__requests[3U];
    vlSelfRef.switch_allocator__DOT__port_east__DOT__request 
        = vlSelfRef.switch_allocator__DOT__requests[2U];
    vlSelfRef.switch_allocator__DOT__port_north__DOT__request 
        = vlSelfRef.switch_allocator__DOT__requests[1U];
    vlSelfRef.switch_allocator__DOT__port_local__DOT__request 
        = vlSelfRef.switch_allocator__DOT__requests[0U];
    vlSelfRef.switch_allocator__DOT__port_west__DOT__grant = 0U;
    vlSelfRef.switch_allocator__DOT__port_west__DOT__request_index = 0U;
    if (vlSelfRef.switch_allocator__DOT__port_west__DOT__holding_grant) {
        vlSelfRef.switch_allocator__DOT__port_west__DOT__grant 
            = vlSelfRef.switch_allocator__DOT__port_west__DOT__held_grant;
    } else {
        vlSelfRef.switch_allocator__DOT__port_west__DOT__offset = 0U;
        while (VL_GTS_III(32, 5U, vlSelfRef.switch_allocator__DOT__port_west__DOT__offset)) {
            vlSelfRef.switch_allocator__DOT__port_west__DOT__request_index 
                = ((IData)(vlSelfRef.switch_allocator__DOT__port_west__DOT__priority_ptr) 
                   + vlSelfRef.switch_allocator__DOT__port_west__DOT__offset);
            if (VL_LTES_III(32, 5U, vlSelfRef.switch_allocator__DOT__port_west__DOT__request_index)) {
                vlSelfRef.switch_allocator__DOT__port_west__DOT__request_index 
                    = (vlSelfRef.switch_allocator__DOT__port_west__DOT__request_index 
                       - (IData)(5U));
            }
            if (((0U == (IData)(vlSelfRef.switch_allocator__DOT__port_west__DOT__grant)) 
                 & ((4U >= (7U & vlSelfRef.switch_allocator__DOT__port_west__DOT__request_index)) 
                    && (1U & ((IData)(vlSelfRef.switch_allocator__DOT__port_west__DOT__request) 
                              >> (7U & vlSelfRef.switch_allocator__DOT__port_west__DOT__request_index)))))) {
                if (VL_LIKELY(((4U >= (7U & vlSelfRef.switch_allocator__DOT__port_west__DOT__request_index))))) {
                    vlSelfRef.switch_allocator__DOT__port_west__DOT__grant 
                        = ((IData)(vlSelfRef.switch_allocator__DOT__port_west__DOT__grant) 
                           | (0x1fU & ((IData)(1U) 
                                       << (7U & vlSelfRef.switch_allocator__DOT__port_west__DOT__request_index))));
                }
            }
            vlSelfRef.switch_allocator__DOT__port_west__DOT__offset 
                = ((IData)(1U) + vlSelfRef.switch_allocator__DOT__port_west__DOT__offset);
        }
    }
    vlSelfRef.switch_allocator__DOT__port_south__DOT__grant = 0U;
    vlSelfRef.switch_allocator__DOT__port_south__DOT__request_index = 0U;
    if (vlSelfRef.switch_allocator__DOT__port_south__DOT__holding_grant) {
        vlSelfRef.switch_allocator__DOT__port_south__DOT__grant 
            = vlSelfRef.switch_allocator__DOT__port_south__DOT__held_grant;
    } else {
        vlSelfRef.switch_allocator__DOT__port_south__DOT__offset = 0U;
        while (VL_GTS_III(32, 5U, vlSelfRef.switch_allocator__DOT__port_south__DOT__offset)) {
            vlSelfRef.switch_allocator__DOT__port_south__DOT__request_index 
                = ((IData)(vlSelfRef.switch_allocator__DOT__port_south__DOT__priority_ptr) 
                   + vlSelfRef.switch_allocator__DOT__port_south__DOT__offset);
            if (VL_LTES_III(32, 5U, vlSelfRef.switch_allocator__DOT__port_south__DOT__request_index)) {
                vlSelfRef.switch_allocator__DOT__port_south__DOT__request_index 
                    = (vlSelfRef.switch_allocator__DOT__port_south__DOT__request_index 
                       - (IData)(5U));
            }
            if (((0U == (IData)(vlSelfRef.switch_allocator__DOT__port_south__DOT__grant)) 
                 & ((4U >= (7U & vlSelfRef.switch_allocator__DOT__port_south__DOT__request_index)) 
                    && (1U & ((IData)(vlSelfRef.switch_allocator__DOT__port_south__DOT__request) 
                              >> (7U & vlSelfRef.switch_allocator__DOT__port_south__DOT__request_index)))))) {
                if (VL_LIKELY(((4U >= (7U & vlSelfRef.switch_allocator__DOT__port_south__DOT__request_index))))) {
                    vlSelfRef.switch_allocator__DOT__port_south__DOT__grant 
                        = ((IData)(vlSelfRef.switch_allocator__DOT__port_south__DOT__grant) 
                           | (0x1fU & ((IData)(1U) 
                                       << (7U & vlSelfRef.switch_allocator__DOT__port_south__DOT__request_index))));
                }
            }
            vlSelfRef.switch_allocator__DOT__port_south__DOT__offset 
                = ((IData)(1U) + vlSelfRef.switch_allocator__DOT__port_south__DOT__offset);
        }
    }
    vlSelfRef.switch_allocator__DOT__port_east__DOT__grant = 0U;
    vlSelfRef.switch_allocator__DOT__port_east__DOT__request_index = 0U;
    if (vlSelfRef.switch_allocator__DOT__port_east__DOT__holding_grant) {
        vlSelfRef.switch_allocator__DOT__port_east__DOT__grant 
            = vlSelfRef.switch_allocator__DOT__port_east__DOT__held_grant;
    } else {
        vlSelfRef.switch_allocator__DOT__port_east__DOT__offset = 0U;
        while (VL_GTS_III(32, 5U, vlSelfRef.switch_allocator__DOT__port_east__DOT__offset)) {
            vlSelfRef.switch_allocator__DOT__port_east__DOT__request_index 
                = ((IData)(vlSelfRef.switch_allocator__DOT__port_east__DOT__priority_ptr) 
                   + vlSelfRef.switch_allocator__DOT__port_east__DOT__offset);
            if (VL_LTES_III(32, 5U, vlSelfRef.switch_allocator__DOT__port_east__DOT__request_index)) {
                vlSelfRef.switch_allocator__DOT__port_east__DOT__request_index 
                    = (vlSelfRef.switch_allocator__DOT__port_east__DOT__request_index 
                       - (IData)(5U));
            }
            if (((0U == (IData)(vlSelfRef.switch_allocator__DOT__port_east__DOT__grant)) 
                 & ((4U >= (7U & vlSelfRef.switch_allocator__DOT__port_east__DOT__request_index)) 
                    && (1U & ((IData)(vlSelfRef.switch_allocator__DOT__port_east__DOT__request) 
                              >> (7U & vlSelfRef.switch_allocator__DOT__port_east__DOT__request_index)))))) {
                if (VL_LIKELY(((4U >= (7U & vlSelfRef.switch_allocator__DOT__port_east__DOT__request_index))))) {
                    vlSelfRef.switch_allocator__DOT__port_east__DOT__grant 
                        = ((IData)(vlSelfRef.switch_allocator__DOT__port_east__DOT__grant) 
                           | (0x1fU & ((IData)(1U) 
                                       << (7U & vlSelfRef.switch_allocator__DOT__port_east__DOT__request_index))));
                }
            }
            vlSelfRef.switch_allocator__DOT__port_east__DOT__offset 
                = ((IData)(1U) + vlSelfRef.switch_allocator__DOT__port_east__DOT__offset);
        }
    }
    vlSelfRef.switch_allocator__DOT__port_north__DOT__grant = 0U;
    vlSelfRef.switch_allocator__DOT__port_north__DOT__request_index = 0U;
    if (vlSelfRef.switch_allocator__DOT__port_north__DOT__holding_grant) {
        vlSelfRef.switch_allocator__DOT__port_north__DOT__grant 
            = vlSelfRef.switch_allocator__DOT__port_north__DOT__held_grant;
    } else {
        vlSelfRef.switch_allocator__DOT__port_north__DOT__offset = 0U;
        while (VL_GTS_III(32, 5U, vlSelfRef.switch_allocator__DOT__port_north__DOT__offset)) {
            vlSelfRef.switch_allocator__DOT__port_north__DOT__request_index 
                = ((IData)(vlSelfRef.switch_allocator__DOT__port_north__DOT__priority_ptr) 
                   + vlSelfRef.switch_allocator__DOT__port_north__DOT__offset);
            if (VL_LTES_III(32, 5U, vlSelfRef.switch_allocator__DOT__port_north__DOT__request_index)) {
                vlSelfRef.switch_allocator__DOT__port_north__DOT__request_index 
                    = (vlSelfRef.switch_allocator__DOT__port_north__DOT__request_index 
                       - (IData)(5U));
            }
            if (((0U == (IData)(vlSelfRef.switch_allocator__DOT__port_north__DOT__grant)) 
                 & ((4U >= (7U & vlSelfRef.switch_allocator__DOT__port_north__DOT__request_index)) 
                    && (1U & ((IData)(vlSelfRef.switch_allocator__DOT__port_north__DOT__request) 
                              >> (7U & vlSelfRef.switch_allocator__DOT__port_north__DOT__request_index)))))) {
                if (VL_LIKELY(((4U >= (7U & vlSelfRef.switch_allocator__DOT__port_north__DOT__request_index))))) {
                    vlSelfRef.switch_allocator__DOT__port_north__DOT__grant 
                        = ((IData)(vlSelfRef.switch_allocator__DOT__port_north__DOT__grant) 
                           | (0x1fU & ((IData)(1U) 
                                       << (7U & vlSelfRef.switch_allocator__DOT__port_north__DOT__request_index))));
                }
            }
            vlSelfRef.switch_allocator__DOT__port_north__DOT__offset 
                = ((IData)(1U) + vlSelfRef.switch_allocator__DOT__port_north__DOT__offset);
        }
    }
    vlSelfRef.switch_allocator__DOT__port_local__DOT__grant = 0U;
    vlSelfRef.switch_allocator__DOT__port_local__DOT__request_index = 0U;
    if (vlSelfRef.switch_allocator__DOT__port_local__DOT__holding_grant) {
        vlSelfRef.switch_allocator__DOT__port_local__DOT__grant 
            = vlSelfRef.switch_allocator__DOT__port_local__DOT__held_grant;
    } else {
        vlSelfRef.switch_allocator__DOT__port_local__DOT__offset = 0U;
        while (VL_GTS_III(32, 5U, vlSelfRef.switch_allocator__DOT__port_local__DOT__offset)) {
            vlSelfRef.switch_allocator__DOT__port_local__DOT__request_index 
                = ((IData)(vlSelfRef.switch_allocator__DOT__port_local__DOT__priority_ptr) 
                   + vlSelfRef.switch_allocator__DOT__port_local__DOT__offset);
            if (VL_LTES_III(32, 5U, vlSelfRef.switch_allocator__DOT__port_local__DOT__request_index)) {
                vlSelfRef.switch_allocator__DOT__port_local__DOT__request_index 
                    = (vlSelfRef.switch_allocator__DOT__port_local__DOT__request_index 
                       - (IData)(5U));
            }
            if (((0U == (IData)(vlSelfRef.switch_allocator__DOT__port_local__DOT__grant)) 
                 & ((4U >= (7U & vlSelfRef.switch_allocator__DOT__port_local__DOT__request_index)) 
                    && (1U & ((IData)(vlSelfRef.switch_allocator__DOT__port_local__DOT__request) 
                              >> (7U & vlSelfRef.switch_allocator__DOT__port_local__DOT__request_index)))))) {
                if (VL_LIKELY(((4U >= (7U & vlSelfRef.switch_allocator__DOT__port_local__DOT__request_index))))) {
                    vlSelfRef.switch_allocator__DOT__port_local__DOT__grant 
                        = ((IData)(vlSelfRef.switch_allocator__DOT__port_local__DOT__grant) 
                           | (0x1fU & ((IData)(1U) 
                                       << (7U & vlSelfRef.switch_allocator__DOT__port_local__DOT__request_index))));
                }
            }
            vlSelfRef.switch_allocator__DOT__port_local__DOT__offset 
                = ((IData)(1U) + vlSelfRef.switch_allocator__DOT__port_local__DOT__offset);
        }
    }
    vlSelfRef.switch_allocator__DOT__grants[4U] = vlSelfRef.switch_allocator__DOT__port_west__DOT__grant;
    vlSelfRef.switch_allocator__DOT__grants[3U] = vlSelfRef.switch_allocator__DOT__port_south__DOT__grant;
    vlSelfRef.switch_allocator__DOT__grants[2U] = vlSelfRef.switch_allocator__DOT__port_east__DOT__grant;
    vlSelfRef.switch_allocator__DOT__grants[1U] = vlSelfRef.switch_allocator__DOT__port_north__DOT__grant;
    vlSelfRef.switch_allocator__DOT__grants[0U] = vlSelfRef.switch_allocator__DOT__port_local__DOT__grant;
    vlSelfRef.grants = vlSelfRef.switch_allocator__DOT__grants;
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
                Vtop___024root___ico_sequent__TOP__0(vlSelf);
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

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__0
            vlSelfRef.switch_allocator__DOT__port_west__DOT__holding_grant 
                = ((IData)(vlSelfRef.switch_allocator__DOT__port_west__DOT__rst_n) 
                   && ((1U & (~ ((IData)(vlSelfRef.switch_allocator__DOT__port_west__DOT__grant_accepted) 
                                 & (0U != (IData)(vlSelfRef.switch_allocator__DOT__port_west__DOT__grant))))) 
                       && (0U != (IData)(vlSelfRef.switch_allocator__DOT__port_west__DOT__grant))));
            vlSelfRef.switch_allocator__DOT__port_west__DOT__held_grant 
                = ((IData)(vlSelfRef.switch_allocator__DOT__port_west__DOT__rst_n)
                    ? (((IData)(vlSelfRef.switch_allocator__DOT__port_west__DOT__grant_accepted) 
                        & (0U != (IData)(vlSelfRef.switch_allocator__DOT__port_west__DOT__grant)))
                        ? 0U : ((0U != (IData)(vlSelfRef.switch_allocator__DOT__port_west__DOT__grant))
                                 ? (IData)(vlSelfRef.switch_allocator__DOT__port_west__DOT__grant)
                                 : 0U)) : 0U);
            if (vlSelfRef.switch_allocator__DOT__port_west__DOT__rst_n) {
                if (((IData)(vlSelfRef.switch_allocator__DOT__port_west__DOT__grant_accepted) 
                     & (0U != (IData)(vlSelfRef.switch_allocator__DOT__port_west__DOT__grant)))) {
                    vlSelfRef.switch_allocator__DOT__port_west__DOT__unnamedblk1__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, vlSelfRef.switch_allocator__DOT__port_west__DOT__unnamedblk1__DOT__i)) {
                        if (((4U >= (7U & vlSelfRef.switch_allocator__DOT__port_west__DOT__unnamedblk1__DOT__i)) 
                             && (1U & ((IData)(vlSelfRef.switch_allocator__DOT__port_west__DOT__grant) 
                                       >> (7U & vlSelfRef.switch_allocator__DOT__port_west__DOT__unnamedblk1__DOT__i))))) {
                            vlSelfRef.switch_allocator__DOT__port_west__DOT__priority_ptr 
                                = ((4U == vlSelfRef.switch_allocator__DOT__port_west__DOT__unnamedblk1__DOT__i)
                                    ? 0U : (7U & ((IData)(1U) 
                                                  + vlSelfRef.switch_allocator__DOT__port_west__DOT__unnamedblk1__DOT__i)));
                        }
                        vlSelfRef.switch_allocator__DOT__port_west__DOT__unnamedblk1__DOT__i 
                            = ((IData)(1U) + vlSelfRef.switch_allocator__DOT__port_west__DOT__unnamedblk1__DOT__i);
                    }
                }
            } else {
                vlSelfRef.switch_allocator__DOT__port_west__DOT__priority_ptr = 0U;
            }
            vlSelfRef.switch_allocator__DOT__port_west__DOT__grant = 0U;
            vlSelfRef.switch_allocator__DOT__port_west__DOT__request_index = 0U;
            if (vlSelfRef.switch_allocator__DOT__port_west__DOT__holding_grant) {
                vlSelfRef.switch_allocator__DOT__port_west__DOT__grant 
                    = vlSelfRef.switch_allocator__DOT__port_west__DOT__held_grant;
            } else {
                vlSelfRef.switch_allocator__DOT__port_west__DOT__offset = 0U;
                while (VL_GTS_III(32, 5U, vlSelfRef.switch_allocator__DOT__port_west__DOT__offset)) {
                    vlSelfRef.switch_allocator__DOT__port_west__DOT__request_index 
                        = ((IData)(vlSelfRef.switch_allocator__DOT__port_west__DOT__priority_ptr) 
                           + vlSelfRef.switch_allocator__DOT__port_west__DOT__offset);
                    if (VL_LTES_III(32, 5U, vlSelfRef.switch_allocator__DOT__port_west__DOT__request_index)) {
                        vlSelfRef.switch_allocator__DOT__port_west__DOT__request_index 
                            = (vlSelfRef.switch_allocator__DOT__port_west__DOT__request_index 
                               - (IData)(5U));
                    }
                    if (((0U == (IData)(vlSelfRef.switch_allocator__DOT__port_west__DOT__grant)) 
                         & ((4U >= (7U & vlSelfRef.switch_allocator__DOT__port_west__DOT__request_index)) 
                            && (1U & ((IData)(vlSelfRef.switch_allocator__DOT__port_west__DOT__request) 
                                      >> (7U & vlSelfRef.switch_allocator__DOT__port_west__DOT__request_index)))))) {
                        if (VL_LIKELY(((4U >= (7U & vlSelfRef.switch_allocator__DOT__port_west__DOT__request_index))))) {
                            vlSelfRef.switch_allocator__DOT__port_west__DOT__grant 
                                = ((IData)(vlSelfRef.switch_allocator__DOT__port_west__DOT__grant) 
                                   | (0x1fU & ((IData)(1U) 
                                               << (7U 
                                                   & vlSelfRef.switch_allocator__DOT__port_west__DOT__request_index))));
                        }
                    }
                    vlSelfRef.switch_allocator__DOT__port_west__DOT__offset 
                        = ((IData)(1U) + vlSelfRef.switch_allocator__DOT__port_west__DOT__offset);
                }
            }
            vlSelfRef.switch_allocator__DOT__grants[4U] 
                = vlSelfRef.switch_allocator__DOT__port_west__DOT__grant;
        }
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__1
            vlSelfRef.switch_allocator__DOT__port_south__DOT__holding_grant 
                = ((IData)(vlSelfRef.switch_allocator__DOT__port_south__DOT__rst_n) 
                   && ((1U & (~ ((IData)(vlSelfRef.switch_allocator__DOT__port_south__DOT__grant_accepted) 
                                 & (0U != (IData)(vlSelfRef.switch_allocator__DOT__port_south__DOT__grant))))) 
                       && (0U != (IData)(vlSelfRef.switch_allocator__DOT__port_south__DOT__grant))));
            vlSelfRef.switch_allocator__DOT__port_south__DOT__held_grant 
                = ((IData)(vlSelfRef.switch_allocator__DOT__port_south__DOT__rst_n)
                    ? (((IData)(vlSelfRef.switch_allocator__DOT__port_south__DOT__grant_accepted) 
                        & (0U != (IData)(vlSelfRef.switch_allocator__DOT__port_south__DOT__grant)))
                        ? 0U : ((0U != (IData)(vlSelfRef.switch_allocator__DOT__port_south__DOT__grant))
                                 ? (IData)(vlSelfRef.switch_allocator__DOT__port_south__DOT__grant)
                                 : 0U)) : 0U);
            if (vlSelfRef.switch_allocator__DOT__port_south__DOT__rst_n) {
                if (((IData)(vlSelfRef.switch_allocator__DOT__port_south__DOT__grant_accepted) 
                     & (0U != (IData)(vlSelfRef.switch_allocator__DOT__port_south__DOT__grant)))) {
                    vlSelfRef.switch_allocator__DOT__port_south__DOT__unnamedblk1__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, vlSelfRef.switch_allocator__DOT__port_south__DOT__unnamedblk1__DOT__i)) {
                        if (((4U >= (7U & vlSelfRef.switch_allocator__DOT__port_south__DOT__unnamedblk1__DOT__i)) 
                             && (1U & ((IData)(vlSelfRef.switch_allocator__DOT__port_south__DOT__grant) 
                                       >> (7U & vlSelfRef.switch_allocator__DOT__port_south__DOT__unnamedblk1__DOT__i))))) {
                            vlSelfRef.switch_allocator__DOT__port_south__DOT__priority_ptr 
                                = ((4U == vlSelfRef.switch_allocator__DOT__port_south__DOT__unnamedblk1__DOT__i)
                                    ? 0U : (7U & ((IData)(1U) 
                                                  + vlSelfRef.switch_allocator__DOT__port_south__DOT__unnamedblk1__DOT__i)));
                        }
                        vlSelfRef.switch_allocator__DOT__port_south__DOT__unnamedblk1__DOT__i 
                            = ((IData)(1U) + vlSelfRef.switch_allocator__DOT__port_south__DOT__unnamedblk1__DOT__i);
                    }
                }
            } else {
                vlSelfRef.switch_allocator__DOT__port_south__DOT__priority_ptr = 0U;
            }
            vlSelfRef.switch_allocator__DOT__port_south__DOT__grant = 0U;
            vlSelfRef.switch_allocator__DOT__port_south__DOT__request_index = 0U;
            if (vlSelfRef.switch_allocator__DOT__port_south__DOT__holding_grant) {
                vlSelfRef.switch_allocator__DOT__port_south__DOT__grant 
                    = vlSelfRef.switch_allocator__DOT__port_south__DOT__held_grant;
            } else {
                vlSelfRef.switch_allocator__DOT__port_south__DOT__offset = 0U;
                while (VL_GTS_III(32, 5U, vlSelfRef.switch_allocator__DOT__port_south__DOT__offset)) {
                    vlSelfRef.switch_allocator__DOT__port_south__DOT__request_index 
                        = ((IData)(vlSelfRef.switch_allocator__DOT__port_south__DOT__priority_ptr) 
                           + vlSelfRef.switch_allocator__DOT__port_south__DOT__offset);
                    if (VL_LTES_III(32, 5U, vlSelfRef.switch_allocator__DOT__port_south__DOT__request_index)) {
                        vlSelfRef.switch_allocator__DOT__port_south__DOT__request_index 
                            = (vlSelfRef.switch_allocator__DOT__port_south__DOT__request_index 
                               - (IData)(5U));
                    }
                    if (((0U == (IData)(vlSelfRef.switch_allocator__DOT__port_south__DOT__grant)) 
                         & ((4U >= (7U & vlSelfRef.switch_allocator__DOT__port_south__DOT__request_index)) 
                            && (1U & ((IData)(vlSelfRef.switch_allocator__DOT__port_south__DOT__request) 
                                      >> (7U & vlSelfRef.switch_allocator__DOT__port_south__DOT__request_index)))))) {
                        if (VL_LIKELY(((4U >= (7U & vlSelfRef.switch_allocator__DOT__port_south__DOT__request_index))))) {
                            vlSelfRef.switch_allocator__DOT__port_south__DOT__grant 
                                = ((IData)(vlSelfRef.switch_allocator__DOT__port_south__DOT__grant) 
                                   | (0x1fU & ((IData)(1U) 
                                               << (7U 
                                                   & vlSelfRef.switch_allocator__DOT__port_south__DOT__request_index))));
                        }
                    }
                    vlSelfRef.switch_allocator__DOT__port_south__DOT__offset 
                        = ((IData)(1U) + vlSelfRef.switch_allocator__DOT__port_south__DOT__offset);
                }
            }
            vlSelfRef.switch_allocator__DOT__grants[3U] 
                = vlSelfRef.switch_allocator__DOT__port_south__DOT__grant;
        }
    }
    if ((0x0000000000000030ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__2
            vlSelfRef.switch_allocator__DOT__port_east__DOT__holding_grant 
                = ((IData)(vlSelfRef.switch_allocator__DOT__port_east__DOT__rst_n) 
                   && ((1U & (~ ((IData)(vlSelfRef.switch_allocator__DOT__port_east__DOT__grant_accepted) 
                                 & (0U != (IData)(vlSelfRef.switch_allocator__DOT__port_east__DOT__grant))))) 
                       && (0U != (IData)(vlSelfRef.switch_allocator__DOT__port_east__DOT__grant))));
            vlSelfRef.switch_allocator__DOT__port_east__DOT__held_grant 
                = ((IData)(vlSelfRef.switch_allocator__DOT__port_east__DOT__rst_n)
                    ? (((IData)(vlSelfRef.switch_allocator__DOT__port_east__DOT__grant_accepted) 
                        & (0U != (IData)(vlSelfRef.switch_allocator__DOT__port_east__DOT__grant)))
                        ? 0U : ((0U != (IData)(vlSelfRef.switch_allocator__DOT__port_east__DOT__grant))
                                 ? (IData)(vlSelfRef.switch_allocator__DOT__port_east__DOT__grant)
                                 : 0U)) : 0U);
            if (vlSelfRef.switch_allocator__DOT__port_east__DOT__rst_n) {
                if (((IData)(vlSelfRef.switch_allocator__DOT__port_east__DOT__grant_accepted) 
                     & (0U != (IData)(vlSelfRef.switch_allocator__DOT__port_east__DOT__grant)))) {
                    vlSelfRef.switch_allocator__DOT__port_east__DOT__unnamedblk1__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, vlSelfRef.switch_allocator__DOT__port_east__DOT__unnamedblk1__DOT__i)) {
                        if (((4U >= (7U & vlSelfRef.switch_allocator__DOT__port_east__DOT__unnamedblk1__DOT__i)) 
                             && (1U & ((IData)(vlSelfRef.switch_allocator__DOT__port_east__DOT__grant) 
                                       >> (7U & vlSelfRef.switch_allocator__DOT__port_east__DOT__unnamedblk1__DOT__i))))) {
                            vlSelfRef.switch_allocator__DOT__port_east__DOT__priority_ptr 
                                = ((4U == vlSelfRef.switch_allocator__DOT__port_east__DOT__unnamedblk1__DOT__i)
                                    ? 0U : (7U & ((IData)(1U) 
                                                  + vlSelfRef.switch_allocator__DOT__port_east__DOT__unnamedblk1__DOT__i)));
                        }
                        vlSelfRef.switch_allocator__DOT__port_east__DOT__unnamedblk1__DOT__i 
                            = ((IData)(1U) + vlSelfRef.switch_allocator__DOT__port_east__DOT__unnamedblk1__DOT__i);
                    }
                }
            } else {
                vlSelfRef.switch_allocator__DOT__port_east__DOT__priority_ptr = 0U;
            }
            vlSelfRef.switch_allocator__DOT__port_east__DOT__grant = 0U;
            vlSelfRef.switch_allocator__DOT__port_east__DOT__request_index = 0U;
            if (vlSelfRef.switch_allocator__DOT__port_east__DOT__holding_grant) {
                vlSelfRef.switch_allocator__DOT__port_east__DOT__grant 
                    = vlSelfRef.switch_allocator__DOT__port_east__DOT__held_grant;
            } else {
                vlSelfRef.switch_allocator__DOT__port_east__DOT__offset = 0U;
                while (VL_GTS_III(32, 5U, vlSelfRef.switch_allocator__DOT__port_east__DOT__offset)) {
                    vlSelfRef.switch_allocator__DOT__port_east__DOT__request_index 
                        = ((IData)(vlSelfRef.switch_allocator__DOT__port_east__DOT__priority_ptr) 
                           + vlSelfRef.switch_allocator__DOT__port_east__DOT__offset);
                    if (VL_LTES_III(32, 5U, vlSelfRef.switch_allocator__DOT__port_east__DOT__request_index)) {
                        vlSelfRef.switch_allocator__DOT__port_east__DOT__request_index 
                            = (vlSelfRef.switch_allocator__DOT__port_east__DOT__request_index 
                               - (IData)(5U));
                    }
                    if (((0U == (IData)(vlSelfRef.switch_allocator__DOT__port_east__DOT__grant)) 
                         & ((4U >= (7U & vlSelfRef.switch_allocator__DOT__port_east__DOT__request_index)) 
                            && (1U & ((IData)(vlSelfRef.switch_allocator__DOT__port_east__DOT__request) 
                                      >> (7U & vlSelfRef.switch_allocator__DOT__port_east__DOT__request_index)))))) {
                        if (VL_LIKELY(((4U >= (7U & vlSelfRef.switch_allocator__DOT__port_east__DOT__request_index))))) {
                            vlSelfRef.switch_allocator__DOT__port_east__DOT__grant 
                                = ((IData)(vlSelfRef.switch_allocator__DOT__port_east__DOT__grant) 
                                   | (0x1fU & ((IData)(1U) 
                                               << (7U 
                                                   & vlSelfRef.switch_allocator__DOT__port_east__DOT__request_index))));
                        }
                    }
                    vlSelfRef.switch_allocator__DOT__port_east__DOT__offset 
                        = ((IData)(1U) + vlSelfRef.switch_allocator__DOT__port_east__DOT__offset);
                }
            }
            vlSelfRef.switch_allocator__DOT__grants[2U] 
                = vlSelfRef.switch_allocator__DOT__port_east__DOT__grant;
        }
    }
    if ((0x00000000000000c0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__3
            vlSelfRef.switch_allocator__DOT__port_north__DOT__holding_grant 
                = ((IData)(vlSelfRef.switch_allocator__DOT__port_north__DOT__rst_n) 
                   && ((1U & (~ ((IData)(vlSelfRef.switch_allocator__DOT__port_north__DOT__grant_accepted) 
                                 & (0U != (IData)(vlSelfRef.switch_allocator__DOT__port_north__DOT__grant))))) 
                       && (0U != (IData)(vlSelfRef.switch_allocator__DOT__port_north__DOT__grant))));
            vlSelfRef.switch_allocator__DOT__port_north__DOT__held_grant 
                = ((IData)(vlSelfRef.switch_allocator__DOT__port_north__DOT__rst_n)
                    ? (((IData)(vlSelfRef.switch_allocator__DOT__port_north__DOT__grant_accepted) 
                        & (0U != (IData)(vlSelfRef.switch_allocator__DOT__port_north__DOT__grant)))
                        ? 0U : ((0U != (IData)(vlSelfRef.switch_allocator__DOT__port_north__DOT__grant))
                                 ? (IData)(vlSelfRef.switch_allocator__DOT__port_north__DOT__grant)
                                 : 0U)) : 0U);
            if (vlSelfRef.switch_allocator__DOT__port_north__DOT__rst_n) {
                if (((IData)(vlSelfRef.switch_allocator__DOT__port_north__DOT__grant_accepted) 
                     & (0U != (IData)(vlSelfRef.switch_allocator__DOT__port_north__DOT__grant)))) {
                    vlSelfRef.switch_allocator__DOT__port_north__DOT__unnamedblk1__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, vlSelfRef.switch_allocator__DOT__port_north__DOT__unnamedblk1__DOT__i)) {
                        if (((4U >= (7U & vlSelfRef.switch_allocator__DOT__port_north__DOT__unnamedblk1__DOT__i)) 
                             && (1U & ((IData)(vlSelfRef.switch_allocator__DOT__port_north__DOT__grant) 
                                       >> (7U & vlSelfRef.switch_allocator__DOT__port_north__DOT__unnamedblk1__DOT__i))))) {
                            vlSelfRef.switch_allocator__DOT__port_north__DOT__priority_ptr 
                                = ((4U == vlSelfRef.switch_allocator__DOT__port_north__DOT__unnamedblk1__DOT__i)
                                    ? 0U : (7U & ((IData)(1U) 
                                                  + vlSelfRef.switch_allocator__DOT__port_north__DOT__unnamedblk1__DOT__i)));
                        }
                        vlSelfRef.switch_allocator__DOT__port_north__DOT__unnamedblk1__DOT__i 
                            = ((IData)(1U) + vlSelfRef.switch_allocator__DOT__port_north__DOT__unnamedblk1__DOT__i);
                    }
                }
            } else {
                vlSelfRef.switch_allocator__DOT__port_north__DOT__priority_ptr = 0U;
            }
            vlSelfRef.switch_allocator__DOT__port_north__DOT__grant = 0U;
            vlSelfRef.switch_allocator__DOT__port_north__DOT__request_index = 0U;
            if (vlSelfRef.switch_allocator__DOT__port_north__DOT__holding_grant) {
                vlSelfRef.switch_allocator__DOT__port_north__DOT__grant 
                    = vlSelfRef.switch_allocator__DOT__port_north__DOT__held_grant;
            } else {
                vlSelfRef.switch_allocator__DOT__port_north__DOT__offset = 0U;
                while (VL_GTS_III(32, 5U, vlSelfRef.switch_allocator__DOT__port_north__DOT__offset)) {
                    vlSelfRef.switch_allocator__DOT__port_north__DOT__request_index 
                        = ((IData)(vlSelfRef.switch_allocator__DOT__port_north__DOT__priority_ptr) 
                           + vlSelfRef.switch_allocator__DOT__port_north__DOT__offset);
                    if (VL_LTES_III(32, 5U, vlSelfRef.switch_allocator__DOT__port_north__DOT__request_index)) {
                        vlSelfRef.switch_allocator__DOT__port_north__DOT__request_index 
                            = (vlSelfRef.switch_allocator__DOT__port_north__DOT__request_index 
                               - (IData)(5U));
                    }
                    if (((0U == (IData)(vlSelfRef.switch_allocator__DOT__port_north__DOT__grant)) 
                         & ((4U >= (7U & vlSelfRef.switch_allocator__DOT__port_north__DOT__request_index)) 
                            && (1U & ((IData)(vlSelfRef.switch_allocator__DOT__port_north__DOT__request) 
                                      >> (7U & vlSelfRef.switch_allocator__DOT__port_north__DOT__request_index)))))) {
                        if (VL_LIKELY(((4U >= (7U & vlSelfRef.switch_allocator__DOT__port_north__DOT__request_index))))) {
                            vlSelfRef.switch_allocator__DOT__port_north__DOT__grant 
                                = ((IData)(vlSelfRef.switch_allocator__DOT__port_north__DOT__grant) 
                                   | (0x1fU & ((IData)(1U) 
                                               << (7U 
                                                   & vlSelfRef.switch_allocator__DOT__port_north__DOT__request_index))));
                        }
                    }
                    vlSelfRef.switch_allocator__DOT__port_north__DOT__offset 
                        = ((IData)(1U) + vlSelfRef.switch_allocator__DOT__port_north__DOT__offset);
                }
            }
            vlSelfRef.switch_allocator__DOT__grants[1U] 
                = vlSelfRef.switch_allocator__DOT__port_north__DOT__grant;
        }
    }
    if ((0x0000000000000300ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__4
            vlSelfRef.switch_allocator__DOT__port_local__DOT__holding_grant 
                = ((IData)(vlSelfRef.switch_allocator__DOT__port_local__DOT__rst_n) 
                   && ((1U & (~ ((IData)(vlSelfRef.switch_allocator__DOT__port_local__DOT__grant_accepted) 
                                 & (0U != (IData)(vlSelfRef.switch_allocator__DOT__port_local__DOT__grant))))) 
                       && (0U != (IData)(vlSelfRef.switch_allocator__DOT__port_local__DOT__grant))));
            vlSelfRef.switch_allocator__DOT__port_local__DOT__held_grant 
                = ((IData)(vlSelfRef.switch_allocator__DOT__port_local__DOT__rst_n)
                    ? (((IData)(vlSelfRef.switch_allocator__DOT__port_local__DOT__grant_accepted) 
                        & (0U != (IData)(vlSelfRef.switch_allocator__DOT__port_local__DOT__grant)))
                        ? 0U : ((0U != (IData)(vlSelfRef.switch_allocator__DOT__port_local__DOT__grant))
                                 ? (IData)(vlSelfRef.switch_allocator__DOT__port_local__DOT__grant)
                                 : 0U)) : 0U);
            if (vlSelfRef.switch_allocator__DOT__port_local__DOT__rst_n) {
                if (((IData)(vlSelfRef.switch_allocator__DOT__port_local__DOT__grant_accepted) 
                     & (0U != (IData)(vlSelfRef.switch_allocator__DOT__port_local__DOT__grant)))) {
                    vlSelfRef.switch_allocator__DOT__port_local__DOT__unnamedblk1__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, vlSelfRef.switch_allocator__DOT__port_local__DOT__unnamedblk1__DOT__i)) {
                        if (((4U >= (7U & vlSelfRef.switch_allocator__DOT__port_local__DOT__unnamedblk1__DOT__i)) 
                             && (1U & ((IData)(vlSelfRef.switch_allocator__DOT__port_local__DOT__grant) 
                                       >> (7U & vlSelfRef.switch_allocator__DOT__port_local__DOT__unnamedblk1__DOT__i))))) {
                            vlSelfRef.switch_allocator__DOT__port_local__DOT__priority_ptr 
                                = ((4U == vlSelfRef.switch_allocator__DOT__port_local__DOT__unnamedblk1__DOT__i)
                                    ? 0U : (7U & ((IData)(1U) 
                                                  + vlSelfRef.switch_allocator__DOT__port_local__DOT__unnamedblk1__DOT__i)));
                        }
                        vlSelfRef.switch_allocator__DOT__port_local__DOT__unnamedblk1__DOT__i 
                            = ((IData)(1U) + vlSelfRef.switch_allocator__DOT__port_local__DOT__unnamedblk1__DOT__i);
                    }
                }
            } else {
                vlSelfRef.switch_allocator__DOT__port_local__DOT__priority_ptr = 0U;
            }
            vlSelfRef.switch_allocator__DOT__port_local__DOT__grant = 0U;
            vlSelfRef.switch_allocator__DOT__port_local__DOT__request_index = 0U;
            if (vlSelfRef.switch_allocator__DOT__port_local__DOT__holding_grant) {
                vlSelfRef.switch_allocator__DOT__port_local__DOT__grant 
                    = vlSelfRef.switch_allocator__DOT__port_local__DOT__held_grant;
            } else {
                vlSelfRef.switch_allocator__DOT__port_local__DOT__offset = 0U;
                while (VL_GTS_III(32, 5U, vlSelfRef.switch_allocator__DOT__port_local__DOT__offset)) {
                    vlSelfRef.switch_allocator__DOT__port_local__DOT__request_index 
                        = ((IData)(vlSelfRef.switch_allocator__DOT__port_local__DOT__priority_ptr) 
                           + vlSelfRef.switch_allocator__DOT__port_local__DOT__offset);
                    if (VL_LTES_III(32, 5U, vlSelfRef.switch_allocator__DOT__port_local__DOT__request_index)) {
                        vlSelfRef.switch_allocator__DOT__port_local__DOT__request_index 
                            = (vlSelfRef.switch_allocator__DOT__port_local__DOT__request_index 
                               - (IData)(5U));
                    }
                    if (((0U == (IData)(vlSelfRef.switch_allocator__DOT__port_local__DOT__grant)) 
                         & ((4U >= (7U & vlSelfRef.switch_allocator__DOT__port_local__DOT__request_index)) 
                            && (1U & ((IData)(vlSelfRef.switch_allocator__DOT__port_local__DOT__request) 
                                      >> (7U & vlSelfRef.switch_allocator__DOT__port_local__DOT__request_index)))))) {
                        if (VL_LIKELY(((4U >= (7U & vlSelfRef.switch_allocator__DOT__port_local__DOT__request_index))))) {
                            vlSelfRef.switch_allocator__DOT__port_local__DOT__grant 
                                = ((IData)(vlSelfRef.switch_allocator__DOT__port_local__DOT__grant) 
                                   | (0x1fU & ((IData)(1U) 
                                               << (7U 
                                                   & vlSelfRef.switch_allocator__DOT__port_local__DOT__request_index))));
                        }
                    }
                    vlSelfRef.switch_allocator__DOT__port_local__DOT__offset 
                        = ((IData)(1U) + vlSelfRef.switch_allocator__DOT__port_local__DOT__offset);
                }
            }
            vlSelfRef.switch_allocator__DOT__grants[0U] 
                = vlSelfRef.switch_allocator__DOT__port_local__DOT__grant;
        }
    }
    if ((0x00000000000003ffULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__0
            vlSelfRef.grants = vlSelfRef.switch_allocator__DOT__grants;
        }
    }
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
                                                        (((((~ (IData)(vlSelfRef.switch_allocator__DOT__port_local__DOT__rst_n)) 
                                                            & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__switch_allocator__DOT__port_local__DOT__rst_n__0)) 
                                                           << 9U) 
                                                          | (((IData)(vlSelfRef.switch_allocator__DOT__port_local__DOT__clk) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__switch_allocator__DOT__port_local__DOT__clk__0))) 
                                                             << 8U)) 
                                                         | (((((((~ (IData)(vlSelfRef.switch_allocator__DOT__port_north__DOT__rst_n)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__switch_allocator__DOT__port_north__DOT__rst_n__0)) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.switch_allocator__DOT__port_north__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__switch_allocator__DOT__port_north__DOT__clk__0))) 
                                                                  << 2U)) 
                                                              | ((((~ (IData)(vlSelfRef.switch_allocator__DOT__port_east__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__switch_allocator__DOT__port_east__DOT__rst_n__0)) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.switch_allocator__DOT__port_east__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__switch_allocator__DOT__port_east__DOT__clk__0))))) 
                                                             << 4U) 
                                                            | (((((~ (IData)(vlSelfRef.switch_allocator__DOT__port_south__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__switch_allocator__DOT__port_south__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.switch_allocator__DOT__port_south__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__switch_allocator__DOT__port_south__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.switch_allocator__DOT__port_west__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__switch_allocator__DOT__port_west__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.switch_allocator__DOT__port_west__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__switch_allocator__DOT__port_west__DOT__clk__0)))))))));
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
        Vtop___024root___eval_nba(vlSelf);
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
            VL_FATAL_MT("/Users/taha.ibrah/Downloads/noc-router-mesh/rtl/switch_allocator.sv", 20, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
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
            VL_FATAL_MT("/Users/taha.ibrah/Downloads/noc-router-mesh/rtl/switch_allocator.sv", 20, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/Users/taha.ibrah/Downloads/noc-router-mesh/rtl/switch_allocator.sv", 20, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
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
    if (VL_UNLIKELY(((vlSelfRef.grant_accepted & 0xe0U)))) {
        Verilated::overWidthError("grant_accepted");
    }
}
#endif  // VL_DEBUG
