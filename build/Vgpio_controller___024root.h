// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vgpio_controller.h for the primary calling header

#ifndef VERILATED_VGPIO_CONTROLLER___024ROOT_H_
#define VERILATED_VGPIO_CONTROLLER___024ROOT_H_  // guard

#include "verilated.h"


class Vgpio_controller__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vgpio_controller___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_OUT8(int_out,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    VL_INOUT(gpio_pins,31,0);
    VL_IN(gpio_dir,31,0);
    VL_IN(gpio_out,31,0);
    VL_OUT(gpio_in,31,0);
    VL_IN(int_enable,31,0);
    VL_IN(int_type,31,0);
    VL_IN(int_polarity,31,0);
    VL_OUT(int_status,31,0);
    VL_IN(int_clear,31,0);
    IData/*31:0*/ gpio_controller__DOT__gpio_in_sync1;
    IData/*31:0*/ gpio_controller__DOT__gpio_in_sync2;
    IData/*31:0*/ gpio_controller__DOT__gpio_in_prev;
    IData/*31:0*/ gpio_controller__DOT__int_status_reg;
    IData/*31:0*/ gpio_controller__DOT__j;
    IData/*31:0*/ gpio_controller__DOT__rising_edge;
    IData/*31:0*/ gpio_controller__DOT__falling_edge;
    IData/*31:0*/ gpio_controller__DOT__gpio_pins__out__strong__out0;
    IData/*31:0*/ gpio_controller__DOT__gpio_pins__out__strong__out1;
    IData/*31:0*/ gpio_controller__DOT__gpio_pins__out__strong__out2;
    IData/*31:0*/ gpio_controller__DOT__gpio_pins__out__strong__out3;
    IData/*31:0*/ gpio_controller__DOT__gpio_pins__out__strong__out4;
    IData/*31:0*/ gpio_controller__DOT__gpio_pins__out__strong__out5;
    IData/*31:0*/ gpio_controller__DOT__gpio_pins__out__strong__out6;
    IData/*31:0*/ gpio_controller__DOT__gpio_pins__out__strong__out7;
    IData/*31:0*/ gpio_controller__DOT__gpio_pins__out__strong__out8;
    IData/*31:0*/ gpio_controller__DOT__gpio_pins__out__strong__out9;
    IData/*31:0*/ gpio_controller__DOT__gpio_pins__out__strong__out10;
    IData/*31:0*/ gpio_controller__DOT__gpio_pins__out__strong__out11;
    IData/*31:0*/ gpio_controller__DOT__gpio_pins__out__strong__out12;
    IData/*31:0*/ gpio_controller__DOT__gpio_pins__out__strong__out13;
    IData/*31:0*/ gpio_controller__DOT__gpio_pins__out__strong__out14;
    IData/*31:0*/ gpio_controller__DOT__gpio_pins__out__strong__out15;
    IData/*31:0*/ gpio_controller__DOT__gpio_pins__out__strong__out16;
    IData/*31:0*/ gpio_controller__DOT__gpio_pins__out__strong__out17;
    IData/*31:0*/ gpio_controller__DOT__gpio_pins__out__strong__out18;
    IData/*31:0*/ gpio_controller__DOT__gpio_pins__out__strong__out19;
    IData/*31:0*/ gpio_controller__DOT__gpio_pins__out__strong__out20;
    IData/*31:0*/ gpio_controller__DOT__gpio_pins__out__strong__out21;
    IData/*31:0*/ gpio_controller__DOT__gpio_pins__out__strong__out22;
    IData/*31:0*/ gpio_controller__DOT__gpio_pins__out__strong__out23;
    IData/*31:0*/ gpio_controller__DOT__gpio_pins__out__strong__out24;
    IData/*31:0*/ gpio_controller__DOT__gpio_pins__out__strong__out25;
    IData/*31:0*/ gpio_controller__DOT__gpio_pins__out__strong__out26;
    IData/*31:0*/ gpio_controller__DOT__gpio_pins__out__strong__out27;
    IData/*31:0*/ gpio_controller__DOT__gpio_pins__out__strong__out28;
    IData/*31:0*/ gpio_controller__DOT__gpio_pins__out__strong__out29;
    IData/*31:0*/ gpio_controller__DOT__gpio_pins__out__strong__out30;
    IData/*31:0*/ gpio_controller__DOT__gpio_pins__out__strong__out31;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vgpio_controller__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vgpio_controller___024root(Vgpio_controller__Syms* symsp, const char* v__name);
    ~Vgpio_controller___024root();
    VL_UNCOPYABLE(Vgpio_controller___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
