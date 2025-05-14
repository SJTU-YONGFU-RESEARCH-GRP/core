// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdual_port_ram.h for the primary calling header

#include "Vdual_port_ram__pch.h"
#include "Vdual_port_ram__Syms.h"
#include "Vdual_port_ram___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdual_port_ram___024root___dump_triggers__act(Vdual_port_ram___024root* vlSelf);
#endif  // VL_DEBUG

void Vdual_port_ram___024root___eval_triggers__act(Vdual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_port_ram___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdual_port_ram___024root___dump_triggers__act(vlSelf);
    }
#endif
}
