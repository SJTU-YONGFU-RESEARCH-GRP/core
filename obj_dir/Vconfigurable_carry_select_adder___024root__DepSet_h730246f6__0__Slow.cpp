// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconfigurable_carry_select_adder.h for the primary calling header

#include "Vconfigurable_carry_select_adder__pch.h"
#include "Vconfigurable_carry_select_adder__Syms.h"
#include "Vconfigurable_carry_select_adder___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root___dump_triggers__stl(Vconfigurable_carry_select_adder___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root___eval_triggers__stl(Vconfigurable_carry_select_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
    vlSelf->__VstlTriggered.set(1U, ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__configurable_carry_select_adder__DOT__block_carry__0)));
    vlSelf->__Vtrigprevexpr___TOP__configurable_carry_select_adder__DOT__block_carry__0 
        = vlSelf->configurable_carry_select_adder__DOT__block_carry;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vconfigurable_carry_select_adder___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
