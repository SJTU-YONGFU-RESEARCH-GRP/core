#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vshadow_register.h"

#define MAX_SIM_TIME 300
vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vshadow_register* dut = new Vshadow_register;
    
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    
    // Test tracking variables
    int total_tests = 7; // 7 test cases
    int passed_tests = 0;
    bool pass = true;
    
    // Initialize inputs
    dut->clk = 0;
    dut->rst_n = 0;
    dut->main_load_en = 0;
    dut->main_data_in = 0;
    dut->shadow_capture_en = 0;
    dut->shadow_load_en = 0;
    dut->shadow_data_in = 0;
    dut->use_shadow_out = 0;
    
    // Reset sequence
    for (int i = 0; i < 5; i++) {
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time++);
    }
    dut->rst_n = 1;
    
    // Test case 1: Load main register
    std::cout << "Test Case 1: Load Main Register" << std::endl;
    dut->main_load_en = 1;
    dut->main_data_in = 0xAAAAAAAA;
    
    // Clock cycle to load main register
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    
    dut->main_load_en = 0;
    
    // Check output
    std::cout << "After loading main register, main_data_out = 0x" << std::hex << dut->main_data_out << std::dec << std::endl;
    std::cout << "Shadow register output = 0x" << std::hex << dut->shadow_data_out << std::dec << std::endl;
    
    if (dut->main_data_out == 0xAAAAAAAA) {
        passed_tests++;
    } else {
        pass = false;
        std::cout << "ERROR: Expected main_data_out = 0xAAAAAAAA" << std::endl;
    }
    
    // Test case 2: Capture main register to shadow
    std::cout << "Test Case 2: Capture Main Register to Shadow" << std::endl;
    dut->shadow_capture_en = 1;
    
    // Clock cycle to capture
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    
    dut->shadow_capture_en = 0;
    
    // Check output
    std::cout << "After capture, shadow_data_out = 0x" << std::hex << dut->shadow_data_out << std::dec << std::endl;
    
    if (dut->shadow_data_out == 0xAAAAAAAA) {
        passed_tests++;
    } else {
        pass = false;
        std::cout << "ERROR: Expected shadow_data_out = 0xAAAAAAAA" << std::endl;
    }
    
    // Test case 3: Load shadow register directly
    std::cout << "Test Case 3: Load Shadow Register Directly" << std::endl;
    dut->shadow_load_en = 1;
    dut->shadow_data_in = 0xBBBBBBBB;
    
    // Clock cycle to load shadow
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    
    dut->shadow_load_en = 0;
    
    // Check output
    std::cout << "After loading shadow register, shadow_data_out = 0x" << std::hex << dut->shadow_data_out << std::dec << std::endl;
    std::cout << "Main register output = 0x" << std::hex << dut->main_data_out << std::dec << std::endl;
    
    if (dut->shadow_data_out == 0xBBBBBBBB && dut->main_data_out == 0xAAAAAAAA) {
        passed_tests++;
    } else {
        pass = false;
        if (dut->shadow_data_out != 0xBBBBBBBB)
            std::cout << "ERROR: Expected shadow_data_out = 0xBBBBBBBB" << std::endl;
        if (dut->main_data_out != 0xAAAAAAAA)
            std::cout << "ERROR: Expected main_data_out = 0xAAAAAAAA" << std::endl;
    }
    
    // Test case 4: Use shadow register as output
    std::cout << "Test Case 4: Use Shadow Register as Output" << std::endl;
    dut->use_shadow_out = 1;
    
    // Check output
    dut->eval();
    m_trace->dump(sim_time++);
    
    std::cout << "With shadow as output, main_data_out = 0x" << std::hex << dut->main_data_out << std::dec << std::endl;
    
    if (dut->main_data_out == 0xBBBBBBBB) {
        passed_tests++;
    } else {
        pass = false;
        std::cout << "ERROR: Expected main_data_out = 0xBBBBBBBB (shadow value)" << std::endl;
    }
    
    // Test case 5: Continue updating main register
    std::cout << "Test Case 5: Continue Updating Main Register" << std::endl;
    dut->main_load_en = 1;
    dut->main_data_in = 0xCCCCCCCC;
    dut->use_shadow_out = 0;  // Switch back to main output
    
    // Clock cycle to update main
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    
    dut->main_load_en = 0;
    
    // Check output
    std::cout << "After updating main register, main_data_out = 0x" << std::hex << dut->main_data_out << std::dec << std::endl;
    std::cout << "Shadow register output = 0x" << std::hex << dut->shadow_data_out << std::dec << std::endl;
    
    if (dut->main_data_out == 0xCCCCCCCC && dut->shadow_data_out == 0xBBBBBBBB) {
        passed_tests++;
    } else {
        pass = false;
        if (dut->main_data_out != 0xCCCCCCCC)
            std::cout << "ERROR: Expected main_data_out = 0xCCCCCCCC" << std::endl;
        if (dut->shadow_data_out != 0xBBBBBBBB)
            std::cout << "ERROR: Expected shadow_data_out = 0xBBBBBBBB" << std::endl;
    }
    
    // Test case 6: Reload shadow from main
    std::cout << "Test Case 6: Reload Shadow from Main" << std::endl;
    dut->shadow_capture_en = 1;
    
    // Clock cycle to capture
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time++);
    
    dut->shadow_capture_en = 0;
    
    // Check output
    std::cout << "After recapture, shadow_data_out = 0x" << std::hex << dut->shadow_data_out << std::dec << std::endl;
    
    if (dut->shadow_data_out == 0xCCCCCCCC) {
        passed_tests++;
    } else {
        pass = false;
        std::cout << "ERROR: Expected shadow_data_out = 0xCCCCCCCC" << std::endl;
    }
    
    // Test case 7: Shadow overrides main output
    std::cout << "Test Case 7: Shadow Overrides Main Output" << std::endl;
    dut->use_shadow_out = 1;
    
    // Check output
    dut->eval();
    m_trace->dump(sim_time++);
    
    std::cout << "With shadow overriding, main_data_out = 0x" << std::hex << dut->main_data_out << std::dec << std::endl;
    
    if (dut->main_data_out == 0xCCCCCCCC) {
        passed_tests++;
    } else {
        pass = false;
        std::cout << "ERROR: Expected main_data_out = 0xCCCCCCCC (shadow value)" << std::endl;
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