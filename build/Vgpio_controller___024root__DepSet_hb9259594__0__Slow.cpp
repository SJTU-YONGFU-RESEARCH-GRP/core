// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgpio_controller.h for the primary calling header

#include "Vgpio_controller__pch.h"
#include "Vgpio_controller__Syms.h"
#include "Vgpio_controller___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgpio_controller___024root___dump_triggers__stl(Vgpio_controller___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vgpio_controller___024root___eval_triggers__stl(Vgpio_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpio_controller___024root___eval_triggers__stl\n"); );
    Vgpio_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vgpio_controller___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
