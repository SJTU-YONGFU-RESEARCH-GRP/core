#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vcordic_core.h"
#include <cmath>
#include <iomanip>
#include <vector>

// Define the parameters to match the Verilog module
#define DATA_WIDTH 16
#define PHASE_WIDTH 16
#define ITERATIONS 10

// Scale factor for angle representation (2*PI maps to 2^16)
#define ANGLE_SCALE (65536.0 / (2.0 * M_PI))

// CORDIC gain factor for 10 iterations
#define CORDIC_GAIN 1.6467602874

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
    // Scale to fixed point, accounting for CORDIC gain
    double scaled = val * (1 << (DATA_WIDTH-2));
    return static_cast<uint16_t>(scaled) & 0xFFFF;
}

// Convert fixed-point back to floating-point
double fixedToFloat(uint16_t fixed) {
    int16_t signed_fixed = static_cast<int16_t>(fixed);
    // Account for CORDIC gain in the conversion
    return static_cast<double>(signed_fixed) / ((1 << (DATA_WIDTH-2)) * CORDIC_GAIN);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize Verilator
    Vcordic_core* dut = new Vcordic_core;
    
    // Initialize VCD trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("cordic_core_waveform.vcd");
    
    std::cout << "CORDIC Core Test" << std::endl;
    std::cout << "Data Width: " << DATA_WIDTH << ", Phase Width: " << PHASE_WIDTH 
              << ", Iterations: " << ITERATIONS << std::endl;
    
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
    
    // Run tests for each angle
    for (size_t i = 0; i < test_angles.size(); i++) {
        double angle = test_angles[i];
        total_tests++;
        
        // Set inputs for rotation mode
        dut->x_in = scaleToFixed(1.0);  // Initial x = 1.0 (will be scaled by CORDIC gain)
        dut->y_in = 0;                  // Initial y = 0
        dut->z_in = radToFixed(angle);  // Angle to rotate by
        
        // Since this is combinational, just evaluate once
        dut->eval();
        
        std::cout << "\nTest " << (i + 1) << ": Angle = " 
                  << std::fixed << std::setprecision(4) << angle 
                  << " rad (" << (angle * 180.0 / M_PI) << " deg)" << std::endl;
        
        // Calculate reference values
        double ref_sin, ref_cos;
        calculateReference(angle, ref_sin, ref_cos);
        
        // Get results from the DUT
        double dut_cos = fixedToFloat(dut->x_out);
        double dut_sin = fixedToFloat(dut->y_out);
        
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
            std::cout << "Test " << (i + 1) << ": PASS" << std::endl;
            tests_passed++;
        } else {
            std::cout << "Test " << (i + 1) << ": FAIL" << std::endl;
            std::cout << "  Sin error: " << sin_error << (sin_ok ? " (OK)" : " (FAIL)") << std::endl;
            std::cout << "  Cos error: " << cos_error << (cos_ok ? " (OK)" : " (FAIL)") << std::endl;
            test_passed = false;
        }
        
        // Dump wave trace
        m_trace->dump(i);
    }
    
    // Print standardized test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (test_passed ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << tests_passed << " of " << total_tests << std::endl;
    
    // Clean up
    m_trace->close();
    delete m_trace;
    delete dut;
    
    return test_passed ? EXIT_SUCCESS : EXIT_FAILURE;
} 