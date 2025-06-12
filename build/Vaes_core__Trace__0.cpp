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
        bufp->chgIData(oldp+0,(vlSelfRef.aes_core__DOT__i),32);
        bufp->chgCData(oldp+1,(vlSelfRef.aes_core__DOT__rcon[0]),8);
        bufp->chgCData(oldp+2,(vlSelfRef.aes_core__DOT__rcon[1]),8);
        bufp->chgCData(oldp+3,(vlSelfRef.aes_core__DOT__rcon[2]),8);
        bufp->chgCData(oldp+4,(vlSelfRef.aes_core__DOT__rcon[3]),8);
        bufp->chgCData(oldp+5,(vlSelfRef.aes_core__DOT__rcon[4]),8);
        bufp->chgCData(oldp+6,(vlSelfRef.aes_core__DOT__rcon[5]),8);
        bufp->chgCData(oldp+7,(vlSelfRef.aes_core__DOT__rcon[6]),8);
        bufp->chgCData(oldp+8,(vlSelfRef.aes_core__DOT__rcon[7]),8);
        bufp->chgCData(oldp+9,(vlSelfRef.aes_core__DOT__rcon[8]),8);
        bufp->chgCData(oldp+10,(vlSelfRef.aes_core__DOT__rcon[9]),8);
        bufp->chgCData(oldp+11,(vlSelfRef.aes_core__DOT__rcon[10]),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgWData(oldp+12,(vlSelfRef.aes_core__DOT__formatted_data_in),128);
        bufp->chgWData(oldp+16,(vlSelfRef.aes_core__DOT__formatted_key),128);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+20,(vlSelfRef.aes_core__DOT__state),3);
        bufp->chgCData(oldp+21,(vlSelfRef.aes_core__DOT__round_cnt),4);
        bufp->chgWData(oldp+22,(vlSelfRef.aes_core__DOT__state_reg),128);
        bufp->chgWData(oldp+26,(vlSelfRef.aes_core__DOT__round_keys[0]),128);
        bufp->chgWData(oldp+30,(vlSelfRef.aes_core__DOT__round_keys[1]),128);
        bufp->chgWData(oldp+34,(vlSelfRef.aes_core__DOT__round_keys[2]),128);
        bufp->chgWData(oldp+38,(vlSelfRef.aes_core__DOT__round_keys[3]),128);
        bufp->chgWData(oldp+42,(vlSelfRef.aes_core__DOT__round_keys[4]),128);
        bufp->chgWData(oldp+46,(vlSelfRef.aes_core__DOT__round_keys[5]),128);
        bufp->chgWData(oldp+50,(vlSelfRef.aes_core__DOT__round_keys[6]),128);
        bufp->chgWData(oldp+54,(vlSelfRef.aes_core__DOT__round_keys[7]),128);
        bufp->chgWData(oldp+58,(vlSelfRef.aes_core__DOT__round_keys[8]),128);
        bufp->chgWData(oldp+62,(vlSelfRef.aes_core__DOT__round_keys[9]),128);
        bufp->chgWData(oldp+66,(vlSelfRef.aes_core__DOT__round_keys[10]),128);
        bufp->chgIData(oldp+70,(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w0),32);
        bufp->chgIData(oldp+71,(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w1),32);
        bufp->chgIData(oldp+72,(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w2),32);
        bufp->chgIData(oldp+73,(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__w3),32);
        bufp->chgIData(oldp+74,(vlSelfRef.aes_core__DOT__key_expansion__Vstatic__temp),32);
        bufp->chgIData(oldp+75,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col0),32);
        bufp->chgIData(oldp+76,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col1),32);
        bufp->chgIData(oldp+77,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col2),32);
        bufp->chgIData(oldp+78,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__col3),32);
        bufp->chgCData(oldp+79,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s0),8);
        bufp->chgCData(oldp+80,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s1),8);
        bufp->chgCData(oldp+81,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s2),8);
        bufp->chgCData(oldp+82,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__s3),8);
        bufp->chgCData(oldp+83,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t0),8);
        bufp->chgCData(oldp+84,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t1),8);
        bufp->chgCData(oldp+85,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t2),8);
        bufp->chgCData(oldp+86,(vlSelfRef.aes_core__DOT__mix_columns__Vstatic__t3),8);
        bufp->chgIData(oldp+87,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col0),32);
        bufp->chgIData(oldp+88,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col1),32);
        bufp->chgIData(oldp+89,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col2),32);
        bufp->chgIData(oldp+90,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__col3),32);
        bufp->chgCData(oldp+91,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s0),8);
        bufp->chgCData(oldp+92,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s1),8);
        bufp->chgCData(oldp+93,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s2),8);
        bufp->chgCData(oldp+94,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__s3),8);
        bufp->chgCData(oldp+95,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t0),8);
        bufp->chgCData(oldp+96,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t1),8);
        bufp->chgCData(oldp+97,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t2),8);
        bufp->chgCData(oldp+98,(vlSelfRef.aes_core__DOT__inv_mix_columns__Vstatic__t3),8);
        bufp->chgIData(oldp+99,(vlSelfRef.aes_core__DOT__j),32);
    }
    bufp->chgBit(oldp+100,(vlSelfRef.clk));
    bufp->chgBit(oldp+101,(vlSelfRef.rst_n));
    bufp->chgBit(oldp+102,(vlSelfRef.start));
    bufp->chgBit(oldp+103,(vlSelfRef.encrypt));
    bufp->chgBit(oldp+104,(vlSelfRef.done));
    bufp->chgBit(oldp+105,(vlSelfRef.busy));
    bufp->chgIData(oldp+106,(vlSelfRef.data_in[0]),32);
    bufp->chgIData(oldp+107,(vlSelfRef.data_in[1]),32);
    bufp->chgIData(oldp+108,(vlSelfRef.data_in[2]),32);
    bufp->chgIData(oldp+109,(vlSelfRef.data_in[3]),32);
    bufp->chgIData(oldp+110,(vlSelfRef.key[0]),32);
    bufp->chgIData(oldp+111,(vlSelfRef.key[1]),32);
    bufp->chgIData(oldp+112,(vlSelfRef.key[2]),32);
    bufp->chgIData(oldp+113,(vlSelfRef.key[3]),32);
    bufp->chgIData(oldp+114,(vlSelfRef.data_out[0]),32);
    bufp->chgIData(oldp+115,(vlSelfRef.data_out[1]),32);
    bufp->chgIData(oldp+116,(vlSelfRef.data_out[2]),32);
    bufp->chgIData(oldp+117,(vlSelfRef.data_out[3]),32);
    bufp->chgCData(oldp+118,(vlSelfRef.aes_core__DOT__next_state),3);
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
}
