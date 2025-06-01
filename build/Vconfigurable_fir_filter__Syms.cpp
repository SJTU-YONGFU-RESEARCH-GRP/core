// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vconfigurable_fir_filter__pch.h"
#include "Vconfigurable_fir_filter.h"
#include "Vconfigurable_fir_filter___024root.h"

// FUNCTIONS
Vconfigurable_fir_filter__Syms::~Vconfigurable_fir_filter__Syms()
{
}

Vconfigurable_fir_filter__Syms::Vconfigurable_fir_filter__Syms(VerilatedContext* contextp, const char* namep, Vconfigurable_fir_filter* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(126);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
