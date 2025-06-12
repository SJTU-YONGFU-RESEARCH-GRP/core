// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vparameterized_clock_gating.h for the primary calling header

#include "Vparameterized_clock_gating__pch.h"
#include "Vparameterized_clock_gating__Syms.h"
#include "Vparameterized_clock_gating___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_clock_gating___024root___dump_triggers__ico(Vparameterized_clock_gating___024root* vlSelf);
#endif  // VL_DEBUG

void Vparameterized_clock_gating___024root___eval_triggers__ico(Vparameterized_clock_gating___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_clock_gating___024root___eval_triggers__ico\n"); );
    Vparameterized_clock_gating__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vparameterized_clock_gating___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_clock_gating___024root___dump_triggers__act(Vparameterized_clock_gating___024root* vlSelf);
#endif  // VL_DEBUG

void Vparameterized_clock_gating___024root___eval_triggers__act(Vparameterized_clock_gating___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_clock_gating___024root___eval_triggers__act\n"); );
    Vparameterized_clock_gating__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk_in) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk_in__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk_in__0 = vlSelfRef.clk_in;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vparameterized_clock_gating___024root___dump_triggers__act(vlSelf);
    }
#endif
}
