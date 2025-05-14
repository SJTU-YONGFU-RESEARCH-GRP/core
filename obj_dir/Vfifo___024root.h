// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfifo.h for the primary calling header

#ifndef VERILATED_VFIFO___024ROOT_H_
#define VERILATED_VFIFO___024ROOT_H_  // guard

#include "verilated.h"


class Vfifo__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfifo___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(wr_en,0,0);
    VL_IN8(rd_en,0,0);
    VL_IN8(din,7,0);
    VL_OUT8(dout,7,0);
    VL_OUT8(full,0,0);
    VL_OUT8(empty,0,0);
    CData/*4:0*/ fifo__DOT__wr_ptr;
    CData/*4:0*/ fifo__DOT__rd_ptr;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 16> fifo__DOT__mem;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vfifo__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfifo___024root(Vfifo__Syms* symsp, const char* v__name);
    ~Vfifo___024root();
    VL_UNCOPYABLE(Vfifo___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
