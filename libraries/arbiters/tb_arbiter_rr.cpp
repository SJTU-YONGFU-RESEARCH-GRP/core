#include "Varbiter_rr.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>
#include <vector>
#include <bitset>

// Helper function to advance clock cycle
void tick(std::unique_ptr<Varbiter_rr>& arbiter, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    // Rising edge
    arbiter->clk = 0;
    arbiter->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
    
    // Falling edge
    arbiter->clk = 1;
    arbiter->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
}

// Test round-robin priority mode
bool test_round_robin(std::unique_ptr<Varbiter_rr>& arbiter, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    std::cout << "\n=== Testing Round-Robin Priority Mode ===\n" << std::endl;
    
    // Reset the arbiter
    arbiter->rst_n = 0;
    tick(arbiter, tfp, sim_time);
    arbiter->rst_n = 1;
    
    // Track if all tests pass
    bool all_tests_pass = true;
    
    // Test round-robin with all ports requesting
    std::cout << "Testing round-robin with all ports requesting:" << std::endl;
    arbiter->request = 0b1111;
    
    // Expected grants for each cycle in round-robin
    uint8_t expected_grants[4] = {0b1000, 0b0100, 0b0010, 0b0001};
    int grant_index = 0;
    
    // Should cycle through all ports
    for (int i = 0; i < 8; i++) {
        tick(arbiter, tfp, sim_time);
        std::cout << "Cycle " << i << " - Request: " << std::bitset<4>(arbiter->request) 
                  << " -> Grant: " << std::bitset<4>(arbiter->grant) << std::endl;
        
        // Verify round-robin behavior
        if (i >= 0 && i < 4) { // First round
            if (arbiter->grant != expected_grants[i]) {
                std::cout << "ERROR: Unexpected grant in round-robin cycle " << i << std::endl;
                all_tests_pass = false;
            }
        } else if (i >= 4 && i < 8) { // Second round
            if (arbiter->grant != expected_grants[i-4]) {
                std::cout << "ERROR: Unexpected grant in round-robin cycle " << i << std::endl;
                all_tests_pass = false;
            }
        }
    }
    
    // Test round-robin with alternating request patterns
    std::cout << "\nTesting round-robin with alternating request patterns:" << std::endl;
    std::vector<uint8_t> alternating_requests = {
        0b0101,  // Ports 0 and 2 requesting
        0b1010,  // Ports 1 and 3 requesting
        0b0101,  // Ports 0 and 2 requesting
        0b1010,  // Ports 1 and 3 requesting
        0b0101,  // Ports 0 and 2 requesting
        0b1010   // Ports 1 and 3 requesting
    };
    
    for (size_t i = 0; i < alternating_requests.size(); i++) {
        arbiter->request = alternating_requests[i];
        tick(arbiter, tfp, sim_time);
        
        std::cout << "Request: " << std::bitset<4>(arbiter->request) 
                  << " -> Grant: " << std::bitset<4>(arbiter->grant) << std::endl;
                  
        // For this test, we'll just check that a valid port gets the grant
        bool valid_grant = false;
        if (alternating_requests[i] == 0b0101) {
            valid_grant = (arbiter->grant == 0b0001 || arbiter->grant == 0b0100);
        } else if (alternating_requests[i] == 0b1010) {
            valid_grant = (arbiter->grant == 0b0010 || arbiter->grant == 0b1000);
        }
        
        if (!valid_grant) {
            std::cout << "ERROR: Invalid grant for the given request!" << std::endl;
            all_tests_pass = false;
        }
    }
    
    return all_tests_pass;
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of our module under test
    std::unique_ptr<Varbiter_rr> arbiter = std::make_unique<Varbiter_rr>();
    
    // Initialize VCD trace file
    Verilated::traceEverOn(true);
    std::unique_ptr<VerilatedVcdC> tfp = std::make_unique<VerilatedVcdC>();
    arbiter->trace(tfp.get(), 99);  // Trace 99 levels of hierarchy
    tfp->open("arbiter_rr_sim.vcd");
    
    // Initialize simulation time
    vluint64_t sim_time = 0;
    
    // Test tracking variables
    bool all_tests_pass = true;
    int tests_passed = 0;
    int total_tests = 1; // Round-robin test
    
    // Test round-robin priority mode
    bool round_robin_passed = test_round_robin(arbiter, tfp.get(), sim_time);
    if (round_robin_passed) {
        tests_passed++;
        std::cout << "\nRound-Robin Tests: PASSED" << std::endl;
    } else {
        all_tests_pass = false;
        std::cout << "\nRound-Robin Tests: FAILED" << std::endl;
    }
    
    // Cleanup
    tfp->close();
    arbiter->final();
    
    // Print standardized test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (all_tests_pass ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << tests_passed << " of " << total_tests << std::endl;
    
    return 0;
} 