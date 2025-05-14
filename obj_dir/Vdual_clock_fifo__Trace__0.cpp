// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdual_clock_fifo__Syms.h"


void Vdual_clock_fifo___024root__trace_chg_0_sub_0(Vdual_clock_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdual_clock_fifo___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_clock_fifo___024root__trace_chg_0\n"); );
    // Init
    Vdual_clock_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdual_clock_fifo___024root*>(voidSelf);
    Vdual_clock_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdual_clock_fifo___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vdual_clock_fifo___024root__trace_chg_0_sub_0(Vdual_clock_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_clock_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_clock_fifo___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->dual_clock_fifo__DOT__gray_to_bin__Vstatic__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+1,(vlSelf->dual_clock_fifo__DOT__rd_ptr_gray_wr_sync1),5);
        bufp->chgCData(oldp+2,(vlSelf->dual_clock_fifo__DOT__rd_ptr_gray_wr_sync2),5);
        bufp->chgCData(oldp+3,(vlSelf->dual_clock_fifo__DOT__rd_ptr_bin_wr_sync),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+4,(vlSelf->dual_clock_fifo__DOT__rd_ptr_gray),5);
        bufp->chgCData(oldp+5,(vlSelf->dual_clock_fifo__DOT__wr_ptr_gray_rd_sync1),5);
        bufp->chgCData(oldp+6,(vlSelf->dual_clock_fifo__DOT__wr_ptr_gray_rd_sync2),5);
        bufp->chgCData(oldp+7,(vlSelf->dual_clock_fifo__DOT__wr_ptr_bin_rd_sync),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+8,(vlSelf->dual_clock_fifo__DOT__mem[0]),8);
        bufp->chgCData(oldp+9,(vlSelf->dual_clock_fifo__DOT__mem[1]),8);
        bufp->chgCData(oldp+10,(vlSelf->dual_clock_fifo__DOT__mem[2]),8);
        bufp->chgCData(oldp+11,(vlSelf->dual_clock_fifo__DOT__mem[3]),8);
        bufp->chgCData(oldp+12,(vlSelf->dual_clock_fifo__DOT__mem[4]),8);
        bufp->chgCData(oldp+13,(vlSelf->dual_clock_fifo__DOT__mem[5]),8);
        bufp->chgCData(oldp+14,(vlSelf->dual_clock_fifo__DOT__mem[6]),8);
        bufp->chgCData(oldp+15,(vlSelf->dual_clock_fifo__DOT__mem[7]),8);
        bufp->chgCData(oldp+16,(vlSelf->dual_clock_fifo__DOT__mem[8]),8);
        bufp->chgCData(oldp+17,(vlSelf->dual_clock_fifo__DOT__mem[9]),8);
        bufp->chgCData(oldp+18,(vlSelf->dual_clock_fifo__DOT__mem[10]),8);
        bufp->chgCData(oldp+19,(vlSelf->dual_clock_fifo__DOT__mem[11]),8);
        bufp->chgCData(oldp+20,(vlSelf->dual_clock_fifo__DOT__mem[12]),8);
        bufp->chgCData(oldp+21,(vlSelf->dual_clock_fifo__DOT__mem[13]),8);
        bufp->chgCData(oldp+22,(vlSelf->dual_clock_fifo__DOT__mem[14]),8);
        bufp->chgCData(oldp+23,(vlSelf->dual_clock_fifo__DOT__mem[15]),8);
    }
    bufp->chgBit(oldp+24,(vlSelf->wr_clk));
    bufp->chgBit(oldp+25,(vlSelf->wr_rst_n));
    bufp->chgBit(oldp+26,(vlSelf->wr_en));
    bufp->chgCData(oldp+27,(vlSelf->wr_data),8);
    bufp->chgBit(oldp+28,(vlSelf->full));
    bufp->chgBit(oldp+29,(vlSelf->almost_full));
    bufp->chgBit(oldp+30,(vlSelf->rd_clk));
    bufp->chgBit(oldp+31,(vlSelf->rd_rst_n));
    bufp->chgBit(oldp+32,(vlSelf->rd_en));
    bufp->chgCData(oldp+33,(vlSelf->rd_data),8);
    bufp->chgBit(oldp+34,(vlSelf->empty));
    bufp->chgBit(oldp+35,(vlSelf->almost_empty));
    bufp->chgCData(oldp+36,(vlSelf->fifo_count),5);
    bufp->chgCData(oldp+37,(vlSelf->dual_clock_fifo__DOT__wr_ptr_bin),5);
    bufp->chgCData(oldp+38,(vlSelf->dual_clock_fifo__DOT__rd_ptr_bin),5);
    bufp->chgCData(oldp+39,(vlSelf->dual_clock_fifo__DOT__wr_ptr_gray),5);
    bufp->chgCData(oldp+40,(vlSelf->dual_clock_fifo__DOT__gray_to_bin__Vstatic__bin),5);
    bufp->chgCData(oldp+41,(vlSelf->dual_clock_fifo__DOT__rd_data_reg),8);
    bufp->chgCData(oldp+42,((0x1fU & ((IData)(vlSelf->dual_clock_fifo__DOT__wr_ptr_bin) 
                                      - (IData)(vlSelf->dual_clock_fifo__DOT__rd_ptr_bin_wr_sync)))),5);
}

void Vdual_clock_fifo___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_clock_fifo___024root__trace_cleanup\n"); );
    // Init
    Vdual_clock_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdual_clock_fifo___024root*>(voidSelf);
    Vdual_clock_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
