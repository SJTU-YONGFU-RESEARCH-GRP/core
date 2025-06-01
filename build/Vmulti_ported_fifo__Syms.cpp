// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vmulti_ported_fifo__pch.h"
#include "Vmulti_ported_fifo.h"
#include "Vmulti_ported_fifo___024root.h"

// FUNCTIONS
Vmulti_ported_fifo__Syms::~Vmulti_ported_fifo__Syms()
{
}

Vmulti_ported_fifo__Syms::Vmulti_ported_fifo__Syms(VerilatedContext* contextp, const char* namep, Vmulti_ported_fifo* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(87);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
