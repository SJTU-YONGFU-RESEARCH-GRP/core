// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vclock_divider__pch.h"
#include "Vclock_divider.h"
#include "Vclock_divider___024root.h"

// FUNCTIONS
Vclock_divider__Syms::~Vclock_divider__Syms()
{
}

Vclock_divider__Syms::Vclock_divider__Syms(VerilatedContext* contextp, const char* namep, Vclock_divider* modelp)
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
