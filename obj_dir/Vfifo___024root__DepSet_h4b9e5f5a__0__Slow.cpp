// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo.h for the primary calling header

#include "Vfifo__pch.h"
#include "Vfifo__Syms.h"
#include "Vfifo___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo___024root___dump_triggers__stl(Vfifo___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfifo___024root___eval_triggers__stl(Vfifo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfifo___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
