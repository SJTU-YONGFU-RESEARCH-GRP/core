// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaes_core.h for the primary calling header

#ifndef VERILATED_VAES_CORE___024ROOT_H_
#define VERILATED_VAES_CORE___024ROOT_H_  // guard

#include "verilated.h"


class Vaes_core__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaes_core___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(start,0,0);
    VL_IN8(encrypt,0,0);
    VL_OUT8(done,0,0);
    VL_OUT8(busy,0,0);
    CData/*2:0*/ aes_core__DOT__state;
    CData/*2:0*/ aes_core__DOT__next_state;
    CData/*3:0*/ aes_core__DOT__round_cnt;
    CData/*7:0*/ aes_core__DOT__mix_columns__Vstatic__s0;
    CData/*7:0*/ aes_core__DOT__mix_columns__Vstatic__s1;
    CData/*7:0*/ aes_core__DOT__mix_columns__Vstatic__s2;
    CData/*7:0*/ aes_core__DOT__mix_columns__Vstatic__s3;
    CData/*7:0*/ aes_core__DOT__mix_columns__Vstatic__t0;
    CData/*7:0*/ aes_core__DOT__mix_columns__Vstatic__t1;
    CData/*7:0*/ aes_core__DOT__mix_columns__Vstatic__t2;
    CData/*7:0*/ aes_core__DOT__mix_columns__Vstatic__t3;
    CData/*7:0*/ aes_core__DOT__inv_mix_columns__Vstatic__s0;
    CData/*7:0*/ aes_core__DOT__inv_mix_columns__Vstatic__s1;
    CData/*7:0*/ aes_core__DOT__inv_mix_columns__Vstatic__s2;
    CData/*7:0*/ aes_core__DOT__inv_mix_columns__Vstatic__s3;
    CData/*7:0*/ aes_core__DOT__inv_mix_columns__Vstatic__t0;
    CData/*7:0*/ aes_core__DOT__inv_mix_columns__Vstatic__t1;
    CData/*7:0*/ aes_core__DOT__inv_mix_columns__Vstatic__t2;
    CData/*7:0*/ aes_core__DOT__inv_mix_columns__Vstatic__t3;
    CData/*3:0*/ aes_core__DOT__key_round;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    VlWide<4>/*127:0*/ aes_core__DOT__state_reg;
    VlWide<4>/*127:0*/ aes_core__DOT__formatted_data_in;
    VlWide<4>/*127:0*/ aes_core__DOT__formatted_key;
    IData/*31:0*/ aes_core__DOT__key_expansion__Vstatic__w0;
    IData/*31:0*/ aes_core__DOT__key_expansion__Vstatic__w1;
    IData/*31:0*/ aes_core__DOT__key_expansion__Vstatic__w2;
    IData/*31:0*/ aes_core__DOT__key_expansion__Vstatic__w3;
    IData/*31:0*/ aes_core__DOT__key_expansion__Vstatic__temp;
    IData/*31:0*/ aes_core__DOT__i;
    IData/*31:0*/ aes_core__DOT__mix_columns__Vstatic__col0;
    IData/*31:0*/ aes_core__DOT__mix_columns__Vstatic__col1;
    IData/*31:0*/ aes_core__DOT__mix_columns__Vstatic__col2;
    IData/*31:0*/ aes_core__DOT__mix_columns__Vstatic__col3;
    IData/*31:0*/ aes_core__DOT__inv_mix_columns__Vstatic__col0;
    IData/*31:0*/ aes_core__DOT__inv_mix_columns__Vstatic__col1;
    IData/*31:0*/ aes_core__DOT__inv_mix_columns__Vstatic__col2;
    IData/*31:0*/ aes_core__DOT__inv_mix_columns__Vstatic__col3;
    IData/*31:0*/ aes_core__DOT__j;
    IData/*31:0*/ __VactIterCount;
    VL_IN(data_in[4],31,0);
    VL_IN(key[4],31,0);
    VL_OUT(data_out[4],31,0);
    VlUnpacked<VlWide<4>/*127:0*/, 11> aes_core__DOT__round_keys;
    VlUnpacked<CData/*7:0*/, 256> aes_core__DOT__sbox;
    VlUnpacked<CData/*7:0*/, 256> aes_core__DOT__inv_sbox;
    VlUnpacked<CData/*7:0*/, 11> aes_core__DOT__rcon;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vaes_core__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaes_core___024root(Vaes_core__Syms* symsp, const char* v__name);
    ~Vaes_core___024root();
    VL_UNCOPYABLE(Vaes_core___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
