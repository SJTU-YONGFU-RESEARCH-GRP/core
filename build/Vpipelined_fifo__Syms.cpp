// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vpipelined_fifo__pch.h"
#include "Vpipelined_fifo.h"
#include "Vpipelined_fifo___024root.h"

// FUNCTIONS
Vpipelined_fifo__Syms::~Vpipelined_fifo__Syms()
{
}

Vpipelined_fifo__Syms::Vpipelined_fifo__Syms(VerilatedContext* contextp, const char* namep, Vpipelined_fifo* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(34);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
