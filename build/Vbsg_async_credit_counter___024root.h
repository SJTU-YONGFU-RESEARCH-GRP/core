// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbsg_async_credit_counter.h for the primary calling header

#ifndef VERILATED_VBSG_ASYNC_CREDIT_COUNTER___024ROOT_H_
#define VERILATED_VBSG_ASYNC_CREDIT_COUNTER___024ROOT_H_  // guard

#include "verilated.h"


class Vbsg_async_credit_counter__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbsg_async_credit_counter___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(w_clk_i,0,0);
    VL_IN8(r_clk_i,0,0);
    VL_IN8(gray_i,3,0);
    VL_OUT8(binary_o,3,0);
    VL_IN8(w_inc_token_i,0,0);
    VL_IN8(w_reset_i,0,0);
    VL_IN8(r_reset_i,0,0);
    VL_IN8(r_dec_credit_i,0,0);
    VL_IN8(r_infinite_credits_i,0,0);
    VL_OUT8(r_credits_avail_o,0,0);
    CData/*2:0*/ bsg_async_credit_counter__DOT__r_counter_r;
    CData/*2:0*/ bsg_async_credit_counter__DOT__w_counter_binary_r_rsync;
    CData/*2:0*/ bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_r;
    CData/*2:0*/ bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_n;
    CData/*2:0*/ bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r;
    CData/*2:0*/ bsg_async_credit_counter__DOT__bapg__DOT____Vlvbound_hc6ce9bbf__1;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__r_clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__w_clk_i__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ bsg_async_credit_counter__DOT__bapg__DOT__sync_i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*2:0*/, 44> bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vbsg_async_credit_counter__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbsg_async_credit_counter___024root(Vbsg_async_credit_counter__Syms* symsp, const char* v__name);
    ~Vbsg_async_credit_counter___024root();
    VL_UNCOPYABLE(Vbsg_async_credit_counter___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
