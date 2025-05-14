// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vlfsr__Syms.h"


void Vlfsr___024root__trace_chg_0_sub_0(Vlfsr___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vlfsr___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root__trace_chg_0\n"); );
    // Init
    Vlfsr___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlfsr___024root*>(voidSelf);
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vlfsr___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vlfsr___024root__trace_chg_0_sub_0(Vlfsr___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->rst_n));
    bufp->chgBit(oldp+2,(vlSelf->enable));
    bufp->chgBit(oldp+3,(vlSelf->load));
    bufp->chgCData(oldp+4,(vlSelf->seed),8);
    bufp->chgCData(oldp+5,(vlSelf->lfsr_out),8);
    bufp->chgBit(oldp+6,(vlSelf->bit_out));
    bufp->chgCData(oldp+7,(vlSelf->lfsr__DOT__lfsr_reg),8);
    bufp->chgBit(oldp+8,((1U & VL_REDXOR_32((0xb8U 
                                             & (IData)(vlSelf->lfsr__DOT__lfsr_reg))))));
}

void Vlfsr___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root__trace_cleanup\n"); );
    // Init
    Vlfsr___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlfsr___024root*>(voidSelf);
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
