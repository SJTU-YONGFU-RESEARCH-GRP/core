// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconfigurable_fp_adder.h for the primary calling header

#include "Vconfigurable_fp_adder__pch.h"
#include "Vconfigurable_fp_adder__Syms.h"
#include "Vconfigurable_fp_adder___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_fp_adder___024root___dump_triggers__stl(Vconfigurable_fp_adder___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vconfigurable_fp_adder___024root___eval_triggers__stl(Vconfigurable_fp_adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_fp_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fp_adder___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vconfigurable_fp_adder___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
