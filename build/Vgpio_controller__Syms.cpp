// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vgpio_controller__pch.h"
#include "Vgpio_controller.h"
#include "Vgpio_controller___024root.h"

// FUNCTIONS
Vgpio_controller__Syms::~Vgpio_controller__Syms()
{
}

Vgpio_controller__Syms::Vgpio_controller__Syms(VerilatedContext* contextp, const char* namep, Vgpio_controller* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(57);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
