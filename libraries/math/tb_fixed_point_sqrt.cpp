#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vfixed_point_sqrt.h"
#include <cmath>
#include <iomanip>

#define MAX_SIM_TIME 100
vluint64_t sim_time =
 0;

// Define the parameters to match the Verilog module
#define WIDTH 16
#define FRAC_BITS 8

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize Verilator
    Vfixed_point_sqrt* dut = new Vfixed_point_sqrt;
    
    // Initialize VCD trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("fixed_point_sqrt_waveform.vcd");
    
    std::cout << "Fixed Point Square Root Test" << std::endl;
    std::cout << "Width: " << WIDTH << ", Fractional Bits: " << FRAC_BITS << std::endl;
    
    // Initialize signals
    dut->clk = 0;
    dut->reset = 1;   // Start with reset active
    dut->enable = 0;  // Disabled initially
    dut->x = 0;
    
    // Fractional bits for calculation
    const int frac_bits = FRAC_BITS;
    
    // Test variables
    bool test_passed = true;
    int tests_passed = 0;
    int total_tests = 0;
    
    // Create an array of test values
    const int num_tests = 10;
    uint32_t test_values[num_tests] = {
        0x0100,  // 1.0 in fixed point (expected sqrt: 1.0)
        0x0400,  // 4.0 in fixed point (expected sqrt: 2.0)
        0x0900,  // 9.0 in fixed point (expected sqrt: 3.0)
        0x1000,  // 16.0 in fixed point (expected sqrt: 4.0)
        0x2500,  // 25.0 in fixed point (expected sqrt: 5.0)
        0x0040,  // 0.25 in fixed point (expected sqrt: 0.5)
        0x0010,  // 0.0625 in fixed point (expected sqrt: 0.25)
        0x0280,  // 2.5 in fixed point (expected sqrt: 1.581...)
        0x0001,  // Smallest possible value
        0xFFFF   // Largest possible value
    };
    
    // The corresponding expected results (shifted by FRAC_BITS)
    uint32_t expected_results[num_tests] = {
        0x0100,  // sqrt(1.0) = 1.0
        0x0200,  // sqrt(4.0) = 2.0
        0x0300,  // sqrt(9.0) = 3.0
        0x0400,  // sqrt(16.0) = 4.0
        0x0500,  // sqrt(25.0) = 5.0
        0x0080,  // sqrt(0.25) = 0.5
        0x0040,  // sqrt(0.0625) = 0.25
        0x0192,  // sqrt(2.5) ≈ 1.581...
        0x0000,  // Very small, almost zero
        0x0FFF   // sqrt of max value (approximation)
    };
    
    // Test function to convert fixed point to double
    auto fixedToDouble = [frac_bits](uint32_t val) -> double {
        return static_cast<double>(val) / (1 << frac_bits);
    };
    
    // Run simulation
    int test_idx = -1;
    int wait_cycles = 0;
    
    while (sim_time < MAX_SIM_TIME) {
        // Toggle clock
        dut->clk = !dut->clk;
        
        // On positive clock edge
        if (dut->clk) {
            // Release reset after a few clock cycles
            if (sim_time == 4) {
                dut->reset = 0;
                dut->enable = 1;
            }
            
            // Start a new test when the previous one completes
            if (test_idx < num_tests - 1 && wait_cycles == 0) {
                test_idx++;
                dut->x = test_values[test_idx];
                
                // For Test 1 (sqrt(1.0)), wait one extra cycle
                if (test_idx == 0) {
                    wait_cycles = 4; // Wait 4 clock cycles for result of Test 1
                } else {
                    wait_cycles = 3; // Wait 3 clock cycles for all other tests
                }
                
                std::cout << "\nTest " << (test_idx + 1) << ": sqrt(" 
                          << std::fixed << std::setprecision(4)
                          << fixedToDouble(test_values[test_idx]) 
                          << ") = ";
            }
            
            // Check the result after appropriate wait
            if (wait_cycles > 0) {
                wait_cycles--;
                
                if (wait_cycles == 0) {
                    total_tests++;
                    double expected = fixedToDouble(expected_results[test_idx]);
                    double actual = fixedToDouble(dut->y);
                    
                    // Special handling for test 9 to avoid division by zero
                    bool test_result = false;
                    if (expected == 0.0) {
                        // For very small values, pass if actual is also very close to zero
                        test_result = (actual < 0.01);
                    } else {
                        // Calculate the relative error - allow some tolerance due to fixed-point approximation
                        double error = std::abs(expected - actual) / expected;
                        test_result = (error < 0.05); // 5% tolerance
                    }
                    
                    // Print result and check
                    std::cout << std::fixed << std::setprecision(4) << actual;
                    std::cout << " (Expected: " << expected << ")";
                    
                    if (test_result) {
                        std::cout << " - PASS";
                        tests_passed++;
                    } else {
                        std::cout << " - FAIL";
                        test_passed = false;
                    }
                    std::cout << std::endl;
                }
            }
        }
        
        // Evaluate model
        dut->eval();
        
        // Dump wave trace
        m_trace->dump(sim_time);
        
        sim_time++;
    }
    
    // Print standardized test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (test_passed ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << tests_passed << " of " << total_tests << std::endl;
    
    // Clean up
    m_trace->close();
    delete m_trace;
    delete dut;
    
    return 0;
} 