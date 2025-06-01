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
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root__trace_chg_0_sub_0\n"); );
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.configurable_sync_fifo__DOT__memory[0]),8);
        bufp->chgCData(oldp+1,(vlSelfRef.configurable_sync_fifo__DOT__memory[1]),8);
        bufp->chgCData(oldp+2,(vlSelfRef.configurable_sync_fifo__DOT__memory[2]),8);
        bufp->chgCData(oldp+3,(vlSelfRef.configurable_sync_fifo__DOT__memory[3]),8);
        bufp->chgCData(oldp+4,(vlSelfRef.configurable_sync_fifo__DOT__memory[4]),8);
        bufp->chgCData(oldp+5,(vlSelfRef.configurable_sync_fifo__DOT__memory[5]),8);
        bufp->chgCData(oldp+6,(vlSelfRef.configurable_sync_fifo__DOT__memory[6]),8);
        bufp->chgCData(oldp+7,(vlSelfRef.configurable_sync_fifo__DOT__memory[7]),8);
        bufp->chgCData(oldp+8,(vlSelfRef.configurable_sync_fifo__DOT__memory[8]),8);
        bufp->chgCData(oldp+9,(vlSelfRef.configurable_sync_fifo__DOT__memory[9]),8);
        bufp->chgCData(oldp+10,(vlSelfRef.configurable_sync_fifo__DOT__memory[10]),8);
        bufp->chgCData(oldp+11,(vlSelfRef.configurable_sync_fifo__DOT__memory[11]),8);
        bufp->chgCData(oldp+12,(vlSelfRef.configurable_sync_fifo__DOT__memory[12]),8);
        bufp->chgCData(oldp+13,(vlSelfRef.configurable_sync_fifo__DOT__memory[13]),8);
        bufp->chgCData(oldp+14,(vlSelfRef.configurable_sync_fifo__DOT__memory[14]),8);
        bufp->chgCData(oldp+15,(vlSelfRef.configurable_sync_fifo__DOT__memory[15]),8);
        bufp->chgCData(oldp+16,(vlSelfRef.configurable_sync_fifo__DOT__wr_ptr),4);
        bufp->chgCData(oldp+17,(vlSelfRef.configurable_sync_fifo__DOT__rd_ptr),4);
        bufp->chgCData(oldp+18,(vlSelfRef.configurable_sync_fifo__DOT__count),5);
    }
    bufp->chgBit(oldp+19,(vlSelfRef.clk));
    bufp->chgBit(oldp+20,(vlSelfRef.rst_n));
    bufp->chgBit(oldp+21,(vlSelfRef.wr_en));
    bufp->chgBit(oldp+22,(vlSelfRef.rd_en));
    bufp->chgCData(oldp+23,(vlSelfRef.data_in),8);
    bufp->chgCData(oldp+24,(vlSelfRef.data_out),8);
    bufp->chgBit(oldp+25,(vlSelfRef.full));
    bufp->chgBit(oldp+26,(vlSelfRef.empty));
    bufp->chgBit(oldp+27,(vlSelfRef.almost_full));
    bufp->chgBit(oldp+28,(vlSelfRef.almost_empty));
    bufp->chgCData(oldp+29,(vlSelfRef.fill_level),5);
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
