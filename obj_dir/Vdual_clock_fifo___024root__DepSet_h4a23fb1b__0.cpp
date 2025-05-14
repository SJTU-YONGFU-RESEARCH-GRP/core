// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdual_clock_fifo.h for the primary calling header

#include "Vdual_clock_fifo__pch.h"
#include "Vdual_clock_fifo__Syms.h"
#include "Vdual_clock_fifo___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdual_clock_fifo___024root___dump_triggers__act(Vdual_clock_fifo___024root* vlSelf);
#endif  // VL_DEBUG

void Vdual_clock_fifo___024root___eval_triggers__act(Vdual_clock_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_clock_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_clock_fifo___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->rd_clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__rd_clk__0))) 
                                     | ((~ (IData)(vlSelf->rd_rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__rd_rst_n__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->wr_clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__wr_clk__0))) 
                                     | ((~ (IData)(vlSelf->wr_rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__wr_rst_n__0))));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->wr_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__wr_clk__0))));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->rd_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__rd_clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__rd_clk__0 = vlSelf->rd_clk;
    vlSelf->__Vtrigprevexpr___TOP__rd_rst_n__0 = vlSelf->rd_rst_n;
    vlSelf->__Vtrigprevexpr___TOP__wr_clk__0 = vlSelf->wr_clk;
    vlSelf->__Vtrigprevexpr___TOP__wr_rst_n__0 = vlSelf->wr_rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdual_clock_fifo___024root___dump_triggers__act(vlSelf);
    }
#endif
}
