// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vconfigurable_fp_adder__Syms.h"


void Vconfigurable_fp_adder___024root__trace_chg_0_sub_0(Vconfigurable_fp_adder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vconfigurable_fp_adder___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fp_adder___024root__trace_chg_0\n"); );
    // Init
    Vconfigurable_fp_adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconfigurable_fp_adder___024root*>(voidSelf);
    Vconfigurable_fp_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vconfigurable_fp_adder___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vconfigurable_fp_adder___024root__trace_chg_0_sub_0(Vconfigurable_fp_adder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_fp_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fp_adder___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgIData(oldp+0,(vlSelf->a),32);
    bufp->chgIData(oldp+1,(vlSelf->b),32);
    bufp->chgIData(oldp+2,(vlSelf->result),32);
}

void Vconfigurable_fp_adder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fp_adder___024root__trace_cleanup\n"); );
    // Init
    Vconfigurable_fp_adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconfigurable_fp_adder___024root*>(voidSelf);
    Vconfigurable_fp_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
