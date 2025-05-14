#include "Vdual_port_ram.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>
#include <vector>
#include <iomanip>

void check_operation(std::unique_ptr<Vdual_port_ram>& ram, VerilatedVcdC* tfp, vluint64_t& sim_time) {
    // Parameters from the design
    const int ADDR_WIDTH = 4;
    const int DATA_WIDTH = 8;
    const int DEPTH = (1 << ADDR_WIDTH);
    
    // Reset outputs
    ram->clk = 0;
    ram->we_a = 0;
    ram->we_b = 0;
    ram->addr_a = 0;
    ram->addr_b = 0;
    ram->data_a = 0;
    ram->data_b = 0;
    ram->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
    
    // Test 1: Write to Port A, Read from Port B
    std::cout << "Test 1: Write to Port A, Read from Port B" << std::endl;
    std::cout << "Addr\tWrite Data\tRead Data" << std::endl;
    
    for (int addr = 0; addr < DEPTH; addr++) {
        // Write data to Port A
        int write_data = (addr * 3) & 0xFF;
        
        // Clock low
        ram->clk = 0;
        ram->addr_a = addr;
        ram->data_a = write_data;
        ram->we_a = 1;
        ram->addr_b = addr;
        ram->we_b = 0;
        ram->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        // Clock high
        ram->clk = 1;
        ram->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        // Clock low again to prepare for read
        ram->clk = 0;
        ram->we_a = 0;
        ram->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        // Clock high to read
        ram->clk = 1;
        ram->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        // Print results
        std::cout << std::hex << "0x" << std::setw(2) << std::setfill('0') << addr 
                  << "\t0x" << std::setw(2) << std::setfill('0') << write_data 
                  << "\t\t0x" << std::setw(2) << std::setfill('0') << static_cast<int>(ram->q_b) << std::endl;
        
        // Verify data
        if (ram->q_b != write_data) {
            std::cout << "ERROR: Data mismatch at address 0x" << std::hex << addr 
                      << ". Expected: 0x" << write_data 
                      << ", Got: 0x" << static_cast<int>(ram->q_b) << std::endl;
        }
    }
    
    // Test 2: Simultaneous Read/Write on both ports
    std::cout << "\nTest 2: Simultaneous Read/Write on both ports" << std::endl;
    
    // First, initialize memory with known values
    for (int addr = 0; addr < DEPTH; addr++) {
        // Write data to Port A
        int write_data = (addr * 5) & 0xFF;
        
        // Clock low
        ram->clk = 0;
        ram->addr_a = addr;
        ram->data_a = write_data;
        ram->we_a = 1;
        ram->addr_b = 0;
        ram->we_b = 0;
        ram->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        // Clock high
        ram->clk = 1;
        ram->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
    }
    
    // Now test simultaneous access
    std::cout << "Port A\t\t\tPort B" << std::endl;
    std::cout << "Addr\tWrite\tRead\tAddr\tWrite\tRead" << std::endl;
    
    for (int i = 0; i < 8; i++) {
        int addr_a = i;
        int addr_b = DEPTH - 1 - i;
        int write_data_a = 0xA0 + i;
        int write_data_b = 0xB0 + i;
        
        // Clock low
        ram->clk = 0;
        ram->addr_a = addr_a;
        ram->data_a = write_data_a;
        ram->we_a = 1;
        ram->addr_b = addr_b;
        ram->data_b = write_data_b;
        ram->we_b = 1;
        ram->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        // Clock high
        ram->clk = 1;
        ram->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        // Clock low again to prepare for read
        ram->clk = 0;
        ram->we_a = 0;
        ram->we_b = 0;
        ram->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        // Clock high to read
        ram->clk = 1;
        ram->eval();
        if (tfp) tfp->dump(sim_time);
        sim_time++;
        
        // Print results
        std::cout << std::hex << "0x" << std::setw(2) << std::setfill('0') << addr_a 
                  << "\t0x" << std::setw(2) << std::setfill('0') << write_data_a 
                  << "\t0x" << std::setw(2) << std::setfill('0') << static_cast<int>(ram->q_a)
                  << "\t0x" << std::setw(2) << std::setfill('0') << addr_b
                  << "\t0x" << std::setw(2) << std::setfill('0') << write_data_b
                  << "\t0x" << std::setw(2) << std::setfill('0') << static_cast<int>(ram->q_b) << std::endl;
    }
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of our module under test
    std::unique_ptr<Vdual_port_ram> ram = std::make_unique<Vdual_port_ram>();
    
    // Initialize VCD trace file
    Verilated::traceEverOn(true);
    std::unique_ptr<VerilatedVcdC> tfp = std::make_unique<VerilatedVcdC>();
    ram->trace(tfp.get(), 99);  // Trace 99 levels of hierarchy
    tfp->open("dual_port_ram_sim.vcd");
    
    // Initialize simulation time
    vluint64_t sim_time = 0;
    
    // Run tests
    check_operation(ram, tfp.get(), sim_time);
    
    // Cleanup
    tfp->close();
    ram->final();
    
    std::cout << "\nSimulation completed successfully!" << std::endl;
    return 0;
} 