// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconfigurable_mesh_router.h for the primary calling header

#include "Vconfigurable_mesh_router__pch.h"
#include "Vconfigurable_mesh_router__Syms.h"
#include "Vconfigurable_mesh_router___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_mesh_router___024root___dump_triggers__stl(Vconfigurable_mesh_router___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vconfigurable_mesh_router___024root___eval_triggers__stl(Vconfigurable_mesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_mesh_router___024root___eval_triggers__stl\n"); );
    Vconfigurable_mesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vconfigurable_mesh_router___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
