// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsipo_register.h for the primary calling header

#include "Vsipo_register__pch.h"
#include "Vsipo_register__Syms.h"
#include "Vsipo_register___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsipo_register___024root___dump_triggers__stl(Vsipo_register___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsipo_register___024root___eval_triggers__stl(Vsipo_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsipo_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsipo_register___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsipo_register___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
