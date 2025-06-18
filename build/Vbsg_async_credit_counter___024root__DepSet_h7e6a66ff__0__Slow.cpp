// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbsg_async_credit_counter.h for the primary calling header

#include "Vbsg_async_credit_counter__pch.h"
#include "Vbsg_async_credit_counter__Syms.h"
#include "Vbsg_async_credit_counter___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbsg_async_credit_counter___024root___dump_triggers__stl(Vbsg_async_credit_counter___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbsg_async_credit_counter___024root___eval_triggers__stl(Vbsg_async_credit_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_async_credit_counter___024root___eval_triggers__stl\n"); );
    Vbsg_async_credit_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbsg_async_credit_counter___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
