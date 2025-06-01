// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconfigurable_mesh_router.h for the primary calling header

#include "Vconfigurable_mesh_router__pch.h"
#include "Vconfigurable_mesh_router___024root.h"

void Vconfigurable_mesh_router___024root___ico_sequent__TOP__0(Vconfigurable_mesh_router___024root* vlSelf);

void Vconfigurable_mesh_router___024root___eval_ico(Vconfigurable_mesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_mesh_router___024root___eval_ico\n"); );
    Vconfigurable_mesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vconfigurable_mesh_router___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vconfigurable_mesh_router___024root___ico_sequent__TOP__0(Vconfigurable_mesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_mesh_router___024root___ico_sequent__TOP__0\n"); );
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
    vlSelfRef.configurable_mesh_router__DOT__ready_i 
        = ((((IData)(vlSelfRef.local_ready_i) << 4U) 
            | (((IData)(vlSelfRef.west_ready_i) << 3U) 
               | ((IData)(vlSelfRef.south_ready_i) 
                  << 2U))) | (((IData)(vlSelfRef.east_ready_i) 
                               << 1U) | (IData)(vlSelfRef.north_ready_i)));
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

void Vconfigurable_mesh_router___024root___eval_triggers__ico(Vconfigurable_mesh_router___024root* vlSelf);

bool Vconfigurable_mesh_router___024root___eval_phase__ico(Vconfigurable_mesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_mesh_router___024root___eval_phase__ico\n"); );
    Vconfigurable_mesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vconfigurable_mesh_router___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vconfigurable_mesh_router___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vconfigurable_mesh_router___024root___eval_act(Vconfigurable_mesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_mesh_router___024root___eval_act\n"); );
    Vconfigurable_mesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vconfigurable_mesh_router___024root___nba_sequent__TOP__0(Vconfigurable_mesh_router___024root* vlSelf);

void Vconfigurable_mesh_router___024root___eval_nba(Vconfigurable_mesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_mesh_router___024root___eval_nba\n"); );
    Vconfigurable_mesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vconfigurable_mesh_router___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vconfigurable_mesh_router___024root___nba_sequent__TOP__0(Vconfigurable_mesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_mesh_router___024root___nba_sequent__TOP__0\n"); );
    Vconfigurable_mesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__configurable_mesh_router__DOT__arb_ptr_0;
    __Vdly__configurable_mesh_router__DOT__arb_ptr_0 = 0;
    CData/*2:0*/ __Vdly__configurable_mesh_router__DOT__arb_ptr_1;
    __Vdly__configurable_mesh_router__DOT__arb_ptr_1 = 0;
    CData/*2:0*/ __Vdly__configurable_mesh_router__DOT__arb_ptr_2;
    __Vdly__configurable_mesh_router__DOT__arb_ptr_2 = 0;
    CData/*2:0*/ __Vdly__configurable_mesh_router__DOT__arb_ptr_3;
    __Vdly__configurable_mesh_router__DOT__arb_ptr_3 = 0;
    CData/*2:0*/ __Vdly__configurable_mesh_router__DOT__arb_ptr_4;
    __Vdly__configurable_mesh_router__DOT__arb_ptr_4 = 0;
    CData/*3:0*/ __Vdly__configurable_mesh_router__DOT__fifo_count_0;
    __Vdly__configurable_mesh_router__DOT__fifo_count_0 = 0;
    CData/*3:0*/ __Vdly__configurable_mesh_router__DOT__fifo_count_1;
    __Vdly__configurable_mesh_router__DOT__fifo_count_1 = 0;
    CData/*3:0*/ __Vdly__configurable_mesh_router__DOT__fifo_count_2;
    __Vdly__configurable_mesh_router__DOT__fifo_count_2 = 0;
    CData/*3:0*/ __Vdly__configurable_mesh_router__DOT__fifo_count_3;
    __Vdly__configurable_mesh_router__DOT__fifo_count_3 = 0;
    CData/*3:0*/ __Vdly__configurable_mesh_router__DOT__fifo_count_4;
    __Vdly__configurable_mesh_router__DOT__fifo_count_4 = 0;
    QData/*39:0*/ __VdlyVal__configurable_mesh_router__DOT__input_fifo_0__v0;
    __VdlyVal__configurable_mesh_router__DOT__input_fifo_0__v0 = 0;
    CData/*1:0*/ __VdlyDim0__configurable_mesh_router__DOT__input_fifo_0__v0;
    __VdlyDim0__configurable_mesh_router__DOT__input_fifo_0__v0 = 0;
    CData/*0:0*/ __VdlySet__configurable_mesh_router__DOT__input_fifo_0__v0;
    __VdlySet__configurable_mesh_router__DOT__input_fifo_0__v0 = 0;
    CData/*0:0*/ __VdlySet__configurable_mesh_router__DOT__input_fifo_0__v1;
    __VdlySet__configurable_mesh_router__DOT__input_fifo_0__v1 = 0;
    QData/*39:0*/ __VdlyVal__configurable_mesh_router__DOT__input_fifo_1__v0;
    __VdlyVal__configurable_mesh_router__DOT__input_fifo_1__v0 = 0;
    CData/*1:0*/ __VdlyDim0__configurable_mesh_router__DOT__input_fifo_1__v0;
    __VdlyDim0__configurable_mesh_router__DOT__input_fifo_1__v0 = 0;
    CData/*0:0*/ __VdlySet__configurable_mesh_router__DOT__input_fifo_1__v0;
    __VdlySet__configurable_mesh_router__DOT__input_fifo_1__v0 = 0;
    CData/*0:0*/ __VdlySet__configurable_mesh_router__DOT__input_fifo_1__v1;
    __VdlySet__configurable_mesh_router__DOT__input_fifo_1__v1 = 0;
    QData/*39:0*/ __VdlyVal__configurable_mesh_router__DOT__input_fifo_2__v0;
    __VdlyVal__configurable_mesh_router__DOT__input_fifo_2__v0 = 0;
    CData/*1:0*/ __VdlyDim0__configurable_mesh_router__DOT__input_fifo_2__v0;
    __VdlyDim0__configurable_mesh_router__DOT__input_fifo_2__v0 = 0;
    CData/*0:0*/ __VdlySet__configurable_mesh_router__DOT__input_fifo_2__v0;
    __VdlySet__configurable_mesh_router__DOT__input_fifo_2__v0 = 0;
    CData/*0:0*/ __VdlySet__configurable_mesh_router__DOT__input_fifo_2__v1;
    __VdlySet__configurable_mesh_router__DOT__input_fifo_2__v1 = 0;
    QData/*39:0*/ __VdlyVal__configurable_mesh_router__DOT__input_fifo_3__v0;
    __VdlyVal__configurable_mesh_router__DOT__input_fifo_3__v0 = 0;
    CData/*1:0*/ __VdlyDim0__configurable_mesh_router__DOT__input_fifo_3__v0;
    __VdlyDim0__configurable_mesh_router__DOT__input_fifo_3__v0 = 0;
    CData/*0:0*/ __VdlySet__configurable_mesh_router__DOT__input_fifo_3__v0;
    __VdlySet__configurable_mesh_router__DOT__input_fifo_3__v0 = 0;
    CData/*0:0*/ __VdlySet__configurable_mesh_router__DOT__input_fifo_3__v1;
    __VdlySet__configurable_mesh_router__DOT__input_fifo_3__v1 = 0;
    QData/*39:0*/ __VdlyVal__configurable_mesh_router__DOT__input_fifo_4__v0;
    __VdlyVal__configurable_mesh_router__DOT__input_fifo_4__v0 = 0;
    CData/*1:0*/ __VdlyDim0__configurable_mesh_router__DOT__input_fifo_4__v0;
    __VdlyDim0__configurable_mesh_router__DOT__input_fifo_4__v0 = 0;
    CData/*0:0*/ __VdlySet__configurable_mesh_router__DOT__input_fifo_4__v0;
    __VdlySet__configurable_mesh_router__DOT__input_fifo_4__v0 = 0;
    CData/*0:0*/ __VdlySet__configurable_mesh_router__DOT__input_fifo_4__v1;
    __VdlySet__configurable_mesh_router__DOT__input_fifo_4__v1 = 0;
    // Body
    __Vdly__configurable_mesh_router__DOT__arb_ptr_0 
        = vlSelfRef.configurable_mesh_router__DOT__arb_ptr_0;
    __Vdly__configurable_mesh_router__DOT__arb_ptr_1 
        = vlSelfRef.configurable_mesh_router__DOT__arb_ptr_1;
    __Vdly__configurable_mesh_router__DOT__arb_ptr_2 
        = vlSelfRef.configurable_mesh_router__DOT__arb_ptr_2;
    __Vdly__configurable_mesh_router__DOT__arb_ptr_3 
        = vlSelfRef.configurable_mesh_router__DOT__arb_ptr_3;
    __Vdly__configurable_mesh_router__DOT__arb_ptr_4 
        = vlSelfRef.configurable_mesh_router__DOT__arb_ptr_4;
    __VdlySet__configurable_mesh_router__DOT__input_fifo_0__v0 = 0U;
    __VdlySet__configurable_mesh_router__DOT__input_fifo_0__v1 = 0U;
    __VdlySet__configurable_mesh_router__DOT__input_fifo_1__v0 = 0U;
    __VdlySet__configurable_mesh_router__DOT__input_fifo_1__v1 = 0U;
    __VdlySet__configurable_mesh_router__DOT__input_fifo_2__v0 = 0U;
    __VdlySet__configurable_mesh_router__DOT__input_fifo_2__v1 = 0U;
    __VdlySet__configurable_mesh_router__DOT__input_fifo_3__v0 = 0U;
    __VdlySet__configurable_mesh_router__DOT__input_fifo_3__v1 = 0U;
    __VdlySet__configurable_mesh_router__DOT__input_fifo_4__v0 = 0U;
    __VdlySet__configurable_mesh_router__DOT__input_fifo_4__v1 = 0U;
    __Vdly__configurable_mesh_router__DOT__fifo_count_0 
        = vlSelfRef.configurable_mesh_router__DOT__fifo_count_0;
    __Vdly__configurable_mesh_router__DOT__fifo_count_1 
        = vlSelfRef.configurable_mesh_router__DOT__fifo_count_1;
    __Vdly__configurable_mesh_router__DOT__fifo_count_2 
        = vlSelfRef.configurable_mesh_router__DOT__fifo_count_2;
    __Vdly__configurable_mesh_router__DOT__fifo_count_3 
        = vlSelfRef.configurable_mesh_router__DOT__fifo_count_3;
    __Vdly__configurable_mesh_router__DOT__fifo_count_4 
        = vlSelfRef.configurable_mesh_router__DOT__fifo_count_4;
    if ((1U & (~ (IData)(vlSelfRef.rst_n)))) {
        vlSelfRef.configurable_mesh_router__DOT__j = 4U;
        vlSelfRef.configurable_mesh_router__DOT__j = 4U;
        vlSelfRef.configurable_mesh_router__DOT__j = 4U;
        vlSelfRef.configurable_mesh_router__DOT__j = 4U;
        vlSelfRef.configurable_mesh_router__DOT__j = 4U;
    }
    if (vlSelfRef.rst_n) {
        if ((0U != (IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_0))) {
            __Vdly__configurable_mesh_router__DOT__arb_ptr_0 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_0)));
            if ((4U == (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_0))) {
                __Vdly__configurable_mesh_router__DOT__arb_ptr_0 = 0U;
            }
        }
        if ((0U != (IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_1))) {
            __Vdly__configurable_mesh_router__DOT__arb_ptr_1 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_1)));
            if ((4U == (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_1))) {
                __Vdly__configurable_mesh_router__DOT__arb_ptr_1 = 0U;
            }
        }
        if ((0U != (IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_2))) {
            __Vdly__configurable_mesh_router__DOT__arb_ptr_2 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_2)));
            if ((4U == (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_2))) {
                __Vdly__configurable_mesh_router__DOT__arb_ptr_2 = 0U;
            }
        }
        if ((0U != (IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_3))) {
            __Vdly__configurable_mesh_router__DOT__arb_ptr_3 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_3)));
            if ((4U == (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_3))) {
                __Vdly__configurable_mesh_router__DOT__arb_ptr_3 = 0U;
            }
        }
        if ((0U != (IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_4))) {
            __Vdly__configurable_mesh_router__DOT__arb_ptr_4 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_4)));
            if ((4U == (IData)(vlSelfRef.configurable_mesh_router__DOT__arb_ptr_4))) {
                __Vdly__configurable_mesh_router__DOT__arb_ptr_4 = 0U;
            }
        }
        if (((IData)(vlSelfRef.north_valid_i) & (~ (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_full)))) {
            __VdlyVal__configurable_mesh_router__DOT__input_fifo_0__v0 
                = vlSelfRef.configurable_mesh_router__DOT__packet_i
                [0U];
            __VdlyDim0__configurable_mesh_router__DOT__input_fifo_0__v0 
                = vlSelfRef.configurable_mesh_router__DOT__write_ptr_0;
            __VdlySet__configurable_mesh_router__DOT__input_fifo_0__v0 = 1U;
            vlSelfRef.configurable_mesh_router__DOT__write_ptr_0 
                = ((3U == (IData)(vlSelfRef.configurable_mesh_router__DOT__write_ptr_0))
                    ? 0U : (3U & ((IData)(1U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__write_ptr_0))));
            __Vdly__configurable_mesh_router__DOT__fifo_count_0 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_count_0)));
        }
        if (((IData)(vlSelfRef.east_valid_i) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_full) 
                                                   >> 1U)))) {
            __VdlyVal__configurable_mesh_router__DOT__input_fifo_1__v0 
                = vlSelfRef.configurable_mesh_router__DOT__packet_i
                [1U];
            __VdlyDim0__configurable_mesh_router__DOT__input_fifo_1__v0 
                = vlSelfRef.configurable_mesh_router__DOT__write_ptr_1;
            __VdlySet__configurable_mesh_router__DOT__input_fifo_1__v0 = 1U;
            vlSelfRef.configurable_mesh_router__DOT__write_ptr_1 
                = ((3U == (IData)(vlSelfRef.configurable_mesh_router__DOT__write_ptr_1))
                    ? 0U : (3U & ((IData)(1U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__write_ptr_1))));
            __Vdly__configurable_mesh_router__DOT__fifo_count_1 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_count_1)));
        }
        if (((IData)(vlSelfRef.south_valid_i) & (~ 
                                                 ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_full) 
                                                  >> 2U)))) {
            __VdlyVal__configurable_mesh_router__DOT__input_fifo_2__v0 
                = vlSelfRef.configurable_mesh_router__DOT__packet_i
                [2U];
            __VdlyDim0__configurable_mesh_router__DOT__input_fifo_2__v0 
                = vlSelfRef.configurable_mesh_router__DOT__write_ptr_2;
            __VdlySet__configurable_mesh_router__DOT__input_fifo_2__v0 = 1U;
            vlSelfRef.configurable_mesh_router__DOT__write_ptr_2 
                = ((3U == (IData)(vlSelfRef.configurable_mesh_router__DOT__write_ptr_2))
                    ? 0U : (3U & ((IData)(1U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__write_ptr_2))));
            __Vdly__configurable_mesh_router__DOT__fifo_count_2 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_count_2)));
        }
        if (((IData)(vlSelfRef.west_valid_i) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_full) 
                                                   >> 3U)))) {
            __VdlyVal__configurable_mesh_router__DOT__input_fifo_3__v0 
                = vlSelfRef.configurable_mesh_router__DOT__packet_i
                [3U];
            __VdlyDim0__configurable_mesh_router__DOT__input_fifo_3__v0 
                = vlSelfRef.configurable_mesh_router__DOT__write_ptr_3;
            __VdlySet__configurable_mesh_router__DOT__input_fifo_3__v0 = 1U;
            vlSelfRef.configurable_mesh_router__DOT__write_ptr_3 
                = ((3U == (IData)(vlSelfRef.configurable_mesh_router__DOT__write_ptr_3))
                    ? 0U : (3U & ((IData)(1U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__write_ptr_3))));
            __Vdly__configurable_mesh_router__DOT__fifo_count_3 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_count_3)));
        }
        if (((IData)(vlSelfRef.local_valid_i) & (~ 
                                                 ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_full) 
                                                  >> 4U)))) {
            __VdlyVal__configurable_mesh_router__DOT__input_fifo_4__v0 
                = vlSelfRef.configurable_mesh_router__DOT__packet_i
                [4U];
            __VdlyDim0__configurable_mesh_router__DOT__input_fifo_4__v0 
                = vlSelfRef.configurable_mesh_router__DOT__write_ptr_4;
            __VdlySet__configurable_mesh_router__DOT__input_fifo_4__v0 = 1U;
            vlSelfRef.configurable_mesh_router__DOT__write_ptr_4 
                = ((3U == (IData)(vlSelfRef.configurable_mesh_router__DOT__write_ptr_4))
                    ? 0U : (3U & ((IData)(1U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__write_ptr_4))));
            __Vdly__configurable_mesh_router__DOT__fifo_count_4 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_count_4)));
        }
        if (((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_0) 
               | ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_1) 
                  | ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_2) 
                     | ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_3) 
                        | (IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_4))))) 
              & (~ (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty))) 
             & ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__route_port_0)) 
                && (1U & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                          >> (IData)(vlSelfRef.configurable_mesh_router__DOT__route_port_0)))))) {
            __Vdly__configurable_mesh_router__DOT__fifo_count_0 
                = (0xfU & ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_count_0) 
                           - (IData)(1U)));
            vlSelfRef.configurable_mesh_router__DOT__read_ptr_0 
                = ((3U == (IData)(vlSelfRef.configurable_mesh_router__DOT__read_ptr_0))
                    ? 0U : (3U & ((IData)(1U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__read_ptr_0))));
        }
        if ((((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_0) 
                | ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_1) 
                   | ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_2) 
                      | ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_3) 
                         | (IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_4))))) 
               >> 1U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                            >> 1U))) & ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__route_port_1)) 
                                        && (1U & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                                  >> (IData)(vlSelfRef.configurable_mesh_router__DOT__route_port_1)))))) {
            __Vdly__configurable_mesh_router__DOT__fifo_count_1 
                = (0xfU & ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_count_1) 
                           - (IData)(1U)));
            vlSelfRef.configurable_mesh_router__DOT__read_ptr_1 
                = ((3U == (IData)(vlSelfRef.configurable_mesh_router__DOT__read_ptr_1))
                    ? 0U : (3U & ((IData)(1U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__read_ptr_1))));
        }
        if ((((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_0) 
                | ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_1) 
                   | ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_2) 
                      | ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_3) 
                         | (IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_4))))) 
               >> 2U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                            >> 2U))) & ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__route_port_2)) 
                                        && (1U & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                                  >> (IData)(vlSelfRef.configurable_mesh_router__DOT__route_port_2)))))) {
            __Vdly__configurable_mesh_router__DOT__fifo_count_2 
                = (0xfU & ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_count_2) 
                           - (IData)(1U)));
            vlSelfRef.configurable_mesh_router__DOT__read_ptr_2 
                = ((3U == (IData)(vlSelfRef.configurable_mesh_router__DOT__read_ptr_2))
                    ? 0U : (3U & ((IData)(1U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__read_ptr_2))));
        }
        if ((((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_0) 
                | ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_1) 
                   | ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_2) 
                      | ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_3) 
                         | (IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_4))))) 
               >> 3U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                            >> 3U))) & ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__route_port_3)) 
                                        && (1U & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                                  >> (IData)(vlSelfRef.configurable_mesh_router__DOT__route_port_3)))))) {
            __Vdly__configurable_mesh_router__DOT__fifo_count_3 
                = (0xfU & ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_count_3) 
                           - (IData)(1U)));
            vlSelfRef.configurable_mesh_router__DOT__read_ptr_3 
                = ((3U == (IData)(vlSelfRef.configurable_mesh_router__DOT__read_ptr_3))
                    ? 0U : (3U & ((IData)(1U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__read_ptr_3))));
        }
        if ((((((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_0) 
                | ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_1) 
                   | ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_2) 
                      | ((IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_3) 
                         | (IData)(vlSelfRef.configurable_mesh_router__DOT__output_grant_4))))) 
               >> 4U) & (~ ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_empty) 
                            >> 4U))) & ((4U >= (IData)(vlSelfRef.configurable_mesh_router__DOT__route_port_4)) 
                                        && (1U & ((IData)(vlSelfRef.configurable_mesh_router__DOT__ready_i) 
                                                  >> (IData)(vlSelfRef.configurable_mesh_router__DOT__route_port_4)))))) {
            __Vdly__configurable_mesh_router__DOT__fifo_count_4 
                = (0xfU & ((IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_count_4) 
                           - (IData)(1U)));
            vlSelfRef.configurable_mesh_router__DOT__read_ptr_4 
                = ((3U == (IData)(vlSelfRef.configurable_mesh_router__DOT__read_ptr_4))
                    ? 0U : (3U & ((IData)(1U) + (IData)(vlSelfRef.configurable_mesh_router__DOT__read_ptr_4))));
        }
    } else {
        __Vdly__configurable_mesh_router__DOT__arb_ptr_0 = 0U;
        __Vdly__configurable_mesh_router__DOT__arb_ptr_1 = 0U;
        __Vdly__configurable_mesh_router__DOT__arb_ptr_2 = 0U;
        __Vdly__configurable_mesh_router__DOT__arb_ptr_3 = 0U;
        __Vdly__configurable_mesh_router__DOT__arb_ptr_4 = 0U;
        vlSelfRef.configurable_mesh_router__DOT__write_ptr_0 = 0U;
        __VdlySet__configurable_mesh_router__DOT__input_fifo_0__v1 = 1U;
        vlSelfRef.configurable_mesh_router__DOT__write_ptr_1 = 0U;
        __VdlySet__configurable_mesh_router__DOT__input_fifo_1__v1 = 1U;
        vlSelfRef.configurable_mesh_router__DOT__write_ptr_2 = 0U;
        __VdlySet__configurable_mesh_router__DOT__input_fifo_2__v1 = 1U;
        vlSelfRef.configurable_mesh_router__DOT__write_ptr_3 = 0U;
        __VdlySet__configurable_mesh_router__DOT__input_fifo_3__v1 = 1U;
        vlSelfRef.configurable_mesh_router__DOT__write_ptr_4 = 0U;
        __VdlySet__configurable_mesh_router__DOT__input_fifo_4__v1 = 1U;
        __Vdly__configurable_mesh_router__DOT__fifo_count_0 = 0U;
        __Vdly__configurable_mesh_router__DOT__fifo_count_1 = 0U;
        __Vdly__configurable_mesh_router__DOT__fifo_count_2 = 0U;
        __Vdly__configurable_mesh_router__DOT__fifo_count_3 = 0U;
        __Vdly__configurable_mesh_router__DOT__fifo_count_4 = 0U;
        vlSelfRef.configurable_mesh_router__DOT__read_ptr_0 = 0U;
        vlSelfRef.configurable_mesh_router__DOT__read_ptr_1 = 0U;
        vlSelfRef.configurable_mesh_router__DOT__read_ptr_2 = 0U;
        vlSelfRef.configurable_mesh_router__DOT__read_ptr_3 = 0U;
        vlSelfRef.configurable_mesh_router__DOT__read_ptr_4 = 0U;
    }
    vlSelfRef.configurable_mesh_router__DOT__arb_ptr_0 
        = __Vdly__configurable_mesh_router__DOT__arb_ptr_0;
    vlSelfRef.configurable_mesh_router__DOT__arb_ptr_1 
        = __Vdly__configurable_mesh_router__DOT__arb_ptr_1;
    vlSelfRef.configurable_mesh_router__DOT__arb_ptr_2 
        = __Vdly__configurable_mesh_router__DOT__arb_ptr_2;
    vlSelfRef.configurable_mesh_router__DOT__arb_ptr_3 
        = __Vdly__configurable_mesh_router__DOT__arb_ptr_3;
    vlSelfRef.configurable_mesh_router__DOT__arb_ptr_4 
        = __Vdly__configurable_mesh_router__DOT__arb_ptr_4;
    if (__VdlySet__configurable_mesh_router__DOT__input_fifo_0__v0) {
        vlSelfRef.configurable_mesh_router__DOT__input_fifo_0[__VdlyDim0__configurable_mesh_router__DOT__input_fifo_0__v0] 
            = __VdlyVal__configurable_mesh_router__DOT__input_fifo_0__v0;
    }
    if (__VdlySet__configurable_mesh_router__DOT__input_fifo_0__v1) {
        vlSelfRef.configurable_mesh_router__DOT__input_fifo_0[0U] = 0ULL;
        vlSelfRef.configurable_mesh_router__DOT__input_fifo_0[1U] = 0ULL;
        vlSelfRef.configurable_mesh_router__DOT__input_fifo_0[2U] = 0ULL;
        vlSelfRef.configurable_mesh_router__DOT__input_fifo_0[3U] = 0ULL;
    }
    if (__VdlySet__configurable_mesh_router__DOT__input_fifo_1__v0) {
        vlSelfRef.configurable_mesh_router__DOT__input_fifo_1[__VdlyDim0__configurable_mesh_router__DOT__input_fifo_1__v0] 
            = __VdlyVal__configurable_mesh_router__DOT__input_fifo_1__v0;
    }
    if (__VdlySet__configurable_mesh_router__DOT__input_fifo_1__v1) {
        vlSelfRef.configurable_mesh_router__DOT__input_fifo_1[0U] = 0ULL;
        vlSelfRef.configurable_mesh_router__DOT__input_fifo_1[1U] = 0ULL;
        vlSelfRef.configurable_mesh_router__DOT__input_fifo_1[2U] = 0ULL;
        vlSelfRef.configurable_mesh_router__DOT__input_fifo_1[3U] = 0ULL;
    }
    if (__VdlySet__configurable_mesh_router__DOT__input_fifo_2__v0) {
        vlSelfRef.configurable_mesh_router__DOT__input_fifo_2[__VdlyDim0__configurable_mesh_router__DOT__input_fifo_2__v0] 
            = __VdlyVal__configurable_mesh_router__DOT__input_fifo_2__v0;
    }
    if (__VdlySet__configurable_mesh_router__DOT__input_fifo_2__v1) {
        vlSelfRef.configurable_mesh_router__DOT__input_fifo_2[0U] = 0ULL;
        vlSelfRef.configurable_mesh_router__DOT__input_fifo_2[1U] = 0ULL;
        vlSelfRef.configurable_mesh_router__DOT__input_fifo_2[2U] = 0ULL;
        vlSelfRef.configurable_mesh_router__DOT__input_fifo_2[3U] = 0ULL;
    }
    if (__VdlySet__configurable_mesh_router__DOT__input_fifo_3__v0) {
        vlSelfRef.configurable_mesh_router__DOT__input_fifo_3[__VdlyDim0__configurable_mesh_router__DOT__input_fifo_3__v0] 
            = __VdlyVal__configurable_mesh_router__DOT__input_fifo_3__v0;
    }
    if (__VdlySet__configurable_mesh_router__DOT__input_fifo_3__v1) {
        vlSelfRef.configurable_mesh_router__DOT__input_fifo_3[0U] = 0ULL;
        vlSelfRef.configurable_mesh_router__DOT__input_fifo_3[1U] = 0ULL;
        vlSelfRef.configurable_mesh_router__DOT__input_fifo_3[2U] = 0ULL;
        vlSelfRef.configurable_mesh_router__DOT__input_fifo_3[3U] = 0ULL;
    }
    if (__VdlySet__configurable_mesh_router__DOT__input_fifo_4__v0) {
        vlSelfRef.configurable_mesh_router__DOT__input_fifo_4[__VdlyDim0__configurable_mesh_router__DOT__input_fifo_4__v0] 
            = __VdlyVal__configurable_mesh_router__DOT__input_fifo_4__v0;
    }
    if (__VdlySet__configurable_mesh_router__DOT__input_fifo_4__v1) {
        vlSelfRef.configurable_mesh_router__DOT__input_fifo_4[0U] = 0ULL;
        vlSelfRef.configurable_mesh_router__DOT__input_fifo_4[1U] = 0ULL;
        vlSelfRef.configurable_mesh_router__DOT__input_fifo_4[2U] = 0ULL;
        vlSelfRef.configurable_mesh_router__DOT__input_fifo_4[3U] = 0ULL;
    }
    vlSelfRef.configurable_mesh_router__DOT__fifo_count_0 
        = __Vdly__configurable_mesh_router__DOT__fifo_count_0;
    vlSelfRef.configurable_mesh_router__DOT__fifo_count_1 
        = __Vdly__configurable_mesh_router__DOT__fifo_count_1;
    vlSelfRef.configurable_mesh_router__DOT__fifo_count_2 
        = __Vdly__configurable_mesh_router__DOT__fifo_count_2;
    vlSelfRef.configurable_mesh_router__DOT__fifo_count_3 
        = __Vdly__configurable_mesh_router__DOT__fifo_count_3;
    vlSelfRef.configurable_mesh_router__DOT__fifo_count_4 
        = __Vdly__configurable_mesh_router__DOT__fifo_count_4;
    vlSelfRef.configurable_mesh_router__DOT__fifo_full 
        = ((((4U == (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_count_4)) 
             << 4U) | (((4U == (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_count_3)) 
                        << 3U) | ((4U == (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_count_2)) 
                                  << 2U))) | (((4U 
                                                == (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_count_1)) 
                                               << 1U) 
                                              | (4U 
                                                 == (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_count_0))));
    vlSelfRef.configurable_mesh_router__DOT__fifo_empty 
        = ((((0U == (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_count_4)) 
             << 4U) | (((0U == (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_count_3)) 
                        << 3U) | ((0U == (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_count_2)) 
                                  << 2U))) | (((0U 
                                                == (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_count_1)) 
                                               << 1U) 
                                              | (0U 
                                                 == (IData)(vlSelfRef.configurable_mesh_router__DOT__fifo_count_0))));
    vlSelfRef.configurable_mesh_router__DOT__payload_0 
        = (IData)(vlSelfRef.configurable_mesh_router__DOT__input_fifo_0
                  [vlSelfRef.configurable_mesh_router__DOT__read_ptr_0]);
    vlSelfRef.configurable_mesh_router__DOT__dest_addr_0 
        = (0xffU & (IData)((vlSelfRef.configurable_mesh_router__DOT__input_fifo_0
                            [vlSelfRef.configurable_mesh_router__DOT__read_ptr_0] 
                            >> 0x20U)));
    vlSelfRef.configurable_mesh_router__DOT__dest_x_0 
        = (0xfU & (IData)((vlSelfRef.configurable_mesh_router__DOT__input_fifo_0
                           [vlSelfRef.configurable_mesh_router__DOT__read_ptr_0] 
                           >> 0x24U)));
    vlSelfRef.configurable_mesh_router__DOT__dest_y_0 
        = (0xfU & (IData)((vlSelfRef.configurable_mesh_router__DOT__input_fifo_0
                           [vlSelfRef.configurable_mesh_router__DOT__read_ptr_0] 
                           >> 0x20U)));
    vlSelfRef.configurable_mesh_router__DOT__payload_1 
        = (IData)(vlSelfRef.configurable_mesh_router__DOT__input_fifo_1
                  [vlSelfRef.configurable_mesh_router__DOT__read_ptr_1]);
    vlSelfRef.configurable_mesh_router__DOT__dest_addr_1 
        = (0xffU & (IData)((vlSelfRef.configurable_mesh_router__DOT__input_fifo_1
                            [vlSelfRef.configurable_mesh_router__DOT__read_ptr_1] 
                            >> 0x20U)));
    vlSelfRef.configurable_mesh_router__DOT__dest_x_1 
        = (0xfU & (IData)((vlSelfRef.configurable_mesh_router__DOT__input_fifo_1
                           [vlSelfRef.configurable_mesh_router__DOT__read_ptr_1] 
                           >> 0x24U)));
    vlSelfRef.configurable_mesh_router__DOT__dest_y_1 
        = (0xfU & (IData)((vlSelfRef.configurable_mesh_router__DOT__input_fifo_1
                           [vlSelfRef.configurable_mesh_router__DOT__read_ptr_1] 
                           >> 0x20U)));
    vlSelfRef.configurable_mesh_router__DOT__payload_2 
        = (IData)(vlSelfRef.configurable_mesh_router__DOT__input_fifo_2
                  [vlSelfRef.configurable_mesh_router__DOT__read_ptr_2]);
    vlSelfRef.configurable_mesh_router__DOT__dest_addr_2 
        = (0xffU & (IData)((vlSelfRef.configurable_mesh_router__DOT__input_fifo_2
                            [vlSelfRef.configurable_mesh_router__DOT__read_ptr_2] 
                            >> 0x20U)));
    vlSelfRef.configurable_mesh_router__DOT__dest_x_2 
        = (0xfU & (IData)((vlSelfRef.configurable_mesh_router__DOT__input_fifo_2
                           [vlSelfRef.configurable_mesh_router__DOT__read_ptr_2] 
                           >> 0x24U)));
    vlSelfRef.configurable_mesh_router__DOT__dest_y_2 
        = (0xfU & (IData)((vlSelfRef.configurable_mesh_router__DOT__input_fifo_2
                           [vlSelfRef.configurable_mesh_router__DOT__read_ptr_2] 
                           >> 0x20U)));
    vlSelfRef.configurable_mesh_router__DOT__payload_3 
        = (IData)(vlSelfRef.configurable_mesh_router__DOT__input_fifo_3
                  [vlSelfRef.configurable_mesh_router__DOT__read_ptr_3]);
    vlSelfRef.configurable_mesh_router__DOT__dest_addr_3 
        = (0xffU & (IData)((vlSelfRef.configurable_mesh_router__DOT__input_fifo_3
                            [vlSelfRef.configurable_mesh_router__DOT__read_ptr_3] 
                            >> 0x20U)));
    vlSelfRef.configurable_mesh_router__DOT__dest_x_3 
        = (0xfU & (IData)((vlSelfRef.configurable_mesh_router__DOT__input_fifo_3
                           [vlSelfRef.configurable_mesh_router__DOT__read_ptr_3] 
                           >> 0x24U)));
    vlSelfRef.configurable_mesh_router__DOT__dest_y_3 
        = (0xfU & (IData)((vlSelfRef.configurable_mesh_router__DOT__input_fifo_3
                           [vlSelfRef.configurable_mesh_router__DOT__read_ptr_3] 
                           >> 0x20U)));
    vlSelfRef.configurable_mesh_router__DOT__payload_4 
        = (IData)(vlSelfRef.configurable_mesh_router__DOT__input_fifo_4
                  [vlSelfRef.configurable_mesh_router__DOT__read_ptr_4]);
    vlSelfRef.configurable_mesh_router__DOT__dest_addr_4 
        = (0xffU & (IData)((vlSelfRef.configurable_mesh_router__DOT__input_fifo_4
                            [vlSelfRef.configurable_mesh_router__DOT__read_ptr_4] 
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

void Vconfigurable_mesh_router___024root___eval_triggers__act(Vconfigurable_mesh_router___024root* vlSelf);

bool Vconfigurable_mesh_router___024root___eval_phase__act(Vconfigurable_mesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_mesh_router___024root___eval_phase__act\n"); );
    Vconfigurable_mesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vconfigurable_mesh_router___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vconfigurable_mesh_router___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vconfigurable_mesh_router___024root___eval_phase__nba(Vconfigurable_mesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_mesh_router___024root___eval_phase__nba\n"); );
    Vconfigurable_mesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vconfigurable_mesh_router___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_mesh_router___024root___dump_triggers__ico(Vconfigurable_mesh_router___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_mesh_router___024root___dump_triggers__nba(Vconfigurable_mesh_router___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vconfigurable_mesh_router___024root___dump_triggers__act(Vconfigurable_mesh_router___024root* vlSelf);
#endif  // VL_DEBUG

void Vconfigurable_mesh_router___024root___eval(Vconfigurable_mesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_mesh_router___024root___eval\n"); );
    Vconfigurable_mesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vconfigurable_mesh_router___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("libraries/noc/configurable_mesh_router.v", 6, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vconfigurable_mesh_router___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vconfigurable_mesh_router___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("libraries/noc/configurable_mesh_router.v", 6, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vconfigurable_mesh_router___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("libraries/noc/configurable_mesh_router.v", 6, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vconfigurable_mesh_router___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vconfigurable_mesh_router___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vconfigurable_mesh_router___024root___eval_debug_assertions(Vconfigurable_mesh_router___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfigurable_mesh_router___024root___eval_debug_assertions\n"); );
    Vconfigurable_mesh_router__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY(((vlSelfRef.local_x_addr & 0xf0U)))) {
        Verilated::overWidthError("local_x_addr");}
    if (VL_UNLIKELY(((vlSelfRef.local_y_addr & 0xf0U)))) {
        Verilated::overWidthError("local_y_addr");}
    if (VL_UNLIKELY(((vlSelfRef.north_valid_i & 0xfeU)))) {
        Verilated::overWidthError("north_valid_i");}
    if (VL_UNLIKELY(((vlSelfRef.north_ready_i & 0xfeU)))) {
        Verilated::overWidthError("north_ready_i");}
    if (VL_UNLIKELY(((vlSelfRef.east_valid_i & 0xfeU)))) {
        Verilated::overWidthError("east_valid_i");}
    if (VL_UNLIKELY(((vlSelfRef.east_ready_i & 0xfeU)))) {
        Verilated::overWidthError("east_ready_i");}
    if (VL_UNLIKELY(((vlSelfRef.south_valid_i & 0xfeU)))) {
        Verilated::overWidthError("south_valid_i");}
    if (VL_UNLIKELY(((vlSelfRef.south_ready_i & 0xfeU)))) {
        Verilated::overWidthError("south_ready_i");}
    if (VL_UNLIKELY(((vlSelfRef.west_valid_i & 0xfeU)))) {
        Verilated::overWidthError("west_valid_i");}
    if (VL_UNLIKELY(((vlSelfRef.west_ready_i & 0xfeU)))) {
        Verilated::overWidthError("west_ready_i");}
    if (VL_UNLIKELY(((vlSelfRef.local_valid_i & 0xfeU)))) {
        Verilated::overWidthError("local_valid_i");}
    if (VL_UNLIKELY(((vlSelfRef.local_ready_i & 0xfeU)))) {
        Verilated::overWidthError("local_ready_i");}
}
#endif  // VL_DEBUG
