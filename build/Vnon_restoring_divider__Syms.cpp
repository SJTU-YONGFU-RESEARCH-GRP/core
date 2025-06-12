// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vnon_restoring_divider__pch.h"
#include "Vnon_restoring_divider.h"
#include "Vnon_restoring_divider___024root.h"

// FUNCTIONS
Vnon_restoring_divider__Syms::~Vnon_restoring_divider__Syms()
{
}

Vnon_restoring_divider__Syms::Vnon_restoring_divider__Syms(VerilatedContext* contextp, const char* namep, Vnon_restoring_divider* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(21);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
