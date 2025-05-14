// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vdual_port_ram__pch.h"
#include "Vdual_port_ram.h"
#include "Vdual_port_ram___024root.h"

// FUNCTIONS
Vdual_port_ram__Syms::~Vdual_port_ram__Syms()
{
}

Vdual_port_ram__Syms::Vdual_port_ram__Syms(VerilatedContext* contextp, const char* namep, Vdual_port_ram* modelp)
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
