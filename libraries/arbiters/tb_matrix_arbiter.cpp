#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vmatrix_arbiter.h"

#define MAX_SIM_TIME 100
vluint64_t sim_time = 0;

// Helper function to toggle clock and update simulation
void tick(Vmatrix_arbiter *dut, VerilatedVcdC* tfp) {
    dut->clk = 1;
    dut->eval();
    tfp->dump(sim_time++);
    
    dut->clk = 0;
    dut->eval();
    tfp->dump(sim_time++);
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of our module under test
    Vmatrix_arbiter *dut = new Vmatrix_arbiter;
    
    // Initialize VCD tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("matrix_arbiter_tb.vcd");
    
    // Test tracking variables
    bool all_tests_pass = true;
    int tests_passed = 0;
    int total_tests = 4; // We have 4 test cases
    
    // Define the parameters for our test
    const int NUM_REQUESTORS = 4;
    const int PRIORITY_WIDTH = 2;
    const int TOTAL_PRIORITY_BITS = NUM_REQUESTORS * NUM_REQUESTORS * PRIORITY_WIDTH;
    
    // Initialize priority matrix
    // Set up a priority matrix where:
    // - Lower index has higher priority (for initial test)
    uint64_t priority_matrix_val = 0;
    
    for (int i = 0; i < NUM_REQUESTORS; i++) {
        for (int j = 0; j < NUM_REQUESTORS; j++) {
            int base_index = (i*NUM_REQUESTORS + j)*PRIORITY_WIDTH;
            uint64_t priority;
            
            if (i == j) {
                // Equal priority for self comparison
                priority = 1; 
            } else if (i < j) {
                // Lower indices have higher priority
                priority = 2;
            } else {
                priority = 0;
            }
            
            // Set the priority in the matrix
            priority_matrix_val |= (priority << base_index);
        }
    }
    
    // Set the priority matrix input
    dut->priority_matrix = priority_matrix_val;
    
    // Reset the DUT
    dut->rst = 1;  // Active high reset
    dut->clk = 0;
    dut->req = 0;
    dut->eval();
    tfp->dump(sim_time++);
    
    // Hold reset for a few cycles
    for (int i = 0; i < 5; i++) {
        tick(dut, tfp);
    }
    
    // Release reset
    dut->rst = 0;
    dut->eval();
    
    // Simple priority test case with competing requests
    std::cout << "Test 1: Priority-based arbitration - lower index has higher priority" << std::endl;
    
    // Test case 1: All requestors active
    dut->req = 0xF; // All four requestors (1111 in binary)
    dut->eval();
    
    // Run for a few cycles to see the arbitration in action
    bool test1_pass = true;
    for (int i = 0; i < 10; i++) {
        tick(dut, tfp);
        
        std::cout << "Cycle " << i << ": req = 0x" << std::hex << (int)dut->req
                  << ", grant = 0x" << (int)dut->grant
                  << ", grant_valid = " << (int)dut->grant_valid << std::endl;
        
        // Verify that the correct grant is given (lowest requester should get grant)
        if (dut->grant != 0x1 || !dut->grant_valid) {
            std::cout << "ERROR: Expected grant = 0x1 with grant_valid = 1" << std::endl;
            test1_pass = false;
        }
    }
    
    // Report test 1 results
    if (test1_pass) {
        std::cout << "Test 1 PASSED: Low index priority working correctly" << std::endl;
        tests_passed++;
    } else {
        std::cout << "Test 1 FAILED: Incorrect arbitration behavior" << std::endl;
        all_tests_pass = false;
    }
    
    // Test case 2: Change priorities to favor higher indices
    std::cout << "\nTest 2: Changing priorities - higher index has higher priority" << std::endl;
    
    // Reset again
    dut->rst = 1;
    for (int i = 0; i < 5; i++) {
        tick(dut, tfp);
    }
    dut->rst = 0;
    
    // Reset priority matrix
    priority_matrix_val = 0;
    
    // Reverse the priorities
    for (int i = 0; i < NUM_REQUESTORS; i++) {
        for (int j = 0; j < NUM_REQUESTORS; j++) {
            int base_index = (i*NUM_REQUESTORS + j)*PRIORITY_WIDTH;
            uint64_t priority;
            
            if (i == j) {
                // Equal priority for self comparison
                priority = 1; 
            } else if (i > j) {
                // Higher indices have higher priority
                priority = 2;
            } else {
                priority = 0;
            }
            
            // Set the priority in the matrix
            priority_matrix_val |= (priority << base_index);
        }
    }
    
    // Update the priority matrix
    dut->priority_matrix = priority_matrix_val;
    dut->req = 0xF;
    dut->eval();
    
    // Run with the same requests but new priorities
    bool test2_pass = true;
    for (int i = 0; i < 10; i++) {
        tick(dut, tfp);
        
        std::cout << "Cycle " << i << ": req = 0x" << std::hex << (int)dut->req
                  << ", grant = 0x" << (int)dut->grant
                  << ", grant_valid = " << (int)dut->grant_valid << std::endl;
        
        // Verify that the correct grant is given (highest requester should get grant)
        if (dut->grant != 0x8 || !dut->grant_valid) {
            std::cout << "ERROR: Expected grant = 0x8 with grant_valid = 1" << std::endl;
            test2_pass = false;
        }
    }
    
    // Report test 2 results
    if (test2_pass) {
        std::cout << "Test 2 PASSED: High index priority working correctly" << std::endl;
        tests_passed++;
    } else {
        std::cout << "Test 2 FAILED: Incorrect arbitration behavior" << std::endl;
        all_tests_pass = false;
    }
    
    // Test case 3: Test fairness with equal priorities
    std::cout << "\nTest 3: Fairness with equal priorities" << std::endl;
    
    // Reset again
    dut->rst = 1;
    for (int i = 0; i < 5; i++) {
        tick(dut, tfp);
    }
    dut->rst = 0;
    
    // Set all priorities equal
    priority_matrix_val = 0;
    for (int i = 0; i < NUM_REQUESTORS; i++) {
        for (int j = 0; j < NUM_REQUESTORS; j++) {
            int base_index = (i*NUM_REQUESTORS + j)*PRIORITY_WIDTH;
            // All equal priority
            uint64_t priority = 1;
            priority_matrix_val |= (priority << base_index);
        }
    }
    
    // Update the priority matrix
    dut->priority_matrix = priority_matrix_val;
    dut->req = 0xF;
    dut->eval();
    
    // Run with the same requests but equal priorities
    // This should demonstrate fairness over time
    bool test3_pass = true;
    
    // When all priorities are equal, behavior may vary depending on implementation
    // Here we'll just check that grant is valid and one of the requesters
    for (int i = 0; i < 20; i++) {
        tick(dut, tfp);
        
        std::cout << "Cycle " << i << ": req = 0x" << std::hex << (int)dut->req
                  << ", grant = 0x" << (int)dut->grant
                  << ", grant_valid = " << (int)dut->grant_valid << std::endl;
        
        // Verify that some valid grant is given
        if ((dut->grant & dut->req) == 0 || !dut->grant_valid) {
            std::cout << "ERROR: Grant should be one of the requesters and grant_valid should be 1" << std::endl;
            test3_pass = false;
        }
    }
    
    // Report test 3 results
    if (test3_pass) {
        std::cout << "Test 3 PASSED: Equal priority arbitration working correctly" << std::endl;
        tests_passed++;
    } else {
        std::cout << "Test 3 FAILED: Incorrect arbitration behavior" << std::endl;
        all_tests_pass = false;
    }
    
    // Test case 4: Test with changing request patterns
    std::cout << "\nTest 4: Changing request patterns" << std::endl;
    
    // Reset again
    dut->rst = 1;
    for (int i = 0; i < 5; i++) {
        tick(dut, tfp);
    }
    dut->rst = 0;
    
    // Use the same priority matrix from test 3 (all equal)
    dut->priority_matrix = priority_matrix_val;
    
    // Cycle through different request patterns
    uint8_t request_patterns[] = {0x1, 0x3, 0x7, 0xF, 0xE, 0xC, 0x8, 0x0};
    bool test4_pass = true;
    
    for (int p = 0; p < 8; p++) {
        dut->req = request_patterns[p];
        dut->eval();
        
        // Run for a couple of cycles for each pattern
        for (int i = 0; i < 2; i++) {
            tick(dut, tfp);
        }
        
        std::cout << "Pattern " << p << ": req = 0x" << std::hex << (int)dut->req
                  << ", grant = 0x" << (int)dut->grant
                  << ", grant_valid = " << (int)dut->grant_valid << std::endl;
        
        // Check that grant is valid only when there's at least one request
        if (dut->req == 0) {
            if (dut->grant_valid) {
                std::cout << "ERROR: grant_valid should be 0 when no requests are active" << std::endl;
                test4_pass = false;
            }
        } else {
            if (!dut->grant_valid || (dut->grant & dut->req) == 0) {
                std::cout << "ERROR: grant should be one of the active requesters and grant_valid should be 1" << std::endl;
                test4_pass = false;
            }
        }
    }
    
    // Report test 4 results
    if (test4_pass) {
        std::cout << "Test 4 PASSED: Changing request patterns handled correctly" << std::endl;
        tests_passed++;
    } else {
        std::cout << "Test 4 FAILED: Incorrect arbitration behavior with changing requests" << std::endl;
        all_tests_pass = false;
    }
    
    // Cleanup
    tfp->close();
    delete tfp;
    delete dut;
    
    // Print standardized test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (all_tests_pass ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << tests_passed << " of " << total_tests << std::endl;
    
    return 0;
} 