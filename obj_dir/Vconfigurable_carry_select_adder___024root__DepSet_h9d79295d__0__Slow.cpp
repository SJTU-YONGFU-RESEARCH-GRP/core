// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconfigurable_carry_select_adder.h for the primary calling header

#include "Vconfigurable_carry_select_adder__pch.h"
#include "Vconfigurable_carry_select_adder___024root.h"

VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root___eval_static(Vconfigurable_carry_select_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root___eval_initial(Vconfigurable_carry_select_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__configurable_carry_select_adder__DOT__block_carry__0 
        = vlSelf->configurable_carry_select_adder__DOT__block_carry;
    vlSelf->__Vtrigprevexpr___TOP__configurable_carry_select_adder__DOT__block_carry__1 
        = vlSelf->configurable_carry_select_adder__DOT__block_carry;
    vlSelf->__Vtrigprevexpr___TOP__configurable_carry_select_adder__DOT__block_carry__2 
        = vlSelf->configurable_carry_select_adder__DOT__block_carry;
}

VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root___eval_final(Vconfigurable_carry_select_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root___dump_triggers__stl(Vconfigurable_carry_select_adder___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vconfigurable_carry_select_adder___024root___eval_phase__stl(Vconfigurable_carry_select_adder___024root* vlSelf);

VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root___eval_settle(Vconfigurable_carry_select_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root___eval_settle\n"); );
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
            Vconfigurable_carry_select_adder___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("configurable_carry_select_adder.v", 5, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vconfigurable_carry_select_adder___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root___dump_triggers__stl(Vconfigurable_carry_select_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] configurable_carry_select_adder.block_carry)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root___stl_sequent__TOP__0(Vconfigurable_carry_select_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__select 
        = (1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                 >> 7U));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__select 
        = (1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                 >> 6U));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__select 
        = (1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                 >> 5U));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__select 
        = (1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                 >> 4U));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__select 
        = (1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                 >> 3U));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__select 
        = (1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                 >> 2U));
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__select 
        = (1U & ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                 >> 1U));
}

void Vconfigurable_carry_select_adder___024root___ico_sequent__TOP__0(Vconfigurable_carry_select_adder___024root* vlSelf);
void Vconfigurable_carry_select_adder___024root___ico_comb__TOP__0(Vconfigurable_carry_select_adder___024root* vlSelf);

VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root___eval_stl(Vconfigurable_carry_select_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root___eval_stl\n"); );
    // Body
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vconfigurable_carry_select_adder___024root___stl_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vconfigurable_carry_select_adder___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((3ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vconfigurable_carry_select_adder___024root___ico_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root___eval_triggers__stl(Vconfigurable_carry_select_adder___024root* vlSelf);

VL_ATTR_COLD bool Vconfigurable_carry_select_adder___024root___eval_phase__stl(Vconfigurable_carry_select_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vconfigurable_carry_select_adder___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vconfigurable_carry_select_adder___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root___dump_triggers__ico(Vconfigurable_carry_select_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: @([hybrid] configurable_carry_select_adder.block_carry)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root___dump_triggers__act(Vconfigurable_carry_select_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] configurable_carry_select_adder.block_carry)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root___dump_triggers__nba(Vconfigurable_carry_select_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] configurable_carry_select_adder.block_carry)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root___ctor_var_reset(Vconfigurable_carry_select_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(32);
    vlSelf->b = VL_RAND_RESET_I(32);
    vlSelf->cin = VL_RAND_RESET_I(1);
    vlSelf->sum = VL_RAND_RESET_I(32);
    vlSelf->cout = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__block_carry = VL_RAND_RESET_I(9);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__cout_cin_0 = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__cout_cin_1 = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__select = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__cout_cin_0 = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__cout_cin_1 = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__select = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__cout_cin_0 = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__cout_cin_1 = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__select = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__cout_cin_0 = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__cout_cin_1 = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__select = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__cout_cin_0 = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__cout_cin_1 = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__select = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__cout_cin_0 = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__cout_cin_1 = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__select = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__cout_cin_0 = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__cout_cin_1 = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__select = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__0__KET____DOT__fa__cout = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__1__KET____DOT__fa__cout = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__2__KET____DOT__fa__cout = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__first_block__DOT____Vcellout__full_adders__BRA__3__KET____DOT__fa__cout = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__1__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__2__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__3__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__4__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__5__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__6__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_0__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->configurable_carry_select_adder__DOT__carry_select_blocks__BRA__7__KET____DOT__adder_1__DOT____Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__configurable_carry_select_adder__DOT__block_carry__0 = VL_RAND_RESET_I(9);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__configurable_carry_select_adder__DOT__block_carry__1 = VL_RAND_RESET_I(9);
    vlSelf->__VicoDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__configurable_carry_select_adder__DOT__block_carry__2 = VL_RAND_RESET_I(9);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
