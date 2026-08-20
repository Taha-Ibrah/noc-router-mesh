// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root___ico_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__read_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__fifo_read_request) 
                 >> 4U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__read_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__fifo_read_request) 
                 >> 3U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__read_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__fifo_read_request) 
                 >> 2U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__read_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__fifo_read_request) 
                 >> 1U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__read_request 
        = (1U & (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__fifo_read_request));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__grant_accepted 
        = ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__output_valid) 
           & (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__output_ready));
    vlSelfRef.noc_mesh__DOT__router_output_valid[0U][2U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__output_valid;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__crossbar__DOT__output_port = 0U;
    while (VL_GTS_III(32, 5U, vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__crossbar__DOT__output_port)) {
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__crossbar__DOT__output_port))))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__crossbar__DOT__output_flits[(7U 
                                                                                & vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__crossbar__DOT__output_port)] = 0ULL;
        }
        vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__crossbar__DOT__input_port = 0U;
        while (VL_GTS_III(32, 5U, vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__crossbar__DOT__input_port)) {
            if (((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__crossbar__DOT__input_port)) 
                 && (1U & (((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__crossbar__DOT__output_port))
                             ? vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__crossbar__DOT__grants
                            [(7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__crossbar__DOT__output_port)]
                             : 0U) >> (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__crossbar__DOT__input_port))))) {
                if (VL_LIKELY(((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__crossbar__DOT__output_port))))) {
                    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__crossbar__DOT__output_flits[(7U 
                                                                                & vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__crossbar__DOT__output_port)] 
                        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__crossbar__DOT__input_flits
                        [((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__crossbar__DOT__input_port))
                           ? (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__crossbar__DOT__input_port)
                           : 0U)];
                }
            }
            vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__crossbar__DOT__input_port 
                = ((IData)(1U) + vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__crossbar__DOT__input_port);
        }
        vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__crossbar__DOT__output_port 
            = ((IData)(1U) + vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__crossbar__DOT__output_port);
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__read_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__fifo_read_request) 
                 >> 4U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__read_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__fifo_read_request) 
                 >> 3U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__read_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__fifo_read_request) 
                 >> 2U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__read_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__fifo_read_request) 
                 >> 1U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__read_request 
        = (1U & (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__fifo_read_request));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__grant_accepted 
        = ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__output_valid) 
           & (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__output_ready));
    vlSelfRef.noc_mesh__DOT__router_output_valid[0U][1U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__output_valid;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__crossbar__DOT__output_port = 0U;
    while (VL_GTS_III(32, 5U, vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__crossbar__DOT__output_port)) {
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__crossbar__DOT__output_port))))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__crossbar__DOT__output_flits[(7U 
                                                                                & vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__crossbar__DOT__output_port)] = 0ULL;
        }
        vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__crossbar__DOT__input_port = 0U;
        while (VL_GTS_III(32, 5U, vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__crossbar__DOT__input_port)) {
            if (((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__crossbar__DOT__input_port)) 
                 && (1U & (((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__crossbar__DOT__output_port))
                             ? vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__crossbar__DOT__grants
                            [(7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__crossbar__DOT__output_port)]
                             : 0U) >> (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__crossbar__DOT__input_port))))) {
                if (VL_LIKELY(((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__crossbar__DOT__output_port))))) {
                    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__crossbar__DOT__output_flits[(7U 
                                                                                & vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__crossbar__DOT__output_port)] 
                        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__crossbar__DOT__input_flits
                        [((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__crossbar__DOT__input_port))
                           ? (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__crossbar__DOT__input_port)
                           : 0U)];
                }
            }
            vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__crossbar__DOT__input_port 
                = ((IData)(1U) + vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__crossbar__DOT__input_port);
        }
        vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__crossbar__DOT__output_port 
            = ((IData)(1U) + vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__crossbar__DOT__output_port);
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__read_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__fifo_read_request) 
                 >> 4U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__read_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__fifo_read_request) 
                 >> 3U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__read_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__fifo_read_request) 
                 >> 2U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__read_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__fifo_read_request) 
                 >> 1U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__read_request 
        = (1U & (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__fifo_read_request));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__grant_accepted 
        = ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__output_valid) 
           & (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__output_ready));
    vlSelfRef.noc_mesh__DOT__router_output_valid[0U][0U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__output_valid;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__crossbar__DOT__output_port = 0U;
    while (VL_GTS_III(32, 5U, vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__crossbar__DOT__output_port)) {
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__crossbar__DOT__output_port))))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__crossbar__DOT__output_flits[(7U 
                                                                                & vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__crossbar__DOT__output_port)] = 0ULL;
        }
        vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__crossbar__DOT__input_port = 0U;
        while (VL_GTS_III(32, 5U, vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__crossbar__DOT__input_port)) {
            if (((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__crossbar__DOT__input_port)) 
                 && (1U & (((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__crossbar__DOT__output_port))
                             ? vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__crossbar__DOT__grants
                            [(7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__crossbar__DOT__output_port)]
                             : 0U) >> (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__crossbar__DOT__input_port))))) {
                if (VL_LIKELY(((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__crossbar__DOT__output_port))))) {
                    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__crossbar__DOT__output_flits[(7U 
                                                                                & vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__crossbar__DOT__output_port)] 
                        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__crossbar__DOT__input_flits
                        [((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__crossbar__DOT__input_port))
                           ? (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__crossbar__DOT__input_port)
                           : 0U)];
                }
            }
            vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__crossbar__DOT__input_port 
                = ((IData)(1U) + vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__crossbar__DOT__input_port);
        }
        vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__crossbar__DOT__output_port 
            = ((IData)(1U) + vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__crossbar__DOT__output_port);
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 4U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 3U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 2U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 1U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__grant_accepted 
        = (1U & (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__grant_accepted));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__output_flits 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__crossbar__DOT__output_flits;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 4U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 3U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 2U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 1U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__grant_accepted 
        = (1U & (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__grant_accepted));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__output_flits 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__crossbar__DOT__output_flits;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 4U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 3U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 2U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 1U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__grant_accepted 
        = (1U & (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__grant_accepted));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__output_flits 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__crossbar__DOT__output_flits;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 4U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 3U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 2U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 1U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__grant_accepted 
        = (1U & (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__grant_accepted));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__output_flits 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__crossbar__DOT__output_flits;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 4U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 3U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 2U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 1U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__grant_accepted 
        = (1U & (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__grant_accepted));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__output_flits 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__crossbar__DOT__output_flits;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 4U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 3U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 2U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 1U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__grant_accepted 
        = (1U & (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__grant_accepted));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__output_flits 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__crossbar__DOT__output_flits;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 4U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 3U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 2U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 1U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__grant_accepted 
        = (1U & (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__grant_accepted));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__output_flits 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__crossbar__DOT__output_flits;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 4U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 3U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 2U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 1U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__grant_accepted 
        = (1U & (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__grant_accepted));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__output_flits 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__crossbar__DOT__output_flits;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 4U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 3U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 2U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 1U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__grant_accepted 
        = (1U & (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__grant_accepted));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__output_flits 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__crossbar__DOT__output_flits;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 4U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 3U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 2U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 1U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__grant_accepted 
        = (1U & (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__grant_accepted));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__output_flits 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__crossbar__DOT__output_flits;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 4U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 3U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 2U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 1U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__grant_accepted 
        = (1U & (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__grant_accepted));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__output_flits 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__crossbar__DOT__output_flits;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 4U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 3U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 2U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 1U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__grant_accepted 
        = (1U & (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__grant_accepted));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__output_flits 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__crossbar__DOT__output_flits;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 4U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 3U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 2U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 1U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__grant_accepted 
        = (1U & (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__grant_accepted));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__output_flits 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__crossbar__DOT__output_flits;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 4U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 3U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 2U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 1U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__grant_accepted 
        = (1U & (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__grant_accepted));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__output_flits 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__crossbar__DOT__output_flits;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 4U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 3U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 2U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 1U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__grant_accepted 
        = (1U & (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__grant_accepted));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__output_flits 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__crossbar__DOT__output_flits;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 4U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 3U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 2U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__grant_accepted 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__grant_accepted) 
                 >> 1U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__grant_accepted 
        = (1U & (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__grant_accepted));
    vlSelfRef.noc_mesh__DOT__local_output_valid[0U][0U] 
        = (1U & vlSelfRef.noc_mesh__DOT__router_output_valid[0U][0U]);
    vlSelfRef.noc_mesh__DOT__local_output_valid[0U][1U] 
        = (1U & vlSelfRef.noc_mesh__DOT__router_output_valid[0U][1U]);
    vlSelfRef.noc_mesh__DOT__local_output_valid[0U][2U] 
        = (1U & vlSelfRef.noc_mesh__DOT__router_output_valid[0U][2U]);
    vlSelfRef.noc_mesh__DOT__local_output_valid[0U][3U] 
        = (1U & vlSelfRef.noc_mesh__DOT__router_output_valid[0U][3U]);
    vlSelfRef.noc_mesh__DOT__local_output_valid[1U][0U] 
        = (1U & vlSelfRef.noc_mesh__DOT__router_output_valid[1U][0U]);
    vlSelfRef.noc_mesh__DOT__local_output_valid[1U][1U] 
        = (1U & vlSelfRef.noc_mesh__DOT__router_output_valid[1U][1U]);
    vlSelfRef.noc_mesh__DOT__local_output_valid[1U][2U] 
        = (1U & vlSelfRef.noc_mesh__DOT__router_output_valid[1U][2U]);
    vlSelfRef.noc_mesh__DOT__local_output_valid[1U][3U] 
        = (1U & vlSelfRef.noc_mesh__DOT__router_output_valid[1U][3U]);
    vlSelfRef.noc_mesh__DOT__local_output_valid[2U][0U] 
        = (1U & vlSelfRef.noc_mesh__DOT__router_output_valid[2U][0U]);
    vlSelfRef.noc_mesh__DOT__local_output_valid[2U][1U] 
        = (1U & vlSelfRef.noc_mesh__DOT__router_output_valid[2U][1U]);
    vlSelfRef.noc_mesh__DOT__local_output_valid[2U][2U] 
        = (1U & vlSelfRef.noc_mesh__DOT__router_output_valid[2U][2U]);
    vlSelfRef.noc_mesh__DOT__local_output_valid[2U][3U] 
        = (1U & vlSelfRef.noc_mesh__DOT__router_output_valid[2U][3U]);
    vlSelfRef.noc_mesh__DOT__local_output_valid[3U][0U] 
        = (1U & vlSelfRef.noc_mesh__DOT__router_output_valid[3U][0U]);
    vlSelfRef.noc_mesh__DOT__local_output_valid[3U][1U] 
        = (1U & vlSelfRef.noc_mesh__DOT__router_output_valid[3U][1U]);
    vlSelfRef.noc_mesh__DOT__local_output_valid[3U][2U] 
        = (1U & vlSelfRef.noc_mesh__DOT__router_output_valid[3U][2U]);
    vlSelfRef.noc_mesh__DOT__local_output_valid[3U][3U] 
        = (1U & vlSelfRef.noc_mesh__DOT__router_output_valid[3U][3U]);
    vlSelfRef.noc_mesh__DOT__router_input_valid[0U][0U] 
        = ((0x1dU & vlSelfRef.noc_mesh__DOT__router_input_valid[0U][0U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[0U][1U] 
                             >> 3U))) << 1U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[0U][0U] 
        = ((0x1bU & vlSelfRef.noc_mesh__DOT__router_input_valid[0U][0U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[1U][0U] 
                             >> 4U))) << 2U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[0U][1U] 
        = ((0x1dU & vlSelfRef.noc_mesh__DOT__router_input_valid[0U][1U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[0U][2U] 
                             >> 3U))) << 1U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[0U][1U] 
        = ((0x1bU & vlSelfRef.noc_mesh__DOT__router_input_valid[0U][1U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[1U][1U] 
                             >> 4U))) << 2U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[0U][1U] 
        = ((0x17U & vlSelfRef.noc_mesh__DOT__router_input_valid[0U][1U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[0U][0U] 
                             >> 1U))) << 3U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[0U][2U] 
        = ((0x1dU & vlSelfRef.noc_mesh__DOT__router_input_valid[0U][2U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[0U][3U] 
                             >> 3U))) << 1U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[0U][2U] 
        = ((0x1bU & vlSelfRef.noc_mesh__DOT__router_input_valid[0U][2U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[1U][2U] 
                             >> 4U))) << 2U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[0U][2U] 
        = ((0x17U & vlSelfRef.noc_mesh__DOT__router_input_valid[0U][2U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[0U][1U] 
                             >> 1U))) << 3U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[0U][3U] 
        = ((0x1bU & vlSelfRef.noc_mesh__DOT__router_input_valid[0U][3U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[1U][3U] 
                             >> 4U))) << 2U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[0U][3U] 
        = ((0x17U & vlSelfRef.noc_mesh__DOT__router_input_valid[0U][3U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[0U][2U] 
                             >> 1U))) << 3U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[1U][0U] 
        = ((0x1dU & vlSelfRef.noc_mesh__DOT__router_input_valid[1U][0U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[1U][1U] 
                             >> 3U))) << 1U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[1U][0U] 
        = ((0x1bU & vlSelfRef.noc_mesh__DOT__router_input_valid[1U][0U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[2U][0U] 
                             >> 4U))) << 2U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[1U][0U] 
        = ((0x0fU & vlSelfRef.noc_mesh__DOT__router_input_valid[1U][0U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[0U][0U] 
                             >> 2U))) << 4U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[1U][1U] 
        = ((0x1dU & vlSelfRef.noc_mesh__DOT__router_input_valid[1U][1U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[1U][2U] 
                             >> 3U))) << 1U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[1U][1U] 
        = ((0x1bU & vlSelfRef.noc_mesh__DOT__router_input_valid[1U][1U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[2U][1U] 
                             >> 4U))) << 2U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[1U][1U] 
        = ((0x17U & vlSelfRef.noc_mesh__DOT__router_input_valid[1U][1U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[1U][0U] 
                             >> 1U))) << 3U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[1U][1U] 
        = ((0x0fU & vlSelfRef.noc_mesh__DOT__router_input_valid[1U][1U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[0U][1U] 
                             >> 2U))) << 4U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[1U][2U] 
        = ((0x1dU & vlSelfRef.noc_mesh__DOT__router_input_valid[1U][2U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[1U][3U] 
                             >> 3U))) << 1U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[1U][2U] 
        = ((0x1bU & vlSelfRef.noc_mesh__DOT__router_input_valid[1U][2U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[2U][2U] 
                             >> 4U))) << 2U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[1U][2U] 
        = ((0x17U & vlSelfRef.noc_mesh__DOT__router_input_valid[1U][2U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[1U][1U] 
                             >> 1U))) << 3U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[1U][2U] 
        = ((0x0fU & vlSelfRef.noc_mesh__DOT__router_input_valid[1U][2U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[0U][2U] 
                             >> 2U))) << 4U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[1U][3U] 
        = ((0x1bU & vlSelfRef.noc_mesh__DOT__router_input_valid[1U][3U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[2U][3U] 
                             >> 4U))) << 2U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[1U][3U] 
        = ((0x17U & vlSelfRef.noc_mesh__DOT__router_input_valid[1U][3U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[1U][2U] 
                             >> 1U))) << 3U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[1U][3U] 
        = ((0x0fU & vlSelfRef.noc_mesh__DOT__router_input_valid[1U][3U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[0U][3U] 
                             >> 2U))) << 4U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[2U][0U] 
        = ((0x1dU & vlSelfRef.noc_mesh__DOT__router_input_valid[2U][0U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[2U][1U] 
                             >> 3U))) << 1U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[2U][0U] 
        = ((0x1bU & vlSelfRef.noc_mesh__DOT__router_input_valid[2U][0U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[3U][0U] 
                             >> 4U))) << 2U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[2U][0U] 
        = ((0x0fU & vlSelfRef.noc_mesh__DOT__router_input_valid[2U][0U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[1U][0U] 
                             >> 2U))) << 4U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[2U][1U] 
        = ((0x1dU & vlSelfRef.noc_mesh__DOT__router_input_valid[2U][1U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[2U][2U] 
                             >> 3U))) << 1U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[2U][1U] 
        = ((0x1bU & vlSelfRef.noc_mesh__DOT__router_input_valid[2U][1U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[3U][1U] 
                             >> 4U))) << 2U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[2U][1U] 
        = ((0x17U & vlSelfRef.noc_mesh__DOT__router_input_valid[2U][1U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[2U][0U] 
                             >> 1U))) << 3U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[2U][1U] 
        = ((0x0fU & vlSelfRef.noc_mesh__DOT__router_input_valid[2U][1U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[1U][1U] 
                             >> 2U))) << 4U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[2U][2U] 
        = ((0x1dU & vlSelfRef.noc_mesh__DOT__router_input_valid[2U][2U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[2U][3U] 
                             >> 3U))) << 1U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[2U][2U] 
        = ((0x1bU & vlSelfRef.noc_mesh__DOT__router_input_valid[2U][2U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[3U][2U] 
                             >> 4U))) << 2U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[2U][2U] 
        = ((0x17U & vlSelfRef.noc_mesh__DOT__router_input_valid[2U][2U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[2U][1U] 
                             >> 1U))) << 3U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[2U][2U] 
        = ((0x0fU & vlSelfRef.noc_mesh__DOT__router_input_valid[2U][2U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[1U][2U] 
                             >> 2U))) << 4U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[2U][3U] 
        = ((0x1bU & vlSelfRef.noc_mesh__DOT__router_input_valid[2U][3U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[3U][3U] 
                             >> 4U))) << 2U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[2U][3U] 
        = ((0x17U & vlSelfRef.noc_mesh__DOT__router_input_valid[2U][3U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[2U][2U] 
                             >> 1U))) << 3U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[2U][3U] 
        = ((0x0fU & vlSelfRef.noc_mesh__DOT__router_input_valid[2U][3U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[1U][3U] 
                             >> 2U))) << 4U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[3U][0U] 
        = ((0x1dU & vlSelfRef.noc_mesh__DOT__router_input_valid[3U][0U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[3U][1U] 
                             >> 3U))) << 1U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[3U][0U] 
        = ((0x0fU & vlSelfRef.noc_mesh__DOT__router_input_valid[3U][0U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[2U][0U] 
                             >> 2U))) << 4U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[3U][1U] 
        = ((0x1dU & vlSelfRef.noc_mesh__DOT__router_input_valid[3U][1U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[3U][2U] 
                             >> 3U))) << 1U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[3U][1U] 
        = ((0x17U & vlSelfRef.noc_mesh__DOT__router_input_valid[3U][1U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[3U][0U] 
                             >> 1U))) << 3U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[3U][1U] 
        = ((0x0fU & vlSelfRef.noc_mesh__DOT__router_input_valid[3U][1U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[2U][1U] 
                             >> 2U))) << 4U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[3U][2U] 
        = ((0x1dU & vlSelfRef.noc_mesh__DOT__router_input_valid[3U][2U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[3U][3U] 
                             >> 3U))) << 1U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[3U][2U] 
        = ((0x17U & vlSelfRef.noc_mesh__DOT__router_input_valid[3U][2U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[3U][1U] 
                             >> 1U))) << 3U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[3U][2U] 
        = ((0x0fU & vlSelfRef.noc_mesh__DOT__router_input_valid[3U][2U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[2U][2U] 
                             >> 2U))) << 4U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[3U][3U] 
        = ((0x17U & vlSelfRef.noc_mesh__DOT__router_input_valid[3U][3U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[3U][2U] 
                             >> 1U))) << 3U));
    vlSelfRef.noc_mesh__DOT__router_input_valid[3U][3U] 
        = ((0x0fU & vlSelfRef.noc_mesh__DOT__router_input_valid[3U][3U]) 
           | ((CData)((1U & (vlSelfRef.noc_mesh__DOT__router_output_valid[2U][3U] 
                             >> 2U))) << 4U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__output_flits 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__crossbar__DOT__output_flits;
    vlSelfRef.noc_mesh__DOT__router_output_flits[3U][3U][0U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__output_flits[0U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[3U][3U][1U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__output_flits[1U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[3U][3U][2U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__output_flits[2U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[3U][3U][3U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__output_flits[3U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[3U][3U][4U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__output_flits[4U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[3U][2U][0U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__output_flits[0U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[3U][2U][1U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__output_flits[1U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[3U][2U][2U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__output_flits[2U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[3U][2U][3U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__output_flits[3U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[3U][2U][4U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__output_flits[4U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[3U][1U][0U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__output_flits[0U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[3U][1U][1U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__output_flits[1U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[3U][1U][2U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__output_flits[2U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[3U][1U][3U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__output_flits[3U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[3U][1U][4U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__output_flits[4U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[3U][0U][0U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__output_flits[0U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[3U][0U][1U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__output_flits[1U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[3U][0U][2U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__output_flits[2U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[3U][0U][3U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__output_flits[3U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[3U][0U][4U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__output_flits[4U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[2U][3U][0U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__output_flits[0U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[2U][3U][1U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__output_flits[1U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[2U][3U][2U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__output_flits[2U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[2U][3U][3U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__output_flits[3U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[2U][3U][4U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__output_flits[4U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[2U][2U][0U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__output_flits[0U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[2U][2U][1U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__output_flits[1U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[2U][2U][2U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__output_flits[2U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[2U][2U][3U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__output_flits[3U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[2U][2U][4U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__output_flits[4U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[2U][1U][0U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__output_flits[0U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[2U][1U][1U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__output_flits[1U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[2U][1U][2U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__output_flits[2U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[2U][1U][3U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__output_flits[3U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[2U][1U][4U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__output_flits[4U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[2U][0U][0U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__output_flits[0U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[2U][0U][1U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__output_flits[1U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[2U][0U][2U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__output_flits[2U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[2U][0U][3U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__output_flits[3U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[2U][0U][4U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__output_flits[4U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[1U][3U][0U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__output_flits[0U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[1U][3U][1U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__output_flits[1U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[1U][3U][2U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__output_flits[2U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[1U][3U][3U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__output_flits[3U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[1U][3U][4U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__output_flits[4U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[1U][2U][0U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__output_flits[0U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[1U][2U][1U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__output_flits[1U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[1U][2U][2U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__output_flits[2U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[1U][2U][3U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__output_flits[3U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[1U][2U][4U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__output_flits[4U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[1U][1U][0U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__output_flits[0U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[1U][1U][1U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__output_flits[1U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[1U][1U][2U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__output_flits[2U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[1U][1U][3U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__output_flits[3U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[1U][1U][4U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__output_flits[4U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[1U][0U][0U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__output_flits[0U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[1U][0U][1U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__output_flits[1U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[1U][0U][2U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__output_flits[2U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[1U][0U][3U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__output_flits[3U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[1U][0U][4U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__output_flits[4U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[0U][3U][0U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__output_flits[0U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[0U][3U][1U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__output_flits[1U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[0U][3U][2U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__output_flits[2U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[0U][3U][3U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__output_flits[3U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[0U][3U][4U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__output_flits[4U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[0U][2U][0U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__output_flits[0U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[0U][2U][1U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__output_flits[1U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[0U][2U][2U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__output_flits[2U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[0U][2U][3U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__output_flits[3U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[0U][2U][4U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__output_flits[4U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[0U][1U][0U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__output_flits[0U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[0U][1U][1U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__output_flits[1U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[0U][1U][2U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__output_flits[2U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[0U][1U][3U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__output_flits[3U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[0U][1U][4U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__output_flits[4U];
    vlSelfRef.local_output_valid = vlSelfRef.noc_mesh__DOT__local_output_valid;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_valid 
        = vlSelfRef.noc_mesh__DOT__router_input_valid[0U][0U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_valid 
        = vlSelfRef.noc_mesh__DOT__router_input_valid[0U][1U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_valid 
        = vlSelfRef.noc_mesh__DOT__router_input_valid[0U][2U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_valid 
        = vlSelfRef.noc_mesh__DOT__router_input_valid[0U][3U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_valid 
        = vlSelfRef.noc_mesh__DOT__router_input_valid[1U][0U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_valid 
        = vlSelfRef.noc_mesh__DOT__router_input_valid[1U][1U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_valid 
        = vlSelfRef.noc_mesh__DOT__router_input_valid[1U][2U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_valid 
        = vlSelfRef.noc_mesh__DOT__router_input_valid[1U][3U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_valid 
        = vlSelfRef.noc_mesh__DOT__router_input_valid[2U][0U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_valid 
        = vlSelfRef.noc_mesh__DOT__router_input_valid[2U][1U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_valid 
        = vlSelfRef.noc_mesh__DOT__router_input_valid[2U][2U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_valid 
        = vlSelfRef.noc_mesh__DOT__router_input_valid[2U][3U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_valid 
        = vlSelfRef.noc_mesh__DOT__router_input_valid[3U][0U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_valid 
        = vlSelfRef.noc_mesh__DOT__router_input_valid[3U][1U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_valid 
        = vlSelfRef.noc_mesh__DOT__router_input_valid[3U][2U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_valid 
        = vlSelfRef.noc_mesh__DOT__router_input_valid[3U][3U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[0U][0U][0U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__output_flits[0U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[0U][0U][1U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__output_flits[1U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[0U][0U][2U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__output_flits[2U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[0U][0U][3U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__output_flits[3U];
    vlSelfRef.noc_mesh__DOT__router_output_flits[0U][0U][4U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__output_flits[4U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_valid) 
                 >> 4U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_valid) 
                 >> 3U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_valid) 
                 >> 2U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_valid) 
                 >> 1U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__write_request 
        = (1U & (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_valid));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_valid) 
                 >> 4U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_valid) 
                 >> 3U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_valid) 
                 >> 2U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_valid) 
                 >> 1U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__write_request 
        = (1U & (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_valid));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_valid) 
                 >> 4U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_valid) 
                 >> 3U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_valid) 
                 >> 2U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_valid) 
                 >> 1U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__write_request 
        = (1U & (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_valid));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_valid) 
                 >> 4U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_valid) 
                 >> 3U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_valid) 
                 >> 2U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_valid) 
                 >> 1U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__write_request 
        = (1U & (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_valid));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_valid) 
                 >> 4U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_valid) 
                 >> 3U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_valid) 
                 >> 2U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_valid) 
                 >> 1U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__write_request 
        = (1U & (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_valid));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_valid) 
                 >> 4U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_valid) 
                 >> 3U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_valid) 
                 >> 2U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_valid) 
                 >> 1U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__write_request 
        = (1U & (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_valid));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_valid) 
                 >> 4U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_valid) 
                 >> 3U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_valid) 
                 >> 2U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_valid) 
                 >> 1U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__write_request 
        = (1U & (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_valid));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_valid) 
                 >> 4U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_valid) 
                 >> 3U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_valid) 
                 >> 2U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_valid) 
                 >> 1U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__write_request 
        = (1U & (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_valid));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_valid) 
                 >> 4U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_valid) 
                 >> 3U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_valid) 
                 >> 2U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_valid) 
                 >> 1U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__write_request 
        = (1U & (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_valid));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_valid) 
                 >> 4U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_valid) 
                 >> 3U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_valid) 
                 >> 2U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_valid) 
                 >> 1U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__write_request 
        = (1U & (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_valid));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_valid) 
                 >> 4U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_valid) 
                 >> 3U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_valid) 
                 >> 2U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_valid) 
                 >> 1U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__write_request 
        = (1U & (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_valid));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_valid) 
                 >> 4U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_valid) 
                 >> 3U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_valid) 
                 >> 2U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_valid) 
                 >> 1U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__write_request 
        = (1U & (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_valid));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_valid) 
                 >> 4U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_valid) 
                 >> 3U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_valid) 
                 >> 2U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_valid) 
                 >> 1U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__write_request 
        = (1U & (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_valid));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_valid) 
                 >> 4U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_valid) 
                 >> 3U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_valid) 
                 >> 2U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_valid) 
                 >> 1U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__write_request 
        = (1U & (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_valid));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_valid) 
                 >> 4U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_valid) 
                 >> 3U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_valid) 
                 >> 2U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_valid) 
                 >> 1U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__write_request 
        = (1U & (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_valid));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_valid) 
                 >> 4U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_valid) 
                 >> 3U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_valid) 
                 >> 2U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__write_request 
        = (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_valid) 
                 >> 1U));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__write_request 
        = (1U & (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_valid));
    vlSelfRef.noc_mesh__DOT__local_output_flits[0U][0U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[0U][0U][0U];
    vlSelfRef.noc_mesh__DOT__local_output_flits[0U][1U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[0U][1U][0U];
    vlSelfRef.noc_mesh__DOT__local_output_flits[0U][2U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[0U][2U][0U];
    vlSelfRef.noc_mesh__DOT__local_output_flits[0U][3U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[0U][3U][0U];
    vlSelfRef.noc_mesh__DOT__local_output_flits[1U][0U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[1U][0U][0U];
    vlSelfRef.noc_mesh__DOT__local_output_flits[1U][1U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[1U][1U][0U];
    vlSelfRef.noc_mesh__DOT__local_output_flits[1U][2U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[1U][2U][0U];
    vlSelfRef.noc_mesh__DOT__local_output_flits[1U][3U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[1U][3U][0U];
    vlSelfRef.noc_mesh__DOT__local_output_flits[2U][0U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[2U][0U][0U];
    vlSelfRef.noc_mesh__DOT__local_output_flits[2U][1U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[2U][1U][0U];
    vlSelfRef.noc_mesh__DOT__local_output_flits[2U][2U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[2U][2U][0U];
    vlSelfRef.noc_mesh__DOT__local_output_flits[2U][3U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[2U][3U][0U];
    vlSelfRef.noc_mesh__DOT__local_output_flits[3U][0U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[3U][0U][0U];
    vlSelfRef.noc_mesh__DOT__local_output_flits[3U][1U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[3U][1U][0U];
    vlSelfRef.noc_mesh__DOT__local_output_flits[3U][2U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[3U][2U][0U];
    vlSelfRef.noc_mesh__DOT__local_output_flits[3U][3U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[3U][3U][0U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[0U][0U][1U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[0U][1U][3U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[0U][0U][2U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[1U][0U][4U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[0U][1U][1U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[0U][2U][3U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[0U][1U][2U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[1U][1U][4U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[0U][1U][3U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[0U][0U][1U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[0U][2U][1U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[0U][3U][3U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[0U][2U][2U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[1U][2U][4U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[0U][2U][3U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[0U][1U][1U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[0U][3U][2U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[1U][3U][4U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[0U][3U][3U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[0U][2U][1U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[1U][0U][1U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[1U][1U][3U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[1U][0U][2U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[2U][0U][4U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[1U][0U][4U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[0U][0U][2U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[1U][1U][1U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[1U][2U][3U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[1U][1U][2U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[2U][1U][4U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[1U][1U][3U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[1U][0U][1U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[1U][1U][4U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[0U][1U][2U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[1U][2U][1U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[1U][3U][3U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[1U][2U][2U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[2U][2U][4U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[1U][2U][3U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[1U][1U][1U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[1U][2U][4U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[0U][2U][2U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[1U][3U][2U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[2U][3U][4U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[1U][3U][3U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[1U][2U][1U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[1U][3U][4U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[0U][3U][2U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[2U][0U][1U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[2U][1U][3U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[2U][0U][2U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[3U][0U][4U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[2U][0U][4U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[1U][0U][2U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[2U][1U][1U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[2U][2U][3U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[2U][1U][2U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[3U][1U][4U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[2U][1U][3U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[2U][0U][1U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[2U][1U][4U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[1U][1U][2U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[2U][2U][1U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[2U][3U][3U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[2U][2U][2U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[3U][2U][4U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[2U][2U][3U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[2U][1U][1U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[2U][2U][4U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[1U][2U][2U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[2U][3U][2U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[3U][3U][4U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[2U][3U][3U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[2U][2U][1U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[2U][3U][4U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[1U][3U][2U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[3U][0U][1U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[3U][1U][3U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[3U][0U][4U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[2U][0U][2U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[3U][1U][1U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[3U][2U][3U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[3U][1U][3U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[3U][0U][1U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[3U][1U][4U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[2U][1U][2U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[3U][2U][1U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[3U][3U][3U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[3U][2U][3U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[3U][1U][1U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[3U][2U][4U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[2U][2U][2U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[3U][3U][3U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[3U][2U][1U];
    vlSelfRef.noc_mesh__DOT__router_input_flits[3U][3U][4U] 
        = vlSelfRef.noc_mesh__DOT__router_output_flits[2U][3U][2U];
    vlSelfRef.local_output_flits = vlSelfRef.noc_mesh__DOT__local_output_flits;
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__input_flits[0U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[0U][0U][0U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__input_flits[1U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[0U][0U][1U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__input_flits[2U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[0U][0U][2U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__input_flits[3U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[0U][0U][3U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__input_flits[4U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[0U][0U][4U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__input_flits[0U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[0U][1U][0U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__input_flits[1U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[0U][1U][1U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__input_flits[2U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[0U][1U][2U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__input_flits[3U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[0U][1U][3U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__input_flits[4U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[0U][1U][4U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__input_flits[0U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[0U][2U][0U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__input_flits[1U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[0U][2U][1U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__input_flits[2U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[0U][2U][2U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__input_flits[3U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[0U][2U][3U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__input_flits[4U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[0U][2U][4U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__input_flits[0U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[0U][3U][0U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__input_flits[1U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[0U][3U][1U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__input_flits[2U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[0U][3U][2U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__input_flits[3U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[0U][3U][3U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__input_flits[4U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[0U][3U][4U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__input_flits[0U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[1U][0U][0U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__input_flits[1U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[1U][0U][1U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__input_flits[2U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[1U][0U][2U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__input_flits[3U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[1U][0U][3U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__input_flits[4U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[1U][0U][4U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__input_flits[0U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[1U][1U][0U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__input_flits[1U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[1U][1U][1U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__input_flits[2U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[1U][1U][2U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__input_flits[3U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[1U][1U][3U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__input_flits[4U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[1U][1U][4U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__input_flits[0U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[1U][2U][0U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__input_flits[1U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[1U][2U][1U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__input_flits[2U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[1U][2U][2U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__input_flits[3U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[1U][2U][3U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__input_flits[4U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[1U][2U][4U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__input_flits[0U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[1U][3U][0U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__input_flits[1U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[1U][3U][1U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__input_flits[2U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[1U][3U][2U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__input_flits[3U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[1U][3U][3U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__input_flits[4U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[1U][3U][4U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__input_flits[0U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[2U][0U][0U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__input_flits[1U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[2U][0U][1U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__input_flits[2U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[2U][0U][2U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__input_flits[3U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[2U][0U][3U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__input_flits[4U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[2U][0U][4U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__input_flits[0U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[2U][1U][0U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__input_flits[1U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[2U][1U][1U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__input_flits[2U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[2U][1U][2U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__input_flits[3U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[2U][1U][3U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__input_flits[4U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[2U][1U][4U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__input_flits[0U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[2U][2U][0U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__input_flits[1U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[2U][2U][1U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__input_flits[2U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[2U][2U][2U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__input_flits[3U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[2U][2U][3U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__input_flits[4U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[2U][2U][4U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__input_flits[0U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[2U][3U][0U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__input_flits[1U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[2U][3U][1U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__input_flits[2U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[2U][3U][2U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__input_flits[3U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[2U][3U][3U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__input_flits[4U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[2U][3U][4U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__input_flits[0U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[3U][0U][0U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__input_flits[1U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[3U][0U][1U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__input_flits[2U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[3U][0U][2U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__input_flits[3U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[3U][0U][3U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__input_flits[4U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[3U][0U][4U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__input_flits[0U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[3U][1U][0U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__input_flits[1U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[3U][1U][1U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__input_flits[2U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[3U][1U][2U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__input_flits[3U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[3U][1U][3U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__input_flits[4U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[3U][1U][4U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__input_flits[0U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[3U][2U][0U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__input_flits[1U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[3U][2U][1U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__input_flits[2U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[3U][2U][2U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__input_flits[3U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[3U][2U][3U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__input_flits[4U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[3U][2U][4U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__input_flits[0U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[3U][3U][0U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__input_flits[1U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[3U][3U][1U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__input_flits[2U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[3U][3U][2U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__input_flits[3U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[3U][3U][3U];
    vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__input_flits[4U] 
        = vlSelfRef.noc_mesh__DOT__router_input_flits[3U][3U][4U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_flits 
        = vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__input_flits;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_flits 
        = vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__input_flits;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_flits 
        = vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__input_flits;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_flits 
        = vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__input_flits;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_flits 
        = vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__input_flits;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_flits 
        = vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__input_flits;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_flits 
        = vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__input_flits;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_flits 
        = vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__input_flits;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_flits 
        = vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__input_flits;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_flits 
        = vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__input_flits;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_flits 
        = vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__input_flits;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_flits 
        = vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__input_flits;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_flits 
        = vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__input_flits;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_flits 
        = vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__input_flits;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_flits 
        = vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__input_flits;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_flits 
        = vlSelfRef.noc_mesh__DOT____Vcellinp__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__input_flits;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_flits[4U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_flits[3U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_flits[2U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_flits[1U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_flits[0U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_flits[4U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_flits[3U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_flits[2U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_flits[1U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_flits[0U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_flits[4U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_flits[3U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_flits[2U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_flits[1U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_flits[0U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_flits[4U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_flits[3U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_flits[2U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_flits[1U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_flits[0U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_flits[4U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_flits[3U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_flits[2U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_flits[1U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_flits[0U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_flits[4U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_flits[3U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_flits[2U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_flits[1U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_flits[0U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_flits[4U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_flits[3U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_flits[2U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_flits[1U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_flits[0U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_flits[4U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_flits[3U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_flits[2U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_flits[1U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_flits[0U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_flits[4U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_flits[3U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_flits[2U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_flits[1U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_flits[0U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_flits[4U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_flits[3U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_flits[2U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_flits[1U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_flits[0U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_flits[4U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_flits[3U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_flits[2U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_flits[1U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_flits[0U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_flits[4U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_flits[3U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_flits[2U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_flits[1U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_flits[0U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_flits[4U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_flits[3U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_flits[2U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_flits[1U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_flits[0U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_flits[4U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_flits[3U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_flits[2U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_flits[1U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_flits[0U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_flits[4U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_flits[3U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_flits[2U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_flits[1U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_flits[0U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_flits[4U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_flits[3U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_flits[2U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_flits[1U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__flit_in 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_flits[0U];
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

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
                Vtop___024root___ico_sequent__TOP__1(vlSelf);
            }
        }
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_triggers_vec__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers_vec__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (((QData)((IData)(
                                                      ((((((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n)) 
                                                               & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n__0)) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__clk__0))) 
                                                                << 2U)) 
                                                            | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n__0)) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__clk__0))))) 
                                                           << 0x0000000cU) 
                                                          | ((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n__0)) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk__0))) 
                                                                  << 2U)) 
                                                              | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n__0)) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk__0))))) 
                                                             << 8U)) 
                                                         | (((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n__0)) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk__0))) 
                                                                  << 2U)) 
                                                              | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n__0)) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk__0))))) 
                                                             << 4U) 
                                                            | (((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__clk__0))))))) 
                                                        << 0x00000010U) 
                                                       | ((((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n)) 
                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n__0)) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__clk__0))) 
                                                                 << 2U)) 
                                                             | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n__0)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__clk__0))))) 
                                                            << 0x0000000cU) 
                                                           | ((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__clk__0))))) 
                                                              << 8U)) 
                                                          | (((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk__0))))) 
                                                              << 4U) 
                                                             | (((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n)) 
                                                                     & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n__0)) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk__0)))))))))) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       ((((((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n)) 
                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n__0)) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk__0))) 
                                                                 << 2U)) 
                                                             | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n__0)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__clk__0))))) 
                                                            << 0x0000000cU) 
                                                           | ((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__clk__0))))) 
                                                              << 8U)) 
                                                          | (((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__clk__0))))) 
                                                              << 4U) 
                                                             | (((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n)) 
                                                                     & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n__0)) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk__0))))))) 
                                                         << 0x00000010U) 
                                                        | ((((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n__0)) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk__0))) 
                                                                  << 2U)) 
                                                              | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n__0)) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk__0))))) 
                                                             << 0x0000000cU) 
                                                            | ((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n)) 
                                                                     & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n__0)) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__clk__0))))) 
                                                               << 8U)) 
                                                           | (((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n)) 
                                                                     & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n__0)) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__clk__0))))) 
                                                               << 4U) 
                                                              | (((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n__0)) 
                                                                   << 3U) 
                                                                  | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__clk__0))) 
                                                                     << 2U)) 
                                                                 | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n)) 
                                                                      & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n__0)) 
                                                                     << 1U) 
                                                                    | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__clk) 
                                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__clk__0)))))))))));
    vlSelfRef.__VactTriggered[1U] = (((QData)((IData)(
                                                      ((((((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n)) 
                                                               & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n__0)) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__clk__0))) 
                                                                << 2U)) 
                                                            | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n__0)) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__clk__0))))) 
                                                           << 0x0000000cU) 
                                                          | ((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n__0)) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__clk__0))) 
                                                                  << 2U)) 
                                                              | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n__0)) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__clk__0))))) 
                                                             << 8U)) 
                                                         | (((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n__0)) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk__0))) 
                                                                  << 2U)) 
                                                              | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n__0)) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk__0))))) 
                                                             << 4U) 
                                                            | (((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk__0))))))) 
                                                        << 0x00000010U) 
                                                       | ((((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n)) 
                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n__0)) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk__0))) 
                                                                 << 2U)) 
                                                             | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n__0)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__clk__0))))) 
                                                            << 0x0000000cU) 
                                                           | ((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__clk__0))))) 
                                                              << 8U)) 
                                                          | (((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__clk__0))))) 
                                                              << 4U) 
                                                             | (((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n)) 
                                                                     & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n__0)) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk__0)))))))))) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       ((((((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n)) 
                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n__0)) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk__0))) 
                                                                 << 2U)) 
                                                             | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n__0)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk__0))))) 
                                                            << 0x0000000cU) 
                                                           | ((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__clk__0))))) 
                                                              << 8U)) 
                                                          | (((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__clk__0))))) 
                                                              << 4U) 
                                                             | (((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n)) 
                                                                     & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n__0)) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__clk__0))))))) 
                                                         << 0x00000010U) 
                                                        | ((((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n__0)) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk__0))) 
                                                                  << 2U)) 
                                                              | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n__0)) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk__0))))) 
                                                             << 0x0000000cU) 
                                                            | ((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n)) 
                                                                     & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n__0)) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk__0))))) 
                                                               << 8U)) 
                                                           | (((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n)) 
                                                                     & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n__0)) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__clk__0))))) 
                                                               << 4U) 
                                                              | (((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n__0)) 
                                                                   << 3U) 
                                                                  | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__clk__0))) 
                                                                     << 2U)) 
                                                                 | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n)) 
                                                                      & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n__0)) 
                                                                     << 1U) 
                                                                    | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__clk) 
                                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__clk__0)))))))))));
    vlSelfRef.__VactTriggered[2U] = (((QData)((IData)(
                                                      ((((((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n)) 
                                                               & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n__0)) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk__0))) 
                                                                << 2U)) 
                                                            | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n__0)) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__clk__0))))) 
                                                           << 0x0000000cU) 
                                                          | ((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n__0)) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__clk__0))) 
                                                                  << 2U)) 
                                                              | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n__0)) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__clk__0))))) 
                                                             << 8U)) 
                                                         | (((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n__0)) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__clk__0))) 
                                                                  << 2U)) 
                                                              | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n__0)) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__clk__0))))) 
                                                             << 4U) 
                                                            | (((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk__0))))))) 
                                                        << 0x00000010U) 
                                                       | ((((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n)) 
                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n__0)) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk__0))) 
                                                                 << 2U)) 
                                                             | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n__0)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk__0))))) 
                                                            << 0x0000000cU) 
                                                           | ((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__clk__0))))) 
                                                              << 8U)) 
                                                          | (((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__clk__0))))) 
                                                              << 4U) 
                                                             | (((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n)) 
                                                                     & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n__0)) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__clk__0)))))))))) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       ((((((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n)) 
                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n__0)) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk__0))) 
                                                                 << 2U)) 
                                                             | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n__0)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk__0))))) 
                                                            << 0x0000000cU) 
                                                           | ((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk__0))))) 
                                                              << 8U)) 
                                                          | (((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__clk__0))))) 
                                                              << 4U) 
                                                             | (((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n)) 
                                                                     & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n__0)) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__clk__0))))))) 
                                                         << 0x00000010U) 
                                                        | ((((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n__0)) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__clk__0))) 
                                                                  << 2U)) 
                                                              | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n__0)) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__clk__0))))) 
                                                             << 0x0000000cU) 
                                                            | ((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n)) 
                                                                     & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n__0)) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk__0))))) 
                                                               << 8U)) 
                                                           | (((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n)) 
                                                                     & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n__0)) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk__0))))) 
                                                               << 4U) 
                                                              | (((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n__0)) 
                                                                   << 3U) 
                                                                  | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk__0))) 
                                                                     << 2U)) 
                                                                 | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n)) 
                                                                      & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n__0)) 
                                                                     << 1U) 
                                                                    | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__clk) 
                                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__clk__0)))))))))));
    vlSelfRef.__VactTriggered[3U] = (((QData)((IData)(
                                                      ((((((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n)) 
                                                               & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n__0)) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk__0))) 
                                                                << 2U)) 
                                                            | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n__0)) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk__0))))) 
                                                           << 0x0000000cU) 
                                                          | ((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n__0)) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk__0))) 
                                                                  << 2U)) 
                                                              | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n__0)) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__clk__0))))) 
                                                             << 8U)) 
                                                         | (((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n__0)) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__clk__0))) 
                                                                  << 2U)) 
                                                              | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n__0)) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__clk__0))))) 
                                                             << 4U) 
                                                            | (((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__clk__0))))))) 
                                                        << 0x00000010U) 
                                                       | ((((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n)) 
                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n__0)) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk__0))) 
                                                                 << 2U)) 
                                                             | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n__0)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk__0))))) 
                                                            << 0x0000000cU) 
                                                           | ((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk__0))))) 
                                                              << 8U)) 
                                                          | (((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__clk__0))))) 
                                                              << 4U) 
                                                             | (((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n)) 
                                                                     & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n__0)) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__clk__0)))))))))) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       ((((((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n)) 
                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n__0)) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__clk__0))) 
                                                                 << 2U)) 
                                                             | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n__0)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__clk__0))))) 
                                                            << 0x0000000cU) 
                                                           | ((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk__0))))) 
                                                              << 8U)) 
                                                          | (((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk__0))))) 
                                                              << 4U) 
                                                             | (((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n)) 
                                                                     & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n__0)) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__clk__0))))))) 
                                                         << 0x00000010U) 
                                                        | ((((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n__0)) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__clk__0))) 
                                                                  << 2U)) 
                                                              | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n__0)) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__clk__0))))) 
                                                             << 0x0000000cU) 
                                                            | ((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n)) 
                                                                     & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n__0)) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__clk__0))))) 
                                                               << 8U)) 
                                                           | (((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n)) 
                                                                     & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n__0)) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk__0))))) 
                                                               << 4U) 
                                                              | (((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n__0)) 
                                                                   << 3U) 
                                                                  | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk__0))) 
                                                                     << 2U)) 
                                                                 | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n)) 
                                                                      & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n__0)) 
                                                                     << 1U) 
                                                                    | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk) 
                                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk__0)))))))))));
    vlSelfRef.__VactTriggered[4U] = (((QData)((IData)(
                                                      ((((((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n)) 
                                                               & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n__0)) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk__0))) 
                                                                << 2U)) 
                                                            | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n__0)) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk__0))))) 
                                                           << 0x0000000cU) 
                                                          | ((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n__0)) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk__0))) 
                                                                  << 2U)) 
                                                              | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n__0)) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk__0))))) 
                                                             << 8U)) 
                                                         | (((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n__0)) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk__0))) 
                                                                  << 2U)) 
                                                              | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n__0)) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__clk__0))))) 
                                                             << 4U) 
                                                            | (((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__clk__0))))))) 
                                                        << 0x00000010U) 
                                                       | ((((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n)) 
                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n__0)) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__clk__0))) 
                                                                 << 2U)) 
                                                             | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n__0)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__clk__0))))) 
                                                            << 0x0000000cU) 
                                                           | ((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk__0))))) 
                                                              << 8U)) 
                                                          | (((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk__0))))) 
                                                              << 4U) 
                                                             | (((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n)) 
                                                                     & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n__0)) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__clk__0)))))))))) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       ((((((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n)) 
                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n__0)) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__clk__0))) 
                                                                 << 2U)) 
                                                             | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n__0)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__clk__0))))) 
                                                            << 0x0000000cU) 
                                                           | ((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__clk__0))))) 
                                                              << 8U)) 
                                                          | (((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk__0))))) 
                                                              << 4U) 
                                                             | (((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n)) 
                                                                     & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n__0)) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk__0))))))) 
                                                         << 0x00000010U) 
                                                        | ((((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n__0)) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk__0))) 
                                                                  << 2U)) 
                                                              | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n__0)) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__clk__0))))) 
                                                             << 0x0000000cU) 
                                                            | ((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n)) 
                                                                     & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n__0)) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__clk__0))))) 
                                                               << 8U)) 
                                                           | (((((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n)) 
                                                                     & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n__0)) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__clk__0))))) 
                                                               << 4U) 
                                                              | (((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n__0)) 
                                                                   << 3U) 
                                                                  | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk__0))) 
                                                                     << 2U)) 
                                                                 | ((((~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n)) 
                                                                      & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n__0)) 
                                                                     << 1U) 
                                                                    | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk) 
                                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk__0)))))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n__0 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__0__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__rst_n;
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 5> &in) {
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
    } while ((5U > n));
    return (0U);
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__fifo_flits[4U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__fifo_flits[3U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__fifo_flits[2U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__fifo_flits[1U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__fifo_flits[0U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__fifo_flits[4U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__fifo_flits[3U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__fifo_flits[2U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__fifo_flits[1U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__fifo_flits[0U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__fifo_flits[4U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__11(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__11\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__fifo_flits[3U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__12(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__12\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__fifo_flits[2U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__13(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__13\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__fifo_flits[1U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__14(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__14\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__fifo_flits[0U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__15(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__15\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__fifo_flits[4U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__16(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__16\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__fifo_flits[3U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__17(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__17\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__fifo_flits[2U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__18(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__18\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__fifo_flits[1U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__19(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__19\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__fifo_flits[0U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__20(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__20\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__fifo_flits[4U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__21(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__21\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__fifo_flits[3U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__22(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__22\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__fifo_flits[2U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__23(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__23\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__fifo_flits[1U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__24(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__24\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__fifo_flits[0U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__25(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__25\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__fifo_flits[4U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__26(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__26\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__fifo_flits[3U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__27(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__27\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__fifo_flits[2U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__28(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__28\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__fifo_flits[1U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__29(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__29\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__fifo_flits[0U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__30(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__30\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__fifo_flits[4U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__31(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__31\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__fifo_flits[3U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__32(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__32\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__fifo_flits[2U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__33(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__33\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__fifo_flits[1U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__34(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__34\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__fifo_flits[0U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__35(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__35\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__fifo_flits[4U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__36(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__36\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__fifo_flits[3U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__37(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__37\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__fifo_flits[2U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__38(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__38\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__fifo_flits[1U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__39(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__39\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__fifo_flits[0U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__40(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__40\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__fifo_flits[4U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__41(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__41\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__fifo_flits[3U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__42(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__42\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__fifo_flits[2U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__43(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__43\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__fifo_flits[1U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__44(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__44\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__fifo_flits[0U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_sequent__TOP__45(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__45\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    __VdlyVal__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*1:0*/ __VdlyDim0__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    __VdlyDim0__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    __VdlySet__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0;
    // Body
    __VdlySet__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 0U;
    if (vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__rst_n) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__count 
            = (7U & ((2U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__write_request) 
                               & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__full))) 
                              << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__read_request) 
                                        & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__empty)))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__count))
                      : ((1U == ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__write_request) 
                                   & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__full))) 
                                  << 1U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__read_request) 
                                            & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__empty)))))
                          ? ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__count) 
                             - (IData)(1U)) : (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__count))));
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__read_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__empty)))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__write_request) 
             & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__full)))) {
            __VdlyVal__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__flit_in;
            __VdlyDim0__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 
                = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr;
            __VdlySet__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0 = 1U;
            vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__count = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr = 0U;
        vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0) {
        vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory[__VdlyDim0__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0] 
            = __VdlyVal__noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory__v0;
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__full 
        = (4U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__empty 
        = (0U == (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__count));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__flit_out 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__fifo_memory
        [vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__rd_ptr];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__fifo_flits[4U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__1__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__flit_out;
}

void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__full 
        = ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__full) 
             << 4U) | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__full) 
                        << 3U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__full) 
                                  << 2U))) | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__full) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__full)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__empty 
        = ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__empty) 
             << 4U) | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__empty) 
                        << 3U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__empty) 
                                  << 2U))) | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__empty) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__empty)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__crossbar__DOT__input_flits 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__fifo_flits;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_routing_unit__DOT__dest_x 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__fifo_flits[4U] 
                         >> 0x0000003cU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_routing_unit__DOT__dest_y 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__fifo_flits[4U] 
                         >> 0x0000003aU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_routing_unit__DOT__dest_x 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__fifo_flits[3U] 
                         >> 0x0000003cU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_routing_unit__DOT__dest_y 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__fifo_flits[3U] 
                         >> 0x0000003aU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_routing_unit__DOT__dest_x 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__fifo_flits[2U] 
                         >> 0x0000003cU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_routing_unit__DOT__dest_y 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__fifo_flits[2U] 
                         >> 0x0000003aU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_routing_unit__DOT__dest_x 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__fifo_flits[1U] 
                         >> 0x0000003cU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_routing_unit__DOT__dest_y 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__fifo_flits[1U] 
                         >> 0x0000003aU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_routing_unit__DOT__dest_x 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__fifo_flits[0U] 
                         >> 0x0000003cU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_routing_unit__DOT__dest_y 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__fifo_flits[0U] 
                         >> 0x0000003aU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_ready 
        = (0x0000001fU & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__full)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_routing_unit__DOT__route_out 
        = ((3U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_routing_unit__DOT__dest_x))
            ? 4U : (3U & (- (IData)((3U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_routing_unit__DOT__dest_y))))));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_routing_unit__DOT__route_out 
        = ((3U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_routing_unit__DOT__dest_x))
            ? 4U : (3U & (- (IData)((3U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_routing_unit__DOT__dest_y))))));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_routing_unit__DOT__route_out 
        = ((3U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_routing_unit__DOT__dest_x))
            ? 4U : (3U & (- (IData)((3U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_routing_unit__DOT__dest_y))))));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_routing_unit__DOT__route_out 
        = ((3U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_routing_unit__DOT__dest_x))
            ? 4U : (3U & (- (IData)((3U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_routing_unit__DOT__dest_y))))));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_routing_unit__DOT__route_out 
        = ((3U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_routing_unit__DOT__dest_x))
            ? 4U : (3U & (- (IData)((3U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_routing_unit__DOT__dest_y))))));
    vlSelfRef.noc_mesh__DOT__router_input_ready[3U][3U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_ready;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__requested_output[4U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_routing_unit__DOT__route_out;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__requested_output[3U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_routing_unit__DOT__route_out;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__requested_output[2U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_routing_unit__DOT__route_out;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__requested_output[1U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_routing_unit__DOT__route_out;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__requested_output[0U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_routing_unit__DOT__route_out;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk1__DOT__output_port = 0U;
    while (VL_GTS_III(32, 5U, vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk1__DOT__output_port)) {
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk1__DOT__output_port))))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__allocator_requests[(7U 
                                                                                & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk1__DOT__output_port)] = 0U;
        }
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk1__DOT__output_port 
            = ((IData)(1U) + vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk1__DOT__output_port);
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk2__DOT__input_port = 0U;
    while (VL_GTS_III(32, 5U, vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)) {
        if ((1U & (~ ((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)) 
                      && (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__empty) 
                                >> (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk2__DOT__input_port))))))) {
            if (VL_LIKELY((((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)) 
                            && (4U >= ((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk2__DOT__input_port))
                                        ? vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__requested_output
                                       [(7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)]
                                        : 0U)))))) {
                vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__allocator_requests[(
                                                                                (4U 
                                                                                >= 
                                                                                (7U 
                                                                                & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk2__DOT__input_port))
                                                                                 ? vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__requested_output
                                                                                [
                                                                                (7U 
                                                                                & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)]
                                                                                 : 0U)] 
                    = (vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__allocator_requests
                       [((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk2__DOT__input_port))
                          ? vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__requested_output
                         [(7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)]
                          : 0U)] | (0x1fU & ((CData)(1U) 
                                             << (7U 
                                                 & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk2__DOT__input_port))));
            }
        }
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk2__DOT__input_port 
            = ((IData)(1U) + vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk2__DOT__input_port);
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__requests 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__allocator_requests;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__request 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__requests[4U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__request 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__requests[3U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__request 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__requests[2U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__request 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__requests[1U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__request 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__requests[0U];
}

void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__full 
        = ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__full) 
             << 4U) | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__full) 
                        << 3U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__full) 
                                  << 2U))) | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__full) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__full)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__empty 
        = ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__empty) 
             << 4U) | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__empty) 
                        << 3U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__empty) 
                                  << 2U))) | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__empty) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__empty)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__crossbar__DOT__input_flits 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__fifo_flits;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_routing_unit__DOT__dest_x 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__fifo_flits[4U] 
                         >> 0x0000003cU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_routing_unit__DOT__dest_y 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__fifo_flits[4U] 
                         >> 0x0000003aU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_routing_unit__DOT__dest_x 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__fifo_flits[3U] 
                         >> 0x0000003cU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_routing_unit__DOT__dest_y 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__fifo_flits[3U] 
                         >> 0x0000003aU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_routing_unit__DOT__dest_x 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__fifo_flits[2U] 
                         >> 0x0000003cU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_routing_unit__DOT__dest_y 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__fifo_flits[2U] 
                         >> 0x0000003aU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_routing_unit__DOT__dest_x 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__fifo_flits[1U] 
                         >> 0x0000003cU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_routing_unit__DOT__dest_y 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__fifo_flits[1U] 
                         >> 0x0000003aU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_routing_unit__DOT__dest_x 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__fifo_flits[0U] 
                         >> 0x0000003cU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_routing_unit__DOT__dest_y 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__fifo_flits[0U] 
                         >> 0x0000003aU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_ready 
        = (0x0000001fU & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__full)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_routing_unit__DOT__route_out 
        = ((3U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_routing_unit__DOT__dest_x))
            ? 4U : ((2U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_routing_unit__DOT__dest_y))
                     ? 1U : (3U & (- (IData)((2U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_routing_unit__DOT__dest_y)))))));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_routing_unit__DOT__route_out 
        = ((3U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_routing_unit__DOT__dest_x))
            ? 4U : ((2U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_routing_unit__DOT__dest_y))
                     ? 1U : (3U & (- (IData)((2U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_routing_unit__DOT__dest_y)))))));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_routing_unit__DOT__route_out 
        = ((3U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_routing_unit__DOT__dest_x))
            ? 4U : ((2U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_routing_unit__DOT__dest_y))
                     ? 1U : (3U & (- (IData)((2U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_routing_unit__DOT__dest_y)))))));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_routing_unit__DOT__route_out 
        = ((3U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_routing_unit__DOT__dest_x))
            ? 4U : ((2U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_routing_unit__DOT__dest_y))
                     ? 1U : (3U & (- (IData)((2U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_routing_unit__DOT__dest_y)))))));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_routing_unit__DOT__route_out 
        = ((3U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_routing_unit__DOT__dest_x))
            ? 4U : ((2U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_routing_unit__DOT__dest_y))
                     ? 1U : (3U & (- (IData)((2U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_routing_unit__DOT__dest_y)))))));
    vlSelfRef.noc_mesh__DOT__router_input_ready[3U][2U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_ready;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__requested_output[4U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_routing_unit__DOT__route_out;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__requested_output[3U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_routing_unit__DOT__route_out;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__requested_output[2U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_routing_unit__DOT__route_out;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__requested_output[1U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_routing_unit__DOT__route_out;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__requested_output[0U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_routing_unit__DOT__route_out;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk1__DOT__output_port = 0U;
    while (VL_GTS_III(32, 5U, vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk1__DOT__output_port)) {
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk1__DOT__output_port))))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__allocator_requests[(7U 
                                                                                & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk1__DOT__output_port)] = 0U;
        }
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk1__DOT__output_port 
            = ((IData)(1U) + vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk1__DOT__output_port);
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk2__DOT__input_port = 0U;
    while (VL_GTS_III(32, 5U, vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)) {
        if ((1U & (~ ((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)) 
                      && (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__empty) 
                                >> (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk2__DOT__input_port))))))) {
            if (VL_LIKELY((((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)) 
                            && (4U >= ((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk2__DOT__input_port))
                                        ? vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__requested_output
                                       [(7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)]
                                        : 0U)))))) {
                vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__allocator_requests[(
                                                                                (4U 
                                                                                >= 
                                                                                (7U 
                                                                                & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk2__DOT__input_port))
                                                                                 ? vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__requested_output
                                                                                [
                                                                                (7U 
                                                                                & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)]
                                                                                 : 0U)] 
                    = (vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__allocator_requests
                       [((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk2__DOT__input_port))
                          ? vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__requested_output
                         [(7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)]
                          : 0U)] | (0x1fU & ((CData)(1U) 
                                             << (7U 
                                                 & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk2__DOT__input_port))));
            }
        }
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk2__DOT__input_port 
            = ((IData)(1U) + vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk2__DOT__input_port);
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__requests 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__allocator_requests;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__request 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__requests[4U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__request 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__requests[3U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__request 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__requests[2U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__request 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__requests[1U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__request 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__requests[0U];
}

void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__full 
        = ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__full) 
             << 4U) | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__full) 
                        << 3U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__full) 
                                  << 2U))) | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__full) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__full)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__empty 
        = ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__empty) 
             << 4U) | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__empty) 
                        << 3U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__empty) 
                                  << 2U))) | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__empty) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__empty)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__crossbar__DOT__input_flits 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__fifo_flits;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_routing_unit__DOT__dest_x 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__fifo_flits[4U] 
                         >> 0x0000003cU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_routing_unit__DOT__dest_y 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__fifo_flits[4U] 
                         >> 0x0000003aU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_routing_unit__DOT__dest_x 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__fifo_flits[3U] 
                         >> 0x0000003cU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_routing_unit__DOT__dest_y 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__fifo_flits[3U] 
                         >> 0x0000003aU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_routing_unit__DOT__dest_x 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__fifo_flits[2U] 
                         >> 0x0000003cU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_routing_unit__DOT__dest_y 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__fifo_flits[2U] 
                         >> 0x0000003aU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_routing_unit__DOT__dest_x 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__fifo_flits[1U] 
                         >> 0x0000003cU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_routing_unit__DOT__dest_y 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__fifo_flits[1U] 
                         >> 0x0000003aU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_routing_unit__DOT__dest_x 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__fifo_flits[0U] 
                         >> 0x0000003cU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_routing_unit__DOT__dest_y 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__fifo_flits[0U] 
                         >> 0x0000003aU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_ready 
        = (0x0000001fU & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__full)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_routing_unit__DOT__route_out 
        = ((3U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_routing_unit__DOT__dest_x))
            ? 4U : ((1U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_routing_unit__DOT__dest_y))
                     ? 1U : (3U & (- (IData)((1U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_routing_unit__DOT__dest_y)))))));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_routing_unit__DOT__route_out 
        = ((3U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_routing_unit__DOT__dest_x))
            ? 4U : ((1U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_routing_unit__DOT__dest_y))
                     ? 1U : (3U & (- (IData)((1U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_routing_unit__DOT__dest_y)))))));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_routing_unit__DOT__route_out 
        = ((3U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_routing_unit__DOT__dest_x))
            ? 4U : ((1U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_routing_unit__DOT__dest_y))
                     ? 1U : (3U & (- (IData)((1U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_routing_unit__DOT__dest_y)))))));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_routing_unit__DOT__route_out 
        = ((3U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_routing_unit__DOT__dest_x))
            ? 4U : ((1U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_routing_unit__DOT__dest_y))
                     ? 1U : (3U & (- (IData)((1U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_routing_unit__DOT__dest_y)))))));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_routing_unit__DOT__route_out 
        = ((3U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_routing_unit__DOT__dest_x))
            ? 4U : ((1U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_routing_unit__DOT__dest_y))
                     ? 1U : (3U & (- (IData)((1U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_routing_unit__DOT__dest_y)))))));
    vlSelfRef.noc_mesh__DOT__router_input_ready[3U][1U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_ready;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__requested_output[4U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_routing_unit__DOT__route_out;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__requested_output[3U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_routing_unit__DOT__route_out;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__requested_output[2U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_routing_unit__DOT__route_out;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__requested_output[1U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_routing_unit__DOT__route_out;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__requested_output[0U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_routing_unit__DOT__route_out;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk1__DOT__output_port = 0U;
    while (VL_GTS_III(32, 5U, vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk1__DOT__output_port)) {
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk1__DOT__output_port))))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__allocator_requests[(7U 
                                                                                & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk1__DOT__output_port)] = 0U;
        }
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk1__DOT__output_port 
            = ((IData)(1U) + vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk1__DOT__output_port);
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk2__DOT__input_port = 0U;
    while (VL_GTS_III(32, 5U, vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)) {
        if ((1U & (~ ((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)) 
                      && (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__empty) 
                                >> (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk2__DOT__input_port))))))) {
            if (VL_LIKELY((((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)) 
                            && (4U >= ((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk2__DOT__input_port))
                                        ? vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__requested_output
                                       [(7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)]
                                        : 0U)))))) {
                vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__allocator_requests[(
                                                                                (4U 
                                                                                >= 
                                                                                (7U 
                                                                                & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk2__DOT__input_port))
                                                                                 ? vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__requested_output
                                                                                [
                                                                                (7U 
                                                                                & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)]
                                                                                 : 0U)] 
                    = (vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__allocator_requests
                       [((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk2__DOT__input_port))
                          ? vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__requested_output
                         [(7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)]
                          : 0U)] | (0x1fU & ((CData)(1U) 
                                             << (7U 
                                                 & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk2__DOT__input_port))));
            }
        }
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk2__DOT__input_port 
            = ((IData)(1U) + vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk2__DOT__input_port);
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__requests 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__allocator_requests;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__request 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__requests[4U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__request 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__requests[3U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__request 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__requests[2U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__request 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__requests[1U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__request 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__requests[0U];
}

void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__full 
        = ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__full) 
             << 4U) | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__full) 
                        << 3U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__full) 
                                  << 2U))) | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__full) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__full)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__empty 
        = ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_input_buffer__DOT__empty) 
             << 4U) | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_input_buffer__DOT__empty) 
                        << 3U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_input_buffer__DOT__empty) 
                                  << 2U))) | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_input_buffer__DOT__empty) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_input_buffer__DOT__empty)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__crossbar__DOT__input_flits 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__fifo_flits;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_routing_unit__DOT__dest_x 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__fifo_flits[4U] 
                         >> 0x0000003cU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_routing_unit__DOT__dest_y 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__fifo_flits[4U] 
                         >> 0x0000003aU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_routing_unit__DOT__dest_x 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__fifo_flits[3U] 
                         >> 0x0000003cU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_routing_unit__DOT__dest_y 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__fifo_flits[3U] 
                         >> 0x0000003aU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_routing_unit__DOT__dest_x 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__fifo_flits[2U] 
                         >> 0x0000003cU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_routing_unit__DOT__dest_y 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__fifo_flits[2U] 
                         >> 0x0000003aU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_routing_unit__DOT__dest_x 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__fifo_flits[1U] 
                         >> 0x0000003cU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_routing_unit__DOT__dest_y 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__fifo_flits[1U] 
                         >> 0x0000003aU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_routing_unit__DOT__dest_x 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__fifo_flits[0U] 
                         >> 0x0000003cU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_routing_unit__DOT__dest_y 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__fifo_flits[0U] 
                         >> 0x0000003aU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_ready 
        = (0x0000001fU & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__full)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_routing_unit__DOT__route_out 
        = ((3U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_routing_unit__DOT__dest_x))
            ? 4U : (1U & (- (IData)((0U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_routing_unit__DOT__dest_y))))));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_routing_unit__DOT__route_out 
        = ((3U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_routing_unit__DOT__dest_x))
            ? 4U : (1U & (- (IData)((0U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_routing_unit__DOT__dest_y))))));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_routing_unit__DOT__route_out 
        = ((3U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_routing_unit__DOT__dest_x))
            ? 4U : (1U & (- (IData)((0U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_routing_unit__DOT__dest_y))))));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_routing_unit__DOT__route_out 
        = ((3U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_routing_unit__DOT__dest_x))
            ? 4U : (1U & (- (IData)((0U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_routing_unit__DOT__dest_y))))));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_routing_unit__DOT__route_out 
        = ((3U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_routing_unit__DOT__dest_x))
            ? 4U : (1U & (- (IData)((0U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_routing_unit__DOT__dest_y))))));
    vlSelfRef.noc_mesh__DOT__router_input_ready[3U][0U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__input_ready;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__requested_output[4U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__west_routing_unit__DOT__route_out;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__requested_output[3U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__south_routing_unit__DOT__route_out;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__requested_output[2U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__east_routing_unit__DOT__route_out;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__requested_output[1U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__north_routing_unit__DOT__route_out;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__requested_output[0U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__local_routing_unit__DOT__route_out;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__unnamedblk1__DOT__output_port = 0U;
    while (VL_GTS_III(32, 5U, vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__unnamedblk1__DOT__output_port)) {
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__unnamedblk1__DOT__output_port))))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__allocator_requests[(7U 
                                                                                & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__unnamedblk1__DOT__output_port)] = 0U;
        }
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__unnamedblk1__DOT__output_port 
            = ((IData)(1U) + vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__unnamedblk1__DOT__output_port);
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__unnamedblk2__DOT__input_port = 0U;
    while (VL_GTS_III(32, 5U, vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)) {
        if ((1U & (~ ((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)) 
                      && (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__empty) 
                                >> (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__unnamedblk2__DOT__input_port))))))) {
            if (VL_LIKELY((((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)) 
                            && (4U >= ((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__unnamedblk2__DOT__input_port))
                                        ? vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__requested_output
                                       [(7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)]
                                        : 0U)))))) {
                vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__allocator_requests[(
                                                                                (4U 
                                                                                >= 
                                                                                (7U 
                                                                                & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__unnamedblk2__DOT__input_port))
                                                                                 ? vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__requested_output
                                                                                [
                                                                                (7U 
                                                                                & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)]
                                                                                 : 0U)] 
                    = (vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__allocator_requests
                       [((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__unnamedblk2__DOT__input_port))
                          ? vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__requested_output
                         [(7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)]
                          : 0U)] | (0x1fU & ((CData)(1U) 
                                             << (7U 
                                                 & vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__unnamedblk2__DOT__input_port))));
            }
        }
        vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__unnamedblk2__DOT__input_port 
            = ((IData)(1U) + vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__unnamedblk2__DOT__input_port);
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__requests 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__allocator_requests;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__request 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__requests[4U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__request 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__requests[3U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__request 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__requests[2U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__request 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__requests[1U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__request 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__3__KET____DOT__router_row__BRA__0__KET____DOT__router__DOT__arbiter__DOT__requests[0U];
}

void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__full 
        = ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__full) 
             << 4U) | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__full) 
                        << 3U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__full) 
                                  << 2U))) | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__full) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__full)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__empty 
        = ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_input_buffer__DOT__empty) 
             << 4U) | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_input_buffer__DOT__empty) 
                        << 3U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_input_buffer__DOT__empty) 
                                  << 2U))) | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_input_buffer__DOT__empty) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_input_buffer__DOT__empty)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__crossbar__DOT__input_flits 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__fifo_flits;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_routing_unit__DOT__dest_x 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__fifo_flits[4U] 
                         >> 0x0000003cU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_routing_unit__DOT__dest_y 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__fifo_flits[4U] 
                         >> 0x0000003aU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_routing_unit__DOT__dest_x 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__fifo_flits[3U] 
                         >> 0x0000003cU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_routing_unit__DOT__dest_y 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__fifo_flits[3U] 
                         >> 0x0000003aU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_routing_unit__DOT__dest_x 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__fifo_flits[2U] 
                         >> 0x0000003cU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_routing_unit__DOT__dest_y 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__fifo_flits[2U] 
                         >> 0x0000003aU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_routing_unit__DOT__dest_x 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__fifo_flits[1U] 
                         >> 0x0000003cU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_routing_unit__DOT__dest_y 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__fifo_flits[1U] 
                         >> 0x0000003aU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_routing_unit__DOT__dest_x 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__fifo_flits[0U] 
                         >> 0x0000003cU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_routing_unit__DOT__dest_y 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__fifo_flits[0U] 
                         >> 0x0000003aU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_ready 
        = (0x0000001fU & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__full)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_routing_unit__DOT__route_out 
        = ((2U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_routing_unit__DOT__dest_x))
            ? 2U : ((2U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_routing_unit__DOT__dest_x))
                     ? 4U : (3U & (- (IData)((3U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_routing_unit__DOT__dest_y)))))));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_routing_unit__DOT__route_out 
        = ((2U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_routing_unit__DOT__dest_x))
            ? 2U : ((2U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_routing_unit__DOT__dest_x))
                     ? 4U : (3U & (- (IData)((3U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_routing_unit__DOT__dest_y)))))));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_routing_unit__DOT__route_out 
        = ((2U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_routing_unit__DOT__dest_x))
            ? 2U : ((2U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_routing_unit__DOT__dest_x))
                     ? 4U : (3U & (- (IData)((3U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_routing_unit__DOT__dest_y)))))));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_routing_unit__DOT__route_out 
        = ((2U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_routing_unit__DOT__dest_x))
            ? 2U : ((2U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_routing_unit__DOT__dest_x))
                     ? 4U : (3U & (- (IData)((3U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_routing_unit__DOT__dest_y)))))));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_routing_unit__DOT__route_out 
        = ((2U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_routing_unit__DOT__dest_x))
            ? 2U : ((2U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_routing_unit__DOT__dest_x))
                     ? 4U : (3U & (- (IData)((3U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_routing_unit__DOT__dest_y)))))));
    vlSelfRef.noc_mesh__DOT__router_input_ready[2U][3U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__input_ready;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__requested_output[4U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__west_routing_unit__DOT__route_out;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__requested_output[3U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__south_routing_unit__DOT__route_out;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__requested_output[2U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__east_routing_unit__DOT__route_out;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__requested_output[1U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__north_routing_unit__DOT__route_out;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__requested_output[0U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__local_routing_unit__DOT__route_out;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk1__DOT__output_port = 0U;
    while (VL_GTS_III(32, 5U, vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk1__DOT__output_port)) {
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk1__DOT__output_port))))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__allocator_requests[(7U 
                                                                                & vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk1__DOT__output_port)] = 0U;
        }
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk1__DOT__output_port 
            = ((IData)(1U) + vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk1__DOT__output_port);
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk2__DOT__input_port = 0U;
    while (VL_GTS_III(32, 5U, vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)) {
        if ((1U & (~ ((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)) 
                      && (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__empty) 
                                >> (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk2__DOT__input_port))))))) {
            if (VL_LIKELY((((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)) 
                            && (4U >= ((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk2__DOT__input_port))
                                        ? vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__requested_output
                                       [(7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)]
                                        : 0U)))))) {
                vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__allocator_requests[(
                                                                                (4U 
                                                                                >= 
                                                                                (7U 
                                                                                & vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk2__DOT__input_port))
                                                                                 ? vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__requested_output
                                                                                [
                                                                                (7U 
                                                                                & vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)]
                                                                                 : 0U)] 
                    = (vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__allocator_requests
                       [((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk2__DOT__input_port))
                          ? vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__requested_output
                         [(7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)]
                          : 0U)] | (0x1fU & ((CData)(1U) 
                                             << (7U 
                                                 & vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk2__DOT__input_port))));
            }
        }
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk2__DOT__input_port 
            = ((IData)(1U) + vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__unnamedblk2__DOT__input_port);
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__requests 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__allocator_requests;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__request 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__requests[4U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__request 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__requests[3U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__request 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__requests[2U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__request 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__requests[1U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__request 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__3__KET____DOT__router__DOT__arbiter__DOT__requests[0U];
}

void Vtop___024root___nba_comb__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__full 
        = ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__full) 
             << 4U) | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__full) 
                        << 3U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__full) 
                                  << 2U))) | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__full) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__full)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__empty 
        = ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_input_buffer__DOT__empty) 
             << 4U) | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_input_buffer__DOT__empty) 
                        << 3U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_input_buffer__DOT__empty) 
                                  << 2U))) | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_input_buffer__DOT__empty) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_input_buffer__DOT__empty)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__crossbar__DOT__input_flits 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__fifo_flits;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_routing_unit__DOT__dest_x 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__fifo_flits[4U] 
                         >> 0x0000003cU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_routing_unit__DOT__dest_y 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__fifo_flits[4U] 
                         >> 0x0000003aU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_routing_unit__DOT__dest_x 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__fifo_flits[3U] 
                         >> 0x0000003cU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_routing_unit__DOT__dest_y 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__fifo_flits[3U] 
                         >> 0x0000003aU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_routing_unit__DOT__dest_x 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__fifo_flits[2U] 
                         >> 0x0000003cU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_routing_unit__DOT__dest_y 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__fifo_flits[2U] 
                         >> 0x0000003aU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_routing_unit__DOT__dest_x 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__fifo_flits[1U] 
                         >> 0x0000003cU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_routing_unit__DOT__dest_y 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__fifo_flits[1U] 
                         >> 0x0000003aU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_routing_unit__DOT__dest_x 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__fifo_flits[0U] 
                         >> 0x0000003cU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_routing_unit__DOT__dest_y 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__fifo_flits[0U] 
                         >> 0x0000003aU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_ready 
        = (0x0000001fU & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__full)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_routing_unit__DOT__route_out 
        = ((2U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_routing_unit__DOT__dest_x))
            ? 2U : ((2U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_routing_unit__DOT__dest_x))
                     ? 4U : ((2U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_routing_unit__DOT__dest_y))
                              ? 1U : (3U & (- (IData)(
                                                      (2U 
                                                       > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_routing_unit__DOT__dest_y))))))));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_routing_unit__DOT__route_out 
        = ((2U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_routing_unit__DOT__dest_x))
            ? 2U : ((2U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_routing_unit__DOT__dest_x))
                     ? 4U : ((2U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_routing_unit__DOT__dest_y))
                              ? 1U : (3U & (- (IData)(
                                                      (2U 
                                                       > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_routing_unit__DOT__dest_y))))))));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_routing_unit__DOT__route_out 
        = ((2U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_routing_unit__DOT__dest_x))
            ? 2U : ((2U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_routing_unit__DOT__dest_x))
                     ? 4U : ((2U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_routing_unit__DOT__dest_y))
                              ? 1U : (3U & (- (IData)(
                                                      (2U 
                                                       > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_routing_unit__DOT__dest_y))))))));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_routing_unit__DOT__route_out 
        = ((2U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_routing_unit__DOT__dest_x))
            ? 2U : ((2U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_routing_unit__DOT__dest_x))
                     ? 4U : ((2U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_routing_unit__DOT__dest_y))
                              ? 1U : (3U & (- (IData)(
                                                      (2U 
                                                       > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_routing_unit__DOT__dest_y))))))));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_routing_unit__DOT__route_out 
        = ((2U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_routing_unit__DOT__dest_x))
            ? 2U : ((2U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_routing_unit__DOT__dest_x))
                     ? 4U : ((2U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_routing_unit__DOT__dest_y))
                              ? 1U : (3U & (- (IData)(
                                                      (2U 
                                                       > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_routing_unit__DOT__dest_y))))))));
    vlSelfRef.noc_mesh__DOT__router_input_ready[2U][2U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__input_ready;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__requested_output[4U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__west_routing_unit__DOT__route_out;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__requested_output[3U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__south_routing_unit__DOT__route_out;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__requested_output[2U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__east_routing_unit__DOT__route_out;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__requested_output[1U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__north_routing_unit__DOT__route_out;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__requested_output[0U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__local_routing_unit__DOT__route_out;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk1__DOT__output_port = 0U;
    while (VL_GTS_III(32, 5U, vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk1__DOT__output_port)) {
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk1__DOT__output_port))))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__allocator_requests[(7U 
                                                                                & vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk1__DOT__output_port)] = 0U;
        }
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk1__DOT__output_port 
            = ((IData)(1U) + vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk1__DOT__output_port);
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk2__DOT__input_port = 0U;
    while (VL_GTS_III(32, 5U, vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)) {
        if ((1U & (~ ((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)) 
                      && (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__empty) 
                                >> (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk2__DOT__input_port))))))) {
            if (VL_LIKELY((((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)) 
                            && (4U >= ((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk2__DOT__input_port))
                                        ? vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__requested_output
                                       [(7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)]
                                        : 0U)))))) {
                vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__allocator_requests[(
                                                                                (4U 
                                                                                >= 
                                                                                (7U 
                                                                                & vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk2__DOT__input_port))
                                                                                 ? vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__requested_output
                                                                                [
                                                                                (7U 
                                                                                & vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)]
                                                                                 : 0U)] 
                    = (vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__allocator_requests
                       [((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk2__DOT__input_port))
                          ? vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__requested_output
                         [(7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)]
                          : 0U)] | (0x1fU & ((CData)(1U) 
                                             << (7U 
                                                 & vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk2__DOT__input_port))));
            }
        }
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk2__DOT__input_port 
            = ((IData)(1U) + vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__unnamedblk2__DOT__input_port);
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__requests 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__allocator_requests;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__request 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__requests[4U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__request 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__requests[3U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__request 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__requests[2U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__request 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__requests[1U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__request 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__2__KET____DOT__router__DOT__arbiter__DOT__requests[0U];
}

void Vtop___024root___nba_comb__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__full 
        = ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__full) 
             << 4U) | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__full) 
                        << 3U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__full) 
                                  << 2U))) | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__full) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__full)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__empty 
        = ((((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_input_buffer__DOT__empty) 
             << 4U) | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_input_buffer__DOT__empty) 
                        << 3U) | ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_input_buffer__DOT__empty) 
                                  << 2U))) | (((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_input_buffer__DOT__empty) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_input_buffer__DOT__empty)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__crossbar__DOT__input_flits 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__fifo_flits;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_routing_unit__DOT__dest_x 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__fifo_flits[4U] 
                         >> 0x0000003cU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_routing_unit__DOT__dest_y 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__fifo_flits[4U] 
                         >> 0x0000003aU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_routing_unit__DOT__dest_x 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__fifo_flits[3U] 
                         >> 0x0000003cU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_routing_unit__DOT__dest_y 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__fifo_flits[3U] 
                         >> 0x0000003aU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_routing_unit__DOT__dest_x 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__fifo_flits[2U] 
                         >> 0x0000003cU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_routing_unit__DOT__dest_y 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__fifo_flits[2U] 
                         >> 0x0000003aU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_routing_unit__DOT__dest_x 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__fifo_flits[1U] 
                         >> 0x0000003cU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_routing_unit__DOT__dest_y 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__fifo_flits[1U] 
                         >> 0x0000003aU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_routing_unit__DOT__dest_x 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__fifo_flits[0U] 
                         >> 0x0000003cU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_routing_unit__DOT__dest_y 
        = (3U & (IData)((vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__fifo_flits[0U] 
                         >> 0x0000003aU)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_ready 
        = (0x0000001fU & (~ (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__full)));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_routing_unit__DOT__route_out 
        = ((2U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_routing_unit__DOT__dest_x))
            ? 2U : ((2U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_routing_unit__DOT__dest_x))
                     ? 4U : ((1U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_routing_unit__DOT__dest_y))
                              ? 1U : (3U & (- (IData)(
                                                      (1U 
                                                       > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_routing_unit__DOT__dest_y))))))));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_routing_unit__DOT__route_out 
        = ((2U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_routing_unit__DOT__dest_x))
            ? 2U : ((2U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_routing_unit__DOT__dest_x))
                     ? 4U : ((1U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_routing_unit__DOT__dest_y))
                              ? 1U : (3U & (- (IData)(
                                                      (1U 
                                                       > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_routing_unit__DOT__dest_y))))))));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_routing_unit__DOT__route_out 
        = ((2U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_routing_unit__DOT__dest_x))
            ? 2U : ((2U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_routing_unit__DOT__dest_x))
                     ? 4U : ((1U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_routing_unit__DOT__dest_y))
                              ? 1U : (3U & (- (IData)(
                                                      (1U 
                                                       > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_routing_unit__DOT__dest_y))))))));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_routing_unit__DOT__route_out 
        = ((2U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_routing_unit__DOT__dest_x))
            ? 2U : ((2U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_routing_unit__DOT__dest_x))
                     ? 4U : ((1U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_routing_unit__DOT__dest_y))
                              ? 1U : (3U & (- (IData)(
                                                      (1U 
                                                       > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_routing_unit__DOT__dest_y))))))));
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_routing_unit__DOT__route_out 
        = ((2U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_routing_unit__DOT__dest_x))
            ? 2U : ((2U > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_routing_unit__DOT__dest_x))
                     ? 4U : ((1U < (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_routing_unit__DOT__dest_y))
                              ? 1U : (3U & (- (IData)(
                                                      (1U 
                                                       > (IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_routing_unit__DOT__dest_y))))))));
    vlSelfRef.noc_mesh__DOT__router_input_ready[2U][1U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__input_ready;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__requested_output[4U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__west_routing_unit__DOT__route_out;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__requested_output[3U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__south_routing_unit__DOT__route_out;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__requested_output[2U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__east_routing_unit__DOT__route_out;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__requested_output[1U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__north_routing_unit__DOT__route_out;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__requested_output[0U] 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__local_routing_unit__DOT__route_out;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk1__DOT__output_port = 0U;
    while (VL_GTS_III(32, 5U, vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk1__DOT__output_port)) {
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk1__DOT__output_port))))) {
            vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__allocator_requests[(7U 
                                                                                & vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk1__DOT__output_port)] = 0U;
        }
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk1__DOT__output_port 
            = ((IData)(1U) + vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk1__DOT__output_port);
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk2__DOT__input_port = 0U;
    while (VL_GTS_III(32, 5U, vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)) {
        if ((1U & (~ ((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)) 
                      && (1U & ((IData)(vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__empty) 
                                >> (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk2__DOT__input_port))))))) {
            if (VL_LIKELY((((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)) 
                            && (4U >= ((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk2__DOT__input_port))
                                        ? vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__requested_output
                                       [(7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)]
                                        : 0U)))))) {
                vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__allocator_requests[(
                                                                                (4U 
                                                                                >= 
                                                                                (7U 
                                                                                & vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk2__DOT__input_port))
                                                                                 ? vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__requested_output
                                                                                [
                                                                                (7U 
                                                                                & vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)]
                                                                                 : 0U)] 
                    = (vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__allocator_requests
                       [((4U >= (7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk2__DOT__input_port))
                          ? vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__requested_output
                         [(7U & vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk2__DOT__input_port)]
                          : 0U)] | (0x1fU & ((CData)(1U) 
                                             << (7U 
                                                 & vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk2__DOT__input_port))));
            }
        }
        vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk2__DOT__input_port 
            = ((IData)(1U) + vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__unnamedblk2__DOT__input_port);
    }
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__requests 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__allocator_requests;
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_west__DOT__request 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__requests[4U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_south__DOT__request 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__requests[3U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_east__DOT__request 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__requests[2U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_north__DOT__request 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__requests[1U];
    vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__port_local__DOT__request 
        = vlSelfRef.noc_mesh__DOT__router_column__BRA__2__KET____DOT__router_row__BRA__1__KET____DOT__router__DOT__arbiter__DOT__requests[0U];
}
