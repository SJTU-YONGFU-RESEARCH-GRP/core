// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vparameterized_scrambler__Syms.h"


VL_ATTR_COLD void Vparameterized_scrambler___024root__trace_init_sub__TOP__0(Vparameterized_scrambler___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_scrambler___024root__trace_init_sub__TOP__0\n"); );
    Vparameterized_scrambler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+4,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"lfsr_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("parameterized_scrambler", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+10,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"POLYNOMIAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+12,0,"INITIAL_SEED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+13,0,"SELF_SYNCHRONIZED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"lfsr_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1,0,"lfsr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2,0,"feedback",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"next_input",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vparameterized_scrambler___024root__trace_init_top(Vparameterized_scrambler___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_scrambler___024root__trace_init_top\n"); );
    Vparameterized_scrambler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vparameterized_scrambler___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vparameterized_scrambler___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vparameterized_scrambler___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vparameterized_scrambler___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vparameterized_scrambler___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vparameterized_scrambler___024root__trace_register(Vparameterized_scrambler___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_scrambler___024root__trace_register\n"); );
    Vparameterized_scrambler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vparameterized_scrambler___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vparameterized_scrambler___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vparameterized_scrambler___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vparameterized_scrambler___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vparameterized_scrambler___024root__trace_const_0_sub_0(Vparameterized_scrambler___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vparameterized_scrambler___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_scrambler___024root__trace_const_0\n"); );
    // Init
    Vparameterized_scrambler___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vparameterized_scrambler___024root*>(voidSelf);
    Vparameterized_scrambler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vparameterized_scrambler___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vparameterized_scrambler___024root__trace_const_0_sub_0(Vparameterized_scrambler___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_scrambler___024root__trace_const_0_sub_0\n"); );
    Vparameterized_scrambler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+10,(8U),32);
    bufp->fullCData(oldp+11,(0x71U),8);
    bufp->fullCData(oldp+12,(0xffU),8);
    bufp->fullIData(oldp+13,(0U),32);
}

VL_ATTR_COLD void Vparameterized_scrambler___024root__trace_full_0_sub_0(Vparameterized_scrambler___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vparameterized_scrambler___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_scrambler___024root__trace_full_0\n"); );
    // Init
    Vparameterized_scrambler___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vparameterized_scrambler___024root*>(voidSelf);
    Vparameterized_scrambler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vparameterized_scrambler___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vparameterized_scrambler___024root__trace_full_0_sub_0(Vparameterized_scrambler___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparameterized_scrambler___024root__trace_full_0_sub_0\n"); );
    Vparameterized_scrambler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.parameterized_scrambler__DOT__lfsr_reg),8);
    bufp->fullBit(oldp+2,((1U & VL_REDXOR_32((0x71U 
                                              & (IData)(vlSelfRef.parameterized_scrambler__DOT__lfsr_reg))))));
    bufp->fullBit(oldp+3,((1U & (IData)(vlSelfRef.parameterized_scrambler__DOT__lfsr_reg))));
    bufp->fullBit(oldp+4,(vlSelfRef.clk));
    bufp->fullBit(oldp+5,(vlSelfRef.rst_n));
    bufp->fullBit(oldp+6,(vlSelfRef.enable));
    bufp->fullBit(oldp+7,(vlSelfRef.data_in));
    bufp->fullBit(oldp+8,(vlSelfRef.data_out));
    bufp->fullCData(oldp+9,(vlSelfRef.lfsr_state),8);
}
