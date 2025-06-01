// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconfigurable_fir_filter.h for the primary calling header

#include "Vconfigurable_fir_filter__pch.h"
#include "Vconfigurable_fir_filter___024root.h"

void Vconfigurable_fir_filter___024root___eval_act(Vconfigurable_fir_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fir_filter___024root___eval_act\n"); );
    Vconfigurable_fir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vconfigurable_fir_filter___024root___nba_sequent__TOP__0(Vconfigurable_fir_filter___024root* vlSelf);

void Vconfigurable_fir_filter___024root___eval_nba(Vconfigurable_fir_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fir_filter___024root___eval_nba\n"); );
    Vconfigurable_fir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vconfigurable_fir_filter___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vconfigurable_fir_filter___024root___nba_sequent__TOP__0(Vconfigurable_fir_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fir_filter___024root___nba_sequent__TOP__0\n"); );
    Vconfigurable_fir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ __Vfunc_configurable_fir_filter__DOT__get_coeff__0__Vfuncout;
    __Vfunc_configurable_fir_filter__DOT__get_coeff__0__Vfuncout = 0;
    SData/*15:0*/ __VdlyVal__configurable_fir_filter__DOT__delay_line__v0;
    __VdlyVal__configurable_fir_filter__DOT__delay_line__v0 = 0;
    CData/*0:0*/ __VdlySet__configurable_fir_filter__DOT__delay_line__v0;
    __VdlySet__configurable_fir_filter__DOT__delay_line__v0 = 0;
    SData/*15:0*/ __VdlyVal__configurable_fir_filter__DOT__delay_line__v1;
    __VdlyVal__configurable_fir_filter__DOT__delay_line__v1 = 0;
    CData/*0:0*/ __VdlySet__configurable_fir_filter__DOT__delay_line__v1;
    __VdlySet__configurable_fir_filter__DOT__delay_line__v1 = 0;
    SData/*15:0*/ __VdlyVal__configurable_fir_filter__DOT__delay_line__v2;
    __VdlyVal__configurable_fir_filter__DOT__delay_line__v2 = 0;
    SData/*15:0*/ __VdlyVal__configurable_fir_filter__DOT__delay_line__v3;
    __VdlyVal__configurable_fir_filter__DOT__delay_line__v3 = 0;
    SData/*15:0*/ __VdlyVal__configurable_fir_filter__DOT__delay_line__v4;
    __VdlyVal__configurable_fir_filter__DOT__delay_line__v4 = 0;
    SData/*15:0*/ __VdlyVal__configurable_fir_filter__DOT__delay_line__v5;
    __VdlyVal__configurable_fir_filter__DOT__delay_line__v5 = 0;
    SData/*15:0*/ __VdlyVal__configurable_fir_filter__DOT__delay_line__v6;
    __VdlyVal__configurable_fir_filter__DOT__delay_line__v6 = 0;
    SData/*15:0*/ __VdlyVal__configurable_fir_filter__DOT__delay_line__v7;
    __VdlyVal__configurable_fir_filter__DOT__delay_line__v7 = 0;
    IData/*31:0*/ __VdlyVal__configurable_fir_filter__DOT__products__v0;
    __VdlyVal__configurable_fir_filter__DOT__products__v0 = 0;
    IData/*31:0*/ __VdlyVal__configurable_fir_filter__DOT__products__v1;
    __VdlyVal__configurable_fir_filter__DOT__products__v1 = 0;
    IData/*31:0*/ __VdlyVal__configurable_fir_filter__DOT__products__v2;
    __VdlyVal__configurable_fir_filter__DOT__products__v2 = 0;
    IData/*31:0*/ __VdlyVal__configurable_fir_filter__DOT__products__v3;
    __VdlyVal__configurable_fir_filter__DOT__products__v3 = 0;
    IData/*31:0*/ __VdlyVal__configurable_fir_filter__DOT__products__v4;
    __VdlyVal__configurable_fir_filter__DOT__products__v4 = 0;
    IData/*31:0*/ __VdlyVal__configurable_fir_filter__DOT__products__v5;
    __VdlyVal__configurable_fir_filter__DOT__products__v5 = 0;
    IData/*31:0*/ __VdlyVal__configurable_fir_filter__DOT__products__v6;
    __VdlyVal__configurable_fir_filter__DOT__products__v6 = 0;
    IData/*31:0*/ __VdlyVal__configurable_fir_filter__DOT__products__v7;
    __VdlyVal__configurable_fir_filter__DOT__products__v7 = 0;
    CData/*0:0*/ __VdlySet__configurable_fir_filter__DOT__delay_line__v8;
    __VdlySet__configurable_fir_filter__DOT__delay_line__v8 = 0;
    CData/*0:0*/ __VdlySet__configurable_fir_filter__DOT__delay_line__v9;
    __VdlySet__configurable_fir_filter__DOT__delay_line__v9 = 0;
    // Body
    __VdlySet__configurable_fir_filter__DOT__delay_line__v0 = 0U;
    __VdlySet__configurable_fir_filter__DOT__delay_line__v1 = 0U;
    __VdlySet__configurable_fir_filter__DOT__delay_line__v8 = 0U;
    __VdlySet__configurable_fir_filter__DOT__delay_line__v9 = 0U;
    if (vlSelfRef.rst_n) {
        vlSelfRef.data_out_valid = vlSelfRef.data_valid;
        if (vlSelfRef.data_valid) {
            __VdlyVal__configurable_fir_filter__DOT__delay_line__v0 
                = vlSelfRef.configurable_fir_filter__DOT__delay_line
                [6U];
            __VdlySet__configurable_fir_filter__DOT__delay_line__v0 = 1U;
            vlSelfRef.configurable_fir_filter__DOT__i = 8U;
            vlSelfRef.data_out = vlSelfRef.configurable_fir_filter__DOT__output_value;
            __VdlyVal__configurable_fir_filter__DOT__delay_line__v1 
                = vlSelfRef.configurable_fir_filter__DOT__delay_line
                [5U];
            __VdlySet__configurable_fir_filter__DOT__delay_line__v1 = 1U;
            __VdlyVal__configurable_fir_filter__DOT__delay_line__v2 
                = vlSelfRef.configurable_fir_filter__DOT__delay_line
                [4U];
            __VdlyVal__configurable_fir_filter__DOT__delay_line__v3 
                = vlSelfRef.configurable_fir_filter__DOT__delay_line
                [3U];
            __VdlyVal__configurable_fir_filter__DOT__delay_line__v4 
                = vlSelfRef.configurable_fir_filter__DOT__delay_line
                [2U];
            __VdlyVal__configurable_fir_filter__DOT__delay_line__v5 
                = vlSelfRef.configurable_fir_filter__DOT__delay_line
                [1U];
            __VdlyVal__configurable_fir_filter__DOT__delay_line__v6 
                = vlSelfRef.configurable_fir_filter__DOT__delay_line
                [0U];
            __VdlyVal__configurable_fir_filter__DOT__delay_line__v7 
                = vlSelfRef.data_in;
            __VdlyVal__configurable_fir_filter__DOT__products__v0 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                vlSelfRef.configurable_fir_filter__DOT__delay_line
                                                [0U]), 
                              VL_EXTENDS_II(32,16, 
                                            ([&]() {
                            __Vfunc_configurable_fir_filter__DOT__get_coeff__0__Vfuncout 
                                = vlSelfRef.configurable_fir_filter__DOT__coeff_array
                                [0U];
                        }(), (IData)(__Vfunc_configurable_fir_filter__DOT__get_coeff__0__Vfuncout))));
            __VdlyVal__configurable_fir_filter__DOT__products__v1 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                vlSelfRef.configurable_fir_filter__DOT__delay_line
                                                [1U]), 
                              VL_EXTENDS_II(32,16, 
                                            ([&]() {
                            __Vfunc_configurable_fir_filter__DOT__get_coeff__0__Vfuncout 
                                = vlSelfRef.configurable_fir_filter__DOT__coeff_array
                                [1U];
                        }(), (IData)(__Vfunc_configurable_fir_filter__DOT__get_coeff__0__Vfuncout))));
            __VdlyVal__configurable_fir_filter__DOT__products__v2 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                vlSelfRef.configurable_fir_filter__DOT__delay_line
                                                [2U]), 
                              VL_EXTENDS_II(32,16, 
                                            ([&]() {
                            __Vfunc_configurable_fir_filter__DOT__get_coeff__0__Vfuncout 
                                = vlSelfRef.configurable_fir_filter__DOT__coeff_array
                                [2U];
                        }(), (IData)(__Vfunc_configurable_fir_filter__DOT__get_coeff__0__Vfuncout))));
            __VdlyVal__configurable_fir_filter__DOT__products__v3 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                vlSelfRef.configurable_fir_filter__DOT__delay_line
                                                [3U]), 
                              VL_EXTENDS_II(32,16, 
                                            ([&]() {
                            __Vfunc_configurable_fir_filter__DOT__get_coeff__0__Vfuncout 
                                = vlSelfRef.configurable_fir_filter__DOT__coeff_array
                                [3U];
                        }(), (IData)(__Vfunc_configurable_fir_filter__DOT__get_coeff__0__Vfuncout))));
            __VdlyVal__configurable_fir_filter__DOT__products__v4 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                vlSelfRef.configurable_fir_filter__DOT__delay_line
                                                [4U]), 
                              VL_EXTENDS_II(32,16, 
                                            ([&]() {
                            __Vfunc_configurable_fir_filter__DOT__get_coeff__0__Vfuncout 
                                = vlSelfRef.configurable_fir_filter__DOT__coeff_array
                                [4U];
                        }(), (IData)(__Vfunc_configurable_fir_filter__DOT__get_coeff__0__Vfuncout))));
            __VdlyVal__configurable_fir_filter__DOT__products__v5 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                vlSelfRef.configurable_fir_filter__DOT__delay_line
                                                [5U]), 
                              VL_EXTENDS_II(32,16, 
                                            ([&]() {
                            __Vfunc_configurable_fir_filter__DOT__get_coeff__0__Vfuncout 
                                = vlSelfRef.configurable_fir_filter__DOT__coeff_array
                                [5U];
                        }(), (IData)(__Vfunc_configurable_fir_filter__DOT__get_coeff__0__Vfuncout))));
            __VdlyVal__configurable_fir_filter__DOT__products__v6 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                vlSelfRef.configurable_fir_filter__DOT__delay_line
                                                [6U]), 
                              VL_EXTENDS_II(32,16, 
                                            ([&]() {
                            __Vfunc_configurable_fir_filter__DOT__get_coeff__0__Vfuncout 
                                = vlSelfRef.configurable_fir_filter__DOT__coeff_array
                                [6U];
                        }(), (IData)(__Vfunc_configurable_fir_filter__DOT__get_coeff__0__Vfuncout))));
            __VdlyVal__configurable_fir_filter__DOT__products__v7 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                vlSelfRef.configurable_fir_filter__DOT__delay_line
                                                [7U]), 
                              VL_EXTENDS_II(32,16, 
                                            ([&]() {
                            __Vfunc_configurable_fir_filter__DOT__get_coeff__0__Vfuncout 
                                = vlSelfRef.configurable_fir_filter__DOT__coeff_array
                                [7U];
                        }(), (IData)(__Vfunc_configurable_fir_filter__DOT__get_coeff__0__Vfuncout))));
        }
    } else {
        vlSelfRef.configurable_fir_filter__DOT__i = 8U;
        __VdlySet__configurable_fir_filter__DOT__delay_line__v8 = 1U;
        vlSelfRef.data_out = 0U;
        vlSelfRef.data_out_valid = 0U;
        __VdlySet__configurable_fir_filter__DOT__delay_line__v9 = 1U;
    }
    if (__VdlySet__configurable_fir_filter__DOT__delay_line__v0) {
        vlSelfRef.configurable_fir_filter__DOT__delay_line[7U] 
            = __VdlyVal__configurable_fir_filter__DOT__delay_line__v0;
    }
    if (__VdlySet__configurable_fir_filter__DOT__delay_line__v1) {
        vlSelfRef.configurable_fir_filter__DOT__delay_line[6U] 
            = __VdlyVal__configurable_fir_filter__DOT__delay_line__v1;
        vlSelfRef.configurable_fir_filter__DOT__delay_line[5U] 
            = __VdlyVal__configurable_fir_filter__DOT__delay_line__v2;
        vlSelfRef.configurable_fir_filter__DOT__delay_line[4U] 
            = __VdlyVal__configurable_fir_filter__DOT__delay_line__v3;
        vlSelfRef.configurable_fir_filter__DOT__delay_line[3U] 
            = __VdlyVal__configurable_fir_filter__DOT__delay_line__v4;
        vlSelfRef.configurable_fir_filter__DOT__delay_line[2U] 
            = __VdlyVal__configurable_fir_filter__DOT__delay_line__v5;
        vlSelfRef.configurable_fir_filter__DOT__delay_line[1U] 
            = __VdlyVal__configurable_fir_filter__DOT__delay_line__v6;
        vlSelfRef.configurable_fir_filter__DOT__delay_line[0U] 
            = __VdlyVal__configurable_fir_filter__DOT__delay_line__v7;
        vlSelfRef.configurable_fir_filter__DOT__products[0U] 
            = __VdlyVal__configurable_fir_filter__DOT__products__v0;
        vlSelfRef.configurable_fir_filter__DOT__products[1U] 
            = __VdlyVal__configurable_fir_filter__DOT__products__v1;
        vlSelfRef.configurable_fir_filter__DOT__products[2U] 
            = __VdlyVal__configurable_fir_filter__DOT__products__v2;
        vlSelfRef.configurable_fir_filter__DOT__products[3U] 
            = __VdlyVal__configurable_fir_filter__DOT__products__v3;
        vlSelfRef.configurable_fir_filter__DOT__products[4U] 
            = __VdlyVal__configurable_fir_filter__DOT__products__v4;
        vlSelfRef.configurable_fir_filter__DOT__products[5U] 
            = __VdlyVal__configurable_fir_filter__DOT__products__v5;
        vlSelfRef.configurable_fir_filter__DOT__products[6U] 
            = __VdlyVal__configurable_fir_filter__DOT__products__v6;
        vlSelfRef.configurable_fir_filter__DOT__products[7U] 
            = __VdlyVal__configurable_fir_filter__DOT__products__v7;
    }
    if (__VdlySet__configurable_fir_filter__DOT__delay_line__v8) {
        vlSelfRef.configurable_fir_filter__DOT__delay_line[0U] = 0U;
        vlSelfRef.configurable_fir_filter__DOT__products[0U] = 0U;
    }
    if (__VdlySet__configurable_fir_filter__DOT__delay_line__v9) {
        vlSelfRef.configurable_fir_filter__DOT__delay_line[1U] = 0U;
        vlSelfRef.configurable_fir_filter__DOT__delay_line[2U] = 0U;
        vlSelfRef.configurable_fir_filter__DOT__delay_line[3U] = 0U;
        vlSelfRef.configurable_fir_filter__DOT__delay_line[4U] = 0U;
        vlSelfRef.configurable_fir_filter__DOT__delay_line[5U] = 0U;
        vlSelfRef.configurable_fir_filter__DOT__delay_line[6U] = 0U;
        vlSelfRef.configurable_fir_filter__DOT__delay_line[7U] = 0U;
        vlSelfRef.configurable_fir_filter__DOT__products[1U] = 0U;
        vlSelfRef.configurable_fir_filter__DOT__products[2U] = 0U;
        vlSelfRef.configurable_fir_filter__DOT__products[3U] = 0U;
        vlSelfRef.configurable_fir_filter__DOT__products[4U] = 0U;
        vlSelfRef.configurable_fir_filter__DOT__products[5U] = 0U;
        vlSelfRef.configurable_fir_filter__DOT__products[6U] = 0U;
        vlSelfRef.configurable_fir_filter__DOT__products[7U] = 0U;
    }
    vlSelfRef.configurable_fir_filter__DOT__sum_temp 
        = vlSelfRef.configurable_fir_filter__DOT__products
        [0U];
    vlSelfRef.configurable_fir_filter__DOT__sum_temp 
        = (vlSelfRef.configurable_fir_filter__DOT__sum_temp 
           + vlSelfRef.configurable_fir_filter__DOT__products
           [1U]);
    vlSelfRef.configurable_fir_filter__DOT__sum_temp 
        = (vlSelfRef.configurable_fir_filter__DOT__sum_temp 
           + vlSelfRef.configurable_fir_filter__DOT__products
           [2U]);
    vlSelfRef.configurable_fir_filter__DOT__sum_temp 
        = (vlSelfRef.configurable_fir_filter__DOT__sum_temp 
           + vlSelfRef.configurable_fir_filter__DOT__products
           [3U]);
    vlSelfRef.configurable_fir_filter__DOT__sum_temp 
        = (vlSelfRef.configurable_fir_filter__DOT__sum_temp 
           + vlSelfRef.configurable_fir_filter__DOT__products
           [4U]);
    vlSelfRef.configurable_fir_filter__DOT__sum_temp 
        = (vlSelfRef.configurable_fir_filter__DOT__sum_temp 
           + vlSelfRef.configurable_fir_filter__DOT__products
           [5U]);
    vlSelfRef.configurable_fir_filter__DOT__sum_temp 
        = (vlSelfRef.configurable_fir_filter__DOT__sum_temp 
           + vlSelfRef.configurable_fir_filter__DOT__products
           [6U]);
    vlSelfRef.configurable_fir_filter__DOT__sum_temp 
        = (vlSelfRef.configurable_fir_filter__DOT__sum_temp 
           + vlSelfRef.configurable_fir_filter__DOT__products
           [7U]);
    vlSelfRef.configurable_fir_filter__DOT__output_value 
        = (((~ (vlSelfRef.configurable_fir_filter__DOT__sum_temp 
                >> 0x1fU)) & VL_LTS_III(32, 0x7fff0000U, vlSelfRef.configurable_fir_filter__DOT__sum_temp))
            ? 0x7fffU : (((vlSelfRef.configurable_fir_filter__DOT__sum_temp 
                           >> 0x1fU) & VL_GTS_III(32, 0x80000000U, vlSelfRef.configurable_fir_filter__DOT__sum_temp))
                          ? 0x8000U : (0xffffU & VL_SHIFTRS_III(16,32,32, vlSelfRef.configurable_fir_filter__DOT__sum_temp, 0x10U))));
}

void Vconfigurable_fir_filter___024root___eval_triggers__act(Vconfigurable_fir_filter___024root* vlSelf);

bool Vconfigurable_fir_filter___024root___eval_phase__act(Vconfigurable_fir_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fir_filter___024root___eval_phase__act\n"); );
    Vconfigurable_fir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vconfigurable_fir_filter___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vconfigurable_fir_filter___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vconfigurable_fir_filter___024root___eval_phase__nba(Vconfigurable_fir_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fir_filter___024root___eval_phase__nba\n"); );
    Vconfigurable_fir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vconfigurable_fir_filter___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_fir_filter___024root___dump_triggers__nba(Vconfigurable_fir_filter___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_fir_filter___024root___dump_triggers__act(Vconfigurable_fir_filter___024root* vlSelf);
#endif  // VL_DEBUG

void Vconfigurable_fir_filter___024root___eval(Vconfigurable_fir_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fir_filter___024root___eval\n"); );
    Vconfigurable_fir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vconfigurable_fir_filter___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("libraries/filters/configurable_fir_filter.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vconfigurable_fir_filter___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("libraries/filters/configurable_fir_filter.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vconfigurable_fir_filter___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vconfigurable_fir_filter___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vconfigurable_fir_filter___024root___eval_debug_assertions(Vconfigurable_fir_filter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_fir_filter___024root___eval_debug_assertions\n"); );
    Vconfigurable_fir_filter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY(((vlSelfRef.data_valid & 0xfeU)))) {
        Verilated::overWidthError("data_valid");}
}
#endif  // VL_DEBUG
