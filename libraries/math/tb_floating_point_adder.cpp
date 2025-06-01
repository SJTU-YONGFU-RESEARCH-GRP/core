#include "Vfloating_point_adder.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>
#include <iomanip>
#include <string>
#include <cstdint>
#include <cmath>
#include <bitset>
#include <vector>

// Helper functions for float conversions (IEEE-754 single precision)
struct Float32 {
    bool sign;
    uint32_t exp;
    uint32_t mant;
    
    // IEEE-754 32-bit format: 1-bit sign, 8-bit exponent, 23-bit mantissa
    static Float32 fromFloat(float f) {
        uint32_t rawBits;
        std::memcpy(&rawBits, &f, sizeof(float));
        
        Float32 result;
        result.sign = (rawBits >> 31) & 1;
        result.exp = (rawBits >> 23) & 0xFF;
        result.mant = rawBits & 0x7FFFFF;
        
        return result;
    }
    
    static float toFloat(const Float32& f) {
        uint32_t rawBits = (f.sign << 31) | (f.exp << 23) | f.mant;
        float result;
        std::memcpy(&result, &rawBits, sizeof(float));
        return result;
    }
    
    // Convert to 32-bit representation for the module
    uint32_t toUint32() const {
        return (sign << 31) | (exp << 23) | mant;
    }
    
    // Convert from 32-bit representation
    static Float32 fromUint32(uint32_t bits) {
        Float32 result;
        result.sign = (bits >> 31) & 1;
        result.exp = (bits >> 23) & 0xFF;
        result.mant = bits & 0x7FFFFF;
        return result;
    }
    
    // Print float in hex and decimal
    static void printFloat(const std::string& name, float f) {
        Float32 fp = fromFloat(f);
        uint32_t bits = fp.toUint32();
        std::cout << name << " = 0x" << std::hex << std::setw(8) << std::setfill('0') 
                  << bits << " (" << std::dec << f << ")";
    }
};

void print_test_case(float a, float b, float result, float expected, bool overflow, bool underflow, bool invalid_op, bool inexact, bool pass) {
    std::cout << "a = " << std::dec << a << " (0x" << std::hex << Float32::fromFloat(a).toUint32() << "), ";
    std::cout << "b = " << std::dec << b << " (0x" << std::hex << Float32::fromFloat(b).toUint32() << ")";
    std::cout << " | result = " << std::dec << result << " (0x" << std::hex << Float32::fromFloat(result).toUint32() << ")";
    std::cout << " | expected = " << std::dec << expected << " (0x" << std::hex << Float32::fromFloat(expected).toUint32() << ")";
    std::cout << " | flags = ";
    std::cout << (overflow ? "O" : "-");
    std::cout << (underflow ? "U" : "-");
    std::cout << (invalid_op ? "I" : "-");
    std::cout << (inexact ? "X" : "-");
    std::cout << " | " << (pass ? "PASS" : "FAIL") << std::endl;
}

void check_operation(std::unique_ptr<Vfloating_point_adder>& adder, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    const int EXP_WIDTH = 8;    // Must match the EXP_WIDTH parameter in the Verilog module
    const int MANT_WIDTH = 23;  // Must match the MANT_WIDTH parameter in the Verilog module
    
    std::cout << "Testing Floating Point Adder with EXP_WIDTH=" << EXP_WIDTH 
              << ", MANT_WIDTH=" << MANT_WIDTH << std::endl;
    std::cout << "-------------------------------------------------------------" << std::endl;
    
    // Define test cases
    struct TestCase {
        float a;
        float b;
        float expected;
        std::string description;
    };
    
    std::vector<TestCase> test_cases = {
        {0.0f, 0.0f, 0.0f, "Zero plus zero"},
        {1.0f, 2.0f, 3.0f, "Simple positive addition"},
        {-1.0f, -2.0f, -3.0f, "Simple negative addition"},
        {1.0f, -1.0f, 0.0f, "Operands with opposite signs that sum to zero"},
        {1000000.0f, 0.0001f, 1000000.0f, "Very different magnitudes"},
        {1.0e30f, -1.0e30f, 0.0f, "Large numbers summing to zero"},
        {std::numeric_limits<float>::infinity(), 1.0f, std::numeric_limits<float>::infinity(), "Infinity plus finite"},
        {std::numeric_limits<float>::infinity(), -std::numeric_limits<float>::infinity(), std::numeric_limits<float>::quiet_NaN(), "Infinity minus infinity"},
        {std::numeric_limits<float>::quiet_NaN(), 1.0f, std::numeric_limits<float>::quiet_NaN(), "NaN plus anything"},
        {std::numeric_limits<float>::max(), std::numeric_limits<float>::max(), std::numeric_limits<float>::infinity(), "Overflow"},
        {std::numeric_limits<float>::min() / 2.0f, std::numeric_limits<float>::min() / 2.0f, std::numeric_limits<float>::min(), "Underflow/Denormals"},
        {1.5f, 2.25f, 3.75f, "Fractional values"},
        {-1.5f, 2.25f, 0.75f, "Mixed sign with fractional values"},
        {1.0f/3.0f, 2.0f/3.0f, 1.0f, "Imprecise representations"},
        {3.14159f, 2.71828f, 5.85987f, "Pi + e"}
    };
    
    int total_tests = static_cast<int>(test_cases.size());
    int passed_tests = 0;
    
    // Reset the device
    adder->rst_n = 0;
    adder->clk = 0;
    adder->valid_in = 0;
    adder->a = 0;
    adder->b = 0;
    adder->eval();
    if (tfp) tfp->dump(sim_time++); 
    
    adder->clk = 1;
    adder->eval();
    if (tfp) tfp->dump(sim_time++); 
    
    adder->rst_n = 1;
    adder->clk = 0;
    adder->eval();
    if (tfp) tfp->dump(sim_time++); 
    
    adder->clk = 1;
    adder->eval();
    if (tfp) tfp->dump(sim_time++); 

    // Test each case
    for (const auto& test : test_cases) {
        std::cout << "\nTest: " << test.description << std::endl;
        
        // Apply inputs
        adder->a = Float32::fromFloat(test.a).toUint32();
        adder->b = Float32::fromFloat(test.b).toUint32();
        adder->valid_in = 1;
        
        // Clock cycle
        adder->clk = 0;
        adder->eval();
        if (tfp) tfp->dump(sim_time++);
        
        adder->clk = 1;
        adder->eval();
        if (tfp) tfp->dump(sim_time++);
        
        // The design has 3 pipeline stages
        // Cycle 2
        adder->valid_in = 0;
        adder->clk = 0;
        adder->eval();
        if (tfp) tfp->dump(sim_time++);
        
        adder->clk = 1;
        adder->eval();
        if (tfp) tfp->dump(sim_time++);
        
        // Cycle 3
        adder->clk = 0;
        adder->eval();
        if (tfp) tfp->dump(sim_time++);
        
        adder->clk = 1;
        adder->eval();
        if (tfp) tfp->dump(sim_time++);
        
        // Read output (after 3 clock cycles)
        float result = Float32::toFloat(Float32::fromUint32(adder->result));
        bool is_valid = adder->valid_out;
        bool has_overflow = adder->overflow;
        bool has_underflow = adder->underflow;
        bool has_invalid_op = adder->invalid_op;
        bool is_inexact = adder->inexact;
        
        // Check if the result matches expected (allowing for NaN equality)
        bool pass = false;
        if (std::isnan(test.expected) && std::isnan(result)) {
            pass = true;
        } else if (std::isinf(test.expected) && std::isinf(result)) {
            // Check infinity signs match
            pass = (test.expected > 0 && result > 0) || (test.expected < 0 && result < 0);
        } else {
            // Use relative error for normal values
            float rel_error = std::abs(result - test.expected) / 
                             (std::abs(test.expected) > 1e-10 ? std::abs(test.expected) : 1.0f);
            pass = (rel_error < 1e-5) && is_valid;
        }
        
        print_test_case(test.a, test.b, result, test.expected, 
                       has_overflow, has_underflow, has_invalid_op, is_inexact, pass);
                       
        if (pass) passed_tests++;
    }
    
    // Summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (passed_tests == total_tests ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << passed_tests << " of " << total_tests << std::endl;
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of our module under test
    std::unique_ptr<Vfloating_point_adder> adder = std::make_unique<Vfloating_point_adder>();
    
    // Initialize VCD trace file
    Verilated::traceEverOn(true);
    std::unique_ptr<VerilatedVcdC> tfp = std::make_unique<VerilatedVcdC>();
    adder->trace(tfp.get(), 99);  // Trace 99 levels of hierarchy
    tfp->open("floating_point_adder_sim.vcd");
    
    // Initialize simulation time
    vluint64_t sim_time = 0;
    
    // Run tests
    check_operation(adder, tfp.get(), sim_time);
    
    // Cleanup
    tfp->close();
    adder->final();
    
    return 0;
} 