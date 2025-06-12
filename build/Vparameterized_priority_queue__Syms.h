// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPARAMETERIZED_PRIORITY_QUEUE__SYMS_H_
#define VERILATED_VPARAMETERIZED_PRIORITY_QUEUE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vparameterized_priority_queue.h"

// INCLUDE MODULE CLASSES
#include "Vparameterized_priority_queue___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vparameterized_priority_queue__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vparameterized_priority_queue* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vparameterized_priority_queue___024root TOP;

    // CONSTRUCTORS
    Vparameterized_priority_queue__Syms(VerilatedContext* contextp, const char* namep, Vparameterized_priority_queue* modelp);
    ~Vparameterized_priority_queue__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
