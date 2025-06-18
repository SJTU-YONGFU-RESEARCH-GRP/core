// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vbsg_async_credit_counter__pch.h"
#include "Vbsg_async_credit_counter.h"
#include "Vbsg_async_credit_counter___024root.h"

// FUNCTIONS
Vbsg_async_credit_counter__Syms::~Vbsg_async_credit_counter__Syms()
{
}

Vbsg_async_credit_counter__Syms::Vbsg_async_credit_counter__Syms(VerilatedContext* contextp, const char* namep, Vbsg_async_credit_counter* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(213);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
