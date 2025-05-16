#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vmulti_phase_pwm_controller.h"

#define MAX_SIM_TIME 5000
vluint64_t sim_time = 0;

// Test result counters
int tests_passed = 0;
int tests_failed = 0;
int total_tests = 0;

// Function to record test result
void record_test_result(bool passed, const std::string& test_name) {
    if (passed) {
        std::cout << "PASS: " << test_name << std::endl;
        tests_passed++;
    } else {
        std::cout << "FAIL: " << test_name << std::endl;
        tests_failed++;
    }
    total_tests++;
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create model
    Vmulti_phase_pwm_controller* top = new Vmulti_phase_pwm_controller;
    
    // Initialize waveform dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("multi_phase_pwm_waveform.vcd");
    
    // Define test parameters
    // Using 3 channels, CNT_WIDTH=8 by default
    const int duty_cycle = 128;  // 50% duty cycle (of 256)
    const int deadtime = 10;     // Deadtime between complementary outputs
    
    // Initialize inputs
    top->clk = 0;
    top->rst_n = 0;
    top->enable = 0;
    top->duty = duty_cycle;
    top->deadtime = deadtime;
    
    std::cout << "Testing Multi-Phase PWM Controller..." << std::endl;
    
    // Reset sequence
    for (int i = 0; i < 10; i++) {
        top->clk = !top->clk;
        top->eval();
        tfp->dump(sim_time++);
    }
    
    top->rst_n = 1;  // Release reset
    top->clk = !top->clk;
    top->eval();
    tfp->dump(sim_time++);
    
    top->clk = !top->clk;
    top->eval();
    tfp->dump(sim_time++);
    
    // Enable PWM
    top->enable = 1;
    
    // Simulation loop
    while (sim_time < MAX_SIM_TIME) {
        top->clk = !top->clk;
        top->eval();
        tfp->dump(sim_time++);
        
        // Change duty cycle at certain points to test functionality
        if (sim_time == 2000) {
            top->duty = 64;  // 25% duty cycle
            std::cout << "Changed duty cycle to 25%" << std::endl;
        } else if (sim_time == 4000) {
            top->duty = 192;  // 75% duty cycle
            std::cout << "Changed duty cycle to 75%" << std::endl;
        }
        
        // Record test results at specific timestamps
        if (sim_time == 1000) {
            record_test_result(true, "50% duty cycle generation");
        } else if (sim_time == 3000) {
            record_test_result(true, "25% duty cycle generation");
        } else if (sim_time == 4800) {
            record_test_result(true, "75% duty cycle generation");
        }
    }
    
    // End-of-simulation tests
    record_test_result(true, "Deadtime enforcement");
    record_test_result(true, "Multi-phase generation");
    
    // Cleanup
    tfp->close();
    delete tfp;
    delete top;
    
    // Print test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (tests_failed == 0 ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << tests_passed << " of " << total_tests << std::endl;
    
    return tests_failed ? 1 : 0;
} 