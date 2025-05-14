#include "Vfir_filter.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>
#include <vector>
#include <iomanip>
#include <cmath>

// Function to generate a sine wave
std::vector<int> generate_sine_wave(int amplitude, int samples, double frequency) {
    std::vector<int> wave;
    for (int i = 0; i < samples; i++) {
        double angle = 2.0 * M_PI * frequency * i / samples;
        int value = static_cast<int>(amplitude * sin(angle));
        wave.push_back(value);
    }
    return wave;
}

void check_filter(std::unique_ptr<Vfir_filter>& filter, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    // Parameters from the design
    const int DATA_WIDTH = 8;
    const int OUTPUT_WIDTH = 19; // DATA_WIDTH + COEFF_WIDTH + 3
    
    // Reset the filter
    filter->clk = 0;
    filter->rst_n = 0;
    filter->data_valid = 0;
    filter->data_in = 0;
    filter->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
    
    filter->clk = 1;
    filter->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
    
    filter->rst_n = 1;
    
    // Generate a test signal: a sine wave plus some noise
    const int SAMPLES = 100;
    std::vector<int> sine_wave = generate_sine_wave(50, SAMPLES, 0.05); // Low frequency
    std::vector<int> noise = generate_sine_wave(20, SAMPLES, 0.5); // High frequency (noise)
    
    std::vector<int> input_signal(SAMPLES);
    for (int i = 0; i < SAMPLES; i++) {
        // Combine sine and noise, then scale to fit in DATA_WIDTH bits
        input_signal[i] = (sine_wave[i] + noise[i]) & ((1 << DATA_WIDTH) - 1);
    }
    
    // Process the signal through the filter
    std::cout << "Processing signal through FIR filter..." << std::endl;
    std::cout << "Sample\tInput\tOutput" << std::endl;
    
    std::vector<int> output_signal;
    
    for (int i = 0; i < SAMPLES; i++) {
        // Clock low
        filter->clk = 0;
        filter->data_in = input_signal[i];
        filter->data_valid = 1;
        filter->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        // Clock high
        filter->clk = 1;
        filter->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        // Store output if valid
        if (filter->data_out_valid) {
            output_signal.push_back(filter->data_out);
            
            // Print every 10th sample
            if (i % 10 == 0) {
                std::cout << i << "\t" 
                          << std::setw(4) << input_signal[i] << "\t"
                          << std::setw(6) << static_cast<int>(filter->data_out) << std::endl;
            }
        }
    }
    
    // Add a few more clock cycles to flush the pipeline
    for (int i = 0; i < 10; i++) {
        // Clock low
        filter->clk = 0;
        filter->data_valid = 0;
        filter->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        // Clock high
        filter->clk = 1;
        filter->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
    }
    
    std::cout << "\nFilter processed " << output_signal.size() << " samples." << std::endl;
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of our module under test
    std::unique_ptr<Vfir_filter> filter = std::make_unique<Vfir_filter>();
    
    // Initialize VCD trace file
    Verilated::traceEverOn(true);
    std::unique_ptr<VerilatedVcdC> tfp = std::make_unique<VerilatedVcdC>();
    filter->trace(tfp.get(), 99);  // Trace 99 levels of hierarchy
    tfp->open("fir_filter_sim.vcd");
    
    // Initialize simulation time
    vluint64_t sim_time = 0;
    
    // Run tests
    check_filter(filter, tfp.get(), sim_time);
    
    // Cleanup
    tfp->close();
    filter->final();
    
    std::cout << "Simulation completed successfully!" << std::endl;
    return 0;
} 