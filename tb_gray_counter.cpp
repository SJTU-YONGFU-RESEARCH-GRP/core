#include "Vgray_counter.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>
#include <vector>
#include <bitset>

// Function to convert binary to Gray code for verification
uint8_t binary_to_gray(uint8_t binary) {
    return binary ^ (binary >> 1);
}

void check_operation(std::unique_ptr<Vgray_counter>& counter, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    // Reset the counter
    counter->rst_n = 0;
    counter->clk = 0;
    counter->enable = 0;
    counter->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
    
    counter->clk = 1;
    counter->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
    
    counter->rst_n = 1;
    counter->enable = 1;
    
    // Run the counter for several cycles and verify the Gray code output
    std::cout << "Testing Gray Code Counter:" << std::endl;
    std::cout << "Binary\tExpected Gray\tActual Gray\tResult" << std::endl;
    
    for (int i = 0; i < 16; i++) {
        // Clock low
        counter->clk = 0;
        counter->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        // Clock high
        counter->clk = 1;
        counter->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        // Calculate expected Gray code
        uint8_t binary_value = counter->binary_out;
        uint8_t expected_gray = binary_to_gray(binary_value);
        uint8_t actual_gray = counter->gray_out;
        
        // Verify the result
        bool match = (expected_gray == actual_gray);
        
        std::cout << std::bitset<4>(binary_value) << "\t" 
                  << std::bitset<4>(expected_gray) << "\t\t" 
                  << std::bitset<4>(actual_gray) << "\t\t"
                  << (match ? "PASS" : "FAIL") << std::endl;
        
        if (!match) {
            std::cout << "ERROR: Gray code mismatch at binary value " << static_cast<int>(binary_value) << std::endl;
        }
    }
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of our module under test
    std::unique_ptr<Vgray_counter> counter = std::make_unique<Vgray_counter>();
    
    // Initialize VCD trace file
    Verilated::traceEverOn(true);
    std::unique_ptr<VerilatedVcdC> tfp = std::make_unique<VerilatedVcdC>();
    counter->trace(tfp.get(), 99);  // Trace 99 levels of hierarchy
    tfp->open("gray_counter_sim.vcd");
    
    // Initialize simulation time
    vluint64_t sim_time = 0;
    
    // Run tests
    check_operation(counter, tfp.get(), sim_time);
    
    // Cleanup
    tfp->close();
    counter->final();
    
    std::cout << "Simulation completed successfully!" << std::endl;
    return 0;
}