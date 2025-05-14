// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfifo__Syms.h"


VL_ATTR_COLD void Vfifo___024root__trace_init_sub__TOP__0(Vfifo___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+19,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+24,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+25,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+27,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+19,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+24,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+25,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+17,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+18,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vfifo___024root__trace_init_top(Vfifo___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root__trace_init_top\n"); );
    // Body
    Vfifo___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vfifo___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vfifo___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfifo___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfifo___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vfifo___024root__trace_register(Vfifo___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vfifo___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vfifo___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vfifo___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vfifo___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vfifo___024root__trace_const_0_sub_0(Vfifo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vfifo___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root__trace_const_0\n"); );
    // Init
    Vfifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfifo___024root*>(voidSelf);
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vfifo___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vfifo___024root__trace_const_0_sub_0(Vfifo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+27,(8U),32);
    bufp->fullIData(oldp+28,(0x10U),32);
    bufp->fullIData(oldp+29,(4U),32);
}

VL_ATTR_COLD void Vfifo___024root__trace_full_0_sub_0(Vfifo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vfifo___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root__trace_full_0\n"); );
    // Init
    Vfifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfifo___024root*>(voidSelf);
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vfifo___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vfifo___024root__trace_full_0_sub_0(Vfifo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->fifo__DOT__mem[0]),8);
    bufp->fullCData(oldp+2,(vlSelf->fifo__DOT__mem[1]),8);
    bufp->fullCData(oldp+3,(vlSelf->fifo__DOT__mem[2]),8);
    bufp->fullCData(oldp+4,(vlSelf->fifo__DOT__mem[3]),8);
    bufp->fullCData(oldp+5,(vlSelf->fifo__DOT__mem[4]),8);
    bufp->fullCData(oldp+6,(vlSelf->fifo__DOT__mem[5]),8);
    bufp->fullCData(oldp+7,(vlSelf->fifo__DOT__mem[6]),8);
    bufp->fullCData(oldp+8,(vlSelf->fifo__DOT__mem[7]),8);
    bufp->fullCData(oldp+9,(vlSelf->fifo__DOT__mem[8]),8);
    bufp->fullCData(oldp+10,(vlSelf->fifo__DOT__mem[9]),8);
    bufp->fullCData(oldp+11,(vlSelf->fifo__DOT__mem[10]),8);
    bufp->fullCData(oldp+12,(vlSelf->fifo__DOT__mem[11]),8);
    bufp->fullCData(oldp+13,(vlSelf->fifo__DOT__mem[12]),8);
    bufp->fullCData(oldp+14,(vlSelf->fifo__DOT__mem[13]),8);
    bufp->fullCData(oldp+15,(vlSelf->fifo__DOT__mem[14]),8);
    bufp->fullCData(oldp+16,(vlSelf->fifo__DOT__mem[15]),8);
    bufp->fullCData(oldp+17,(vlSelf->fifo__DOT__wr_ptr),5);
    bufp->fullCData(oldp+18,(vlSelf->fifo__DOT__rd_ptr),5);
    bufp->fullBit(oldp+19,(vlSelf->clk));
    bufp->fullBit(oldp+20,(vlSelf->rst_n));
    bufp->fullBit(oldp+21,(vlSelf->wr_en));
    bufp->fullBit(oldp+22,(vlSelf->rd_en));
    bufp->fullCData(oldp+23,(vlSelf->din),8);
    bufp->fullCData(oldp+24,(vlSelf->dout),8);
    bufp->fullBit(oldp+25,(vlSelf->full));
    bufp->fullBit(oldp+26,(vlSelf->empty));
}
