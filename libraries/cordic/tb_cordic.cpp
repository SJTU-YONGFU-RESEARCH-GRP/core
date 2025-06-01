#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vcordic.h"
#include <cmath>
#include <iomanip>
#include <vector>

#define MAX_SIM_TIME 500
vluint64_t sim_time = 0;

// Define the parameters to match the Verilog module
#define WIDTH 16
#define ITERATIONS 12
#define MODE 0  // 0: Rotation mode, 1: Vector mode

// Scale factor for angle representation (2*PI maps to 2^16)
#define ANGLE_SCALE (65536.0 / (2.0 * M_PI))

// Convert radians to fixed-point representation
uint16_t radToFixed(double rad) {
    return static_cast<uint16_t>((rad * ANGLE_SCALE) + 0.5) & 0xFFFF;
}

// Convert fixed-point to radians
double fixedToRad(uint16_t fixed) {
    int16_t signed_fixed = static_cast<int16_t>(fixed);
    return static_cast<double>(signed_fixed) / ANGLE_SCALE;
}

// Calculate the reference sine and cosine values for comparison
void calculateReference(double angle, double &refSin, double &refCos) {
    refSin = sin(angle);
    refCos = cos(angle);
}

// Scale a floating-point value to fixed-point representation
uint16_t scaleToFixed(double val) {
    // Scale factor of 0.6 is approximately the gain factor of CORDIC
    double scaled = val * 0.6 * (1 << (WIDTH-2));
    return static_cast<uint16_t>(scaled) & 0xFFFF;
}

// Convert fixed-point back to floating-point
double fixedToFloat(uint16_t fixed) {
    int16_t signed_fixed = static_cast<int16_t>(fixed);
    return static_cast<double>(signed_fixed) / (0.6 * (1 << (WIDTH-2)));
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize Verilator
    Vcordic* dut = new Vcordic;
    
    // Initialize VCD trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("cordic_waveform.vcd");
    
    std::cout << "CORDIC Test in " << (MODE == 0 ? "Rotation" : "Vector") << " Mode" << std::endl;
    std::cout << "Width: " << WIDTH << ", Iterations: " << ITERATIONS << std::endl;
    
    // Initialize signals
    dut->clk = 0;
    dut->rst_n = 0;  // Start with reset active
    dut->start = 0;
    dut->x_in = 0;
    dut->y_in = 0;
    dut->z_in = 0;
    
    // Test variables
    bool test_passed = true;
    int tests_passed = 0;
    int total_tests = 0;
    
    // Create test angles (in radians)
    std::vector<double> test_angles = {
        0.0,            // 0 degrees
        M_PI / 6.0,     // 30 degrees
        M_PI / 4.0,     // 45 degrees
        M_PI / 3.0,     // 60 degrees
        M_PI / 2.0,     // 90 degrees
        2.0 * M_PI / 3.0, // 120 degrees
        M_PI,           // 180 degrees
        3.0 * M_PI / 2.0, // 270 degrees
        5.0 * M_PI / 4.0  // 225 degrees
    };
    
    // Test state variables
    int current_test = -1;
    bool test_in_progress = false;
    int wait_cycles = 0;
    
    // Run simulation
    while (sim_time < MAX_SIM_TIME) {
        // Toggle clock
        dut->clk = !dut->clk;
        
        // On positive clock edge
        if (dut->clk) {
            // Release reset after a few clock cycles
            if (sim_time == 4) {
                dut->rst_n = 1;
            }
            
            // Start a new test when ready
            if (sim_time > 10 && !test_in_progress && current_test < (int)test_angles.size() - 1) {
                current_test++;
                double angle = test_angles[current_test];
                
                // In rotation mode, we start with the magnitude on x-axis
                dut->x_in = scaleToFixed(1.0);  // Initial x = K (CORDIC gain)
                dut->y_in = 0;                  // Initial y = 0
                dut->z_in = radToFixed(angle);  // Angle to rotate by
                
                dut->start = 1;  // Start the CORDIC operation
                test_in_progress = true;
                wait_cycles = 0;
                
                std::cout << "\nTest " << (current_test + 1) << ": Angle = " 
                          << std::fixed << std::setprecision(4) << angle 
                          << " rad (" << (angle * 180.0 / M_PI) << " deg)" << std::endl;
            } else if (test_in_progress && dut->start) {
                dut->start = 0;  // Clear start signal after one cycle
            }
            
            // Check if the current test is done
            if (test_in_progress && dut->done) {
                total_tests++;
                double angle = test_angles[current_test];
                
                // Calculate reference values
                double ref_sin, ref_cos;
                calculateReference(angle, ref_sin, ref_cos);
                
                // Get results from the DUT
                double dut_cos = fixedToFloat(dut->x_out);
                double dut_sin = fixedToFloat(dut->y_out);
                double dut_angle = fixedToRad(dut->z_out);
                
                // Error calculations
                double sin_error = std::abs(ref_sin - dut_sin);
                double cos_error = std::abs(ref_cos - dut_cos);
                
                // Output results
                std::cout << "Expected: sin = " << std::fixed << std::setprecision(6) << ref_sin 
                          << ", cos = " << ref_cos << std::endl;
                std::cout << "Actual:   sin = " << dut_sin << ", cos = " << dut_cos << std::endl;
                
                // Test with acceptable error margin for fixed-point arithmetic
                bool sin_ok = sin_error < 0.05;
                bool cos_ok = cos_error < 0.05;
                bool test_result = sin_ok && cos_ok;
                
                if (test_result) {
                    std::cout << "Test " << (current_test + 1) << ": PASS" << std::endl;
                    tests_passed++;
                } else {
                    std::cout << "Test " << (current_test + 1) << ": FAIL" << std::endl;
                    std::cout << "  Sin error: " << sin_error << (sin_ok ? " (OK)" : " (FAIL)") << std::endl;
                    std::cout << "  Cos error: " << cos_error << (cos_ok ? " (OK)" : " (FAIL)") << std::endl;
                    test_passed = false;
                }
                
                test_in_progress = false;
                wait_cycles = 20;  // Wait before starting next test
            }
            
            // Wait counter for spacing between tests
            if (wait_cycles > 0) {
                wait_cycles--;
            }
        }
        
        // Evaluate model
        dut->eval();
        
        // Dump wave trace
        m_trace->dump(sim_time);
        
        sim_time++;
    }
    
    // Print standardized test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (test_passed ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << tests_passed << " of " << total_tests << std::endl;
    
    // Clean up
    m_trace->close();
    delete m_trace;
    delete dut;
    
    return 0;
} 