#include "Vpwm_generator.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>
#include <vector>
#include <cstdint>
#include <iomanip>

// Function to simulate one clock cycle
void tick(std::unique_ptr<Vpwm_generator>& pwm, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    // Clock low
    pwm->clk = 0;
    pwm->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
    
    // Clock high
    pwm->clk = 1;
    pwm->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
}

// Function to verify PWM operation
void check_pwm_operation(std::unique_ptr<Vpwm_generator>& pwm, VerilatedVcdC* tfp, vluint64_t& sim_time, bool& all_tests_pass, int& tests_passed, int total_tests) {
    // Reset the PWM
    pwm->rst_n = 0;
    pwm->enable = 0;
    pwm->duty_cycle = 0;
    pwm->period = 0;
    tick(pwm, tfp, sim_time);
    
    pwm->rst_n = 1;
    pwm->enable = 1;
    
    // Individual test pass flags
    bool test1_pass = false;
    bool test2_pass = false;
    bool test3_pass = false;
    
    // Test 1: 50% duty cycle with period 255
    std::cout << "Test 1: 50% duty cycle (128/255)" << std::endl;
    
    uint8_t duty_cycle = 128;
    uint8_t period = 255;
    pwm->duty_cycle = duty_cycle;
    pwm->period = period;
    
    // Run for one full period plus a bit more
    int high_count = 0;
    int low_count = 0;
    
    std::cout << "Cycle\tPWM Output" << std::endl;
    for (int i = 0; i <= period + 10; i++) {
        tick(pwm, tfp, sim_time);
        
        if (i <= period) {
            std::cout << i << "\t" << static_cast<int>(pwm->pwm_out) << std::endl;
            
            if (pwm->pwm_out) {
                high_count++;
            } else {
                low_count++;
            }
        }
    }
    
    float measured_duty = static_cast<float>(high_count) / (high_count + low_count) * 100.0;
    float expected_duty = static_cast<float>(duty_cycle) / period * 100.0;
    
    std::cout << "Measured duty cycle: " << measured_duty << "% (Expected: " << expected_duty << "%)" << std::endl;
    std::cout << "High count: " << high_count << ", Low count: " << low_count << std::endl;
    
    if (std::abs(measured_duty - expected_duty) > 1.0) {
        std::cout << "ERROR: Duty cycle measurement outside acceptable range!" << std::endl;
        test1_pass = false;
    } else {
        std::cout << "PASS: Duty cycle within acceptable range" << std::endl;
        test1_pass = true;
    }
    
    // Test 2: 25% duty cycle with period 200
    std::cout << "\nTest 2: 25% duty cycle (50/200)" << std::endl;
    
    duty_cycle = 50;
    period = 200;
    pwm->duty_cycle = duty_cycle;
    pwm->period = period;
    
    // Wait for the new settings to take effect (after one period)
    for (int i = 0; i <= 255; i++) {
        tick(pwm, tfp, sim_time);
    }
    
    // Now measure the new duty cycle
    high_count = 0;
    low_count = 0;
    
    std::cout << "Cycle\tPWM Output" << std::endl;
    for (int i = 0; i <= period + 10; i++) {
        tick(pwm, tfp, sim_time);
        
        if (i <= period) {
            std::cout << i << "\t" << static_cast<int>(pwm->pwm_out) << std::endl;
            
            if (pwm->pwm_out) {
                high_count++;
            } else {
                low_count++;
            }
        }
    }
    
    measured_duty = static_cast<float>(high_count) / (high_count + low_count) * 100.0;
    expected_duty = static_cast<float>(duty_cycle) / period * 100.0;
    
    std::cout << "Measured duty cycle: " << measured_duty << "% (Expected: " << expected_duty << "%)" << std::endl;
    std::cout << "High count: " << high_count << ", Low count: " << low_count << std::endl;
    
    if (std::abs(measured_duty - expected_duty) > 1.0) {
        std::cout << "ERROR: Duty cycle measurement outside acceptable range!" << std::endl;
        test2_pass = false;
    } else {
        std::cout << "PASS: Duty cycle within acceptable range" << std::endl;
        test2_pass = true;
    }
    
    // Test 3: 75% duty cycle with period 100
    std::cout << "\nTest 3: 75% duty cycle (75/100)" << std::endl;
    
    duty_cycle = 75;
    period = 100;
    pwm->duty_cycle = duty_cycle;
    pwm->period = period;
    
    // Wait for the new settings to take effect
    for (int i = 0; i <= 200; i++) {
        tick(pwm, tfp, sim_time);
    }
    
    // Now measure the new duty cycle
    high_count = 0;
    low_count = 0;
    
    std::cout << "Cycle\tPWM Output" << std::endl;
    for (int i = 0; i <= period + 10; i++) {
        tick(pwm, tfp, sim_time);
        
        if (i <= period) {
            std::cout << i << "\t" << static_cast<int>(pwm->pwm_out) << std::endl;
            
            if (pwm->pwm_out) {
                high_count++;
            } else {
                low_count++;
            }
        }
    }
    
    measured_duty = static_cast<float>(high_count) / (high_count + low_count) * 100.0;
    expected_duty = static_cast<float>(duty_cycle) / period * 100.0;
    
    std::cout << "Measured duty cycle: " << measured_duty << "% (Expected: " << expected_duty << "%)" << std::endl;
    std::cout << "High count: " << high_count << ", Low count: " << low_count << std::endl;
    
    if (std::abs(measured_duty - expected_duty) > 1.0) {
        std::cout << "ERROR: Duty cycle measurement outside acceptable range!" << std::endl;
        test3_pass = false;
    } else {
        std::cout << "PASS: Duty cycle within acceptable range" << std::endl;
        test3_pass = true;
    }
    
    // Update test stats
    if (test1_pass) tests_passed++;
    if (test2_pass) tests_passed++;
    if (test3_pass) tests_passed++;
    
    all_tests_pass = test1_pass && test2_pass && test3_pass;
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of our module under test
    std::unique_ptr<Vpwm_generator> pwm = std::make_unique<Vpwm_generator>();
    
    // Initialize VCD trace file
    Verilated::traceEverOn(true);
    std::unique_ptr<VerilatedVcdC> tfp = std::make_unique<VerilatedVcdC>();
    pwm->trace(tfp.get(), 99);  // Trace 99 levels of hierarchy
    tfp->open("pwm_generator_sim.vcd");
    
    // Initialize simulation time
    vluint64_t sim_time = 0;
    
    // Test tracking variables
    bool all_tests_pass = true;
    int tests_passed = 0;
    int total_tests = 3; // Three test cases
    
    // Run tests
    check_pwm_operation(pwm, tfp.get(), sim_time, all_tests_pass, tests_passed, total_tests);
    
    // Cleanup
    tfp->close();
    pwm->final();
    
    // Print standardized test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (all_tests_pass ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << tests_passed << " of " << total_tests << std::endl;
    
    return 0;
} 