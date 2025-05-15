#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vparameterized_crc_generator.h"

#define MAX_SIM_TIME 300
vluint64_t sim_time = 0;

// CRC-8 calculation reference for verification
uint8_t calculate_crc8(uint8_t *data, size_t length) {
    uint8_t crc = 0x00; // Init value
    uint8_t poly = 0x07; // Polynomial
    
    for (size_t i = 0; i < length; i++) {
        crc ^= data[i];
        for (int j = 0; j < 8; j++) {
            if (crc & 0x80) {
                crc = (crc << 1) ^ poly;
            } else {
                crc <<= 1;
            }
        }
    }
    
    return crc;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize Verilated modules
    Vparameterized_crc_generator *dut = new Vparameterized_crc_generator;
    
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    
    // Test data
    uint8_t test_data[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08};
    size_t test_data_len = sizeof(test_data) / sizeof(test_data[0]);
    uint8_t expected_crc = calculate_crc8(test_data, test_data_len);
    
    // Initialize signals
    dut->clk = 0;
    dut->rst_n = 0;
    dut->data_in = 0;
    dut->data_valid = 0;
    dut->crc_init = 0;
    
    // Reset
    dut->rst_n = 0;
    for (int i = 0; i < 5; i++) {
        dut->clk = !dut->clk;
        dut->eval();
        m_trace->dump(sim_time++);
        dut->clk = !dut->clk;
        dut->eval();
        m_trace->dump(sim_time++);
    }
    dut->rst_n = 1;
    
    // Initialize CRC calculation
    dut->crc_init = 1;
    dut->clk = !dut->clk;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->clk = !dut->clk;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->crc_init = 0;
    
    // Process test data
    for (size_t i = 0; i < test_data_len; i++) {
        dut->data_in = test_data[i];
        dut->data_valid = 1;
        
        dut->clk = !dut->clk;
        dut->eval();
        m_trace->dump(sim_time++);
        dut->clk = !dut->clk;
        dut->eval();
        m_trace->dump(sim_time++);
        
        dut->data_valid = 0;
        
        // Wait a cycle
        dut->clk = !dut->clk;
        dut->eval();
        m_trace->dump(sim_time++);
        dut->clk = !dut->clk;
        dut->eval();
        m_trace->dump(sim_time++);
    }
    
    // Wait a few more cycles for calculation to complete
    for (int i = 0; i < 10; i++) {
        dut->clk = !dut->clk;
        dut->eval();
        m_trace->dump(sim_time++);
        dut->clk = !dut->clk;
        dut->eval();
        m_trace->dump(sim_time++);
    }
    
    // Check result
    uint8_t result_crc = dut->crc_out;
    std::cout << "Expected CRC: 0x" << std::hex << (int)expected_crc << std::endl;
    std::cout << "Calculated CRC: 0x" << std::hex << (int)result_crc << std::endl;
    
    if (result_crc == expected_crc) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
    
    // Clean up
    m_trace->close();
    delete m_trace;
    delete dut;
    
    return 0;
} 