// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varbiter.h for the primary calling header

#include "Varbiter__pch.h"
#include "Varbiter__Syms.h"
#include "Varbiter___024root.h"

void Varbiter___024root___ctor_var_reset(Varbiter___024root* vlSelf);

Varbiter___024root::Varbiter___024root(Varbiter__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Varbiter___024root___ctor_var_reset(this);
}

void Varbiter___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Varbiter___024root::~Varbiter___024root() {
}
