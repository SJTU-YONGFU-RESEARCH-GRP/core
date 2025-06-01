// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconfigurable_fir_filter.h for the primary calling header

#include "Vconfigurable_fir_filter__pch.h"
#include "Vconfigurable_fir_filter___024root.h"

VL_ATTR_COLD void Vconfigurable_fir_filter___024root___eval_static(Vconfigurable_fir_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fir_filter___024root___eval_static\n"); );
    Vconfigurable_fir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vconfigurable_fir_filter___024root___eval_initial__TOP(Vconfigurable_fir_filter___024root* vlSelf);
VL_ATTR_COLD void Vconfigurable_fir_filter___024root____Vm_traceActivitySetAll(Vconfigurable_fir_filter___024root* vlSelf);

VL_ATTR_COLD void Vconfigurable_fir_filter___024root___eval_initial(Vconfigurable_fir_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fir_filter___024root___eval_initial\n"); );
    Vconfigurable_fir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vconfigurable_fir_filter___024root___eval_initial__TOP(vlSelf);
    Vconfigurable_fir_filter___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vconfigurable_fir_filter___024root___eval_initial__TOP(Vconfigurable_fir_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fir_filter___024root___eval_initial__TOP\n"); );
    Vconfigurable_fir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("FILTER_TYPE parameter value: 0\nInitializing LOW-PASS filter\n",0);
    vlSelfRef.configurable_fir_filter__DOT__coeff_array[0U] = 0x400U;
    vlSelfRef.configurable_fir_filter__DOT__coeff_array[1U] = 0x800U;
    vlSelfRef.configurable_fir_filter__DOT__coeff_array[2U] = 0xc00U;
    vlSelfRef.configurable_fir_filter__DOT__coeff_array[3U] = 0x1000U;
    vlSelfRef.configurable_fir_filter__DOT__coeff_array[4U] = 0x1000U;
    vlSelfRef.configurable_fir_filter__DOT__coeff_array[5U] = 0xc00U;
    vlSelfRef.configurable_fir_filter__DOT__coeff_array[6U] = 0x800U;
    vlSelfRef.configurable_fir_filter__DOT__coeff_array[7U] = 0x400U;
    VL_WRITEF_NX("Coefficient[0] = %0x\nCoefficient[1] = %0x\nCoefficient[2] = %0x\nCoefficient[3] = %0x\nCoefficient[4] = %0x\nCoefficient[5] = %0x\nCoefficient[6] = %0x\nCoefficient[7] = %0x\n",0,
                 16,vlSelfRef.configurable_fir_filter__DOT__coeff_array
                 [0U],16,vlSelfRef.configurable_fir_filter__DOT__coeff_array
                 [1U],16,vlSelfRef.configurable_fir_filter__DOT__coeff_array
                 [2U],16,vlSelfRef.configurable_fir_filter__DOT__coeff_array
                 [3U],16,vlSelfRef.configurable_fir_filter__DOT__coeff_array
                 [4U],16,vlSelfRef.configurable_fir_filter__DOT__coeff_array
                 [5U],16,vlSelfRef.configurable_fir_filter__DOT__coeff_array
                 [6U],16,vlSelfRef.configurable_fir_filter__DOT__coeff_array
                 [7U]);
    vlSelfRef.configurable_fir_filter__DOT__i = 8U;
}

VL_ATTR_COLD void Vconfigurable_fir_filter___024root___eval_final(Vconfigurable_fir_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fir_filter___024root___eval_final\n"); );
    Vconfigurable_fir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_fir_filter___024root___dump_triggers__stl(Vconfigurable_fir_filter___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vconfigurable_fir_filter___024root___eval_phase__stl(Vconfigurable_fir_filter___024root* vlSelf);

VL_ATTR_COLD void Vconfigurable_fir_filter___024root___eval_settle(Vconfigurable_fir_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fir_filter___024root___eval_settle\n"); );
    Vconfigurable_fir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vconfigurable_fir_filter___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("libraries/filters/configurable_fir_filter.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vconfigurable_fir_filter___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_fir_filter___024root___dump_triggers__stl(Vconfigurable_fir_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fir_filter___024root___dump_triggers__stl\n"); );
    Vconfigurable_fir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vconfigurable_fir_filter___024root___stl_sequent__TOP__0(Vconfigurable_fir_filter___024root* vlSelf);

VL_ATTR_COLD void Vconfigurable_fir_filter___024root___eval_stl(Vconfigurable_fir_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fir_filter___024root___eval_stl\n"); );
    Vconfigurable_fir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vconfigurable_fir_filter___024root___stl_sequent__TOP__0(vlSelf);
        Vconfigurable_fir_filter___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vconfigurable_fir_filter___024root___stl_sequent__TOP__0(Vconfigurable_fir_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fir_filter___024root___stl_sequent__TOP__0\n"); );
    Vconfigurable_fir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.configurable_fir_filter__DOT__sum_temp 
        = vlSelfRef.configurable_fir_filter__DOT__products
        [0U];
    vlSelfRef.configurable_fir_filter__DOT__sum_temp 
        = (vlSelfRef.configurable_fir_filter__DOT__sum_temp 
           + vlSelfRef.configurable_fir_filter__DOT__products
           [1U]);
    vlSelfRef.configurable_fir_filter__DOT__sum_temp 
        = (vlSelfRef.configurable_fir_filter__DOT__sum_temp 
           + vlSelfRef.configurable_fir_filter__DOT__products
           [2U]);
    vlSelfRef.configurable_fir_filter__DOT__sum_temp 
        = (vlSelfRef.configurable_fir_filter__DOT__sum_temp 
           + vlSelfRef.configurable_fir_filter__DOT__products
           [3U]);
    vlSelfRef.configurable_fir_filter__DOT__sum_temp 
        = (vlSelfRef.configurable_fir_filter__DOT__sum_temp 
           + vlSelfRef.configurable_fir_filter__DOT__products
           [4U]);
    vlSelfRef.configurable_fir_filter__DOT__sum_temp 
        = (vlSelfRef.configurable_fir_filter__DOT__sum_temp 
           + vlSelfRef.configurable_fir_filter__DOT__products
           [5U]);
    vlSelfRef.configurable_fir_filter__DOT__sum_temp 
        = (vlSelfRef.configurable_fir_filter__DOT__sum_temp 
           + vlSelfRef.configurable_fir_filter__DOT__products
           [6U]);
    vlSelfRef.configurable_fir_filter__DOT__sum_temp 
        = (vlSelfRef.configurable_fir_filter__DOT__sum_temp 
           + vlSelfRef.configurable_fir_filter__DOT__products
           [7U]);
    vlSelfRef.configurable_fir_filter__DOT__output_value 
        = (((~ (vlSelfRef.configurable_fir_filter__DOT__sum_temp 
                >> 0x1fU)) & VL_LTS_III(32, 0x7fff0000U, vlSelfRef.configurable_fir_filter__DOT__sum_temp))
            ? 0x7fffU : (((vlSelfRef.configurable_fir_filter__DOT__sum_temp 
                           >> 0x1fU) & VL_GTS_III(32, 0x80000000U, vlSelfRef.configurable_fir_filter__DOT__sum_temp))
                          ? 0x8000U : (0xffffU & VL_SHIFTRS_III(16,32,32, vlSelfRef.configurable_fir_filter__DOT__sum_temp, 0x10U))));
}

VL_ATTR_COLD void Vconfigurable_fir_filter___024root___eval_triggers__stl(Vconfigurable_fir_filter___024root* vlSelf);

VL_ATTR_COLD bool Vconfigurable_fir_filter___024root___eval_phase__stl(Vconfigurable_fir_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fir_filter___024root___eval_phase__stl\n"); );
    Vconfigurable_fir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vconfigurable_fir_filter___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vconfigurable_fir_filter___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_fir_filter___024root___dump_triggers__act(Vconfigurable_fir_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fir_filter___024root___dump_triggers__act\n"); );
    Vconfigurable_fir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_fir_filter___024root___dump_triggers__nba(Vconfigurable_fir_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fir_filter___024root___dump_triggers__nba\n"); );
    Vconfigurable_fir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vconfigurable_fir_filter___024root____Vm_traceActivitySetAll(Vconfigurable_fir_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fir_filter___024root____Vm_traceActivitySetAll\n"); );
    Vconfigurable_fir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vconfigurable_fir_filter___024root___ctor_var_reset(Vconfigurable_fir_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fir_filter___024root___ctor_var_reset\n"); );
    Vconfigurable_fir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->data_in = VL_RAND_RESET_I(16);
    vlSelf->data_valid = VL_RAND_RESET_I(1);
    vlSelf->data_out = VL_RAND_RESET_I(16);
    vlSelf->data_out_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->configurable_fir_filter__DOT__delay_line[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->configurable_fir_filter__DOT__products[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->configurable_fir_filter__DOT__sum_temp = VL_RAND_RESET_I(32);
    vlSelf->configurable_fir_filter__DOT__output_value = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->configurable_fir_filter__DOT__coeff_array[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->configurable_fir_filter__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
