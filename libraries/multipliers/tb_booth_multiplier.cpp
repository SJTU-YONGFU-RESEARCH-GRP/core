#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vbooth_multiplier.h"

// Define a maximum simulation time to avoid infinite loops
#define MAX_SIM_TIME 2000

// Test vector structure
struct TestVector {
    int8_t multiplicand;
    int8_t multiplier;
    int16_t expected;
};

vluint64_t main_time = 0;
vluint64_t sim_time = 0;

double sc_time_stamp() {
    return main_time;
}

// Helper function to print binary representation
void print_binary(const char* label, int value, int width) {
    std::cout << label << " (dec " << value << ", hex 0x" << std::hex << value << std::dec << "): ";
    for (int i = width-1; i >= 0; i--) {
        std::cout << ((value >> i) & 1);
        if (i == width-1) std::cout << " "; // Space after sign bit for clarity
        else if (i % 4 == 0) std::cout << " "; // Group in 4 bits for readability
    }
    std::cout << std::endl;
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of our module under test
    Vbooth_multiplier *tb = new Vbooth_multiplier;
    
    // Enable waveform tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    tb->trace(tfp, 99);
    tfp->open("booth_multiplier.vcd");
    
    // Define test vectors with proper signed types
    // For WIDTH=8, the maximum signed value is 127 and minimum is -128
    TestVector test_vectors[] = {
        {5, 7, 35},          // Positive * Positive
        {-5, 7, -35},        // Negative * Positive
        {5, -7, -35},        // Positive * Negative
        {-5, -7, 35},        // Negative * Negative
        {0, 10, 0},          // Zero * Positive
        {20, 5, 100},        // Different values
        {127, 127, 16129},   // MAX * MAX
        {-128, -128, 16384}  // MIN * MIN
    };
    
    // Check each test vector's expected values and print debug info
    std::cout << "Test Vector Debug Information:" << std::endl;
    for (int i = 0; i < sizeof(test_vectors)/sizeof(TestVector); i++) {
        std::cout << "Test " << i+1 << ":" << std::endl;
        std::cout << "  Multiplicand: " << (int)test_vectors[i].multiplicand << std::endl;
        std::cout << "  Multiplier: " << (int)test_vectors[i].multiplier << std::endl;
        
        // Manually verify each expected result
        int16_t calculated = (int16_t)test_vectors[i].multiplicand * (int16_t)test_vectors[i].multiplier;
        std::cout << "  Expected: " << test_vectors[i].expected << std::endl;
        std::cout << "  Calculated: " << calculated << std::endl;
        
        // Update the expected value to the calculated value
        test_vectors[i].expected = calculated;
    }
    std::cout << std::endl;
    
    int vector_count = sizeof(test_vectors) / sizeof(TestVector);
    int current_test = 0;
    bool test_in_progress = false;
    bool start_pulse_sent = false;
    
    // Initial values
    tb->clk = 0;
    tb->rst = 1;
    tb->start = 0;
    tb->multiplicand = 0;
    tb->multiplier = 0;
    
    // Reset sequence
    tb->eval();
    tfp->dump(main_time++);
    tb->clk = 1;
    tb->eval();
    tfp->dump(main_time++);
    tb->clk = 0;
    tb->rst = 0;
    tb->eval();
    tfp->dump(main_time++);
    
    // Main simulation loop
    while (sim_time < MAX_SIM_TIME && current_test < vector_count) {
        // Toggle clock
        tb->clk = !tb->clk;
        
        // Logic on falling edge
        if (tb->clk == 0) {
            if (!test_in_progress) {
                // Setup and start new test
                tb->multiplicand = test_vectors[current_test].multiplicand;
                tb->multiplier = test_vectors[current_test].multiplier;
                tb->start = 1;
                test_in_progress = true;
                start_pulse_sent = false;
                
                std::cout << "\nStarting test " << current_test + 1 << ":" << std::endl;
                print_binary("Multiplicand", (int)tb->multiplicand, 8);
                print_binary("Multiplier", (int)tb->multiplier, 8);
                std::cout << "Expected result: " << test_vectors[current_test].expected << std::endl;
            } else if (!start_pulse_sent) {
                // Make sure start is only high for 1 cycle
                tb->start = 0;
                start_pulse_sent = true;
            }
            
            // Print status after posedge
            if (tb->clk == 0 && (sim_time % 20) == 0 && test_in_progress) {
                std::cout << "Sim time: " << sim_time << ", Product: " << (int16_t)tb->product 
                          << ", Done: " << (tb->done ? "YES" : "NO") << std::endl;
            }
            
            // Check for test completion
            if (test_in_progress && tb->done) {
                print_binary("Result", (int16_t)tb->product, 16);
                std::cout << "Test " << current_test + 1 << " completed, result: " << (int16_t)tb->product << std::endl;
                
                if ((int16_t)tb->product == test_vectors[current_test].expected) {
                    std::cout << "PASS!" << std::endl;
                } else {
                    std::cout << "FAIL! Expected: " << test_vectors[current_test].expected 
                              << ", Got: " << (int16_t)tb->product << std::endl;
                }
                
                // Wait a cycle before starting next test
                current_test++;
                test_in_progress = false;
            }
        }
        
        // Evaluate model and dump trace
        tb->eval();
        tfp->dump(main_time);
        main_time++;
        
        // Increment simulation counter on posedge
        if (tb->clk == 1) {
            sim_time++;
        }
    }
    
    if (current_test < vector_count) {
        std::cout << "\nSimulation timed out before all tests completed!" << std::endl;
    } else {
        std::cout << "\nAll tests completed!" << std::endl;
    }
    
    // Cleanup
    tfp->close();
    delete tfp;
    delete tb;
    
    return 0;
} 