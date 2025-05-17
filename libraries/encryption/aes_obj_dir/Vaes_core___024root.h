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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(start,0,0);
        VL_IN8(encrypt,0,0);
        VL_OUT8(done,0,0);
        VL_OUT8(busy,0,0);
        CData/*2:0*/ aes_core__DOT__state;
        CData/*2:0*/ aes_core__DOT__next_state;
        CData/*3:0*/ aes_core__DOT__round_cnt;
        CData/*7:0*/ aes_core__DOT__shift_rows__Vstatic__s00;
        CData/*7:0*/ aes_core__DOT__shift_rows__Vstatic__s01;
        CData/*7:0*/ aes_core__DOT__shift_rows__Vstatic__s02;
        CData/*7:0*/ aes_core__DOT__shift_rows__Vstatic__s03;
        CData/*7:0*/ aes_core__DOT__shift_rows__Vstatic__s10;
        CData/*7:0*/ aes_core__DOT__shift_rows__Vstatic__s11;
        CData/*7:0*/ aes_core__DOT__shift_rows__Vstatic__s12;
        CData/*7:0*/ aes_core__DOT__shift_rows__Vstatic__s13;
        CData/*7:0*/ aes_core__DOT__shift_rows__Vstatic__s20;
        CData/*7:0*/ aes_core__DOT__shift_rows__Vstatic__s21;
        CData/*7:0*/ aes_core__DOT__shift_rows__Vstatic__s22;
        CData/*7:0*/ aes_core__DOT__shift_rows__Vstatic__s23;
        CData/*7:0*/ aes_core__DOT__shift_rows__Vstatic__s30;
        CData/*7:0*/ aes_core__DOT__shift_rows__Vstatic__s31;
        CData/*7:0*/ aes_core__DOT__shift_rows__Vstatic__s32;
        CData/*7:0*/ aes_core__DOT__shift_rows__Vstatic__s33;
        CData/*7:0*/ aes_core__DOT__inv_shift_rows__Vstatic__s00;
        CData/*7:0*/ aes_core__DOT__inv_shift_rows__Vstatic__s01;
        CData/*7:0*/ aes_core__DOT__inv_shift_rows__Vstatic__s02;
        CData/*7:0*/ aes_core__DOT__inv_shift_rows__Vstatic__s03;
        CData/*7:0*/ aes_core__DOT__inv_shift_rows__Vstatic__s10;
        CData/*7:0*/ aes_core__DOT__inv_shift_rows__Vstatic__s11;
        CData/*7:0*/ aes_core__DOT__inv_shift_rows__Vstatic__s12;
        CData/*7:0*/ aes_core__DOT__inv_shift_rows__Vstatic__s13;
        CData/*7:0*/ aes_core__DOT__inv_shift_rows__Vstatic__s20;
        CData/*7:0*/ aes_core__DOT__inv_shift_rows__Vstatic__s21;
        CData/*7:0*/ aes_core__DOT__inv_shift_rows__Vstatic__s22;
        CData/*7:0*/ aes_core__DOT__inv_shift_rows__Vstatic__s23;
        CData/*7:0*/ aes_core__DOT__inv_shift_rows__Vstatic__s30;
        CData/*7:0*/ aes_core__DOT__inv_shift_rows__Vstatic__s31;
        CData/*7:0*/ aes_core__DOT__inv_shift_rows__Vstatic__s32;
        CData/*7:0*/ aes_core__DOT__inv_shift_rows__Vstatic__s33;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        VL_INW(data_in,127,0,4);
        VL_INW(key,127,0,4);
        VL_OUTW(data_out,127,0,4);
        VlWide<4>/*127:0*/ aes_core__DOT__state_reg;
        IData/*31:0*/ aes_core__DOT__mix_columns__Vstatic__col0;
        IData/*31:0*/ aes_core__DOT__mix_columns__Vstatic__col1;
        IData/*31:0*/ aes_core__DOT__mix_columns__Vstatic__col2;
        IData/*31:0*/ aes_core__DOT__mix_columns__Vstatic__col3;
        IData/*31:0*/ aes_core__DOT__mix_columns__Vstatic__new_col0;
        IData/*31:0*/ aes_core__DOT__mix_columns__Vstatic__new_col1;
        IData/*31:0*/ aes_core__DOT__mix_columns__Vstatic__new_col2;
        IData/*31:0*/ aes_core__DOT__mix_columns__Vstatic__new_col3;
        IData/*31:0*/ aes_core__DOT__inv_mix_columns__Vstatic__col0;
        IData/*31:0*/ aes_core__DOT__inv_mix_columns__Vstatic__col1;
        IData/*31:0*/ aes_core__DOT__inv_mix_columns__Vstatic__col2;
        IData/*31:0*/ aes_core__DOT__inv_mix_columns__Vstatic__col3;
    };
    struct {
        IData/*31:0*/ aes_core__DOT__inv_mix_columns__Vstatic__new_col0;
        IData/*31:0*/ aes_core__DOT__inv_mix_columns__Vstatic__new_col1;
        IData/*31:0*/ aes_core__DOT__inv_mix_columns__Vstatic__new_col2;
        IData/*31:0*/ aes_core__DOT__inv_mix_columns__Vstatic__new_col3;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<VlWide<4>/*127:0*/, 11> aes_core__DOT__round_keys;
        VlUnpacked<CData/*7:0*/, 256> aes_core__DOT__sbox;
        VlUnpacked<CData/*7:0*/, 256> aes_core__DOT__inv_sbox;
        VlUnpacked<CData/*7:0*/, 11> aes_core__DOT__rcon;
        VlUnpacked<IData/*31:0*/, 44> aes_core__DOT__w;
        VlUnpacked<IData/*31:0*/, 44> __Vtrigprevexpr___TOP__aes_core__DOT__w__0;
        VlUnpacked<IData/*31:0*/, 44> __Vtrigprevexpr___TOP__aes_core__DOT__w__1;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

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
