// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo.h for the primary calling header

#include "Vfifo__pch.h"
#include "Vfifo__Syms.h"
#include "Vfifo___024root.h"

void Vfifo___024root___ctor_var_reset(Vfifo___024root* vlSelf);

Vfifo___024root::Vfifo___024root(Vfifo__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vfifo___024root___ctor_var_reset(this);
}

void Vfifo___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vfifo___024root::~Vfifo___024root() {
}
