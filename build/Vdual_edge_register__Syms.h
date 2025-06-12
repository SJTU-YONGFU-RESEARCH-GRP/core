// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDUAL_EDGE_REGISTER__SYMS_H_
#define VERILATED_VDUAL_EDGE_REGISTER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vdual_edge_register.h"

// INCLUDE MODULE CLASSES
#include "Vdual_edge_register___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vdual_edge_register__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdual_edge_register* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vdual_edge_register___024root  TOP;

    // CONSTRUCTORS
    Vdual_edge_register__Syms(VerilatedContext* contextp, const char* namep, Vdual_edge_register* modelp);
    ~Vdual_edge_register__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
