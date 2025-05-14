// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vbinary_to_gray__pch.h"
#include "Vbinary_to_gray.h"
#include "Vbinary_to_gray___024root.h"

// FUNCTIONS
Vbinary_to_gray__Syms::~Vbinary_to_gray__Syms()
{
}

Vbinary_to_gray__Syms::Vbinary_to_gray__Syms(VerilatedContext* contextp, const char* namep, Vbinary_to_gray* modelp)
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
