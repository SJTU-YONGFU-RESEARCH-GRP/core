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
    bool all_tests_passed = true;
    int tests_passed = 0;
    int total_tests = 3; // Total number of test cases
    
    // Reset the counter
    counter->rst_n = 0;
    counter->clk = 0;
    counter->enable = 0;
    counter->direction = 0;  // Count up
    counter->load = 0;
    counter->data_in = 0;
    counter->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
    
    counter->clk = 1;
    counter->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
    
    counter->rst_n = 1;
    
    // Test 1: Count up
    std::cout << "Test 1: Counting Up" << std::endl;
    std::cout << "Binary\tExpected Gray\tActual Gray\tResult" << std::endl;
    
    counter->enable = 1;
    counter->direction = 0;  // Count up
    
    bool test1_passed = true;
    
    for (int i = 0; i < 8; i++) {
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
        test1_passed &= match;
        
        std::cout << std::bitset<4>(binary_value) << "\t" 
                  << std::bitset<4>(expected_gray) << "\t\t" 
                  << std::bitset<4>(actual_gray) << "\t\t"
                  << (match ? "PASS" : "FAIL") << std::endl;
        
        if (!match) {
            std::cout << "ERROR: Gray code mismatch at binary value " << static_cast<int>(binary_value) << std::endl;
        }
    }
    
    if (test1_passed) {
        tests_passed++;
    } else {
        all_tests_passed = false;
    }
    
    // Test 2: Load a value
    std::cout << "\nTest 2: Loading Value" << std::endl;
    
    // Load value 10 (binary 1010)
    counter->enable = 0;
    counter->load = 1;
    counter->data_in = 10;  // 1010 in binary
    
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
    
    counter->load = 0;
    
    // Calculate expected Gray code
    uint8_t binary_value = counter->binary_out;
    uint8_t expected_gray = binary_to_gray(binary_value);
    uint8_t actual_gray = counter->gray_out;
    
    // Verify the result
    bool match = (expected_gray == actual_gray);
    bool binary_match = (binary_value == 10);
    bool test2_passed = match && binary_match;
    
    std::cout << "Loaded Binary: " << std::bitset<4>(binary_value) 
              << " (Expected: 1010), Result: " << (binary_match ? "PASS" : "FAIL") << std::endl;
    std::cout << "Gray Code: " << std::bitset<4>(actual_gray) 
              << " (Expected: " << std::bitset<4>(expected_gray) << "), Result: " 
              << (match ? "PASS" : "FAIL") << std::endl;
    
    if (test2_passed) {
        tests_passed++;
    } else {
        all_tests_passed = false;
    }
    
    // Test 3: Count down
    std::cout << "\nTest 3: Counting Down" << std::endl;
    std::cout << "Binary\tExpected Gray\tActual Gray\tResult" << std::endl;
    
    counter->enable = 1;
    counter->direction = 1;  // Count down
    
    bool test3_passed = true;
    
    for (int i = 0; i < 8; i++) {
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
        test3_passed &= match;
        
        std::cout << std::bitset<4>(binary_value) << "\t" 
                  << std::bitset<4>(expected_gray) << "\t\t" 
                  << std::bitset<4>(actual_gray) << "\t\t"
                  << (match ? "PASS" : "FAIL") << std::endl;
        
        if (!match) {
            std::cout << "ERROR: Gray code mismatch at binary value " << static_cast<int>(binary_value) << std::endl;
        }
    }
    
    if (test3_passed) {
        tests_passed++;
    } else {
        all_tests_passed = false;
    }
    
    // Print test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (all_tests_passed ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << tests_passed << " of " << total_tests << std::endl;
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
    
    return 0;
}