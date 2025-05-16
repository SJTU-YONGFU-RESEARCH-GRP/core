#include "Vconfigurable_carry_select_adder.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>
#include <iomanip>
#include <random>
#include <bitset>
#include <cstdint>

// Helper function to calculate expected result for validation
uint64_t expected_add(uint64_t a, uint64_t b, bool cin) {
    uint64_t result = a + b + (cin ? 1 : 0);
    return result;
}

bool check_overflow(uint64_t a, uint64_t b, bool cin) {
    // Check if the addition would overflow 64 bits
    return (UINT64_MAX - a < b) || (cin && (UINT64_MAX - a - b == 0));
}

void print_test_case(uint64_t a, uint64_t b, bool cin, uint64_t sum, bool cout, bool pass) {
    std::cout << "a = 0x" << std::hex << std::setw(16) << std::setfill('0') << a
              << ", b = 0x" << std::hex << std::setw(16) << std::setfill('0') << b
              << ", cin = " << (cin ? "1" : "0")
              << " | sum = 0x" << std::hex << std::setw(16) << std::setfill('0') << sum
              << ", cout = " << (cout ? "1" : "0")
              << " | " << (pass ? "PASS" : "FAIL") << std::endl;
}

void check_operation(std::unique_ptr<Vconfigurable_carry_select_adder>& adder, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    const int DATA_WIDTH = 64;  // Must match the DATA_WIDTH parameter in the Verilog module
    
    // Test tracking variables
    bool overall_pass = true;
    int tests_passed = 0;
    int total_tests = 0;
    
    std::cout << "Testing Configurable Carry-Select Adder with DATA_WIDTH=" << DATA_WIDTH << std::endl;
    std::cout << "------------------------------------------------------" << std::endl;
    
    // Test cases with specific values
    struct TestCase {
        uint64_t a;
        uint64_t b;
        bool cin;
    };
    
    TestCase test_cases[] = {
        {0x0000000000000000ULL, 0x0000000000000000ULL, false},  // 0 + 0 + 0
        {0x0000000000000001ULL, 0x0000000000000001ULL, false},  // 1 + 1 + 0
        {0xFFFFFFFFFFFFFFFFULL, 0x0000000000000001ULL, false},  // Max + 1 + 0 (overflow)
        {0x0000000000000000ULL, 0x0000000000000000ULL, true},   // 0 + 0 + 1
        {0xFFFFFFFFFFFFFFFFULL, 0x0000000000000000ULL, true},   // Max + 0 + 1 (overflow)
        {0xFFFFFFFFFFFFFFFFULL, 0xFFFFFFFFFFFFFFFFULL, true},   // Max + Max + 1 (overflow)
        {0x5555555555555555ULL, 0xAAAAAAAAAAAAAAAAULL, false},  // Alternating 1s and 0s
        {0x1234567890ABCDEFULL, 0xFEDCBA0987654321ULL, false},  // Random values
        {0x8000000000000000ULL, 0x8000000000000000ULL, false},  // Test sign bit
        {0x7FFFFFFFFFFFFFFFULL, 0x0000000000000001ULL, false}   // Max positive + 1
    };
    
    // Update total test count
    total_tests += sizeof(test_cases) / sizeof(test_cases[0]);
    
    // Test each case
    for (const auto& test : test_cases) {
        // Apply inputs
        adder->a = test.a;
        adder->b = test.b;
        adder->cin = test.cin;
        adder->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        // Calculate expected result
        uint64_t expected = expected_add(test.a, test.b, test.cin);
        bool expected_cout = check_overflow(test.a, test.b, test.cin);
        
        // Verify output
        bool test_pass = (adder->sum == expected) && (adder->cout == expected_cout);
        if (test_pass) {
            tests_passed++;
        } else {
            overall_pass = false;
        }
        
        print_test_case(test.a, test.b, test.cin, adder->sum, adder->cout, test_pass);
    }
    
    // Test with random values
    std::cout << "\nTesting with random values:" << std::endl;
    std::cout << "------------------------" << std::endl;
    
    std::random_device rd;
    std::mt19937_64 gen(rd());
    std::uniform_int_distribution<uint64_t> dist(0, UINT64_MAX);
    
    const int random_test_count = 20;
    total_tests += random_test_count;
    
    for (int i = 0; i < random_test_count; i++) {
        uint64_t rand_a = dist(gen);
        uint64_t rand_b = dist(gen);
        bool rand_cin = (i % 2 == 0);  // Alternate carry-in for variety
        
        // Apply inputs
        adder->a = rand_a;
        adder->b = rand_b;
        adder->cin = rand_cin;
        adder->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        // Calculate expected result
        uint64_t expected = expected_add(rand_a, rand_b, rand_cin);
        bool expected_cout = check_overflow(rand_a, rand_b, rand_cin);
        
        // Verify output
        bool test_pass = (adder->sum == expected) && (adder->cout == expected_cout);
        if (test_pass) {
            tests_passed++;
        } else {
            overall_pass = false;
        }
        
        print_test_case(rand_a, rand_b, rand_cin, adder->sum, adder->cout, test_pass);
    }
    
    // Print standardized test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (overall_pass ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << std::dec << tests_passed << " of " << total_tests << std::endl;
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of our module under test
    std::unique_ptr<Vconfigurable_carry_select_adder> adder = std::make_unique<Vconfigurable_carry_select_adder>();
    
    // Initialize VCD trace file
    Verilated::traceEverOn(true);
    std::unique_ptr<VerilatedVcdC> tfp = std::make_unique<VerilatedVcdC>();
    adder->trace(tfp.get(), 99);  // Trace 99 levels of hierarchy
    tfp->open("configurable_carry_select_adder_sim.vcd");
    
    // Initialize simulation time
    vluint64_t sim_time = 0;
    
    // Run tests
    check_operation(adder, tfp.get(), sim_time);
    
    // Cleanup
    tfp->close();
    adder->final();
    
    return 0;
} 