// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vparameterized_scrambler__Syms.h"


void Vparameterized_scrambler___024root__trace_chg_0_sub_0(Vparameterized_scrambler___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vparameterized_scrambler___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_scrambler___024root__trace_chg_0\n"); );
    // Init
    Vparameterized_scrambler___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vparameterized_scrambler___024root*>(voidSelf);
    Vparameterized_scrambler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vparameterized_scrambler___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vparameterized_scrambler___024root__trace_chg_0_sub_0(Vparameterized_scrambler___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_scrambler___024root__trace_chg_0_sub_0\n"); );
    Vparameterized_scrambler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.parameterized_scrambler__DOT__lfsr_reg),8);
        bufp->chgBit(oldp+1,((1U & VL_REDXOR_32((0x71U 
                                                 & (IData)(vlSelfRef.parameterized_scrambler__DOT__lfsr_reg))))));
        bufp->chgBit(oldp+2,((1U & (IData)(vlSelfRef.parameterized_scrambler__DOT__lfsr_reg))));
    }
    bufp->chgBit(oldp+3,(vlSelfRef.clk));
    bufp->chgBit(oldp+4,(vlSelfRef.rst_n));
    bufp->chgBit(oldp+5,(vlSelfRef.enable));
    bufp->chgBit(oldp+6,(vlSelfRef.data_in));
    bufp->chgBit(oldp+7,(vlSelfRef.data_out));
    bufp->chgCData(oldp+8,(vlSelfRef.lfsr_state),8);
}

void Vparameterized_scrambler___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_scrambler___024root__trace_cleanup\n"); );
    // Init
    Vparameterized_scrambler___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vparameterized_scrambler___024root*>(voidSelf);
    Vparameterized_scrambler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
