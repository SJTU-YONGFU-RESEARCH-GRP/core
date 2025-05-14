// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vbarrel_shifter__pch.h"
#include "Vbarrel_shifter.h"
#include "Vbarrel_shifter___024root.h"

// FUNCTIONS
Vbarrel_shifter__Syms::~Vbarrel_shifter__Syms()
{
}

Vbarrel_shifter__Syms::Vbarrel_shifter__Syms(VerilatedContext* contextp, const char* namep, Vbarrel_shifter* modelp)
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
