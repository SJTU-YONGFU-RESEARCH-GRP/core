// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconfigurable_clz_clo.h for the primary calling header

#include "Vconfigurable_clz_clo__pch.h"
#include "Vconfigurable_clz_clo___024root.h"

VL_ATTR_COLD void Vconfigurable_clz_clo___024root___eval_static(Vconfigurable_clz_clo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_clz_clo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_clz_clo___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vconfigurable_clz_clo___024root___eval_initial(Vconfigurable_clz_clo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_clz_clo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_clz_clo___024root___eval_initial\n"); );
}

VL_ATTR_COLD void Vconfigurable_clz_clo___024root___eval_final(Vconfigurable_clz_clo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_clz_clo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_clz_clo___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_clz_clo___024root___dump_triggers__stl(Vconfigurable_clz_clo___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vconfigurable_clz_clo___024root___eval_phase__stl(Vconfigurable_clz_clo___024root* vlSelf);

VL_ATTR_COLD void Vconfigurable_clz_clo___024root___eval_settle(Vconfigurable_clz_clo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_clz_clo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_clz_clo___024root___eval_settle\n"); );
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
            Vconfigurable_clz_clo___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("configurable_clz_clo.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vconfigurable_clz_clo___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_clz_clo___024root___dump_triggers__stl(Vconfigurable_clz_clo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_clz_clo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_clz_clo___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vconfigurable_clz_clo___024root___stl_sequent__TOP__0(Vconfigurable_clz_clo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_clz_clo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_clz_clo___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->count_out = 0x20U;
    vlSelf->all_zeros = (0U == vlSelf->data_in);
    vlSelf->all_ones = (0xffffffffU == vlSelf->data_in);
    if (vlSelf->count_ones) {
        vlSelf->configurable_clz_clo__DOT__i = 0x1fU;
        {
            while (VL_LTES_III(32, 0U, vlSelf->configurable_clz_clo__DOT__i)) {
                if ((1U & (~ (vlSelf->data_in >> (0x1fU 
                                                  & vlSelf->configurable_clz_clo__DOT__i))))) {
                    vlSelf->count_out = (0x3fU & ((IData)(0x1fU) 
                                                  - vlSelf->configurable_clz_clo__DOT__i));
                    goto __Vlabel1;
                }
                vlSelf->configurable_clz_clo__DOT__i 
                    = (vlSelf->configurable_clz_clo__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel1: ;
        }
    } else {
        vlSelf->configurable_clz_clo__DOT__i = 0x1fU;
        {
            while (VL_LTES_III(32, 0U, vlSelf->configurable_clz_clo__DOT__i)) {
                if ((1U & (vlSelf->data_in >> (0x1fU 
                                               & vlSelf->configurable_clz_clo__DOT__i)))) {
                    vlSelf->count_out = (0x3fU & ((IData)(0x1fU) 
                                                  - vlSelf->configurable_clz_clo__DOT__i));
                    goto __Vlabel2;
                }
                vlSelf->configurable_clz_clo__DOT__i 
                    = (vlSelf->configurable_clz_clo__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel2: ;
        }
    }
}

VL_ATTR_COLD void Vconfigurable_clz_clo___024root___eval_stl(Vconfigurable_clz_clo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_clz_clo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_clz_clo___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vconfigurable_clz_clo___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vconfigurable_clz_clo___024root___eval_triggers__stl(Vconfigurable_clz_clo___024root* vlSelf);

VL_ATTR_COLD bool Vconfigurable_clz_clo___024root___eval_phase__stl(Vconfigurable_clz_clo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_clz_clo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_clz_clo___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vconfigurable_clz_clo___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vconfigurable_clz_clo___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_clz_clo___024root___dump_triggers__ico(Vconfigurable_clz_clo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_clz_clo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_clz_clo___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vconfigurable_clz_clo___024root___dump_triggers__act(Vconfigurable_clz_clo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_clz_clo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_clz_clo___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_clz_clo___024root___dump_triggers__nba(Vconfigurable_clz_clo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_clz_clo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_clz_clo___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vconfigurable_clz_clo___024root___ctor_var_reset(Vconfigurable_clz_clo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_clz_clo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_clz_clo___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->data_in = VL_RAND_RESET_I(32);
    vlSelf->count_ones = VL_RAND_RESET_I(1);
    vlSelf->count_out = VL_RAND_RESET_I(6);
    vlSelf->all_zeros = VL_RAND_RESET_I(1);
    vlSelf->all_ones = VL_RAND_RESET_I(1);
    vlSelf->configurable_clz_clo__DOT__i = VL_RAND_RESET_I(32);
}
