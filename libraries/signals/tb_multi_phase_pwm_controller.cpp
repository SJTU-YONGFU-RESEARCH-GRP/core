#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vmulti_phase_pwm_controller.h"

#define MAX_SIM_TIME 5000
vluint64_t sim_time = 0;

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
        
        // Print status information occasionally
        if (sim_time % 100 == 0 && top->clk) {
            std::cout << "Time: " << sim_time << ", PWM P outputs: ";
            for (int i = 0; i < 3; i++) {  // Assuming 3 channels
                std::cout << ((top->pwm_p_out >> i) & 1) << " ";
            }
            std::cout << ", PWM N outputs: ";
            for (int i = 0; i < 3; i++) {
                std::cout << ((top->pwm_n_out >> i) & 1) << " ";
            }
            std::cout << std::endl;
        }
    }
    
    // Cleanup
    tfp->close();
    delete tfp;
    delete top;
    
    std::cout << "Simulation completed successfully" << std::endl;
    return 0;
} 