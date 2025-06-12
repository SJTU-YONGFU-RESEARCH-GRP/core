// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_core.h for the primary calling header

#include "Vaes_core__pch.h"
#include "Vaes_core__Syms.h"
#include "Vaes_core___024root.h"

void Vaes_core___024root___ctor_var_reset(Vaes_core___024root* vlSelf);

Vaes_core___024root::Vaes_core___024root(Vaes_core__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vaes_core___024root___ctor_var_reset(this);
}

void Vaes_core___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vaes_core___024root::~Vaes_core___024root() {
}
