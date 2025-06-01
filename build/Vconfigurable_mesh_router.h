// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VCONFIGURABLE_MESH_ROUTER_H_
#define VERILATED_VCONFIGURABLE_MESH_ROUTER_H_  // guard

#include "verilated.h"

class Vconfigurable_mesh_router__Syms;
class Vconfigurable_mesh_router___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vconfigurable_mesh_router VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vconfigurable_mesh_router__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst_n,0,0);
    VL_IN8(&local_x_addr,3,0);
    VL_IN8(&local_y_addr,3,0);
    VL_IN8(&north_valid_i,0,0);
    VL_IN8(&north_addr_i,7,0);
    VL_OUT8(&north_ready_o,0,0);
    VL_OUT8(&north_valid_o,0,0);
    VL_OUT8(&north_addr_o,7,0);
    VL_IN8(&north_ready_i,0,0);
    VL_IN8(&east_valid_i,0,0);
    VL_IN8(&east_addr_i,7,0);
    VL_OUT8(&east_ready_o,0,0);
    VL_OUT8(&east_valid_o,0,0);
    VL_OUT8(&east_addr_o,7,0);
    VL_IN8(&east_ready_i,0,0);
    VL_IN8(&south_valid_i,0,0);
    VL_IN8(&south_addr_i,7,0);
    VL_OUT8(&south_ready_o,0,0);
    VL_OUT8(&south_valid_o,0,0);
    VL_OUT8(&south_addr_o,7,0);
    VL_IN8(&south_ready_i,0,0);
    VL_IN8(&west_valid_i,0,0);
    VL_IN8(&west_addr_i,7,0);
    VL_OUT8(&west_ready_o,0,0);
    VL_OUT8(&west_valid_o,0,0);
    VL_OUT8(&west_addr_o,7,0);
    VL_IN8(&west_ready_i,0,0);
    VL_IN8(&local_valid_i,0,0);
    VL_IN8(&local_addr_i,7,0);
    VL_OUT8(&local_ready_o,0,0);
    VL_OUT8(&local_valid_o,0,0);
    VL_OUT8(&local_addr_o,7,0);
    VL_IN8(&local_ready_i,0,0);
    VL_IN(&north_data_i,31,0);
    VL_OUT(&north_data_o,31,0);
    VL_IN(&east_data_i,31,0);
    VL_OUT(&east_data_o,31,0);
    VL_IN(&south_data_i,31,0);
    VL_OUT(&south_data_o,31,0);
    VL_IN(&west_data_i,31,0);
    VL_OUT(&west_data_o,31,0);
    VL_IN(&local_data_i,31,0);
    VL_OUT(&local_data_o,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vconfigurable_mesh_router___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vconfigurable_mesh_router(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vconfigurable_mesh_router(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vconfigurable_mesh_router();
  private:
    VL_UNCOPYABLE(Vconfigurable_mesh_router);  ///< Copying not allowed

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
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
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
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
