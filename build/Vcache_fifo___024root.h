// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcache_fifo.h for the primary calling header

#ifndef VERILATED_VCACHE_FIFO___024ROOT_H_
#define VERILATED_VCACHE_FIFO___024ROOT_H_  // guard

#include "verilated.h"


class Vcache_fifo__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcache_fifo___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(wr_en,0,0);
    VL_IN8(wr_tag,7,0);
    VL_OUT8(wr_ready,0,0);
    VL_IN8(rd_en,0,0);
    VL_IN8(rd_tag,7,0);
    VL_OUT8(rd_valid,0,0);
    VL_OUT8(rd_hit,0,0);
    VL_OUT8(full,0,0);
    VL_OUT8(empty,0,0);
    VL_OUT8(data_count,4,0);
    VL_IN8(clear_stats,0,0);
    CData/*4:0*/ cache_fifo__DOT__wr_ptr;
    CData/*4:0*/ cache_fifo__DOT__rd_ptr;
    CData/*3:0*/ cache_fifo__DOT__search_idx;
    CData/*1:0*/ cache_fifo__DOT__fifo_replacement_ptr;
    CData/*7:0*/ cache_fifo__DOT__cache_tags0;
    CData/*7:0*/ cache_fifo__DOT__cache_tags1;
    CData/*7:0*/ cache_fifo__DOT__cache_tags2;
    CData/*7:0*/ cache_fifo__DOT__cache_tags3;
    CData/*0:0*/ cache_fifo__DOT__cache_valid0;
    CData/*0:0*/ cache_fifo__DOT__cache_valid1;
    CData/*0:0*/ cache_fifo__DOT__cache_valid2;
    CData/*0:0*/ cache_fifo__DOT__cache_valid3;
    CData/*1:0*/ cache_fifo__DOT__lru_counters0;
    CData/*1:0*/ cache_fifo__DOT__lru_counters1;
    CData/*1:0*/ cache_fifo__DOT__lru_counters2;
    CData/*1:0*/ cache_fifo__DOT__lru_counters3;
    CData/*1:0*/ cache_fifo__DOT__cache_idx_reg;
    CData/*3:0*/ cache_fifo__DOT__matched_tag;
    CData/*1:0*/ cache_fifo__DOT__hit_index;
    CData/*0:0*/ cache_fifo__DOT__rd_valid_reg;
    CData/*1:0*/ cache_fifo__DOT__find_lru_index__Vstatic__min_idx;
    CData/*1:0*/ cache_fifo__DOT__find_lru_index__Vstatic__min_counter;
    CData/*1:0*/ cache_fifo__DOT__find_lru_index__Vstatic__counter_i;
    CData/*1:0*/ cache_fifo__DOT__find_cache_index__Vstatic__idx;
    CData/*0:0*/ cache_fifo__DOT__find_cache_index__Vstatic__found_empty;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(wr_data,31,0);
    VL_OUT(rd_data,31,0);
    VL_OUT(cache_hits,31,0);
    VL_OUT(cache_misses,31,0);
    VL_OUT(hit_ratio,31,0);
    IData/*31:0*/ cache_fifo__DOT__cache_data0;
    IData/*31:0*/ cache_fifo__DOT__cache_data1;
    IData/*31:0*/ cache_fifo__DOT__cache_data2;
    IData/*31:0*/ cache_fifo__DOT__cache_data3;
    IData/*31:0*/ cache_fifo__DOT__i;
    IData/*31:0*/ cache_fifo__DOT__k;
    IData/*31:0*/ cache_fifo__DOT__find_lru_index__Vstatic__j;
    IData/*31:0*/ cache_fifo__DOT__find_cache_index__Vstatic__j;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 16> cache_fifo__DOT__mem;
    VlUnpacked<CData/*7:0*/, 16> cache_fifo__DOT__tag_mem;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcache_fifo__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcache_fifo___024root(Vcache_fifo__Syms* symsp, const char* v__name);
    ~Vcache_fifo___024root();
    VL_UNCOPYABLE(Vcache_fifo___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
