// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vdual_clock_fifo__pch.h"
#include "Vdual_clock_fifo.h"
#include "Vdual_clock_fifo___024root.h"

// FUNCTIONS
Vdual_clock_fifo__Syms::~Vdual_clock_fifo__Syms()
{
}

Vdual_clock_fifo__Syms::Vdual_clock_fifo__Syms(VerilatedContext* contextp, const char* namep, Vdual_clock_fifo* modelp)
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
