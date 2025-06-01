// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmulti_ported_fifo.h for the primary calling header

#include "Vmulti_ported_fifo__pch.h"
#include "Vmulti_ported_fifo__Syms.h"
#include "Vmulti_ported_fifo___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmulti_ported_fifo___024root___dump_triggers__stl(Vmulti_ported_fifo___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmulti_ported_fifo___024root___eval_triggers__stl(Vmulti_ported_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_ported_fifo___024root___eval_triggers__stl\n"); );
    Vmulti_ported_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmulti_ported_fifo___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
