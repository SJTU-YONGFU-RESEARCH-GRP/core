// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpipelined_fifo__Syms.h"


void Vpipelined_fifo___024root__trace_chg_0_sub_0(Vpipelined_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vpipelined_fifo___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipelined_fifo___024root__trace_chg_0\n"); );
    // Init
    Vpipelined_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipelined_fifo___024root*>(voidSelf);
    Vpipelined_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vpipelined_fifo___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vpipelined_fifo___024root__trace_chg_0_sub_0(Vpipelined_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipelined_fifo___024root__trace_chg_0_sub_0\n"); );
    Vpipelined_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.pipelined_fifo__DOT__wr_ptr),5);
        bufp->chgCData(oldp+1,(vlSelfRef.pipelined_fifo__DOT__rd_ptr),5);
        bufp->chgCData(oldp+2,(vlSelfRef.pipelined_fifo__DOT__rd_data_valid),2);
        bufp->chgCData(oldp+3,(vlSelfRef.pipelined_fifo__DOT__pipeline_count),5);
        bufp->chgCData(oldp+4,((0x1fU & ((IData)(vlSelfRef.pipelined_fifo__DOT__pipeline_count) 
                                         + (IData)(vlSelfRef.pipelined_fifo__DOT__wr_ptr)))),5);
        bufp->chgCData(oldp+5,(vlSelfRef.pipelined_fifo__DOT__raw_count),5);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+6,(vlSelfRef.pipelined_fifo__DOT__mem[0]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.pipelined_fifo__DOT__mem[1]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.pipelined_fifo__DOT__mem[2]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.pipelined_fifo__DOT__mem[3]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.pipelined_fifo__DOT__mem[4]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.pipelined_fifo__DOT__mem[5]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.pipelined_fifo__DOT__mem[6]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.pipelined_fifo__DOT__mem[7]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.pipelined_fifo__DOT__mem[8]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.pipelined_fifo__DOT__mem[9]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.pipelined_fifo__DOT__mem[10]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.pipelined_fifo__DOT__mem[11]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.pipelined_fifo__DOT__mem[12]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.pipelined_fifo__DOT__mem[13]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.pipelined_fifo__DOT__mem[14]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.pipelined_fifo__DOT__mem[15]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+22,(vlSelfRef.pipelined_fifo__DOT__wr_ptr_pipe[0]),5);
        bufp->chgCData(oldp+23,(vlSelfRef.pipelined_fifo__DOT__wr_ptr_pipe[1]),5);
        bufp->chgIData(oldp+24,(vlSelfRef.pipelined_fifo__DOT__wr_data_pipe[0]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.pipelined_fifo__DOT__wr_data_pipe[1]),32);
        bufp->chgCData(oldp+26,(vlSelfRef.pipelined_fifo__DOT__wr_en_pipe),2);
        bufp->chgCData(oldp+27,(vlSelfRef.pipelined_fifo__DOT__rd_ptr_pipe[0]),5);
        bufp->chgCData(oldp+28,(vlSelfRef.pipelined_fifo__DOT__rd_ptr_pipe[1]),5);
        bufp->chgIData(oldp+29,(vlSelfRef.pipelined_fifo__DOT__rd_data_pipe[0]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.pipelined_fifo__DOT__rd_data_pipe[1]),32);
        bufp->chgCData(oldp+31,(vlSelfRef.pipelined_fifo__DOT__rd_en_pipe),2);
    }
    bufp->chgBit(oldp+32,(vlSelfRef.clk));
    bufp->chgBit(oldp+33,(vlSelfRef.rst_n));
    bufp->chgBit(oldp+34,(vlSelfRef.wr_en));
    bufp->chgIData(oldp+35,(vlSelfRef.wr_data),32);
    bufp->chgBit(oldp+36,(vlSelfRef.full));
    bufp->chgBit(oldp+37,(vlSelfRef.almost_full));
    bufp->chgBit(oldp+38,(vlSelfRef.rd_en));
    bufp->chgIData(oldp+39,(vlSelfRef.rd_data),32);
    bufp->chgBit(oldp+40,(vlSelfRef.empty));
    bufp->chgBit(oldp+41,(vlSelfRef.almost_empty));
    bufp->chgCData(oldp+42,(vlSelfRef.data_count),5);
    bufp->chgIData(oldp+43,(vlSelfRef.pipelined_fifo__DOT__i),32);
}

void Vpipelined_fifo___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipelined_fifo___024root__trace_cleanup\n"); );
    // Init
    Vpipelined_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipelined_fifo___024root*>(voidSelf);
    Vpipelined_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
