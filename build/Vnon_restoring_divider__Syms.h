// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VNON_RESTORING_DIVIDER__SYMS_H_
#define VERILATED_VNON_RESTORING_DIVIDER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vnon_restoring_divider.h"

// INCLUDE MODULE CLASSES
#include "Vnon_restoring_divider___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vnon_restoring_divider__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vnon_restoring_divider* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vnon_restoring_divider___024root TOP;

    // CONSTRUCTORS
    Vnon_restoring_divider__Syms(VerilatedContext* contextp, const char* namep, Vnon_restoring_divider* modelp);
    ~Vnon_restoring_divider__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
