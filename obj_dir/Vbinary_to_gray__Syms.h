// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VBINARY_TO_GRAY__SYMS_H_
#define VERILATED_VBINARY_TO_GRAY__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vbinary_to_gray.h"

// INCLUDE MODULE CLASSES
#include "Vbinary_to_gray___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vbinary_to_gray__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vbinary_to_gray* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vbinary_to_gray___024root      TOP;

    // CONSTRUCTORS
    Vbinary_to_gray__Syms(VerilatedContext* contextp, const char* namep, Vbinary_to_gray* modelp);
    ~Vbinary_to_gray__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
