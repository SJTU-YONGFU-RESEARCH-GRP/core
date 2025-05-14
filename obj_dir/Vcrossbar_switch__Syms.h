// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCROSSBAR_SWITCH__SYMS_H_
#define VERILATED_VCROSSBAR_SWITCH__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vcrossbar_switch.h"

// INCLUDE MODULE CLASSES
#include "Vcrossbar_switch___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vcrossbar_switch__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcrossbar_switch* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcrossbar_switch___024root     TOP;

    // CONSTRUCTORS
    Vcrossbar_switch__Syms(VerilatedContext* contextp, const char* namep, Vcrossbar_switch* modelp);
    ~Vcrossbar_switch__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
