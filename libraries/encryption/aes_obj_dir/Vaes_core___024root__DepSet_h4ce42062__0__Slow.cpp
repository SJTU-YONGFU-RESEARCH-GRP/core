// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_core.h for the primary calling header

#include "Vaes_core__pch.h"
#include "Vaes_core__Syms.h"
#include "Vaes_core___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_core___024root___dump_triggers__stl(Vaes_core___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vaes_core___024root___eval_triggers__stl(Vaes_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root___eval_triggers__stl\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
    vlSelfRef.__VstlTriggered.setBit(1U, vlSelfRef.__Vtrigprevexpr___TOP__aes_core__DOT__w__0.neq(vlSelfRef.aes_core__DOT__w));
    vlSelfRef.__Vtrigprevexpr___TOP__aes_core__DOT__w__0.assign(vlSelfRef.aes_core__DOT__w);
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered.setBit(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vaes_core___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
