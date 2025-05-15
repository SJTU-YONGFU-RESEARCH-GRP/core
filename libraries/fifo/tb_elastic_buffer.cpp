#include <stdlib.h>
#include <iostream>
#include <vector>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Velastic_buffer.h"

#define MAX_SIM_TIME 1000
vluint64_t sim_time = 0;
vluint64_t wr_posedge_cnt = 0;
vluint64_t rd_posedge_cnt = 0;

// Test parameters
#define DATA_WIDTH 8
#define DEPTH 8
#define RATE_RATIO 2  // Read clock is 2x faster than write clock

void wr_clock_cycle(Velastic_buffer *dut, VerilatedVcdC *m_trace) {
    dut->wr_clk = 0;
    dut->eval();
    sim_time++;
    m_trace->dump(sim_time);
    
    dut->wr_clk = 1;
    dut->eval();
    sim_time++;
    m_trace->dump(sim_time);
    wr_posedge_cnt++;
}

void rd_clock_cycle(Velastic_buffer *dut, VerilatedVcdC *m_trace) {
    dut->rd_clk = 0;
    dut->eval();
    sim_time++;
    m_trace->dump(sim_time);
    
    dut->rd_clk = 1;
    dut->eval();
    sim_time++;
    m_trace->dump(sim_time);
    rd_posedge_cnt++;
}

// Function to write data to FIFO
bool write_to_fifo(Velastic_buffer *dut, VerilatedVcdC *m_trace, uint8_t data) {
    if (dut->wr_full) {
        return false;
    }
    
    dut->wr_en = 1;
    dut->wr_data = data;
    wr_clock_cycle(dut, m_trace);
    dut->wr_en = 0;
    
    return true;
}

// Function to read data from FIFO
bool read_from_fifo(Velastic_buffer *dut, VerilatedVcdC *m_trace, uint8_t &data) {
    if (dut->rd_empty) {
        return false;
    }
    
    dut->rd_en = 1;
    rd_clock_cycle(dut, m_trace);
    data = dut->rd_data;
    dut->rd_en = 0;
    rd_clock_cycle(dut, m_trace);  // Extra cycle to account for registered output
    
    return true;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize Verilator
    Velastic_buffer *dut = new Velastic_buffer;
    
    // Enable waveform tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    
    // Initialize signals
    dut->wr_clk = 0;
    dut->rd_clk = 0;
    dut->wr_rst_n = 0;
    dut->rd_rst_n = 0;
    dut->wr_en = 0;
    dut->rd_en = 0;
    dut->wr_data = 0;
    
    // Apply reset to both domains
    for (int i = 0; i < 5; i++) {
        wr_clock_cycle(dut, m_trace);
        // Run read clock at 2x the rate
        for (int j = 0; j < RATE_RATIO; j++) {
            rd_clock_cycle(dut, m_trace);
        }
    }
    
    dut->wr_rst_n = 1;
    dut->rd_rst_n = 1;
    
    // Run a few more cycles after reset
    for (int i = 0; i < 5; i++) {
        wr_clock_cycle(dut, m_trace);
        for (int j = 0; j < RATE_RATIO; j++) {
            rd_clock_cycle(dut, m_trace);
        }
    }
    
    std::cout << "Starting Elastic Buffer test..." << std::endl;
    
    // Test 1: Fill buffer with write clock running
    std::cout << "Test 1: Fill buffer with write clock running" << std::endl;
    std::vector<uint8_t> test_data;
    
    for (int i = 1; i <= DEPTH; i++) {
        uint8_t data = i;
        test_data.push_back(data);
        
        if (write_to_fifo(dut, m_trace, data)) {
            std::cout << "Wrote data: " << (int)data;
            std::cout << " (wr_count=" << (int)dut->wr_count << ")" << std::endl;
        } else {
            std::cout << "Failed to write data: " << (int)data << " (buffer full)" << std::endl;
        }
        
        // Run read clock (but don't read data yet)
        for (int j = 0; j < RATE_RATIO; j++) {
            rd_clock_cycle(dut, m_trace);
        }
    }
    
    // Test 2: Read data with read clock running faster
    std::cout << "\nTest 2: Read data with read clock running faster" << std::endl;
    
    for (int i = 0; i < DEPTH; i++) {
        uint8_t data;
        if (read_from_fifo(dut, m_trace, data)) {
            std::cout << "Read data: " << (int)data;
            std::cout << " (Expected: " << (int)test_data[i] << ")";
            std::cout << " (rd_count=" << (int)dut->rd_count << ")" << std::endl;
        } else {
            std::cout << "Failed to read data (buffer empty)" << std::endl;
        }
        
        // Run write clock (but don't write data)
        wr_clock_cycle(dut, m_trace);
    }
    
    // Test 3: Continuous operation with different clock rates
    std::cout << "\nTest 3: Continuous operation with different clock rates" << std::endl;
    
    // Reset test data vector
    test_data.clear();
    
    // Continuous operation for a while
    for (int i = 0; i < 20; i++) {
        // Write data on some cycles
        if (i % 2 == 0) {
            uint8_t data = 100 + i;
            test_data.push_back(data);
            
            if (write_to_fifo(dut, m_trace, data)) {
                std::cout << "Cycle " << i << ": Wrote data " << (int)data;
                std::cout << " (wr_count=" << (int)dut->wr_count << ")" << std::endl;
            }
        } else {
            wr_clock_cycle(dut, m_trace);
        }
        
        // Read data on some cycles (at faster rate)
        for (int j = 0; j < RATE_RATIO; j++) {
            if (!test_data.empty() && !dut->rd_empty && (i % 3 == 0 || j > 0)) {
                uint8_t data;
                if (read_from_fifo(dut, m_trace, data)) {
                    std::cout << "Cycle " << i << "." << j << ": Read data " << (int)data;
                    std::cout << " (Expected: " << (int)test_data.front() << ")";
                    std::cout << " (rd_count=" << (int)dut->rd_count << ")" << std::endl;
                    test_data.erase(test_data.begin());
                }
            } else {
                rd_clock_cycle(dut, m_trace);
            }
        }
    }
    
    // Test 4: Check almost_full and almost_empty flags
    std::cout << "\nTest 4: Check almost_full and almost_empty flags" << std::endl;
    
    // Fill buffer to almost full
    while (!dut->wr_almost_full) {
        write_to_fifo(dut, m_trace, 200);
        
        // Run read clock (but don't read)
        for (int j = 0; j < RATE_RATIO; j++) {
            rd_clock_cycle(dut, m_trace);
        }
    }
    
    std::cout << "Buffer almost full: wr_count=" << (int)dut->wr_count 
              << ", wr_almost_full=" << (int)dut->wr_almost_full << std::endl;
    
    // Read until almost empty
    while (!dut->rd_almost_empty) {
        uint8_t data;
        read_from_fifo(dut, m_trace, data);
        
        // Run write clock (but don't write)
        wr_clock_cycle(dut, m_trace);
    }
    
    std::cout << "Buffer almost empty: rd_count=" << (int)dut->rd_count 
              << ", rd_almost_empty=" << (int)dut->rd_almost_empty << std::endl;
    
    std::cout << "\nElastic Buffer test completed successfully!" << std::endl;
    
    // Cleanup
    m_trace->close();
    delete m_trace;
    delete dut;
    
    return 0;
} 