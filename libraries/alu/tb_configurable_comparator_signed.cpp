#include "Vconfigurable_comparator.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <vector>
#include <random>
#include <cstdint>
#include <bitset>

// Test case structure
struct TestCase {
    int32_t a;
    int32_t b;
    uint8_t op_sel;
    bool expected_result;
    std::string op_name;
};

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create instance of our module
    // Use -GWIDTH=16 -GSIGNED_COMPARE=1 to override parameters
    Vconfigurable_comparator* comparator = new Vconfigurable_comparator;
    
    // Initialize VCD trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    comparator->trace(tfp, 99);
    tfp->open("configurable_comparator_signed_trace.vcd");
    
    // Initialize random number generator
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int32_t> dist16bit(-32768, 32767); // For signed 16-bit numbers
    
    // Define test cases for signed comparison
    const uint8_t EQUAL = 0;
    const uint8_t NOT_EQUAL = 1;
    const uint8_t LESS_THAN = 2;
    const uint8_t LESS_EQUAL = 3;
    const uint8_t GREATER_THAN = 4;
    const uint8_t GREATER_EQUAL = 5;
    
    std::vector<TestCase> testCases = {
        // Test signed cases specifically
        {100, 100, EQUAL, true, "EQ"},
        {100, -100, EQUAL, false, "EQ"},
        
        {100, -100, NOT_EQUAL, true, "NE"},
        {-100, -100, NOT_EQUAL, false, "NE"},
        
        {-100, 100, LESS_THAN, true, "LT"}, // This tests signed comparison
        {100, -100, LESS_THAN, false, "LT"},
        {-100, -50, LESS_THAN, true, "LT"},
        
        {-100, 100, LESS_EQUAL, true, "LE"},
        {-100, -100, LESS_EQUAL, true, "LE"},
        {100, -100, LESS_EQUAL, false, "LE"},
        
        {100, -100, GREATER_THAN, true, "GT"},
        {-100, -100, GREATER_THAN, false, "GT"},
        {-100, 100, GREATER_THAN, false, "GT"},
        
        {100, -100, GREATER_EQUAL, true, "GE"},
        {-100, -100, GREATER_EQUAL, true, "GE"},
        {-100, 100, GREATER_EQUAL, false, "GE"}
    };
    
    // Add some random test cases
    for (int i = 0; i < 20; i++) {
        int32_t a = dist16bit(gen);
        int32_t b = dist16bit(gen);
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
        // The module is configured with 16 bits for this test
        // We need to mask the values to 16 bits to match the module
        uint16_t a_masked = static_cast<uint16_t>(test.a & 0xFFFF);
        uint16_t b_masked = static_cast<uint16_t>(test.b & 0xFFFF);
        
        // Apply inputs
        comparator->a = a_masked;
        comparator->b = b_masked;
        comparator->op_sel = test.op_sel;
        
        // Evaluate model
        comparator->eval();
        tfp->dump(total);
        
        // Check result
        bool result = comparator->result;
        bool matched = (result == test.expected_result);
        
        if (!matched) {
            std::cout << "ERROR: Test case failed!" << std::endl;
            std::cout << "  a = " << test.a << " (0x" << std::hex << a_masked << std::dec << ")";
            std::cout << ", b = " << test.b << " (0x" << std::hex << b_masked << std::dec << ")";
            std::cout << ", op = " << (int)test.op_sel << " (" << test.op_name << ")";
            std::cout << ", expected = " << test.expected_result;
            std::cout << ", got = " << result << std::endl;
            errors++;
        }
        
        total++;
    }
    
    // Print results
    std::cout << "\nSigned comparison test completed. " << errors << " errors out of " << total << " tests." << std::endl;
    
    // Cleanup
    tfp->close();
    delete tfp;
    delete comparator;
    
    return errors ? 1 : 0;
} 