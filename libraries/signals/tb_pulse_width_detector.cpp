#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vpulse_width_detector.h"

#define MAX_SIM_TIME 1000
vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of our module under test
    Vpulse_width_detector *tb = new Vpulse_width_detector;
    
    // Initialize VCD tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC* trace = new VerilatedVcdC;
    tb->trace(trace, 5);
    trace->open("waveform.vcd");
    
    // Test tracking variables
    bool all_tests_pass = true;
    int tests_passed = 0;
    int total_tests = 3;
    
    // Set threshold value (detect pulses wider than 10 clock cycles)
    tb->threshold = 10;
    
    // Reset sequence
    tb->clk = 0;
    tb->rst = 1;
    tb->signal_in = 0;
    
    // Toggle clock for a few cycles during reset
    for (int i = 0; i < 5; i++) {
        tb->clk = !tb->clk;
        tb->eval();
        trace->dump(sim_time++);
        
        tb->clk = !tb->clk;
        tb->eval();
        trace->dump(sim_time++);
    }
    
    // Release reset
    tb->rst = 0;
    
    // Test case 1: Pulse width less than threshold (8 cycles)
    std::cout << "Test case 1: Pulse width less than threshold (8 cycles)" << std::endl;
    bool test1_pass = true;
    bool pulse_detected_erroneously = false;
    
    for (int i = 0; i < 20; i++) {
        tb->clk = !tb->clk;
        
        // Create a pulse for 8 clock cycles
        if (i >= 2 && i < 10) {
            tb->signal_in = 1;
            // Record if pulse was erroneously detected (should not detect pulses < threshold)
            if (tb->pulse_detected) {
                pulse_detected_erroneously = true;
            }
        } else {
            tb->signal_in = 0;
        }
        
        tb->eval();
        trace->dump(sim_time++);
        
        // Print detection status on rising clock edge
        if (tb->clk) {
            std::cout << "Cycle " << (sim_time/2) << ": signal_in = " << (int)tb->signal_in 
                      << ", pulse_detected = " << (int)tb->pulse_detected << std::endl;
        }
        
        tb->clk = !tb->clk;
        tb->eval();
        trace->dump(sim_time++);
    }
    
    // Test 1 passes if no pulse was detected for the short pulse
    test1_pass = !pulse_detected_erroneously;
    if (test1_pass) {
        std::cout << "Test 1 PASSED: No pulse detected for width < threshold" << std::endl;
        tests_passed++;
    } else {
        std::cout << "Test 1 FAILED: Pulse erroneously detected for width < threshold" << std::endl;
        all_tests_pass = false;
    }
    
    // Test case 2: Pulse width greater than threshold (15 cycles)
    std::cout << "\nTest case 2: Pulse width greater than threshold (15 cycles)" << std::endl;
    bool test2_pass = false;
    bool wide_pulse_detected = false;
    
    for (int i = 0; i < 30; i++) {
        tb->clk = !tb->clk;
        
        // Create a pulse for 15 clock cycles
        if (i >= 2 && i < 17) {
            tb->signal_in = 1;
            // Record if pulse was properly detected (should detect pulses > threshold)
            if (tb->pulse_detected) {
                wide_pulse_detected = true;
            }
        } else {
            tb->signal_in = 0;
        }
        
        tb->eval();
        trace->dump(sim_time++);
        
        // Print detection status on rising clock edge
        if (tb->clk) {
            std::cout << "Cycle " << (sim_time/2) << ": signal_in = " << (int)tb->signal_in 
                      << ", pulse_detected = " << (int)tb->pulse_detected << std::endl;
        }
        
        tb->clk = !tb->clk;
        tb->eval();
        trace->dump(sim_time++);
    }
    
    // Test 2 passes if a pulse was detected for the wide pulse
    test2_pass = wide_pulse_detected;
    if (test2_pass) {
        std::cout << "Test 2 PASSED: Pulse detected for width > threshold" << std::endl;
        tests_passed++;
    } else {
        std::cout << "Test 2 FAILED: No pulse detected for width > threshold" << std::endl;
        all_tests_pass = false;
    }
    
    // Test case 3: Multiple pulses with different widths
    std::cout << "\nTest case 3: Multiple pulses with different widths" << std::endl;
    bool test3_pass = true;
    bool mid_pulse_detected = false;
    
    for (int i = 0; i < 50; i++) {
        tb->clk = !tb->clk;
        
        // Create pulses of varying widths:
        // First pulse (i=2-6): 5 cycles (should not be detected)
        // Second pulse (i=15-29): 15 cycles (should be detected)
        // Third pulse (i=35-39): 5 cycles (should not be detected)
        if ((i >= 2 && i < 7) || (i >= 15 && i < 30) || (i >= 35 && i < 40)) {
            tb->signal_in = 1;
            
            // Only the middle pulse should be detected (width > threshold)
            if (i >= 15 && i < 30 && tb->pulse_detected) {
                mid_pulse_detected = true;
            } else if ((i >= 2 && i < 7 || i >= 35 && i < 40) && tb->pulse_detected) {
                // Short pulses should not be detected
                test3_pass = false;
            }
        } else {
            tb->signal_in = 0;
        }
        
        tb->eval();
        trace->dump(sim_time++);
        
        // Print detection status on rising clock edge
        if (tb->clk) {
            std::cout << "Cycle " << (sim_time/2) << ": signal_in = " << (int)tb->signal_in 
                      << ", pulse_detected = " << (int)tb->pulse_detected << std::endl;
        }
        
        tb->clk = !tb->clk;
        tb->eval();
        trace->dump(sim_time++);
    }
    
    // Test 3 passes if only the middle pulse was detected
    test3_pass = test3_pass && mid_pulse_detected;
    if (test3_pass) {
        std::cout << "Test 3 PASSED: Only pulses > threshold were detected" << std::endl;
        tests_passed++;
    } else {
        std::cout << "Test 3 FAILED: Incorrect pulse detection behavior" << std::endl;
        all_tests_pass = false;
    }
    
    // Cleanup
    trace->close();
    delete trace;
    delete tb;
    
    // Print standardized test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (all_tests_pass ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << tests_passed << " of " << total_tests << std::endl;
    
    return 0;
} 