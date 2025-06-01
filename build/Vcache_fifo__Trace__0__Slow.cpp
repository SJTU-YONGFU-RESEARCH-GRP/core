// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcache_fifo__Syms.h"


VL_ATTR_COLD void Vcache_fifo___024root__trace_init_sub__TOP__0(Vcache_fifo___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_fifo___024root__trace_init_sub__TOP__0\n"); );
    Vcache_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+57,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"wr_tag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+62,0,"wr_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"rd_tag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+65,0,"rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+66,0,"rd_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"rd_hit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+70,0,"data_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+71,0,"cache_hits",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"cache_misses",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"hit_ratio",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+74,0,"clear_stats",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("cache_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+75,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"TAG_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"CACHE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"LRU_POLICY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+57,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"wr_tag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+62,0,"wr_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"rd_tag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+65,0,"rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+66,0,"rd_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"rd_hit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+70,0,"data_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+71,0,"cache_hits",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"cache_misses",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"hit_ratio",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+74,0,"clear_stats",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("tag_mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+17+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+33,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+34,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+35,0,"search_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+36,0,"fifo_replacement_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+37,0,"cache_data0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"cache_data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"cache_data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"cache_data3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"cache_tags0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+42,0,"cache_tags1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+43,0,"cache_tags2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+44,0,"cache_tags3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+45,0,"cache_valid0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"cache_valid1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"cache_valid2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"cache_valid3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"lru_counters0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+50,0,"lru_counters1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+51,0,"lru_counters2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+52,0,"lru_counters3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+79,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+80,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+53,0,"cache_idx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+54,0,"matched_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+55,0,"hit_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+70,0,"fifo_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+56,0,"rd_valid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"find_lru_index__Vstatic__j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+82,0,"find_lru_index__Vstatic__min_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+83,0,"find_lru_index__Vstatic__min_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+84,0,"find_lru_index__Vstatic__counter_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+85,0,"find_cache_index__Vstatic__j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+86,0,"find_cache_index__Vstatic__idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+87,0,"find_cache_index__Vstatic__found_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"debug_hit_ratio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcache_fifo___024root__trace_init_top(Vcache_fifo___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_fifo___024root__trace_init_top\n"); );
    Vcache_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcache_fifo___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcache_fifo___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vcache_fifo___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcache_fifo___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcache_fifo___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcache_fifo___024root__trace_register(Vcache_fifo___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_fifo___024root__trace_register\n"); );
    Vcache_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vcache_fifo___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vcache_fifo___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vcache_fifo___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vcache_fifo___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcache_fifo___024root__trace_const_0_sub_0(Vcache_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcache_fifo___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_fifo___024root__trace_const_0\n"); );
    // Init
    Vcache_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcache_fifo___024root*>(voidSelf);
    Vcache_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcache_fifo___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcache_fifo___024root__trace_const_0_sub_0(Vcache_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_fifo___024root__trace_const_0_sub_0\n"); );
    Vcache_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+75,(0x20U),32);
    bufp->fullIData(oldp+76,(4U),32);
    bufp->fullIData(oldp+77,(8U),32);
    bufp->fullIData(oldp+78,(1U),32);
    bufp->fullIData(oldp+79,(vlSelfRef.cache_fifo__DOT__i),32);
    bufp->fullIData(oldp+80,(vlSelfRef.cache_fifo__DOT__k),32);
    bufp->fullIData(oldp+81,(vlSelfRef.cache_fifo__DOT__find_lru_index__Vstatic__j),32);
    bufp->fullCData(oldp+82,(vlSelfRef.cache_fifo__DOT__find_lru_index__Vstatic__min_idx),2);
    bufp->fullCData(oldp+83,(vlSelfRef.cache_fifo__DOT__find_lru_index__Vstatic__min_counter),2);
    bufp->fullCData(oldp+84,(vlSelfRef.cache_fifo__DOT__find_lru_index__Vstatic__counter_i),2);
    bufp->fullIData(oldp+85,(vlSelfRef.cache_fifo__DOT__find_cache_index__Vstatic__j),32);
    bufp->fullCData(oldp+86,(vlSelfRef.cache_fifo__DOT__find_cache_index__Vstatic__idx),2);
    bufp->fullBit(oldp+87,(vlSelfRef.cache_fifo__DOT__find_cache_index__Vstatic__found_empty));
}

VL_ATTR_COLD void Vcache_fifo___024root__trace_full_0_sub_0(Vcache_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcache_fifo___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_fifo___024root__trace_full_0\n"); );
    // Init
    Vcache_fifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcache_fifo___024root*>(voidSelf);
    Vcache_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcache_fifo___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcache_fifo___024root__trace_full_0_sub_0(Vcache_fifo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_fifo___024root__trace_full_0_sub_0\n"); );
    Vcache_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.cache_fifo__DOT__mem[0]),32);
    bufp->fullIData(oldp+2,(vlSelfRef.cache_fifo__DOT__mem[1]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.cache_fifo__DOT__mem[2]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.cache_fifo__DOT__mem[3]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.cache_fifo__DOT__mem[4]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.cache_fifo__DOT__mem[5]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.cache_fifo__DOT__mem[6]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.cache_fifo__DOT__mem[7]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.cache_fifo__DOT__mem[8]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.cache_fifo__DOT__mem[9]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.cache_fifo__DOT__mem[10]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.cache_fifo__DOT__mem[11]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.cache_fifo__DOT__mem[12]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.cache_fifo__DOT__mem[13]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.cache_fifo__DOT__mem[14]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.cache_fifo__DOT__mem[15]),32);
    bufp->fullCData(oldp+17,(vlSelfRef.cache_fifo__DOT__tag_mem[0]),8);
    bufp->fullCData(oldp+18,(vlSelfRef.cache_fifo__DOT__tag_mem[1]),8);
    bufp->fullCData(oldp+19,(vlSelfRef.cache_fifo__DOT__tag_mem[2]),8);
    bufp->fullCData(oldp+20,(vlSelfRef.cache_fifo__DOT__tag_mem[3]),8);
    bufp->fullCData(oldp+21,(vlSelfRef.cache_fifo__DOT__tag_mem[4]),8);
    bufp->fullCData(oldp+22,(vlSelfRef.cache_fifo__DOT__tag_mem[5]),8);
    bufp->fullCData(oldp+23,(vlSelfRef.cache_fifo__DOT__tag_mem[6]),8);
    bufp->fullCData(oldp+24,(vlSelfRef.cache_fifo__DOT__tag_mem[7]),8);
    bufp->fullCData(oldp+25,(vlSelfRef.cache_fifo__DOT__tag_mem[8]),8);
    bufp->fullCData(oldp+26,(vlSelfRef.cache_fifo__DOT__tag_mem[9]),8);
    bufp->fullCData(oldp+27,(vlSelfRef.cache_fifo__DOT__tag_mem[10]),8);
    bufp->fullCData(oldp+28,(vlSelfRef.cache_fifo__DOT__tag_mem[11]),8);
    bufp->fullCData(oldp+29,(vlSelfRef.cache_fifo__DOT__tag_mem[12]),8);
    bufp->fullCData(oldp+30,(vlSelfRef.cache_fifo__DOT__tag_mem[13]),8);
    bufp->fullCData(oldp+31,(vlSelfRef.cache_fifo__DOT__tag_mem[14]),8);
    bufp->fullCData(oldp+32,(vlSelfRef.cache_fifo__DOT__tag_mem[15]),8);
    bufp->fullCData(oldp+33,(vlSelfRef.cache_fifo__DOT__wr_ptr),5);
    bufp->fullCData(oldp+34,(vlSelfRef.cache_fifo__DOT__rd_ptr),5);
    bufp->fullCData(oldp+35,(vlSelfRef.cache_fifo__DOT__search_idx),4);
    bufp->fullCData(oldp+36,(vlSelfRef.cache_fifo__DOT__fifo_replacement_ptr),2);
    bufp->fullIData(oldp+37,(vlSelfRef.cache_fifo__DOT__cache_data0),32);
    bufp->fullIData(oldp+38,(vlSelfRef.cache_fifo__DOT__cache_data1),32);
    bufp->fullIData(oldp+39,(vlSelfRef.cache_fifo__DOT__cache_data2),32);
    bufp->fullIData(oldp+40,(vlSelfRef.cache_fifo__DOT__cache_data3),32);
    bufp->fullCData(oldp+41,(vlSelfRef.cache_fifo__DOT__cache_tags0),8);
    bufp->fullCData(oldp+42,(vlSelfRef.cache_fifo__DOT__cache_tags1),8);
    bufp->fullCData(oldp+43,(vlSelfRef.cache_fifo__DOT__cache_tags2),8);
    bufp->fullCData(oldp+44,(vlSelfRef.cache_fifo__DOT__cache_tags3),8);
    bufp->fullBit(oldp+45,(vlSelfRef.cache_fifo__DOT__cache_valid0));
    bufp->fullBit(oldp+46,(vlSelfRef.cache_fifo__DOT__cache_valid1));
    bufp->fullBit(oldp+47,(vlSelfRef.cache_fifo__DOT__cache_valid2));
    bufp->fullBit(oldp+48,(vlSelfRef.cache_fifo__DOT__cache_valid3));
    bufp->fullCData(oldp+49,(vlSelfRef.cache_fifo__DOT__lru_counters0),2);
    bufp->fullCData(oldp+50,(vlSelfRef.cache_fifo__DOT__lru_counters1),2);
    bufp->fullCData(oldp+51,(vlSelfRef.cache_fifo__DOT__lru_counters2),2);
    bufp->fullCData(oldp+52,(vlSelfRef.cache_fifo__DOT__lru_counters3),2);
    bufp->fullCData(oldp+53,(vlSelfRef.cache_fifo__DOT__cache_idx_reg),2);
    bufp->fullCData(oldp+54,(vlSelfRef.cache_fifo__DOT__matched_tag),4);
    bufp->fullCData(oldp+55,(vlSelfRef.cache_fifo__DOT__hit_index),2);
    bufp->fullBit(oldp+56,(vlSelfRef.cache_fifo__DOT__rd_valid_reg));
    bufp->fullBit(oldp+57,(vlSelfRef.clk));
    bufp->fullBit(oldp+58,(vlSelfRef.rst_n));
    bufp->fullBit(oldp+59,(vlSelfRef.wr_en));
    bufp->fullIData(oldp+60,(vlSelfRef.wr_data),32);
    bufp->fullCData(oldp+61,(vlSelfRef.wr_tag),8);
    bufp->fullBit(oldp+62,(vlSelfRef.wr_ready));
    bufp->fullBit(oldp+63,(vlSelfRef.rd_en));
    bufp->fullCData(oldp+64,(vlSelfRef.rd_tag),8);
    bufp->fullIData(oldp+65,(vlSelfRef.rd_data),32);
    bufp->fullBit(oldp+66,(vlSelfRef.rd_valid));
    bufp->fullBit(oldp+67,(vlSelfRef.rd_hit));
    bufp->fullBit(oldp+68,(vlSelfRef.full));
    bufp->fullBit(oldp+69,(vlSelfRef.empty));
    bufp->fullCData(oldp+70,(vlSelfRef.data_count),5);
    bufp->fullIData(oldp+71,(vlSelfRef.cache_hits),32);
    bufp->fullIData(oldp+72,(vlSelfRef.cache_misses),32);
    bufp->fullIData(oldp+73,(vlSelfRef.hit_ratio),32);
    bufp->fullBit(oldp+74,(vlSelfRef.clear_stats));
}
