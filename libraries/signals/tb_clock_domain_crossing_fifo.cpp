#include <stdlib.h>
#include <iostream>
#include <vector>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vclock_domain_crossing_fifo.h"

#define MAX_SIM_TIME 2000
vluint64_t sim_time = 0;
vluint64_t wr_posedge_cnt = 0;
vluint64_t rd_posedge_cnt = 0;

// Test parameters
#define DATA_WIDTH 32
#define ADDR_WIDTH 4
#define FIFO_DEPTH (1 << ADDR_WIDTH)

void wr_clock_tick(Vclock_domain_crossing_fifo *dut, VerilatedVcdC *m_trace) {
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

void rd_clock_tick(Vclock_domain_crossing_fifo *dut, VerilatedVcdC *m_trace) {
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

// Function to write data to the FIFO
bool write_data(Vclock_domain_crossing_fifo *dut, VerilatedVcdC *m_trace, uint32_t data) {
    if (dut->wr_full) {
        return false;
    }
    
    dut->wr_en = 1;
    dut->wr_data = data;
    wr_clock_tick(dut, m_trace);
    dut->wr_en = 0;
    wr_clock_tick(dut, m_trace);
    
    return true;
}

// Function to read data from the FIFO
bool read_data(Vclock_domain_crossing_fifo *dut, VerilatedVcdC *m_trace, uint32_t &data) {
    if (dut->rd_empty) {
        return false;
    }
    
    dut->rd_en = 1;
    rd_clock_tick(dut, m_trace);
    data = dut->rd_data;
    dut->rd_en = 0;
    rd_clock_tick(dut, m_trace);
    
    return true;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Initialize Verilator
    Vclock_domain_crossing_fifo *dut = new Vclock_domain_crossing_fifo;
    
    // Enable waveform tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform_cdc_fifo.vcd");
    
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
        wr_clock_tick(dut, m_trace);
        rd_clock_tick(dut, m_trace);
    }
    dut->wr_rst_n = 1;
    dut->rd_rst_n = 1;
    for (int i = 0; i < 2; i++) {
        wr_clock_tick(dut, m_trace);
        rd_clock_tick(dut, m_trace);
    }
    
    std::cout << "Starting Clock Domain Crossing FIFO test..." << std::endl;
    
    // Test 1: Basic write and read operations with same clock frequency
    std::cout << "Test 1: Basic write and read with same clock frequency" << std::endl;
    std::vector<uint32_t> test_data;
    
    // Write data to the FIFO (half full)
    for (int i = 1; i <= FIFO_DEPTH/2; i++) {
        uint32_t data = i * 0x10 + i;
        test_data.push_back(data);
        
        if (write_data(dut, m_trace, data)) {
            std::cout << "Wrote data: 0x" << std::hex << data << std::dec;
            std::cout << " (wr_count=" << (int)dut->wr_count << ")" << std::endl;
        } else {
            std::cout << "Failed to write data: 0x" << std::hex << data << std::dec << " (FIFO full)" << std::endl;
        }
    }
    
    // Run a few more clock cycles to ensure synchronization
    for (int i = 0; i < 5; i++) {
        wr_clock_tick(dut, m_trace);
        rd_clock_tick(dut, m_trace);
    }
    
    // Read data from the FIFO
    std::cout << "\nReading data:" << std::endl;
    for (size_t i = 0; i < test_data.size(); i++) {
        uint32_t data;
        if (read_data(dut, m_trace, data)) {
            std::cout << "Read data: 0x" << std::hex << data << std::dec;
            std::cout << " (Expected: 0x" << std::hex << test_data[i] << std::dec << ")";
            std::cout << " (rd_count=" << (int)dut->rd_count << ")" << std::endl;
        } else {
            std::cout << "Failed to read data (FIFO empty)" << std::endl;
        }
    }
    
    // Test 2: Almost full and almost empty flags
    std::cout << "\nTest 2: Almost full and almost empty flags" << std::endl;
    
    // Fill the FIFO until almost full
    while (!dut->wr_almost_full) {
        if (write_data(dut, m_trace, 0xABCD1234)) {
            std::cout << "Writing data until almost full, wr_count=" << (int)dut->wr_count << std::endl;
        } else {
            std::cout << "Unexpected full condition" << std::endl;
            break;
        }
    }
    
    std::cout << "FIFO almost full: wr_count=" << (int)dut->wr_count 
              << ", wr_almost_full=" << (int)dut->wr_almost_full << std::endl;
    
    // A few more write clock cycles
    for (int i = 0; i < 5; i++) {
        wr_clock_tick(dut, m_trace);
    }
    
    // A few more read clock cycles to sync up
    for (int i = 0; i < 5; i++) {
        rd_clock_tick(dut, m_trace);
    }
    
    // Read data until almost empty
    while (!dut->rd_almost_empty && !dut->rd_empty) {
        uint32_t data;
        if (read_data(dut, m_trace, data)) {
            std::cout << "Reading data until almost empty, rd_count=" << (int)dut->rd_count << std::endl;
        } else {
            std::cout << "Unexpected empty condition" << std::endl;
            break;
        }
    }
    
    std::cout << "FIFO almost empty: rd_count=" << (int)dut->rd_count 
              << ", rd_almost_empty=" << (int)dut->rd_almost_empty << std::endl;
    
    // Test 3: Different clock frequencies - write fast, read slow
    std::cout << "\nTest 3: Different clock frequencies (write faster than read)" << std::endl;
    
    // Reset for clean test
    dut->wr_rst_n = 0;
    dut->rd_rst_n = 0;
    for (int i = 0; i < 5; i++) {
        wr_clock_tick(dut, m_trace);
        rd_clock_tick(dut, m_trace);
    }
    dut->wr_rst_n = 1;
    dut->rd_rst_n = 1;
    for (int i = 0; i < 2; i++) {
        wr_clock_tick(dut, m_trace);
        rd_clock_tick(dut, m_trace);
    }
    
    // Write data quickly (3 write clocks per 1 read clock)
    std::cout << "Writing data with write clock 3x faster than read clock:" << std::endl;
    test_data.clear();
    
    for (int i = 0; i < 8; i++) {
        uint32_t data = 0xF000 + i;
        test_data.push_back(data);
        write_data(dut, m_trace, data);
        
        // Advance read clock less frequently
        if (i % 3 == 0) {
            rd_clock_tick(dut, m_trace);
        }
    }
    
    // Run write clock a bit more to ensure all data gets synchronized
    for (int i = 0; i < 10; i++) {
        wr_clock_tick(dut, m_trace);
    }
    
    // Read data back
    std::cout << "\nReading data back:" << std::endl;
    for (size_t i = 0; i < test_data.size(); i++) {
        uint32_t data;
        
        // Keep running write clock during reads
        for (int j = 0; j < 3; j++) {
            wr_clock_tick(dut, m_trace);
        }
        
        if (read_data(dut, m_trace, data)) {
            std::cout << "Read data: 0x" << std::hex << data << std::dec;
            std::cout << " (Expected: 0x" << std::hex << test_data[i] << std::dec << ")" << std::endl;
        } else {
            std::cout << "Failed to read data (FIFO empty)" << std::endl;
            // Run a few more clocks to check if data arrives later
            for (int k = 0; k < 5; k++) {
                rd_clock_tick(dut, m_trace);
            }
            if (!dut->rd_empty) {
                i--; // Retry
            }
        }
    }
    
    // Test 4: Different clock frequencies - read fast, write slow
    std::cout << "\nTest 4: Different clock frequencies (read faster than write)" << std::endl;
    
    // Reset for clean test
    dut->wr_rst_n = 0;
    dut->rd_rst_n = 0;
    for (int i = 0; i < 5; i++) {
        wr_clock_tick(dut, m_trace);
        rd_clock_tick(dut, m_trace);
    }
    dut->wr_rst_n = 1;
    dut->rd_rst_n = 1;
    for (int i = 0; i < 2; i++) {
        wr_clock_tick(dut, m_trace);
        rd_clock_tick(dut, m_trace);
    }
    
    // Write data slowly (1 write clock per 3 read clocks)
    std::cout << "Writing data with read clock 3x faster than write clock:" << std::endl;
    test_data.clear();
    
    for (int i = 0; i < 8; i++) {
        uint32_t data = 0xE000 + i;
        test_data.push_back(data);
        write_data(dut, m_trace, data);
        
        // Advance read clock more frequently
        for (int j = 0; j < 3; j++) {
            rd_clock_tick(dut, m_trace);
        }
    }
    
    // Run read clock a bit more to ensure all data gets synchronized
    for (int i = 0; i < 10; i++) {
        rd_clock_tick(dut, m_trace);
    }
    
    // Read data back (should initially be empty as write is slower)
    std::cout << "\nTrying to read back data (may initially be empty due to slow writes):" << std::endl;
    
    // Keep trying to read until we get all data
    int items_read = 0;
    while (items_read < (int)test_data.size()) {
        uint32_t data;
        
        if (read_data(dut, m_trace, data)) {
            std::cout << "Read data: 0x" << std::hex << data << std::dec;
            std::cout << " (Expected: 0x" << std::hex << test_data[items_read] << std::dec << ")" << std::endl;
            items_read++;
        } else {
            std::cout << "FIFO empty, waiting for more data..." << std::endl;
            // Run write clock to get more data in
            for (int k = 0; k < 3; k++) {
                wr_clock_tick(dut, m_trace);
            }
            // Also run read clock to see the new data
            for (int k = 0; k < 3; k++) {
                rd_clock_tick(dut, m_trace);
            }
        }
        
        // Safety check to prevent infinite loop
        if (sim_time > MAX_SIM_TIME) {
            std::cout << "Simulation time limit reached. Breaking loop." << std::endl;
            break;
        }
    }
    
    std::cout << "\nClock Domain Crossing FIFO test completed!" << std::endl;
    
    // Cleanup
    m_trace->close();
    delete m_trace;
    delete dut;
    
    return 0;
} 