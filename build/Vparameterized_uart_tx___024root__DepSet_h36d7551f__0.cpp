// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vparameterized_uart_tx.h for the primary calling header

#include "Vparameterized_uart_tx__pch.h"
#include "Vparameterized_uart_tx__Syms.h"
#include "Vparameterized_uart_tx___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_uart_tx___024root___dump_triggers__act(Vparameterized_uart_tx___024root* vlSelf);
#endif  // VL_DEBUG

void Vparameterized_uart_tx___024root___eval_triggers__act(Vparameterized_uart_tx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_uart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_uart_tx___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((~ (IData)(vlSelf->rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__rst_n__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vparameterized_uart_tx___024root___dump_triggers__act(vlSelf);
    }
#endif
}
