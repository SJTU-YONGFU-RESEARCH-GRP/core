// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCACHE_FIFO__SYMS_H_
#define VERILATED_VCACHE_FIFO__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vcache_fifo.h"

// INCLUDE MODULE CLASSES
#include "Vcache_fifo___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vcache_fifo__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcache_fifo* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcache_fifo___024root          TOP;

    // CONSTRUCTORS
    Vcache_fifo__Syms(VerilatedContext* contextp, const char* namep, Vcache_fifo* modelp);
    ~Vcache_fifo__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
