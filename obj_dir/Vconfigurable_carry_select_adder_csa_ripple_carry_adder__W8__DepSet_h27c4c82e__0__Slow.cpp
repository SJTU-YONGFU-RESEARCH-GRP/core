// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconfigurable_carry_select_adder.h for the primary calling header

#include "Vconfigurable_carry_select_adder__pch.h"
#include "Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8.h"

VL_ATTR_COLD void Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ctor_var_reset(Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vconfigurable_carry_select_adder_csa_ripple_carry_adder__W8___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(8);
    vlSelf->b = VL_RAND_RESET_I(8);
    vlSelf->cin = VL_RAND_RESET_I(1);
    vlSelf->sum = VL_RAND_RESET_I(8);
    vlSelf->cout = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__full_adders__BRA__1__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__full_adders__BRA__2__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__full_adders__BRA__3__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__full_adders__BRA__4__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__full_adders__BRA__5__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__full_adders__BRA__6__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__full_adders__BRA__7__KET____DOT__fa__cin = VL_RAND_RESET_I(1);
}
