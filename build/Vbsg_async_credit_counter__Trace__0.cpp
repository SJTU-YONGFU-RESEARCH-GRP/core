// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbsg_async_credit_counter__Syms.h"


void Vbsg_async_credit_counter___024root__trace_chg_0_sub_0(Vbsg_async_credit_counter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vbsg_async_credit_counter___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_async_credit_counter___024root__trace_chg_0\n"); );
    // Init
    Vbsg_async_credit_counter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbsg_async_credit_counter___024root*>(voidSelf);
    Vbsg_async_credit_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vbsg_async_credit_counter___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vbsg_async_credit_counter___024root__trace_chg_0_sub_0(Vbsg_async_credit_counter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_async_credit_counter___024root__trace_chg_0_sub_0\n"); );
    Vbsg_async_credit_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.bsg_async_credit_counter__DOT__r_counter_r),3);
        bufp->chgCData(oldp+1,(vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
                               [0x2bU]),3);
        bufp->chgCData(oldp+2,((7U & (VL_SHIFTR_III(3,3,32, (IData)(vlSelfRef.bsg_async_credit_counter__DOT__r_counter_r), 1U) 
                                      ^ (IData)(vlSelfRef.bsg_async_credit_counter__DOT__r_counter_r)))),3);
        bufp->chgIData(oldp+3,(vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__sync_i),32);
    }
    bufp->chgCData(oldp+4,(vlSelfRef.gray_i),4);
    bufp->chgCData(oldp+5,(vlSelfRef.binary_o),4);
    bufp->chgBit(oldp+6,(vlSelfRef.w_clk_i));
    bufp->chgBit(oldp+7,(vlSelfRef.w_inc_token_i));
    bufp->chgBit(oldp+8,(vlSelfRef.w_reset_i));
    bufp->chgBit(oldp+9,(vlSelfRef.r_clk_i));
    bufp->chgBit(oldp+10,(vlSelfRef.r_reset_i));
    bufp->chgBit(oldp+11,(vlSelfRef.r_dec_credit_i));
    bufp->chgBit(oldp+12,(vlSelfRef.r_infinite_credits_i));
    bufp->chgBit(oldp+13,(vlSelfRef.r_credits_avail_o));
    bufp->chgCData(oldp+14,(vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r),3);
    bufp->chgCData(oldp+15,(vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_r),3);
    bufp->chgCData(oldp+16,(vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_n),3);
    bufp->chgCData(oldp+17,((7U & (VL_SHIFTR_III(3,3,32, (IData)(vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_n), 1U) 
                                   ^ (IData)(vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_n)))),3);
}

void Vbsg_async_credit_counter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_async_credit_counter___024root__trace_cleanup\n"); );
    // Init
    Vbsg_async_credit_counter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbsg_async_credit_counter___024root*>(voidSelf);
    Vbsg_async_credit_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
