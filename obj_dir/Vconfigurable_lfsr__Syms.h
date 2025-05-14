// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCONFIGURABLE_LFSR__SYMS_H_
#define VERILATED_VCONFIGURABLE_LFSR__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vconfigurable_lfsr.h"

// INCLUDE MODULE CLASSES
#include "Vconfigurable_lfsr___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vconfigurable_lfsr__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vconfigurable_lfsr* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vconfigurable_lfsr___024root   TOP;

    // CONSTRUCTORS
    Vconfigurable_lfsr__Syms(VerilatedContext* contextp, const char* namep, Vconfigurable_lfsr* modelp);
    ~Vconfigurable_lfsr__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
