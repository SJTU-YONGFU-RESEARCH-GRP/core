#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vparameterized_uart_rx.h"

// Test parameters
#define CLK_FREQ        50000   // Reduced for simulation speed
#define BAUD_RATE       1000    // Reduced for simulation speed
#define CLKS_PER_BIT    (CLK_FREQ / BAUD_RATE)
#define DATA_WIDTH      8
#define PARITY_EN       0
#define PARITY_TYPE     0
#define STOP_BITS       1

// Test data
#define NUM_TEST_BYTES  5

// Function to transmit a byte to the UART RX module
void uart_tx_byte(Vparameterized_uart_rx *dut, VerilatedVcdC *tfp, uint8_t data_byte, uint64_t &sim_time, uint8_t &received_byte, bool &received_flag) {
    std::cout << "  Transmitting start bit (low)" << std::endl;
    // Start bit (low)
    dut->rx = 0;
    for (int i = 0; i < CLKS_PER_BIT; i++) {
        dut->clk = 0;
        dut->eval();
        if (tfp) tfp->dump(sim_time++);
        
        dut->clk = 1;
        dut->eval();
        if (tfp) tfp->dump(sim_time++);
        
        // Check for data_valid
        if (dut->data_valid) {
            received_byte = dut->data_out;
            received_flag = true;
            std::cout << "  *** Received byte during start bit: 0x" << std::hex << (int)received_byte << std::dec << std::endl;
        }
    }
    
    // Data bits (LSB first)
    for (int i = 0; i < DATA_WIDTH; i++) {
        dut->rx = (data_byte >> i) & 0x1;
        std::cout << "  Transmitting data bit " << i << ": " << ((data_byte >> i) & 0x1) << std::endl;
        
        for (int j = 0; j < CLKS_PER_BIT; j++) {
            dut->clk = 0;
            dut->eval();
            if (tfp) tfp->dump(sim_time++);
            
            dut->clk = 1;
            dut->eval();
            if (tfp) tfp->dump(sim_time++);
            
            // Check for data_valid
            if (dut->data_valid) {
                received_byte = dut->data_out;
                received_flag = true;
                std::cout << "  *** Received byte during data bit " << i << ": 0x" << std::hex << (int)received_byte << std::dec << std::endl;
            }
        }
    }
    
    // Parity bit (if enabled)
    if (PARITY_EN) {
        // Calculate parity
        uint8_t parity = PARITY_TYPE;
        for (int i = 0; i < DATA_WIDTH; i++) {
            parity ^= (data_byte >> i) & 0x1;
        }
        
        std::cout << "  Transmitting parity bit: " << (int)parity << std::endl;
        dut->rx = parity;
        for (int i = 0; i < CLKS_PER_BIT; i++) {
            dut->clk = 0;
            dut->eval();
            if (tfp) tfp->dump(sim_time++);
            
            dut->clk = 1;
            dut->eval();
            if (tfp) tfp->dump(sim_time++);
            
            // Check for data_valid
            if (dut->data_valid) {
                received_byte = dut->data_out;
                received_flag = true;
                std::cout << "  *** Received byte during parity bit: 0x" << std::hex << (int)received_byte << std::dec << std::endl;
            }
        }
    }
    
    // Stop bit(s) (high)
    std::cout << "  Transmitting stop bit (high)" << std::endl;
    for (int s = 0; s < STOP_BITS; s++) {
        dut->rx = 1;
        for (int i = 0; i < CLKS_PER_BIT; i++) {
            dut->clk = 0;
            dut->eval();
            if (tfp) tfp->dump(sim_time++);
            
            dut->clk = 1;
            dut->eval();
            if (tfp) tfp->dump(sim_time++);
            
            // Check for data_valid
            if (dut->data_valid) {
                received_byte = dut->data_out;
                received_flag = true;
                std::cout << "  *** Received byte during stop bit: 0x" << std::hex << (int)received_byte << std::dec << std::endl;
            }
        }
    }
    
    // Idle time between bytes (high)
    std::cout << "  Transmitting idle period" << std::endl;
    dut->rx = 1;
    for (int i = 0; i < CLKS_PER_BIT; i++) {
        dut->clk = 0;
        dut->eval();
        if (tfp) tfp->dump(sim_time++);
        
        dut->clk = 1;
        dut->eval();
        if (tfp) tfp->dump(sim_time++);
        
        // Check for data_valid
        if (dut->data_valid) {
            received_byte = dut->data_out;
            received_flag = true;
            std::cout << "  *** Received byte during idle: 0x" << std::hex << (int)received_byte << std::dec << std::endl;
        }
    }
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of the module
    Vparameterized_uart_rx *dut = new Vparameterized_uart_rx;
    
    // Initialize VCD trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("uart_rx_waveform.vcd");
    
    // Initialize simulation time
    uint64_t sim_time = 0;
    
    // Display test parameters
    std::cout << "UART RX Test Parameters:" << std::endl;
    std::cout << "  CLK_FREQ     = " << CLK_FREQ << " Hz" << std::endl;
    std::cout << "  BAUD_RATE    = " << BAUD_RATE << " bps" << std::endl;
    std::cout << "  CLKS_PER_BIT = " << CLKS_PER_BIT << std::endl;
    std::cout << "  DATA_WIDTH   = " << DATA_WIDTH << " bits" << std::endl;
    std::cout << "  PARITY_EN    = " << PARITY_EN << std::endl;
    std::cout << "  STOP_BITS    = " << STOP_BITS << std::endl;
    
    // Initialize inputs
    dut->clk = 0;
    dut->rst_n = 0;
    dut->rx = 1;  // Idle state is high
    
    // Reset sequence
    for (int i = 0; i < 10; i++) {
        dut->clk = 0;
        dut->eval();
        tfp->dump(sim_time++);
        
        dut->clk = 1;
        dut->eval();
        tfp->dump(sim_time++);
    }
    
    // Release reset
    dut->rst_n = 1;
    
    // Run a few clock cycles after reset
    for (int i = 0; i < 10; i++) {
        dut->clk = 0;
        dut->eval();
        tfp->dump(sim_time++);
        
        dut->clk = 1;
        dut->eval();
        tfp->dump(sim_time++);
    }
    
    // Test data to send
    uint8_t test_data[NUM_TEST_BYTES] = {0x55, 0xAA, 0x12, 0x34, 0xFF};
    
    // Track received data
    uint8_t received_data[NUM_TEST_BYTES] = {0};
    int received_count = 0;
    bool test_passed = true;
    
    std::cout << "\nStarting UART RX test with " << NUM_TEST_BYTES << " test bytes..." << std::endl;
    
    // Run the simulation for each test byte
    for (int byte_idx = 0; byte_idx < NUM_TEST_BYTES; byte_idx++) {
        std::cout << "Sending byte " << byte_idx << ": 0x" << std::hex << (int)test_data[byte_idx] << std::dec << std::endl;
        
        // Variables to track reception during transmission
        uint8_t received_byte = 0;
        bool received_during_tx = false;
        
        // Send the byte and check for reception during transmission
        uart_tx_byte(dut, tfp, test_data[byte_idx], sim_time, received_byte, received_during_tx);
        
        // If we received the byte during transmission, record it
        if (received_during_tx) {
            received_data[received_count] = received_byte;
            
            // Check if received data matches sent data
            if (received_data[received_count] != test_data[byte_idx]) {
                std::cout << "ERROR: Received data mismatch! Expected: 0x" 
                          << std::hex << (int)test_data[byte_idx] 
                          << ", Got: 0x" << (int)received_data[received_count] << std::dec << std::endl;
                test_passed = false;
            } else {
                std::cout << "SUCCESS: Received correct data byte during transmission!" << std::endl;
            }
            
            received_count++;
            continue;  // Skip waiting for reception
        }
        
        // Run the simulation a bit longer to ensure reception is complete
        int wait_cycles = CLKS_PER_BIT * 2;  // Wait for 2 bit times
        
        std::cout << "Waiting for reception to complete (" << wait_cycles << " clock cycles)..." << std::endl;
        
        bool received_this_byte = false;
        
        for (int i = 0; i < wait_cycles && !received_this_byte; i++) {
            dut->clk = 0;
            dut->eval();
            tfp->dump(sim_time++);
            
            dut->clk = 1;
            dut->eval();
            
            // Check for valid data
            if (dut->data_valid) {
                received_data[received_count] = dut->data_out;
                std::cout << "*** Received byte after transmission: 0x" << std::hex << (int)dut->data_out << std::dec << std::endl;
                
                // Check for errors
                if (dut->parity_error) {
                    std::cout << "ERROR: Parity error detected!" << std::endl;
                    test_passed = false;
                }
                
                if (dut->frame_error) {
                    std::cout << "ERROR: Frame error detected!" << std::endl;
                    test_passed = false;
                }
                
                // Check if received data matches sent data
                if (received_data[received_count] != test_data[byte_idx]) {
                    std::cout << "ERROR: Received data mismatch! Expected: 0x" 
                              << std::hex << (int)test_data[byte_idx] 
                              << ", Got: 0x" << (int)received_data[received_count] << std::dec << std::endl;
                    test_passed = false;
                } else {
                    std::cout << "SUCCESS: Received correct data byte!" << std::endl;
                }
                
                received_count++;
                received_this_byte = true;
            }
            
            tfp->dump(sim_time++);
        }
        
        if (!received_this_byte && !received_during_tx) {
            std::cout << "ERROR: Did not receive byte " << byte_idx << "!" << std::endl;
        }
        
        // Add additional idle time between bytes
        for (int i = 0; i < CLKS_PER_BIT * 2; i++) {
            dut->clk = 0;
            dut->eval();
            tfp->dump(sim_time++);
            
            dut->clk = 1;
            dut->eval();
            
            // Check for late data_valid
            if (dut->data_valid && !received_this_byte && !received_during_tx) {
                received_data[received_count] = dut->data_out;
                std::cout << "*** Late received byte: 0x" << std::hex << (int)dut->data_out << std::dec << std::endl;
                
                // Check if received data matches sent data
                if (received_data[received_count] != test_data[byte_idx]) {
                    std::cout << "ERROR: Received data mismatch! Expected: 0x" 
                              << std::hex << (int)test_data[byte_idx] 
                              << ", Got: 0x" << (int)received_data[received_count] << std::dec << std::endl;
                    test_passed = false;
                } else {
                    std::cout << "SUCCESS: Received correct data byte (late)!" << std::endl;
                }
                
                received_count++;
                received_this_byte = true;
            }
            
            tfp->dump(sim_time++);
        }
    }
    
    // Check if all bytes were received
    if (received_count != NUM_TEST_BYTES) {
        std::cout << "ERROR: Not all bytes were received! Expected: " << NUM_TEST_BYTES 
                  << ", Got: " << received_count << std::endl;
        test_passed = false;
    }
    
    // Print standardized test summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (test_passed ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << (test_passed ? NUM_TEST_BYTES : received_count) << " of " << NUM_TEST_BYTES << std::endl;
    
    // Cleanup
    tfp->close();
    delete tfp;
    delete dut;
    
    return test_passed ? 0 : 1;
} 