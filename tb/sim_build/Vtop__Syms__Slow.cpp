// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(124);
    // Setup sub module instances
    TOP__noc_pkg.ctor(this, "noc_pkg");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__noc_pkg = &TOP__noc_pkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__noc_pkg.__Vconfigure(true);
    // Setup scopes
    __Vscopep_TOP = new VerilatedScope{this, "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    __Vscopep_noc_pkg = new VerilatedScope{this, "noc_pkg", "noc_pkg", "noc_pkg", -9, VerilatedScope::SCOPE_PACKAGE};
    __Vscopep_xy_routing = new VerilatedScope{this, "xy_routing", "xy_routing", "xy_routing", -9, VerilatedScope::SCOPE_MODULE};
    // Set up scope hierarchy
    __Vhier.add(0, __Vscopep_noc_pkg);
    __Vhier.add(0, __Vscopep_xy_routing);
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_TOP->varInsert("current_x", &(TOP.current_x), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_TOP->varInsert("current_y", &(TOP.current_y), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_TOP->varInsert("dest_x", &(TOP.dest_x), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_TOP->varInsert("dest_y", &(TOP.dest_y), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_TOP->varInsert("route_out", &(TOP.route_out), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_noc_pkg->varInsert("FIFO_ADDR_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP__noc_pkg.FIFO_ADDR_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_noc_pkg->varInsert("FIFO_DEPTH", const_cast<void*>(static_cast<const void*>(&(TOP__noc_pkg.FIFO_DEPTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_noc_pkg->varInsert("FLIT_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP__noc_pkg.FLIT_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_noc_pkg->varInsert("MESH_X", const_cast<void*>(static_cast<const void*>(&(TOP__noc_pkg.MESH_X))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_noc_pkg->varInsert("MESH_Y", const_cast<void*>(static_cast<const void*>(&(TOP__noc_pkg.MESH_Y))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_noc_pkg->varInsert("NUM_PORTS", const_cast<void*>(static_cast<const void*>(&(TOP__noc_pkg.NUM_PORTS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_noc_pkg->varInsert("PACKET_ID_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP__noc_pkg.PACKET_ID_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_noc_pkg->varInsert("PAYLOAD_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP__noc_pkg.PAYLOAD_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_noc_pkg->varInsert("X_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP__noc_pkg.X_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_noc_pkg->varInsert("Y_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP__noc_pkg.Y_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_xy_routing->varInsert("current_x", &(TOP.xy_routing__DOT__current_x), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_xy_routing->varInsert("current_y", &(TOP.xy_routing__DOT__current_y), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_xy_routing->varInsert("dest_x", &(TOP.xy_routing__DOT__dest_x), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_xy_routing->varInsert("dest_y", &(TOP.xy_routing__DOT__dest_y), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_xy_routing->varInsert("route_out", &(TOP.xy_routing__DOT__route_out), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
}

Vtop__Syms::~Vtop__Syms() {
    // Tear down scope hierarchy
    __Vhier.remove(0, __Vscopep_noc_pkg);
    __Vhier.remove(0, __Vscopep_xy_routing);
    // Clear keys from hierarchy map after values have been removed
    __Vhier.clear();
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_TOP, __Vscopep_TOP = nullptr);
    VL_DO_CLEAR(delete __Vscopep_noc_pkg, __Vscopep_noc_pkg = nullptr);
    VL_DO_CLEAR(delete __Vscopep_xy_routing, __Vscopep_xy_routing = nullptr);
    // Tear down sub module instances
    TOP__noc_pkg.dtor();
}
