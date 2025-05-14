#include "Vfair_priority_arbiter.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>
#include <vector>
#include <iomanip>
#include <bitset>

// Test case structure
struct TestCase {
    std::string name;
    uint32_t request;
    uint32_t priorities;
    uint32_t expected_grant;
    uint32_t expected_grant_idx;
};

void run_test(std::unique_ptr<Vfair_priority_arbiter>& arb, VerilatedVcdC* tfp, vluint64_t& sim_time, const TestCase& test) {
    std::cout << "\nRunning test: " << test.name << std::endl;
    
    // Parameters from the design
    const int NUM_REQUESTERS = 4;
    const int PRIORITY_WIDTH = 2;
    
    // Apply inputs for this test
    arb->request = test.request;
    arb->priorities = test.priorities;
    
    // Clock low
    arb->clk = 0;
    arb->eval();
    if (tfp) tfp->dump(sim_time++);
    
    // Clock high
    arb->clk = 1;
    arb->eval();
    if (tfp) tfp->dump(sim_time++);
    
    // Output status
    std::cout << "Request: ";
    for (int i = NUM_REQUESTERS - 1; i >= 0; i--) {
        std::cout << ((test.request >> i) & 1);
    }
    std::cout << std::endl;
    
    std::cout << "Priorities: ";
    for (int i = 0; i < NUM_REQUESTERS; i++) {
        std::cout << "[" << i << "]=" 
                  << ((test.priorities >> (i * PRIORITY_WIDTH)) & ((1 << PRIORITY_WIDTH) - 1))
                  << " ";
    }
    std::cout << std::endl;
    
    std::cout << "Grant: ";
    for (int i = NUM_REQUESTERS - 1; i >= 0; i--) {
        std::cout << ((arb->grant >> i) & 1);
    }
    std::cout << std::endl;
    
    std::cout << "Grant Index: " << static_cast<int>(arb->grant_idx) << std::endl;
    std::cout << "Valid: " << (arb->valid ? "true" : "false") << std::endl;
    
    // Verify the outputs
    bool passed = true;
    
    if (arb->grant != test.expected_grant) {
        std::cout << "ERROR: Grant mismatch. Expected: ";
        for (int i = NUM_REQUESTERS - 1; i >= 0; i--) {
            std::cout << ((test.expected_grant >> i) & 1);
        }
        std::cout << ", Got: ";
        for (int i = NUM_REQUESTERS - 1; i >= 0; i--) {
            std::cout << ((arb->grant >> i) & 1);
        }
        std::cout << std::endl;
        passed = false;
    }
    
    if (arb->grant_idx != test.expected_grant_idx) {
        std::cout << "ERROR: Grant index mismatch. Expected: " 
                  << static_cast<int>(test.expected_grant_idx)
                  << ", Got: " << static_cast<int>(arb->grant_idx) << std::endl;
        passed = false;
    }
    
    if (passed) {
        std::cout << "Test PASSED!" << std::endl;
    } else {
        std::cout << "Test FAILED!" << std::endl;
    }
}

void test_round_robin(std::unique_ptr<Vfair_priority_arbiter>& arb, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    std::cout << "\nTesting Round-Robin Functionality" << std::endl;
    
    // Parameters from the design
    const int NUM_REQUESTERS = 4;
    const int PRIORITY_WIDTH = 2;
    
    // Set equal priorities for all requesters
    uint32_t priorities = 0; // All priorities set to 1
    for (int i = 0; i < NUM_REQUESTERS; i++) {
        priorities |= (1 << (i * PRIORITY_WIDTH));
    }
    
    // Request pattern - all requesters asking
    uint32_t request = 0xF; // All requesters asking
    
    std::cout << "Initial state: All requesters with equal priority (1)" << std::endl;
    std::cout << "Priorities: ";
    for (int i = 0; i < NUM_REQUESTERS; i++) {
        std::cout << "[" << i << "]=" 
                  << ((priorities >> (i * PRIORITY_WIDTH)) & ((1 << PRIORITY_WIDTH) - 1))
                  << " ";
    }
    std::cout << std::endl;
    
    // Store the expected sequence for verification
    int expected_sequence[8] = {1, 2, 3, 0, 1, 2, 3, 0};
    
    for (int cycle = 0; cycle < 8; cycle++) {
        std::cout << "\nCycle " << cycle << std::endl;
        
        // Apply inputs
        arb->request = request;
        arb->priorities = priorities;
        
        // Clock low
        arb->clk = 0;
        arb->eval();
        if (tfp) tfp->dump(sim_time++);
        
        // Clock high
        arb->clk = 1;
        arb->eval();
        if (tfp) tfp->dump(sim_time++);
        
        // Display results
        std::cout << "Request: " << std::bitset<NUM_REQUESTERS>(request) << std::endl;
        std::cout << "Grant: " << std::bitset<NUM_REQUESTERS>(arb->grant) << std::endl;
        std::cout << "Grant Index: " << static_cast<int>(arb->grant_idx) << std::endl;
        std::cout << "Valid: " << (arb->valid ? "true" : "false") << std::endl;
        
        // Verify round-robin behavior
        if (arb->grant_idx != expected_sequence[cycle]) {
            std::cout << "ERROR: Round-robin failed. Expected grant to requester " 
                      << expected_sequence[cycle] << ", but got " 
                      << static_cast<int>(arb->grant_idx) << std::endl;
        }
    }
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of our module under test
    std::unique_ptr<Vfair_priority_arbiter> arb = std::make_unique<Vfair_priority_arbiter>();
    
    // Initialize VCD trace file
    Verilated::traceEverOn(true);
    std::unique_ptr<VerilatedVcdC> tfp = std::make_unique<VerilatedVcdC>();
    arb->trace(tfp.get(), 99);  // Trace 99 levels of hierarchy
    tfp->open("fair_priority_arbiter_sim.vcd");
    
    // Initialize simulation time
    vluint64_t sim_time = 0;
    
    // Reset the module
    arb->rst_n = 0;
    
    // Clock cycle for reset
    arb->clk = 0;
    arb->eval();
    if (tfp) tfp->dump(sim_time++);
    
    arb->clk = 1;
    arb->eval();
    if (tfp) tfp->dump(sim_time++);
    
    // Release reset
    arb->rst_n = 1;
    
    // Setup test cases
    std::vector<TestCase> test_cases = {
        // name, request, priorities, expected_grant, expected_grant_idx
        {"Single Request", 
         0b0001,           // Only requester 0 active
         0b00010001,       // Equal priorities (1,1,0,0)
         0b0001,           // Grant to requester 0
         0},
         
        {"Highest Priority",
         0b1111,           // All requesters active
         0b11000100,       // Priorities: 0=0, 1=1, 2=0, 3=3
         0b1000,           // Grant to requester 3 (highest priority)
         3},
         
        {"Equal Priority, First Request",
         0b0110,           // Requesters 1 and 2 active
         0b00010001,       // Equal priorities (1,1,0,0)
         0b0100,           // Grant to requester 2 (due to round-robin order starting after reset)
         2}
    };
    
    // Run individual test cases
    for (const auto& test : test_cases) {
        run_test(arb, tfp.get(), sim_time, test);
        
        // Add additional clock cycles between tests
        for (int i = 0; i < 2; i++) {
            arb->clk = 0;
            arb->eval();
            if (tfp) tfp->dump(sim_time++);
            
            arb->clk = 1;
            arb->eval();
            if (tfp) tfp->dump(sim_time++);
        }
    }
    
    // Reset for round-robin test
    arb->rst_n = 0;
    arb->clk = 0;
    arb->eval();
    if (tfp) tfp->dump(sim_time++);
    
    arb->clk = 1;
    arb->eval();
    if (tfp) tfp->dump(sim_time++);
    
    arb->rst_n = 1;
    
    // Test round-robin behavior
    test_round_robin(arb, tfp.get(), sim_time);
    
    // Cleanup
    tfp->close();
    arb->final();
    
    std::cout << "\nSimulation completed successfully!" << std::endl;
    return 0;
} 