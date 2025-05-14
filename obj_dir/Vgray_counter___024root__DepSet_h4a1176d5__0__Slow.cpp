// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgray_counter.h for the primary calling header

#include "Vgray_counter__pch.h"
#include "Vgray_counter__Syms.h"
#include "Vgray_counter___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgray_counter___024root___dump_triggers__stl(Vgray_counter___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vgray_counter___024root___eval_triggers__stl(Vgray_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vgray_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgray_counter___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vgray_counter___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
