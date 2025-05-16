#include "Vpower_domain_controller.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>
#include <iomanip>
#include <vector>
#include <bitset>

// Function to print domain status
void print_domains(int num_domains, uint32_t power_on, uint32_t isolation, uint32_t reset_n, uint32_t clock, uint32_t status, uint32_t transition) {
    std::cout << "Domain   | Power | Isolation | Reset | Clock | Status | Transition" << std::endl;
    std::cout << "-----------------------------------------------------------" << std::endl;
    
    for (int i = 0; i < num_domains; i++) {
        std::cout << "Domain " << i << " | ";
        std::cout << "  " << ((power_on >> i) & 1) << "   | ";
        std::cout << "    " << ((isolation >> i) & 1) << "     | ";
        std::cout << "  " << ((reset_n >> i) & 1) << "   | ";
        std::cout << "  " << ((clock >> i) & 1) << "   | ";
        std::cout << "  " << ((status >> i) & 1) << "   | ";
        std::cout << "    " << ((transition >> i) & 1) << std::endl;
    }
    std::cout << std::endl;
}

void test_power_transitions(std::unique_ptr<Vpower_domain_controller>& dut, VerilatedVcdC* tfp, vluint64_t& sim_time, uint8_t domain_count) {
    // Initialize with all domains off
    uint8_t domain_enable = 0;
    uint8_t domain_isolate = 0;
    
    // Test Case 1: Power up all domains
    std::cout << "Test Case 1: Powering up all domains" << std::endl;
    domain_enable = (1 << domain_count) - 1; // All 1s
    
    dut->domain_enable = domain_enable;
    dut->domain_isolate = domain_isolate;
    dut->start_transition = 1;
    
    // Clock the design until transition completes
    int cycle_count = 0;
    bool pass = false;
    
    while (cycle_count < 100) { // Timeout after 100 cycles
        // Toggle clock
        dut->clk = 0;
        dut->eval();
        if (tfp) tfp->dump(sim_time++);
        
        dut->clk = 1;
        dut->eval();
        if (tfp) tfp->dump(sim_time++);
        
        // Clear start signal after first cycle
        if (cycle_count > 0)
            dut->start_transition = 0;
        
        cycle_count++;
        
        // Check if transition is complete
        if (dut->transition_done && (cycle_count > 1)) {
            std::cout << "Transition completed after " << cycle_count << " clock cycles." << std::endl;
            print_domains(domain_count, dut->domain_power_on, dut->domain_isolation_on, 
                          dut->domain_reset_n, dut->domain_clock_on, dut->domain_status, 
                          dut->domain_transition);
                          
            // Verify domains are powered on correctly
            pass = (dut->domain_status == domain_enable) && 
                   (dut->domain_power_on == domain_enable) &&
                   (dut->domain_clock_on == domain_enable) &&
                   (dut->domain_reset_n == domain_enable) &&
                   (dut->domain_transition == 0);
            
            break;
        }
    }
    
    // Test Case 2: Power down specific domains
    std::cout << "Test Case 2: Powering down domains 0 and 2" << std::endl;
    domain_enable = 0x0A; // Enable only domains 1 and 3 (for 4 domains)
    
    dut->domain_enable = domain_enable;
    dut->start_transition = 1;
    
    // Clock the design until transition completes
    cycle_count = 0;
    bool pass2 = false;
    
    while (cycle_count < 100) { // Timeout after 100 cycles
        // Toggle clock
        dut->clk = 0;
        dut->eval();
        if (tfp) tfp->dump(sim_time++);
        
        dut->clk = 1;
        dut->eval();
        if (tfp) tfp->dump(sim_time++);
        
        // Clear start signal after first cycle
        if (cycle_count > 0)
            dut->start_transition = 0;
        
        cycle_count++;
        
        // Check if transition is complete
        if (dut->transition_done && (cycle_count > 1)) {
            std::cout << "Transition completed after " << cycle_count << " clock cycles." << std::endl;
            print_domains(domain_count, dut->domain_power_on, dut->domain_isolation_on, 
                          dut->domain_reset_n, dut->domain_clock_on, dut->domain_status, 
                          dut->domain_transition);
                          
            // Verify domains are powered as expected
            pass2 = (dut->domain_status == domain_enable) && 
                    (dut->domain_power_on == domain_enable) &&
                    (dut->domain_clock_on == domain_enable) &&
                    (dut->domain_reset_n == domain_enable) &&
                    (dut->domain_transition == 0);
            
            break;
        }
    }
    
    // Test Case 3: Test domain isolation
    std::cout << "Test Case 3: Testing domain isolation" << std::endl;
    domain_enable = 0x0F; // Enable all domains
    domain_isolate = 0x05; // Isolate domains 0 and 2
    
    dut->domain_enable = domain_enable;
    dut->domain_isolate = domain_isolate;
    dut->start_transition = 1;
    
    // Clock the design until transition completes
    cycle_count = 0;
    bool pass3 = false;
    
    while (cycle_count < 100) { // Timeout after 100 cycles
        // Toggle clock
        dut->clk = 0;
        dut->eval();
        if (tfp) tfp->dump(sim_time++);
        
        dut->clk = 1;
        dut->eval();
        if (tfp) tfp->dump(sim_time++);
        
        // Clear start signal after first cycle
        if (cycle_count > 0)
            dut->start_transition = 0;
        
        cycle_count++;
        
        // Check if transition is complete
        if (dut->transition_done && (cycle_count > 1)) {
            std::cout << "Transition completed after " << cycle_count << " clock cycles." << std::endl;
            print_domains(domain_count, dut->domain_power_on, dut->domain_isolation_on, 
                          dut->domain_reset_n, dut->domain_clock_on, dut->domain_status, 
                          dut->domain_transition);
                          
            // Verify domains are powered on and isolation is applied correctly
            pass3 = (dut->domain_status == domain_enable) && 
                    (dut->domain_power_on == domain_enable) &&
                    (dut->domain_clock_on == domain_enable) &&
                    (dut->domain_reset_n == domain_enable) &&
                    (dut->domain_isolation_on == domain_isolate) &&
                    (dut->domain_transition == 0);
            
            break;
        }
    }
    
    // Final results
    bool all_tests_pass = pass && pass2 && pass3;
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (all_tests_pass ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << (all_tests_pass ? "3" : "0") << " of 3" << std::endl;
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of our module under test
    std::unique_ptr<Vpower_domain_controller> power_controller = std::make_unique<Vpower_domain_controller>();
    
    // Initialize VCD trace file
    Verilated::traceEverOn(true);
    std::unique_ptr<VerilatedVcdC> tfp = std::make_unique<VerilatedVcdC>();
    power_controller->trace(tfp.get(), 99);  // Trace 99 levels of hierarchy
    tfp->open("power_domain_controller_sim.vcd");
    
    // Initialize simulation time
    vluint64_t sim_time = 0;
    
    // Initialize inputs
    power_controller->clk = 0;
    power_controller->rst_n = 0;
    power_controller->domain_enable = 0;
    power_controller->domain_isolate = 0;
    power_controller->start_transition = 0;
    
    // Reset the DUT
    power_controller->rst_n = 0;
    power_controller->clk = 0;
    power_controller->eval();
    if (tfp) tfp->dump(sim_time++);
    
    power_controller->clk = 1;
    power_controller->eval();
    if (tfp) tfp->dump(sim_time++);
    
    // Release reset
    power_controller->rst_n = 1;
    power_controller->clk = 0;
    power_controller->eval();
    if (tfp) tfp->dump(sim_time++);
    
    power_controller->clk = 1;
    power_controller->eval();
    if (tfp) tfp->dump(sim_time++);
    
    // Run tests with 4 domains
    const uint8_t DOMAIN_COUNT = 4;
    test_power_transitions(power_controller, tfp.get(), sim_time, DOMAIN_COUNT);
    
    // Cleanup
    tfp->close();
    power_controller->final();
    
    return 0;
} 