// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vparameterized_priority_queue__Syms.h"


void Vparameterized_priority_queue___024root__trace_chg_0_sub_0(Vparameterized_priority_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vparameterized_priority_queue___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_priority_queue___024root__trace_chg_0\n"); );
    // Init
    Vparameterized_priority_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vparameterized_priority_queue___024root*>(voidSelf);
    Vparameterized_priority_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vparameterized_priority_queue___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vparameterized_priority_queue___024root__trace_chg_0_sub_0(Vparameterized_priority_queue___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_priority_queue___024root__trace_chg_0_sub_0\n"); );
    Vparameterized_priority_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.parameterized_priority_queue__DOT__queue_data[0]),8);
        bufp->chgCData(oldp+1,(vlSelfRef.parameterized_priority_queue__DOT__queue_data[1]),8);
        bufp->chgCData(oldp+2,(vlSelfRef.parameterized_priority_queue__DOT__queue_data[2]),8);
        bufp->chgCData(oldp+3,(vlSelfRef.parameterized_priority_queue__DOT__queue_data[3]),8);
        bufp->chgCData(oldp+4,(vlSelfRef.parameterized_priority_queue__DOT__queue_data[4]),8);
        bufp->chgCData(oldp+5,(vlSelfRef.parameterized_priority_queue__DOT__queue_data[5]),8);
        bufp->chgCData(oldp+6,(vlSelfRef.parameterized_priority_queue__DOT__queue_data[6]),8);
        bufp->chgCData(oldp+7,(vlSelfRef.parameterized_priority_queue__DOT__queue_data[7]),8);
        bufp->chgCData(oldp+8,(vlSelfRef.parameterized_priority_queue__DOT__queue_data[8]),8);
        bufp->chgCData(oldp+9,(vlSelfRef.parameterized_priority_queue__DOT__queue_data[9]),8);
        bufp->chgCData(oldp+10,(vlSelfRef.parameterized_priority_queue__DOT__queue_data[10]),8);
        bufp->chgCData(oldp+11,(vlSelfRef.parameterized_priority_queue__DOT__queue_data[11]),8);
        bufp->chgCData(oldp+12,(vlSelfRef.parameterized_priority_queue__DOT__queue_data[12]),8);
        bufp->chgCData(oldp+13,(vlSelfRef.parameterized_priority_queue__DOT__queue_data[13]),8);
        bufp->chgCData(oldp+14,(vlSelfRef.parameterized_priority_queue__DOT__queue_data[14]),8);
        bufp->chgCData(oldp+15,(vlSelfRef.parameterized_priority_queue__DOT__queue_data[15]),8);
        bufp->chgCData(oldp+16,(vlSelfRef.parameterized_priority_queue__DOT__queue_priority[0]),3);
        bufp->chgCData(oldp+17,(vlSelfRef.parameterized_priority_queue__DOT__queue_priority[1]),3);
        bufp->chgCData(oldp+18,(vlSelfRef.parameterized_priority_queue__DOT__queue_priority[2]),3);
        bufp->chgCData(oldp+19,(vlSelfRef.parameterized_priority_queue__DOT__queue_priority[3]),3);
        bufp->chgCData(oldp+20,(vlSelfRef.parameterized_priority_queue__DOT__queue_priority[4]),3);
        bufp->chgCData(oldp+21,(vlSelfRef.parameterized_priority_queue__DOT__queue_priority[5]),3);
        bufp->chgCData(oldp+22,(vlSelfRef.parameterized_priority_queue__DOT__queue_priority[6]),3);
        bufp->chgCData(oldp+23,(vlSelfRef.parameterized_priority_queue__DOT__queue_priority[7]),3);
        bufp->chgCData(oldp+24,(vlSelfRef.parameterized_priority_queue__DOT__queue_priority[8]),3);
        bufp->chgCData(oldp+25,(vlSelfRef.parameterized_priority_queue__DOT__queue_priority[9]),3);
        bufp->chgCData(oldp+26,(vlSelfRef.parameterized_priority_queue__DOT__queue_priority[10]),3);
        bufp->chgCData(oldp+27,(vlSelfRef.parameterized_priority_queue__DOT__queue_priority[11]),3);
        bufp->chgCData(oldp+28,(vlSelfRef.parameterized_priority_queue__DOT__queue_priority[12]),3);
        bufp->chgCData(oldp+29,(vlSelfRef.parameterized_priority_queue__DOT__queue_priority[13]),3);
        bufp->chgCData(oldp+30,(vlSelfRef.parameterized_priority_queue__DOT__queue_priority[14]),3);
        bufp->chgCData(oldp+31,(vlSelfRef.parameterized_priority_queue__DOT__queue_priority[15]),3);
        bufp->chgCData(oldp+32,(vlSelfRef.parameterized_priority_queue__DOT__count),5);
        bufp->chgIData(oldp+33,(vlSelfRef.parameterized_priority_queue__DOT__i),32);
        bufp->chgCData(oldp+34,(vlSelfRef.parameterized_priority_queue__DOT__insert_idx),5);
        bufp->chgCData(oldp+35,(vlSelfRef.parameterized_priority_queue__DOT__temp_data[0]),8);
        bufp->chgCData(oldp+36,(vlSelfRef.parameterized_priority_queue__DOT__temp_data[1]),8);
        bufp->chgCData(oldp+37,(vlSelfRef.parameterized_priority_queue__DOT__temp_data[2]),8);
        bufp->chgCData(oldp+38,(vlSelfRef.parameterized_priority_queue__DOT__temp_data[3]),8);
        bufp->chgCData(oldp+39,(vlSelfRef.parameterized_priority_queue__DOT__temp_data[4]),8);
        bufp->chgCData(oldp+40,(vlSelfRef.parameterized_priority_queue__DOT__temp_data[5]),8);
        bufp->chgCData(oldp+41,(vlSelfRef.parameterized_priority_queue__DOT__temp_data[6]),8);
        bufp->chgCData(oldp+42,(vlSelfRef.parameterized_priority_queue__DOT__temp_data[7]),8);
        bufp->chgCData(oldp+43,(vlSelfRef.parameterized_priority_queue__DOT__temp_data[8]),8);
        bufp->chgCData(oldp+44,(vlSelfRef.parameterized_priority_queue__DOT__temp_data[9]),8);
        bufp->chgCData(oldp+45,(vlSelfRef.parameterized_priority_queue__DOT__temp_data[10]),8);
        bufp->chgCData(oldp+46,(vlSelfRef.parameterized_priority_queue__DOT__temp_data[11]),8);
        bufp->chgCData(oldp+47,(vlSelfRef.parameterized_priority_queue__DOT__temp_data[12]),8);
        bufp->chgCData(oldp+48,(vlSelfRef.parameterized_priority_queue__DOT__temp_data[13]),8);
        bufp->chgCData(oldp+49,(vlSelfRef.parameterized_priority_queue__DOT__temp_data[14]),8);
        bufp->chgCData(oldp+50,(vlSelfRef.parameterized_priority_queue__DOT__temp_data[15]),8);
        bufp->chgCData(oldp+51,(vlSelfRef.parameterized_priority_queue__DOT__temp_priority[0]),3);
        bufp->chgCData(oldp+52,(vlSelfRef.parameterized_priority_queue__DOT__temp_priority[1]),3);
        bufp->chgCData(oldp+53,(vlSelfRef.parameterized_priority_queue__DOT__temp_priority[2]),3);
        bufp->chgCData(oldp+54,(vlSelfRef.parameterized_priority_queue__DOT__temp_priority[3]),3);
        bufp->chgCData(oldp+55,(vlSelfRef.parameterized_priority_queue__DOT__temp_priority[4]),3);
        bufp->chgCData(oldp+56,(vlSelfRef.parameterized_priority_queue__DOT__temp_priority[5]),3);
        bufp->chgCData(oldp+57,(vlSelfRef.parameterized_priority_queue__DOT__temp_priority[6]),3);
        bufp->chgCData(oldp+58,(vlSelfRef.parameterized_priority_queue__DOT__temp_priority[7]),3);
        bufp->chgCData(oldp+59,(vlSelfRef.parameterized_priority_queue__DOT__temp_priority[8]),3);
        bufp->chgCData(oldp+60,(vlSelfRef.parameterized_priority_queue__DOT__temp_priority[9]),3);
        bufp->chgCData(oldp+61,(vlSelfRef.parameterized_priority_queue__DOT__temp_priority[10]),3);
        bufp->chgCData(oldp+62,(vlSelfRef.parameterized_priority_queue__DOT__temp_priority[11]),3);
        bufp->chgCData(oldp+63,(vlSelfRef.parameterized_priority_queue__DOT__temp_priority[12]),3);
        bufp->chgCData(oldp+64,(vlSelfRef.parameterized_priority_queue__DOT__temp_priority[13]),3);
        bufp->chgCData(oldp+65,(vlSelfRef.parameterized_priority_queue__DOT__temp_priority[14]),3);
        bufp->chgCData(oldp+66,(vlSelfRef.parameterized_priority_queue__DOT__temp_priority[15]),3);
    }
    bufp->chgBit(oldp+67,(vlSelfRef.clk));
    bufp->chgBit(oldp+68,(vlSelfRef.rst_n));
    bufp->chgCData(oldp+69,(vlSelfRef.i_data),8);
    bufp->chgCData(oldp+70,(vlSelfRef.i_priority),3);
    bufp->chgBit(oldp+71,(vlSelfRef.i_enqueue));
    bufp->chgBit(oldp+72,(vlSelfRef.o_full));
    bufp->chgCData(oldp+73,(vlSelfRef.o_data),8);
    bufp->chgCData(oldp+74,(vlSelfRef.o_priority),3);
    bufp->chgBit(oldp+75,(vlSelfRef.i_dequeue));
    bufp->chgBit(oldp+76,(vlSelfRef.o_empty));
    bufp->chgCData(oldp+77,(vlSelfRef.o_count),5);
}

void Vparameterized_priority_queue___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_priority_queue___024root__trace_cleanup\n"); );
    // Init
    Vparameterized_priority_queue___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vparameterized_priority_queue___024root*>(voidSelf);
    Vparameterized_priority_queue__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
