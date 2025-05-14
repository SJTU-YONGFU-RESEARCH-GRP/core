// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varbiter_rr.h for the primary calling header

#include "Varbiter_rr__pch.h"
#include "Varbiter_rr__Syms.h"
#include "Varbiter_rr___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Varbiter_rr___024root___dump_triggers__stl(Varbiter_rr___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Varbiter_rr___024root___eval_triggers__stl(Varbiter_rr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Varbiter_rr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varbiter_rr___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Varbiter_rr___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
