// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmulti_ported_fifo__Syms.h"


void Vmulti_ported_fifo___024root__trace_chg_0_sub_0(Vmulti_ported_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmulti_ported_fifo___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_ported_fifo___024root__trace_chg_0\n"); );
    // Init
    Vmulti_ported_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmulti_ported_fifo___024root*>(voidSelf);
    Vmulti_ported_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmulti_ported_fifo___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vmulti_ported_fifo___024root__trace_chg_0_sub_0(Vmulti_ported_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_ported_fifo___024root__trace_chg_0_sub_0\n"); );
    Vmulti_ported_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.multi_ported_fifo__DOT__rd_ptr),5);
        bufp->chgCData(oldp+1,(vlSelfRef.multi_ported_fifo__DOT__current_rd_addr),4);
        bufp->chgCData(oldp+2,(vlSelfRef.multi_ported_fifo__DOT__read_count),5);
        bufp->chgIData(oldp+3,(vlSelfRef.multi_ported_fifo__DOT__rd_data_regs[0]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.multi_ported_fifo__DOT__rd_data_regs[1]),32);
        bufp->chgCData(oldp+5,(vlSelfRef.multi_ported_fifo__DOT__rd_valid_regs),2);
        bufp->chgIData(oldp+6,(vlSelfRef.multi_ported_fifo__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+7,(vlSelfRef.multi_ported_fifo__DOT__mem[0]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.multi_ported_fifo__DOT__mem[1]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.multi_ported_fifo__DOT__mem[2]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.multi_ported_fifo__DOT__mem[3]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.multi_ported_fifo__DOT__mem[4]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.multi_ported_fifo__DOT__mem[5]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.multi_ported_fifo__DOT__mem[6]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.multi_ported_fifo__DOT__mem[7]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.multi_ported_fifo__DOT__mem[8]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.multi_ported_fifo__DOT__mem[9]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.multi_ported_fifo__DOT__mem[10]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.multi_ported_fifo__DOT__mem[11]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.multi_ported_fifo__DOT__mem[12]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.multi_ported_fifo__DOT__mem[13]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.multi_ported_fifo__DOT__mem[14]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.multi_ported_fifo__DOT__mem[15]),32);
        bufp->chgCData(oldp+23,(vlSelfRef.multi_ported_fifo__DOT__current_wr_addr),4);
        bufp->chgCData(oldp+24,(vlSelfRef.multi_ported_fifo__DOT__write_count),5);
        bufp->chgIData(oldp+25,(vlSelfRef.multi_ported_fifo__DOT__wp),32);
        bufp->chgIData(oldp+26,(vlSelfRef.multi_ported_fifo__DOT__get_wr_data__Vstatic__start_bit),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+27,(vlSelfRef.multi_ported_fifo__DOT__wr_ptr),5);
        bufp->chgCData(oldp+28,(vlSelfRef.multi_ported_fifo__DOT__fifo_count),5);
        bufp->chgCData(oldp+29,((((1U >= (IData)(vlSelfRef.multi_ported_fifo__DOT__fifo_count)) 
                                  << 1U) | (0U >= (IData)(vlSelfRef.multi_ported_fifo__DOT__fifo_count)))),2);
    }
    bufp->chgBit(oldp+30,(vlSelfRef.clk));
    bufp->chgBit(oldp+31,(vlSelfRef.rst_n));
    bufp->chgCData(oldp+32,(vlSelfRef.wr_en),2);
    bufp->chgQData(oldp+33,(vlSelfRef.wr_data),64);
    bufp->chgCData(oldp+35,(vlSelfRef.wr_ready),2);
    bufp->chgCData(oldp+36,(vlSelfRef.rd_en),2);
    bufp->chgQData(oldp+37,(vlSelfRef.rd_data),64);
    bufp->chgCData(oldp+39,(vlSelfRef.rd_valid),2);
    bufp->chgBit(oldp+40,(vlSelfRef.full));
    bufp->chgBit(oldp+41,(vlSelfRef.almost_full));
    bufp->chgBit(oldp+42,(vlSelfRef.empty));
    bufp->chgBit(oldp+43,(vlSelfRef.almost_empty));
    bufp->chgCData(oldp+44,(vlSelfRef.data_count),5);
    bufp->chgCData(oldp+45,(vlSelfRef.multi_ported_fifo__DOT__wr_count),5);
    bufp->chgCData(oldp+46,(vlSelfRef.multi_ported_fifo__DOT__rd_count),5);
    bufp->chgCData(oldp+47,((0x1fU & (((IData)(vlSelfRef.multi_ported_fifo__DOT__fifo_count) 
                                       + (IData)(vlSelfRef.multi_ported_fifo__DOT__wr_count)) 
                                      - (IData)(vlSelfRef.multi_ported_fifo__DOT__rd_count)))),5);
}

void Vmulti_ported_fifo___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_ported_fifo___024root__trace_cleanup\n"); );
    // Init
    Vmulti_ported_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmulti_ported_fifo___024root*>(voidSelf);
    Vmulti_ported_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
