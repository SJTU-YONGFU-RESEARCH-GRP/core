// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfir_filter.h for the primary calling header

#include "Vfir_filter__pch.h"
#include "Vfir_filter___024root.h"

VL_ATTR_COLD void Vfir_filter___024root___eval_static(Vfir_filter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir_filter___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vfir_filter___024root___eval_initial__TOP(Vfir_filter___024root* vlSelf);

VL_ATTR_COLD void Vfir_filter___024root___eval_initial(Vfir_filter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir_filter___024root___eval_initial\n"); );
    // Body
    Vfir_filter___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
}

VL_ATTR_COLD void Vfir_filter___024root___eval_initial__TOP(Vfir_filter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir_filter___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->fir_filter__DOT__coeffs[0U] = 1U;
    vlSelf->fir_filter__DOT__coeffs[1U] = 2U;
    vlSelf->fir_filter__DOT__coeffs[2U] = 2U;
    vlSelf->fir_filter__DOT__coeffs[3U] = 1U;
}

VL_ATTR_COLD void Vfir_filter___024root___eval_final(Vfir_filter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir_filter___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfir_filter___024root___dump_triggers__stl(Vfir_filter___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vfir_filter___024root___eval_phase__stl(Vfir_filter___024root* vlSelf);

VL_ATTR_COLD void Vfir_filter___024root___eval_settle(Vfir_filter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir_filter___024root___eval_settle\n"); );
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
            Vfir_filter___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("fir_filter.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vfir_filter___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfir_filter___024root___dump_triggers__stl(Vfir_filter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir_filter___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfir_filter___024root___stl_sequent__TOP__0(Vfir_filter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir_filter___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->data_out = vlSelf->fir_filter__DOT__result;
}

VL_ATTR_COLD void Vfir_filter___024root___eval_stl(Vfir_filter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir_filter___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vfir_filter___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vfir_filter___024root___eval_triggers__stl(Vfir_filter___024root* vlSelf);

VL_ATTR_COLD bool Vfir_filter___024root___eval_phase__stl(Vfir_filter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir_filter___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vfir_filter___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vfir_filter___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfir_filter___024root___dump_triggers__act(Vfir_filter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir_filter___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vfir_filter___024root___dump_triggers__nba(Vfir_filter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir_filter___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfir_filter___024root___ctor_var_reset(Vfir_filter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir_filter___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->data_in = VL_RAND_RESET_I(8);
    vlSelf->data_valid = VL_RAND_RESET_I(1);
    vlSelf->data_out = VL_RAND_RESET_I(19);
    vlSelf->data_out_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fir_filter__DOT__coeffs[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fir_filter__DOT__delay_line[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->fir_filter__DOT__result = VL_RAND_RESET_I(19);
    vlSelf->fir_filter__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
