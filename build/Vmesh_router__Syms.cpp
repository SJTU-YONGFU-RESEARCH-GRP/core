// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vmesh_router__pch.h"
#include "Vmesh_router.h"
#include "Vmesh_router___024root.h"

// FUNCTIONS
Vmesh_router__Syms::~Vmesh_router__Syms()
{
}

Vmesh_router__Syms::Vmesh_router__Syms(VerilatedContext* contextp, const char* namep, Vmesh_router* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(89);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
