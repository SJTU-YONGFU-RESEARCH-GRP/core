#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vparameterized_pwm.h"

#define MAX_SIM_TIME 2000
vluint64_t sim_time = 0;

// Function to verify duty cycle
bool check_duty_cycle(Vparameterized_pwm *dut, VerilatedVcdC *m_trace, 
                     int duty_value, int counter_width, int div_value) {
    // Calculate max counter value based on width
    int max_count = (1 << counter_width) - 1;
    
    // Set new duty cycle
    dut->duty = duty_value;
    dut->div = div_value;
    
    // Run for one complete PWM cycle
    int required_cycles = (max_count + 1) * (div_value + 1);
    int high_count = 0;
    int total_count = 0;
    
    // Give some time for the change to take effect
    for (int i = 0; i < 10; i++) {
        dut->clk = !dut->clk;
        dut->eval();
        m_trace->dump(sim_time++);
        dut->clk = !dut->clk;
        dut->eval();
        m_trace->dump(sim_time++);
    }
    
    // Count for a full cycle to validate duty cycle
    for (int i = 0; i < required_cycles * 2; i++) {
        dut->clk = !dut->clk;
        dut->eval();
        m_trace->dump(sim_time++);
        
        // Only count on one clock edge
        if (dut->clk) {
            total_count++;
            if (dut->pwm_out) {
                high_count++;
            }
        }
        
        dut->clk = !dut->clk;
        dut->eval();
        m_trace->dump(sim_time++);
    }
    
    // Calculate observed duty cycle as percentage
    float expected_duty = duty_value * 100.0f / max_count;
    float observed_duty = high_count * 100.0f / total_count;
    
    std::cout << "Duty Cycle Test - ";
    std::cout << "Set: " << duty_value << "/" << max_count << " (" << expected_duty << "%), ";
    std::cout << "Observed: " << observed_duty << "%, ";
    
    // Allow small error due to discrete counting
    float error = abs(expected_duty - observed_duty);
    bool pass = error < 5.0;
    
    if (pass) {
        std::cout << "PASS\n";
    } else {
        std::cout << "FAIL (error: " << error << "%)\n";
    }
    
    return pass;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize Verilated modules
    Vparameterized_pwm *dut = new Vparameterized_pwm;
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    
    // Test tracking variables
    bool all_tests_pass = true;
    int tests_passed = 0;
    int total_tests = 6; // We have 6 test cases
    
    // Initialize inputs
    dut->clk = 0;
    dut->rst_n = 0;
    dut->enable = 0;
    dut->duty = 0;
    dut->div = 1;
    
    // Reset sequence
    for (int i = 0; i < 10; i++) {
        dut->clk = !dut->clk;
        dut->eval();
        m_trace->dump(sim_time++);
        dut->clk = !dut->clk;
        dut->eval();
        m_trace->dump(sim_time++);
    }
    
    // Release reset and enable the module
    dut->rst_n = 1;
    dut->enable = 1;
    
    std::cout << "Testing parameterized_pwm..." << std::endl;
    
    // With POLARITY=1 (active high), test different duty cycles
    std::cout << "Active High Tests (POLARITY=1):" << std::endl;
    
    // Test 1: 0% duty cycle
    bool test1_pass = check_duty_cycle(dut, m_trace, 0, 8, 1);
    if (test1_pass) tests_passed++;
    else all_tests_pass = false;
    
    // Test 2: 25% duty cycle
    bool test2_pass = check_duty_cycle(dut, m_trace, 64, 8, 1);
    if (test2_pass) tests_passed++;
    else all_tests_pass = false;
    
    // Test 3: 50% duty cycle
    bool test3_pass = check_duty_cycle(dut, m_trace, 127, 8, 1);
    if (test3_pass) tests_passed++;
    else all_tests_pass = false;
    
    // Test 4: 75% duty cycle
    bool test4_pass = check_duty_cycle(dut, m_trace, 192, 8, 1);
    if (test4_pass) tests_passed++;
    else all_tests_pass = false;
    
    // Test 5: 100% duty cycle
    bool test5_pass = check_duty_cycle(dut, m_trace, 255, 8, 1);
    if (test5_pass) tests_passed++;
    else all_tests_pass = false;
    
    // Test with division
    std::cout << "Clock Division Test (div=3):" << std::endl;
    
    // Test 6: 25% duty cycle with div=3
    bool test6_pass = check_duty_cycle(dut, m_trace, 64, 8, 3);
    if (test6_pass) tests_passed++;
    else all_tests_pass = false;
    
    // Print standardized test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (all_tests_pass ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << tests_passed << " of " << total_tests << std::endl;
    
    m_trace->close();
    delete dut;
    delete m_trace;
    
    return 0;
} 