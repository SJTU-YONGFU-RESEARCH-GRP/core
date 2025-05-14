// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfair_priority_arbiter__Syms.h"


void Vfair_priority_arbiter___024root__trace_chg_0_sub_0(Vfair_priority_arbiter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vfair_priority_arbiter___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfair_priority_arbiter___024root__trace_chg_0\n"); );
    // Init
    Vfair_priority_arbiter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfair_priority_arbiter___024root*>(voidSelf);
    Vfair_priority_arbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vfair_priority_arbiter___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vfair_priority_arbiter___024root__trace_chg_0_sub_0(Vfair_priority_arbiter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vfair_priority_arbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfair_priority_arbiter___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->fair_priority_arbiter__DOT__priority_values[0]),2);
        bufp->chgCData(oldp+1,(vlSelf->fair_priority_arbiter__DOT__priority_values[1]),2);
        bufp->chgCData(oldp+2,(vlSelf->fair_priority_arbiter__DOT__priority_values[2]),2);
        bufp->chgCData(oldp+3,(vlSelf->fair_priority_arbiter__DOT__priority_values[3]),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+4,(vlSelf->fair_priority_arbiter__DOT__last_grant_idx),2);
        bufp->chgCData(oldp+5,(vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__highest_priority),2);
        bufp->chgCData(oldp+6,(vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__highest_idx),2);
        bufp->chgBit(oldp+7,(vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__found));
        bufp->chgCData(oldp+8,(vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__current_idx),2);
        bufp->chgIData(oldp+9,(vlSelf->fair_priority_arbiter__DOT__unnamedblk2__DOT__unnamedblk3__DOT__loop_j),32);
    }
    bufp->chgBit(oldp+10,(vlSelf->clk));
    bufp->chgBit(oldp+11,(vlSelf->rst_n));
    bufp->chgCData(oldp+12,(vlSelf->request),4);
    bufp->chgCData(oldp+13,(vlSelf->priorities),8);
    bufp->chgCData(oldp+14,(vlSelf->grant),4);
    bufp->chgCData(oldp+15,(vlSelf->grant_idx),2);
    bufp->chgBit(oldp+16,(vlSelf->valid));
}

void Vfair_priority_arbiter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfair_priority_arbiter___024root__trace_cleanup\n"); );
    // Init
    Vfair_priority_arbiter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfair_priority_arbiter___024root*>(voidSelf);
    Vfair_priority_arbiter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
