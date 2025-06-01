#include "Vbinary_to_gray.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>
#include <bitset>
#include <vector>

// Function to convert binary to gray code for verification
template<typename T>
T binary_to_gray(T binary) {
    return binary ^ (binary >> 1);
}

void check_conversion(std::unique_ptr<Vbinary_to_gray>& converter, VerilatedVcdC* tfp, vluint64_t& sim_time, bool& all_tests_pass, int& tests_passed, int& total_tests) {
    // Get the WIDTH parameter from the design
    const int WIDTH = 4; // Must match the parameter in the Verilog module
    const int MAX_VALUE = (1 << WIDTH) - 1;
    
    // Set total number of tests
    total_tests = MAX_VALUE + 1;
    
    std::cout << "Testing binary to Gray code conversion for " << WIDTH << "-bit values:" << std::endl;
    std::cout << "Binary\tGray (Expected)\tGray (Actual)\tResult" << std::endl;
    
    all_tests_pass = true;
    tests_passed = 0;
    
    // Test all possible input values
    for (int binary = 0; binary <= MAX_VALUE; binary++) {
        // Set input
        converter->binary_in = binary;
        
        // Evaluate the model
        converter->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        // Calculate expected Gray code
        int expected_gray = binary_to_gray(binary);
        int actual_gray = converter->gray_out;
        
        // Print results
        std::cout << std::bitset<8>(binary).to_string().substr(8-WIDTH) << "\t"
                  << std::bitset<8>(expected_gray).to_string().substr(8-WIDTH) << "\t\t"
                  << std::bitset<8>(actual_gray).to_string().substr(8-WIDTH) << "\t\t";
        
        if (expected_gray == actual_gray) {
            std::cout << "PASS" << std::endl;
            tests_passed++;
        } else {
            std::cout << "FAIL" << std::endl;
            all_tests_pass = false;
        }
    }
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of our module under test
    std::unique_ptr<Vbinary_to_gray> converter = std::make_unique<Vbinary_to_gray>();
    
    // Initialize VCD trace file
    Verilated::traceEverOn(true);
    std::unique_ptr<VerilatedVcdC> tfp = std::make_unique<VerilatedVcdC>();
    converter->trace(tfp.get(), 99);  // Trace 99 levels of hierarchy
    tfp->open("binary_to_gray_sim.vcd");
    
    // Initialize simulation time
    vluint64_t sim_time = 0;
    
    // Test tracking variables
    bool all_tests_pass = true;
    int tests_passed = 0;
    int total_tests = 0;
    
    // Run tests
    check_conversion(converter, tfp.get(), sim_time, all_tests_pass, tests_passed, total_tests);
    
    // Print standardized test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (all_tests_pass ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << tests_passed << " of " << total_tests << std::endl;
    
    // Cleanup
    tfp->close();
    converter->final();
    
    return 0;
} 