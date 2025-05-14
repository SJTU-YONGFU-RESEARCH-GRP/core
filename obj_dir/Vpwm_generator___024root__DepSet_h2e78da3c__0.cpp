// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpwm_generator.h for the primary calling header

#include "Vpwm_generator__pch.h"
#include "Vpwm_generator__Syms.h"
#include "Vpwm_generator___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpwm_generator___024root___dump_triggers__act(Vpwm_generator___024root* vlSelf);
#endif  // VL_DEBUG

void Vpwm_generator___024root___eval_triggers__act(Vpwm_generator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpwm_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((~ (IData)(vlSelf->rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__rst_n__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpwm_generator___024root___dump_triggers__act(vlSelf);
    }
#endif
}
