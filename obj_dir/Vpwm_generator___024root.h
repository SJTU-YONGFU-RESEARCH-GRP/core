// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpwm_generator.h for the primary calling header

#ifndef VERILATED_VPWM_GENERATOR___024ROOT_H_
#define VERILATED_VPWM_GENERATOR___024ROOT_H_  // guard

#include "verilated.h"


class Vpwm_generator__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpwm_generator___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(enable,0,0);
    VL_IN8(duty_cycle,7,0);
    VL_IN8(period,7,0);
    VL_OUT8(pwm_out,0,0);
    CData/*7:0*/ pwm_generator__DOT__counter;
    CData/*7:0*/ pwm_generator__DOT__duty_reg;
    CData/*7:0*/ pwm_generator__DOT__period_reg;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vpwm_generator__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpwm_generator___024root(Vpwm_generator__Syms* symsp, const char* v__name);
    ~Vpwm_generator___024root();
    VL_UNCOPYABLE(Vpwm_generator___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
