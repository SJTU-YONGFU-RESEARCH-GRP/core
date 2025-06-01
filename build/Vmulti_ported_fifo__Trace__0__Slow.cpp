// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmulti_ported_fifo__Syms.h"


VL_ATTR_COLD void Vmulti_ported_fifo___024root__trace_init_sub__TOP__0(Vmulti_ported_fifo___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_ported_fifo___024root__trace_init_sub__TOP__0\n"); );
    Vmulti_ported_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+31,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+34,0,"wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+36,0,"wr_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+37,0,"rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+38,0,"rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+40,0,"rd_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+41,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"almost_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"almost_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"data_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("multi_ported_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+49,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"NUM_READ_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"NUM_WRITE_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"ALMOST_FULL_THRESHOLD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"ALMOST_EMPTY_THRESHOLD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+34,0,"wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+36,0,"wr_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+37,0,"rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+38,0,"rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+40,0,"rd_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+41,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"almost_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"almost_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"data_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+8+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+28,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+29,0,"fifo_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+24,0,"current_wr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+25,0,"write_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+2,0,"current_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+3,0,"read_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("rd_data_regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+4+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+6,0,"rd_valid_regs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+46,0,"wr_requests",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+47,0,"rd_requests",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+46,0,"wr_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+47,0,"rd_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+7,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+26,0,"wp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+48,0,"next_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+30,0,"empty_per_port",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+27,0,"get_wr_data__Vstatic__start_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmulti_ported_fifo___024root__trace_init_top(Vmulti_ported_fifo___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_ported_fifo___024root__trace_init_top\n"); );
    Vmulti_ported_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmulti_ported_fifo___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmulti_ported_fifo___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vmulti_ported_fifo___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmulti_ported_fifo___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmulti_ported_fifo___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmulti_ported_fifo___024root__trace_register(Vmulti_ported_fifo___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_ported_fifo___024root__trace_register\n"); );
    Vmulti_ported_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vmulti_ported_fifo___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vmulti_ported_fifo___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vmulti_ported_fifo___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vmulti_ported_fifo___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmulti_ported_fifo___024root__trace_const_0_sub_0(Vmulti_ported_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmulti_ported_fifo___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_ported_fifo___024root__trace_const_0\n"); );
    // Init
    Vmulti_ported_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmulti_ported_fifo___024root*>(voidSelf);
    Vmulti_ported_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmulti_ported_fifo___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmulti_ported_fifo___024root__trace_const_0_sub_0(Vmulti_ported_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_ported_fifo___024root__trace_const_0_sub_0\n"); );
    Vmulti_ported_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+49,(0x20U),32);
    bufp->fullIData(oldp+50,(4U),32);
    bufp->fullIData(oldp+51,(2U),32);
}

VL_ATTR_COLD void Vmulti_ported_fifo___024root__trace_full_0_sub_0(Vmulti_ported_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmulti_ported_fifo___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_ported_fifo___024root__trace_full_0\n"); );
    // Init
    Vmulti_ported_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmulti_ported_fifo___024root*>(voidSelf);
    Vmulti_ported_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmulti_ported_fifo___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmulti_ported_fifo___024root__trace_full_0_sub_0(Vmulti_ported_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_ported_fifo___024root__trace_full_0_sub_0\n"); );
    Vmulti_ported_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.multi_ported_fifo__DOT__rd_ptr),5);
    bufp->fullCData(oldp+2,(vlSelfRef.multi_ported_fifo__DOT__current_rd_addr),4);
    bufp->fullCData(oldp+3,(vlSelfRef.multi_ported_fifo__DOT__read_count),5);
    bufp->fullIData(oldp+4,(vlSelfRef.multi_ported_fifo__DOT__rd_data_regs[0]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.multi_ported_fifo__DOT__rd_data_regs[1]),32);
    bufp->fullCData(oldp+6,(vlSelfRef.multi_ported_fifo__DOT__rd_valid_regs),2);
    bufp->fullIData(oldp+7,(vlSelfRef.multi_ported_fifo__DOT__i),32);
    bufp->fullIData(oldp+8,(vlSelfRef.multi_ported_fifo__DOT__mem[0]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.multi_ported_fifo__DOT__mem[1]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.multi_ported_fifo__DOT__mem[2]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.multi_ported_fifo__DOT__mem[3]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.multi_ported_fifo__DOT__mem[4]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.multi_ported_fifo__DOT__mem[5]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.multi_ported_fifo__DOT__mem[6]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.multi_ported_fifo__DOT__mem[7]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.multi_ported_fifo__DOT__mem[8]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.multi_ported_fifo__DOT__mem[9]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.multi_ported_fifo__DOT__mem[10]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.multi_ported_fifo__DOT__mem[11]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.multi_ported_fifo__DOT__mem[12]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.multi_ported_fifo__DOT__mem[13]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.multi_ported_fifo__DOT__mem[14]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.multi_ported_fifo__DOT__mem[15]),32);
    bufp->fullCData(oldp+24,(vlSelfRef.multi_ported_fifo__DOT__current_wr_addr),4);
    bufp->fullCData(oldp+25,(vlSelfRef.multi_ported_fifo__DOT__write_count),5);
    bufp->fullIData(oldp+26,(vlSelfRef.multi_ported_fifo__DOT__wp),32);
    bufp->fullIData(oldp+27,(vlSelfRef.multi_ported_fifo__DOT__get_wr_data__Vstatic__start_bit),32);
    bufp->fullCData(oldp+28,(vlSelfRef.multi_ported_fifo__DOT__wr_ptr),5);
    bufp->fullCData(oldp+29,(vlSelfRef.multi_ported_fifo__DOT__fifo_count),5);
    bufp->fullCData(oldp+30,((((1U >= (IData)(vlSelfRef.multi_ported_fifo__DOT__fifo_count)) 
                               << 1U) | (0U >= (IData)(vlSelfRef.multi_ported_fifo__DOT__fifo_count)))),2);
    bufp->fullBit(oldp+31,(vlSelfRef.clk));
    bufp->fullBit(oldp+32,(vlSelfRef.rst_n));
    bufp->fullCData(oldp+33,(vlSelfRef.wr_en),2);
    bufp->fullQData(oldp+34,(vlSelfRef.wr_data),64);
    bufp->fullCData(oldp+36,(vlSelfRef.wr_ready),2);
    bufp->fullCData(oldp+37,(vlSelfRef.rd_en),2);
    bufp->fullQData(oldp+38,(vlSelfRef.rd_data),64);
    bufp->fullCData(oldp+40,(vlSelfRef.rd_valid),2);
    bufp->fullBit(oldp+41,(vlSelfRef.full));
    bufp->fullBit(oldp+42,(vlSelfRef.almost_full));
    bufp->fullBit(oldp+43,(vlSelfRef.empty));
    bufp->fullBit(oldp+44,(vlSelfRef.almost_empty));
    bufp->fullCData(oldp+45,(vlSelfRef.data_count),5);
    bufp->fullCData(oldp+46,(vlSelfRef.multi_ported_fifo__DOT__wr_count),5);
    bufp->fullCData(oldp+47,(vlSelfRef.multi_ported_fifo__DOT__rd_count),5);
    bufp->fullCData(oldp+48,((0x1fU & (((IData)(vlSelfRef.multi_ported_fifo__DOT__fifo_count) 
                                        + (IData)(vlSelfRef.multi_ported_fifo__DOT__wr_count)) 
                                       - (IData)(vlSelfRef.multi_ported_fifo__DOT__rd_count)))),5);
}
