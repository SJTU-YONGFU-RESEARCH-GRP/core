// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconfigurable_clz_clo.h for the primary calling header

#include "Vconfigurable_clz_clo__pch.h"
#include "Vconfigurable_clz_clo__Syms.h"
#include "Vconfigurable_clz_clo___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_clz_clo___024root___dump_triggers__ico(Vconfigurable_clz_clo___024root* vlSelf);
#endif  // VL_DEBUG

void Vconfigurable_clz_clo___024root___eval_triggers__ico(Vconfigurable_clz_clo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_clz_clo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_clz_clo___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vconfigurable_clz_clo___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_clz_clo___024root___dump_triggers__act(Vconfigurable_clz_clo___024root* vlSelf);
#endif  // VL_DEBUG

void Vconfigurable_clz_clo___024root___eval_triggers__act(Vconfigurable_clz_clo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_clz_clo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_clz_clo___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vconfigurable_clz_clo___024root___dump_triggers__act(vlSelf);
    }
#endif
}
