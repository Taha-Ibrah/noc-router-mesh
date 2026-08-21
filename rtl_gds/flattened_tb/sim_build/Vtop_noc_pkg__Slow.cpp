// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop_noc_pkg
constexpr IData/*31:0*/ Vtop_noc_pkg::MESH_X;
constexpr IData/*31:0*/ Vtop_noc_pkg::MESH_Y;
constexpr IData/*31:0*/ Vtop_noc_pkg::NUM_PORTS;
constexpr IData/*31:0*/ Vtop_noc_pkg::FLIT_WIDTH;
constexpr IData/*31:0*/ Vtop_noc_pkg::FIFO_DEPTH;
constexpr IData/*31:0*/ Vtop_noc_pkg::FIFO_ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop_noc_pkg::X_WIDTH;
constexpr IData/*31:0*/ Vtop_noc_pkg::Y_WIDTH;
constexpr IData/*31:0*/ Vtop_noc_pkg::PORT_WIDTH;
constexpr IData/*31:0*/ Vtop_noc_pkg::FLIT_TYPE_WIDTH;
constexpr IData/*31:0*/ Vtop_noc_pkg::PACKET_ID_WIDTH;
constexpr IData/*31:0*/ Vtop_noc_pkg::PAYLOAD_WIDTH;



Vtop_noc_pkg::Vtop_noc_pkg() = default;
Vtop_noc_pkg::~Vtop_noc_pkg() = default;

void Vtop_noc_pkg::ctor(Vtop__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vtop_noc_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtop_noc_pkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
