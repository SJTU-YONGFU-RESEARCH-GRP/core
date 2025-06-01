// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vconfigurable_mesh_router__pch.h"
#include "Vconfigurable_mesh_router.h"
#include "Vconfigurable_mesh_router___024root.h"

// FUNCTIONS
Vconfigurable_mesh_router__Syms::~Vconfigurable_mesh_router__Syms()
{
}

Vconfigurable_mesh_router__Syms::Vconfigurable_mesh_router__Syms(VerilatedContext* contextp, const char* namep, Vconfigurable_mesh_router* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(155);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
