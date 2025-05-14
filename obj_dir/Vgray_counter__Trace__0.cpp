// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vgray_counter__Syms.h"


void Vgray_counter___024root__trace_chg_0_sub_0(Vgray_counter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vgray_counter___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgray_counter___024root__trace_chg_0\n"); );
    // Init
    Vgray_counter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vgray_counter___024root*>(voidSelf);
    Vgray_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vgray_counter___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vgray_counter___024root__trace_chg_0_sub_0(Vgray_counter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vgray_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgray_counter___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->rst_n));
    bufp->chgBit(oldp+2,(vlSelf->enable));
    bufp->chgCData(oldp+3,(vlSelf->gray_out),4);
    bufp->chgCData(oldp+4,(vlSelf->binary_out),4);
    bufp->chgCData(oldp+5,(vlSelf->gray_counter__DOT__binary_count),4);
}

void Vgray_counter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgray_counter___024root__trace_cleanup\n"); );
    // Init
    Vgray_counter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vgray_counter___024root*>(voidSelf);
    Vgray_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
