#include "Vparameterized_deserializer.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>
#include <bitset>
#include <vector>
#include <string>

// Helper function for clock ticks
void clock_tick(Vparameterized_deserializer* dut, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    dut->clk = !dut->clk;  // Toggle clock
    dut->eval();           // Evaluate model
    if (tfp) tfp->dump(sim_time++);
    dut->clk = !dut->clk;  // Toggle clock
    dut->eval();           // Evaluate model
    if (tfp) tfp->dump(sim_time++);
}

// Test case structure
struct TestCase {
    uint8_t data;
    std::string name;
};

// Function to run a single test case
bool run_test(Vparameterized_deserializer* dut, VerilatedVcdC* tfp, vluint64_t& sim_time, const TestCase& test) {
    std::cout << "\n===== Testing " << test.name << " =====" << std::endl;
    std::cout << "Test data: 0x" << std::hex << (int)test.data;
    std::cout << " (" << std::bitset<8>(test.data) << ")" << std::endl;
    
    // Reset module
    dut->rst_n = 0;
    dut->enable = 0;
    dut->serial_in = 0;
    dut->load = 0;
    
    // Apply reset
    for (int i = 0; i < 5; i++) {
        clock_tick(dut, tfp, sim_time);
    }
    
    // Release reset, enable module
    dut->rst_n = 1;
    dut->enable = 1;
    
    // Prepare for reception
    clock_tick(dut, tfp, sim_time);
    
    // Assert load to start
    dut->load = 1;
    clock_tick(dut, tfp, sim_time);
    dut->load = 0;
    
    // Send MSB first
    for (int i = 0; i < 8; i++) {
        uint8_t bit = (test.data >> (7 - i)) & 0x01;
        dut->serial_in = bit;
        std::cout << "Sending bit " << i << ": " << (int)bit << std::endl;
        
        // Wait 8 clock cycles for each bit
        for (int j = 0; j < 8; j++) {
            clock_tick(dut, tfp, sim_time);
        }
    }
    
    // Extra cycles to complete
    for (int i = 0; i < 10; i++) {
        clock_tick(dut, tfp, sim_time);
        
        if (dut->rx_done) {
            std::cout << "rx_done detected at cycle " << i << std::endl;
            break;
        }
    }
    
    // Check result
    uint8_t result = dut->parallel_out;
    std::cout << "Result: 0x" << std::hex << (int)result 
              << " (" << std::bitset<8>(result) << ")" << std::endl;
    
    bool passed = (result == test.data);
    if (passed) {
        std::cout << "TEST PASSED!" << std::endl;
    } else {
        std::cout << "TEST FAILED! Expected 0x" << std::hex << (int)test.data 
                  << ", got 0x" << (int)result << std::endl;
    }
    
    return passed;
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create DUT
    auto dut = std::make_unique<Vparameterized_deserializer>();
    
    // Setup waveform tracing
    Verilated::traceEverOn(true);
    auto tfp = std::make_unique<VerilatedVcdC>();
    dut->trace(tfp.get(), 99);
    tfp->open("waveform.vcd");
    
    vluint64_t sim_time = 0;
    
    // Define test cases
    std::vector<TestCase> test_cases = {
        {0x55, "Alternating pattern (0x55)"},
        {0xAA, "Alternating pattern (0xAA)"},
        {0x3C, "Random pattern (0x3C)"},
        {0xF0, "Random pattern (0xF0)"}
    };
    
    // Run all test cases
    int passed = 0;
    for (const auto& test : test_cases) {
        bool result = run_test(dut.get(), tfp.get(), sim_time, test);
        if (result) passed++;
    }
    
    // Summary
    std::cout << "\n===== Test Summary =====" << std::endl;
    std::cout << "Passed " << passed << " of " << test_cases.size() << " tests." << std::endl;
    
    // Close trace file
    tfp->close();
    
    return (passed == test_cases.size()) ? 0 : 1;
} 