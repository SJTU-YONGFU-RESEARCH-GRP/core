// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vconfigurable_sync_fifo__Syms.h"


VL_ATTR_COLD void Vconfigurable_sync_fifo___024root__trace_init_sub__TOP__0(Vconfigurable_sync_fifo___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+17,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+22,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+23,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"almost_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"almost_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"fill_level",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("configurable_sync_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+33,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"ALMOST_FULL_THRESHOLD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"ALMOST_EMPTY_THRESHOLD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+22,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+23,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"almost_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"almost_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"fill_level",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+36,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+28,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+29,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+30,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+31,0,"wr_allow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"rd_allow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vconfigurable_sync_fifo___024root__trace_init_top(Vconfigurable_sync_fifo___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root__trace_init_top\n"); );
    // Body
    Vconfigurable_sync_fifo___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vconfigurable_sync_fifo___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vconfigurable_sync_fifo___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vconfigurable_sync_fifo___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vconfigurable_sync_fifo___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vconfigurable_sync_fifo___024root__trace_register(Vconfigurable_sync_fifo___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vconfigurable_sync_fifo___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vconfigurable_sync_fifo___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vconfigurable_sync_fifo___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vconfigurable_sync_fifo___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vconfigurable_sync_fifo___024root__trace_const_0_sub_0(Vconfigurable_sync_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vconfigurable_sync_fifo___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root__trace_const_0\n"); );
    // Init
    Vconfigurable_sync_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconfigurable_sync_fifo___024root*>(voidSelf);
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vconfigurable_sync_fifo___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vconfigurable_sync_fifo___024root__trace_const_0_sub_0(Vconfigurable_sync_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+33,(8U),32);
    bufp->fullIData(oldp+34,(0x10U),32);
    bufp->fullIData(oldp+35,(0xcU),32);
    bufp->fullIData(oldp+36,(4U),32);
}

VL_ATTR_COLD void Vconfigurable_sync_fifo___024root__trace_full_0_sub_0(Vconfigurable_sync_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vconfigurable_sync_fifo___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root__trace_full_0\n"); );
    // Init
    Vconfigurable_sync_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconfigurable_sync_fifo___024root*>(voidSelf);
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vconfigurable_sync_fifo___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vconfigurable_sync_fifo___024root__trace_full_0_sub_0(Vconfigurable_sync_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfigurable_sync_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_sync_fifo___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->configurable_sync_fifo__DOT__mem[0]),8);
    bufp->fullCData(oldp+2,(vlSelf->configurable_sync_fifo__DOT__mem[1]),8);
    bufp->fullCData(oldp+3,(vlSelf->configurable_sync_fifo__DOT__mem[2]),8);
    bufp->fullCData(oldp+4,(vlSelf->configurable_sync_fifo__DOT__mem[3]),8);
    bufp->fullCData(oldp+5,(vlSelf->configurable_sync_fifo__DOT__mem[4]),8);
    bufp->fullCData(oldp+6,(vlSelf->configurable_sync_fifo__DOT__mem[5]),8);
    bufp->fullCData(oldp+7,(vlSelf->configurable_sync_fifo__DOT__mem[6]),8);
    bufp->fullCData(oldp+8,(vlSelf->configurable_sync_fifo__DOT__mem[7]),8);
    bufp->fullCData(oldp+9,(vlSelf->configurable_sync_fifo__DOT__mem[8]),8);
    bufp->fullCData(oldp+10,(vlSelf->configurable_sync_fifo__DOT__mem[9]),8);
    bufp->fullCData(oldp+11,(vlSelf->configurable_sync_fifo__DOT__mem[10]),8);
    bufp->fullCData(oldp+12,(vlSelf->configurable_sync_fifo__DOT__mem[11]),8);
    bufp->fullCData(oldp+13,(vlSelf->configurable_sync_fifo__DOT__mem[12]),8);
    bufp->fullCData(oldp+14,(vlSelf->configurable_sync_fifo__DOT__mem[13]),8);
    bufp->fullCData(oldp+15,(vlSelf->configurable_sync_fifo__DOT__mem[14]),8);
    bufp->fullCData(oldp+16,(vlSelf->configurable_sync_fifo__DOT__mem[15]),8);
    bufp->fullBit(oldp+17,(vlSelf->clk));
    bufp->fullBit(oldp+18,(vlSelf->rst_n));
    bufp->fullBit(oldp+19,(vlSelf->wr_en));
    bufp->fullBit(oldp+20,(vlSelf->rd_en));
    bufp->fullCData(oldp+21,(vlSelf->data_in),8);
    bufp->fullCData(oldp+22,(vlSelf->data_out),8);
    bufp->fullBit(oldp+23,(vlSelf->full));
    bufp->fullBit(oldp+24,(vlSelf->empty));
    bufp->fullBit(oldp+25,(vlSelf->almost_full));
    bufp->fullBit(oldp+26,(vlSelf->almost_empty));
    bufp->fullCData(oldp+27,(vlSelf->fill_level),5);
    bufp->fullCData(oldp+28,(vlSelf->configurable_sync_fifo__DOT__wr_ptr),4);
    bufp->fullCData(oldp+29,(vlSelf->configurable_sync_fifo__DOT__rd_ptr),4);
    bufp->fullCData(oldp+30,(vlSelf->configurable_sync_fifo__DOT__count),5);
    bufp->fullBit(oldp+31,(vlSelf->configurable_sync_fifo__DOT__wr_allow));
    bufp->fullBit(oldp+32,(vlSelf->configurable_sync_fifo__DOT__rd_allow));
}
