// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcrossbar_switch__Syms.h"


void Vcrossbar_switch___024root__trace_chg_0_sub_0(Vcrossbar_switch___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcrossbar_switch___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrossbar_switch___024root__trace_chg_0\n"); );
    // Init
    Vcrossbar_switch___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcrossbar_switch___024root*>(voidSelf);
    Vcrossbar_switch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcrossbar_switch___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcrossbar_switch___024root__trace_chg_0_sub_0(Vcrossbar_switch___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrossbar_switch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrossbar_switch___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->crossbar_switch__DOT__i),32);
        bufp->chgCData(oldp+1,(vlSelf->crossbar_switch__DOT__sel_idx),2);
        bufp->chgCData(oldp+2,(vlSelf->crossbar_switch__DOT__selected_data),8);
    }
    bufp->chgBit(oldp+3,(vlSelf->clk));
    bufp->chgBit(oldp+4,(vlSelf->rst_n));
    bufp->chgIData(oldp+5,(vlSelf->data_in),32);
    bufp->chgCData(oldp+6,(vlSelf->select),8);
    bufp->chgIData(oldp+7,(vlSelf->data_out),32);
}

void Vcrossbar_switch___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrossbar_switch___024root__trace_cleanup\n"); );
    // Init
    Vcrossbar_switch___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcrossbar_switch___024root*>(voidSelf);
    Vcrossbar_switch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
