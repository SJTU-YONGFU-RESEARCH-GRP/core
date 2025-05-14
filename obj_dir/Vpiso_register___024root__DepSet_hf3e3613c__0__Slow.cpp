// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpiso_register.h for the primary calling header

#include "Vpiso_register__pch.h"
#include "Vpiso_register__Syms.h"
#include "Vpiso_register___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpiso_register___024root___dump_triggers__stl(Vpiso_register___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpiso_register___024root___eval_triggers__stl(Vpiso_register___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpiso_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpiso_register___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpiso_register___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
