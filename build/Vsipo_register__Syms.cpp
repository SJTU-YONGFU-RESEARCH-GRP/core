// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vsipo_register__pch.h"
#include "Vsipo_register.h"
#include "Vsipo_register___024root.h"

// FUNCTIONS
Vsipo_register__Syms::~Vsipo_register__Syms()
{
}

Vsipo_register__Syms::Vsipo_register__Syms(VerilatedContext* contextp, const char* namep, Vsipo_register* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(30);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
