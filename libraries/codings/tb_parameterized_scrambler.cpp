#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vparameterized_scrambler.h"

#define MAX_SIM_TIME 1000
#define DATA_WIDTH 8
vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    // Initialize Verilators variables
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of our module under test
    Vparameterized_scrambler *tb = new Vparameterized_scrambler;
    
    // Test tracking variables
    bool all_tests_pass = true;
    int tests_passed = 0;
    int total_tests = 2; // We have two tests: scrambling/descrambling and transition check
    
    // Trace generation
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    tb->trace(tfp, 99);
    tfp->open("parameterized_scrambler_trace.vcd");
    
    // Test vectors
    const int num_test_bits = 300; // Test with a sequence of 300 bits
    bool test_data[num_test_bits];
    bool scrambled_data[num_test_bits];
    bool descrambled_data[num_test_bits];
    
    // Generate random test data
    std::cout << "Generating test data..." << std::endl;
    for (int i = 0; i < num_test_bits; i++) {
        test_data[i] = (rand() % 2) == 1;
    }
    
    // Reset scrambler
    tb->rst_n = 0;
    tb->clk = 0;
    tb->enable = 1;
    tb->data_in = 0;
    
    // Tick the clock a few times with reset active
    for (int i = 0; i < 5; i++) {
        tb->clk = !tb->clk;
        tb->eval();
        tfp->dump(sim_time++);
        tb->clk = !tb->clk;
        tb->eval();
        tfp->dump(sim_time++);
    }
    
    // Release reset
    tb->rst_n = 1;
    
    // Scramble the data
    std::cout << "Scrambling data..." << std::endl;
    for (int i = 0; i < num_test_bits; i++) {
        tb->data_in = test_data[i];
        
        // Toggle clock
        tb->clk = !tb->clk;
        tb->eval();
        tfp->dump(sim_time++);
        tb->clk = !tb->clk;
        tb->eval();
        tfp->dump(sim_time++);
        
        // Capture output
        scrambled_data[i] = tb->data_out;
    }
    
    // Reset for descrambling
    tb->rst_n = 0;
    tb->data_in = 0;
    
    // Tick the clock a few times with reset active
    for (int i = 0; i < 5; i++) {
        tb->clk = !tb->clk;
        tb->eval();
        tfp->dump(sim_time++);
        tb->clk = !tb->clk;
        tb->eval();
        tfp->dump(sim_time++);
    }
    
    // Release reset
    tb->rst_n = 1;
    
    // Descramble the data
    std::cout << "Descrambling data..." << std::endl;
    for (int i = 0; i < num_test_bits; i++) {
        tb->data_in = scrambled_data[i];
        
        // Toggle clock
        tb->clk = !tb->clk;
        tb->eval();
        tfp->dump(sim_time++);
        tb->clk = !tb->clk;
        tb->eval();
        tfp->dump(sim_time++);
        
        // Capture output
        descrambled_data[i] = tb->data_out;
    }
    
    // Verify the scrambling/descrambling process
    bool success = true;
    std::cout << "Verifying descrambled data matches original..." << std::endl;
    for (int i = 0; i < num_test_bits; i++) {
        if (test_data[i] != descrambled_data[i]) {
            std::cout << "Mismatch at bit " << i << ": Expected " 
                      << test_data[i] << ", Got " << descrambled_data[i] << std::endl;
            success = false;
        }
    }
    
    if (success) {
        std::cout << "TEST PASSED! All " << num_test_bits << " bits were correctly scrambled and descrambled." << std::endl;
        tests_passed++;
    } else {
        std::cout << "TEST FAILED! Descrambled data does not match original." << std::endl;
        all_tests_pass = false;
    }
    
    // Count the number of transitions in original and scrambled data
    int orig_transitions = 0;
    int scrambled_transitions = 0;
    
    for (int i = 1; i < num_test_bits; i++) {
        if (test_data[i] != test_data[i-1]) orig_transitions++;
        if (scrambled_data[i] != scrambled_data[i-1]) scrambled_transitions++;
    }
    
    std::cout << "Original data transitions: " << orig_transitions << std::endl;
    std::cout << "Scrambled data transitions: " << scrambled_transitions << std::endl;
    
    // Test that scrambled data has more transitions (or at least not significantly fewer)
    if (scrambled_transitions >= orig_transitions * 0.9) {
        std::cout << "TRANSITION TEST PASSED! Scrambled data has similar or more transitions." << std::endl;
        tests_passed++;
    } else {
        std::cout << "TRANSITION TEST FAILED! Scrambled data has significantly fewer transitions." << std::endl;
        all_tests_pass = false;
    }
    
    // Print standardized test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (all_tests_pass ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << tests_passed << " of " << total_tests << std::endl;
    
    // Clean up
    tfp->close();
    delete tfp;
    delete tb;
    
    return all_tests_pass ? EXIT_SUCCESS : EXIT_FAILURE;
} 