// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconfigurable_priority_encoder.h for the primary calling header

#include "Vconfigurable_priority_encoder__pch.h"
#include "Vconfigurable_priority_encoder__Syms.h"
#include "Vconfigurable_priority_encoder___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_priority_encoder___024root___dump_triggers__ico(Vconfigurable_priority_encoder___024root* vlSelf);
#endif  // VL_DEBUG

void Vconfigurable_priority_encoder___024root___eval_triggers__ico(Vconfigurable_priority_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_priority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_priority_encoder___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vconfigurable_priority_encoder___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_priority_encoder___024root___dump_triggers__act(Vconfigurable_priority_encoder___024root* vlSelf);
#endif  // VL_DEBUG

void Vconfigurable_priority_encoder___024root___eval_triggers__act(Vconfigurable_priority_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_priority_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_priority_encoder___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vconfigurable_priority_encoder___024root___dump_triggers__act(vlSelf);
    }
#endif
}
