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
    Verilated::stackCheck(250);
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
    __Vscopep_switch_allocator = new VerilatedScope{this, "switch_allocator", "switch_allocator", "switch_allocator", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_switch_allocator__port_east = new VerilatedScope{this, "switch_allocator.port_east", "port_east", "round_robin", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_switch_allocator__port_east__unnamedblk1 = new VerilatedScope{this, "switch_allocator.port_east.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_switch_allocator__port_local = new VerilatedScope{this, "switch_allocator.port_local", "port_local", "round_robin", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_switch_allocator__port_local__unnamedblk1 = new VerilatedScope{this, "switch_allocator.port_local.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_switch_allocator__port_north = new VerilatedScope{this, "switch_allocator.port_north", "port_north", "round_robin", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_switch_allocator__port_north__unnamedblk1 = new VerilatedScope{this, "switch_allocator.port_north.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_switch_allocator__port_south = new VerilatedScope{this, "switch_allocator.port_south", "port_south", "round_robin", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_switch_allocator__port_south__unnamedblk1 = new VerilatedScope{this, "switch_allocator.port_south.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_switch_allocator__port_west = new VerilatedScope{this, "switch_allocator.port_west", "port_west", "round_robin", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_switch_allocator__port_west__unnamedblk1 = new VerilatedScope{this, "switch_allocator.port_west.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    // Set up scope hierarchy
    __Vhier.add(0, __Vscopep_noc_pkg);
    __Vhier.add(0, __Vscopep_switch_allocator);
    __Vhier.add(__Vscopep_switch_allocator, __Vscopep_switch_allocator__port_east);
    __Vhier.add(__Vscopep_switch_allocator, __Vscopep_switch_allocator__port_local);
    __Vhier.add(__Vscopep_switch_allocator, __Vscopep_switch_allocator__port_north);
    __Vhier.add(__Vscopep_switch_allocator, __Vscopep_switch_allocator__port_south);
    __Vhier.add(__Vscopep_switch_allocator, __Vscopep_switch_allocator__port_west);
    __Vhier.add(__Vscopep_switch_allocator__port_east, __Vscopep_switch_allocator__port_east__unnamedblk1);
    __Vhier.add(__Vscopep_switch_allocator__port_local, __Vscopep_switch_allocator__port_local__unnamedblk1);
    __Vhier.add(__Vscopep_switch_allocator__port_north, __Vscopep_switch_allocator__port_north__unnamedblk1);
    __Vhier.add(__Vscopep_switch_allocator__port_south, __Vscopep_switch_allocator__port_south__unnamedblk1);
    __Vhier.add(__Vscopep_switch_allocator__port_west, __Vscopep_switch_allocator__port_west__unnamedblk1);
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_TOP->varInsert("clk", &(TOP.clk), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("grant_accepted", &(TOP.grant_accepted), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_TOP->varInsert("grants", &(TOP.grants), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 1, 1 ,0,4 ,4,0);
    __Vscopep_TOP->varInsert("requests", &(TOP.requests), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 1, 1 ,0,4 ,4,0);
    __Vscopep_TOP->varInsert("rst_n", &(TOP.rst_n), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
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
    __Vscopep_switch_allocator->varInsert("clk", &(TOP.switch_allocator__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_switch_allocator->varInsert("grant_accepted", &(TOP.switch_allocator__DOT__grant_accepted), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_switch_allocator->varInsert("grants", &(TOP.switch_allocator__DOT__grants), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 1, 1 ,0,4 ,4,0);
    __Vscopep_switch_allocator->varInsert("requests", &(TOP.switch_allocator__DOT__requests), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 1, 1 ,0,4 ,4,0);
    __Vscopep_switch_allocator->varInsert("rst_n", &(TOP.switch_allocator__DOT__rst_n), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_switch_allocator__port_east->varInsert("PRIORITY_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.switch_allocator__DOT__port_east__DOT__PRIORITY_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_switch_allocator__port_east->varInsert("clk", &(TOP.switch_allocator__DOT__port_east__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_switch_allocator__port_east->varInsert("grant", &(TOP.switch_allocator__DOT__port_east__DOT__grant), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_switch_allocator__port_east->varInsert("grant_accepted", &(TOP.switch_allocator__DOT__port_east__DOT__grant_accepted), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_switch_allocator__port_east->varInsert("held_grant", &(TOP.switch_allocator__DOT__port_east__DOT__held_grant), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_switch_allocator__port_east->varInsert("holding_grant", &(TOP.switch_allocator__DOT__port_east__DOT__holding_grant), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_switch_allocator__port_east->varInsert("offset", &(TOP.switch_allocator__DOT__port_east__DOT__offset), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_switch_allocator__port_east->varInsert("priority_ptr", &(TOP.switch_allocator__DOT__port_east__DOT__priority_ptr), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_switch_allocator__port_east->varInsert("request", &(TOP.switch_allocator__DOT__port_east__DOT__request), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_switch_allocator__port_east->varInsert("request_index", &(TOP.switch_allocator__DOT__port_east__DOT__request_index), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_switch_allocator__port_east->varInsert("rst_n", &(TOP.switch_allocator__DOT__port_east__DOT__rst_n), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_switch_allocator__port_east__unnamedblk1->varInsert("i", &(TOP.switch_allocator__DOT__port_east__DOT__unnamedblk1__DOT__i), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_switch_allocator__port_local->varInsert("PRIORITY_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.switch_allocator__DOT__port_local__DOT__PRIORITY_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_switch_allocator__port_local->varInsert("clk", &(TOP.switch_allocator__DOT__port_local__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_switch_allocator__port_local->varInsert("grant", &(TOP.switch_allocator__DOT__port_local__DOT__grant), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_switch_allocator__port_local->varInsert("grant_accepted", &(TOP.switch_allocator__DOT__port_local__DOT__grant_accepted), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_switch_allocator__port_local->varInsert("held_grant", &(TOP.switch_allocator__DOT__port_local__DOT__held_grant), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_switch_allocator__port_local->varInsert("holding_grant", &(TOP.switch_allocator__DOT__port_local__DOT__holding_grant), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_switch_allocator__port_local->varInsert("offset", &(TOP.switch_allocator__DOT__port_local__DOT__offset), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_switch_allocator__port_local->varInsert("priority_ptr", &(TOP.switch_allocator__DOT__port_local__DOT__priority_ptr), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_switch_allocator__port_local->varInsert("request", &(TOP.switch_allocator__DOT__port_local__DOT__request), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_switch_allocator__port_local->varInsert("request_index", &(TOP.switch_allocator__DOT__port_local__DOT__request_index), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_switch_allocator__port_local->varInsert("rst_n", &(TOP.switch_allocator__DOT__port_local__DOT__rst_n), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_switch_allocator__port_local__unnamedblk1->varInsert("i", &(TOP.switch_allocator__DOT__port_local__DOT__unnamedblk1__DOT__i), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_switch_allocator__port_north->varInsert("PRIORITY_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.switch_allocator__DOT__port_north__DOT__PRIORITY_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_switch_allocator__port_north->varInsert("clk", &(TOP.switch_allocator__DOT__port_north__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_switch_allocator__port_north->varInsert("grant", &(TOP.switch_allocator__DOT__port_north__DOT__grant), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_switch_allocator__port_north->varInsert("grant_accepted", &(TOP.switch_allocator__DOT__port_north__DOT__grant_accepted), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_switch_allocator__port_north->varInsert("held_grant", &(TOP.switch_allocator__DOT__port_north__DOT__held_grant), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_switch_allocator__port_north->varInsert("holding_grant", &(TOP.switch_allocator__DOT__port_north__DOT__holding_grant), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_switch_allocator__port_north->varInsert("offset", &(TOP.switch_allocator__DOT__port_north__DOT__offset), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_switch_allocator__port_north->varInsert("priority_ptr", &(TOP.switch_allocator__DOT__port_north__DOT__priority_ptr), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_switch_allocator__port_north->varInsert("request", &(TOP.switch_allocator__DOT__port_north__DOT__request), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_switch_allocator__port_north->varInsert("request_index", &(TOP.switch_allocator__DOT__port_north__DOT__request_index), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_switch_allocator__port_north->varInsert("rst_n", &(TOP.switch_allocator__DOT__port_north__DOT__rst_n), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_switch_allocator__port_north__unnamedblk1->varInsert("i", &(TOP.switch_allocator__DOT__port_north__DOT__unnamedblk1__DOT__i), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_switch_allocator__port_south->varInsert("PRIORITY_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.switch_allocator__DOT__port_south__DOT__PRIORITY_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_switch_allocator__port_south->varInsert("clk", &(TOP.switch_allocator__DOT__port_south__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_switch_allocator__port_south->varInsert("grant", &(TOP.switch_allocator__DOT__port_south__DOT__grant), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_switch_allocator__port_south->varInsert("grant_accepted", &(TOP.switch_allocator__DOT__port_south__DOT__grant_accepted), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_switch_allocator__port_south->varInsert("held_grant", &(TOP.switch_allocator__DOT__port_south__DOT__held_grant), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_switch_allocator__port_south->varInsert("holding_grant", &(TOP.switch_allocator__DOT__port_south__DOT__holding_grant), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_switch_allocator__port_south->varInsert("offset", &(TOP.switch_allocator__DOT__port_south__DOT__offset), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_switch_allocator__port_south->varInsert("priority_ptr", &(TOP.switch_allocator__DOT__port_south__DOT__priority_ptr), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_switch_allocator__port_south->varInsert("request", &(TOP.switch_allocator__DOT__port_south__DOT__request), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_switch_allocator__port_south->varInsert("request_index", &(TOP.switch_allocator__DOT__port_south__DOT__request_index), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_switch_allocator__port_south->varInsert("rst_n", &(TOP.switch_allocator__DOT__port_south__DOT__rst_n), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_switch_allocator__port_south__unnamedblk1->varInsert("i", &(TOP.switch_allocator__DOT__port_south__DOT__unnamedblk1__DOT__i), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_switch_allocator__port_west->varInsert("PRIORITY_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.switch_allocator__DOT__port_west__DOT__PRIORITY_WIDTH))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_switch_allocator__port_west->varInsert("clk", &(TOP.switch_allocator__DOT__port_west__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_switch_allocator__port_west->varInsert("grant", &(TOP.switch_allocator__DOT__port_west__DOT__grant), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_switch_allocator__port_west->varInsert("grant_accepted", &(TOP.switch_allocator__DOT__port_west__DOT__grant_accepted), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_switch_allocator__port_west->varInsert("held_grant", &(TOP.switch_allocator__DOT__port_west__DOT__held_grant), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_switch_allocator__port_west->varInsert("holding_grant", &(TOP.switch_allocator__DOT__port_west__DOT__holding_grant), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_switch_allocator__port_west->varInsert("offset", &(TOP.switch_allocator__DOT__port_west__DOT__offset), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_switch_allocator__port_west->varInsert("priority_ptr", &(TOP.switch_allocator__DOT__port_west__DOT__priority_ptr), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_switch_allocator__port_west->varInsert("request", &(TOP.switch_allocator__DOT__port_west__DOT__request), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,4,0);
    __Vscopep_switch_allocator__port_west->varInsert("request_index", &(TOP.switch_allocator__DOT__port_west__DOT__request_index), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_switch_allocator__port_west->varInsert("rst_n", &(TOP.switch_allocator__DOT__port_west__DOT__rst_n), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_switch_allocator__port_west__unnamedblk1->varInsert("i", &(TOP.switch_allocator__DOT__port_west__DOT__unnamedblk1__DOT__i), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,31,0);
}

Vtop__Syms::~Vtop__Syms() {
    // Tear down scope hierarchy
    __Vhier.remove(0, __Vscopep_noc_pkg);
    __Vhier.remove(0, __Vscopep_switch_allocator);
    __Vhier.remove(__Vscopep_switch_allocator, __Vscopep_switch_allocator__port_east);
    __Vhier.remove(__Vscopep_switch_allocator, __Vscopep_switch_allocator__port_local);
    __Vhier.remove(__Vscopep_switch_allocator, __Vscopep_switch_allocator__port_north);
    __Vhier.remove(__Vscopep_switch_allocator, __Vscopep_switch_allocator__port_south);
    __Vhier.remove(__Vscopep_switch_allocator, __Vscopep_switch_allocator__port_west);
    __Vhier.remove(__Vscopep_switch_allocator__port_east, __Vscopep_switch_allocator__port_east__unnamedblk1);
    __Vhier.remove(__Vscopep_switch_allocator__port_local, __Vscopep_switch_allocator__port_local__unnamedblk1);
    __Vhier.remove(__Vscopep_switch_allocator__port_north, __Vscopep_switch_allocator__port_north__unnamedblk1);
    __Vhier.remove(__Vscopep_switch_allocator__port_south, __Vscopep_switch_allocator__port_south__unnamedblk1);
    __Vhier.remove(__Vscopep_switch_allocator__port_west, __Vscopep_switch_allocator__port_west__unnamedblk1);
    // Clear keys from hierarchy map after values have been removed
    __Vhier.clear();
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_TOP, __Vscopep_TOP = nullptr);
    VL_DO_CLEAR(delete __Vscopep_noc_pkg, __Vscopep_noc_pkg = nullptr);
    VL_DO_CLEAR(delete __Vscopep_switch_allocator, __Vscopep_switch_allocator = nullptr);
    VL_DO_CLEAR(delete __Vscopep_switch_allocator__port_east, __Vscopep_switch_allocator__port_east = nullptr);
    VL_DO_CLEAR(delete __Vscopep_switch_allocator__port_east__unnamedblk1, __Vscopep_switch_allocator__port_east__unnamedblk1 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_switch_allocator__port_local, __Vscopep_switch_allocator__port_local = nullptr);
    VL_DO_CLEAR(delete __Vscopep_switch_allocator__port_local__unnamedblk1, __Vscopep_switch_allocator__port_local__unnamedblk1 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_switch_allocator__port_north, __Vscopep_switch_allocator__port_north = nullptr);
    VL_DO_CLEAR(delete __Vscopep_switch_allocator__port_north__unnamedblk1, __Vscopep_switch_allocator__port_north__unnamedblk1 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_switch_allocator__port_south, __Vscopep_switch_allocator__port_south = nullptr);
    VL_DO_CLEAR(delete __Vscopep_switch_allocator__port_south__unnamedblk1, __Vscopep_switch_allocator__port_south__unnamedblk1 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_switch_allocator__port_west, __Vscopep_switch_allocator__port_west = nullptr);
    VL_DO_CLEAR(delete __Vscopep_switch_allocator__port_west__unnamedblk1, __Vscopep_switch_allocator__port_west__unnamedblk1 = nullptr);
    // Tear down sub module instances
    TOP__noc_pkg.dtor();
}
