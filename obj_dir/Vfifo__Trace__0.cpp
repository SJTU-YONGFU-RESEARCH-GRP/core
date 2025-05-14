// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfifo__Syms.h"


void Vfifo___024root__trace_chg_0_sub_0(Vfifo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vfifo___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root__trace_chg_0\n"); );
    // Init
    Vfifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfifo___024root*>(voidSelf);
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vfifo___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vfifo___024root__trace_chg_0_sub_0(Vfifo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->fifo__DOT__mem[0]),8);
        bufp->chgCData(oldp+1,(vlSelf->fifo__DOT__mem[1]),8);
        bufp->chgCData(oldp+2,(vlSelf->fifo__DOT__mem[2]),8);
        bufp->chgCData(oldp+3,(vlSelf->fifo__DOT__mem[3]),8);
        bufp->chgCData(oldp+4,(vlSelf->fifo__DOT__mem[4]),8);
        bufp->chgCData(oldp+5,(vlSelf->fifo__DOT__mem[5]),8);
        bufp->chgCData(oldp+6,(vlSelf->fifo__DOT__mem[6]),8);
        bufp->chgCData(oldp+7,(vlSelf->fifo__DOT__mem[7]),8);
        bufp->chgCData(oldp+8,(vlSelf->fifo__DOT__mem[8]),8);
        bufp->chgCData(oldp+9,(vlSelf->fifo__DOT__mem[9]),8);
        bufp->chgCData(oldp+10,(vlSelf->fifo__DOT__mem[10]),8);
        bufp->chgCData(oldp+11,(vlSelf->fifo__DOT__mem[11]),8);
        bufp->chgCData(oldp+12,(vlSelf->fifo__DOT__mem[12]),8);
        bufp->chgCData(oldp+13,(vlSelf->fifo__DOT__mem[13]),8);
        bufp->chgCData(oldp+14,(vlSelf->fifo__DOT__mem[14]),8);
        bufp->chgCData(oldp+15,(vlSelf->fifo__DOT__mem[15]),8);
        bufp->chgCData(oldp+16,(vlSelf->fifo__DOT__wr_ptr),5);
        bufp->chgCData(oldp+17,(vlSelf->fifo__DOT__rd_ptr),5);
    }
    bufp->chgBit(oldp+18,(vlSelf->clk));
    bufp->chgBit(oldp+19,(vlSelf->rst_n));
    bufp->chgBit(oldp+20,(vlSelf->wr_en));
    bufp->chgBit(oldp+21,(vlSelf->rd_en));
    bufp->chgCData(oldp+22,(vlSelf->din),8);
    bufp->chgCData(oldp+23,(vlSelf->dout),8);
    bufp->chgBit(oldp+24,(vlSelf->full));
    bufp->chgBit(oldp+25,(vlSelf->empty));
}

void Vfifo___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root__trace_cleanup\n"); );
    // Init
    Vfifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfifo___024root*>(voidSelf);
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
