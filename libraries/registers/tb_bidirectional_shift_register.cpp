#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vbidirectional_shift_register.h"

#define MAX_SIM_TIME 300
vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vbidirectional_shift_register* dut = new Vbidirectional_shift_register;
    
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    
    // Test tracking variables
    int total_tests = 6; // 6 test cases
    int passed_tests = 0;
    bool pass = true;
    
    // Initialize inputs
    dut->clk = 0;
    dut->rst_n = 0;
    dut->enable = 0;
    dut->direction = 0;
    dut->shift_en = 0;
    dut->load_en = 0;
    dut->serial_in = 0;
    dut->parallel_in = 0;
    
    // Reset sequence
    for (int i = 0; i < 5; i++) {
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
    }
    dut->rst_n = 1;
    dut->enable = 1;
    
    // Test case 1: Parallel load
    std::cout << "Test Case 1: Parallel Load" << std::endl;
    dut->load_en = 1;
    dut->parallel_in = 0xA5; // 10100101
    
    // Clock cycle for parallel load
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    
    // Check output after parallel load
    std::cout << "After parallel load, output = 0x" << std::hex << (int)dut->parallel_out << std::dec << std::endl;
    
    // Verify parallel load
    if (dut->parallel_out == 0xA5) {
        passed_tests++;
    } else {
        pass = false;
    }
    
    // Disable load
    dut->load_en = 0;
    
    // Test case 2: Shift right
    std::cout << "Test Case 2: Shift Right" << std::endl;
    dut->direction = 0; // Shift right
    dut->shift_en = 1;
    dut->serial_in = 1;
    
    uint8_t expected = 0xA5;
    bool test2_pass = true;
    
    // Clock cycles for shift right operations
    for (int i = 0; i < 8; i++) {
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        
        // Calculate expected value after shift right
        expected = (expected >> 1) | (dut->serial_in << 7);
        
        std::cout << "After shift right " << i+1 << ", output = 0x" << std::hex << (int)dut->parallel_out << std::dec << std::endl;
        
        if (dut->parallel_out != expected) {
            test2_pass = false;
        }
    }
    
    if (test2_pass) {
        passed_tests++;
    } else {
        pass = false;
    }
    
    // Test case 3: Shift left
    std::cout << "Test Case 3: Shift Left" << std::endl;
    dut->direction = 1; // Shift left
    dut->serial_in = 0;
    
    expected = dut->parallel_out;
    bool test3_pass = true;
    
    // Clock cycles for shift left operations
    for (int i = 0; i < 8; i++) {
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        
        // Calculate expected value after shift left
        expected = (expected << 1) | dut->serial_in;
        expected &= 0xFF; // Keep only 8 bits
        
        std::cout << "After shift left " << i+1 << ", output = 0x" << std::hex << (int)dut->parallel_out << std::dec << std::endl;
        
        if (dut->parallel_out != expected) {
            test3_pass = false;
        }
    }
    
    if (test3_pass) {
        passed_tests++;
    } else {
        pass = false;
    }
    
    // Test case 4: Disable shift
    std::cout << "Test Case 4: Disable Shift" << std::endl;
    dut->shift_en = 0;
    
    expected = dut->parallel_out;
    bool test4_pass = true;
    
    // Clock cycles for disabled shift
    for (int i = 0; i < 3; i++) {
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        std::cout << "After disabled shift " << i+1 << ", output = 0x" << std::hex << (int)dut->parallel_out << std::dec << std::endl;
        
        if (dut->parallel_out != expected) {
            test4_pass = false;
        }
    }
    
    if (test4_pass) {
        passed_tests++;
    } else {
        pass = false;
    }
    
    // Test case 5: Load priority over shift
    std::cout << "Test Case 5: Load Priority" << std::endl;
    dut->shift_en = 1;
    dut->load_en = 1;
    dut->parallel_in = 0x3C; // 00111100
    
    // Clock cycle for load with shift enabled
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    
    std::cout << "After load with shift enabled, output = 0x" << std::hex << (int)dut->parallel_out << std::dec << std::endl;
    
    if (dut->parallel_out == 0x3C) {
        passed_tests++;
    } else {
        pass = false;
    }
    
    // Test case 6: Module disable
    std::cout << "Test Case 6: Module Disable" << std::endl;
    dut->enable = 0;
    dut->load_en = 1;
    dut->parallel_in = 0xFF; // Should be ignored when disabled
    
    expected = dut->parallel_out;
    bool test6_pass = true;
    
    // Clock cycles for disabled module
    for (int i = 0; i < 3; i++) {
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        std::cout << "After module disable " << i+1 << ", output = 0x" << std::hex << (int)dut->parallel_out << std::dec << std::endl;
        
        if (dut->parallel_out != expected) {
            test6_pass = false;
        }
    }
    
    if (test6_pass) {
        passed_tests++;
    } else {
        pass = false;
    }
    
    // Print test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (pass ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << passed_tests << " of " << total_tests << std::endl;
    
    m_trace->close();
    delete dut;
    delete m_trace;
    
    return pass ? EXIT_SUCCESS : EXIT_FAILURE;
} 