// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VHAMMING_CODE__SYMS_H_
#define VERILATED_VHAMMING_CODE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vhamming_code.h"

// INCLUDE MODULE CLASSES
#include "Vhamming_code___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vhamming_code__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vhamming_code* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vhamming_code___024root        TOP;

    // CONSTRUCTORS
    Vhamming_code__Syms(VerilatedContext* contextp, const char* namep, Vhamming_code* modelp);
    ~Vhamming_code__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
