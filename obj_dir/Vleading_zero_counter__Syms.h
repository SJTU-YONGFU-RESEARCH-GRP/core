// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VLEADING_ZERO_COUNTER__SYMS_H_
#define VERILATED_VLEADING_ZERO_COUNTER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vleading_zero_counter.h"

// INCLUDE MODULE CLASSES
#include "Vleading_zero_counter___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vleading_zero_counter__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vleading_zero_counter* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vleading_zero_counter___024root TOP;

    // CONSTRUCTORS
    Vleading_zero_counter__Syms(VerilatedContext* contextp, const char* namep, Vleading_zero_counter* modelp);
    ~Vleading_zero_counter__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
