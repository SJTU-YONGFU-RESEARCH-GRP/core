// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vparameterized_priority_queue__Syms.h"


VL_ATTR_COLD void Vparameterized_priority_queue___024root__trace_init_sub__TOP__0(Vparameterized_priority_queue___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_priority_queue___024root__trace_init_sub__TOP__0\n"); );
    Vparameterized_priority_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+68,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+70,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+71,0,"i_priority",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+72,0,"i_enqueue",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"o_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+75,0,"o_priority",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+76,0,"i_dequeue",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"o_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+78,0,"o_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("parameterized_priority_queue", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+79,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"QUEUE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"PRIORITY_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"HIGH_PRIORITY_FIRST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+68,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+70,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+71,0,"i_priority",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+72,0,"i_enqueue",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"o_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+75,0,"o_priority",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+76,0,"i_dequeue",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"o_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+78,0,"o_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("queue_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("queue_priority", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+17+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+33,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+34,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+35,0,"insert_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("temp_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+36+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("temp_priority", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+52+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vparameterized_priority_queue___024root__trace_init_top(Vparameterized_priority_queue___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_priority_queue___024root__trace_init_top\n"); );
    Vparameterized_priority_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vparameterized_priority_queue___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vparameterized_priority_queue___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vparameterized_priority_queue___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vparameterized_priority_queue___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vparameterized_priority_queue___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vparameterized_priority_queue___024root__trace_register(Vparameterized_priority_queue___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_priority_queue___024root__trace_register\n"); );
    Vparameterized_priority_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vparameterized_priority_queue___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vparameterized_priority_queue___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vparameterized_priority_queue___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vparameterized_priority_queue___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vparameterized_priority_queue___024root__trace_const_0_sub_0(Vparameterized_priority_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vparameterized_priority_queue___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_priority_queue___024root__trace_const_0\n"); );
    // Init
    Vparameterized_priority_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vparameterized_priority_queue___024root*>(voidSelf);
    Vparameterized_priority_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vparameterized_priority_queue___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vparameterized_priority_queue___024root__trace_const_0_sub_0(Vparameterized_priority_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_priority_queue___024root__trace_const_0_sub_0\n"); );
    Vparameterized_priority_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+79,(8U),32);
    bufp->fullIData(oldp+80,(4U),32);
    bufp->fullIData(oldp+81,(0x10U),32);
    bufp->fullIData(oldp+82,(3U),32);
    bufp->fullIData(oldp+83,(1U),32);
}

VL_ATTR_COLD void Vparameterized_priority_queue___024root__trace_full_0_sub_0(Vparameterized_priority_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vparameterized_priority_queue___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_priority_queue___024root__trace_full_0\n"); );
    // Init
    Vparameterized_priority_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vparameterized_priority_queue___024root*>(voidSelf);
    Vparameterized_priority_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vparameterized_priority_queue___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vparameterized_priority_queue___024root__trace_full_0_sub_0(Vparameterized_priority_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_priority_queue___024root__trace_full_0_sub_0\n"); );
    Vparameterized_priority_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.parameterized_priority_queue__DOT__queue_data[0]),8);
    bufp->fullCData(oldp+2,(vlSelfRef.parameterized_priority_queue__DOT__queue_data[1]),8);
    bufp->fullCData(oldp+3,(vlSelfRef.parameterized_priority_queue__DOT__queue_data[2]),8);
    bufp->fullCData(oldp+4,(vlSelfRef.parameterized_priority_queue__DOT__queue_data[3]),8);
    bufp->fullCData(oldp+5,(vlSelfRef.parameterized_priority_queue__DOT__queue_data[4]),8);
    bufp->fullCData(oldp+6,(vlSelfRef.parameterized_priority_queue__DOT__queue_data[5]),8);
    bufp->fullCData(oldp+7,(vlSelfRef.parameterized_priority_queue__DOT__queue_data[6]),8);
    bufp->fullCData(oldp+8,(vlSelfRef.parameterized_priority_queue__DOT__queue_data[7]),8);
    bufp->fullCData(oldp+9,(vlSelfRef.parameterized_priority_queue__DOT__queue_data[8]),8);
    bufp->fullCData(oldp+10,(vlSelfRef.parameterized_priority_queue__DOT__queue_data[9]),8);
    bufp->fullCData(oldp+11,(vlSelfRef.parameterized_priority_queue__DOT__queue_data[10]),8);
    bufp->fullCData(oldp+12,(vlSelfRef.parameterized_priority_queue__DOT__queue_data[11]),8);
    bufp->fullCData(oldp+13,(vlSelfRef.parameterized_priority_queue__DOT__queue_data[12]),8);
    bufp->fullCData(oldp+14,(vlSelfRef.parameterized_priority_queue__DOT__queue_data[13]),8);
    bufp->fullCData(oldp+15,(vlSelfRef.parameterized_priority_queue__DOT__queue_data[14]),8);
    bufp->fullCData(oldp+16,(vlSelfRef.parameterized_priority_queue__DOT__queue_data[15]),8);
    bufp->fullCData(oldp+17,(vlSelfRef.parameterized_priority_queue__DOT__queue_priority[0]),3);
    bufp->fullCData(oldp+18,(vlSelfRef.parameterized_priority_queue__DOT__queue_priority[1]),3);
    bufp->fullCData(oldp+19,(vlSelfRef.parameterized_priority_queue__DOT__queue_priority[2]),3);
    bufp->fullCData(oldp+20,(vlSelfRef.parameterized_priority_queue__DOT__queue_priority[3]),3);
    bufp->fullCData(oldp+21,(vlSelfRef.parameterized_priority_queue__DOT__queue_priority[4]),3);
    bufp->fullCData(oldp+22,(vlSelfRef.parameterized_priority_queue__DOT__queue_priority[5]),3);
    bufp->fullCData(oldp+23,(vlSelfRef.parameterized_priority_queue__DOT__queue_priority[6]),3);
    bufp->fullCData(oldp+24,(vlSelfRef.parameterized_priority_queue__DOT__queue_priority[7]),3);
    bufp->fullCData(oldp+25,(vlSelfRef.parameterized_priority_queue__DOT__queue_priority[8]),3);
    bufp->fullCData(oldp+26,(vlSelfRef.parameterized_priority_queue__DOT__queue_priority[9]),3);
    bufp->fullCData(oldp+27,(vlSelfRef.parameterized_priority_queue__DOT__queue_priority[10]),3);
    bufp->fullCData(oldp+28,(vlSelfRef.parameterized_priority_queue__DOT__queue_priority[11]),3);
    bufp->fullCData(oldp+29,(vlSelfRef.parameterized_priority_queue__DOT__queue_priority[12]),3);
    bufp->fullCData(oldp+30,(vlSelfRef.parameterized_priority_queue__DOT__queue_priority[13]),3);
    bufp->fullCData(oldp+31,(vlSelfRef.parameterized_priority_queue__DOT__queue_priority[14]),3);
    bufp->fullCData(oldp+32,(vlSelfRef.parameterized_priority_queue__DOT__queue_priority[15]),3);
    bufp->fullCData(oldp+33,(vlSelfRef.parameterized_priority_queue__DOT__count),5);
    bufp->fullIData(oldp+34,(vlSelfRef.parameterized_priority_queue__DOT__i),32);
    bufp->fullCData(oldp+35,(vlSelfRef.parameterized_priority_queue__DOT__insert_idx),5);
    bufp->fullCData(oldp+36,(vlSelfRef.parameterized_priority_queue__DOT__temp_data[0]),8);
    bufp->fullCData(oldp+37,(vlSelfRef.parameterized_priority_queue__DOT__temp_data[1]),8);
    bufp->fullCData(oldp+38,(vlSelfRef.parameterized_priority_queue__DOT__temp_data[2]),8);
    bufp->fullCData(oldp+39,(vlSelfRef.parameterized_priority_queue__DOT__temp_data[3]),8);
    bufp->fullCData(oldp+40,(vlSelfRef.parameterized_priority_queue__DOT__temp_data[4]),8);
    bufp->fullCData(oldp+41,(vlSelfRef.parameterized_priority_queue__DOT__temp_data[5]),8);
    bufp->fullCData(oldp+42,(vlSelfRef.parameterized_priority_queue__DOT__temp_data[6]),8);
    bufp->fullCData(oldp+43,(vlSelfRef.parameterized_priority_queue__DOT__temp_data[7]),8);
    bufp->fullCData(oldp+44,(vlSelfRef.parameterized_priority_queue__DOT__temp_data[8]),8);
    bufp->fullCData(oldp+45,(vlSelfRef.parameterized_priority_queue__DOT__temp_data[9]),8);
    bufp->fullCData(oldp+46,(vlSelfRef.parameterized_priority_queue__DOT__temp_data[10]),8);
    bufp->fullCData(oldp+47,(vlSelfRef.parameterized_priority_queue__DOT__temp_data[11]),8);
    bufp->fullCData(oldp+48,(vlSelfRef.parameterized_priority_queue__DOT__temp_data[12]),8);
    bufp->fullCData(oldp+49,(vlSelfRef.parameterized_priority_queue__DOT__temp_data[13]),8);
    bufp->fullCData(oldp+50,(vlSelfRef.parameterized_priority_queue__DOT__temp_data[14]),8);
    bufp->fullCData(oldp+51,(vlSelfRef.parameterized_priority_queue__DOT__temp_data[15]),8);
    bufp->fullCData(oldp+52,(vlSelfRef.parameterized_priority_queue__DOT__temp_priority[0]),3);
    bufp->fullCData(oldp+53,(vlSelfRef.parameterized_priority_queue__DOT__temp_priority[1]),3);
    bufp->fullCData(oldp+54,(vlSelfRef.parameterized_priority_queue__DOT__temp_priority[2]),3);
    bufp->fullCData(oldp+55,(vlSelfRef.parameterized_priority_queue__DOT__temp_priority[3]),3);
    bufp->fullCData(oldp+56,(vlSelfRef.parameterized_priority_queue__DOT__temp_priority[4]),3);
    bufp->fullCData(oldp+57,(vlSelfRef.parameterized_priority_queue__DOT__temp_priority[5]),3);
    bufp->fullCData(oldp+58,(vlSelfRef.parameterized_priority_queue__DOT__temp_priority[6]),3);
    bufp->fullCData(oldp+59,(vlSelfRef.parameterized_priority_queue__DOT__temp_priority[7]),3);
    bufp->fullCData(oldp+60,(vlSelfRef.parameterized_priority_queue__DOT__temp_priority[8]),3);
    bufp->fullCData(oldp+61,(vlSelfRef.parameterized_priority_queue__DOT__temp_priority[9]),3);
    bufp->fullCData(oldp+62,(vlSelfRef.parameterized_priority_queue__DOT__temp_priority[10]),3);
    bufp->fullCData(oldp+63,(vlSelfRef.parameterized_priority_queue__DOT__temp_priority[11]),3);
    bufp->fullCData(oldp+64,(vlSelfRef.parameterized_priority_queue__DOT__temp_priority[12]),3);
    bufp->fullCData(oldp+65,(vlSelfRef.parameterized_priority_queue__DOT__temp_priority[13]),3);
    bufp->fullCData(oldp+66,(vlSelfRef.parameterized_priority_queue__DOT__temp_priority[14]),3);
    bufp->fullCData(oldp+67,(vlSelfRef.parameterized_priority_queue__DOT__temp_priority[15]),3);
    bufp->fullBit(oldp+68,(vlSelfRef.clk));
    bufp->fullBit(oldp+69,(vlSelfRef.rst_n));
    bufp->fullCData(oldp+70,(vlSelfRef.i_data),8);
    bufp->fullCData(oldp+71,(vlSelfRef.i_priority),3);
    bufp->fullBit(oldp+72,(vlSelfRef.i_enqueue));
    bufp->fullBit(oldp+73,(vlSelfRef.o_full));
    bufp->fullCData(oldp+74,(vlSelfRef.o_data),8);
    bufp->fullCData(oldp+75,(vlSelfRef.o_priority),3);
    bufp->fullBit(oldp+76,(vlSelfRef.i_dequeue));
    bufp->fullBit(oldp+77,(vlSelfRef.o_empty));
    bufp->fullCData(oldp+78,(vlSelfRef.o_count),5);
}
