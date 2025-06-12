// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vnon_restoring_divider__Syms.h"


void Vnon_restoring_divider___024root__trace_chg_0_sub_0(Vnon_restoring_divider___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vnon_restoring_divider___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnon_restoring_divider___024root__trace_chg_0\n"); );
    // Init
    Vnon_restoring_divider___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnon_restoring_divider___024root*>(voidSelf);
    Vnon_restoring_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vnon_restoring_divider___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vnon_restoring_divider___024root__trace_chg_0_sub_0(Vnon_restoring_divider___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnon_restoring_divider___024root__trace_chg_0_sub_0\n"); );
    Vnon_restoring_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.non_restoring_divider__DOT__state),2);
        bufp->chgCData(oldp+1,(vlSelfRef.non_restoring_divider__DOT__div_reg),8);
        bufp->chgCData(oldp+2,(vlSelfRef.non_restoring_divider__DOT__quot),8);
        bufp->chgCData(oldp+3,(vlSelfRef.non_restoring_divider__DOT__rem),8);
        bufp->chgCData(oldp+4,(vlSelfRef.non_restoring_divider__DOT__iter),4);
    }
    bufp->chgBit(oldp+5,(vlSelfRef.clk));
    bufp->chgBit(oldp+6,(vlSelfRef.rst_n));
    bufp->chgBit(oldp+7,(vlSelfRef.start));
    bufp->chgCData(oldp+8,(vlSelfRef.dividend),8);
    bufp->chgCData(oldp+9,(vlSelfRef.divisor),8);
    bufp->chgCData(oldp+10,(vlSelfRef.quotient),8);
    bufp->chgCData(oldp+11,(vlSelfRef.remainder),8);
    bufp->chgBit(oldp+12,(vlSelfRef.valid));
    bufp->chgBit(oldp+13,(vlSelfRef.busy));
    bufp->chgBit(oldp+14,(vlSelfRef.error));
}

void Vnon_restoring_divider___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnon_restoring_divider___024root__trace_cleanup\n"); );
    // Init
    Vnon_restoring_divider___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnon_restoring_divider___024root*>(voidSelf);
    Vnon_restoring_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
