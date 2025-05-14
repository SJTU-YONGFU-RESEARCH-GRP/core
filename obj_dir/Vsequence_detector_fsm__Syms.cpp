// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vsequence_detector_fsm__pch.h"
#include "Vsequence_detector_fsm.h"
#include "Vsequence_detector_fsm___024root.h"

// FUNCTIONS
Vsequence_detector_fsm__Syms::~Vsequence_detector_fsm__Syms()
{
}

Vsequence_detector_fsm__Syms::Vsequence_detector_fsm__Syms(VerilatedContext* contextp, const char* namep, Vsequence_detector_fsm* modelp)
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
