// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDUAL_PORT_RAM__SYMS_H_
#define VERILATED_VDUAL_PORT_RAM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vdual_port_ram.h"

// INCLUDE MODULE CLASSES
#include "Vdual_port_ram___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vdual_port_ram__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdual_port_ram* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vdual_port_ram___024root       TOP;

    // CONSTRUCTORS
    Vdual_port_ram__Syms(VerilatedContext* contextp, const char* namep, Vdual_port_ram* modelp);
    ~Vdual_port_ram__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
