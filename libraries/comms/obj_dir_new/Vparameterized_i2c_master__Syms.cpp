// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vparameterized_i2c_master__pch.h"
#include "Vparameterized_i2c_master.h"
#include "Vparameterized_i2c_master___024root.h"

// FUNCTIONS
Vparameterized_i2c_master__Syms::~Vparameterized_i2c_master__Syms()
{
}

Vparameterized_i2c_master__Syms::Vparameterized_i2c_master__Syms(VerilatedContext* contextp, const char* namep, Vparameterized_i2c_master* modelp)
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
