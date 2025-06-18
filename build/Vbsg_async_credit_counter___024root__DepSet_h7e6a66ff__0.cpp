// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbsg_async_credit_counter.h for the primary calling header

#include "Vbsg_async_credit_counter__pch.h"
#include "Vbsg_async_credit_counter__Syms.h"
#include "Vbsg_async_credit_counter___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbsg_async_credit_counter___024root___dump_triggers__ico(Vbsg_async_credit_counter___024root* vlSelf);
#endif  // VL_DEBUG

void Vbsg_async_credit_counter___024root___eval_triggers__ico(Vbsg_async_credit_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_async_credit_counter___024root___eval_triggers__ico\n"); );
    Vbsg_async_credit_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbsg_async_credit_counter___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbsg_async_credit_counter___024root___dump_triggers__act(Vbsg_async_credit_counter___024root* vlSelf);
#endif  // VL_DEBUG

void Vbsg_async_credit_counter___024root___eval_triggers__act(Vbsg_async_credit_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_async_credit_counter___024root___eval_triggers__act\n"); );
    Vbsg_async_credit_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.r_clk_i) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__r_clk_i__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.w_clk_i) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__w_clk_i__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__r_clk_i__0 = vlSelfRef.r_clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__w_clk_i__0 = vlSelfRef.w_clk_i;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbsg_async_credit_counter___024root___dump_triggers__act(vlSelf);
    }
#endif
}
