#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vuniversal_shift_register.h"

#define MAX_SIM_TIME 300
vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vuniversal_shift_register* dut = new Vuniversal_shift_register;
    
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    
    // Initialize test tracking
    int total_tests = 0;
    int passed_tests = 0;
    bool all_tests_passed = true;
    
    // Initialize inputs
    dut->clk = 0;
    dut->rst_n = 0;
    dut->enable = 0;
    dut->direction = 0;
    dut->serial_in_left = 0;
    dut->serial_in_right = 0;
    dut->parallel_in = 0;
    dut->load = 0;
    
    // Reset sequence
    for (int i = 0; i < 5; i++) {
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
    }
    dut->rst_n = 1;
    
    // Test case 1: Parallel load
    std::cout << "Test Case 1: Parallel Load" << std::endl;
    total_tests++;
    bool test1_passed = true;
    
    dut->enable = 1;
    dut->direction = 3; // 11 - Parallel load
    dut->parallel_in = 0xA5; // 10100101
    dut->load = 1;
    
    // Clock cycle for parallel load
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    
    // Check output after parallel load
    if (dut->parallel_out == 0xA5) {
        passed_tests++;
    } else {
        test1_passed = false;
        all_tests_passed = false;
    }
    std::cout << "After parallel load, output = 0x" << std::hex << (int)dut->parallel_out << std::dec;
    std::cout << (test1_passed ? " (PASS)" : " (FAIL)") << std::endl;
    
    // Test case 2: Shift right
    std::cout << "Test Case 2: Shift Right" << std::endl;
    total_tests++;
    bool test2_passed = true;
    
    dut->direction = 1; // 01 - Shift right
    dut->serial_in_left = 1;
    dut->load = 0;
    
    // Expected values after each shift right
    uint8_t expected_right[8] = {0x52, 0x29, 0x94, 0xCA, 0xE5, 0xF2, 0xF9, 0xFC};
    
    // Clock cycles for shift right operations
    for (int i = 0; i < 8; i++) {
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        
        std::cout << "After shift right " << i+1 << ", output = 0x" << std::hex << (int)dut->parallel_out << std::dec;
        
        // Check if the output matches expected value
        if (i < 8 && dut->parallel_out != expected_right[i]) {
            test2_passed = false;
        }
        std::cout << std::endl;
    }
    
    if (test2_passed) {
        passed_tests++;
    } else {
        all_tests_passed = false;
    }
    
    // Test case 3: Shift left
    std::cout << "Test Case 3: Shift Left" << std::endl;
    total_tests++;
    bool test3_passed = true;
    
    // Reset to known state for left shift test
    dut->load = 1;
    dut->direction = 3; // Parallel load
    dut->parallel_in = 0xA5; // 10100101
    
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    
    dut->direction = 2; // 10 - Shift left
    dut->serial_in_right = 0;
    dut->load = 0;
    
    // Expected values after each shift left
    uint8_t expected_left[8] = {0x4A, 0x94, 0x28, 0x50, 0xA0, 0x40, 0x80, 0x00};
    
    // Clock cycles for shift left operations
    for (int i = 0; i < 8; i++) {
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        
        std::cout << "After shift left " << i+1 << ", output = 0x" << std::hex << (int)dut->parallel_out << std::dec;
        
        // Check if the output matches expected value
        if (i < 8 && dut->parallel_out != expected_left[i]) {
            test3_passed = false;
        }
        std::cout << std::endl;
    }
    
    if (test3_passed) {
        passed_tests++;
    } else {
        all_tests_passed = false;
    }
    
    // Test case 4: Hold
    std::cout << "Test Case 4: Hold" << std::endl;
    total_tests++;
    bool test4_passed = true;
    uint8_t hold_value = dut->parallel_out;
    
    dut->direction = 0; // 00 - Hold
    
    // Clock cycles for hold operation
    for (int i = 0; i < 3; i++) {
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        
        std::cout << "After hold " << i+1 << ", output = 0x" << std::hex << (int)dut->parallel_out << std::dec;
        
        // In hold mode, output should remain constant
        if (dut->parallel_out != hold_value) {
            test4_passed = false;
        }
        std::cout << std::endl;
    }
    
    if (test4_passed) {
        passed_tests++;
    } else {
        all_tests_passed = false;
    }
    
    // Test case 5: Disable
    std::cout << "Test Case 5: Disable" << std::endl;
    total_tests++;
    bool test5_passed = true;
    uint8_t disable_value = dut->parallel_out;
    
    dut->enable = 0;
    dut->direction = 1; // 01 - Shift right (should be ignored when disabled)
    
    // Clock cycles for disabled state
    for (int i = 0; i < 3; i++) {
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        
        std::cout << "After disable " << i+1 << ", output = 0x" << std::hex << (int)dut->parallel_out << std::dec;
        
        // When disabled, the output should remain constant
        if (dut->parallel_out != disable_value) {
            test5_passed = false;
        }
        std::cout << std::endl;
    }
    
    if (test5_passed) {
        passed_tests++;
    } else {
        all_tests_passed = false;
    }
    
    m_trace->close();
    delete dut;
    delete m_trace;
    
    // Display test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (all_tests_passed ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << passed_tests << " of " << total_tests << std::endl;
    
    return all_tests_passed ? EXIT_SUCCESS : EXIT_FAILURE;
} 