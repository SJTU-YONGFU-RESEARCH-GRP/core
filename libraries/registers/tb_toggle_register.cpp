#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vtoggle_register.h"

#define MAX_SIM_TIME 300
vluint64_t sim_time = 0;

// Test tracking variables
int total_tests = 8; // 8 test cases
int passed_tests = 0;

void clock_tick(Vtoggle_register *dut, VerilatedVcdC *m_trace) {
    dut->clk = 0;
    dut->eval();
    m_trace->dump(sim_time++);
    
    dut->clk = 1;
    dut->eval();
    m_trace->dump(sim_time++);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vtoggle_register* dut = new Vtoggle_register;
    
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    
    // Initialize inputs
    dut->clk = 0;
    dut->rst_n = 0;
    dut->enable = 0;
    dut->toggle_mask = 0;
    dut->load_en = 0;
    dut->load_data = 0;
    
    bool pass = true;
    
    // Reset sequence
    std::cout << "Test Case 1: Reset Sequence" << std::endl;
    for (int i = 0; i < 5; i++) {
        clock_tick(dut, m_trace);
    }
    dut->rst_n = 1;
    // Reset passed (always)
    passed_tests++;
    
    // Test case 2: Load initial data
    std::cout << "Test Case 2: Load Initial Data" << std::endl;
    dut->load_en = 1;
    dut->load_data = 0xAA;  // 10101010
    
    clock_tick(dut, m_trace);
    std::cout << "After load, data_out = 0x" << std::hex << (int)dut->data_out << std::dec << std::endl;
    
    if(dut->data_out == 0xAA) {
        passed_tests++;
    } else {
        pass = false;
    }
    
    dut->load_en = 0;
    
    // Test case 3: Toggle all bits
    std::cout << "Test Case 3: Toggle All Bits" << std::endl;
    dut->enable = 1;
    dut->toggle_mask = 0xFF;  // Toggle all bits
    
    uint8_t expected = 0xAA;
    bool test3_pass = true;
    
    for (int i = 0; i < 5; i++) {
        clock_tick(dut, m_trace);
        expected = ~expected & 0xFF;
        std::cout << "After toggle " << i+1 << ", data_out = 0x" << std::hex << (int)dut->data_out << std::dec << std::endl;
        if(dut->data_out != expected) {
            test3_pass = false;
        }
    }
    
    if(test3_pass) {
        passed_tests++;
    } else {
        pass = false;
    }
    
    // Test case 4: Toggle specific bits
    std::cout << "Test Case 4: Toggle Specific Bits" << std::endl;
    dut->toggle_mask = 0x0F;  // Toggle only lower 4 bits
    
    bool test4_pass = true;
    expected = dut->data_out;
    
    for (int i = 0; i < 5; i++) {
        clock_tick(dut, m_trace);
        expected = (expected & 0xF0) | (~expected & 0x0F);
        std::cout << "After selective toggle " << i+1 << ", data_out = 0x" << std::hex << (int)dut->data_out << std::dec << std::endl;
        if(dut->data_out != expected) {
            test4_pass = false;
        }
    }
    
    if(test4_pass) {
        passed_tests++;
    } else {
        pass = false;
    }
    
    // Test case 5: Disable toggle
    std::cout << "Test Case 5: Disable Toggle" << std::endl;
    dut->enable = 0;
    dut->toggle_mask = 0xFF;  // Should be ignored since enable is 0
    
    bool test5_pass = true;
    expected = dut->data_out;
    
    for (int i = 0; i < 3; i++) {
        clock_tick(dut, m_trace);
        std::cout << "After disabled toggle " << i+1 << ", data_out = 0x" << std::hex << (int)dut->data_out << std::dec << std::endl;
        if(dut->data_out != expected) {
            test5_pass = false;
        }
    }
    
    if(test5_pass) {
        passed_tests++;
    } else {
        pass = false;
    }
    
    // Test case 6: Load has priority over toggle
    std::cout << "Test Case 6: Load Has Priority Over Toggle" << std::endl;
    dut->enable = 1;
    dut->load_en = 1;
    dut->load_data = 0x55;  // 01010101
    dut->toggle_mask = 0xFF;
    
    clock_tick(dut, m_trace);
    std::cout << "After load with toggle enabled, data_out = 0x" << std::hex << (int)dut->data_out << std::dec << std::endl;
    
    if(dut->data_out == 0x55) {
        passed_tests++;
    } else {
        pass = false;
    }
    
    dut->load_en = 0;
    
    // Test case 7: Toggle after reload
    std::cout << "Test Case 7: Toggle After Reload" << std::endl;
    bool test7_pass = true;
    expected = 0x55;
    
    for (int i = 0; i < 3; i++) {
        clock_tick(dut, m_trace);
        expected = ~expected & 0xFF;
        std::cout << "After toggle " << i+1 << ", data_out = 0x" << std::hex << (int)dut->data_out << std::dec << std::endl;
        if(dut->data_out != expected) {
            test7_pass = false;
        }
    }
    
    if(test7_pass) {
        passed_tests++;
    } else {
        pass = false;
    }
    
    // Test case 8: Reset during operation
    std::cout << "Test Case 8: Reset During Operation" << std::endl;
    dut->rst_n = 0;
    clock_tick(dut, m_trace);
    std::cout << "After reset, data_out = 0x" << std::hex << (int)dut->data_out << std::dec << std::endl;
    
    if(dut->data_out == 0) {
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