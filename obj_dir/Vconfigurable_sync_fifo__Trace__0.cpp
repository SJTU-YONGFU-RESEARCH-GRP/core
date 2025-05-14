// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vconfigurable_sync_fifo__Syms.h"


void Vconfigurable_sync_fifo___024root__trace_chg_0_sub_0(Vconfigurable_sync_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vconfigurable_sync_fifo___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root__trace_chg_0\n"); );
    // Init
    Vconfigurable_sync_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconfigurable_sync_fifo___024root*>(voidSelf);
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vconfigurable_sync_fifo___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vconfigurable_sync_fifo___024root__trace_chg_0_sub_0(Vconfigurable_sync_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->configurable_sync_fifo__DOT__mem[0]),8);
        bufp->chgCData(oldp+1,(vlSelf->configurable_sync_fifo__DOT__mem[1]),8);
        bufp->chgCData(oldp+2,(vlSelf->configurable_sync_fifo__DOT__mem[2]),8);
        bufp->chgCData(oldp+3,(vlSelf->configurable_sync_fifo__DOT__mem[3]),8);
        bufp->chgCData(oldp+4,(vlSelf->configurable_sync_fifo__DOT__mem[4]),8);
        bufp->chgCData(oldp+5,(vlSelf->configurable_sync_fifo__DOT__mem[5]),8);
        bufp->chgCData(oldp+6,(vlSelf->configurable_sync_fifo__DOT__mem[6]),8);
        bufp->chgCData(oldp+7,(vlSelf->configurable_sync_fifo__DOT__mem[7]),8);
        bufp->chgCData(oldp+8,(vlSelf->configurable_sync_fifo__DOT__mem[8]),8);
        bufp->chgCData(oldp+9,(vlSelf->configurable_sync_fifo__DOT__mem[9]),8);
        bufp->chgCData(oldp+10,(vlSelf->configurable_sync_fifo__DOT__mem[10]),8);
        bufp->chgCData(oldp+11,(vlSelf->configurable_sync_fifo__DOT__mem[11]),8);
        bufp->chgCData(oldp+12,(vlSelf->configurable_sync_fifo__DOT__mem[12]),8);
        bufp->chgCData(oldp+13,(vlSelf->configurable_sync_fifo__DOT__mem[13]),8);
        bufp->chgCData(oldp+14,(vlSelf->configurable_sync_fifo__DOT__mem[14]),8);
        bufp->chgCData(oldp+15,(vlSelf->configurable_sync_fifo__DOT__mem[15]),8);
    }
    bufp->chgBit(oldp+16,(vlSelf->clk));
    bufp->chgBit(oldp+17,(vlSelf->rst_n));
    bufp->chgBit(oldp+18,(vlSelf->wr_en));
    bufp->chgBit(oldp+19,(vlSelf->rd_en));
    bufp->chgCData(oldp+20,(vlSelf->data_in),8);
    bufp->chgCData(oldp+21,(vlSelf->data_out),8);
    bufp->chgBit(oldp+22,(vlSelf->full));
    bufp->chgBit(oldp+23,(vlSelf->empty));
    bufp->chgBit(oldp+24,(vlSelf->almost_full));
    bufp->chgBit(oldp+25,(vlSelf->almost_empty));
    bufp->chgCData(oldp+26,(vlSelf->fill_level),5);
    bufp->chgCData(oldp+27,(vlSelf->configurable_sync_fifo__DOT__wr_ptr),4);
    bufp->chgCData(oldp+28,(vlSelf->configurable_sync_fifo__DOT__rd_ptr),4);
    bufp->chgCData(oldp+29,(vlSelf->configurable_sync_fifo__DOT__count),5);
    bufp->chgBit(oldp+30,(vlSelf->configurable_sync_fifo__DOT__wr_allow));
    bufp->chgBit(oldp+31,(vlSelf->configurable_sync_fifo__DOT__rd_allow));
}

void Vconfigurable_sync_fifo___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root__trace_cleanup\n"); );
    // Init
    Vconfigurable_sync_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconfigurable_sync_fifo___024root*>(voidSelf);
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
