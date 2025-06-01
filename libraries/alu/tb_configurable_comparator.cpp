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
    bool is_signed;
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
    
    // Initialize random number generators
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<uint32_t> dist8bit(0, 255);     // For unsigned 8-bit
    std::uniform_int_distribution<int32_t> dist16bit(-32768, 32767); // For signed 16-bit
    
    // Define operation codes
    const uint8_t EQUAL = 0;
    const uint8_t NOT_EQUAL = 1;
    const uint8_t LESS_THAN = 2;
    const uint8_t LESS_EQUAL = 3;
    const uint8_t GREATER_THAN = 4;
    const uint8_t GREATER_EQUAL = 5;
    
    std::vector<TestCase> testCases;
    
    // Add unsigned test cases (8-bit)
    testCases.insert(testCases.end(), {
        // Test EQ operation
        {100, 100, EQUAL, true, "EQ", false},
        {100, 101, EQUAL, false, "EQ", false},
        
        // Test NE operation
        {100, 101, NOT_EQUAL, true, "NE", false},
        {100, 100, NOT_EQUAL, false, "NE", false},
        
        // Test LT operation
        {100, 101, LESS_THAN, true, "LT", false},
        {101, 100, LESS_THAN, false, "LT", false},
        {100, 100, LESS_THAN, false, "LT", false},
        
        // Test LE operation
        {100, 101, LESS_EQUAL, true, "LE", false},
        {100, 100, LESS_EQUAL, true, "LE", false},
        {101, 100, LESS_EQUAL, false, "LE", false},
        
        // Test GT operation
        {101, 100, GREATER_THAN, true, "GT", false},
        {100, 100, GREATER_THAN, false, "GT", false},
        {100, 101, GREATER_THAN, false, "GT", false},
        
        // Test GE operation
        {101, 100, GREATER_EQUAL, true, "GE", false},
        {100, 100, GREATER_EQUAL, true, "GE", false},
        {100, 101, GREATER_EQUAL, false, "GE", false}
    });
    
    // Add signed test cases (16-bit)
    testCases.insert(testCases.end(), {
        // Test signed cases specifically
        {100, 100, EQUAL, true, "EQ", true},
        {100, -100, EQUAL, false, "EQ", true},
        
        {100, -100, NOT_EQUAL, true, "NE", true},
        {-100, -100, NOT_EQUAL, false, "NE", true},
        
        {-100, 100, LESS_THAN, true, "LT", true},
        {100, -100, LESS_THAN, false, "LT", true},
        {-100, -50, LESS_THAN, true, "LT", true},
        
        {-100, 100, LESS_EQUAL, true, "LE", true},
        {-100, -100, LESS_EQUAL, true, "LE", true},
        {100, -100, LESS_EQUAL, false, "LE", true},
        
        {100, -100, GREATER_THAN, true, "GT", true},
        {-100, -100, GREATER_THAN, false, "GT", true},
        {-100, 100, GREATER_THAN, false, "GT", true},
        
        {100, -100, GREATER_EQUAL, true, "GE", true},
        {-100, -100, GREATER_EQUAL, true, "GE", true},
        {-100, 100, GREATER_EQUAL, false, "GE", true}
    });
    
    // Add random test cases for both modes
    for (int i = 0; i < 20; i++) {
        // Add unsigned random test
        uint32_t a_unsigned = dist8bit(gen);
        uint32_t b_unsigned = dist8bit(gen);
        uint8_t op = i % 6;
        
        bool expected_unsigned;
        std::string op_str;
        
        switch(op) {
            case EQUAL: 
                expected_unsigned = (a_unsigned == b_unsigned);
                op_str = "EQ";
                break;
            case NOT_EQUAL: 
                expected_unsigned = (a_unsigned != b_unsigned);
                op_str = "NE";
                break;
            case LESS_THAN: 
                expected_unsigned = (a_unsigned < b_unsigned);
                op_str = "LT";
                break;
            case LESS_EQUAL: 
                expected_unsigned = (a_unsigned <= b_unsigned);
                op_str = "LE";
                break;
            case GREATER_THAN: 
                expected_unsigned = (a_unsigned > b_unsigned);
                op_str = "GT";
                break;
            case GREATER_EQUAL: 
                expected_unsigned = (a_unsigned >= b_unsigned);
                op_str = "GE";
                break;
            default:
                expected_unsigned = false;
                op_str = "??";
        }
        
        testCases.push_back({static_cast<int32_t>(a_unsigned), static_cast<int32_t>(b_unsigned), 
                            op, expected_unsigned, op_str, false});
        
        // Add signed random test
        int32_t a_signed = dist16bit(gen);
        int32_t b_signed = dist16bit(gen);
        
        bool expected_signed;
        switch(op) {
            case EQUAL: 
                expected_signed = (a_signed == b_signed);
                break;
            case NOT_EQUAL: 
                expected_signed = (a_signed != b_signed);
                break;
            case LESS_THAN: 
                expected_signed = (a_signed < b_signed);
                break;
            case LESS_EQUAL: 
                expected_signed = (a_signed <= b_signed);
                break;
            case GREATER_THAN: 
                expected_signed = (a_signed > b_signed);
                break;
            case GREATER_EQUAL: 
                expected_signed = (a_signed >= b_signed);
                break;
            default:
                expected_signed = false;
        }
        
        testCases.push_back({a_signed, b_signed, op, expected_signed, op_str, true});
    }
    
    // Run the tests
    int errors = 0;
    int total = 0;
    
    for (const auto& test : testCases) {
        // Set signed mode
        comparator->signed_mode = test.is_signed;
        
        // Apply inputs
        comparator->a = test.is_signed ? 
            static_cast<uint16_t>(test.a & 0xFFFF) :
            static_cast<uint8_t>(test.a & 0xFF);
        comparator->b = test.is_signed ? 
            static_cast<uint16_t>(test.b & 0xFFFF) :
            static_cast<uint8_t>(test.b & 0xFF);
        
        comparator->op_sel = test.op_sel;
        
        // Evaluate model
        comparator->eval();
        tfp->dump(total);
        
        // Check result
        bool result = comparator->result;
        bool matched = (result == test.expected_result);
        
        if (!matched) {
            std::cout << "ERROR: Test case failed!" << std::endl;
            std::cout << "  Mode: " << (test.is_signed ? "Signed" : "Unsigned") << std::endl;
            std::cout << "  a = " << test.a << " (0x" << std::hex << (test.is_signed ? (test.a & 0xFFFF) : (test.a & 0xFF)) << std::dec << ")";
            std::cout << ", b = " << test.b << " (0x" << std::hex << (test.is_signed ? (test.b & 0xFFFF) : (test.b & 0xFF)) << std::dec << ")";
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