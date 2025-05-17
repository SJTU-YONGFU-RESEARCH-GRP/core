// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VAES_CORE__SYMS_H_
#define VERILATED_VAES_CORE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vaes_core.h"

// INCLUDE MODULE CLASSES
#include "Vaes_core___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vaes_core__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vaes_core* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vaes_core___024root            TOP;

    // CONSTRUCTORS
    Vaes_core__Syms(VerilatedContext* contextp, const char* namep, Vaes_core* modelp);
    ~Vaes_core__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
