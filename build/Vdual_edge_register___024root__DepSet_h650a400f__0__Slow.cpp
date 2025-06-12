// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdual_edge_register.h for the primary calling header

#include "Vdual_edge_register__pch.h"
#include "Vdual_edge_register__Syms.h"
#include "Vdual_edge_register___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdual_edge_register___024root___dump_triggers__stl(Vdual_edge_register___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdual_edge_register___024root___eval_triggers__stl(Vdual_edge_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_edge_register___024root___eval_triggers__stl\n"); );
    Vdual_edge_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdual_edge_register___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
