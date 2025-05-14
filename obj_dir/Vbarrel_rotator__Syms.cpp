// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vbarrel_rotator__pch.h"
#include "Vbarrel_rotator.h"
#include "Vbarrel_rotator___024root.h"

// FUNCTIONS
Vbarrel_rotator__Syms::~Vbarrel_rotator__Syms()
{
}

Vbarrel_rotator__Syms::Vbarrel_rotator__Syms(VerilatedContext* contextp, const char* namep, Vbarrel_rotator* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
