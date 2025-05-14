// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPRIORITY_ENCODER__SYMS_H_
#define VERILATED_VPRIORITY_ENCODER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vpriority_encoder.h"

// INCLUDE MODULE CLASSES
#include "Vpriority_encoder___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vpriority_encoder__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vpriority_encoder* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vpriority_encoder___024root    TOP;

    // CONSTRUCTORS
    Vpriority_encoder__Syms(VerilatedContext* contextp, const char* namep, Vpriority_encoder* modelp);
    ~Vpriority_encoder__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
