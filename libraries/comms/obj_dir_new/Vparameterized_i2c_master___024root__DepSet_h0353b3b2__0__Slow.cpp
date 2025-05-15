// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vparameterized_i2c_master.h for the primary calling header

#include "Vparameterized_i2c_master__pch.h"
#include "Vparameterized_i2c_master___024root.h"

VL_ATTR_COLD void Vparameterized_i2c_master___024root___eval_static(Vparameterized_i2c_master___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_i2c_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_i2c_master___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vparameterized_i2c_master___024root___eval_initial__TOP(Vparameterized_i2c_master___024root* vlSelf);

VL_ATTR_COLD void Vparameterized_i2c_master___024root___eval_initial(Vparameterized_i2c_master___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_i2c_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_i2c_master___024root___eval_initial\n"); );
    // Body
    Vparameterized_i2c_master___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
}

VL_ATTR_COLD void Vparameterized_i2c_master___024root___eval_initial__TOP(Vparameterized_i2c_master___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_i2c_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_i2c_master___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->scl = 0U;
    vlSelf->sda = 0U;
}

VL_ATTR_COLD void Vparameterized_i2c_master___024root___eval_final(Vparameterized_i2c_master___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_i2c_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_i2c_master___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_i2c_master___024root___dump_triggers__stl(Vparameterized_i2c_master___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vparameterized_i2c_master___024root___eval_phase__stl(Vparameterized_i2c_master___024root* vlSelf);

VL_ATTR_COLD void Vparameterized_i2c_master___024root___eval_settle(Vparameterized_i2c_master___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_i2c_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_i2c_master___024root___eval_settle\n"); );
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
            Vparameterized_i2c_master___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("parameterized_i2c_master.v", 18, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vparameterized_i2c_master___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_i2c_master___024root___dump_triggers__stl(Vparameterized_i2c_master___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_i2c_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_i2c_master___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vparameterized_i2c_master___024root___stl_sequent__TOP__0(Vparameterized_i2c_master___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_i2c_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_i2c_master___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->scl_internal_debug = vlSelf->parameterized_i2c_master__DOT__scl_internal;
    vlSelf->sda_internal_debug = vlSelf->parameterized_i2c_master__DOT__sda_internal;
}

VL_ATTR_COLD void Vparameterized_i2c_master___024root___eval_stl(Vparameterized_i2c_master___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_i2c_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_i2c_master___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vparameterized_i2c_master___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vparameterized_i2c_master___024root___eval_triggers__stl(Vparameterized_i2c_master___024root* vlSelf);

VL_ATTR_COLD bool Vparameterized_i2c_master___024root___eval_phase__stl(Vparameterized_i2c_master___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_i2c_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_i2c_master___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vparameterized_i2c_master___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vparameterized_i2c_master___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_i2c_master___024root___dump_triggers__act(Vparameterized_i2c_master___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_i2c_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_i2c_master___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vparameterized_i2c_master___024root___dump_triggers__nba(Vparameterized_i2c_master___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_i2c_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_i2c_master___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vparameterized_i2c_master___024root___ctor_var_reset(Vparameterized_i2c_master___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_i2c_master__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_i2c_master___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(1);
    vlSelf->stop = VL_RAND_RESET_I(1);
    vlSelf->read = VL_RAND_RESET_I(1);
    vlSelf->write = VL_RAND_RESET_I(1);
    vlSelf->data_in = VL_RAND_RESET_I(8);
    vlSelf->addr = VL_RAND_RESET_I(7);
    vlSelf->busy = VL_RAND_RESET_I(1);
    vlSelf->done = VL_RAND_RESET_I(1);
    vlSelf->ack_error = VL_RAND_RESET_I(1);
    vlSelf->data_out = VL_RAND_RESET_I(8);
    vlSelf->scl = VL_RAND_RESET_I(1);
    vlSelf->sda = VL_RAND_RESET_I(1);
    vlSelf->state = VL_RAND_RESET_I(4);
    vlSelf->phase = VL_RAND_RESET_I(2);
    vlSelf->scl_internal_debug = VL_RAND_RESET_I(1);
    vlSelf->sda_internal_debug = VL_RAND_RESET_I(1);
    vlSelf->shift_reg_debug = VL_RAND_RESET_I(8);
    vlSelf->bit_counter_debug = VL_RAND_RESET_I(3);
    vlSelf->parameterized_i2c_master__DOT__divider_counter = VL_RAND_RESET_I(7);
    vlSelf->parameterized_i2c_master__DOT__scl_internal = VL_RAND_RESET_I(1);
    vlSelf->parameterized_i2c_master__DOT__sda_internal = VL_RAND_RESET_I(1);
    vlSelf->parameterized_i2c_master__DOT__cmd_read = VL_RAND_RESET_I(1);
    vlSelf->parameterized_i2c_master__DOT__cmd_write = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
