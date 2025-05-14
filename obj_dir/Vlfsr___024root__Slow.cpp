// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlfsr.h for the primary calling header

#include "Vlfsr__pch.h"
#include "Vlfsr__Syms.h"
#include "Vlfsr___024root.h"

void Vlfsr___024root___ctor_var_reset(Vlfsr___024root* vlSelf);

Vlfsr___024root::Vlfsr___024root(Vlfsr__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vlfsr___024root___ctor_var_reset(this);
}

void Vlfsr___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vlfsr___024root::~Vlfsr___024root() {
}
