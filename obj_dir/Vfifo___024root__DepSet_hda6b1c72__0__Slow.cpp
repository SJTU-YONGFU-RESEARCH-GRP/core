// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo.h for the primary calling header

#include "Vfifo__pch.h"
#include "Vfifo___024root.h"

VL_ATTR_COLD void Vfifo___024root___eval_static(Vfifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vfifo___024root___eval_initial(Vfifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
}

VL_ATTR_COLD void Vfifo___024root___eval_final(Vfifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo___024root___dump_triggers__stl(Vfifo___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vfifo___024root___eval_phase__stl(Vfifo___024root* vlSelf);

VL_ATTR_COLD void Vfifo___024root___eval_settle(Vfifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vfifo___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("fifo.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vfifo___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo___024root___dump_triggers__stl(Vfifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfifo___024root___stl_sequent__TOP__0(Vfifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->full = (((0xfU & (IData)(vlSelf->fifo__DOT__wr_ptr)) 
                     == (0xfU & (IData)(vlSelf->fifo__DOT__rd_ptr))) 
                    & ((1U & ((IData)(vlSelf->fifo__DOT__wr_ptr) 
                              >> 4U)) != (1U & ((IData)(vlSelf->fifo__DOT__rd_ptr) 
                                                >> 4U))));
    vlSelf->empty = ((IData)(vlSelf->fifo__DOT__rd_ptr) 
                     == (IData)(vlSelf->fifo__DOT__wr_ptr));
}

VL_ATTR_COLD void Vfifo___024root___eval_stl(Vfifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vfifo___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vfifo___024root___eval_triggers__stl(Vfifo___024root* vlSelf);

VL_ATTR_COLD bool Vfifo___024root___eval_phase__stl(Vfifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vfifo___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vfifo___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo___024root___dump_triggers__act(Vfifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo___024root___dump_triggers__nba(Vfifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfifo___024root___ctor_var_reset(Vfifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->wr_en = VL_RAND_RESET_I(1);
    vlSelf->rd_en = VL_RAND_RESET_I(1);
    vlSelf->din = VL_RAND_RESET_I(8);
    vlSelf->dout = VL_RAND_RESET_I(8);
    vlSelf->full = VL_RAND_RESET_I(1);
    vlSelf->empty = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->fifo__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->fifo__DOT__wr_ptr = VL_RAND_RESET_I(5);
    vlSelf->fifo__DOT__rd_ptr = VL_RAND_RESET_I(5);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
