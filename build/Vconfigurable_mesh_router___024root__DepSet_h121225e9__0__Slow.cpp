// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconfigurable_mesh_router.h for the primary calling header

#include "Vconfigurable_mesh_router__pch.h"
#include "Vconfigurable_mesh_router___024root.h"

VL_ATTR_COLD void Vconfigurable_mesh_router___024root___eval_static(Vconfigurable_mesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_mesh_router___024root___eval_static\n"); );
    Vconfigurable_mesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vconfigurable_mesh_router___024root___eval_initial__TOP(Vconfigurable_mesh_router___024root* vlSelf);
VL_ATTR_COLD void Vconfigurable_mesh_router___024root____Vm_traceActivitySetAll(Vconfigurable_mesh_router___024root* vlSelf);

VL_ATTR_COLD void Vconfigurable_mesh_router___024root___eval_initial(Vconfigurable_mesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_mesh_router___024root___eval_initial\n"); );
    Vconfigurable_mesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vconfigurable_mesh_router___024root___eval_initial__TOP(vlSelf);
    Vconfigurable_mesh_router___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vconfigurable_mesh_router___024root___eval_initial__TOP(Vconfigurable_mesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_mesh_router___024root___eval_initial__TOP\n"); );
    Vconfigurable_mesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.configurable_mesh_router__DOT__k = 5U;
}

VL_ATTR_COLD void Vconfigurable_mesh_router___024root___eval_final(Vconfigurable_mesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_mesh_router___024root___eval_final\n"); );
    Vconfigurable_mesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_mesh_router___024root___dump_triggers__stl(Vconfigurable_mesh_router___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vconfigurable_mesh_router___024root___eval_phase__stl(Vconfigurable_mesh_router___024root* vlSelf);

VL_ATTR_COLD void Vconfigurable_mesh_router___024root___eval_settle(Vconfigurable_mesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_mesh_router___024root___eval_settle\n"); );
    Vconfigurable_mesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vconfigurable_mesh_router___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("libraries/noc/configurable_mesh_router.v", 6, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vconfigurable_mesh_router___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_mesh_router___024root___dump_triggers__stl(Vconfigurable_mesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_mesh_router___024root___dump_triggers__stl\n"); );
    Vconfigurable_mesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vconfigurable_mesh_router___024root___stl_sequent__TOP__0(Vconfigurable_mesh_router___024root* vlSelf);

VL_ATTR_COLD void Vconfigurable_mesh_router___024root___eval_stl(Vconfigurable_mesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_mesh_router___024root___eval_stl\n"); );
    Vconfigurable_mesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vconfigurable_mesh_router___024root___stl_sequent__TOP__0(vlSelf);
        Vconfigurable_mesh_router___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vconfigurable_mesh_router___024root___stl_sequent__TOP__0(Vconfigurable_mesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_mesh_router___024root___stl_sequent__TOP__0\n"); );
    Vconfigurable_mesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.configurable_mesh_router__DOT__packet_i[0U] 
        = (((QData)((IData)(vlSelfRef.north_addr_i)) 
            << 0x20U) | (QData)((IData)(vlSelfRef.north_data_i)));
    vlSelfRef.configurable_mesh_router__DOT__packet_i[1U] 
        = (((QData)((IData)(vlSelfRef.east_addr_i)) 
            << 0x20U) | (QData)((IData)(vlSelfRef.east_data_i)));
    vlSelfRef.configurable_mesh_router__DOT__packet_i[2U] 
        = (((QData)((IData)(vlSelfRef.south_addr_i)) 
            << 0x20U) | (QData)((IData)(vlSelfRef.south_data_i)));
    vlSelfRef.configurable_mesh_router__DOT__packet_i[3U] 
        = (((QData)((IData)(vlSelfRef.west_addr_i)) 
            << 0x20U) | (QData)((IData)(vlSelfRef.west_data_i)));
    vlSelfRef.configurable_mesh_router__DOT__packet_i[4U] 
        = (((QData)((IData)(vlSelfRef.local_addr_i)) 
            << 0x20U) | (QData)((IData)(vlSelfRef.local_data_i)));
    vlSelfRef.configurable_mesh_router__DOT__fifo_full 
        = ((((4U == (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_count_4)) 
             << 4U) | (((4U == (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_count_3)) 
                        << 3U) | ((4U == (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_count_2)) 
                                  << 2U))) | (((4U 
                                                == (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_count_1)) 
                                               << 1U) 
                                              | (4U 
                                                 == (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_count_0))));
    vlSelfRef.configurable_mesh_router__DOT__payload_0 
        = (IData)(vlSelfRef.configurable_mesh_router__DOT__input_fifo_0
                  [vlSelfRef.configurable_mesh_router__DOT__read_ptr_0]);
    vlSelfRef.configurable_mesh_router__DOT__dest_addr_0 
        = (0xffU & (IData)((vlSelfRef.configurable_mesh_router__DOT__input_fifo_0
                            [vlSelfRef.configurable_mesh_router__DOT__read_ptr_0] 
                            >> 0x20U)));
    vlSelfRef.configurable_mesh_router__DOT__payload_1 
        = (IData)(vlSelfRef.configurable_mesh_router__DOT__input_fifo_1
                  [vlSelfRef.configurable_mesh_router__DOT__read_ptr_1]);
    vlSelfRef.configurable_mesh_router__DOT__dest_addr_1 
        = (0xffU & (IData)((vlSelfRef.configurable_mesh_router__DOT__input_fifo_1
                            [vlSelfRef.configurable_mesh_router__DOT__read_ptr_1] 
                            >> 0x20U)));
    vlSelfRef.configurable_mesh_router__DOT__payload_2 
        = (IData)(vlSelfRef.configurable_mesh_router__DOT__input_fifo_2
                  [vlSelfRef.configurable_mesh_router__DOT__read_ptr_2]);
    vlSelfRef.configurable_mesh_router__DOT__dest_addr_2 
        = (0xffU & (IData)((vlSelfRef.configurable_mesh_router__DOT__input_fifo_2
                            [vlSelfRef.configurable_mesh_router__DOT__read_ptr_2] 
                            >> 0x20U)));
    vlSelfRef.configurable_mesh_router__DOT__payload_3 
        = (IData)(vlSelfRef.configurable_mesh_router__DOT__input_fifo_3
                  [vlSelfRef.configurable_mesh_router__DOT__read_ptr_3]);
    vlSelfRef.configurable_mesh_router__DOT__dest_addr_3 
        = (0xffU & (IData)((vlSelfRef.configurable_mesh_router__DOT__input_fifo_3
                            [vlSelfRef.configurable_mesh_router__DOT__read_ptr_3] 
                            >> 0x20U)));
    vlSelfRef.configurable_mesh_router__DOT__payload_4 
        = (IData)(vlSelfRef.configurable_mesh_router__DOT__input_fifo_4
                  [vlSelfRef.configurable_mesh_router__DOT__read_ptr_4]);
    vlSelfRef.configurable_mesh_router__DOT__dest_addr_4 
        = (0xffU & (IData)((vlSelfRef.configurable_mesh_router__DOT__input_fifo_4
                            [vlSelfRef.configurable_mesh_router__DOT__read_ptr_4] 
                            >> 0x20U)));
    vlSelfRef.configurable_mesh_router__DOT__fifo_empty 
        = ((((0U == (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_count_4)) 
             << 4U) | (((0U == (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_count_3)) 
                        << 3U) | ((0U == (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_count_2)) 
                                  << 2U))) | (((0U 
                                                == (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_count_1)) 
                                               << 1U) 
                                              | (0U 
                                                 == (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_count_0))));
    vlSelfRef.configurable_mesh_router__DOT__ready_i 
        = ((((IData)(vlSelfRef.local_ready_i) << 4U) 
            | (((IData)(vlSelfRef.west_ready_i) << 3U) 
               | ((IData)(vlSelfRef.south_ready_i) 
                  << 2U))) | (((IData)(vlSelfRef.east_ready_i) 
                               << 1U) | (IData)(vlSelfRef.north_ready_i)));
    vlSelfRef.configurable_mesh_router__DOT__dest_x_0 
        = (0xfU & (IData)((vlSelfRef.configurable_mesh_router__DOT__input_fifo_0
                           [vlSelfRef.configurable_mesh_router__DOT__read_ptr_0] 
                           >> 0x24U)));
    vlSelfRef.configurable_mesh_router__DOT__dest_y_0 
        = (0xfU & (IData)((vlSelfRef.configurable_mesh_router__DOT__input_fifo_0
                           [vlSelfRef.configurable_mesh_router__DOT__read_ptr_0] 
                           >> 0x20U)));
    vlSelfRef.configurable_mesh_router__DOT__dest_x_1 
        = (0xfU & (IData)((vlSelfRef.configurable_mesh_router__DOT__input_fifo_1
                           [vlSelfRef.configurable_mesh_router__DOT__read_ptr_1] 
                           >> 0x24U)));
    vlSelfRef.configurable_mesh_router__DOT__dest_y_1 
        = (0xfU & (IData)((vlSelfRef.configurable_mesh_router__DOT__input_fifo_1
                           [vlSelfRef.configurable_mesh_router__DOT__read_ptr_1] 
                           >> 0x20U)));
    vlSelfRef.configurable_mesh_router__DOT__dest_x_2 
        = (0xfU & (IData)((vlSelfRef.configurable_mesh_router__DOT__input_fifo_2
                           [vlSelfRef.configurable_mesh_router__DOT__read_ptr_2] 
                           >> 0x24U)));
    vlSelfRef.configurable_mesh_router__DOT__dest_y_2 
        = (0xfU & (IData)((vlSelfRef.configurable_mesh_router__DOT__input_fifo_2
                           [vlSelfRef.configurable_mesh_router__DOT__read_ptr_2] 
                           >> 0x20U)));
    vlSelfRef.configurable_mesh_router__DOT__dest_x_3 
        = (0xfU & (IData)((vlSelfRef.configurable_mesh_router__DOT__input_fifo_3
                           [vlSelfRef.configurable_mesh_router__DOT__read_ptr_3] 
                           >> 0x24U)));
    vlSelfRef.configurable_mesh_router__DOT__dest_y_3 
        = (0xfU & (IData)((vlSelfRef.configurable_mesh_router__DOT__input_fifo_3
                           [vlSelfRef.configurable_mesh_router__DOT__read_ptr_3] 
                           >> 0x20U)));
    vlSelfRef.configurable_mesh_router__DOT__dest_x_4 
        = (0xfU & (IData)((vlSelfRef.configurable_mesh_router__DOT__input_fifo_4
                           [vlSelfRef.configurable_mesh_router__DOT__read_ptr_4] 
                           >> 0x24U)));
    vlSelfRef.configurable_mesh_router__DOT__dest_y_4 
        = (0xfU & (IData)((vlSelfRef.configurable_mesh_router__DOT__input_fifo_4
                           [vlSelfRef.configurable_mesh_router__DOT__read_ptr_4] 
                           >> 0x20U)));
    vlSelfRef.north_ready_o = (1U & (~ (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_full)));
    vlSelfRef.east_ready_o = (1U & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_full) 
                                       >> 1U)));
    vlSelfRef.south_ready_o = (1U & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_full) 
                                        >> 2U)));
    vlSelfRef.west_ready_o = (1U & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_full) 
                                       >> 3U)));
    vlSelfRef.local_ready_o = (1U & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_full) 
                                        >> 4U)));
    vlSelfRef.configurable_mesh_router__DOT__route_port_0 
        = ((((IData)(vlSelfRef.configurable_mesh_router__DOT__dest_x_0) 
             == (IData)(vlSelfRef.local_x_addr)) & 
            ((IData)(vlSelfRef.configurable_mesh_router__DOT__dest_y_0) 
             == (IData)(vlSelfRef.local_y_addr))) ? 4U
            : (((IData)(vlSelfRef.configurable_mesh_router__DOT__dest_x_0) 
                > (IData)(vlSelfRef.local_x_addr)) ? 1U
                : (((IData)(vlSelfRef.configurable_mesh_router__DOT__dest_x_0) 
                    < (IData)(vlSelfRef.local_x_addr))
                    ? 3U : (((IData)(vlSelfRef.configurable_mesh_router__DOT__dest_y_0) 
                             > (IData)(vlSelfRef.local_y_addr))
                             ? 2U : 0U))));
    vlSelfRef.configurable_mesh_router__DOT__route_port_1 
        = ((((IData)(vlSelfRef.configurable_mesh_router__DOT__dest_x_1) 
             == (IData)(vlSelfRef.local_x_addr)) & 
            ((IData)(vlSelfRef.configurable_mesh_router__DOT__dest_y_1) 
             == (IData)(vlSelfRef.local_y_addr))) ? 4U
            : (((IData)(vlSelfRef.configurable_mesh_router__DOT__dest_x_1) 
                > (IData)(vlSelfRef.local_x_addr)) ? 1U
                : (((IData)(vlSelfRef.configurable_mesh_router__DOT__dest_x_1) 
                    < (IData)(vlSelfRef.local_x_addr))
                    ? 3U : (((IData)(vlSelfRef.configurable_mesh_router__DOT__dest_y_1) 
                             > (IData)(vlSelfRef.local_y_addr))
                             ? 2U : 0U))));
    vlSelfRef.configurable_mesh_router__DOT__route_port_2 
        = ((((IData)(vlSelfRef.configurable_mesh_router__DOT__dest_x_2) 
             == (IData)(vlSelfRef.local_x_addr)) & 
            ((IData)(vlSelfRef.configurable_mesh_router__DOT__dest_y_2) 
             == (IData)(vlSelfRef.local_y_addr))) ? 4U
            : (((IData)(vlSelfRef.configurable_mesh_router__DOT__dest_x_2) 
                > (IData)(vlSelfRef.local_x_addr)) ? 1U
                : (((IData)(vlSelfRef.configurable_mesh_router__DOT__dest_x_2) 
                    < (IData)(vlSelfRef.local_x_addr))
                    ? 3U : (((IData)(vlSelfRef.configurable_mesh_router__DOT__dest_y_2) 
                             > (IData)(vlSelfRef.local_y_addr))
                             ? 2U : 0U))));
    vlSelfRef.configurable_mesh_router__DOT__route_port_3 
        = ((((IData)(vlSelfRef.configurable_mesh_router__DOT__dest_x_3) 
             == (IData)(vlSelfRef.local_x_addr)) & 
            ((IData)(vlSelfRef.configurable_mesh_router__DOT__dest_y_3) 
             == (IData)(vlSelfRef.local_y_addr))) ? 4U
            : (((IData)(vlSelfRef.configurable_mesh_router__DOT__dest_x_3) 
                > (IData)(vlSelfRef.local_x_addr)) ? 1U
                : (((IData)(vlSelfRef.configurable_mesh_router__DOT__dest_x_3) 
                    < (IData)(vlSelfRef.local_x_addr))
                    ? 3U : (((IData)(vlSelfRef.configurable_mesh_router__DOT__dest_y_3) 
                             > (IData)(vlSelfRef.local_y_addr))
                             ? 2U : 0U))));
    vlSelfRef.configurable_mesh_router__DOT__route_port_4 
        = ((((IData)(vlSelfRef.configurable_mesh_router__DOT__dest_x_4) 
             == (IData)(vlSelfRef.local_x_addr)) & 
            ((IData)(vlSelfRef.configurable_mesh_router__DOT__dest_y_4) 
             == (IData)(vlSelfRef.local_y_addr))) ? 4U
            : (((IData)(vlSelfRef.configurable_mesh_router__DOT__dest_x_4) 
                > (IData)(vlSelfRef.local_x_addr)) ? 1U
                : (((IData)(vlSelfRef.configurable_mesh_router__DOT__dest_x_4) 
                    < (IData)(vlSelfRef.local_x_addr))
                    ? 3U : (((IData)(vlSelfRef.configurable_mesh_router__DOT__dest_y_4) 
                             > (IData)(vlSelfRef.local_y_addr))
                             ? 2U : 0U))));
    vlSelfRef.configurable_mesh_router__DOT__output_request_0 
        = ((0U == (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_count_0))
            ? 0U : (0x1fU & ((IData)(1U) << (IData)(vlSelfRef.configurable_mesh_router__DOT__route_port_0))));
    vlSelfRef.configurable_mesh_router__DOT__output_request_1 
        = ((0U == (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_count_1))
            ? 0U : (0x1fU & ((IData)(1U) << (IData)(vlSelfRef.configurable_mesh_router__DOT__route_port_1))));
    vlSelfRef.configurable_mesh_router__DOT__output_request_2 
        = ((0U == (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_count_2))
            ? 0U : (0x1fU & ((IData)(1U) << (IData)(vlSelfRef.configurable_mesh_router__DOT__route_port_2))));
    vlSelfRef.configurable_mesh_router__DOT__output_request_3 
        = ((0U == (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_count_3))
            ? 0U : (0x1fU & ((IData)(1U) << (IData)(vlSelfRef.configurable_mesh_router__DOT__route_port_3))));
    vlSelfRef.configurable_mesh_router__DOT__output_request_4 
        = ((0U == (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_count_4))
            ? 0U : (0x1fU & ((IData)(1U) << (IData)(vlSelfRef.configurable_mesh_router__DOT__route_port_4))));
    vlSelfRef.configurable_mesh_router__DOT__output_grant_0 = 0U;
    vlSelfRef.configurable_mesh_router__DOT__found_grant_0 = 0U;
    vlSelfRef.configurable_mesh_router__DOT__arb_idx_0 
        = (7U & VL_MODDIV_III(32, (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_0), (IData)(5U)));
    if (((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_0)) 
         && (1U & ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_request_0) 
                   >> (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_0))))) {
        vlSelfRef.configurable_mesh_router__DOT____Vlvbound_h4b54da76__0 = 1U;
        if ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_0))) {
            vlSelfRef.configurable_mesh_router__DOT__output_grant_0 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_0))) 
                    & (IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_0)) 
                   | (0x1fU & ((IData)(vlSelfRef.configurable_mesh_router__DOT____Vlvbound_h4b54da76__0) 
                               << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_0))));
        }
        vlSelfRef.configurable_mesh_router__DOT__found_grant_0 = 1U;
    }
    vlSelfRef.configurable_mesh_router__DOT__arb_idx_0 
        = (7U & VL_MODDIV_III(32, ((IData)(1U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_0)), (IData)(5U)));
    if (((~ (IData)(vlSelfRef.configurable_mesh_router__DOT__found_grant_0)) 
         & ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_0)) 
            && (1U & ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_request_0) 
                      >> (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_0)))))) {
        vlSelfRef.configurable_mesh_router__DOT____Vlvbound_h4b54da76__0 = 1U;
        if ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_0))) {
            vlSelfRef.configurable_mesh_router__DOT__output_grant_0 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_0))) 
                    & (IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_0)) 
                   | (0x1fU & ((IData)(vlSelfRef.configurable_mesh_router__DOT____Vlvbound_h4b54da76__0) 
                               << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_0))));
        }
        vlSelfRef.configurable_mesh_router__DOT__found_grant_0 = 1U;
    }
    vlSelfRef.configurable_mesh_router__DOT__arb_idx_0 
        = (7U & VL_MODDIV_III(32, ((IData)(2U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_0)), (IData)(5U)));
    if (((~ (IData)(vlSelfRef.configurable_mesh_router__DOT__found_grant_0)) 
         & ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_0)) 
            && (1U & ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_request_0) 
                      >> (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_0)))))) {
        vlSelfRef.configurable_mesh_router__DOT____Vlvbound_h4b54da76__0 = 1U;
        if ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_0))) {
            vlSelfRef.configurable_mesh_router__DOT__output_grant_0 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_0))) 
                    & (IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_0)) 
                   | (0x1fU & ((IData)(vlSelfRef.configurable_mesh_router__DOT____Vlvbound_h4b54da76__0) 
                               << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_0))));
        }
        vlSelfRef.configurable_mesh_router__DOT__found_grant_0 = 1U;
    }
    vlSelfRef.configurable_mesh_router__DOT__arb_idx_0 
        = (7U & VL_MODDIV_III(32, ((IData)(3U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_0)), (IData)(5U)));
    if (((~ (IData)(vlSelfRef.configurable_mesh_router__DOT__found_grant_0)) 
         & ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_0)) 
            && (1U & ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_request_0) 
                      >> (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_0)))))) {
        vlSelfRef.configurable_mesh_router__DOT____Vlvbound_h4b54da76__0 = 1U;
        if ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_0))) {
            vlSelfRef.configurable_mesh_router__DOT__output_grant_0 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_0))) 
                    & (IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_0)) 
                   | (0x1fU & ((IData)(vlSelfRef.configurable_mesh_router__DOT____Vlvbound_h4b54da76__0) 
                               << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_0))));
        }
        vlSelfRef.configurable_mesh_router__DOT__found_grant_0 = 1U;
    }
    vlSelfRef.configurable_mesh_router__DOT__arb_idx_0 
        = (7U & VL_MODDIV_III(32, ((IData)(4U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_0)), (IData)(5U)));
    if (((~ (IData)(vlSelfRef.configurable_mesh_router__DOT__found_grant_0)) 
         & ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_0)) 
            && (1U & ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_request_0) 
                      >> (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_0)))))) {
        vlSelfRef.configurable_mesh_router__DOT____Vlvbound_h4b54da76__0 = 1U;
        if ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_0))) {
            vlSelfRef.configurable_mesh_router__DOT__output_grant_0 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_0))) 
                    & (IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_0)) 
                   | (0x1fU & ((IData)(vlSelfRef.configurable_mesh_router__DOT____Vlvbound_h4b54da76__0) 
                               << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_0))));
        }
        vlSelfRef.configurable_mesh_router__DOT__found_grant_0 = 1U;
    }
    vlSelfRef.configurable_mesh_router__DOT__output_grant_1 = 0U;
    vlSelfRef.configurable_mesh_router__DOT__found_grant_1 = 0U;
    vlSelfRef.configurable_mesh_router__DOT__arb_idx_1 
        = (7U & VL_MODDIV_III(32, (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_1), (IData)(5U)));
    if (((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_1)) 
         && (1U & ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_request_1) 
                   >> (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_1))))) {
        vlSelfRef.configurable_mesh_router__DOT____Vlvbound_hb449bd47__0 = 1U;
        if ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_1))) {
            vlSelfRef.configurable_mesh_router__DOT__output_grant_1 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_1))) 
                    & (IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_1)) 
                   | (0x1fU & ((IData)(vlSelfRef.configurable_mesh_router__DOT____Vlvbound_hb449bd47__0) 
                               << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_1))));
        }
        vlSelfRef.configurable_mesh_router__DOT__found_grant_1 = 1U;
    }
    vlSelfRef.configurable_mesh_router__DOT__arb_idx_1 
        = (7U & VL_MODDIV_III(32, ((IData)(1U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_1)), (IData)(5U)));
    if (((~ (IData)(vlSelfRef.configurable_mesh_router__DOT__found_grant_1)) 
         & ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_1)) 
            && (1U & ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_request_1) 
                      >> (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_1)))))) {
        vlSelfRef.configurable_mesh_router__DOT____Vlvbound_hb449bd47__0 = 1U;
        if ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_1))) {
            vlSelfRef.configurable_mesh_router__DOT__output_grant_1 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_1))) 
                    & (IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_1)) 
                   | (0x1fU & ((IData)(vlSelfRef.configurable_mesh_router__DOT____Vlvbound_hb449bd47__0) 
                               << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_1))));
        }
        vlSelfRef.configurable_mesh_router__DOT__found_grant_1 = 1U;
    }
    vlSelfRef.configurable_mesh_router__DOT__arb_idx_1 
        = (7U & VL_MODDIV_III(32, ((IData)(2U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_1)), (IData)(5U)));
    if (((~ (IData)(vlSelfRef.configurable_mesh_router__DOT__found_grant_1)) 
         & ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_1)) 
            && (1U & ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_request_1) 
                      >> (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_1)))))) {
        vlSelfRef.configurable_mesh_router__DOT____Vlvbound_hb449bd47__0 = 1U;
        if ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_1))) {
            vlSelfRef.configurable_mesh_router__DOT__output_grant_1 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_1))) 
                    & (IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_1)) 
                   | (0x1fU & ((IData)(vlSelfRef.configurable_mesh_router__DOT____Vlvbound_hb449bd47__0) 
                               << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_1))));
        }
        vlSelfRef.configurable_mesh_router__DOT__found_grant_1 = 1U;
    }
    vlSelfRef.configurable_mesh_router__DOT__arb_idx_1 
        = (7U & VL_MODDIV_III(32, ((IData)(3U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_1)), (IData)(5U)));
    if (((~ (IData)(vlSelfRef.configurable_mesh_router__DOT__found_grant_1)) 
         & ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_1)) 
            && (1U & ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_request_1) 
                      >> (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_1)))))) {
        vlSelfRef.configurable_mesh_router__DOT____Vlvbound_hb449bd47__0 = 1U;
        if ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_1))) {
            vlSelfRef.configurable_mesh_router__DOT__output_grant_1 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_1))) 
                    & (IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_1)) 
                   | (0x1fU & ((IData)(vlSelfRef.configurable_mesh_router__DOT____Vlvbound_hb449bd47__0) 
                               << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_1))));
        }
        vlSelfRef.configurable_mesh_router__DOT__found_grant_1 = 1U;
    }
    vlSelfRef.configurable_mesh_router__DOT__arb_idx_1 
        = (7U & VL_MODDIV_III(32, ((IData)(4U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_1)), (IData)(5U)));
    if (((~ (IData)(vlSelfRef.configurable_mesh_router__DOT__found_grant_1)) 
         & ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_1)) 
            && (1U & ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_request_1) 
                      >> (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_1)))))) {
        vlSelfRef.configurable_mesh_router__DOT____Vlvbound_hb449bd47__0 = 1U;
        if ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_1))) {
            vlSelfRef.configurable_mesh_router__DOT__output_grant_1 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_1))) 
                    & (IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_1)) 
                   | (0x1fU & ((IData)(vlSelfRef.configurable_mesh_router__DOT____Vlvbound_hb449bd47__0) 
                               << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_1))));
        }
        vlSelfRef.configurable_mesh_router__DOT__found_grant_1 = 1U;
    }
    vlSelfRef.configurable_mesh_router__DOT__output_grant_2 = 0U;
    vlSelfRef.configurable_mesh_router__DOT__found_grant_2 = 0U;
    vlSelfRef.configurable_mesh_router__DOT__arb_idx_2 
        = (7U & VL_MODDIV_III(32, (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_2), (IData)(5U)));
    if (((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_2)) 
         && (1U & ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_request_2) 
                   >> (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_2))))) {
        vlSelfRef.configurable_mesh_router__DOT____Vlvbound_h02c5bed0__0 = 1U;
        if ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_2))) {
            vlSelfRef.configurable_mesh_router__DOT__output_grant_2 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_2))) 
                    & (IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_2)) 
                   | (0x1fU & ((IData)(vlSelfRef.configurable_mesh_router__DOT____Vlvbound_h02c5bed0__0) 
                               << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_2))));
        }
        vlSelfRef.configurable_mesh_router__DOT__found_grant_2 = 1U;
    }
    vlSelfRef.configurable_mesh_router__DOT__arb_idx_2 
        = (7U & VL_MODDIV_III(32, ((IData)(1U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_2)), (IData)(5U)));
    if (((~ (IData)(vlSelfRef.configurable_mesh_router__DOT__found_grant_2)) 
         & ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_2)) 
            && (1U & ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_request_2) 
                      >> (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_2)))))) {
        vlSelfRef.configurable_mesh_router__DOT____Vlvbound_h02c5bed0__0 = 1U;
        if ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_2))) {
            vlSelfRef.configurable_mesh_router__DOT__output_grant_2 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_2))) 
                    & (IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_2)) 
                   | (0x1fU & ((IData)(vlSelfRef.configurable_mesh_router__DOT____Vlvbound_h02c5bed0__0) 
                               << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_2))));
        }
        vlSelfRef.configurable_mesh_router__DOT__found_grant_2 = 1U;
    }
    vlSelfRef.configurable_mesh_router__DOT__arb_idx_2 
        = (7U & VL_MODDIV_III(32, ((IData)(2U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_2)), (IData)(5U)));
    if (((~ (IData)(vlSelfRef.configurable_mesh_router__DOT__found_grant_2)) 
         & ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_2)) 
            && (1U & ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_request_2) 
                      >> (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_2)))))) {
        vlSelfRef.configurable_mesh_router__DOT____Vlvbound_h02c5bed0__0 = 1U;
        if ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_2))) {
            vlSelfRef.configurable_mesh_router__DOT__output_grant_2 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_2))) 
                    & (IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_2)) 
                   | (0x1fU & ((IData)(vlSelfRef.configurable_mesh_router__DOT____Vlvbound_h02c5bed0__0) 
                               << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_2))));
        }
        vlSelfRef.configurable_mesh_router__DOT__found_grant_2 = 1U;
    }
    vlSelfRef.configurable_mesh_router__DOT__arb_idx_2 
        = (7U & VL_MODDIV_III(32, ((IData)(3U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_2)), (IData)(5U)));
    if (((~ (IData)(vlSelfRef.configurable_mesh_router__DOT__found_grant_2)) 
         & ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_2)) 
            && (1U & ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_request_2) 
                      >> (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_2)))))) {
        vlSelfRef.configurable_mesh_router__DOT____Vlvbound_h02c5bed0__0 = 1U;
        if ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_2))) {
            vlSelfRef.configurable_mesh_router__DOT__output_grant_2 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_2))) 
                    & (IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_2)) 
                   | (0x1fU & ((IData)(vlSelfRef.configurable_mesh_router__DOT____Vlvbound_h02c5bed0__0) 
                               << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_2))));
        }
        vlSelfRef.configurable_mesh_router__DOT__found_grant_2 = 1U;
    }
    vlSelfRef.configurable_mesh_router__DOT__arb_idx_2 
        = (7U & VL_MODDIV_III(32, ((IData)(4U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_2)), (IData)(5U)));
    if (((~ (IData)(vlSelfRef.configurable_mesh_router__DOT__found_grant_2)) 
         & ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_2)) 
            && (1U & ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_request_2) 
                      >> (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_2)))))) {
        vlSelfRef.configurable_mesh_router__DOT____Vlvbound_h02c5bed0__0 = 1U;
        if ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_2))) {
            vlSelfRef.configurable_mesh_router__DOT__output_grant_2 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_2))) 
                    & (IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_2)) 
                   | (0x1fU & ((IData)(vlSelfRef.configurable_mesh_router__DOT____Vlvbound_h02c5bed0__0) 
                               << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_2))));
        }
        vlSelfRef.configurable_mesh_router__DOT__found_grant_2 = 1U;
    }
    vlSelfRef.configurable_mesh_router__DOT__output_grant_3 = 0U;
    vlSelfRef.configurable_mesh_router__DOT__found_grant_3 = 0U;
    vlSelfRef.configurable_mesh_router__DOT__arb_idx_3 
        = (7U & VL_MODDIV_III(32, (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_3), (IData)(5U)));
    if (((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_3)) 
         && (1U & ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_request_3) 
                   >> (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_3))))) {
        vlSelfRef.configurable_mesh_router__DOT____Vlvbound_h58040ba2__0 = 1U;
        if ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_3))) {
            vlSelfRef.configurable_mesh_router__DOT__output_grant_3 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_3))) 
                    & (IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_3)) 
                   | (0x1fU & ((IData)(vlSelfRef.configurable_mesh_router__DOT____Vlvbound_h58040ba2__0) 
                               << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_3))));
        }
        vlSelfRef.configurable_mesh_router__DOT__found_grant_3 = 1U;
    }
    vlSelfRef.configurable_mesh_router__DOT__arb_idx_3 
        = (7U & VL_MODDIV_III(32, ((IData)(1U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_3)), (IData)(5U)));
    if (((~ (IData)(vlSelfRef.configurable_mesh_router__DOT__found_grant_3)) 
         & ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_3)) 
            && (1U & ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_request_3) 
                      >> (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_3)))))) {
        vlSelfRef.configurable_mesh_router__DOT____Vlvbound_h58040ba2__0 = 1U;
        if ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_3))) {
            vlSelfRef.configurable_mesh_router__DOT__output_grant_3 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_3))) 
                    & (IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_3)) 
                   | (0x1fU & ((IData)(vlSelfRef.configurable_mesh_router__DOT____Vlvbound_h58040ba2__0) 
                               << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_3))));
        }
        vlSelfRef.configurable_mesh_router__DOT__found_grant_3 = 1U;
    }
    vlSelfRef.configurable_mesh_router__DOT__arb_idx_3 
        = (7U & VL_MODDIV_III(32, ((IData)(2U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_3)), (IData)(5U)));
    if (((~ (IData)(vlSelfRef.configurable_mesh_router__DOT__found_grant_3)) 
         & ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_3)) 
            && (1U & ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_request_3) 
                      >> (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_3)))))) {
        vlSelfRef.configurable_mesh_router__DOT____Vlvbound_h58040ba2__0 = 1U;
        if ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_3))) {
            vlSelfRef.configurable_mesh_router__DOT__output_grant_3 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_3))) 
                    & (IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_3)) 
                   | (0x1fU & ((IData)(vlSelfRef.configurable_mesh_router__DOT____Vlvbound_h58040ba2__0) 
                               << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_3))));
        }
        vlSelfRef.configurable_mesh_router__DOT__found_grant_3 = 1U;
    }
    vlSelfRef.configurable_mesh_router__DOT__arb_idx_3 
        = (7U & VL_MODDIV_III(32, ((IData)(3U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_3)), (IData)(5U)));
    if (((~ (IData)(vlSelfRef.configurable_mesh_router__DOT__found_grant_3)) 
         & ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_3)) 
            && (1U & ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_request_3) 
                      >> (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_3)))))) {
        vlSelfRef.configurable_mesh_router__DOT____Vlvbound_h58040ba2__0 = 1U;
        if ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_3))) {
            vlSelfRef.configurable_mesh_router__DOT__output_grant_3 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_3))) 
                    & (IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_3)) 
                   | (0x1fU & ((IData)(vlSelfRef.configurable_mesh_router__DOT____Vlvbound_h58040ba2__0) 
                               << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_3))));
        }
        vlSelfRef.configurable_mesh_router__DOT__found_grant_3 = 1U;
    }
    vlSelfRef.configurable_mesh_router__DOT__arb_idx_3 
        = (7U & VL_MODDIV_III(32, ((IData)(4U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_3)), (IData)(5U)));
    if (((~ (IData)(vlSelfRef.configurable_mesh_router__DOT__found_grant_3)) 
         & ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_3)) 
            && (1U & ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_request_3) 
                      >> (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_3)))))) {
        vlSelfRef.configurable_mesh_router__DOT____Vlvbound_h58040ba2__0 = 1U;
        if ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_3))) {
            vlSelfRef.configurable_mesh_router__DOT__output_grant_3 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_3))) 
                    & (IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_3)) 
                   | (0x1fU & ((IData)(vlSelfRef.configurable_mesh_router__DOT____Vlvbound_h58040ba2__0) 
                               << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_3))));
        }
        vlSelfRef.configurable_mesh_router__DOT__found_grant_3 = 1U;
    }
    vlSelfRef.configurable_mesh_router__DOT__output_grant_4 = 0U;
    vlSelfRef.configurable_mesh_router__DOT__found_grant_4 = 0U;
    vlSelfRef.configurable_mesh_router__DOT__arb_idx_4 
        = (7U & VL_MODDIV_III(32, (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_4), (IData)(5U)));
    if (((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_4)) 
         && (1U & ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_request_4) 
                   >> (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_4))))) {
        vlSelfRef.configurable_mesh_router__DOT____Vlvbound_hece3fa0f__0 = 1U;
        if ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_4))) {
            vlSelfRef.configurable_mesh_router__DOT__output_grant_4 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_4))) 
                    & (IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_4)) 
                   | (0x1fU & ((IData)(vlSelfRef.configurable_mesh_router__DOT____Vlvbound_hece3fa0f__0) 
                               << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_4))));
        }
        vlSelfRef.configurable_mesh_router__DOT__found_grant_4 = 1U;
    }
    vlSelfRef.configurable_mesh_router__DOT__arb_idx_4 
        = (7U & VL_MODDIV_III(32, ((IData)(1U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_4)), (IData)(5U)));
    if (((~ (IData)(vlSelfRef.configurable_mesh_router__DOT__found_grant_4)) 
         & ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_4)) 
            && (1U & ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_request_4) 
                      >> (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_4)))))) {
        vlSelfRef.configurable_mesh_router__DOT____Vlvbound_hece3fa0f__0 = 1U;
        if ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_4))) {
            vlSelfRef.configurable_mesh_router__DOT__output_grant_4 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_4))) 
                    & (IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_4)) 
                   | (0x1fU & ((IData)(vlSelfRef.configurable_mesh_router__DOT____Vlvbound_hece3fa0f__0) 
                               << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_4))));
        }
        vlSelfRef.configurable_mesh_router__DOT__found_grant_4 = 1U;
    }
    vlSelfRef.configurable_mesh_router__DOT__arb_idx_4 
        = (7U & VL_MODDIV_III(32, ((IData)(2U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_4)), (IData)(5U)));
    if (((~ (IData)(vlSelfRef.configurable_mesh_router__DOT__found_grant_4)) 
         & ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_4)) 
            && (1U & ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_request_4) 
                      >> (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_4)))))) {
        vlSelfRef.configurable_mesh_router__DOT____Vlvbound_hece3fa0f__0 = 1U;
        if ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_4))) {
            vlSelfRef.configurable_mesh_router__DOT__output_grant_4 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_4))) 
                    & (IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_4)) 
                   | (0x1fU & ((IData)(vlSelfRef.configurable_mesh_router__DOT____Vlvbound_hece3fa0f__0) 
                               << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_4))));
        }
        vlSelfRef.configurable_mesh_router__DOT__found_grant_4 = 1U;
    }
    vlSelfRef.configurable_mesh_router__DOT__arb_idx_4 
        = (7U & VL_MODDIV_III(32, ((IData)(3U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_4)), (IData)(5U)));
    if (((~ (IData)(vlSelfRef.configurable_mesh_router__DOT__found_grant_4)) 
         & ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_4)) 
            && (1U & ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_request_4) 
                      >> (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_4)))))) {
        vlSelfRef.configurable_mesh_router__DOT____Vlvbound_hece3fa0f__0 = 1U;
        if ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_4))) {
            vlSelfRef.configurable_mesh_router__DOT__output_grant_4 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_4))) 
                    & (IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_4)) 
                   | (0x1fU & ((IData)(vlSelfRef.configurable_mesh_router__DOT____Vlvbound_hece3fa0f__0) 
                               << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_4))));
        }
        vlSelfRef.configurable_mesh_router__DOT__found_grant_4 = 1U;
    }
    vlSelfRef.configurable_mesh_router__DOT__arb_idx_4 
        = (7U & VL_MODDIV_III(32, ((IData)(4U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_4)), (IData)(5U)));
    if (((~ (IData)(vlSelfRef.configurable_mesh_router__DOT__found_grant_4)) 
         & ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_4)) 
            && (1U & ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_request_4) 
                      >> (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_4)))))) {
        vlSelfRef.configurable_mesh_router__DOT____Vlvbound_hece3fa0f__0 = 1U;
        if ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_4))) {
            vlSelfRef.configurable_mesh_router__DOT__output_grant_4 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_4))) 
                    & (IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_4)) 
                   | (0x1fU & ((IData)(vlSelfRef.configurable_mesh_router__DOT____Vlvbound_hece3fa0f__0) 
                               << (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_idx_4))));
        }
        vlSelfRef.configurable_mesh_router__DOT__found_grant_4 = 1U;
    }
    vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__3__KET__ = 0U;
    if ((1U & ((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_0) 
                 >> 3U) & (~ (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty))) 
               & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                  >> 3U)))) {
        vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__3__KET__ = 1U;
    }
    if ((1U & ((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_1) 
                 >> 3U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                              >> 1U))) & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                          >> 3U)))) {
        vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__3__KET__ = 1U;
    }
    if ((1U & ((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_2) 
                 >> 3U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                              >> 2U))) & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                          >> 3U)))) {
        vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__3__KET__ = 1U;
    }
    vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__2__KET__ = 0U;
    if ((1U & ((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_0) 
                 >> 2U) & (~ (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty))) 
               & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                  >> 2U)))) {
        vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__2__KET__ = 1U;
    }
    if ((1U & ((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_1) 
                 >> 2U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                              >> 1U))) & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                          >> 2U)))) {
        vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__2__KET__ = 1U;
    }
    if ((1U & ((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_2) 
                 >> 2U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                              >> 2U))) & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                          >> 2U)))) {
        vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__2__KET__ = 1U;
    }
    vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__1__KET__ = 0U;
    if ((1U & ((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_0) 
                 >> 1U) & (~ (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty))) 
               & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                  >> 1U)))) {
        vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__1__KET__ = 1U;
    }
    if ((1U & ((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_1) 
                 >> 1U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                              >> 1U))) & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                          >> 1U)))) {
        vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__1__KET__ = 1U;
    }
    if ((1U & ((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_2) 
                 >> 1U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                              >> 2U))) & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                          >> 1U)))) {
        vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__1__KET__ = 1U;
    }
    vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__0__KET__ = 0U;
    if ((1U & (((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_0) 
                & (~ (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty))) 
               & (IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i)))) {
        vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__0__KET__ = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_1) 
                & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                      >> 1U))) & (IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i)))) {
        vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__0__KET__ = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_2) 
                & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                      >> 2U))) & (IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i)))) {
        vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__0__KET__ = 1U;
    }
    vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__4__KET__ = 0U;
    if ((IData)(((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_0) 
                   >> 4U) & (~ (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty))) 
                 & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                    >> 4U)))) {
        vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__4__KET__ = 1U;
    }
    if ((IData)(((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_1) 
                   >> 4U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                                >> 1U))) & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                            >> 4U)))) {
        vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__4__KET__ = 1U;
    }
    if ((IData)(((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_2) 
                   >> 4U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                                >> 2U))) & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                            >> 4U)))) {
        vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__4__KET__ = 1U;
    }
    vlSelfRef.configurable_mesh_router__DOT__addr_o_3 = 0U;
    if ((1U & ((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_0) 
                 >> 3U) & (~ (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty))) 
               & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                  >> 3U)))) {
        vlSelfRef.configurable_mesh_router__DOT__addr_o_3 
            = vlSelfRef.configurable_mesh_router__DOT__dest_addr_0;
    }
    if ((1U & ((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_1) 
                 >> 3U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                              >> 1U))) & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                          >> 3U)))) {
        vlSelfRef.configurable_mesh_router__DOT__addr_o_3 
            = vlSelfRef.configurable_mesh_router__DOT__dest_addr_1;
    }
    if ((1U & ((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_2) 
                 >> 3U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                              >> 2U))) & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                          >> 3U)))) {
        vlSelfRef.configurable_mesh_router__DOT__addr_o_3 
            = vlSelfRef.configurable_mesh_router__DOT__dest_addr_2;
    }
    if ((1U & ((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_3) 
                 >> 3U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                              >> 3U))) & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                          >> 3U)))) {
        vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__3__KET__ = 1U;
        vlSelfRef.configurable_mesh_router__DOT__addr_o_3 
            = vlSelfRef.configurable_mesh_router__DOT__dest_addr_3;
    }
    vlSelfRef.configurable_mesh_router__DOT__data_o_3 = 0U;
    if ((1U & ((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_0) 
                 >> 3U) & (~ (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty))) 
               & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                  >> 3U)))) {
        vlSelfRef.configurable_mesh_router__DOT__data_o_3 
            = vlSelfRef.configurable_mesh_router__DOT__payload_0;
    }
    if ((1U & ((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_1) 
                 >> 3U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                              >> 1U))) & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                          >> 3U)))) {
        vlSelfRef.configurable_mesh_router__DOT__data_o_3 
            = vlSelfRef.configurable_mesh_router__DOT__payload_1;
    }
    if ((1U & ((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_2) 
                 >> 3U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                              >> 2U))) & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                          >> 3U)))) {
        vlSelfRef.configurable_mesh_router__DOT__data_o_3 
            = vlSelfRef.configurable_mesh_router__DOT__payload_2;
    }
    if ((1U & ((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_3) 
                 >> 3U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                              >> 3U))) & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                          >> 3U)))) {
        vlSelfRef.configurable_mesh_router__DOT__data_o_3 
            = vlSelfRef.configurable_mesh_router__DOT__payload_3;
    }
    if ((1U & ((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_4) 
                 >> 3U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                              >> 4U))) & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                          >> 3U)))) {
        vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__3__KET__ = 1U;
        vlSelfRef.configurable_mesh_router__DOT__addr_o_3 
            = vlSelfRef.configurable_mesh_router__DOT__dest_addr_4;
        vlSelfRef.configurable_mesh_router__DOT__data_o_3 
            = vlSelfRef.configurable_mesh_router__DOT__payload_4;
    }
    vlSelfRef.configurable_mesh_router__DOT__data_o_2 = 0U;
    if ((1U & ((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_0) 
                 >> 2U) & (~ (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty))) 
               & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                  >> 2U)))) {
        vlSelfRef.configurable_mesh_router__DOT__data_o_2 
            = vlSelfRef.configurable_mesh_router__DOT__payload_0;
    }
    if ((1U & ((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_1) 
                 >> 2U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                              >> 1U))) & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                          >> 2U)))) {
        vlSelfRef.configurable_mesh_router__DOT__data_o_2 
            = vlSelfRef.configurable_mesh_router__DOT__payload_1;
    }
    if ((1U & ((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_2) 
                 >> 2U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                              >> 2U))) & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                          >> 2U)))) {
        vlSelfRef.configurable_mesh_router__DOT__data_o_2 
            = vlSelfRef.configurable_mesh_router__DOT__payload_2;
    }
    if ((1U & ((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_3) 
                 >> 2U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                              >> 3U))) & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                          >> 2U)))) {
        vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__2__KET__ = 1U;
        vlSelfRef.configurable_mesh_router__DOT__data_o_2 
            = vlSelfRef.configurable_mesh_router__DOT__payload_3;
    }
    vlSelfRef.configurable_mesh_router__DOT__data_o_0 = 0U;
    if ((1U & (((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_0) 
                & (~ (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty))) 
               & (IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i)))) {
        vlSelfRef.configurable_mesh_router__DOT__data_o_0 
            = vlSelfRef.configurable_mesh_router__DOT__payload_0;
    }
    if ((1U & (((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_1) 
                & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                      >> 1U))) & (IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i)))) {
        vlSelfRef.configurable_mesh_router__DOT__data_o_0 
            = vlSelfRef.configurable_mesh_router__DOT__payload_1;
    }
    if ((1U & (((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_2) 
                & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                      >> 2U))) & (IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i)))) {
        vlSelfRef.configurable_mesh_router__DOT__data_o_0 
            = vlSelfRef.configurable_mesh_router__DOT__payload_2;
    }
    if ((1U & (((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_3) 
                & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                      >> 3U))) & (IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i)))) {
        vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__0__KET__ = 1U;
        vlSelfRef.configurable_mesh_router__DOT__data_o_0 
            = vlSelfRef.configurable_mesh_router__DOT__payload_3;
    }
    vlSelfRef.configurable_mesh_router__DOT__addr_o_2 = 0U;
    if ((1U & ((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_0) 
                 >> 2U) & (~ (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty))) 
               & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                  >> 2U)))) {
        vlSelfRef.configurable_mesh_router__DOT__addr_o_2 
            = vlSelfRef.configurable_mesh_router__DOT__dest_addr_0;
    }
    if ((1U & ((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_1) 
                 >> 2U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                              >> 1U))) & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                          >> 2U)))) {
        vlSelfRef.configurable_mesh_router__DOT__addr_o_2 
            = vlSelfRef.configurable_mesh_router__DOT__dest_addr_1;
    }
    if ((1U & ((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_2) 
                 >> 2U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                              >> 2U))) & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                          >> 2U)))) {
        vlSelfRef.configurable_mesh_router__DOT__addr_o_2 
            = vlSelfRef.configurable_mesh_router__DOT__dest_addr_2;
    }
    if ((1U & ((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_3) 
                 >> 2U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                              >> 3U))) & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                          >> 2U)))) {
        vlSelfRef.configurable_mesh_router__DOT__addr_o_2 
            = vlSelfRef.configurable_mesh_router__DOT__dest_addr_3;
    }
    if ((1U & ((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_4) 
                 >> 2U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                              >> 4U))) & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                          >> 2U)))) {
        vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__2__KET__ = 1U;
        vlSelfRef.configurable_mesh_router__DOT__data_o_2 
            = vlSelfRef.configurable_mesh_router__DOT__payload_4;
        vlSelfRef.configurable_mesh_router__DOT__addr_o_2 
            = vlSelfRef.configurable_mesh_router__DOT__dest_addr_4;
    }
    vlSelfRef.configurable_mesh_router__DOT__addr_o_0 = 0U;
    if ((1U & (((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_0) 
                & (~ (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty))) 
               & (IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i)))) {
        vlSelfRef.configurable_mesh_router__DOT__addr_o_0 
            = vlSelfRef.configurable_mesh_router__DOT__dest_addr_0;
    }
    if ((1U & (((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_1) 
                & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                      >> 1U))) & (IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i)))) {
        vlSelfRef.configurable_mesh_router__DOT__addr_o_0 
            = vlSelfRef.configurable_mesh_router__DOT__dest_addr_1;
    }
    if ((1U & (((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_2) 
                & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                      >> 2U))) & (IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i)))) {
        vlSelfRef.configurable_mesh_router__DOT__addr_o_0 
            = vlSelfRef.configurable_mesh_router__DOT__dest_addr_2;
    }
    if ((1U & (((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_3) 
                & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                      >> 3U))) & (IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i)))) {
        vlSelfRef.configurable_mesh_router__DOT__addr_o_0 
            = vlSelfRef.configurable_mesh_router__DOT__dest_addr_3;
    }
    if ((1U & (((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_4) 
                & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                      >> 4U))) & (IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i)))) {
        vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__0__KET__ = 1U;
        vlSelfRef.configurable_mesh_router__DOT__data_o_0 
            = vlSelfRef.configurable_mesh_router__DOT__payload_4;
        vlSelfRef.configurable_mesh_router__DOT__addr_o_0 
            = vlSelfRef.configurable_mesh_router__DOT__dest_addr_4;
    }
    vlSelfRef.configurable_mesh_router__DOT__data_o_1 = 0U;
    if ((1U & ((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_0) 
                 >> 1U) & (~ (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty))) 
               & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                  >> 1U)))) {
        vlSelfRef.configurable_mesh_router__DOT__data_o_1 
            = vlSelfRef.configurable_mesh_router__DOT__payload_0;
    }
    if ((1U & ((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_1) 
                 >> 1U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                              >> 1U))) & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                          >> 1U)))) {
        vlSelfRef.configurable_mesh_router__DOT__data_o_1 
            = vlSelfRef.configurable_mesh_router__DOT__payload_1;
    }
    if ((1U & ((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_2) 
                 >> 1U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                              >> 2U))) & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                          >> 1U)))) {
        vlSelfRef.configurable_mesh_router__DOT__data_o_1 
            = vlSelfRef.configurable_mesh_router__DOT__payload_2;
    }
    if ((1U & ((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_3) 
                 >> 1U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                              >> 3U))) & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                          >> 1U)))) {
        vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__1__KET__ = 1U;
        vlSelfRef.configurable_mesh_router__DOT__data_o_1 
            = vlSelfRef.configurable_mesh_router__DOT__payload_3;
    }
    vlSelfRef.configurable_mesh_router__DOT__addr_o_1 = 0U;
    if ((1U & ((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_0) 
                 >> 1U) & (~ (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty))) 
               & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                  >> 1U)))) {
        vlSelfRef.configurable_mesh_router__DOT__addr_o_1 
            = vlSelfRef.configurable_mesh_router__DOT__dest_addr_0;
    }
    if ((1U & ((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_1) 
                 >> 1U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                              >> 1U))) & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                          >> 1U)))) {
        vlSelfRef.configurable_mesh_router__DOT__addr_o_1 
            = vlSelfRef.configurable_mesh_router__DOT__dest_addr_1;
    }
    if ((1U & ((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_2) 
                 >> 1U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                              >> 2U))) & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                          >> 1U)))) {
        vlSelfRef.configurable_mesh_router__DOT__addr_o_1 
            = vlSelfRef.configurable_mesh_router__DOT__dest_addr_2;
    }
    if ((1U & ((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_3) 
                 >> 1U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                              >> 3U))) & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                          >> 1U)))) {
        vlSelfRef.configurable_mesh_router__DOT__addr_o_1 
            = vlSelfRef.configurable_mesh_router__DOT__dest_addr_3;
    }
    if ((1U & ((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_4) 
                 >> 1U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                              >> 4U))) & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                          >> 1U)))) {
        vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__1__KET__ = 1U;
        vlSelfRef.configurable_mesh_router__DOT__data_o_1 
            = vlSelfRef.configurable_mesh_router__DOT__payload_4;
        vlSelfRef.configurable_mesh_router__DOT__addr_o_1 
            = vlSelfRef.configurable_mesh_router__DOT__dest_addr_4;
    }
    vlSelfRef.configurable_mesh_router__DOT__data_o_4 = 0U;
    if ((IData)(((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_0) 
                   >> 4U) & (~ (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty))) 
                 & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                    >> 4U)))) {
        vlSelfRef.configurable_mesh_router__DOT__data_o_4 
            = vlSelfRef.configurable_mesh_router__DOT__payload_0;
    }
    if ((IData)(((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_1) 
                   >> 4U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                                >> 1U))) & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                            >> 4U)))) {
        vlSelfRef.configurable_mesh_router__DOT__data_o_4 
            = vlSelfRef.configurable_mesh_router__DOT__payload_1;
    }
    if ((IData)(((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_2) 
                   >> 4U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                                >> 2U))) & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                            >> 4U)))) {
        vlSelfRef.configurable_mesh_router__DOT__data_o_4 
            = vlSelfRef.configurable_mesh_router__DOT__payload_2;
    }
    if ((IData)(((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_3) 
                   >> 4U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                                >> 3U))) & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                            >> 4U)))) {
        vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__4__KET__ = 1U;
        vlSelfRef.configurable_mesh_router__DOT__data_o_4 
            = vlSelfRef.configurable_mesh_router__DOT__payload_3;
    }
    vlSelfRef.configurable_mesh_router__DOT__addr_o_4 = 0U;
    if ((IData)(((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_0) 
                   >> 4U) & (~ (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty))) 
                 & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                    >> 4U)))) {
        vlSelfRef.configurable_mesh_router__DOT__addr_o_4 
            = vlSelfRef.configurable_mesh_router__DOT__dest_addr_0;
    }
    if ((IData)(((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_1) 
                   >> 4U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                                >> 1U))) & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                            >> 4U)))) {
        vlSelfRef.configurable_mesh_router__DOT__addr_o_4 
            = vlSelfRef.configurable_mesh_router__DOT__dest_addr_1;
    }
    if ((IData)(((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_2) 
                   >> 4U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                                >> 2U))) & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                            >> 4U)))) {
        vlSelfRef.configurable_mesh_router__DOT__addr_o_4 
            = vlSelfRef.configurable_mesh_router__DOT__dest_addr_2;
    }
    if ((IData)(((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_3) 
                   >> 4U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                                >> 3U))) & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                            >> 4U)))) {
        vlSelfRef.configurable_mesh_router__DOT__addr_o_4 
            = vlSelfRef.configurable_mesh_router__DOT__dest_addr_3;
    }
    if ((IData)(((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_4) 
                   >> 4U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                                >> 4U))) & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                            >> 4U)))) {
        vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__4__KET__ = 1U;
        vlSelfRef.configurable_mesh_router__DOT__data_o_4 
            = vlSelfRef.configurable_mesh_router__DOT__payload_4;
        vlSelfRef.configurable_mesh_router__DOT__addr_o_4 
            = vlSelfRef.configurable_mesh_router__DOT__dest_addr_4;
    }
    vlSelfRef.west_valid_o = vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__3__KET__;
    vlSelfRef.south_valid_o = vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__2__KET__;
    vlSelfRef.east_valid_o = vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__1__KET__;
    vlSelfRef.north_valid_o = vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__0__KET__;
    vlSelfRef.local_valid_o = vlSelfRef.configurable_mesh_router__DOT__valid_o__BRA__4__KET__;
    vlSelfRef.west_addr_o = vlSelfRef.configurable_mesh_router__DOT__addr_o_3;
    vlSelfRef.west_data_o = vlSelfRef.configurable_mesh_router__DOT__data_o_3;
    vlSelfRef.south_data_o = vlSelfRef.configurable_mesh_router__DOT__data_o_2;
    vlSelfRef.north_data_o = vlSelfRef.configurable_mesh_router__DOT__data_o_0;
    vlSelfRef.south_addr_o = vlSelfRef.configurable_mesh_router__DOT__addr_o_2;
    vlSelfRef.north_addr_o = vlSelfRef.configurable_mesh_router__DOT__addr_o_0;
    vlSelfRef.east_data_o = vlSelfRef.configurable_mesh_router__DOT__data_o_1;
    vlSelfRef.east_addr_o = vlSelfRef.configurable_mesh_router__DOT__addr_o_1;
    vlSelfRef.local_data_o = vlSelfRef.configurable_mesh_router__DOT__data_o_4;
    vlSelfRef.local_addr_o = vlSelfRef.configurable_mesh_router__DOT__addr_o_4;
}

VL_ATTR_COLD void Vconfigurable_mesh_router___024root___eval_triggers__stl(Vconfigurable_mesh_router___024root* vlSelf);

VL_ATTR_COLD bool Vconfigurable_mesh_router___024root___eval_phase__stl(Vconfigurable_mesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_mesh_router___024root___eval_phase__stl\n"); );
    Vconfigurable_mesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vconfigurable_mesh_router___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vconfigurable_mesh_router___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_mesh_router___024root___dump_triggers__ico(Vconfigurable_mesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_mesh_router___024root___dump_triggers__ico\n"); );
    Vconfigurable_mesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_mesh_router___024root___dump_triggers__act(Vconfigurable_mesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_mesh_router___024root___dump_triggers__act\n"); );
    Vconfigurable_mesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_mesh_router___024root___dump_triggers__nba(Vconfigurable_mesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_mesh_router___024root___dump_triggers__nba\n"); );
    Vconfigurable_mesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vconfigurable_mesh_router___024root____Vm_traceActivitySetAll(Vconfigurable_mesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_mesh_router___024root____Vm_traceActivitySetAll\n"); );
    Vconfigurable_mesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vconfigurable_mesh_router___024root___ctor_var_reset(Vconfigurable_mesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_mesh_router___024root___ctor_var_reset\n"); );
    Vconfigurable_mesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->local_x_addr = VL_RAND_RESET_I(4);
    vlSelf->local_y_addr = VL_RAND_RESET_I(4);
    vlSelf->north_valid_i = VL_RAND_RESET_I(1);
    vlSelf->north_data_i = VL_RAND_RESET_I(32);
    vlSelf->north_addr_i = VL_RAND_RESET_I(8);
    vlSelf->north_ready_o = VL_RAND_RESET_I(1);
    vlSelf->north_valid_o = VL_RAND_RESET_I(1);
    vlSelf->north_data_o = VL_RAND_RESET_I(32);
    vlSelf->north_addr_o = VL_RAND_RESET_I(8);
    vlSelf->north_ready_i = VL_RAND_RESET_I(1);
    vlSelf->east_valid_i = VL_RAND_RESET_I(1);
    vlSelf->east_data_i = VL_RAND_RESET_I(32);
    vlSelf->east_addr_i = VL_RAND_RESET_I(8);
    vlSelf->east_ready_o = VL_RAND_RESET_I(1);
    vlSelf->east_valid_o = VL_RAND_RESET_I(1);
    vlSelf->east_data_o = VL_RAND_RESET_I(32);
    vlSelf->east_addr_o = VL_RAND_RESET_I(8);
    vlSelf->east_ready_i = VL_RAND_RESET_I(1);
    vlSelf->south_valid_i = VL_RAND_RESET_I(1);
    vlSelf->south_data_i = VL_RAND_RESET_I(32);
    vlSelf->south_addr_i = VL_RAND_RESET_I(8);
    vlSelf->south_ready_o = VL_RAND_RESET_I(1);
    vlSelf->south_valid_o = VL_RAND_RESET_I(1);
    vlSelf->south_data_o = VL_RAND_RESET_I(32);
    vlSelf->south_addr_o = VL_RAND_RESET_I(8);
    vlSelf->south_ready_i = VL_RAND_RESET_I(1);
    vlSelf->west_valid_i = VL_RAND_RESET_I(1);
    vlSelf->west_data_i = VL_RAND_RESET_I(32);
    vlSelf->west_addr_i = VL_RAND_RESET_I(8);
    vlSelf->west_ready_o = VL_RAND_RESET_I(1);
    vlSelf->west_valid_o = VL_RAND_RESET_I(1);
    vlSelf->west_data_o = VL_RAND_RESET_I(32);
    vlSelf->west_addr_o = VL_RAND_RESET_I(8);
    vlSelf->west_ready_i = VL_RAND_RESET_I(1);
    vlSelf->local_valid_i = VL_RAND_RESET_I(1);
    vlSelf->local_data_i = VL_RAND_RESET_I(32);
    vlSelf->local_addr_i = VL_RAND_RESET_I(8);
    vlSelf->local_ready_o = VL_RAND_RESET_I(1);
    vlSelf->local_valid_o = VL_RAND_RESET_I(1);
    vlSelf->local_data_o = VL_RAND_RESET_I(32);
    vlSelf->local_addr_o = VL_RAND_RESET_I(8);
    vlSelf->local_ready_i = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->configurable_mesh_router__DOT__input_fifo_0[__Vi0] = VL_RAND_RESET_Q(40);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->configurable_mesh_router__DOT__input_fifo_1[__Vi0] = VL_RAND_RESET_Q(40);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->configurable_mesh_router__DOT__input_fifo_2[__Vi0] = VL_RAND_RESET_Q(40);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->configurable_mesh_router__DOT__input_fifo_3[__Vi0] = VL_RAND_RESET_Q(40);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->configurable_mesh_router__DOT__input_fifo_4[__Vi0] = VL_RAND_RESET_Q(40);
    }
    vlSelf->configurable_mesh_router__DOT__fifo_count_0 = VL_RAND_RESET_I(4);
    vlSelf->configurable_mesh_router__DOT__fifo_count_1 = VL_RAND_RESET_I(4);
    vlSelf->configurable_mesh_router__DOT__fifo_count_2 = VL_RAND_RESET_I(4);
    vlSelf->configurable_mesh_router__DOT__fifo_count_3 = VL_RAND_RESET_I(4);
    vlSelf->configurable_mesh_router__DOT__fifo_count_4 = VL_RAND_RESET_I(4);
    vlSelf->configurable_mesh_router__DOT__read_ptr_0 = VL_RAND_RESET_I(2);
    vlSelf->configurable_mesh_router__DOT__read_ptr_1 = VL_RAND_RESET_I(2);
    vlSelf->configurable_mesh_router__DOT__read_ptr_2 = VL_RAND_RESET_I(2);
    vlSelf->configurable_mesh_router__DOT__read_ptr_3 = VL_RAND_RESET_I(2);
    vlSelf->configurable_mesh_router__DOT__read_ptr_4 = VL_RAND_RESET_I(2);
    vlSelf->configurable_mesh_router__DOT__write_ptr_0 = VL_RAND_RESET_I(2);
    vlSelf->configurable_mesh_router__DOT__write_ptr_1 = VL_RAND_RESET_I(2);
    vlSelf->configurable_mesh_router__DOT__write_ptr_2 = VL_RAND_RESET_I(2);
    vlSelf->configurable_mesh_router__DOT__write_ptr_3 = VL_RAND_RESET_I(2);
    vlSelf->configurable_mesh_router__DOT__write_ptr_4 = VL_RAND_RESET_I(2);
    vlSelf->configurable_mesh_router__DOT__fifo_empty = VL_RAND_RESET_I(5);
    vlSelf->configurable_mesh_router__DOT__fifo_full = VL_RAND_RESET_I(5);
    vlSelf->configurable_mesh_router__DOT__output_grant_0 = VL_RAND_RESET_I(5);
    vlSelf->configurable_mesh_router__DOT__output_grant_1 = VL_RAND_RESET_I(5);
    vlSelf->configurable_mesh_router__DOT__output_grant_2 = VL_RAND_RESET_I(5);
    vlSelf->configurable_mesh_router__DOT__output_grant_3 = VL_RAND_RESET_I(5);
    vlSelf->configurable_mesh_router__DOT__output_grant_4 = VL_RAND_RESET_I(5);
    vlSelf->configurable_mesh_router__DOT__output_request_0 = VL_RAND_RESET_I(5);
    vlSelf->configurable_mesh_router__DOT__output_request_1 = VL_RAND_RESET_I(5);
    vlSelf->configurable_mesh_router__DOT__output_request_2 = VL_RAND_RESET_I(5);
    vlSelf->configurable_mesh_router__DOT__output_request_3 = VL_RAND_RESET_I(5);
    vlSelf->configurable_mesh_router__DOT__output_request_4 = VL_RAND_RESET_I(5);
    vlSelf->configurable_mesh_router__DOT__arb_ptr_0 = VL_RAND_RESET_I(3);
    vlSelf->configurable_mesh_router__DOT__arb_ptr_1 = VL_RAND_RESET_I(3);
    vlSelf->configurable_mesh_router__DOT__arb_ptr_2 = VL_RAND_RESET_I(3);
    vlSelf->configurable_mesh_router__DOT__arb_ptr_3 = VL_RAND_RESET_I(3);
    vlSelf->configurable_mesh_router__DOT__arb_ptr_4 = VL_RAND_RESET_I(3);
    vlSelf->configurable_mesh_router__DOT__found_grant_0 = VL_RAND_RESET_I(1);
    vlSelf->configurable_mesh_router__DOT__found_grant_1 = VL_RAND_RESET_I(1);
    vlSelf->configurable_mesh_router__DOT__found_grant_2 = VL_RAND_RESET_I(1);
    vlSelf->configurable_mesh_router__DOT__found_grant_3 = VL_RAND_RESET_I(1);
    vlSelf->configurable_mesh_router__DOT__found_grant_4 = VL_RAND_RESET_I(1);
    vlSelf->configurable_mesh_router__DOT__arb_idx_0 = VL_RAND_RESET_I(3);
    vlSelf->configurable_mesh_router__DOT__arb_idx_1 = VL_RAND_RESET_I(3);
    vlSelf->configurable_mesh_router__DOT__arb_idx_2 = VL_RAND_RESET_I(3);
    vlSelf->configurable_mesh_router__DOT__arb_idx_3 = VL_RAND_RESET_I(3);
    vlSelf->configurable_mesh_router__DOT__arb_idx_4 = VL_RAND_RESET_I(3);
    vlSelf->configurable_mesh_router__DOT__dest_addr_0 = VL_RAND_RESET_I(8);
    vlSelf->configurable_mesh_router__DOT__dest_addr_1 = VL_RAND_RESET_I(8);
    vlSelf->configurable_mesh_router__DOT__dest_addr_2 = VL_RAND_RESET_I(8);
    vlSelf->configurable_mesh_router__DOT__dest_addr_3 = VL_RAND_RESET_I(8);
    vlSelf->configurable_mesh_router__DOT__dest_addr_4 = VL_RAND_RESET_I(8);
    vlSelf->configurable_mesh_router__DOT__payload_0 = VL_RAND_RESET_I(32);
    vlSelf->configurable_mesh_router__DOT__payload_1 = VL_RAND_RESET_I(32);
    vlSelf->configurable_mesh_router__DOT__payload_2 = VL_RAND_RESET_I(32);
    vlSelf->configurable_mesh_router__DOT__payload_3 = VL_RAND_RESET_I(32);
    vlSelf->configurable_mesh_router__DOT__payload_4 = VL_RAND_RESET_I(32);
    vlSelf->configurable_mesh_router__DOT__route_port_0 = VL_RAND_RESET_I(3);
    vlSelf->configurable_mesh_router__DOT__route_port_1 = VL_RAND_RESET_I(3);
    vlSelf->configurable_mesh_router__DOT__route_port_2 = VL_RAND_RESET_I(3);
    vlSelf->configurable_mesh_router__DOT__route_port_3 = VL_RAND_RESET_I(3);
    vlSelf->configurable_mesh_router__DOT__route_port_4 = VL_RAND_RESET_I(3);
    vlSelf->configurable_mesh_router__DOT__valid_o__BRA__4__KET__ = VL_RAND_RESET_I(1);
    vlSelf->configurable_mesh_router__DOT__valid_o__BRA__3__KET__ = VL_RAND_RESET_I(1);
    vlSelf->configurable_mesh_router__DOT__valid_o__BRA__2__KET__ = VL_RAND_RESET_I(1);
    vlSelf->configurable_mesh_router__DOT__valid_o__BRA__1__KET__ = VL_RAND_RESET_I(1);
    vlSelf->configurable_mesh_router__DOT__valid_o__BRA__0__KET__ = VL_RAND_RESET_I(1);
    vlSelf->configurable_mesh_router__DOT__data_o_0 = VL_RAND_RESET_I(32);
    vlSelf->configurable_mesh_router__DOT__data_o_1 = VL_RAND_RESET_I(32);
    vlSelf->configurable_mesh_router__DOT__data_o_2 = VL_RAND_RESET_I(32);
    vlSelf->configurable_mesh_router__DOT__data_o_3 = VL_RAND_RESET_I(32);
    vlSelf->configurable_mesh_router__DOT__data_o_4 = VL_RAND_RESET_I(32);
    vlSelf->configurable_mesh_router__DOT__addr_o_0 = VL_RAND_RESET_I(8);
    vlSelf->configurable_mesh_router__DOT__addr_o_1 = VL_RAND_RESET_I(8);
    vlSelf->configurable_mesh_router__DOT__addr_o_2 = VL_RAND_RESET_I(8);
    vlSelf->configurable_mesh_router__DOT__addr_o_3 = VL_RAND_RESET_I(8);
    vlSelf->configurable_mesh_router__DOT__addr_o_4 = VL_RAND_RESET_I(8);
    vlSelf->configurable_mesh_router__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->configurable_mesh_router__DOT__k = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->configurable_mesh_router__DOT__packet_i[__Vi0] = VL_RAND_RESET_Q(40);
    }
    vlSelf->configurable_mesh_router__DOT__ready_i = VL_RAND_RESET_I(5);
    vlSelf->configurable_mesh_router__DOT__dest_x_0 = VL_RAND_RESET_I(4);
    vlSelf->configurable_mesh_router__DOT__dest_y_0 = VL_RAND_RESET_I(4);
    vlSelf->configurable_mesh_router__DOT__dest_x_1 = VL_RAND_RESET_I(4);
    vlSelf->configurable_mesh_router__DOT__dest_y_1 = VL_RAND_RESET_I(4);
    vlSelf->configurable_mesh_router__DOT__dest_x_2 = VL_RAND_RESET_I(4);
    vlSelf->configurable_mesh_router__DOT__dest_y_2 = VL_RAND_RESET_I(4);
    vlSelf->configurable_mesh_router__DOT__dest_x_3 = VL_RAND_RESET_I(4);
    vlSelf->configurable_mesh_router__DOT__dest_y_3 = VL_RAND_RESET_I(4);
    vlSelf->configurable_mesh_router__DOT__dest_x_4 = VL_RAND_RESET_I(4);
    vlSelf->configurable_mesh_router__DOT__dest_y_4 = VL_RAND_RESET_I(4);
    vlSelf->configurable_mesh_router__DOT____Vlvbound_h4b54da76__0 = VL_RAND_RESET_I(1);
    vlSelf->configurable_mesh_router__DOT____Vlvbound_hb449bd47__0 = VL_RAND_RESET_I(1);
    vlSelf->configurable_mesh_router__DOT____Vlvbound_h02c5bed0__0 = VL_RAND_RESET_I(1);
    vlSelf->configurable_mesh_router__DOT____Vlvbound_h58040ba2__0 = VL_RAND_RESET_I(1);
    vlSelf->configurable_mesh_router__DOT____Vlvbound_hece3fa0f__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
