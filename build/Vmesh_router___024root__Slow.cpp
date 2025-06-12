// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmesh_router.h for the primary calling header

#include "Vmesh_router__pch.h"
#include "Vmesh_router__Syms.h"
#include "Vmesh_router___024root.h"

void Vmesh_router___024root___ctor_var_reset(Vmesh_router___024root* vlSelf);

Vmesh_router___024root::Vmesh_router___024root(Vmesh_router__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmesh_router___024root___ctor_var_reset(this);
}

void Vmesh_router___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmesh_router___024root::~Vmesh_router___024root() {
}
