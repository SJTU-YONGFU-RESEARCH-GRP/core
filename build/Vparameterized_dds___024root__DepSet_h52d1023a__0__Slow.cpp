// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vparameterized_dds.h for the primary calling header

#include "Vparameterized_dds__pch.h"
#include "Vparameterized_dds___024root.h"

VL_ATTR_COLD void Vparameterized_dds___024root___eval_static(Vparameterized_dds___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_dds___024root___eval_static\n"); );
    Vparameterized_dds__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vparameterized_dds___024root___eval_initial(Vparameterized_dds___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_dds___024root___eval_initial\n"); );
    Vparameterized_dds__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vparameterized_dds___024root___eval_final(Vparameterized_dds___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_dds___024root___eval_final\n"); );
    Vparameterized_dds__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_dds___024root___dump_triggers__stl(Vparameterized_dds___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vparameterized_dds___024root___eval_phase__stl(Vparameterized_dds___024root* vlSelf);

VL_ATTR_COLD void Vparameterized_dds___024root___eval_settle(Vparameterized_dds___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_dds___024root___eval_settle\n"); );
    Vparameterized_dds__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vparameterized_dds___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("libraries/signals/parameterized_dds.v", 5, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vparameterized_dds___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_dds___024root___dump_triggers__stl(Vparameterized_dds___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_dds___024root___dump_triggers__stl\n"); );
    Vparameterized_dds__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vparameterized_dds___024root___ico_sequent__TOP__0(Vparameterized_dds___024root* vlSelf);
VL_ATTR_COLD void Vparameterized_dds___024root____Vm_traceActivitySetAll(Vparameterized_dds___024root* vlSelf);

VL_ATTR_COLD void Vparameterized_dds___024root___eval_stl(Vparameterized_dds___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_dds___024root___eval_stl\n"); );
    Vparameterized_dds__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vparameterized_dds___024root___ico_sequent__TOP__0(vlSelf);
        Vparameterized_dds___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vparameterized_dds___024root___eval_triggers__stl(Vparameterized_dds___024root* vlSelf);

VL_ATTR_COLD bool Vparameterized_dds___024root___eval_phase__stl(Vparameterized_dds___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_dds___024root___eval_phase__stl\n"); );
    Vparameterized_dds__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vparameterized_dds___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vparameterized_dds___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_dds___024root___dump_triggers__ico(Vparameterized_dds___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_dds___024root___dump_triggers__ico\n"); );
    Vparameterized_dds__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_dds___024root___dump_triggers__act(Vparameterized_dds___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_dds___024root___dump_triggers__act\n"); );
    Vparameterized_dds__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vparameterized_dds___024root___dump_triggers__nba(Vparameterized_dds___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_dds___024root___dump_triggers__nba\n"); );
    Vparameterized_dds__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vparameterized_dds___024root____Vm_traceActivitySetAll(Vparameterized_dds___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_dds___024root____Vm_traceActivitySetAll\n"); );
    Vparameterized_dds__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vparameterized_dds___024root___ctor_var_reset(Vparameterized_dds___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_dds___024root___ctor_var_reset\n"); );
    Vparameterized_dds__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->enable = VL_RAND_RESET_I(1);
    vlSelf->fcw = VL_RAND_RESET_I(24);
    vlSelf->phase_offset = VL_RAND_RESET_I(24);
    vlSelf->sine_out = VL_RAND_RESET_I(12);
    vlSelf->cosine_out = VL_RAND_RESET_I(12);
    vlSelf->lut_initialized = VL_RAND_RESET_I(1);
    vlSelf->parameterized_dds__DOT__phase_acc = VL_RAND_RESET_I(24);
    vlSelf->parameterized_dds__DOT__phase_with_offset = VL_RAND_RESET_I(24);
    vlSelf->parameterized_dds__DOT__lut_addr = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->parameterized_dds__DOT__sine_lut[__Vi0] = VL_RAND_RESET_I(12);
    }
    vlSelf->parameterized_dds__DOT__sine_value = VL_RAND_RESET_I(12);
    vlSelf->parameterized_dds__DOT__init_counter = VL_RAND_RESET_I(10);
    vlSelf->parameterized_dds__DOT__center_val = VL_RAND_RESET_I(12);
    vlSelf->parameterized_dds__DOT__scale_val = VL_RAND_RESET_I(12);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
