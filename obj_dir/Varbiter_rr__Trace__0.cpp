// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Varbiter_rr__Syms.h"


void Varbiter_rr___024root__trace_chg_0_sub_0(Varbiter_rr___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Varbiter_rr___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varbiter_rr___024root__trace_chg_0\n"); );
    // Init
    Varbiter_rr___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Varbiter_rr___024root*>(voidSelf);
    Varbiter_rr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Varbiter_rr___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Varbiter_rr___024root__trace_chg_0_sub_0(Varbiter_rr___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Varbiter_rr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varbiter_rr___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->arbiter_rr__DOT__priority_ptr),2);
        bufp->chgIData(oldp+1,(vlSelf->arbiter_rr__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+2,(vlSelf->arbiter_rr__DOT__unnamedblk2__DOT__check_idx),32);
        bufp->chgIData(oldp+3,(vlSelf->arbiter_rr__DOT__unnamedblk2__DOT__ptr),32);
        bufp->chgBit(oldp+4,(vlSelf->arbiter_rr__DOT__unnamedblk2__DOT__granted));
    }
    bufp->chgBit(oldp+5,(vlSelf->clk));
    bufp->chgBit(oldp+6,(vlSelf->rst_n));
    bufp->chgCData(oldp+7,(vlSelf->request),4);
    bufp->chgCData(oldp+8,(vlSelf->grant),4);
    bufp->chgBit(oldp+9,(vlSelf->active));
}

void Varbiter_rr___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Varbiter_rr___024root__trace_cleanup\n"); );
    // Init
    Varbiter_rr___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Varbiter_rr___024root*>(voidSelf);
    Varbiter_rr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
