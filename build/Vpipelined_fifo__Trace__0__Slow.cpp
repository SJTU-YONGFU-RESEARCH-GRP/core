// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpipelined_fifo__Syms.h"


VL_ATTR_COLD void Vpipelined_fifo___024root__trace_init_sub__TOP__0(Vpipelined_fifo___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipelined_fifo___024root__trace_init_sub__TOP__0\n"); );
    Vpipelined_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+33,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+37,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"almost_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+41,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"almost_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"data_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("pipelined_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+45,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"PIPELINE_STAGES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"ALMOST_FULL_THRESHOLD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"ALMOST_EMPTY_THRESHOLD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+33,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+37,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"almost_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+41,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"almost_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"data_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+7+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+44,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("wr_ptr_pipe", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+23+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("wr_data_pipe", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+25+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+27,0,"wr_en_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+2,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("rd_ptr_pipe", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+28+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_data_pipe", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+30+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+32,0,"rd_en_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+3,0,"rd_data_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+4,0,"pipeline_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+5,0,"wr_ptr_effective",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+2,0,"rd_ptr_effective",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+6,0,"raw_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vpipelined_fifo___024root__trace_init_top(Vpipelined_fifo___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipelined_fifo___024root__trace_init_top\n"); );
    Vpipelined_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vpipelined_fifo___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vpipelined_fifo___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vpipelined_fifo___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpipelined_fifo___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpipelined_fifo___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vpipelined_fifo___024root__trace_register(Vpipelined_fifo___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipelined_fifo___024root__trace_register\n"); );
    Vpipelined_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vpipelined_fifo___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vpipelined_fifo___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vpipelined_fifo___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vpipelined_fifo___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vpipelined_fifo___024root__trace_const_0_sub_0(Vpipelined_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vpipelined_fifo___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipelined_fifo___024root__trace_const_0\n"); );
    // Init
    Vpipelined_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipelined_fifo___024root*>(voidSelf);
    Vpipelined_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vpipelined_fifo___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vpipelined_fifo___024root__trace_const_0_sub_0(Vpipelined_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipelined_fifo___024root__trace_const_0_sub_0\n"); );
    Vpipelined_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+45,(0x20U),32);
    bufp->fullIData(oldp+46,(4U),32);
    bufp->fullIData(oldp+47,(2U),32);
}

VL_ATTR_COLD void Vpipelined_fifo___024root__trace_full_0_sub_0(Vpipelined_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vpipelined_fifo___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipelined_fifo___024root__trace_full_0\n"); );
    // Init
    Vpipelined_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipelined_fifo___024root*>(voidSelf);
    Vpipelined_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vpipelined_fifo___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vpipelined_fifo___024root__trace_full_0_sub_0(Vpipelined_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipelined_fifo___024root__trace_full_0_sub_0\n"); );
    Vpipelined_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.pipelined_fifo__DOT__wr_ptr),5);
    bufp->fullCData(oldp+2,(vlSelfRef.pipelined_fifo__DOT__rd_ptr),5);
    bufp->fullCData(oldp+3,(vlSelfRef.pipelined_fifo__DOT__rd_data_valid),2);
    bufp->fullCData(oldp+4,(vlSelfRef.pipelined_fifo__DOT__pipeline_count),5);
    bufp->fullCData(oldp+5,((0x1fU & ((IData)(vlSelfRef.pipelined_fifo__DOT__pipeline_count) 
                                      + (IData)(vlSelfRef.pipelined_fifo__DOT__wr_ptr)))),5);
    bufp->fullCData(oldp+6,(vlSelfRef.pipelined_fifo__DOT__raw_count),5);
    bufp->fullIData(oldp+7,(vlSelfRef.pipelined_fifo__DOT__mem[0]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.pipelined_fifo__DOT__mem[1]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.pipelined_fifo__DOT__mem[2]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.pipelined_fifo__DOT__mem[3]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.pipelined_fifo__DOT__mem[4]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.pipelined_fifo__DOT__mem[5]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.pipelined_fifo__DOT__mem[6]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.pipelined_fifo__DOT__mem[7]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.pipelined_fifo__DOT__mem[8]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.pipelined_fifo__DOT__mem[9]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.pipelined_fifo__DOT__mem[10]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.pipelined_fifo__DOT__mem[11]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.pipelined_fifo__DOT__mem[12]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.pipelined_fifo__DOT__mem[13]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.pipelined_fifo__DOT__mem[14]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.pipelined_fifo__DOT__mem[15]),32);
    bufp->fullCData(oldp+23,(vlSelfRef.pipelined_fifo__DOT__wr_ptr_pipe[0]),5);
    bufp->fullCData(oldp+24,(vlSelfRef.pipelined_fifo__DOT__wr_ptr_pipe[1]),5);
    bufp->fullIData(oldp+25,(vlSelfRef.pipelined_fifo__DOT__wr_data_pipe[0]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.pipelined_fifo__DOT__wr_data_pipe[1]),32);
    bufp->fullCData(oldp+27,(vlSelfRef.pipelined_fifo__DOT__wr_en_pipe),2);
    bufp->fullCData(oldp+28,(vlSelfRef.pipelined_fifo__DOT__rd_ptr_pipe[0]),5);
    bufp->fullCData(oldp+29,(vlSelfRef.pipelined_fifo__DOT__rd_ptr_pipe[1]),5);
    bufp->fullIData(oldp+30,(vlSelfRef.pipelined_fifo__DOT__rd_data_pipe[0]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.pipelined_fifo__DOT__rd_data_pipe[1]),32);
    bufp->fullCData(oldp+32,(vlSelfRef.pipelined_fifo__DOT__rd_en_pipe),2);
    bufp->fullBit(oldp+33,(vlSelfRef.clk));
    bufp->fullBit(oldp+34,(vlSelfRef.rst_n));
    bufp->fullBit(oldp+35,(vlSelfRef.wr_en));
    bufp->fullIData(oldp+36,(vlSelfRef.wr_data),32);
    bufp->fullBit(oldp+37,(vlSelfRef.full));
    bufp->fullBit(oldp+38,(vlSelfRef.almost_full));
    bufp->fullBit(oldp+39,(vlSelfRef.rd_en));
    bufp->fullIData(oldp+40,(vlSelfRef.rd_data),32);
    bufp->fullBit(oldp+41,(vlSelfRef.empty));
    bufp->fullBit(oldp+42,(vlSelfRef.almost_empty));
    bufp->fullCData(oldp+43,(vlSelfRef.data_count),5);
    bufp->fullIData(oldp+44,(vlSelfRef.pipelined_fifo__DOT__i),32);
}
