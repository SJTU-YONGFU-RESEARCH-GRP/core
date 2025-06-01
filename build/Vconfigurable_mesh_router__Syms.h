// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCONFIGURABLE_MESH_ROUTER__SYMS_H_
#define VERILATED_VCONFIGURABLE_MESH_ROUTER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vconfigurable_mesh_router.h"

// INCLUDE MODULE CLASSES
#include "Vconfigurable_mesh_router___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vconfigurable_mesh_router__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vconfigurable_mesh_router* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vconfigurable_mesh_router___024root TOP;

    // CONSTRUCTORS
    Vconfigurable_mesh_router__Syms(VerilatedContext* contextp, const char* namep, Vconfigurable_mesh_router* modelp);
    ~Vconfigurable_mesh_router__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
