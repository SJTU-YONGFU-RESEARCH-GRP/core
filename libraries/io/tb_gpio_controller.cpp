#include "Vgpio_controller.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>
#include <iomanip>
#include <string>
#include <bitset>

// Custom driver to simulate bidirectional signals
void drive_pin(uint32_t& gpio_pins, uint8_t pin_idx, bool value) {
    if (value) {
        gpio_pins |= (1 << pin_idx);
    } else {
        gpio_pins &= ~(1 << pin_idx);
    }
}

// Function to handle I/O pins bidirectionally based on direction
void handle_bidirectional_pins(Vgpio_controller* dut, uint32_t& pin_values, uint8_t pin_count) {
    // For each pin
    for (uint8_t i = 0; i < pin_count; i++) {
        uint32_t mask = (1 << i);
        
        if ((dut->gpio_dir >> i) & 1) {
            // Pin is set as output - read from dut->gpio_out
            if ((dut->gpio_out >> i) & 1) {
                pin_values |= mask;
            } else {
                pin_values &= ~mask;
            }
        }
        // Otherwise external driver controls the pin
    }
    
    // Apply pin values to the dut
    dut->gpio_pins = pin_values;
}

void clock_cycle(Vgpio_controller* dut, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    dut->clk = 0;
    dut->eval();
    if (tfp) tfp->dump(sim_time++);
    
    dut->clk = 1;
    dut->eval();
    if (tfp) tfp->dump(sim_time++);
}

bool test_gpio_controller(std::unique_ptr<Vgpio_controller>& dut, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    const uint8_t PIN_COUNT = 8;  // Use 8 pins for testing
    bool pass = true;
    int tests_passed = 0;
    int total_tests = 0;
    
    std::cout << "Testing GPIO Controller with " << PIN_COUNT << " pins" << std::endl;
    std::cout << "-----------------------------------------------------" << std::endl;
    
    // External pin states (what would be physically connected)
    uint32_t external_pin_values = 0;
    
    // Reset the device
    dut->rst_n = 0;
    clock_cycle(dut.get(), tfp, sim_time);
    clock_cycle(dut.get(), tfp, sim_time);
    dut->rst_n = 1;
    
    // Initialize all control signals
    dut->gpio_dir = 0;          // All pins as inputs
    dut->gpio_out = 0;
    dut->int_enable = 0;        // Disable interrupts
    dut->int_type = 0;
    dut->int_polarity = 0;
    dut->int_clear = 0;
    dut->gpio_pins = 0;
    
    // Test 1: Output functionality
    std::cout << "\nTest 1: Output Functionality" << std::endl;
    total_tests++;
    
    // Set pins 0, 2, 4, 6 as outputs with value 1
    dut->gpio_dir = 0x55;   // 01010101 - odd pins as outputs
    dut->gpio_out = 0x55;   // Set output pins to 1
    
    // Apply control signals
    clock_cycle(dut.get(), tfp, sim_time);
    
    // Update bidirectional pins
    handle_bidirectional_pins(dut.get(), external_pin_values, PIN_COUNT);
    clock_cycle(dut.get(), tfp, sim_time);
    
    // Check that output pins are set correctly
    std::cout << "gpio_pins = 0x" << std::hex << static_cast<int>(dut->gpio_pins)
              << " (Expected: 0x55)" << std::endl;
    
    bool test1_pass = (dut->gpio_pins & dut->gpio_dir) == (dut->gpio_out & dut->gpio_dir);
    std::cout << "Test 1 result: " << (test1_pass ? "PASS" : "FAIL") << std::endl;
    if (test1_pass) tests_passed++;
    pass &= test1_pass;
    
    // Test 2: Input functionality
    std::cout << "\nTest 2: Input Functionality" << std::endl;
    total_tests++;
    
    // Set all pins as inputs
    dut->gpio_dir = 0x00;
    
    // Drive external values on pins
    external_pin_values = 0xAA;  // 10101010
    dut->gpio_pins = external_pin_values;
    
    // Apply and read
    clock_cycle(dut.get(), tfp, sim_time);
    clock_cycle(dut.get(), tfp, sim_time);
    
    // Check input readings
    std::cout << "gpio_in = 0x" << std::hex << static_cast<int>(dut->gpio_in)
              << " (Expected: 0xAA)" << std::endl;
    
    bool test2_pass = dut->gpio_in == 0xAA;
    std::cout << "Test 2 result: " << (test2_pass ? "PASS" : "FAIL") << std::endl;
    if (test2_pass) tests_passed++;
    pass &= test2_pass;
    
    // Test 3: Level-triggered interrupts
    std::cout << "\nTest 3: Level-triggered Interrupts" << std::endl;
    total_tests++;
    
    // Configure pin 0 for level-high interrupt
    dut->gpio_dir = 0x00;      // All pins as inputs
    dut->int_enable = 0x01;    // Enable interrupt for pin 0
    dut->int_type = 0x00;      // Level-triggered
    dut->int_polarity = 0x01;  // Active high
    dut->int_clear = 0x00;     // No clearing
    
    // Drive a high on pin 0
    external_pin_values = 0x01;
    dut->gpio_pins = external_pin_values;
    
    // Apply and wait for interrupt
    for (int i = 0; i < 5; i++) {
        clock_cycle(dut.get(), tfp, sim_time);
    }
    
    // Check interrupt status
    std::cout << "int_status = 0x" << std::hex << static_cast<int>(dut->int_status)
              << " (Expected: 0x01)" << std::endl;
    std::cout << "int_out = " << static_cast<int>(dut->int_out)
              << " (Expected: 1)" << std::endl;
    
    bool test3_pass = (dut->int_status == 0x01) && (dut->int_out == 1);
    std::cout << "Test 3 result: " << (test3_pass ? "PASS" : "FAIL") << std::endl;
    if (test3_pass) tests_passed++;
    pass &= test3_pass;
    
    // Test 4: Clear interrupt
    std::cout << "\nTest 4: Clear Interrupt" << std::endl;
    total_tests++;
    
    // Clear the interrupt
    dut->int_clear = 0x01;
    clock_cycle(dut.get(), tfp, sim_time);
    dut->int_clear = 0x00;
    clock_cycle(dut.get(), tfp, sim_time);
    
    // Check interrupt is cleared
    std::cout << "int_status = 0x" << std::hex << static_cast<int>(dut->int_status)
              << " (Expected: 0x00)" << std::endl;
    std::cout << "int_out = " << static_cast<int>(dut->int_out)
              << " (Expected: 0)" << std::endl;
    
    bool test4_pass = (dut->int_status == 0x00) && (dut->int_out == 0);
    std::cout << "Test 4 result: " << (test4_pass ? "PASS" : "FAIL") << std::endl;
    if (test4_pass) tests_passed++;
    pass &= test4_pass;
    
    // Test 5: Edge-triggered interrupts
    std::cout << "\nTest 5: Edge-triggered Interrupts" << std::endl;
    total_tests++;
    
    // Configure pin 1 for rising-edge interrupt
    dut->int_enable = 0x02;    // Enable interrupt for pin 1
    dut->int_type = 0x02;      // Edge-triggered
    dut->int_polarity = 0x02;  // Rising edge
    
    // Drive a low on pin 1
    external_pin_values = 0x00;
    dut->gpio_pins = external_pin_values;
    clock_cycle(dut.get(), tfp, sim_time);
    clock_cycle(dut.get(), tfp, sim_time);
    
    // Drive a high on pin 1 to trigger rising edge
    external_pin_values = 0x02;
    dut->gpio_pins = external_pin_values;
    clock_cycle(dut.get(), tfp, sim_time);
    clock_cycle(dut.get(), tfp, sim_time);
    clock_cycle(dut.get(), tfp, sim_time);
    
    // Check interrupt status
    std::cout << "int_status = 0x" << std::hex << static_cast<int>(dut->int_status)
              << " (Expected: 0x02)" << std::endl;
    std::cout << "int_out = " << static_cast<int>(dut->int_out)
              << " (Expected: 1)" << std::endl;
    
    bool test5_pass = (dut->int_status == 0x02) && (dut->int_out == 1);
    std::cout << "Test 5 result: " << (test5_pass ? "PASS" : "FAIL") << std::endl;
    if (test5_pass) tests_passed++;
    pass &= test5_pass;
    
    // Summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (pass ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << tests_passed << " of " << total_tests << std::endl;
    
    return pass;
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of our module under test
    std::unique_ptr<Vgpio_controller> gpio = std::make_unique<Vgpio_controller>();
    
    // Initialize VCD trace file
    Verilated::traceEverOn(true);
    std::unique_ptr<VerilatedVcdC> tfp = std::make_unique<VerilatedVcdC>();
    gpio->trace(tfp.get(), 99);  // Trace 99 levels of hierarchy
    tfp->open("gpio_controller_sim.vcd");
    
    // Initialize simulation time
    vluint64_t sim_time = 0;
    
    // Run tests
    bool test_result = test_gpio_controller(gpio, tfp.get(), sim_time);
    
    // Cleanup
    tfp->close();
    gpio->final();
    
    return test_result ? 0 : 1;
} 