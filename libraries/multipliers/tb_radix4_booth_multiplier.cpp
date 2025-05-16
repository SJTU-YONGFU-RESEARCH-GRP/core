#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vradix4_booth_multiplier.h"

#define MAX_SIM_TIME 1000
vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of our module under test
    std::unique_ptr<Vradix4_booth_multiplier> multiplier = std::make_unique<Vradix4_booth_multiplier>();
    
    // Initialize VCD trace file
    Verilated::traceEverOn(true);
    std::unique_ptr<VerilatedVcdC> tfp = std::make_unique<VerilatedVcdC>();
    multiplier->trace(tfp.get(), 99);  // Trace 99 levels of hierarchy
    tfp->open("radix4_booth_multiplier_sim.vcd");
    
    // Initialize simulation time
    vluint64_t sim_time = 0;
    
    // Track test results
    int total_tests = 0;
    int passed_tests = 0;
    
    // Test cases
    std::vector<std::pair<int8_t, int8_t>> test_cases = {
        {5, 7},      // Simple positive multiplication
        {-3, 4},     // Negative * positive
        {6, -2},     // Positive * negative
        {-5, -5},    // Negative * negative
        {0, 10},     // Zero case
        {1, 1},      // Identity
        {-1, -1},    // Identity with negatives
        {127, 2},    // Large positive
        {-128, 1},   // Minimum negative value
        {64, 2}      // Test with powers of 2
    };
    
    // Run test cases
    for (const auto& test : test_cases) {
        total_tests++;
        int8_t a = test.first;
        int8_t b = test.second;
        int16_t expected = (int16_t)a * (int16_t)b;  // Cast to 16-bit for correct multiplication
        
        // Reset the multiplier
        multiplier->rst_n = 0;
        multiplier->clk = 0;
        multiplier->start = 0;
        multiplier->multiplicand = a;
        multiplier->multiplier = b;
        multiplier->eval();
        if (tfp) tfp->dump(sim_time++);
        
        // Release reset
        multiplier->rst_n = 1;
        multiplier->clk = 1;
        multiplier->eval();
        if (tfp) tfp->dump(sim_time++);
        
        // Start multiplication
        multiplier->start = 1;
        multiplier->clk = 0;
        multiplier->eval();
        if (tfp) tfp->dump(sim_time++);
        
        multiplier->clk = 1;
        multiplier->eval();
        if (tfp) tfp->dump(sim_time++);
        
        // Clear start signal
        multiplier->start = 0;
        
        // Wait for done signal
        bool timeout = false;
        int cycles = 0;
        const int MAX_CYCLES = 100;
        
        while (!multiplier->done && cycles < MAX_CYCLES) {
            multiplier->clk = !multiplier->clk;
            multiplier->eval();
            if (tfp) tfp->dump(sim_time++);
            
            if (multiplier->clk) cycles++;
        }
        
        if (cycles >= MAX_CYCLES) {
            std::cout << "Timeout waiting for multiplication " << a << " * " << b << std::endl;
            timeout = true;
        }
        
        // Check result
        int16_t result = multiplier->product;  // Changed to int16_t to match module output width
        bool pass = !timeout && (result == expected);
        
        std::cout << a << " * " << b << " = " << result 
                  << " (Expected: " << expected << ") - "
                  << (pass ? "PASS" : "FAIL") << std::endl;
        
        if (pass) passed_tests++;
    }
    
    // Print standardized test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (passed_tests == total_tests ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << passed_tests << " of " << total_tests << std::endl;
    
    // Cleanup
    tfp->close();
    
    return (passed_tests == total_tests) ? 0 : 1;
} 