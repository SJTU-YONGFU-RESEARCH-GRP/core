// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdual_clock_fifo.h for the primary calling header

#ifndef VERILATED_VDUAL_CLOCK_FIFO___024ROOT_H_
#define VERILATED_VDUAL_CLOCK_FIFO___024ROOT_H_  // guard

#include "verilated.h"


class Vdual_clock_fifo__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdual_clock_fifo___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(wr_clk,0,0);
    VL_IN8(wr_rst_n,0,0);
    VL_IN8(rd_clk,0,0);
    VL_IN8(rd_rst_n,0,0);
    VL_IN8(wr_en,0,0);
    VL_IN8(wr_data,7,0);
    VL_OUT8(full,0,0);
    VL_OUT8(almost_full,0,0);
    VL_IN8(rd_en,0,0);
    VL_OUT8(rd_data,7,0);
    VL_OUT8(empty,0,0);
    VL_OUT8(almost_empty,0,0);
    VL_OUT8(fifo_count,4,0);
    CData/*4:0*/ dual_clock_fifo__DOT__wr_ptr_bin;
    CData/*4:0*/ dual_clock_fifo__DOT__rd_ptr_bin;
    CData/*4:0*/ dual_clock_fifo__DOT__wr_ptr_gray;
    CData/*4:0*/ dual_clock_fifo__DOT__rd_ptr_gray;
    CData/*4:0*/ dual_clock_fifo__DOT__wr_ptr_gray_rd_sync1;
    CData/*4:0*/ dual_clock_fifo__DOT__wr_ptr_gray_rd_sync2;
    CData/*4:0*/ dual_clock_fifo__DOT__rd_ptr_gray_wr_sync1;
    CData/*4:0*/ dual_clock_fifo__DOT__rd_ptr_gray_wr_sync2;
    CData/*4:0*/ dual_clock_fifo__DOT__gray_to_bin__Vstatic__bin;
    CData/*7:0*/ dual_clock_fifo__DOT__rd_data_reg;
    CData/*4:0*/ dual_clock_fifo__DOT__wr_ptr_bin_rd_sync;
    CData/*4:0*/ dual_clock_fifo__DOT__rd_ptr_bin_wr_sync;
    CData/*4:0*/ __Vdly__dual_clock_fifo__DOT__rd_ptr_bin;
    CData/*4:0*/ __Vdly__dual_clock_fifo__DOT__wr_ptr_bin;
    CData/*3:0*/ __Vdlyvdim0__dual_clock_fifo__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__dual_clock_fifo__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__dual_clock_fifo__DOT__mem__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rd_clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rd_rst_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__wr_clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__wr_rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ dual_clock_fifo__DOT__gray_to_bin__Vstatic__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 16> dual_clock_fifo__DOT__mem;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdual_clock_fifo__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdual_clock_fifo___024root(Vdual_clock_fifo__Syms* symsp, const char* v__name);
    ~Vdual_clock_fifo___024root();
    VL_UNCOPYABLE(Vdual_clock_fifo___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
