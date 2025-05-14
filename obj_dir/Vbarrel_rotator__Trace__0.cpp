// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbarrel_rotator__Syms.h"


void Vbarrel_rotator___024root__trace_chg_0_sub_0(Vbarrel_rotator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vbarrel_rotator___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_rotator___024root__trace_chg_0\n"); );
    // Init
    Vbarrel_rotator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbarrel_rotator___024root*>(voidSelf);
    Vbarrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vbarrel_rotator___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vbarrel_rotator___024root__trace_chg_0_sub_0(Vbarrel_rotator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vbarrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_rotator___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelf->data_in),8);
    bufp->chgCData(oldp+1,(vlSelf->rotate_amount),3);
    bufp->chgBit(oldp+2,(vlSelf->direction));
    bufp->chgCData(oldp+3,(vlSelf->data_out),8);
}

void Vbarrel_rotator___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_rotator___024root__trace_cleanup\n"); );
    // Init
    Vbarrel_rotator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbarrel_rotator___024root*>(voidSelf);
    Vbarrel_rotator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
