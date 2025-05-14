// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgray_to_binary.h for the primary calling header

#include "Vgray_to_binary__pch.h"
#include "Vgray_to_binary__Syms.h"
#include "Vgray_to_binary___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgray_to_binary___024root___dump_triggers__ico(Vgray_to_binary___024root* vlSelf);
#endif  // VL_DEBUG

void Vgray_to_binary___024root___eval_triggers__ico(Vgray_to_binary___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vgray_to_binary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgray_to_binary___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vgray_to_binary___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgray_to_binary___024root___dump_triggers__act(Vgray_to_binary___024root* vlSelf);
#endif  // VL_DEBUG

void Vgray_to_binary___024root___eval_triggers__act(Vgray_to_binary___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vgray_to_binary__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgray_to_binary___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vgray_to_binary___024root___dump_triggers__act(vlSelf);
    }
#endif
}
