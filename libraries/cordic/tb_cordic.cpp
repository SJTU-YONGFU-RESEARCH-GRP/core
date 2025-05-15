#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vcordic.h"
#include <iostream>
#include <cmath>

// Test the CORDIC module
// We will test the rotation mode (MODE=0) to compute sine/cosine values

int main(int argc, char** argv) {
    // Initialize Verilators variables
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    // Create an instance of our module under test
    Vcordic* tb = new Vcordic;
    
    // Create a trace file
    VerilatedVcdC* tfp = new VerilatedVcdC;
    tb->trace(tfp, 99);
    tfp->open("cordic.vcd");
    
    // Initial values
    tb->clk = 0;
    tb->rst_n = 0;
    tb->start = 0;
    tb->x_in = 0;
    tb->y_in = 0;
    tb->z_in = 0;
    
    // Clock cycle counter
    int tick_count = 0;
    
    // Reset for 5 clock cycles
    for (int i = 0; i < 10; i++) {
        tb->clk = !tb->clk;
        if (i == 5) tb->rst_n = 1;  // Release reset
        tb->eval();
        tfp->dump(tick_count++);
    }
    
    // Test for several angles
    const int num_tests = 8;
    int16_t test_angles[num_tests] = {
        0,                  // 0 degrees
        8192,               // 45 degrees (π/4)
        16384,              // 90 degrees (π/2)
        24576,              // 135 degrees (3π/4)
        32767,              // 180 degrees (π) - using max int16 value
        -24576,             // -135 degrees (-3π/4)
        -16384,             // -90 degrees (-π/2)
        -8192               // -45 degrees (-π/4)
    };
    
    // Expected results - the values after rotation should directly give
    // cosine in x and sine in y, scaled to 16384 (2^14)
    // We need to compensate for CORDIC gain in our input values
    const double scale = 16384.0;  // 2^14
    
    std::cout << "CORDIC Sin/Cos Test\n";
    std::cout << "==================\n";
    
    // Run each test case
    for (int test = 0; test < num_tests; test++) {
        // Setup initial values - in rotation mode, we start with:
        // x = CORDIC gain (to compensate for the algorithm's gain)
        // y = 0
        // z = input angle
        tb->x_in = 9949;  // Fixed point representation of CORDIC gain compensation (0.607 * 2^14)
        tb->y_in = 0;
        tb->z_in = test_angles[test];
        
        // Start the CORDIC calculation
        tb->start = 1;
        tb->clk = !tb->clk; tb->eval(); tfp->dump(tick_count++);
        tb->clk = !tb->clk; tb->eval(); tfp->dump(tick_count++);
        
        // Clear start signal
        tb->start = 0;
        
        int timeout = 100;  // Maximum cycles to wait
        int cycle = 0;
        
        // Wait until the done signal is asserted
        while (!tb->done && cycle < timeout) {
            tb->clk = !tb->clk; tb->eval(); tfp->dump(tick_count++);
            tb->clk = !tb->clk; tb->eval(); tfp->dump(tick_count++);
            cycle++;
        }
        
        if (cycle >= timeout) {
            std::cerr << "Error: Test timed out!\n";
            break;
        }
        
        // Read the results
        int16_t cos_result = tb->x_out;
        int16_t sin_result = tb->y_out;
        
        // Expected values (cos and sin scaled to match our fixed-point representation)
        double angle_rad = test_angles[test] * M_PI / 32768.0;
        int16_t expected_cos = (int16_t)(cos(angle_rad) * scale);
        int16_t expected_sin = (int16_t)(sin(angle_rad) * scale);
        
        // Calculate error
        int16_t cos_error = cos_result - expected_cos;
        int16_t sin_error = sin_result - expected_sin;
        
        // Display results
        double angle_deg = test_angles[test] * 180.0 / 32768.0;
        std::cout << "Angle: " << angle_deg << " degrees\n";
        std::cout << "  Cos: " << cos_result << " (expected: " << expected_cos 
                 << ", error: " << cos_error << ")\n";
        std::cout << "  Sin: " << sin_result << " (expected: " << expected_sin
                 << ", error: " << sin_error << ")\n";
        std::cout << "----------------\n";
        
        // Add a small delay between tests
        for (int i = 0; i < 4; i++) {
            tb->clk = !tb->clk; tb->eval(); tfp->dump(tick_count++);
        }
    }
    
    // Cleanup
    tfp->close();
    delete tfp;
    delete tb;
    
    std::cout << "Test completed.\n";
    return 0;
} 