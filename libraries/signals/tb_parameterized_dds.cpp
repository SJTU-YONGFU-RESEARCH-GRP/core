#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <cmath>
#include <iomanip>
#include "Vparameterized_dds.h"

// Test parameters
#define PHASE_WIDTH 16
#define OUTPUT_WIDTH 12
#define LUT_ADDR_WIDTH 8
#define USE_QUARTER_SINE 1

// Test configuration
#define CLK_PERIOD 10
#define SIM_TIME 1000
#define SAMPLE_FREQ 1000000    // 1 MHz clock
#define OUTPUT_FREQ 10000      // 10 kHz output frequency
#define MAX_INIT_WAIT 5000     // Increased timeout for LUT initialization

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create DUT instance
    Vparameterized_dds* dut = new Vparameterized_dds;
    
    // Initialize VCD trace
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("parameterized_dds.vcd");
    
    // Simulation variables
    uint64_t sim_time = 0;
    bool clk = 0;
    
    // Calculate the frequency control word
    // FCW = (2^PHASE_WIDTH * OUTPUT_FREQ) / SAMPLE_FREQ
    uint32_t fcw = (uint32_t)((1ULL << PHASE_WIDTH) * OUTPUT_FREQ / SAMPLE_FREQ);
    
    // Test variables
    int passed_tests = 0;
    int total_tests = 0;
    
    // Reset the DUT
    dut->rst_n = 0;
    dut->clk = 0;
    dut->enable = 0;
    dut->fcw = 0;
    dut->phase_offset = 0;
    
    // Toggle clock a few times during reset
    for(int i = 0; i < 10; i++) {
        dut->clk = !dut->clk;
        dut->eval();
        tfp->dump(sim_time);
        sim_time += CLK_PERIOD/2;
    }
    
    // Release reset and configure DUT
    dut->rst_n = 1;
    dut->enable = 1;
    dut->fcw = fcw;
    dut->phase_offset = 0;
    
    // Wait for LUT initialization
    int init_wait_count = 0;
    std::cout << "Waiting for LUT initialization..." << std::endl;
    while (!dut->lut_initialized && init_wait_count < MAX_INIT_WAIT) {
        dut->clk = !dut->clk;
        dut->eval();
        tfp->dump(sim_time);
        sim_time += CLK_PERIOD/2;
        init_wait_count++;
        
        // Print progress every 100 cycles
        if (init_wait_count % 100 == 0) {
            std::cout << "Initialization in progress: " << init_wait_count << " cycles" << std::endl;
        }
        
        // Add a small delay between clock edges to ensure proper evaluation
        if (init_wait_count % 2 == 0) {
            dut->eval();
        }
    }
    
    if (!dut->lut_initialized) {
        std::cerr << "ERROR: LUT initialization timed out after " << init_wait_count << " cycles!" << std::endl;
        return 1;
    }
    
    std::cout << "LUT initialization completed after " << init_wait_count << " cycles" << std::endl;
    
    // Run simulation
    std::cout << "Starting DDS simulation with:" << std::endl;
    std::cout << "  Phase width: " << PHASE_WIDTH << " bits" << std::endl;
    std::cout << "  Output width: " << OUTPUT_WIDTH << " bits" << std::endl;
    std::cout << "  LUT address width: " << LUT_ADDR_WIDTH << " bits" << std::endl;
    std::cout << "  FCW: " << fcw << " (output frequency: " << OUTPUT_FREQ << " Hz)" << std::endl;
    
    // Basic test - verify sine and cosine values are within valid range and change over time
    uint32_t prev_sine = dut->sine_out;
    uint32_t prev_cosine = dut->cosine_out;
    bool sine_changed = false;
    bool cosine_changed = false;
    bool values_in_range = true;
    
    // Run for 100 cycles and verify pattern
    for (int i = 0; i < 100; i++) {
        total_tests++;
        
        // Toggle clock (10 cycles to slow down sampling)
        for (int j = 0; j < 10; j++) {
            dut->clk = !dut->clk;
            dut->eval();
            tfp->dump(sim_time);
            sim_time += CLK_PERIOD/2;
        }
        
        // Check if in valid range (0 to 2^OUTPUT_WIDTH-1)
        if (dut->sine_out >= (1 << OUTPUT_WIDTH) || dut->cosine_out >= (1 << OUTPUT_WIDTH)) {
            values_in_range = false;
            std::cerr << "Error: Values out of range at sample " << i << ":" << std::endl;
            std::cerr << "  Sine: " << dut->sine_out << ", Cosine: " << dut->cosine_out << std::endl;
        }
        
        // Check if outputs change over time
        if (dut->sine_out != prev_sine) {
            sine_changed = true;
            std::cout << "Sample " << i << ": Sine changed from " << prev_sine << " to " << dut->sine_out << std::endl;
        }
        if (dut->cosine_out != prev_cosine) {
            cosine_changed = true;
            std::cout << "Sample " << i << ": Cosine changed from " << prev_cosine << " to " << dut->cosine_out << std::endl;
        }
        
        // Record values for next iteration
        prev_sine = dut->sine_out;
        prev_cosine = dut->cosine_out;
        
        // Check if we're receiving valid values
        if (sine_changed && cosine_changed && values_in_range) {
            passed_tests++;
        }
    }
    
    // Cleanup
    tfp->close();
    delete tfp;
    delete dut;
    
    // Test criteria: check if sine and cosine both change and stay in range
    bool overall_pass = sine_changed && cosine_changed && values_in_range;
    passed_tests = overall_pass ? total_tests : 0;
    
    // Output standardized test summary
    std::cout << "==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (overall_pass ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << passed_tests << " of " << total_tests << std::endl;
    
    if (!sine_changed) std::cerr << "ERROR: Sine output did not change!" << std::endl;
    if (!cosine_changed) std::cerr << "ERROR: Cosine output did not change!" << std::endl;
    if (!values_in_range) std::cerr << "ERROR: Values exceeded valid range!" << std::endl;
    
    return overall_pass ? 0 : 1;
} 