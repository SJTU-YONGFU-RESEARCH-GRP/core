// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VFIR_FILTER__SYMS_H_
#define VERILATED_VFIR_FILTER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vfir_filter.h"

// INCLUDE MODULE CLASSES
#include "Vfir_filter___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vfir_filter__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vfir_filter* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vfir_filter___024root          TOP;

    // CONSTRUCTORS
    Vfir_filter__Syms(VerilatedContext* contextp, const char* namep, Vfir_filter* modelp);
    ~Vfir_filter__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
