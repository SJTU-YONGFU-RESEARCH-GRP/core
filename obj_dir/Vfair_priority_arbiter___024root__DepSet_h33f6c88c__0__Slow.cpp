// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfair_priority_arbiter.h for the primary calling header

#include "Vfair_priority_arbiter__pch.h"
#include "Vfair_priority_arbiter__Syms.h"
#include "Vfair_priority_arbiter___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfair_priority_arbiter___024root___dump_triggers__stl(Vfair_priority_arbiter___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfair_priority_arbiter___024root___eval_triggers__stl(Vfair_priority_arbiter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfair_priority_arbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfair_priority_arbiter___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfair_priority_arbiter___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
