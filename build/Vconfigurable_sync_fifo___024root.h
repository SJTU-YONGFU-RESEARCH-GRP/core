// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vconfigurable_sync_fifo.h for the primary calling header

#ifndef VERILATED_VCONFIGURABLE_SYNC_FIFO___024ROOT_H_
#define VERILATED_VCONFIGURABLE_SYNC_FIFO___024ROOT_H_  // guard

#include "verilated.h"


class Vconfigurable_sync_fifo__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vconfigurable_sync_fifo___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(wr_en,0,0);
    VL_IN8(rd_en,0,0);
    VL_IN8(data_in,7,0);
    VL_OUT8(data_out,7,0);
    VL_OUT8(full,0,0);
    VL_OUT8(empty,0,0);
    VL_OUT8(almost_full,0,0);
    VL_OUT8(almost_empty,0,0);
    VL_OUT8(fill_level,4,0);
    CData/*3:0*/ configurable_sync_fifo__DOT__wr_ptr;
    CData/*3:0*/ configurable_sync_fifo__DOT__rd_ptr;
    CData/*4:0*/ configurable_sync_fifo__DOT__count;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 16> configurable_sync_fifo__DOT__memory;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vconfigurable_sync_fifo__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vconfigurable_sync_fifo___024root(Vconfigurable_sync_fifo__Syms* symsp, const char* v__name);
    ~Vconfigurable_sync_fifo___024root();
    VL_UNCOPYABLE(Vconfigurable_sync_fifo___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
