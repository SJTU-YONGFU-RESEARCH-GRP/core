// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmulti_ported_fifo.h for the primary calling header

#ifndef VERILATED_VMULTI_PORTED_FIFO___024ROOT_H_
#define VERILATED_VMULTI_PORTED_FIFO___024ROOT_H_  // guard

#include "verilated.h"


class Vmulti_ported_fifo__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmulti_ported_fifo___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(wr_en,1,0);
    VL_OUT8(wr_ready,1,0);
    VL_IN8(rd_en,1,0);
    VL_OUT8(rd_valid,1,0);
    VL_OUT8(full,0,0);
    VL_OUT8(almost_full,0,0);
    VL_OUT8(empty,0,0);
    VL_OUT8(almost_empty,0,0);
    VL_OUT8(data_count,4,0);
    CData/*4:0*/ multi_ported_fifo__DOT__wr_ptr;
    CData/*4:0*/ multi_ported_fifo__DOT__rd_ptr;
    CData/*4:0*/ multi_ported_fifo__DOT__fifo_count;
    CData/*3:0*/ multi_ported_fifo__DOT__current_wr_addr;
    CData/*4:0*/ multi_ported_fifo__DOT__write_count;
    CData/*3:0*/ multi_ported_fifo__DOT__current_rd_addr;
    CData/*4:0*/ multi_ported_fifo__DOT__read_count;
    CData/*1:0*/ multi_ported_fifo__DOT__rd_valid_regs;
    CData/*4:0*/ multi_ported_fifo__DOT__wr_count;
    CData/*4:0*/ multi_ported_fifo__DOT__rd_count;
    CData/*4:0*/ multi_ported_fifo__DOT__next_count;
    CData/*4:0*/ __Vdly__multi_ported_fifo__DOT__wr_ptr;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ multi_ported_fifo__DOT__i;
    IData/*31:0*/ multi_ported_fifo__DOT__wp;
    IData/*31:0*/ multi_ported_fifo__DOT__get_wr_data__Vstatic__start_bit;
    IData/*31:0*/ __VactIterCount;
    VL_IN64(wr_data,63,0);
    VL_OUT64(rd_data,63,0);
    VlUnpacked<IData/*31:0*/, 16> multi_ported_fifo__DOT__mem;
    VlUnpacked<IData/*31:0*/, 2> multi_ported_fifo__DOT__rd_data_regs;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmulti_ported_fifo__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmulti_ported_fifo___024root(Vmulti_ported_fifo__Syms* symsp, const char* v__name);
    ~Vmulti_ported_fifo___024root();
    VL_UNCOPYABLE(Vmulti_ported_fifo___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
