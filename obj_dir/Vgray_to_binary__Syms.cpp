// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vgray_to_binary__pch.h"
#include "Vgray_to_binary.h"
#include "Vgray_to_binary___024root.h"

// FUNCTIONS
Vgray_to_binary__Syms::~Vgray_to_binary__Syms()
{
}

Vgray_to_binary__Syms::Vgray_to_binary__Syms(VerilatedContext* contextp, const char* namep, Vgray_to_binary* modelp)
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
