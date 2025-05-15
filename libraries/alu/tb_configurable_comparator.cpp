#include "Vconfigurable_comparator.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <vector>
#include <random>
#include <cstdint>

// Test case structure
struct TestCase {
    uint32_t a;
    uint32_t b;
    uint8_t op_sel;
    bool expected_result;
    std::string op_name;
};

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create instance of our module
    Vconfigurable_comparator* comparator = new Vconfigurable_comparator;
    
    // Initialize VCD trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    comparator->trace(tfp, 99);
    tfp->open("configurable_comparator_trace.vcd");
    
    // Initialize random number generator
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<uint32_t> dist8bit(0, 255);
    
    // Define test cases for 8-bit unsigned comparison
    const uint8_t EQUAL = 0;
    const uint8_t NOT_EQUAL = 1;
    const uint8_t LESS_THAN = 2;
    const uint8_t LESS_EQUAL = 3;
    const uint8_t GREATER_THAN = 4;
    const uint8_t GREATER_EQUAL = 5;
    
    std::vector<TestCase> testCases = {
        // Test EQ operation
        {100, 100, EQUAL, true, "EQ"},
        {100, 101, EQUAL, false, "EQ"},
        
        // Test NE operation
        {100, 101, NOT_EQUAL, true, "NE"},
        {100, 100, NOT_EQUAL, false, "NE"},
        
        // Test LT operation
        {100, 101, LESS_THAN, true, "LT"},
        {101, 100, LESS_THAN, false, "LT"},
        {100, 100, LESS_THAN, false, "LT"},
        
        // Test LE operation
        {100, 101, LESS_EQUAL, true, "LE"},
        {100, 100, LESS_EQUAL, true, "LE"},
        {101, 100, LESS_EQUAL, false, "LE"},
        
        // Test GT operation
        {101, 100, GREATER_THAN, true, "GT"},
        {100, 100, GREATER_THAN, false, "GT"},
        {100, 101, GREATER_THAN, false, "GT"},
        
        // Test GE operation
        {101, 100, GREATER_EQUAL, true, "GE"},
        {100, 100, GREATER_EQUAL, true, "GE"},
        {100, 101, GREATER_EQUAL, false, "GE"}
    };
    
    // Add some random test cases
    for (int i = 0; i < 20; i++) {
        uint32_t a = dist8bit(gen);
        uint32_t b = dist8bit(gen);
        uint8_t op = i % 6; // Cycle through operations
        
        bool expected;
        std::string op_str;
        
        switch(op) {
            case EQUAL: 
                expected = (a == b);
                op_str = "EQ";
                break;
            case NOT_EQUAL: 
                expected = (a != b);
                op_str = "NE";
                break;
            case LESS_THAN: 
                expected = (a < b);
                op_str = "LT";
                break;
            case LESS_EQUAL: 
                expected = (a <= b);
                op_str = "LE";
                break;
            case GREATER_THAN: 
                expected = (a > b);
                op_str = "GT";
                break;
            case GREATER_EQUAL: 
                expected = (a >= b);
                op_str = "GE";
                break;
            default:
                expected = false;
                op_str = "??";
        }
        
        testCases.push_back({a, b, op, expected, op_str});
    }
    
    // Run the tests
    int errors = 0;
    int total = 0;
    
    for (const auto& test : testCases) {
        // Apply inputs
        comparator->a = test.a;
        comparator->b = test.b;
        comparator->op_sel = test.op_sel;
        
        // Evaluate model
        comparator->eval();
        tfp->dump(total);
        
        // Check result
        bool result = comparator->result;
        bool matched = (result == test.expected_result);
        
        if (!matched) {
            std::cout << "ERROR: Test case failed!" << std::endl;
            std::cout << "  a = " << test.a << ", b = " << test.b;
            std::cout << ", op = " << (int)test.op_sel << " (" << test.op_name << ")";
            std::cout << ", expected = " << test.expected_result;
            std::cout << ", got = " << result << std::endl;
            errors++;
        }
        
        total++;
    }
    
    // Print standardized test summary
    bool all_tests_pass = (errors == 0);
    int tests_passed = total - errors;
    
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (all_tests_pass ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << tests_passed << " of " << total << std::endl;
    
    // Cleanup
    tfp->close();
    delete tfp;
    delete comparator;
    
    return errors ? 1 : 0;
} 