#include "Vpiso_register.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>
#include <bitset>
#include <vector>

void clock_tick(std::unique_ptr<Vpiso_register>& piso, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    piso->clk = 0;
    piso->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
    
    piso->clk = 1;
    piso->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
}

bool test_piso_register(std::unique_ptr<Vpiso_register>& piso, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    // Get the WIDTH parameter from the design (must match the parameter in the Verilog module)
    const int WIDTH = 8;
    
    std::cout << "Testing PISO Register with WIDTH = " << WIDTH << std::endl;
    
    // Test data pattern
    uint32_t test_data = 0xA5; // 10100101
    std::cout << "Loading parallel data: 0x" << std::hex << test_data 
              << " (Binary: " << std::bitset<8>(test_data) << ")" << std::endl;
    
    // Reset the module
    piso->rst_n = 0;
    piso->load = 0;
    piso->parallel_in = 0;
    clock_tick(piso, tfp, sim_time);
    
    // Release reset
    piso->rst_n = 1;
    clock_tick(piso, tfp, sim_time);
    
    // Load the parallel data
    piso->load = 1;
    piso->parallel_in = test_data;
    clock_tick(piso, tfp, sim_time);
    piso->load = 0;
    
    // Expected output bits (LSB first)
    std::vector<bool> expected_bits;
    for (int i = 0; i < WIDTH; i++) {
        expected_bits.push_back((test_data >> i) & 1);
    }
    
    // Shift out and check each bit
    bool all_passed = true;
    std::cout << "\nShifting out bits:" << std::endl;
    std::cout << "Cycle\tExpected\tActual\tResult" << std::endl;
    
    for (int i = 0; i < WIDTH; i++) {
        bool expected = expected_bits[i];
        bool actual = piso->serial_out;
        
        std::cout << i << "\t" << expected << "\t\t" << actual << "\t";
        if (expected == actual) {
            std::cout << "PASS" << std::endl;
        } else {
            std::cout << "FAIL" << std::endl;
            all_passed = false;
        }
        
        // Tick the clock to shift next bit
        clock_tick(piso, tfp, sim_time);
    }
    
    if (all_passed) {
        std::cout << "\nAll tests passed!" << std::endl;
    } else {
        std::cout << "\nSome tests failed!" << std::endl;
    }
    
    return all_passed;
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of our module under test
    std::unique_ptr<Vpiso_register> piso = std::make_unique<Vpiso_register>();
    
    // Initialize VCD trace file
    Verilated::traceEverOn(true);
    std::unique_ptr<VerilatedVcdC> tfp = std::make_unique<VerilatedVcdC>();
    piso->trace(tfp.get(), 99);  // Trace 99 levels of hierarchy
    tfp->open("piso_register_sim.vcd");
    
    // Initialize simulation time
    vluint64_t sim_time = 0;
    
    // Test tracking variables
    int total_tests = 1;
    int passed_tests = 0;
    
    // Run tests
    bool test_passed = test_piso_register(piso, tfp.get(), sim_time);
    if (test_passed) {
        passed_tests++;
    }
    
    // Cleanup
    tfp->close();
    piso->final();
    
    // Print test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (passed_tests == total_tests ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << passed_tests << " of " << total_tests << std::endl;
    
    return (passed_tests == total_tests) ? 0 : 1;
} 