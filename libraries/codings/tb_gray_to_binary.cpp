#include "Vgray_to_binary.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>
#include <bitset>
#include <vector>

// Function to convert gray code to binary for verification
template<typename T>
T gray_to_binary(T gray) {
    T binary = 0;
    for (T mask = gray; mask; mask >>= 1) {
        binary ^= mask;
    }
    return binary;
}

void check_conversion(std::unique_ptr<Vgray_to_binary>& converter, VerilatedVcdC* tfp, vluint64_t& sim_time, bool& all_tests_pass, int& tests_passed, int& total_tests) {
    // Get the WIDTH parameter from the design
    const int WIDTH = 4; // Must match the parameter in the Verilog module
    const int MAX_VALUE = (1 << WIDTH) - 1;
    
    // Set total number of tests
    total_tests = MAX_VALUE + 1;
    
    std::cout << "Testing Gray code to binary conversion for " << WIDTH << "-bit values:" << std::endl;
    std::cout << "Gray\tBinary (Expected)\tBinary (Actual)\tResult" << std::endl;
    
    all_tests_pass = true;
    tests_passed = 0;
    
    // Test all possible input values
    for (int gray = 0; gray <= MAX_VALUE; gray++) {
        // Set input
        converter->gray_in = gray;
        
        // Evaluate the model
        converter->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        // Calculate expected binary code
        int expected_binary = gray_to_binary(gray);
        int actual_binary = converter->binary_out;
        
        // Print results
        std::cout << std::bitset<8>(gray).to_string().substr(8-WIDTH) << "\t"
                  << std::bitset<8>(expected_binary).to_string().substr(8-WIDTH) << "\t\t"
                  << std::bitset<8>(actual_binary).to_string().substr(8-WIDTH) << "\t\t";
        
        if (expected_binary == actual_binary) {
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
    std::unique_ptr<Vgray_to_binary> converter = std::make_unique<Vgray_to_binary>();
    
    // Initialize VCD trace file
    Verilated::traceEverOn(true);
    std::unique_ptr<VerilatedVcdC> tfp = std::make_unique<VerilatedVcdC>();
    converter->trace(tfp.get(), 99);  // Trace 99 levels of hierarchy
    tfp->open("gray_to_binary_sim.vcd");
    
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