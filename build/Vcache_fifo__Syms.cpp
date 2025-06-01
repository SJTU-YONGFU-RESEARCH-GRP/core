// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vcache_fifo__pch.h"
#include "Vcache_fifo.h"
#include "Vcache_fifo___024root.h"

// FUNCTIONS
Vcache_fifo__Syms::~Vcache_fifo__Syms()
{
}

Vcache_fifo__Syms::Vcache_fifo__Syms(VerilatedContext* contextp, const char* namep, Vcache_fifo* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(74);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
