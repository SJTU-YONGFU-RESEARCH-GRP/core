#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <memory>
#include <cstdlib>
#include <ctime>
#include "Vmajority_voter.h"

void check_operation(std::unique_ptr<Vmajority_voter>& voter, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    const int INPUT_WIDTH = 8;
    const int NUM_INPUTS = 5;
    
    // Array to store test inputs
    uint8_t test_inputs[NUM_INPUTS];
    
    // Test case 1: Simple majority (3 of 5 inputs are 0x55)
    test_inputs[0] = 0x55;
    test_inputs[1] = 0x55;
    test_inputs[2] = 0x55;
    test_inputs[3] = 0xAA;
    test_inputs[4] = 0xBB;
    
    // Set the inputs in the Verilator model
    for (int i = 0; i < NUM_INPUTS; i++) {
        voter->inputs[i] = test_inputs[i];
    }
    
    // Evaluate the model
    voter->eval();
    
    #ifdef TRACE
    tfp->dump(sim_time++);
    #endif
    
    // Check the result
    if (voter->majority_out == 0x55 && voter->valid == 1) {
        std::cout << "Test Case 1 PASSED: Majority correctly identified as 0x55" << std::endl;
    } else {
        std::cout << "Test Case 1 FAILED: Expected 0x55, got 0x" 
                  << std::hex << (int)voter->majority_out 
                  << " with valid = " << voter->valid << std::endl;
    }
    
    // Test case 2: No majority
    test_inputs[0] = 0x11;
    test_inputs[1] = 0x22;
    test_inputs[2] = 0x33;
    test_inputs[3] = 0x44;
    test_inputs[4] = 0x55;
    
    // Set the inputs in the Verilator model
    for (int i = 0; i < NUM_INPUTS; i++) {
        voter->inputs[i] = test_inputs[i];
    }
    
    // Evaluate the model
    voter->eval();
    
    #ifdef TRACE
    tfp->dump(sim_time++);
    #endif
    
    // Check the result - should be no valid majority
    if (voter->valid == 0) {
        std::cout << "Test Case 2 PASSED: Correctly identified no majority" << std::endl;
    } else {
        std::cout << "Test Case 2 FAILED: Expected no majority, but got value 0x" 
                  << std::hex << (int)voter->majority_out 
                  << " with valid = " << voter->valid << std::endl;
    }
    
    // Test case 3: All inputs are the same (unanimous)
    test_inputs[0] = 0xCC;
    test_inputs[1] = 0xCC;
    test_inputs[2] = 0xCC;
    test_inputs[3] = 0xCC;
    test_inputs[4] = 0xCC;
    
    // Set the inputs in the Verilator model
    for (int i = 0; i < NUM_INPUTS; i++) {
        voter->inputs[i] = test_inputs[i];
    }
    
    // Evaluate the model
    voter->eval();
    
    #ifdef TRACE
    tfp->dump(sim_time++);
    #endif
    
    // Check the result
    if (voter->majority_out == 0xCC && voter->valid == 1) {
        std::cout << "Test Case 3 PASSED: Unanimous majority correctly identified as 0xCC" << std::endl;
    } else {
        std::cout << "Test Case 3 FAILED: Expected 0xCC, got 0x" 
                  << std::hex << (int)voter->majority_out 
                  << " with valid = " << voter->valid << std::endl;
    }
    
    // Test case 4: Exactly threshold majority (3 of 5)
    test_inputs[0] = 0x77;
    test_inputs[1] = 0x77;
    test_inputs[2] = 0x77;
    test_inputs[3] = 0x88;
    test_inputs[4] = 0x99;
    
    // Set the inputs in the Verilator model
    for (int i = 0; i < NUM_INPUTS; i++) {
        voter->inputs[i] = test_inputs[i];
    }
    
    // Evaluate the model
    voter->eval();
    
    #ifdef TRACE
    tfp->dump(sim_time++);
    #endif
    
    // Check the result
    if (voter->majority_out == 0x77 && voter->valid == 1) {
        std::cout << "Test Case 4 PASSED: Majority correctly identified as 0x77" << std::endl;
    } else {
        std::cout << "Test Case 4 FAILED: Expected 0x77, got 0x" 
                  << std::hex << (int)voter->majority_out 
                  << " with valid = " << voter->valid << std::endl;
    }
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of our module under test
    std::unique_ptr<Vmajority_voter> voter = std::make_unique<Vmajority_voter>();
    
    // Initialize trace dump if enabled
    #ifdef TRACE
    Verilated::traceEverOn(true);
    std::unique_ptr<VerilatedVcdC> tfp = std::make_unique<VerilatedVcdC>();
    voter->trace(tfp.get(), 99);
    tfp->open("majority_voter_sim.vcd");
    #else
    VerilatedVcdC* tfp = nullptr;
    #endif
    
    // Initialize simulation time
    vluint64_t sim_time = 0;
    
    // Run tests
    check_operation(voter, tfp, sim_time);
    
    // Cleanup
    #ifdef TRACE
    tfp->close();
    #endif
    
    // Exit with success code
    return 0;
} 