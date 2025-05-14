// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconfigurable_sync_fifo.h for the primary calling header

#include "Vconfigurable_sync_fifo__pch.h"
#include "Vconfigurable_sync_fifo___024root.h"

VL_ATTR_COLD void Vconfigurable_sync_fifo___024root___eval_static(Vconfigurable_sync_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vconfigurable_sync_fifo___024root___eval_initial(Vconfigurable_sync_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
}

VL_ATTR_COLD void Vconfigurable_sync_fifo___024root___eval_final(Vconfigurable_sync_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_sync_fifo___024root___dump_triggers__stl(Vconfigurable_sync_fifo___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vconfigurable_sync_fifo___024root___eval_phase__stl(Vconfigurable_sync_fifo___024root* vlSelf);

VL_ATTR_COLD void Vconfigurable_sync_fifo___024root___eval_settle(Vconfigurable_sync_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root___eval_settle\n"); );
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
            Vconfigurable_sync_fifo___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("configurable_sync_fifo.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vconfigurable_sync_fifo___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_sync_fifo___024root___dump_triggers__stl(Vconfigurable_sync_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vconfigurable_sync_fifo___024root___stl_sequent__TOP__0(Vconfigurable_sync_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->almost_full = (0xcU <= (IData)(vlSelf->configurable_sync_fifo__DOT__count));
    vlSelf->almost_empty = (4U >= (IData)(vlSelf->configurable_sync_fifo__DOT__count));
    vlSelf->fill_level = vlSelf->configurable_sync_fifo__DOT__count;
    vlSelf->full = (0x10U == (IData)(vlSelf->configurable_sync_fifo__DOT__count));
    vlSelf->empty = (0U == (IData)(vlSelf->configurable_sync_fifo__DOT__count));
    vlSelf->configurable_sync_fifo__DOT__wr_allow = 
        ((~ (IData)(vlSelf->full)) & (IData)(vlSelf->wr_en));
    vlSelf->configurable_sync_fifo__DOT__rd_allow = 
        ((~ (IData)(vlSelf->empty)) & (IData)(vlSelf->rd_en));
}

VL_ATTR_COLD void Vconfigurable_sync_fifo___024root___eval_stl(Vconfigurable_sync_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vconfigurable_sync_fifo___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vconfigurable_sync_fifo___024root___eval_triggers__stl(Vconfigurable_sync_fifo___024root* vlSelf);

VL_ATTR_COLD bool Vconfigurable_sync_fifo___024root___eval_phase__stl(Vconfigurable_sync_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vconfigurable_sync_fifo___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vconfigurable_sync_fifo___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_sync_fifo___024root___dump_triggers__ico(Vconfigurable_sync_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_sync_fifo___024root___dump_triggers__act(Vconfigurable_sync_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_sync_fifo___024root___dump_triggers__nba(Vconfigurable_sync_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vconfigurable_sync_fifo___024root___ctor_var_reset(Vconfigurable_sync_fifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->wr_en = VL_RAND_RESET_I(1);
    vlSelf->rd_en = VL_RAND_RESET_I(1);
    vlSelf->data_in = VL_RAND_RESET_I(8);
    vlSelf->data_out = VL_RAND_RESET_I(8);
    vlSelf->full = VL_RAND_RESET_I(1);
    vlSelf->empty = VL_RAND_RESET_I(1);
    vlSelf->almost_full = VL_RAND_RESET_I(1);
    vlSelf->almost_empty = VL_RAND_RESET_I(1);
    vlSelf->fill_level = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->configurable_sync_fifo__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->configurable_sync_fifo__DOT__wr_ptr = VL_RAND_RESET_I(4);
    vlSelf->configurable_sync_fifo__DOT__rd_ptr = VL_RAND_RESET_I(4);
    vlSelf->configurable_sync_fifo__DOT__count = VL_RAND_RESET_I(5);
    vlSelf->configurable_sync_fifo__DOT__wr_allow = VL_RAND_RESET_I(1);
    vlSelf->configurable_sync_fifo__DOT__rd_allow = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__configurable_sync_fifo__DOT__wr_ptr = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
