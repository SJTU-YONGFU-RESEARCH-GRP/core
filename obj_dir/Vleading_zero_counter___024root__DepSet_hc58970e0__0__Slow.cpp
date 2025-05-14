// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vleading_zero_counter.h for the primary calling header

#include "Vleading_zero_counter__pch.h"
#include "Vleading_zero_counter__Syms.h"
#include "Vleading_zero_counter___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vleading_zero_counter___024root___dump_triggers__stl(Vleading_zero_counter___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vleading_zero_counter___024root___eval_triggers__stl(Vleading_zero_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleading_zero_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleading_zero_counter___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vleading_zero_counter___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
