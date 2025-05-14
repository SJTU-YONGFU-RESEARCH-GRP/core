// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbinary_to_gray.h for the primary calling header

#include "Vbinary_to_gray__pch.h"
#include "Vbinary_to_gray__Syms.h"
#include "Vbinary_to_gray___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbinary_to_gray___024root___dump_triggers__ico(Vbinary_to_gray___024root* vlSelf);
#endif  // VL_DEBUG

void Vbinary_to_gray___024root___eval_triggers__ico(Vbinary_to_gray___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbinary_to_gray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbinary_to_gray___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbinary_to_gray___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbinary_to_gray___024root___dump_triggers__act(Vbinary_to_gray___024root* vlSelf);
#endif  // VL_DEBUG

void Vbinary_to_gray___024root___eval_triggers__act(Vbinary_to_gray___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbinary_to_gray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbinary_to_gray___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbinary_to_gray___024root___dump_triggers__act(vlSelf);
    }
#endif
}
