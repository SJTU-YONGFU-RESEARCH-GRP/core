#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vclock_gating.h"

// Simulation time counter
vluint64_t sim_time = 0;

// Function to drive one full clock cycle (low then high)
void clock_cycle(Vclock_gating* dut, VerilatedVcdC* m_trace) {
    dut->clk_in = 0;
    dut->eval();
    sim_time++;
    m_trace->dump(sim_time);

    dut->clk_in = 1;
    dut->eval();
    sim_time++;
    m_trace->dump(sim_time);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    // Instantiate DUT
    Vclock_gating* dut = new Vclock_gating;

    // Enable waveform tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform_clock_gating.vcd");

    // Initialize inputs
    dut->clk_in = 0;
    dut->enable = 0;
    dut->test_enable = 0;

    std::cout << "Starting Clock Gating Test..." << std::endl;
    int total_tests = 4;
    int tests_passed = 0;

    // Test 1: Basic clock gating functionality
    std::cout << "Test 1: Basic clock gating functionality" << std::endl;
    std::cout << "Clock should be gated (enable=0)" << std::endl;
    for (int i = 0; i < 10; i++) {
        clock_cycle(dut, m_trace);
        std::cout << "Cycle " << i << ": clk_in=" << (int)dut->clk_in
                  << ", enable=" << (int)dut->enable
                  << ", clk_out=" << (int)dut->clk_out << std::endl;
    }
    tests_passed++;

    std::cout << "Clock should pass through (enable=1)" << std::endl;
    dut->enable = 1;
    for (int i = 0; i < 10; i++) {
        clock_cycle(dut, m_trace);
        std::cout << "Cycle " << i << ": clk_in=" << (int)dut->clk_in
                  << ", enable=" << (int)dut->enable
                  << ", clk_out=" << (int)dut->clk_out << std::endl;
    }
    tests_passed++;

    // Test 2: Test enable functionality
    std::cout << "Test 2: Test enable functionality" << std::endl;
    std::cout << "Clock should pass through (enable=0, test_enable=1)" << std::endl;
    dut->enable = 0;
    dut->test_enable = 1;
    for (int i = 0; i < 10; i++) {
        clock_cycle(dut, m_trace);
        std::cout << "Cycle " << i << ": clk_in=" << (int)dut->clk_in
                  << ", enable=" << (int)dut->enable
                  << ", test_enable=" << (int)dut->test_enable
                  << ", clk_out=" << (int)dut->clk_out << std::endl;
    }
    tests_passed++;

    // Test 3: Dynamic enable changes
    std::cout << "Test 3: Dynamic enable changes" << std::endl;
    dut->test_enable = 0;
    for (int i = 0; i < 20; i++) {
        if (i % 4 == 0) {
            dut->enable = !dut->enable;
        }
        clock_cycle(dut, m_trace);
        std::cout << "Cycle " << i << ": clk_in=" << (int)dut->clk_in
                  << ", enable=" << (int)dut->enable
                  << ", clk_out=" << (int)dut->clk_out << std::endl;
    }
    tests_passed++;

    std::cout << "==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (tests_passed == total_tests ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << tests_passed << " of " << total_tests << std::endl;

    // Cleanup
    m_trace->close();
    delete m_trace;
    delete dut;

    return 0;
} 