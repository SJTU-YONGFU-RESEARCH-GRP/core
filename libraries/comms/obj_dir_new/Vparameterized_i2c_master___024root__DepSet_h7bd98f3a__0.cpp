// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vparameterized_i2c_master.h for the primary calling header

#include "Vparameterized_i2c_master__pch.h"
#include "Vparameterized_i2c_master__Syms.h"
#include "Vparameterized_i2c_master___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_i2c_master___024root___dump_triggers__act(Vparameterized_i2c_master___024root* vlSelf);
#endif  // VL_DEBUG

void Vparameterized_i2c_master___024root___eval_triggers__act(Vparameterized_i2c_master___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_i2c_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_i2c_master___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((~ (IData)(vlSelf->rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__rst_n__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vparameterized_i2c_master___024root___dump_triggers__act(vlSelf);
    }
#endif
}
