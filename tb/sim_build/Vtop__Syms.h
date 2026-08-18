// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"
#include "Vtop___024unit.h"
#include "Vtop_noc_pkg.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;
    Vtop_noc_pkg                   TOP__noc_pkg;

    // SCOPE NAMES
    VerilatedScope* __Vscopep_TOP;
    VerilatedScope* __Vscopep_noc_pkg;
    VerilatedScope* __Vscopep_switch_allocator;
    VerilatedScope* __Vscopep_switch_allocator__port_east;
    VerilatedScope* __Vscopep_switch_allocator__port_east__unnamedblk1;
    VerilatedScope* __Vscopep_switch_allocator__port_local;
    VerilatedScope* __Vscopep_switch_allocator__port_local__unnamedblk1;
    VerilatedScope* __Vscopep_switch_allocator__port_north;
    VerilatedScope* __Vscopep_switch_allocator__port_north__unnamedblk1;
    VerilatedScope* __Vscopep_switch_allocator__port_south;
    VerilatedScope* __Vscopep_switch_allocator__port_south__unnamedblk1;
    VerilatedScope* __Vscopep_switch_allocator__port_west;
    VerilatedScope* __Vscopep_switch_allocator__port_west__unnamedblk1;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
