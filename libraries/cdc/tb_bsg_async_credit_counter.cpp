#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vbsg_async_credit_counter.h"
#include <stdint.h>
#include <string>

// Test vectors and expected results
struct TestVector {
    bool w_inc_token;
    bool r_dec_credit;
    bool r_infinite_credits;
    bool expected_credits_avail;
    std::string description;
    int sync_cycles;  // Number of clock cycles to wait for synchronization
};

void clock_tick(Vbsg_async_credit_counter *dut, VerilatedVcdC *tfp, uint64_t &timestamp) {
    // Toggle w_clk (receiver clock)
    dut->w_clk_i = 0;
    dut->eval();
    if (tfp) tfp->dump(timestamp++);
    
    dut->w_clk_i = 1;
    dut->eval();
    if (tfp) tfp->dump(timestamp++);
    
    // Toggle r_clk (spender clock)
    dut->r_clk_i = 0;
    dut->eval();
    if (tfp) tfp->dump(timestamp++);
    
    dut->r_clk_i = 1;
    dut->eval();
    if (tfp) tfp->dump(timestamp++);
}

void reset_dut(Vbsg_async_credit_counter *dut, VerilatedVcdC *tfp, uint64_t &timestamp) {
    // Apply reset sequence as described in module comments
    dut->r_reset_i = 1;
    dut->w_reset_i = 1;
    
    // Step 1: Assert r_ reset (already done)
    
    // Step 2: w_ reset must be toggled 0->1->0
    dut->w_clk_i = 0;
    dut->eval();
    if (tfp) tfp->dump(timestamp++);
    
    dut->w_reset_i = 0;
    dut->eval();
    if (tfp) tfp->dump(timestamp++);
    
    dut->w_reset_i = 1;
    dut->eval();
    if (tfp) tfp->dump(timestamp++);
    
    dut->w_reset_i = 0;
    dut->eval();
    if (tfp) tfp->dump(timestamp++);
    
    // Step 3: r_ clock toggled at least 4 times
    for (int i = 0; i < 4; i++) {
        dut->r_clk_i = 0;
        dut->eval();
        if (tfp) tfp->dump(timestamp++);
        
        dut->r_clk_i = 1;
        dut->eval();
        if (tfp) tfp->dump(timestamp++);
    }
    
    // Step 4: Deassert r_ reset
    dut->r_reset_i = 0;
    dut->eval();
    if (tfp) tfp->dump(timestamp++);
    
    // Additional clock cycles to stabilize
    for (int i = 0; i < 5; i++) {
        clock_tick(dut, tfp, timestamp);
    }
}

int main(int argc, char **argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    // Create DUT instance
    Vbsg_async_credit_counter *dut = new Vbsg_async_credit_counter;
    
    // Setup VCD tracing
    VerilatedVcdC *tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("bsg_async_credit_counter.vcd");
    
    // Initialize simulation time
    uint64_t timestamp = 0;
    
    // Initialize inputs
    dut->w_clk_i = 0;
    dut->r_clk_i = 0;
    dut->w_inc_token_i = 0;
    dut->r_dec_credit_i = 0;
    dut->r_infinite_credits_i = 0;
    
    // Reset DUT
    reset_dut(dut, tfp, timestamp);
    
    // Test vectors
    TestVector test_vectors[] = {
        // Initial state - should have credits available (start_full_p = 1)
        {false, false, false, true, "Initial state, credits should be available", 0},
        
        // Spend all credits
        {false, true, false, true, "Spend 1 credit", 0},
        {false, true, false, true, "Spend 2 credits", 0},
        {false, true, false, true, "Spend 3 credits", 0},
        {false, true, false, false, "Spend 4 credits - should run out", 0}, // Assuming max_tokens_p = 4
        
        // Try to spend when no credits available
        {false, false, false, false, "No credits available", 0},
        
        // Add tokens back
        {true, false, false, false, "Add token 1 - need sync delay", 0},
        {false, false, false, false, "Wait for sync 1", 20},  // Wait for 20 cycles for sync
        {false, false, false, false, "Wait for sync 2", 20},  // Wait for 20 more cycles
        {false, false, false, true, "Credits should be available after sync", 0},
        
        // Infinite credits mode
        {false, false, true, true, "Infinite credits mode - always available", 0},
        {false, true, true, true, "Spend with infinite credits - still available", 0},
        
        // Return to normal mode, add then spend
        {false, false, false, false, "Back to normal mode", 20},  // Wait for mode transition
        {true, false, false, false, "Add token", 0},
        {false, false, false, false, "Wait for sync after add", 20},  // Wait for sync
        {false, true, false, true, "Spend credit after sync", 0},
    };
    
    int total_tests = sizeof(test_vectors) / sizeof(TestVector);
    int passed_tests = 0;
    
    // Run tests
    for (int i = 0; i < total_tests; i++) {
        // Apply inputs
        dut->w_inc_token_i = test_vectors[i].w_inc_token;
        dut->r_dec_credit_i = test_vectors[i].r_dec_credit;
        dut->r_infinite_credits_i = test_vectors[i].r_infinite_credits;
        
        // Clock the design
        clock_tick(dut, tfp, timestamp);
        
        // Wait for synchronization if needed
        for (int j = 0; j < test_vectors[i].sync_cycles; j++) {
            clock_tick(dut, tfp, timestamp);
        }
        
        // Check output
        bool test_passed = (dut->r_credits_avail_o == test_vectors[i].expected_credits_avail);
        if (test_passed) {
            passed_tests++;
        }
        
        std::cout << "Test " << i << ": " << test_vectors[i].description << " - "
                  << (test_passed ? "PASS" : "FAIL") << std::endl;
        std::cout << "  Expected: " << (test_vectors[i].expected_credits_avail ? "1" : "0")
                  << ", Got: " << (dut->r_credits_avail_o ? "1" : "0") << std::endl;
    }
    
    // Output test summary in the required format
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (passed_tests == total_tests ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << passed_tests << " of " << total_tests << std::endl;
    
    // Cleanup
    tfp->close();
    delete tfp;
    delete dut;
    
    return (passed_tests == total_tests) ? 0 : 1;
} 