// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vclock_divider__Syms.h"


void Vclock_divider___024root__trace_chg_0_sub_0(Vclock_divider___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vclock_divider___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_divider___024root__trace_chg_0\n"); );
    // Init
    Vclock_divider___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vclock_divider___024root*>(voidSelf);
    Vclock_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vclock_divider___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vclock_divider___024root__trace_chg_0_sub_0(Vclock_divider___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_divider___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk_in));
    bufp->chgBit(oldp+1,(vlSelf->rst_n));
    bufp->chgCData(oldp+2,(vlSelf->div_ratio),8);
    bufp->chgCData(oldp+3,(vlSelf->duty_cycle),8);
    bufp->chgBit(oldp+4,(vlSelf->clk_out));
    bufp->chgSData(oldp+5,(vlSelf->clock_divider__DOT__counter),9);
    bufp->chgSData(oldp+6,((0x1ffU & VL_DIV_III(32, 
                                                ((IData)(vlSelf->div_ratio) 
                                                 * (IData)(vlSelf->duty_cycle)), (IData)(0xffU)))),9);
}

void Vclock_divider___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_divider___024root__trace_cleanup\n"); );
    // Init
    Vclock_divider___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vclock_divider___024root*>(voidSelf);
    Vclock_divider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
