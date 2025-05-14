// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbarrel_rotator.h for the primary calling header

#include "Vbarrel_rotator__pch.h"
#include "Vbarrel_rotator__Syms.h"
#include "Vbarrel_rotator___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbarrel_rotator___024root___dump_triggers__stl(Vbarrel_rotator___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbarrel_rotator___024root___eval_triggers__stl(Vbarrel_rotator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_rotator___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbarrel_rotator___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
