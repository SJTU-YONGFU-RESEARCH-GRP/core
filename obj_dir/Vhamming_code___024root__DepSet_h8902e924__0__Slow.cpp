// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhamming_code.h for the primary calling header

#include "Vhamming_code__pch.h"
#include "Vhamming_code__Syms.h"
#include "Vhamming_code___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhamming_code___024root___dump_triggers__stl(Vhamming_code___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vhamming_code___024root___eval_triggers__stl(Vhamming_code___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhamming_code__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_code___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vhamming_code___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
