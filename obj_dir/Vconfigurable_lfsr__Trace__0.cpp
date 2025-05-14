// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vconfigurable_lfsr__Syms.h"


void Vconfigurable_lfsr___024root__trace_chg_0_sub_0(Vconfigurable_lfsr___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vconfigurable_lfsr___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_lfsr___024root__trace_chg_0\n"); );
    // Init
    Vconfigurable_lfsr___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconfigurable_lfsr___024root*>(voidSelf);
    Vconfigurable_lfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vconfigurable_lfsr___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vconfigurable_lfsr___024root__trace_chg_0_sub_0(Vconfigurable_lfsr___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_lfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_lfsr___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->rst_n));
    bufp->chgBit(oldp+2,(vlSelf->enable));
    bufp->chgCData(oldp+3,(vlSelf->seed),8);
    bufp->chgCData(oldp+4,(vlSelf->tap_pattern),8);
    bufp->chgBit(oldp+5,(vlSelf->load_seed));
    bufp->chgBit(oldp+6,(vlSelf->serial_out));
    bufp->chgCData(oldp+7,(vlSelf->parallel_out),8);
    bufp->chgCData(oldp+8,(vlSelf->configurable_lfsr__DOT__shift_reg),8);
    bufp->chgBit(oldp+9,(vlSelf->configurable_lfsr__DOT__multi_bit__DOT__xor_result));
    bufp->chgCData(oldp+10,(vlSelf->configurable_lfsr__DOT__multi_bit__DOT__tapped_bits),8);
}

void Vconfigurable_lfsr___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_lfsr___024root__trace_cleanup\n"); );
    // Init
    Vconfigurable_lfsr___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconfigurable_lfsr___024root*>(voidSelf);
    Vconfigurable_lfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
