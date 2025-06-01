#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vsync_preset_register.h"

#define MAX_SIM_TIME 300
vluint64_t sim_time = 0;

void clock_tick(Vsync_preset_register *dut, VerilatedVcdC *m_trace) {
    dut->clk = 0;
    dut->eval();
    m_trace->dump(sim_time++);
    
    dut->clk = 1;
    dut->eval();
    m_trace->dump(sim_time++);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vsync_preset_register* dut = new Vsync_preset_register;
    
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    
    // Test tracking variables
    int total_tests = 8; // 8 test cases
    int passed_tests = 0;
    bool pass = true;
    
    // Initialize inputs
    dut->clk = 0;
    dut->rst_n = 0;
    dut->sync_rst = 0;
    dut->sync_preset = 0;
    dut->enable = 0;
    dut->data_in = 0xA5;  // 10100101
    
    // Test case 1: Asynchronous reset
    std::cout << "Test Case 1: Asynchronous Reset" << std::endl;
    for (int i = 0; i < 5; i++) {
        clock_tick(dut, m_trace);
    }
    std::cout << "After async reset, data_out = 0x" << std::hex << (int)dut->data_out << std::dec << std::endl;
    
    // Verify async reset
    if (dut->data_out == 0) {
        passed_tests++;
    } else {
        pass = false;
        std::cout << "ERROR: Expected data_out = 0x00" << std::endl;
    }
    
    // Test case 2: Normal operation
    std::cout << "Test Case 2: Normal Operation" << std::endl;
    dut->rst_n = 1;
    dut->enable = 1;
    
    uint8_t expected_data = 0xA5;
    bool test2_pass = true;
    
    for (int i = 0; i < 3; i++) {
        clock_tick(dut, m_trace);
        std::cout << "After normal op cycle " << i+1 << ", data_out = 0x" << std::hex << (int)dut->data_out << std::dec << std::endl;
        
        if (dut->data_out != expected_data) {
            test2_pass = false;
            std::cout << "ERROR: Expected data_out = 0x" << std::hex << (int)expected_data << std::dec << std::endl;
        }
        
        expected_data = dut->data_in + 0x11;  // Next expected value
        dut->data_in = expected_data;  // Change input
    }
    
    if (test2_pass) {
        passed_tests++;
    } else {
        pass = false;
    }
    
    // Test case 3: Disable register
    std::cout << "Test Case 3: Disable Register" << std::endl;
    dut->enable = 0;
    dut->data_in = 0xFF;  // This shouldn't be registered
    
    uint8_t last_output = dut->data_out;
    bool test3_pass = true;
    
    for (int i = 0; i < 3; i++) {
        clock_tick(dut, m_trace);
        std::cout << "After disabled cycle " << i+1 << ", data_out = 0x" << std::hex << (int)dut->data_out << std::dec << std::endl;
        
        if (dut->data_out != last_output) {
            test3_pass = false;
            std::cout << "ERROR: Output changed while disabled" << std::endl;
        }
    }
    
    if (test3_pass) {
        passed_tests++;
    } else {
        pass = false;
    }
    
    // Test case 4: Synchronous preset
    std::cout << "Test Case 4: Synchronous Preset" << std::endl;
    dut->sync_preset = 1;
    
    clock_tick(dut, m_trace);
    std::cout << "After sync preset, data_out = 0x" << std::hex << (int)dut->data_out << std::dec << std::endl;
    
    if (dut->data_out == 0xFF) {
        passed_tests++;
    } else {
        pass = false;
        std::cout << "ERROR: Expected data_out = 0xFF" << std::endl;
    }
    
    dut->sync_preset = 0;
    
    // Test case 5: Synchronous reset
    std::cout << "Test Case 5: Synchronous Reset" << std::endl;
    dut->sync_rst = 1;
    
    clock_tick(dut, m_trace);
    std::cout << "After sync reset, data_out = 0x" << std::hex << (int)dut->data_out << std::dec << std::endl;
    
    if (dut->data_out == 0) {
        passed_tests++;
    } else {
        pass = false;
        std::cout << "ERROR: Expected data_out = 0x00" << std::endl;
    }
    
    dut->sync_rst = 0;
    
    // Test case 6: Priority test - preset vs reset
    std::cout << "Test Case 6: Priority Test - Reset over Preset" << std::endl;
    dut->enable = 1;
    dut->data_in = 0x55;  // 01010101
    dut->sync_rst = 1;
    dut->sync_preset = 1;
    
    clock_tick(dut, m_trace);
    std::cout << "With both sync_rst and sync_preset, data_out = 0x" << std::hex << (int)dut->data_out << std::dec << std::endl;
    
    // Reset should have priority over preset
    if (dut->data_out == 0) {
        passed_tests++;
    } else {
        pass = false;
        std::cout << "ERROR: Expected data_out = 0x00 (reset has priority)" << std::endl;
    }
    
    // Test case 7: Priority test - preset vs enable
    std::cout << "Test Case 7: Priority Test - Preset over Enable" << std::endl;
    dut->sync_rst = 0;
    dut->sync_preset = 1;
    dut->enable = 1;
    dut->data_in = 0x55;  // 01010101
    
    clock_tick(dut, m_trace);
    std::cout << "With both sync_preset and enable, data_out = 0x" << std::hex << (int)dut->data_out << std::dec << std::endl;
    
    // Preset should have priority over enable
    if (dut->data_out == 0xFF) {
        passed_tests++;
    } else {
        pass = false;
        std::cout << "ERROR: Expected data_out = 0xFF (preset has priority over enable)" << std::endl;
    }
    
    // Test case 8: Asynchronous reset has highest priority
    std::cout << "Test Case 8: Asynchronous Reset Priority" << std::endl;
    dut->rst_n = 0;
    dut->sync_rst = 1;
    dut->sync_preset = 1;
    dut->enable = 1;
    
    // This should be an immediate reset, without waiting for clock
    dut->eval();
    m_trace->dump(sim_time++);
    std::cout << "After async reset with all signals active, data_out = 0x" << std::hex << (int)dut->data_out << std::dec << std::endl;
    
    if (dut->data_out == 0) {
        passed_tests++;
    } else {
        pass = false;
        std::cout << "ERROR: Expected data_out = 0x00 (async reset has highest priority)" << std::endl;
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