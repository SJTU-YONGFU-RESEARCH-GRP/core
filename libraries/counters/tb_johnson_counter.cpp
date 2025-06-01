#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vjohnson_counter.h"

#define MAX_SIM_TIME 100
vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vjohnson_counter* dut = new Vjohnson_counter;
    
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    
    // Track test results
    int total_tests = 4;  // We have 4 test cases
    int passed_tests = 0;
    
    // Initialize inputs
    dut->clk = 0;
    dut->rst_n = 0;
    dut->enable = 0;
    dut->load_en = 0;
    dut->load_val = 0;
    
    // Reset sequence
    for (int i = 0; i < 5; i++) {
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
    }
    dut->rst_n = 1;
    dut->enable = 1;
    
    // Test case 1: Load a specific value
    std::cout << "Test Case 1: Load Value" << std::endl;
    dut->load_en = 1;
    dut->load_val = 0x5; // For a 4-bit counter
    
    // Clock cycle for load
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    
    // Disable load
    dut->load_en = 0;
    
    // Check output after load
    std::cout << "After load, count = 0x" << std::hex << (int)dut->count << std::dec << std::endl;
    if (dut->count == 0x5) passed_tests++;
    
    // Test case 2: Johnson counter sequence
    std::cout << "Test Case 2: Johnson Counter Sequence" << std::endl;
    bool sequence_correct = true;
    // The starting value is 0x5, but after the first clock cycle it becomes 0xB
    // So our expected sequence should start with 0xB
    uint8_t expected_sequence[] = {0xB, 0x6, 0xD, 0xA, 0x4, 0x9, 0x2, 0x5, 0xB, 0x6};
    
    // For a 4-bit Johnson counter, we need 8 clock cycles to complete a sequence
    for (int i = 0; i < 10; i++) {
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        std::cout << "Johnson counter state " << i+1 << ": 0x" << std::hex << (int)dut->count 
                  << " (expected: 0x" << (int)expected_sequence[i] << ")" << std::dec << std::endl;
        if (dut->count != expected_sequence[i]) {
            sequence_correct = false;
            std::cout << "Mismatch at state " << i+1 << ": got 0x" << std::hex << (int)dut->count 
                      << ", expected 0x" << (int)expected_sequence[i] << std::dec << std::endl;
        }
    }
    if (sequence_correct) {
        passed_tests++;
        std::cout << "Johnson counter sequence test passed!" << std::endl;
    } else {
        std::cout << "Johnson counter sequence test failed!" << std::endl;
    }
    
    // Test case 3: Disable counter
    std::cout << "Test Case 3: Disable Counter" << std::endl;
    dut->enable = 0;
    uint8_t frozen_value = dut->count;
    bool disable_correct = true;
    
    // Clock cycles with counter disabled
    for (int i = 0; i < 3; i++) {
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        std::cout << "After disable " << i+1 << ", count = 0x" << std::hex << (int)dut->count << std::dec << std::endl;
        if (dut->count != frozen_value) disable_correct = false;
    }
    if (disable_correct) passed_tests++;
    
    // Test case 4: Re-enable Counter
    std::cout << "Test Case 4: Re-enable Counter" << std::endl;
    dut->enable = 1;
    bool reenable_correct = true;
    // Expected sequence after 0x6 (where we left off after disabling)
    uint8_t expected_reenable[] = {0xD, 0xA, 0x4, 0x9, 0x2};
    
    // Continue Johnson counter sequence
    for (int i = 0; i < 5; i++) {
        // Clock low
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        
        // Clock high - check value after positive edge
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
        
        std::cout << "Johnson counter state " << i+1 << " after re-enable: 0x" << std::hex << (int)dut->count 
                  << " (expected: 0x" << (int)expected_reenable[i] << ")" << std::dec << std::endl;
        
        if (dut->count != expected_reenable[i]) {
            reenable_correct = false;
            std::cout << "Mismatch at state " << i+1 << ": got 0x" << std::hex << (int)dut->count 
                      << ", expected 0x" << (int)expected_reenable[i] << std::dec << std::endl;
        }
    }
    if (reenable_correct) {
        passed_tests++;
        std::cout << "Re-enable test passed!" << std::endl;
    } else {
        std::cout << "Re-enable test failed!" << std::endl;
    }
    
    // Print standardized test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (passed_tests == total_tests ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << passed_tests << " of " << total_tests << std::endl;
    
    m_trace->close();
    delete dut;
    delete m_trace;
    
    return (passed_tests == total_tests) ? 0 : 1;
}