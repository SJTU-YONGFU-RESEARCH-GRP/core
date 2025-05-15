#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vradix4_booth_multiplier.h"

#define MAX_SIM_TIME 1000
vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize Verilated modules
    Vradix4_booth_multiplier* dut = new Vradix4_booth_multiplier;
    
    // Initialize VCD tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("radix4_booth_multiplier_trace.vcd");
    
    // Test vectors
    const int num_tests = 6;
    int8_t multiplier[num_tests] = {5, -5, 7, -7, 0, 127};
    int8_t multiplicand[num_tests] = {3, 3, -4, -4, 8, -128};
    int16_t expected[num_tests] = {15, -15, -28, 28, 0, -16256};
    
    bool all_tests_passed = true;
    
    // Run tests
    for (int test = 0; test < num_tests; test++) {
        std::cout << "Test " << test + 1 << ": " << (int)multiplier[test] << " * " 
                 << (int)multiplicand[test] << " = " << expected[test] << std::endl;
                 
        // Reset
        dut->rst_n = 0;
        dut->start = 0;
        dut->clk = 0;
        dut->eval();
        tfp->dump(sim_time++);
        dut->clk = 1;
        dut->eval();
        tfp->dump(sim_time++);
        
        // Release reset
        dut->rst_n = 1;
        dut->multiplier = multiplier[test];
        dut->multiplicand = multiplicand[test];
        dut->clk = 0;
        dut->eval();
        tfp->dump(sim_time++);
        dut->clk = 1;
        dut->eval();
        tfp->dump(sim_time++);
        
        // Start multiplication
        dut->start = 1;
        dut->clk = 0;
        dut->eval();
        tfp->dump(sim_time++);
        dut->clk = 1;
        dut->eval();
        tfp->dump(sim_time++);
        
        // De-assert start
        dut->start = 0;
        
        // Wait for done signal
        bool timeout = true;
        for (int i = 0; i < 50; i++) {
            dut->clk = 0;
            dut->eval();
            tfp->dump(sim_time++);
            dut->clk = 1;
            dut->eval();
            tfp->dump(sim_time++);
            
            if (dut->done) {
                timeout = false;
                break;
            }
        }
        
        if (timeout) {
            std::cerr << "Error: Timeout waiting for multiplication to complete" << std::endl;
            all_tests_passed = false;
            continue;
        }
        
        // Check result
        int16_t result = dut->product;
        if (result != expected[test]) {
            std::cerr << "Error: Expected " << expected[test] << ", got " << result << std::endl;
            all_tests_passed = false;
        } else {
            std::cout << "Test passed!" << std::endl;
        }
        
        // Additional clock cycles to see the done state
        for (int i = 0; i < 5; i++) {
            dut->clk = 0;
            dut->eval();
            tfp->dump(sim_time++);
            dut->clk = 1;
            dut->eval();
            tfp->dump(sim_time++);
        }
    }
    
    if (all_tests_passed) {
        std::cout << "\nAll tests passed!" << std::endl;
    } else {
        std::cout << "\nSome tests failed!" << std::endl;
        return 1;
    }
    
    // Cleanup
    tfp->close();
    delete tfp;
    delete dut;
    
    return 0;
} 