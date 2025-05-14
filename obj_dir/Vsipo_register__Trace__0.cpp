// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsipo_register__Syms.h"


void Vsipo_register___024root__trace_chg_0_sub_0(Vsipo_register___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsipo_register___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsipo_register___024root__trace_chg_0\n"); );
    // Init
    Vsipo_register___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsipo_register___024root*>(voidSelf);
    Vsipo_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsipo_register___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsipo_register___024root__trace_chg_0_sub_0(Vsipo_register___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsipo_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsipo_register___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->sipo_register__DOT__shift_reg),8);
        bufp->chgBit(oldp+1,(vlSelf->sipo_register__DOT__parity_bit));
        bufp->chgIData(oldp+2,(vlSelf->sipo_register__DOT__count_ones__Vstatic__i),32);
        bufp->chgIData(oldp+3,(vlSelf->sipo_register__DOT__count_ones__Vstatic__count),32);
        bufp->chgCData(oldp+4,(vlSelf->sipo_register__DOT__unnamedblk1__DOT__next_shift_reg),8);
    }
    bufp->chgBit(oldp+5,(vlSelf->clk));
    bufp->chgBit(oldp+6,(vlSelf->rst_n));
    bufp->chgBit(oldp+7,(vlSelf->serial_in));
    bufp->chgBit(oldp+8,(vlSelf->enable));
    bufp->chgCData(oldp+9,(vlSelf->parallel_out),8);
    bufp->chgBit(oldp+10,(vlSelf->parity_out));
}

void Vsipo_register___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsipo_register___024root__trace_cleanup\n"); );
    // Init
    Vsipo_register___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsipo_register___024root*>(voidSelf);
    Vsipo_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
