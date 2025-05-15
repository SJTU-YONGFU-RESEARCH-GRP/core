#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vdigital_thermometer_controller.h"

// Test configuration
#define CLK_PERIOD_NS 1000
#define SIM_TIME_NS 10000000
#define TEST_CASES 5
#define TEST_VERBOSE 1

// Helper macros
#define HIGH 1
#define LOW 0
#define RESET_CYCLES 5

// This testbench uses a standardized test summary format for output:
// ==== Test Summary ====
// Result: Pass|Fail
// Tests: X of X
// This makes it easier to parse the output for automated testing.

class ThermometerTester {
public:
    ThermometerTester() {
        // Initialize Verilator and create VCD trace
        Verilated::traceEverOn(true);
        m_trace = new VerilatedVcdC;
        m_dut = new Vdigital_thermometer_controller;
        m_dut->trace(m_trace, 5);
        m_trace->open("thermometer_controller_sim.vcd");
        
        m_tickCount = 0;
        m_testsPassed = 0;
        m_totalTests = TEST_CASES;
    }

    ~ThermometerTester() {
        m_trace->close();
        delete m_dut;
        delete m_trace;
    }

    void tick() {
        // Clock edge transitions
        m_tickCount++;
        
        // Toggle clock
        m_dut->clk = 1;
        m_dut->eval();
        m_trace->dump(m_tickCount * CLK_PERIOD_NS - CLK_PERIOD_NS/4);
        
        m_dut->clk = 0;
        m_dut->eval();
        m_trace->dump(m_tickCount * CLK_PERIOD_NS - CLK_PERIOD_NS/2);
        
        // Process any callbacks
        processTick();
        
        m_dut->eval();
        m_trace->dump(m_tickCount * CLK_PERIOD_NS);
        m_trace->flush();
    }

    void reset() {
        m_dut->rst_n = LOW;
        for (int i = 0; i < RESET_CYCLES; i++) {
            tick();
        }
        m_dut->rst_n = HIGH;
        tick();
    }

    void run() {
        // Initialize all inputs
        m_dut->clk = 0;
        m_dut->rst_n = HIGH;
        m_dut->adc_value = 0;
        m_dut->adc_valid = LOW;
        m_dut->force_update = LOW;
        m_dut->units_select = HIGH;  // Start with Celsius
        
        // Reset the DUT
        reset();
        
        // Test 1: Basic initialization test
        if (TEST_VERBOSE) std::cout << "\nTest 1: Checking initialization state...\n";
        
        // Verify default values after reset
        bool test1 = 
            m_dut->temperature == 0 &&
            m_dut->valid == 0 &&
            m_dut->alert == 0 &&
            m_dut->status == 1;  // STATUS_INITIALIZING
        
        if (test1) {
            m_testsPassed++;
            if (TEST_VERBOSE) std::cout << "✓ Test 1 passed: Initialization state correct\n";
        } else {
            if (TEST_VERBOSE) std::cout << "✗ Test 1 failed: Incorrect initialization state\n";
            if (TEST_VERBOSE) std::cout << "  temperature=" << static_cast<int>(m_dut->temperature) 
                      << " valid=" << m_dut->valid
                      << " alert=" << m_dut->alert
                      << " status=" << static_cast<int>(m_dut->status) << "\n";
        }
        
        // Test 2: Process ADC values and update
        if (TEST_VERBOSE) std::cout << "\nTest 2: Processing ADC values...\n";
        
        // Supply 4 ADC readings (to fill filter buffer)
        for (int i = 0; i < 4; i++) {
            // Process a normal temperature (20°C = ~204 for 10-bit ADC assuming 0-1023 maps to -20 to 80°C)
            uint16_t adc_val = 204;
            m_dut->adc_value = adc_val;
            m_dut->adc_valid = HIGH;
            tick();
            m_dut->adc_valid = LOW;
            
            // Let the controller process (at least 4 cycles for the state machine)
            for (int j = 0; j < 5; j++) {
                tick();
                if (TEST_VERBOSE) std::cout << "  After tick: valid=" << m_dut->valid 
                       << " temperature=" << static_cast<int>(m_dut->temperature) 
                       << " update=" << m_dut->update
                       << " status=" << static_cast<int>(m_dut->status) << "\n";
            }
        }
        
        // Verify valid flag is set after 4 values are processed
        bool test2 = m_dut->valid == 1;
        
        if (test2) {
            m_testsPassed++;
            if (TEST_VERBOSE) std::cout << "✓ Test 2 passed: Valid flag set correctly\n";
        } else {
            if (TEST_VERBOSE) std::cout << "✗ Test 2 failed: Valid flag not set\n";
        }
        
        // Test 3: Temperature conversion accuracy
        if (TEST_VERBOSE) std::cout << "\nTest 3: Testing temperature conversion accuracy...\n";
        
        // Input a known ADC value for a precise temperature
        // For 10-bit ADC, mapping 0-1023 to -20 to 80°C:
        // 307 ADC value should give ~30°C
        m_dut->adc_value = 307;
        m_dut->adc_valid = HIGH;
        tick();
        m_dut->adc_valid = LOW;
        
        // Let the controller process
        for (int i = 0; i < 10; i++) {
            tick();
            if (TEST_VERBOSE && i > 5) std::cout << "  After tick: temperature=" << static_cast<int>(m_dut->temperature) << "°C\n";
        }
        
        // Input more of the same value to stabilize the filter
        for (int i = 0; i < 3; i++) {
            m_dut->adc_value = 307;
            m_dut->adc_valid = HIGH;
            tick();
            m_dut->adc_valid = LOW;
            for (int j = 0; j < 5; j++) {
                tick();
                if (TEST_VERBOSE && j > 3) std::cout << "  After tick: temperature=" << static_cast<int>(m_dut->temperature) << "°C\n";
            }
        }
        
        // Check if temperature is close to expected 30°C
        // With 10-bit to 8-bit conversion, exact value might vary slightly
        bool test3 = (m_dut->temperature >= 28 && m_dut->temperature <= 32);
        
        if (test3) {
            m_testsPassed++;
            if (TEST_VERBOSE) std::cout << "✓ Test 3 passed: Temperature conversion within expected range\n";
            if (TEST_VERBOSE) std::cout << "  temperature=" << static_cast<int>(m_dut->temperature) << "°C\n";
        } else {
            if (TEST_VERBOSE) std::cout << "✗ Test 3 failed: Temperature out of expected range\n";
            if (TEST_VERBOSE) std::cout << "  temperature=" << static_cast<int>(m_dut->temperature) << "°C\n";
        }
        
        // Test 4: Units conversion (Celsius to Fahrenheit)
        if (TEST_VERBOSE) std::cout << "\nTest 4: Testing units conversion...\n";
        
        // Change to Fahrenheit
        m_dut->units_select = LOW;
        
        // Force an update
        m_dut->force_update = HIGH;
        tick();
        m_dut->force_update = LOW;
        
        // Let the controller process
        for (int i = 0; i < 10; i++) {
            tick();
            if (TEST_VERBOSE && i > 5) std::cout << "  After tick: temperature=" << static_cast<int>(m_dut->temperature) << "°F\n";
        }
        
        // Expected: ~30°C = 86°F
        // Because of integer math and rounding, accept 84-88°F
        bool test4 = (m_dut->temperature >= 84 && m_dut->temperature <= 88);
        
        if (test4) {
            m_testsPassed++;
            if (TEST_VERBOSE) std::cout << "✓ Test 4 passed: Units conversion working correctly\n";
            if (TEST_VERBOSE) std::cout << "  temperature=" << static_cast<int>(m_dut->temperature) << "°F\n";
        } else {
            if (TEST_VERBOSE) std::cout << "✗ Test 4 failed: Units conversion incorrect\n";
            if (TEST_VERBOSE) std::cout << "  temperature=" << static_cast<int>(m_dut->temperature) << "°F\n";
        }
        
        // Test 5: Temperature alert
        if (TEST_VERBOSE) std::cout << "\nTest 5: Testing temperature alert...\n";
        
        // Switch back to Celsius
        m_dut->units_select = HIGH;
        
        // Set temperature above threshold (45°C)
        // For 10-bit ADC mapping to -20 to 80°C, ~460 should give us ~45°C
        m_dut->adc_value = 460;
        m_dut->adc_valid = HIGH;
        tick();
        m_dut->adc_valid = LOW;
        
        // Fill the buffer with high temperature values
        for (int i = 0; i < 5; i++) {
            m_dut->adc_value = 460;
            m_dut->adc_valid = HIGH;
            tick();
            m_dut->adc_valid = LOW;
            for (int j = 0; j < 5; j++) tick();
        }
        
        // Check if alert is triggered
        bool test5 = m_dut->alert == 1 && m_dut->status == 4; // STATUS_ALERT
        
        if (test5) {
            m_testsPassed++;
            if (TEST_VERBOSE) std::cout << "✓ Test 5 passed: Alert triggered correctly\n";
        } else {
            if (TEST_VERBOSE) std::cout << "✗ Test 5 failed: Alert was not triggered\n";
            if (TEST_VERBOSE) std::cout << "  alert=" << m_dut->alert << " status=" << static_cast<int>(m_dut->status) << "\n";
        }
        
        // Print test summary
        std::cout << "==== Test Summary ====\n";
        if (m_testsPassed == m_totalTests) {
            std::cout << "Result: Pass\n";
        } else {
            std::cout << "Result: Fail\n";
        }
        std::cout << "Tests: " << m_testsPassed << " of " << m_totalTests << "\n";
    }

private:
    Vdigital_thermometer_controller* m_dut;
    VerilatedVcdC* m_trace;
    unsigned long m_tickCount;
    int m_testsPassed;
    int m_totalTests;
    
    void processTick() {
        // Empty for this test
    }
};

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create and run the tester
    ThermometerTester tester;
    tester.run();
    
    return 0;
} 