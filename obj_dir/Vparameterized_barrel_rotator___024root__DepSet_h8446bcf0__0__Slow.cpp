// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vparameterized_barrel_rotator.h for the primary calling header

#include "Vparameterized_barrel_rotator__pch.h"
#include "Vparameterized_barrel_rotator___024root.h"

VL_ATTR_COLD void Vparameterized_barrel_rotator___024root___eval_static(Vparameterized_barrel_rotator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_barrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_barrel_rotator___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vparameterized_barrel_rotator___024root___eval_initial(Vparameterized_barrel_rotator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_barrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_barrel_rotator___024root___eval_initial\n"); );
}

VL_ATTR_COLD void Vparameterized_barrel_rotator___024root___eval_final(Vparameterized_barrel_rotator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_barrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_barrel_rotator___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_barrel_rotator___024root___dump_triggers__stl(Vparameterized_barrel_rotator___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vparameterized_barrel_rotator___024root___eval_phase__stl(Vparameterized_barrel_rotator___024root* vlSelf);

VL_ATTR_COLD void Vparameterized_barrel_rotator___024root___eval_settle(Vparameterized_barrel_rotator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_barrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_barrel_rotator___024root___eval_settle\n"); );
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
            Vparameterized_barrel_rotator___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("parameterized_barrel_rotator.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vparameterized_barrel_rotator___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_barrel_rotator___024root___dump_triggers__stl(Vparameterized_barrel_rotator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_barrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_barrel_rotator___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vparameterized_barrel_rotator___024root___ico_sequent__TOP__0(Vparameterized_barrel_rotator___024root* vlSelf);

VL_ATTR_COLD void Vparameterized_barrel_rotator___024root___eval_stl(Vparameterized_barrel_rotator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_barrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_barrel_rotator___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vparameterized_barrel_rotator___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vparameterized_barrel_rotator___024root___eval_triggers__stl(Vparameterized_barrel_rotator___024root* vlSelf);

VL_ATTR_COLD bool Vparameterized_barrel_rotator___024root___eval_phase__stl(Vparameterized_barrel_rotator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_barrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_barrel_rotator___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vparameterized_barrel_rotator___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vparameterized_barrel_rotator___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_barrel_rotator___024root___dump_triggers__ico(Vparameterized_barrel_rotator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_barrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_barrel_rotator___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vparameterized_barrel_rotator___024root___dump_triggers__act(Vparameterized_barrel_rotator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_barrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_barrel_rotator___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_barrel_rotator___024root___dump_triggers__nba(Vparameterized_barrel_rotator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_barrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_barrel_rotator___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vparameterized_barrel_rotator___024root___ctor_var_reset(Vparameterized_barrel_rotator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vparameterized_barrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_barrel_rotator___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->data_in = VL_RAND_RESET_I(32);
    vlSelf->rotate_amount = VL_RAND_RESET_I(5);
    vlSelf->direction = VL_RAND_RESET_I(1);
    vlSelf->data_out = VL_RAND_RESET_I(32);
    vlSelf->parameterized_barrel_rotator__DOT__temp_data = VL_RAND_RESET_I(32);
    vlSelf->parameterized_barrel_rotator__DOT__extended_data = VL_RAND_RESET_Q(64);
    vlSelf->parameterized_barrel_rotator__DOT__effective_rotate = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
