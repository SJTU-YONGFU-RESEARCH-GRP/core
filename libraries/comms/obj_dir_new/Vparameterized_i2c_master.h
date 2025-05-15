// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VPARAMETERIZED_I2C_MASTER_H_
#define VERILATED_VPARAMETERIZED_I2C_MASTER_H_  // guard

#include "verilated.h"

class Vparameterized_i2c_master__Syms;
class Vparameterized_i2c_master___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vparameterized_i2c_master VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vparameterized_i2c_master__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst_n,0,0);
    VL_IN8(&start,0,0);
    VL_IN8(&stop,0,0);
    VL_IN8(&read,0,0);
    VL_IN8(&write,0,0);
    VL_IN8(&data_in,7,0);
    VL_IN8(&addr,6,0);
    VL_OUT8(&busy,0,0);
    VL_OUT8(&done,0,0);
    VL_OUT8(&ack_error,0,0);
    VL_OUT8(&data_out,7,0);
    VL_OUT8(&scl,0,0);
    VL_INOUT8(&sda,0,0);
    VL_OUT8(&state,3,0);
    VL_OUT8(&phase,1,0);
    VL_OUT8(&scl_internal_debug,0,0);
    VL_OUT8(&sda_internal_debug,0,0);
    VL_OUT8(&shift_reg_debug,7,0);
    VL_OUT8(&bit_counter_debug,2,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vparameterized_i2c_master___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vparameterized_i2c_master(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vparameterized_i2c_master(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vparameterized_i2c_master();
  private:
    VL_UNCOPYABLE(Vparameterized_i2c_master);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
};

#endif  // guard
