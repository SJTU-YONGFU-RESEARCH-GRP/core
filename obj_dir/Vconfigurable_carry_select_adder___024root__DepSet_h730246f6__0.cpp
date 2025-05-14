// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconfigurable_carry_select_adder.h for the primary calling header

#include "Vconfigurable_carry_select_adder__pch.h"
#include "Vconfigurable_carry_select_adder__Syms.h"
#include "Vconfigurable_carry_select_adder___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root___dump_triggers__ico(Vconfigurable_carry_select_adder___024root* vlSelf);
#endif  // VL_DEBUG

void Vconfigurable_carry_select_adder___024root___eval_triggers__ico(Vconfigurable_carry_select_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
    vlSelf->__VicoTriggered.set(1U, ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__configurable_carry_select_adder__DOT__block_carry__1)));
    vlSelf->__Vtrigprevexpr___TOP__configurable_carry_select_adder__DOT__block_carry__1 
        = vlSelf->configurable_carry_select_adder__DOT__block_carry;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VicoDidInit))))) {
        vlSelf->__VicoDidInit = 1U;
        vlSelf->__VicoTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vconfigurable_carry_select_adder___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_carry_select_adder___024root___dump_triggers__act(Vconfigurable_carry_select_adder___024root* vlSelf);
#endif  // VL_DEBUG

void Vconfigurable_carry_select_adder___024root___eval_triggers__act(Vconfigurable_carry_select_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_carry_select_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_carry_select_adder___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->configurable_carry_select_adder__DOT__block_carry) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__configurable_carry_select_adder__DOT__block_carry__2)));
    vlSelf->__Vtrigprevexpr___TOP__configurable_carry_select_adder__DOT__block_carry__2 
        = vlSelf->configurable_carry_select_adder__DOT__block_carry;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vconfigurable_carry_select_adder___024root___dump_triggers__act(vlSelf);
    }
#endif
}
