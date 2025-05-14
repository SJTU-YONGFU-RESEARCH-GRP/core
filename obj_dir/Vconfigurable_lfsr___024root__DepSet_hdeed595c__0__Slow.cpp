// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconfigurable_lfsr.h for the primary calling header

#include "Vconfigurable_lfsr__pch.h"
#include "Vconfigurable_lfsr__Syms.h"
#include "Vconfigurable_lfsr___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_lfsr___024root___dump_triggers__stl(Vconfigurable_lfsr___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vconfigurable_lfsr___024root___eval_triggers__stl(Vconfigurable_lfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_lfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_lfsr___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vconfigurable_lfsr___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
