#include "Vpriority_encoder.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>
#include <cmath>
#include <bitset>

void check_operation(std::unique_ptr<Vpriority_encoder>& encoder, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    const int WIDTH = 8; // Must match the WIDTH parameter in the Verilog module
    
    std::cout << "Testing priority encoder with WIDTH=" << WIDTH << std::endl;
    
    // Test all possible input combinations
    for (int test_input = 0; test_input < (1 << WIDTH); test_input++) {
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
        
        if (expected_valid && (encoder->out != expected_out || !encoder->valid)) {
            std::cout << " - ERROR: Expected output " << expected_out 
                      << " with valid=1" << std::endl;
        } else if (!expected_valid && encoder->valid) {
            std::cout << " - ERROR: Expected valid=0" << std::endl;
        } else {
            std::cout << " - PASS" << std::endl;
        }
    }
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
    
    std::cout << "Simulation completed!" << std::endl;
    return 0;
} 