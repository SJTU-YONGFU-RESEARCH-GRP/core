// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPARAMETERIZED_UART_TX__SYMS_H_
#define VERILATED_VPARAMETERIZED_UART_TX__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vparameterized_uart_tx.h"

// INCLUDE MODULE CLASSES
#include "Vparameterized_uart_tx___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vparameterized_uart_tx__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vparameterized_uart_tx* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vparameterized_uart_tx___024root TOP;

    // CONSTRUCTORS
    Vparameterized_uart_tx__Syms(VerilatedContext* contextp, const char* namep, Vparameterized_uart_tx* modelp);
    ~Vparameterized_uart_tx__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
