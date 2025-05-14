// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlfsr.h for the primary calling header

#include "Vlfsr__pch.h"
#include "Vlfsr__Syms.h"
#include "Vlfsr___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlfsr___024root___dump_triggers__stl(Vlfsr___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vlfsr___024root___eval_triggers__stl(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vlfsr___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
