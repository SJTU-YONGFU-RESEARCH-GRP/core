// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconfigurable_lfsr.h for the primary calling header

#include "Vconfigurable_lfsr__pch.h"
#include "Vconfigurable_lfsr__Syms.h"
#include "Vconfigurable_lfsr___024root.h"

void Vconfigurable_lfsr___024root___ctor_var_reset(Vconfigurable_lfsr___024root* vlSelf);

Vconfigurable_lfsr___024root::Vconfigurable_lfsr___024root(Vconfigurable_lfsr__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vconfigurable_lfsr___024root___ctor_var_reset(this);
}

void Vconfigurable_lfsr___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vconfigurable_lfsr___024root::~Vconfigurable_lfsr___024root() {
}
