#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vparameterized_gray_counter.h"

#define MAX_SIM_TIME 100
#define VERIF_START_TIME 5
vluint64_t sim_time = 0;
vluint64_t posedge_cnt = 0;

// Function to convert binary to gray code for verification
int binary_to_gray(int binary, int width) {
    return binary ^ (binary >> 1);
}

void dut_test(Vparameterized_gray_counter *dut, VerilatedVcdC *m_trace, 
              int test_width, int test_mode, int test_initial, int &passed_tests) {
    
    // Initialize signals
    dut->rst_n = 0;
    dut->enable = 0;
    dut->clk = 0;
    
    // Reset sequence
    for (int i = 0; i < 5; i++) {
        dut->clk = !dut->clk;
        dut->eval();
        m_trace->dump(sim_time++);
        dut->clk = !dut->clk;
        dut->eval();
        m_trace->dump(sim_time++);
    }
    
    // Release reset and enable counter
    dut->rst_n = 1;
    dut->enable = 1;
    
    // Expected binary and gray values
    int expected_binary = test_initial;
    int expected_gray = binary_to_gray(expected_binary, test_width);
    
    // Create a mask for the width of our counter
    int mask = (1 << test_width) - 1;
    bool test_passed = true;
    
    // Main test loop
    for (int i = 0; i < (1 << test_width) * 2; i++) {
        dut->clk = !dut->clk;
        dut->eval();
        m_trace->dump(sim_time++);
        
        dut->clk = !dut->clk;
        dut->eval();
        m_trace->dump(sim_time++);
        
        if (dut->clk) {
            // Verify outputs on posedge
            if (sim_time > VERIF_START_TIME) {
                if ((dut->gray_out & mask) != (expected_gray & mask)) {
                    std::cout << "ERROR at time " << sim_time << ": Gray output mismatch.\n";
                    std::cout << "Expected: " << (expected_gray & mask) << ", Got: " << (dut->gray_out & mask) << std::endl;
                    test_passed = false;
                }
                
                if ((dut->binary_out & mask) != (expected_binary & mask)) {
                    std::cout << "ERROR at time " << sim_time << ": Binary output mismatch.\n";
                    std::cout << "Expected: " << (expected_binary & mask) << ", Got: " << (dut->binary_out & mask) << std::endl;
                    test_passed = false;
                }
            }
            
            // Update expected values based on count mode
            if (test_mode == 0) {
                // Up counting
                expected_binary = (expected_binary + 1) & mask;
            } else {
                // Down counting
                expected_binary = (expected_binary - 1) & mask;
            }
            expected_gray = binary_to_gray(expected_binary, test_width);
        }
    }
    
    if (test_passed) {
        passed_tests++;
    }
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize Verilated modules
    Vparameterized_gray_counter *dut = new Vparameterized_gray_counter;
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    
    std::cout << "Testing parameterized_gray_counter..." << std::endl;
    
    // Track test results
    int total_tests = 3;  // We have 3 test cases
    int passed_tests = 0;
    
    // Test case 1: 4-bit up counter starting from 0
    std::cout << "Test case 1: 4-bit up counter" << std::endl;
    dut_test(dut, m_trace, 4, 0, 0, passed_tests);
    
    // Test case 2: 3-bit down counter starting from 7
    std::cout << "Test case 2: 3-bit down counter" << std::endl;
    dut_test(dut, m_trace, 3, 1, 7, passed_tests);
    
    // Test case 3: 5-bit up counter starting from 10
    std::cout << "Test case 3: 5-bit up counter with non-zero start" << std::endl;
    dut_test(dut, m_trace, 5, 0, 10, passed_tests);
    
    // Print standardized test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (passed_tests == total_tests ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << passed_tests << " of " << total_tests << std::endl;
    
    m_trace->close();
    delete dut;
    delete m_trace;
    
    return (passed_tests == total_tests) ? 0 : 1;
} 