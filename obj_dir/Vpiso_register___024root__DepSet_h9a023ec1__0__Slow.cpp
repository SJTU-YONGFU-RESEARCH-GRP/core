// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpiso_register.h for the primary calling header

#include "Vpiso_register__pch.h"
#include "Vpiso_register___024root.h"

VL_ATTR_COLD void Vpiso_register___024root___eval_static(Vpiso_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpiso_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpiso_register___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vpiso_register___024root___eval_initial(Vpiso_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpiso_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpiso_register___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
}

VL_ATTR_COLD void Vpiso_register___024root___eval_final(Vpiso_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpiso_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpiso_register___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpiso_register___024root___dump_triggers__stl(Vpiso_register___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vpiso_register___024root___eval_phase__stl(Vpiso_register___024root* vlSelf);

VL_ATTR_COLD void Vpiso_register___024root___eval_settle(Vpiso_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpiso_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpiso_register___024root___eval_settle\n"); );
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
            Vpiso_register___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("piso_register.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vpiso_register___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpiso_register___024root___dump_triggers__stl(Vpiso_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpiso_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpiso_register___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpiso_register___024root___stl_sequent__TOP__0(Vpiso_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpiso_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpiso_register___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->serial_out = (1U & (IData)(vlSelf->piso_register__DOT__shift_reg));
}

VL_ATTR_COLD void Vpiso_register___024root___eval_stl(Vpiso_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpiso_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpiso_register___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vpiso_register___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vpiso_register___024root___eval_triggers__stl(Vpiso_register___024root* vlSelf);

VL_ATTR_COLD bool Vpiso_register___024root___eval_phase__stl(Vpiso_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpiso_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpiso_register___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vpiso_register___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vpiso_register___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpiso_register___024root___dump_triggers__act(Vpiso_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpiso_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpiso_register___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vpiso_register___024root___dump_triggers__nba(Vpiso_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpiso_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpiso_register___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpiso_register___024root___ctor_var_reset(Vpiso_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpiso_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpiso_register___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->load = VL_RAND_RESET_I(1);
    vlSelf->parallel_in = VL_RAND_RESET_I(8);
    vlSelf->serial_out = VL_RAND_RESET_I(1);
    vlSelf->piso_register__DOT__shift_reg = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
}
