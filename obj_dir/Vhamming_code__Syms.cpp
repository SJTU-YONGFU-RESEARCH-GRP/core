// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vhamming_code__pch.h"
#include "Vhamming_code.h"
#include "Vhamming_code___024root.h"

// FUNCTIONS
Vhamming_code__Syms::~Vhamming_code__Syms()
{
}

Vhamming_code__Syms::Vhamming_code__Syms(VerilatedContext* contextp, const char* namep, Vhamming_code* modelp)
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
