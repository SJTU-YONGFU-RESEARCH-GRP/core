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
void test_round_robin(std::unique_ptr<Varbiter_rr>& arbiter, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    std::cout << "\n=== Testing Round-Robin Priority Mode ===\n" << std::endl;
    
    // Reset the arbiter
    arbiter->rst_n = 0;
    tick(arbiter, tfp, sim_time);
    arbiter->rst_n = 1;
    
    // Test round-robin with all ports requesting
    std::cout << "Testing round-robin with all ports requesting:" << std::endl;
    arbiter->request = 0b1111;
    
    // Should cycle through all ports
    for (int i = 0; i < 8; i++) {
        tick(arbiter, tfp, sim_time);
        std::cout << "Cycle " << i << " - Request: " << std::bitset<4>(arbiter->request) 
                  << " -> Grant: " << std::bitset<4>(arbiter->grant) << std::endl;
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
    }
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
    
    // Test round-robin priority mode
    test_round_robin(arbiter, tfp.get(), sim_time);
    
    // Cleanup
    tfp->close();
    arbiter->final();
    
    std::cout << "\nRound-robin simulation completed successfully!" << std::endl;
    return 0;
} 