// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbsg_async_credit_counter__Syms.h"


VL_ATTR_COLD void Vbsg_async_credit_counter___024root__trace_init_sub__TOP__0(Vbsg_async_credit_counter___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_async_credit_counter___024root__trace_init_sub__TOP__0\n"); );
    Vbsg_async_credit_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+5,0,"gray_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+6,0,"binary_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+7,0,"w_clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"w_inc_token_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"w_reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"r_clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"r_reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"r_dec_credit_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"r_infinite_credits_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"r_credits_avail_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bsg_async_credit_counter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+19,0,"max_tokens_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"lg_credit_to_token_decimation_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"count_negedge_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"extra_margin_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"check_excess_credits_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"start_full_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"use_async_w_reset_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"w_clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"w_inc_token_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"w_reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"r_clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"r_reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"r_dec_credit_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"r_infinite_credits_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"r_credits_avail_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"r_counter_width_lp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"w_counter_width_lp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"r_counter_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+15,0,"w_counter_gray_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2,0,"w_counter_gray_r_rsync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+23,0,"w_counter_binary_r_rsync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1,0,"r_counter_r_hi_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+24,0,"r_counter_r_lo_bits_nonzero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"r_counter_r_hi_bits_gray",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("bapg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+22,0,"lg_size_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"use_negedge_for_launch_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"use_async_reset_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"w_clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"w_reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"w_inc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"r_clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"r_reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"w_ptr_binary_r_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+15,0,"w_ptr_gray_r_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2,0,"w_ptr_gray_r_rsync_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+16,0,"w_ptr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+17,0,"w_ptr_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+18,0,"w_ptr_gray_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+15,0,"w_ptr_gray_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+4,0,"sync_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("bsg_gray_to_binary", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+19,0,"width_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"gray_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+6,0,"binary_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vbsg_async_credit_counter___024root__trace_init_top(Vbsg_async_credit_counter___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_async_credit_counter___024root__trace_init_top\n"); );
    Vbsg_async_credit_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vbsg_async_credit_counter___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vbsg_async_credit_counter___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vbsg_async_credit_counter___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbsg_async_credit_counter___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbsg_async_credit_counter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vbsg_async_credit_counter___024root__trace_register(Vbsg_async_credit_counter___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_async_credit_counter___024root__trace_register\n"); );
    Vbsg_async_credit_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vbsg_async_credit_counter___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vbsg_async_credit_counter___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vbsg_async_credit_counter___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vbsg_async_credit_counter___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vbsg_async_credit_counter___024root__trace_const_0_sub_0(Vbsg_async_credit_counter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vbsg_async_credit_counter___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_async_credit_counter___024root__trace_const_0\n"); );
    // Init
    Vbsg_async_credit_counter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbsg_async_credit_counter___024root*>(voidSelf);
    Vbsg_async_credit_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vbsg_async_credit_counter___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vbsg_async_credit_counter___024root__trace_const_0_sub_0(Vbsg_async_credit_counter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_async_credit_counter___024root__trace_const_0_sub_0\n"); );
    Vbsg_async_credit_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+19,(4U),32);
    bufp->fullIData(oldp+20,(0U),32);
    bufp->fullIData(oldp+21,(1U),32);
    bufp->fullIData(oldp+22,(3U),32);
    bufp->fullCData(oldp+23,(vlSelfRef.bsg_async_credit_counter__DOT__w_counter_binary_r_rsync),3);
    bufp->fullBit(oldp+24,(0U));
}

VL_ATTR_COLD void Vbsg_async_credit_counter___024root__trace_full_0_sub_0(Vbsg_async_credit_counter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vbsg_async_credit_counter___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_async_credit_counter___024root__trace_full_0\n"); );
    // Init
    Vbsg_async_credit_counter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbsg_async_credit_counter___024root*>(voidSelf);
    Vbsg_async_credit_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vbsg_async_credit_counter___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vbsg_async_credit_counter___024root__trace_full_0_sub_0(Vbsg_async_credit_counter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbsg_async_credit_counter___024root__trace_full_0_sub_0\n"); );
    Vbsg_async_credit_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.bsg_async_credit_counter__DOT__r_counter_r),3);
    bufp->fullCData(oldp+2,(vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r_rsync_r
                            [0x2bU]),3);
    bufp->fullCData(oldp+3,((7U & (VL_SHIFTR_III(3,3,32, (IData)(vlSelfRef.bsg_async_credit_counter__DOT__r_counter_r), 1U) 
                                   ^ (IData)(vlSelfRef.bsg_async_credit_counter__DOT__r_counter_r)))),3);
    bufp->fullIData(oldp+4,(vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__sync_i),32);
    bufp->fullCData(oldp+5,(vlSelfRef.gray_i),4);
    bufp->fullCData(oldp+6,(vlSelfRef.binary_o),4);
    bufp->fullBit(oldp+7,(vlSelfRef.w_clk_i));
    bufp->fullBit(oldp+8,(vlSelfRef.w_inc_token_i));
    bufp->fullBit(oldp+9,(vlSelfRef.w_reset_i));
    bufp->fullBit(oldp+10,(vlSelfRef.r_clk_i));
    bufp->fullBit(oldp+11,(vlSelfRef.r_reset_i));
    bufp->fullBit(oldp+12,(vlSelfRef.r_dec_credit_i));
    bufp->fullBit(oldp+13,(vlSelfRef.r_infinite_credits_i));
    bufp->fullBit(oldp+14,(vlSelfRef.r_credits_avail_o));
    bufp->fullCData(oldp+15,(vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_gray_r),3);
    bufp->fullCData(oldp+16,(vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_r),3);
    bufp->fullCData(oldp+17,(vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_n),3);
    bufp->fullCData(oldp+18,((7U & (VL_SHIFTR_III(3,3,32, (IData)(vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_n), 1U) 
                                    ^ (IData)(vlSelfRef.bsg_async_credit_counter__DOT__bapg__DOT__w_ptr_n)))),3);
}
