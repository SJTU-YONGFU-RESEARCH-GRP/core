// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipelined_fifo.h for the primary calling header

#include "Vpipelined_fifo__pch.h"
#include "Vpipelined_fifo__Syms.h"
#include "Vpipelined_fifo___024root.h"

void Vpipelined_fifo___024root___ctor_var_reset(Vpipelined_fifo___024root* vlSelf);

Vpipelined_fifo___024root::Vpipelined_fifo___024root(Vpipelined_fifo__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vpipelined_fifo___024root___ctor_var_reset(this);
}

void Vpipelined_fifo___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vpipelined_fifo___024root::~Vpipelined_fifo___024root() {
}
