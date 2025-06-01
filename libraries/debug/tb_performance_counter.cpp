#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vperformance_counter.h"

#define MAX_SIM_TIME 1000
vluint64_t sim_time = 0;

// Test parameters - must match with Verilator parameters
#define COUNTER_WIDTH 32
#define COUNTER_COUNT 8

int main(int argc, char** argv) {
    // Test tracking variables
    int tests_passed = 0;
    int total_tests = 4; // Four test cases
    bool all_tests_passed = true;
    
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create instance of the top module
    Vperformance_counter* top = new Vperformance_counter;
    
    // Enable waveform tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("waveform.vcd");
    
    // Clock function
    auto tick = [&]() {
        // Rising edge
        top->clk = 1;
        top->eval();
        tfp->dump(sim_time++);
        
        // Falling edge
        top->clk = 0;
        top->eval();
        tfp->dump(sim_time++);
    };
    
    // Reset function to start from a clean state
    auto reset = [&]() {
        top->rst_n = 0;
        tick();
        tick();
        top->rst_n = 1;
        tick();
    };
    
    // Function to generate a pulse (for event_inc)
    auto pulse = [&](uint8_t value) {
        top->event_inc = 0; // Start with 0
        tick();
        top->event_inc = value; // Event occurs
        tick();
        top->event_inc = 0; // Back to 0
        tick();
    };
    
    // Initialize inputs
    top->clk = 0;
    top->rst_n = 0;
    top->enable = 0;
    top->clear = 0;
    top->event_inc = 0;
    top->counter_sel = 1; // Select counter 0 by default
    
    // Apply reset
    reset();
    
    std::cout << "=== Performance Counter Test ===\n";
    
    // Test 1: Basic counter increment
    std::cout << "\nTest 1: Basic counter increment\n";
    
    // Enable counters
    top->enable = 1;
    tick();
    
    // Generate 10 pulses for counter 0
    for (int i = 0; i < 10; i++) {
        pulse(0x01); // Pulse event_inc for counter 0
    }
    
    // Check counter value
    top->counter_sel = 0x01; // Select counter 0
    tick();
    
    std::cout << "Counter 0 value after 10 increments: " << top->count_value << std::endl;
    
    // Verify that counter 0 has incremented 10 times
    if (top->count_value == 10) {
        std::cout << "Test 1: PASSED - Counter incremented correctly\n";
        tests_passed++;
    } else {
        std::cout << "Test 1: FAILED - Expected counter value 10, got " << top->count_value << std::endl;
        all_tests_passed = false;
    }
    
    // Test 2: Multiple counter increment
    std::cout << "\nTest 2: Multiple counter increment\n";
    
    // Clear all counters
    top->clear = 1;
    tick();
    top->clear = 0;
    tick();
    
    // Generate 5 pulses for counters 0 and 1
    for (int i = 0; i < 5; i++) {
        pulse(0x03); // Pulse event_inc for counters 0 and 1
    }
    
    // Check counter 0
    top->counter_sel = 0x01;
    tick();
    
    std::cout << "Counter 0 value: " << top->count_value << std::endl;
    
    // Check counter 1
    top->counter_sel = 0x02;
    tick();
    
    std::cout << "Counter 1 value: " << top->count_value << std::endl;
    
    // Verify that both counters incremented correctly
    bool test2_passed = false;
    top->counter_sel = 0x01;
    tick();
    int counter0_value = top->count_value;
    
    top->counter_sel = 0x02;
    tick();
    int counter1_value = top->count_value;
    
    if (counter0_value == 5 && counter1_value == 5) {
        std::cout << "Test 2: PASSED - Multiple counters incremented correctly\n";
        tests_passed++;
        test2_passed = true;
    } else {
        std::cout << "Test 2: FAILED - Expected counters 0 and 1 to be 5, got "
                 << counter0_value << " and " << counter1_value << std::endl;
        all_tests_passed = false;
    }
    
    // Test 3: Counter disable
    std::cout << "\nTest 3: Counter disable\n";
    
    // Capture current counter values
    top->counter_sel = 0x01;
    tick();
    counter0_value = top->count_value;
    
    top->counter_sel = 0x02;
    tick();
    counter1_value = top->count_value;
    
    // Disable counters
    top->enable = 0;
    tick();
    
    // Try to increment counters when disabled
    for (int i = 0; i < 5; i++) {
        pulse(0x0F); // Try to pulse multiple counters
    }
    
    // Check counter values - they should not have changed
    top->counter_sel = 0x01;
    tick();
    
    std::cout << "Counter 0 value after disable: " << top->count_value << std::endl;
    
    top->counter_sel = 0x02;
    tick();
    
    std::cout << "Counter 1 value after disable: " << top->count_value << std::endl;
    
    // Verify counters did not increment when disabled
    bool test3_passed = false;
    if (top->count_value == counter1_value) {
        top->counter_sel = 0x01;
        tick();
        if (top->count_value == counter0_value) {
            std::cout << "Test 3: PASSED - Counters did not increment when disabled\n";
            tests_passed++;
            test3_passed = true;
        }
    }
    
    if (!test3_passed) {
        std::cout << "Test 3: FAILED - Counters should not increment when disabled\n";
        all_tests_passed = false;
    }
    
    // Test 4: Counter clear
    std::cout << "\nTest 4: Counter clear\n";
    
    // Re-enable counters and generate some events
    top->enable = 1;
    tick();
    
    // Generate pulses for all counters
    for (int i = 0; i < 5; i++) {
        pulse(0xFF); // Pulse all counters
    }
    
    // Clear all counters
    top->clear = 1;
    tick();
    top->clear = 0;
    tick();
    
    // Check a few counter values
    bool test4_passed = true;
    for (int i = 0; i < 4; i++) { // Check the first 4 counters
        top->counter_sel = (1 << i);
        tick();
        
        std::cout << "Counter " << i << " value after clear: " << top->count_value << std::endl;
        
        if (top->count_value != 0) {
            test4_passed = false;
        }
    }
    
    if (test4_passed) {
        std::cout << "Test 4: PASSED - Counters cleared correctly\n";
        tests_passed++;
    } else {
        std::cout << "Test 4: FAILED - Not all counters were cleared\n";
        all_tests_passed = false;
    }
    
    // Test counter_sel behavior (bonus test, not counted in test_passed)
    std::cout << "\nBonus Test: counter_sel behavior\n";
    
    // Generate specific values for each counter
    top->clear = 1;
    tick();
    top->clear = 0;
    tick();
    
    // Set different values for each counter
    for (int i = 0; i < COUNTER_COUNT; i++) {
        // Generate i+1 pulses for counter i
        for (int j = 0; j < i + 1; j++) {
            pulse(1 << i);
        }
    }
    
    // Check that counter values match expectation
    for (int i = 0; i < COUNTER_COUNT; i++) {
        top->counter_sel = (1 << i);
        tick();
        
        std::cout << "Counter " << i << " final value: " << top->count_value << std::endl;
        
        // Expected value is i+1
        if (top->count_value != i + 1) {
            std::cout << "  Expected: " << i + 1 << std::endl;
        }
    }
    
    // Cleanup and finish
    for (int i = 0; i < 10; i++) {
        tick();
    }
    
    tfp->close();
    delete top;
    delete tfp;
    
    // Print standardized test summary
    std::cout << "\n==== Test Summary ====\n";
    std::cout << "Result: " << (all_tests_passed ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << tests_passed << " of " << total_tests << std::endl;
    
    return all_tests_passed ? 0 : 1;
} 