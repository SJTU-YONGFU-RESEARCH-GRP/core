// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Precompiled header
//
// Internal details; most user sources do not need this header,
// unless using verilator public meta comments.
// Suggest use Vconfigurable_sync_fifo.h instead.


#ifndef VERILATED_VCONFIGURABLE_SYNC_FIFO__PCH_H_
#define VERILATED_VCONFIGURABLE_SYNC_FIFO__PCH_H_  // guard

// GCC and Clang only will precompile headers (PCH) for the first header.
// So, make sure this is the one and only PCH.
// If multiple module's includes are needed, use individual includes.
#ifdef VL_PCH_INCLUDED
# error "Including multiple precompiled header files"
#endif
#define VL_PCH_INCLUDED


#include "verilated.h"

#include "Vconfigurable_sync_fifo__Syms.h"
#include "Vconfigurable_sync_fifo.h"

#endif  // guard
