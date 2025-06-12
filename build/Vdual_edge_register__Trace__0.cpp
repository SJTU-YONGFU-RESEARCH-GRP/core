// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdual_edge_register__Syms.h"


void Vdual_edge_register___024root__trace_chg_0_sub_0(Vdual_edge_register___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdual_edge_register___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_edge_register___024root__trace_chg_0\n"); );
    // Init
    Vdual_edge_register___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdual_edge_register___024root*>(voidSelf);
    Vdual_edge_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdual_edge_register___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vdual_edge_register___024root__trace_chg_0_sub_0(Vdual_edge_register___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_edge_register___024root__trace_chg_0_sub_0\n"); );
    Vdual_edge_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rst_n));
    bufp->chgBit(oldp+2,(vlSelfRef.enable));
    bufp->chgCData(oldp+3,(vlSelfRef.data_in),8);
    bufp->chgCData(oldp+4,(vlSelfRef.data_out),8);
    bufp->chgCData(oldp+5,(vlSelfRef.dual_edge_register__DOT__posedge_reg),8);
    bufp->chgCData(oldp+6,(vlSelfRef.dual_edge_register__DOT__negedge_reg),8);
}

void Vdual_edge_register___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_edge_register___024root__trace_cleanup\n"); );
    // Init
    Vdual_edge_register___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdual_edge_register___024root*>(voidSelf);
    Vdual_edge_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
