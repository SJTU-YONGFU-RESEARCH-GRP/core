#include "Vfifo.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>
#include <vector>

void check_operation(std::unique_ptr<Vfifo>& fifo, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    // Define test values
    const int test_size = 10;
    std::vector<uint8_t> test_data = {0x01, 0x23, 0x45, 0x67, 0x89, 0xAB, 0xCD, 0xEF, 0x12, 0x34};
    
    // Reset the FIFO
    fifo->rst_n = 0;
    fifo->clk = 0;
    fifo->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
    
    fifo->clk = 1;
    fifo->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
    
    fifo->rst_n = 1;
    fifo->wr_en = 0;
    fifo->rd_en = 0;
    
    // First, write data to the FIFO
    std::cout << "Writing data to FIFO:" << std::endl;
    for (int i = 0; i < test_size; i++) {
        fifo->clk = 0;
        fifo->din = test_data[i];
        fifo->wr_en = 1;
        fifo->rd_en = 0;
        fifo->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        fifo->clk = 1;
        fifo->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        std::cout << "  Wrote: 0x" << std::hex << static_cast<int>(test_data[i]) 
                  << ", Full: " << (fifo->full ? "1" : "0")
                  << ", Empty: " << (fifo->empty ? "1" : "0") << std::endl;
    }
    
    // Now, read data from the FIFO
    std::cout << "Reading data from FIFO:" << std::endl;
    for (int i = 0; i < test_size; i++) {
        fifo->clk = 0;
        fifo->wr_en = 0;
        fifo->rd_en = 1;
        fifo->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        fifo->clk = 1;
        fifo->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        std::cout << "  Read: 0x" << std::hex << static_cast<int>(fifo->dout) 
                  << ", Full: " << (fifo->full ? "1" : "0")
                  << ", Empty: " << (fifo->empty ? "1" : "0") << std::endl;
        
        // Verify data matches expected value
        if (fifo->dout != test_data[i]) {
            std::cout << "ERROR: Data mismatch! Expected: 0x" << std::hex << static_cast<int>(test_data[i])
                      << ", Got: 0x" << static_cast<int>(fifo->dout) << std::endl;
        }
    }
    
    // Test full condition by writing to FIFO until full
    std::cout << "Testing full condition:" << std::endl;
    fifo->rst_n = 0;
    fifo->clk = 0;
    fifo->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
    
    fifo->clk = 1;
    fifo->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
    
    fifo->rst_n = 1;
    
    int write_count = 0;
    while (!fifo->full && write_count < 20) {
        fifo->clk = 0;
        fifo->din = write_count & 0xFF;
        fifo->wr_en = 1;
        fifo->rd_en = 0;
        fifo->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        fifo->clk = 1;
        fifo->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        std::cout << "  Wrote: 0x" << std::hex << (write_count & 0xFF) 
                  << ", Full: " << (fifo->full ? "1" : "0") 
                  << ", Empty: " << (fifo->empty ? "1" : "0") << std::endl;
        write_count++;
    }
    
    if (fifo->full) {
        std::cout << "FIFO full after " << std::dec << write_count << " writes" << std::endl;
    } else {
        std::cout << "ERROR: FIFO didn't become full!" << std::endl;
    }
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of our module under test
    std::unique_ptr<Vfifo> fifo = std::make_unique<Vfifo>();
    
    // Initialize VCD trace file
    Verilated::traceEverOn(true);
    std::unique_ptr<VerilatedVcdC> tfp = std::make_unique<VerilatedVcdC>();
    fifo->trace(tfp.get(), 99);  // Trace 99 levels of hierarchy
    tfp->open("fifo_sim.vcd");
    
    // Initialize simulation time
    vluint64_t sim_time = 0;
    
    // Run tests
    check_operation(fifo, tfp.get(), sim_time);
    
    // Cleanup
    tfp->close();
    fifo->final();
    
    std::cout << "Simulation completed successfully!" << std::endl;
    return 0;
} 