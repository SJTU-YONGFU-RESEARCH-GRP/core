// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclock_divider.h for the primary calling header

#include "Vclock_divider__pch.h"
#include "Vclock_divider__Syms.h"
#include "Vclock_divider___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vclock_divider___024root___dump_triggers__act(Vclock_divider___024root* vlSelf);
#endif  // VL_DEBUG

void Vclock_divider___024root___eval_triggers__act(Vclock_divider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_divider___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk_in) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_in__0))) 
                                     | ((~ (IData)(vlSelf->rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__rst_n__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk_in__0 = vlSelf->clk_in;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vclock_divider___024root___dump_triggers__act(vlSelf);
    }
#endif
}
