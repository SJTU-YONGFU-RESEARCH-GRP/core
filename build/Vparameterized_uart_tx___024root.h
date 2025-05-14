// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vparameterized_uart_tx.h for the primary calling header

#ifndef VERILATED_VPARAMETERIZED_UART_TX___024ROOT_H_
#define VERILATED_VPARAMETERIZED_UART_TX___024ROOT_H_  // guard

#include "verilated.h"


class Vparameterized_uart_tx__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vparameterized_uart_tx___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(data_in,7,0);
    VL_IN8(tx_start,0,0);
    VL_OUT8(tx,0,0);
    VL_OUT8(tx_busy,0,0);
    CData/*2:0*/ parameterized_uart_tx__DOT__state;
    CData/*2:0*/ parameterized_uart_tx__DOT__bit_counter;
    CData/*7:0*/ parameterized_uart_tx__DOT__data_reg;
    CData/*0:0*/ parameterized_uart_tx__DOT__parity_bit;
    CData/*0:0*/ parameterized_uart_tx__DOT__stop_bit_counter;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    SData/*8:0*/ parameterized_uart_tx__DOT__bit_timer;
    IData/*31:0*/ parameterized_uart_tx__DOT__reverse_bits__Vstatic__i;
    IData/*31:0*/ parameterized_uart_tx__DOT__parity_calc__Vstatic__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vparameterized_uart_tx__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vparameterized_uart_tx___024root(Vparameterized_uart_tx__Syms* symsp, const char* v__name);
    ~Vparameterized_uart_tx___024root();
    VL_UNCOPYABLE(Vparameterized_uart_tx___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
