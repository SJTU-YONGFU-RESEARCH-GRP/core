// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vleading_zero_counter__Syms.h"


void Vleading_zero_counter___024root__trace_chg_0_sub_0(Vleading_zero_counter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vleading_zero_counter___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleading_zero_counter___024root__trace_chg_0\n"); );
    // Init
    Vleading_zero_counter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vleading_zero_counter___024root*>(voidSelf);
    Vleading_zero_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vleading_zero_counter___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vleading_zero_counter___024root__trace_chg_0_sub_0(Vleading_zero_counter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vleading_zero_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleading_zero_counter___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgIData(oldp+0,(vlSelf->data_in),32);
    bufp->chgCData(oldp+1,(vlSelf->zero_count),6);
    bufp->chgBit(oldp+2,(vlSelf->valid_input));
    bufp->chgIData(oldp+3,(vlSelf->leading_zero_counter__DOT__i),32);
}

void Vleading_zero_counter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleading_zero_counter___024root__trace_cleanup\n"); );
    // Init
    Vleading_zero_counter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vleading_zero_counter___024root*>(voidSelf);
    Vleading_zero_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
