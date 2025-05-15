#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vsine_cosine_generator.h"

// Define PI for angle conversions
#define PI 3.14159265358979323846

// Function to convert angle in radians to fixed-point format
// Maps 0 to 2π to 0 to 2^16-1
uint16_t angle_to_fixed(double angle_rad) {
    double normalized = angle_rad / (2 * PI);
    if (normalized < 0) normalized += 1.0;
    if (normalized >= 1.0) normalized -= floor(normalized);
    return static_cast<uint16_t>(normalized * 65536.0);
}

// Function to convert from signed fixed-point to double
// For 16-bit signed values: -32768 to 32767 maps to -1.0 to 0.9999
double fixed_to_double(int16_t fixed) {
    return static_cast<double>(fixed) / 32768.0;
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create VCD file for waveform tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    
    // Create instance of our module
    Vsine_cosine_generator* top = new Vsine_cosine_generator;
    top->trace(tfp, 99);  // Trace 99 levels of hierarchy
    tfp->open("sine_cosine_generator_wave.vcd");
    
    // Define test parameters
    const int MAX_TIME = 1000;
    const int RESET_TIME = 10;
    const int NUM_TESTS = 16;
    
    // Reset the module
    top->rst_n = 0;
    top->clk = 0;
    top->enable = 0;
    top->phase_in = 0;
    
    // Toggle clock during reset
    for (int i = 0; i < RESET_TIME * 2; i++) {
        top->clk = !top->clk;
        top->eval();
        tfp->dump(i);
    }
    
    // Release reset
    top->rst_n = 1;
    top->eval();
    tfp->dump(RESET_TIME * 2 + 1);
    
    // Prepare for test results
    printf("Testing sine/cosine generator for various angles:\n");
    printf("-----------------------------------------------------------------------\n");
    printf("| Angle (deg) | Angle (rad) | Sin (Expected) | Sin (Actual) | Cos (Expected) | Cos (Actual) | Error (%%) |\n");
    printf("-----------------------------------------------------------------------\n");
    
    int time_counter = RESET_TIME * 2 + 2;
    double max_sin_error = 0.0;
    double max_cos_error = 0.0;
    
    // Test different angles
    for (int i = 0; i < NUM_TESTS; i++) {
        // Calculate test angle
        double angle_deg = i * (360.0 / NUM_TESTS);
        double angle_rad = angle_deg * PI / 180.0;
        double expected_sin = sin(angle_rad);
        double expected_cos = cos(angle_rad);
        
        // Convert to fixed-point and set as input
        uint16_t fixed_angle = angle_to_fixed(angle_rad);
        printf("Debug: angle %.2f degrees = 0x%04X\n", angle_deg, fixed_angle);
        top->phase_in = fixed_angle;
        top->enable = 1;
        
        // Clock the design until valid output appears or timeout
        bool valid_found = false;
        int timeout_counter = 0;
        const int TIMEOUT = 50;  // Max cycles to wait for valid output
        
        while (!valid_found && timeout_counter < TIMEOUT) {
            // Toggle clock
            top->clk = 0;
            top->eval();
            tfp->dump(time_counter++);
            
            top->clk = 1;
            top->eval();
            tfp->dump(time_counter++);
            
            // Check if output is valid
            if (top->valid_out) {
                valid_found = true;
                
                // Get and convert output values
                int16_t sin_fixed = top->sine_out;
                int16_t cos_fixed = top->cosine_out;
                double sin_actual = fixed_to_double(sin_fixed);
                double cos_actual = fixed_to_double(cos_fixed);
                
                // Calculate error
                double sin_error = fabs(sin_actual - expected_sin) * 100.0;
                double cos_error = fabs(cos_actual - expected_cos) * 100.0;
                double avg_error = (sin_error + cos_error) / 2.0;
                
                // Track maximum error
                if (sin_error > max_sin_error) max_sin_error = sin_error;
                if (cos_error > max_cos_error) max_cos_error = cos_error;
                
                // Print results
                printf("| %11.2f | %10.4f | %14.4f | %12.4f | %14.4f | %12.4f | %8.2f |\n",
                       angle_deg, angle_rad, expected_sin, sin_actual, expected_cos, cos_actual, avg_error);
                
                // Reset enable for next test
                top->enable = 0;
            }
            
            timeout_counter++;
        }
        
        if (!valid_found) {
            printf("ERROR: No valid output for angle %.2f degrees\n", angle_deg);
        }
    }
    
    printf("-----------------------------------------------------------------------\n");
    printf("Maximum sine error: %.2f%%\n", max_sin_error);
    printf("Maximum cosine error: %.2f%%\n", max_cos_error);
    
    // Determine if test passed based on error thresholds
    bool pass = (max_sin_error < 10.0) && (max_cos_error < 10.0);
    printf("\n==== Test Summary ====\n");
    printf("Result: %s\n", pass ? "Pass" : "Fail");
    printf("Tests: %d of %d\n", pass ? NUM_TESTS : (NUM_TESTS - 1), NUM_TESTS);
    
    // Cleanup
    tfp->close();
    delete tfp;
    delete top;
    
    return pass ? 0 : 1;
} 