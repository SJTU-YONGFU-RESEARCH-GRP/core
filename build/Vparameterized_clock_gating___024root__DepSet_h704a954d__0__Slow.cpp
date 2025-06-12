// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vparameterized_clock_gating.h for the primary calling header

#include "Vparameterized_clock_gating__pch.h"
#include "Vparameterized_clock_gating__Syms.h"
#include "Vparameterized_clock_gating___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vparameterized_clock_gating___024root___dump_triggers__stl(Vparameterized_clock_gating___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vparameterized_clock_gating___024root___eval_triggers__stl(Vparameterized_clock_gating___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_clock_gating___024root___eval_triggers__stl\n"); );
    Vparameterized_clock_gating__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vparameterized_clock_gating___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
