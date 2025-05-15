#include "Vpriority_encoder.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>
#include <cmath>
#include <bitset>

void check_operation(std::unique_ptr<Vpriority_encoder>& encoder, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    const int WIDTH = 8; // Must match the WIDTH parameter in the Verilog module
    
    // Test tracking variables
    bool all_tests_pass = true;
    int tests_passed = 0;
    int total_tests = 0;
    
    std::cout << "Testing priority encoder with WIDTH=" << WIDTH << std::endl;
    
    // Test all possible input combinations
    for (int test_input = 0; test_input < (1 << WIDTH); test_input++) {
        total_tests++;
        
        // Apply input
        encoder->in = test_input;
        encoder->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        // Calculate expected output
        int expected_out = -1;
        bool expected_valid = false;
        
        for (int i = WIDTH - 1; i >= 0; i--) {
            if ((test_input >> i) & 1) {
                expected_out = i;
                expected_valid = true;
                break;
            }
        }
        
        // Verify output
        std::cout << "Input: " << std::bitset<WIDTH>(test_input)
                  << ", Output: " << static_cast<int>(encoder->out)
                  << ", Valid: " << (encoder->valid ? "1" : "0");
        
        bool pass = true;
        if (expected_valid && (encoder->out != expected_out || !encoder->valid)) {
            std::cout << " - ERROR: Expected output " << expected_out 
                      << " with valid=1" << std::endl;
            pass = false;
        } else if (!expected_valid && encoder->valid) {
            std::cout << " - ERROR: Expected valid=0" << std::endl;
            pass = false;
        } else {
            std::cout << " - PASS" << std::endl;
            tests_passed++;
        }
        
        if (!pass) {
            all_tests_pass = false;
        }
    }
    
    // Print standardized test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (all_tests_pass ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << tests_passed << " of " << total_tests << std::endl;
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of our module under test
    std::unique_ptr<Vpriority_encoder> encoder = std::make_unique<Vpriority_encoder>();
    
    // Initialize VCD trace file
    Verilated::traceEverOn(true);
    std::unique_ptr<VerilatedVcdC> tfp = std::make_unique<VerilatedVcdC>();
    encoder->trace(tfp.get(), 99);  // Trace 99 levels of hierarchy
    tfp->open("priority_encoder_sim.vcd");
    
    // Initialize simulation time
    vluint64_t sim_time = 0;
    
    // Run tests
    check_operation(encoder, tfp.get(), sim_time);
    
    // Cleanup
    tfp->close();
    encoder->final();
    
    return 0;
} 