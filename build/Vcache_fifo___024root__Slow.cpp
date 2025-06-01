// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcache_fifo.h for the primary calling header

#include "Vcache_fifo__pch.h"
#include "Vcache_fifo__Syms.h"
#include "Vcache_fifo___024root.h"

void Vcache_fifo___024root___ctor_var_reset(Vcache_fifo___024root* vlSelf);

Vcache_fifo___024root::Vcache_fifo___024root(Vcache_fifo__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcache_fifo___024root___ctor_var_reset(this);
}

void Vcache_fifo___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcache_fifo___024root::~Vcache_fifo___024root() {
}
