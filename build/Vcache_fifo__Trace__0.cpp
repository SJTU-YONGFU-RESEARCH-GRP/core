// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcache_fifo__Syms.h"


void Vcache_fifo___024root__trace_chg_0_sub_0(Vcache_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcache_fifo___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_fifo___024root__trace_chg_0\n"); );
    // Init
    Vcache_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcache_fifo___024root*>(voidSelf);
    Vcache_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcache_fifo___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcache_fifo___024root__trace_chg_0_sub_0(Vcache_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_fifo___024root__trace_chg_0_sub_0\n"); );
    Vcache_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.cache_fifo__DOT__mem[0]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.cache_fifo__DOT__mem[1]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.cache_fifo__DOT__mem[2]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.cache_fifo__DOT__mem[3]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.cache_fifo__DOT__mem[4]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.cache_fifo__DOT__mem[5]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.cache_fifo__DOT__mem[6]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.cache_fifo__DOT__mem[7]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.cache_fifo__DOT__mem[8]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.cache_fifo__DOT__mem[9]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.cache_fifo__DOT__mem[10]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.cache_fifo__DOT__mem[11]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.cache_fifo__DOT__mem[12]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.cache_fifo__DOT__mem[13]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.cache_fifo__DOT__mem[14]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.cache_fifo__DOT__mem[15]),32);
        bufp->chgCData(oldp+16,(vlSelfRef.cache_fifo__DOT__tag_mem[0]),8);
        bufp->chgCData(oldp+17,(vlSelfRef.cache_fifo__DOT__tag_mem[1]),8);
        bufp->chgCData(oldp+18,(vlSelfRef.cache_fifo__DOT__tag_mem[2]),8);
        bufp->chgCData(oldp+19,(vlSelfRef.cache_fifo__DOT__tag_mem[3]),8);
        bufp->chgCData(oldp+20,(vlSelfRef.cache_fifo__DOT__tag_mem[4]),8);
        bufp->chgCData(oldp+21,(vlSelfRef.cache_fifo__DOT__tag_mem[5]),8);
        bufp->chgCData(oldp+22,(vlSelfRef.cache_fifo__DOT__tag_mem[6]),8);
        bufp->chgCData(oldp+23,(vlSelfRef.cache_fifo__DOT__tag_mem[7]),8);
        bufp->chgCData(oldp+24,(vlSelfRef.cache_fifo__DOT__tag_mem[8]),8);
        bufp->chgCData(oldp+25,(vlSelfRef.cache_fifo__DOT__tag_mem[9]),8);
        bufp->chgCData(oldp+26,(vlSelfRef.cache_fifo__DOT__tag_mem[10]),8);
        bufp->chgCData(oldp+27,(vlSelfRef.cache_fifo__DOT__tag_mem[11]),8);
        bufp->chgCData(oldp+28,(vlSelfRef.cache_fifo__DOT__tag_mem[12]),8);
        bufp->chgCData(oldp+29,(vlSelfRef.cache_fifo__DOT__tag_mem[13]),8);
        bufp->chgCData(oldp+30,(vlSelfRef.cache_fifo__DOT__tag_mem[14]),8);
        bufp->chgCData(oldp+31,(vlSelfRef.cache_fifo__DOT__tag_mem[15]),8);
        bufp->chgCData(oldp+32,(vlSelfRef.cache_fifo__DOT__wr_ptr),5);
        bufp->chgCData(oldp+33,(vlSelfRef.cache_fifo__DOT__rd_ptr),5);
        bufp->chgCData(oldp+34,(vlSelfRef.cache_fifo__DOT__search_idx),4);
        bufp->chgCData(oldp+35,(vlSelfRef.cache_fifo__DOT__fifo_replacement_ptr),2);
        bufp->chgIData(oldp+36,(vlSelfRef.cache_fifo__DOT__cache_data0),32);
        bufp->chgIData(oldp+37,(vlSelfRef.cache_fifo__DOT__cache_data1),32);
        bufp->chgIData(oldp+38,(vlSelfRef.cache_fifo__DOT__cache_data2),32);
        bufp->chgIData(oldp+39,(vlSelfRef.cache_fifo__DOT__cache_data3),32);
        bufp->chgCData(oldp+40,(vlSelfRef.cache_fifo__DOT__cache_tags0),8);
        bufp->chgCData(oldp+41,(vlSelfRef.cache_fifo__DOT__cache_tags1),8);
        bufp->chgCData(oldp+42,(vlSelfRef.cache_fifo__DOT__cache_tags2),8);
        bufp->chgCData(oldp+43,(vlSelfRef.cache_fifo__DOT__cache_tags3),8);
        bufp->chgBit(oldp+44,(vlSelfRef.cache_fifo__DOT__cache_valid0));
        bufp->chgBit(oldp+45,(vlSelfRef.cache_fifo__DOT__cache_valid1));
        bufp->chgBit(oldp+46,(vlSelfRef.cache_fifo__DOT__cache_valid2));
        bufp->chgBit(oldp+47,(vlSelfRef.cache_fifo__DOT__cache_valid3));
        bufp->chgCData(oldp+48,(vlSelfRef.cache_fifo__DOT__lru_counters0),2);
        bufp->chgCData(oldp+49,(vlSelfRef.cache_fifo__DOT__lru_counters1),2);
        bufp->chgCData(oldp+50,(vlSelfRef.cache_fifo__DOT__lru_counters2),2);
        bufp->chgCData(oldp+51,(vlSelfRef.cache_fifo__DOT__lru_counters3),2);
        bufp->chgCData(oldp+52,(vlSelfRef.cache_fifo__DOT__cache_idx_reg),2);
        bufp->chgCData(oldp+53,(vlSelfRef.cache_fifo__DOT__matched_tag),4);
        bufp->chgCData(oldp+54,(vlSelfRef.cache_fifo__DOT__hit_index),2);
        bufp->chgBit(oldp+55,(vlSelfRef.cache_fifo__DOT__rd_valid_reg));
    }
    bufp->chgBit(oldp+56,(vlSelfRef.clk));
    bufp->chgBit(oldp+57,(vlSelfRef.rst_n));
    bufp->chgBit(oldp+58,(vlSelfRef.wr_en));
    bufp->chgIData(oldp+59,(vlSelfRef.wr_data),32);
    bufp->chgCData(oldp+60,(vlSelfRef.wr_tag),8);
    bufp->chgBit(oldp+61,(vlSelfRef.wr_ready));
    bufp->chgBit(oldp+62,(vlSelfRef.rd_en));
    bufp->chgCData(oldp+63,(vlSelfRef.rd_tag),8);
    bufp->chgIData(oldp+64,(vlSelfRef.rd_data),32);
    bufp->chgBit(oldp+65,(vlSelfRef.rd_valid));
    bufp->chgBit(oldp+66,(vlSelfRef.rd_hit));
    bufp->chgBit(oldp+67,(vlSelfRef.full));
    bufp->chgBit(oldp+68,(vlSelfRef.empty));
    bufp->chgCData(oldp+69,(vlSelfRef.data_count),5);
    bufp->chgIData(oldp+70,(vlSelfRef.cache_hits),32);
    bufp->chgIData(oldp+71,(vlSelfRef.cache_misses),32);
    bufp->chgIData(oldp+72,(vlSelfRef.hit_ratio),32);
    bufp->chgBit(oldp+73,(vlSelfRef.clear_stats));
}

void Vcache_fifo___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_fifo___024root__trace_cleanup\n"); );
    // Init
    Vcache_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcache_fifo___024root*>(voidSelf);
    Vcache_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
