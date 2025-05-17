// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vaes_core__Syms.h"


void Vaes_core___024root__trace_chg_0_sub_0(Vaes_core___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vaes_core___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root__trace_chg_0\n"); );
    // Init
    Vaes_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaes_core___024root*>(voidSelf);
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vaes_core___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vaes_core___024root__trace_chg_0_sub_0(Vaes_core___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root__trace_chg_0_sub_0\n"); );
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.aes_core__DOT__rcon[0]),8);
        bufp->chgCData(oldp+1,(vlSelfRef.aes_core__DOT__rcon[1]),8);
        bufp->chgCData(oldp+2,(vlSelfRef.aes_core__DOT__rcon[2]),8);
        bufp->chgCData(oldp+3,(vlSelfRef.aes_core__DOT__rcon[3]),8);
        bufp->chgCData(oldp+4,(vlSelfRef.aes_core__DOT__rcon[4]),8);
        bufp->chgCData(oldp+5,(vlSelfRef.aes_core__DOT__rcon[5]),8);
        bufp->chgCData(oldp+6,(vlSelfRef.aes_core__DOT__rcon[6]),8);
        bufp->chgCData(oldp+7,(vlSelfRef.aes_core__DOT__rcon[7]),8);
        bufp->chgCData(oldp+8,(vlSelfRef.aes_core__DOT__rcon[8]),8);
        bufp->chgCData(oldp+9,(vlSelfRef.aes_core__DOT__rcon[9]),8);
        bufp->chgCData(oldp+10,(vlSelfRef.aes_core__DOT__rcon[10]),8);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgWData(oldp+11,(vlSelfRef.aes_core__DOT__round_keys[0]),128);
        bufp->chgWData(oldp+15,(vlSelfRef.aes_core__DOT__round_keys[1]),128);
        bufp->chgWData(oldp+19,(vlSelfRef.aes_core__DOT__round_keys[2]),128);
        bufp->chgWData(oldp+23,(vlSelfRef.aes_core__DOT__round_keys[3]),128);
        bufp->chgWData(oldp+27,(vlSelfRef.aes_core__DOT__round_keys[4]),128);
        bufp->chgWData(oldp+31,(vlSelfRef.aes_core__DOT__round_keys[5]),128);
        bufp->chgWData(oldp+35,(vlSelfRef.aes_core__DOT__round_keys[6]),128);
        bufp->chgWData(oldp+39,(vlSelfRef.aes_core__DOT__round_keys[7]),128);
        bufp->chgWData(oldp+43,(vlSelfRef.aes_core__DOT__round_keys[8]),128);
        bufp->chgWData(oldp+47,(vlSelfRef.aes_core__DOT__round_keys[9]),128);
        bufp->chgWData(oldp+51,(vlSelfRef.aes_core__DOT__round_keys[10]),128);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+55,(vlSelfRef.aes_core__DOT__state),3);
        bufp->chgCData(oldp+56,(vlSelfRef.aes_core__DOT__round_cnt),4);
        bufp->chgWData(oldp+57,(vlSelfRef.aes_core__DOT__state_reg),128);
        bufp->chgCData(oldp+61,(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s00),8);
        bufp->chgCData(oldp+62,(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s01),8);
        bufp->chgCData(oldp+63,(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s02),8);
        bufp->chgCData(oldp+64,(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s03),8);
        bufp->chgCData(oldp+65,(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s10),8);
        bufp->chgCData(oldp+66,(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s11),8);
        bufp->chgCData(oldp+67,(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s12),8);
        bufp->chgCData(oldp+68,(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s13),8);
        bufp->chgCData(oldp+69,(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s20),8);
        bufp->chgCData(oldp+70,(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s21),8);
        bufp->chgCData(oldp+71,(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s22),8);
        bufp->chgCData(oldp+72,(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s23),8);
        bufp->chgCData(oldp+73,(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s30),8);
        bufp->chgCData(oldp+74,(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s31),8);
        bufp->chgCData(oldp+75,(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s32),8);
        bufp->chgCData(oldp+76,(vlSelfRef.aes_core__DOT__shift_rows__Vstatic__s33),8);
        bufp->chgCData(oldp+77,(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s00),8);
        bufp->chgCData(oldp+78,(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s01),8);
        bufp->chgCData(oldp+79,(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s02),8);
        bufp->chgCData(oldp+80,(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s03),8);
        bufp->chgCData(oldp+81,(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s10),8);
        bufp->chgCData(oldp+82,(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s11),8);
        bufp->chgCData(oldp+83,(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s12),8);
        bufp->chgCData(oldp+84,(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s13),8);
        bufp->chgCData(oldp+85,(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s20),8);
        bufp->chgCData(oldp+86,(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s21),8);
        bufp->chgCData(oldp+87,(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s22),8);
        bufp->chgCData(oldp+88,(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s23),8);
        bufp->chgCData(oldp+89,(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s30),8);
        bufp->chgCData(oldp+90,(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s31),8);
        bufp->chgCData(oldp+91,(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s32),8);
        bufp->chgCData(oldp+92,(vlSelfRef.aes_core__DOT__inv_shift_rows__Vstatic__s33),8);
        bufp->chgIData(oldp+93,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col0),32);
        bufp->chgIData(oldp+94,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col1),32);
        bufp->chgIData(oldp+95,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col2),32);
        bufp->chgIData(oldp+96,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col3),32);
        bufp->chgIData(oldp+97,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__new_col0),32);
        bufp->chgIData(oldp+98,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__new_col1),32);
        bufp->chgIData(oldp+99,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__new_col2),32);
        bufp->chgIData(oldp+100,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__new_col3),32);
        bufp->chgIData(oldp+101,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col0),32);
        bufp->chgIData(oldp+102,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col1),32);
        bufp->chgIData(oldp+103,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col2),32);
        bufp->chgIData(oldp+104,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col3),32);
        bufp->chgIData(oldp+105,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__new_col0),32);
        bufp->chgIData(oldp+106,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__new_col1),32);
        bufp->chgIData(oldp+107,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__new_col2),32);
        bufp->chgIData(oldp+108,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__new_col3),32);
    }
    bufp->chgBit(oldp+109,(vlSelfRef.clk));
    bufp->chgBit(oldp+110,(vlSelfRef.rst_n));
    bufp->chgBit(oldp+111,(vlSelfRef.start));
    bufp->chgBit(oldp+112,(vlSelfRef.encrypt));
    bufp->chgBit(oldp+113,(vlSelfRef.done));
    bufp->chgBit(oldp+114,(vlSelfRef.busy));
    bufp->chgWData(oldp+115,(vlSelfRef.data_in),128);
    bufp->chgWData(oldp+119,(vlSelfRef.key),128);
    bufp->chgWData(oldp+123,(vlSelfRef.data_out),128);
    bufp->chgCData(oldp+127,(vlSelfRef.aes_core__DOT__next_state),3);
}

void Vaes_core___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_core___024root__trace_cleanup\n"); );
    // Init
    Vaes_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaes_core___024root*>(voidSelf);
    Vaes_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
