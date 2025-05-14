// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpriority_encoder.h for the primary calling header

#include "Vpriority_encoder__pch.h"
#include "Vpriority_encoder__Syms.h"
#include "Vpriority_encoder___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpriority_encoder___024root___dump_triggers__ico(Vpriority_encoder___024root* vlSelf);
#endif  // VL_DEBUG

void Vpriority_encoder___024root___eval_triggers__ico(Vpriority_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriority_encoder___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpriority_encoder___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpriority_encoder___024root___dump_triggers__act(Vpriority_encoder___024root* vlSelf);
#endif  // VL_DEBUG

void Vpriority_encoder___024root___eval_triggers__act(Vpriority_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriority_encoder___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpriority_encoder___024root___dump_triggers__act(vlSelf);
    }
#endif
}
