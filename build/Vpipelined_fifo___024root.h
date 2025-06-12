// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpipelined_fifo.h for the primary calling header

#ifndef VERILATED_VPIPELINED_FIFO___024ROOT_H_
#define VERILATED_VPIPELINED_FIFO___024ROOT_H_  // guard

#include "verilated.h"


class Vpipelined_fifo__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpipelined_fifo___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(wr_en,0,0);
    VL_OUT8(full,0,0);
    VL_OUT8(almost_full,0,0);
    VL_IN8(rd_en,0,0);
    VL_OUT8(empty,0,0);
    VL_OUT8(almost_empty,0,0);
    VL_OUT8(data_count,4,0);
    CData/*4:0*/ pipelined_fifo__DOT__wr_ptr;
    CData/*1:0*/ pipelined_fifo__DOT__wr_en_pipe;
    CData/*4:0*/ pipelined_fifo__DOT__rd_ptr;
    CData/*1:0*/ pipelined_fifo__DOT__rd_en_pipe;
    CData/*1:0*/ pipelined_fifo__DOT__rd_data_valid;
    CData/*4:0*/ pipelined_fifo__DOT__pipeline_count;
    CData/*4:0*/ pipelined_fifo__DOT__raw_count;
    CData/*1:0*/ __Vdly__pipelined_fifo__DOT__wr_en_pipe;
    CData/*1:0*/ __Vdly__pipelined_fifo__DOT__rd_en_pipe;
    CData/*4:0*/ __VdlyVal__pipelined_fifo__DOT__wr_ptr_pipe__v0;
    CData/*0:0*/ __VdlySet__pipelined_fifo__DOT__wr_ptr_pipe__v0;
    CData/*4:0*/ __VdlyVal__pipelined_fifo__DOT__wr_ptr_pipe__v1;
    CData/*0:0*/ __VdlySet__pipelined_fifo__DOT__wr_ptr_pipe__v2;
    CData/*0:0*/ __VdlySet__pipelined_fifo__DOT__wr_ptr_pipe__v3;
    CData/*0:0*/ __VdlySet__pipelined_fifo__DOT__wr_data_pipe__v0;
    CData/*0:0*/ __VdlySet__pipelined_fifo__DOT__wr_data_pipe__v2;
    CData/*4:0*/ __VdlyVal__pipelined_fifo__DOT__rd_ptr_pipe__v0;
    CData/*0:0*/ __VdlySet__pipelined_fifo__DOT__rd_ptr_pipe__v0;
    CData/*4:0*/ __VdlyVal__pipelined_fifo__DOT__rd_ptr_pipe__v1;
    CData/*0:0*/ __VdlySet__pipelined_fifo__DOT__rd_ptr_pipe__v2;
    CData/*0:0*/ __VdlySet__pipelined_fifo__DOT__rd_ptr_pipe__v3;
    CData/*0:0*/ __VdlySet__pipelined_fifo__DOT__rd_data_pipe__v0;
    CData/*0:0*/ __VdlySet__pipelined_fifo__DOT__rd_data_pipe__v2;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(wr_data,31,0);
    VL_OUT(rd_data,31,0);
    IData/*31:0*/ pipelined_fifo__DOT__i;
    IData/*31:0*/ __VdlyVal__pipelined_fifo__DOT__wr_data_pipe__v0;
    IData/*31:0*/ __VdlyVal__pipelined_fifo__DOT__wr_data_pipe__v1;
    IData/*31:0*/ __VdlyVal__pipelined_fifo__DOT__rd_data_pipe__v2;
    IData/*31:0*/ __VdlyVal__pipelined_fifo__DOT__rd_data_pipe__v3;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 16> pipelined_fifo__DOT__mem;
    VlUnpacked<CData/*4:0*/, 2> pipelined_fifo__DOT__wr_ptr_pipe;
    VlUnpacked<IData/*31:0*/, 2> pipelined_fifo__DOT__wr_data_pipe;
    VlUnpacked<CData/*4:0*/, 2> pipelined_fifo__DOT__rd_ptr_pipe;
    VlUnpacked<IData/*31:0*/, 2> pipelined_fifo__DOT__rd_data_pipe;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vpipelined_fifo__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpipelined_fifo___024root(Vpipelined_fifo__Syms* symsp, const char* v__name);
    ~Vpipelined_fifo___024root();
    VL_UNCOPYABLE(Vpipelined_fifo___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
