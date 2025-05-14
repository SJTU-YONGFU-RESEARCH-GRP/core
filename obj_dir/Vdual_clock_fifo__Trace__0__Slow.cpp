// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdual_clock_fifo__Syms.h"


VL_ATTR_COLD void Vdual_clock_fifo___024root__trace_init_sub__TOP__0(Vdual_clock_fifo___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_clock_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_clock_fifo___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+25,0,"wr_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"wr_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+29,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"almost_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"rd_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"rd_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+35,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"almost_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"fifo_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("dual_clock_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+44,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"ALMOST_FULL_THRESHOLD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"ALMOST_EMPTY_THRESHOLD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+25,0,"wr_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"wr_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+29,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"almost_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"rd_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"rd_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+35,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"almost_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"fifo_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+9+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+38,0,"wr_ptr_bin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+39,0,"rd_ptr_bin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+40,0,"wr_ptr_gray",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+5,0,"rd_ptr_gray",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+6,0,"wr_ptr_gray_rd_sync1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+7,0,"wr_ptr_gray_rd_sync2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+2,0,"rd_ptr_gray_wr_sync1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+3,0,"rd_ptr_gray_wr_sync2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1,0,"gray_to_bin__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+41,0,"gray_to_bin__Vstatic__bin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+42,0,"rd_data_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"wr_ptr_bin_rd_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"rd_ptr_bin_wr_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+43,0,"wr_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdual_clock_fifo___024root__trace_init_top(Vdual_clock_fifo___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_clock_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_clock_fifo___024root__trace_init_top\n"); );
    // Body
    Vdual_clock_fifo___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdual_clock_fifo___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vdual_clock_fifo___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdual_clock_fifo___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdual_clock_fifo___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdual_clock_fifo___024root__trace_register(Vdual_clock_fifo___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_clock_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_clock_fifo___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vdual_clock_fifo___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vdual_clock_fifo___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vdual_clock_fifo___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vdual_clock_fifo___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdual_clock_fifo___024root__trace_const_0_sub_0(Vdual_clock_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdual_clock_fifo___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_clock_fifo___024root__trace_const_0\n"); );
    // Init
    Vdual_clock_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdual_clock_fifo___024root*>(voidSelf);
    Vdual_clock_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdual_clock_fifo___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdual_clock_fifo___024root__trace_const_0_sub_0(Vdual_clock_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_clock_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_clock_fifo___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+44,(8U),32);
    bufp->fullIData(oldp+45,(4U),32);
    bufp->fullIData(oldp+46,(0xcU),32);
}

VL_ATTR_COLD void Vdual_clock_fifo___024root__trace_full_0_sub_0(Vdual_clock_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdual_clock_fifo___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_clock_fifo___024root__trace_full_0\n"); );
    // Init
    Vdual_clock_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdual_clock_fifo___024root*>(voidSelf);
    Vdual_clock_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdual_clock_fifo___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdual_clock_fifo___024root__trace_full_0_sub_0(Vdual_clock_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdual_clock_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_clock_fifo___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->dual_clock_fifo__DOT__gray_to_bin__Vstatic__i),32);
    bufp->fullCData(oldp+2,(vlSelf->dual_clock_fifo__DOT__rd_ptr_gray_wr_sync1),5);
    bufp->fullCData(oldp+3,(vlSelf->dual_clock_fifo__DOT__rd_ptr_gray_wr_sync2),5);
    bufp->fullCData(oldp+4,(vlSelf->dual_clock_fifo__DOT__rd_ptr_bin_wr_sync),5);
    bufp->fullCData(oldp+5,(vlSelf->dual_clock_fifo__DOT__rd_ptr_gray),5);
    bufp->fullCData(oldp+6,(vlSelf->dual_clock_fifo__DOT__wr_ptr_gray_rd_sync1),5);
    bufp->fullCData(oldp+7,(vlSelf->dual_clock_fifo__DOT__wr_ptr_gray_rd_sync2),5);
    bufp->fullCData(oldp+8,(vlSelf->dual_clock_fifo__DOT__wr_ptr_bin_rd_sync),5);
    bufp->fullCData(oldp+9,(vlSelf->dual_clock_fifo__DOT__mem[0]),8);
    bufp->fullCData(oldp+10,(vlSelf->dual_clock_fifo__DOT__mem[1]),8);
    bufp->fullCData(oldp+11,(vlSelf->dual_clock_fifo__DOT__mem[2]),8);
    bufp->fullCData(oldp+12,(vlSelf->dual_clock_fifo__DOT__mem[3]),8);
    bufp->fullCData(oldp+13,(vlSelf->dual_clock_fifo__DOT__mem[4]),8);
    bufp->fullCData(oldp+14,(vlSelf->dual_clock_fifo__DOT__mem[5]),8);
    bufp->fullCData(oldp+15,(vlSelf->dual_clock_fifo__DOT__mem[6]),8);
    bufp->fullCData(oldp+16,(vlSelf->dual_clock_fifo__DOT__mem[7]),8);
    bufp->fullCData(oldp+17,(vlSelf->dual_clock_fifo__DOT__mem[8]),8);
    bufp->fullCData(oldp+18,(vlSelf->dual_clock_fifo__DOT__mem[9]),8);
    bufp->fullCData(oldp+19,(vlSelf->dual_clock_fifo__DOT__mem[10]),8);
    bufp->fullCData(oldp+20,(vlSelf->dual_clock_fifo__DOT__mem[11]),8);
    bufp->fullCData(oldp+21,(vlSelf->dual_clock_fifo__DOT__mem[12]),8);
    bufp->fullCData(oldp+22,(vlSelf->dual_clock_fifo__DOT__mem[13]),8);
    bufp->fullCData(oldp+23,(vlSelf->dual_clock_fifo__DOT__mem[14]),8);
    bufp->fullCData(oldp+24,(vlSelf->dual_clock_fifo__DOT__mem[15]),8);
    bufp->fullBit(oldp+25,(vlSelf->wr_clk));
    bufp->fullBit(oldp+26,(vlSelf->wr_rst_n));
    bufp->fullBit(oldp+27,(vlSelf->wr_en));
    bufp->fullCData(oldp+28,(vlSelf->wr_data),8);
    bufp->fullBit(oldp+29,(vlSelf->full));
    bufp->fullBit(oldp+30,(vlSelf->almost_full));
    bufp->fullBit(oldp+31,(vlSelf->rd_clk));
    bufp->fullBit(oldp+32,(vlSelf->rd_rst_n));
    bufp->fullBit(oldp+33,(vlSelf->rd_en));
    bufp->fullCData(oldp+34,(vlSelf->rd_data),8);
    bufp->fullBit(oldp+35,(vlSelf->empty));
    bufp->fullBit(oldp+36,(vlSelf->almost_empty));
    bufp->fullCData(oldp+37,(vlSelf->fifo_count),5);
    bufp->fullCData(oldp+38,(vlSelf->dual_clock_fifo__DOT__wr_ptr_bin),5);
    bufp->fullCData(oldp+39,(vlSelf->dual_clock_fifo__DOT__rd_ptr_bin),5);
    bufp->fullCData(oldp+40,(vlSelf->dual_clock_fifo__DOT__wr_ptr_gray),5);
    bufp->fullCData(oldp+41,(vlSelf->dual_clock_fifo__DOT__gray_to_bin__Vstatic__bin),5);
    bufp->fullCData(oldp+42,(vlSelf->dual_clock_fifo__DOT__rd_data_reg),8);
    bufp->fullCData(oldp+43,((0x1fU & ((IData)(vlSelf->dual_clock_fifo__DOT__wr_ptr_bin) 
                                       - (IData)(vlSelf->dual_clock_fifo__DOT__rd_ptr_bin_wr_sync)))),5);
}
