// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmesh_router.h for the primary calling header

#include "Vmesh_router__pch.h"
#include "Vmesh_router__Syms.h"
#include "Vmesh_router___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmesh_router___024root___dump_triggers__stl(Vmesh_router___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmesh_router___024root___eval_triggers__stl(Vmesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_router___024root___eval_triggers__stl\n"); );
    Vmesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmesh_router___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
