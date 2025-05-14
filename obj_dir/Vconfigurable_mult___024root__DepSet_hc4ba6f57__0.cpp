// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconfigurable_mult.h for the primary calling header

#include "Vconfigurable_mult__pch.h"
#include "Vconfigurable_mult__Syms.h"
#include "Vconfigurable_mult___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_mult___024root___dump_triggers__ico(Vconfigurable_mult___024root* vlSelf);
#endif  // VL_DEBUG

void Vconfigurable_mult___024root___eval_triggers__ico(Vconfigurable_mult___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_mult___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vconfigurable_mult___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_mult___024root___dump_triggers__act(Vconfigurable_mult___024root* vlSelf);
#endif  // VL_DEBUG

void Vconfigurable_mult___024root___eval_triggers__act(Vconfigurable_mult___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_mult___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vconfigurable_mult___024root___dump_triggers__act(vlSelf);
    }
#endif
}
