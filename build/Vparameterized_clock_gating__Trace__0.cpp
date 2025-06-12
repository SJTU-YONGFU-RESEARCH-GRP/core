// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vparameterized_clock_gating__Syms.h"


void Vparameterized_clock_gating___024root__trace_chg_0_sub_0(Vparameterized_clock_gating___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vparameterized_clock_gating___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_clock_gating___024root__trace_chg_0\n"); );
    // Init
    Vparameterized_clock_gating___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vparameterized_clock_gating___024root*>(voidSelf);
    Vparameterized_clock_gating__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vparameterized_clock_gating___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vparameterized_clock_gating___024root__trace_chg_0_sub_0(Vparameterized_clock_gating___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_clock_gating___024root__trace_chg_0_sub_0\n"); );
    Vparameterized_clock_gating__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.clk_in));
    bufp->chgBit(oldp+1,(vlSelfRef.enable));
    bufp->chgBit(oldp+2,(vlSelfRef.test_mode));
    bufp->chgBit(oldp+3,(vlSelfRef.clk_out));
    bufp->chgBit(oldp+4,((1U & ((IData)(vlSelfRef.parameterized_clock_gating__DOT__gen_sync__DOT__enable_sync_reg) 
                                >> 1U))));
    bufp->chgBit(oldp+5,(vlSelfRef.parameterized_clock_gating__DOT__enable_latch));
    bufp->chgCData(oldp+6,(vlSelfRef.parameterized_clock_gating__DOT__gen_sync__DOT__enable_sync_reg),2);
}

void Vparameterized_clock_gating___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_clock_gating___024root__trace_cleanup\n"); );
    // Init
    Vparameterized_clock_gating___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vparameterized_clock_gating___024root*>(voidSelf);
    Vparameterized_clock_gating__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
