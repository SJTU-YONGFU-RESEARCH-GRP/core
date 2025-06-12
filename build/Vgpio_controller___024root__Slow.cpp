// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgpio_controller.h for the primary calling header

#include "Vgpio_controller__pch.h"
#include "Vgpio_controller__Syms.h"
#include "Vgpio_controller___024root.h"

void Vgpio_controller___024root___ctor_var_reset(Vgpio_controller___024root* vlSelf);

Vgpio_controller___024root::Vgpio_controller___024root(Vgpio_controller__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vgpio_controller___024root___ctor_var_reset(this);
}

void Vgpio_controller___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vgpio_controller___024root::~Vgpio_controller___024root() {
}
