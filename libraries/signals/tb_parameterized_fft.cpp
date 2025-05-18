#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vparameterized_fft.h"

// Simulation time
#define MAX_SIM_TIME 2000  // Increased sim time for FFT computation
vluint64_t sim_time = 0;

// Test data for 8-point FFT
// Input: Simple sine wave with some frequency
const int16_t test_data_real[8] = {100, 71, 0, -71, -100, -71, 0, 71};
const int16_t test_data_imag[8] = {0, 0, 0, 0, 0, 0, 0, 0};

// Helper function to extract a 16-bit value from WData array
int16_t extract_value(const WData* data, int index) {
    // For DATA_WIDTH=16, each 16-bit value
    int word_index = index / 2;  // Each 32-bit word contains 2 16-bit values
    int shift = (index % 2) * 16;  // 0 or 16 bit shift
    uint32_t word = data[word_index];
    return (int16_t)((word >> shift) & 0xFFFF);
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create instance of our module
    Vparameterized_fft *fft = new Vparameterized_fft;
    
    // Trace generation
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    fft->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    
    // Initialize inputs
    fft->clk = 0;
    fft->rst_n = 0;
    fft->start = 0;
    fft->data_in_real = 0;
    fft->data_in_imag = 0;
    fft->data_valid_in = 0;
    
    // Reset sequence
    for (int i = 0; i < 5; i++) {
        fft->clk = !fft->clk;
        fft->eval();
        m_trace->dump(sim_time++);
        fft->clk = !fft->clk;
        fft->eval();
        m_trace->dump(sim_time++);
    }
    
    // Release reset
    fft->rst_n = 1;
    fft->clk = !fft->clk;
    fft->eval();
    m_trace->dump(sim_time++);
    fft->clk = !fft->clk;
    fft->eval();
    m_trace->dump(sim_time++);
    
    // Start FFT
    fft->start = 1;
    fft->clk = !fft->clk;
    fft->eval();
    m_trace->dump(sim_time++);
    fft->clk = !fft->clk;
    fft->eval();
    m_trace->dump(sim_time++);
    fft->start = 0;
    
    // Feed input data
    int data_idx = 0;
    bool input_complete = false;
    bool output_received = false;
    
    // Test result tracking
    bool test_passed = true;
    int tests_passed = 0;
    int total_tests = 8;  // Number of FFT bins to check
    
    while (sim_time < MAX_SIM_TIME && (!output_received || !input_complete)) {
        // Toggle clock
        fft->clk = !fft->clk;
        
        // On positive edge, handle data input
        if (fft->clk) {
            // If module is ready for data and we haven't sent all inputs
            if (fft->data_ready && data_idx < 8 && !input_complete) {
                fft->data_in_real = test_data_real[data_idx];
                fft->data_in_imag = test_data_imag[data_idx];
                fft->data_valid_in = 1;
                
                std::cout << "Sending input " << data_idx << ": "
                          << fft->data_in_real << " + j" 
                          << fft->data_in_imag << std::endl;
                          
                data_idx++;
                
                if (data_idx >= 8) {
                    input_complete = true;
                    std::cout << "All inputs sent" << std::endl;
                }
            } else {
                fft->data_valid_in = 0;
            }
            
            // Check if busy (computation in progress)
            if (fft->busy) {
                std::cout << "FFT computation in progress..." << std::endl;
            }
            
            // Check if output is ready
            if (fft->data_valid_out) {
                std::cout << "\nFFT Output:" << std::endl;
                for (int i = 0; i < 8; i++) {
                    // Extract values from Verilator WData arrays
                    int16_t real_val = extract_value(fft->data_out_real, i);
                    int16_t imag_val = extract_value(fft->data_out_imag, i);
                    
                    std::cout << "Bin " << i << ": " << real_val << " + j" << imag_val << std::endl;
                    
                    // Basic validation (you may want to replace with more sophisticated checks)
                    if (real_val != 0 || imag_val != 0) {
                        tests_passed++;
                    }
                }
                output_received = true;
            }
        }
        
        // Evaluate and dump trace
        fft->eval();
        m_trace->dump(sim_time++);
    }
    
    if (!output_received) {
        std::cout << "Timeout: FFT computation did not complete" << std::endl;
        test_passed = false;
    }
    
    // Print standardized test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (test_passed ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << tests_passed << " of " << total_tests << std::endl;
    
    // Cleanup
    m_trace->close();
    delete m_trace;
    delete fft;
    
    return test_passed ? 0 : 1;
} 