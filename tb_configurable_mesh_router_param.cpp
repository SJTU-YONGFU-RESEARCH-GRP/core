#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vconfigurable_mesh_router.h"

// Define parameter expectations - these must match what is passed to Verilator with -G flags
#define TEST_DATA_WIDTH 16    // Smaller data width
#define TEST_ADDR_WIDTH 12    // Larger address width
#define TEST_X_ADDR_WIDTH 6   // Larger X address width
#define TEST_Y_ADDR_WIDTH 6   // Larger Y address width
#define TEST_FIFO_DEPTH 8     // Deeper FIFOs

vluint64_t sim_time = 0;
vluint64_t posedge_cnt = 0;

// Struct to hold packet data
struct Packet {
    uint32_t addr;
    uint32_t data;
    bool valid;
    
    Packet(uint32_t a = 0, uint32_t d = 0, bool v = false)
        : addr(a), data(d), valid(v) {}
};

// Function to set router inputs
void setRouterInputs(Vconfigurable_mesh_router* router, 
                    const Packet& north, const Packet& east, 
                    const Packet& south, const Packet& west, 
                    const Packet& local) {
    // North port inputs
    router->north_valid_i = north.valid;
    router->north_data_i = north.data;
    router->north_addr_i = north.addr;
    
    // East port inputs
    router->east_valid_i = east.valid;
    router->east_data_i = east.data;
    router->east_addr_i = east.addr;
    
    // South port inputs
    router->south_valid_i = south.valid;
    router->south_data_i = south.data;
    router->south_addr_i = south.addr;
    
    // West port inputs
    router->west_valid_i = west.valid;
    router->west_data_i = west.data;
    router->west_addr_i = west.addr;
    
    // Local port inputs
    router->local_valid_i = local.valid;
    router->local_data_i = local.data;
    router->local_addr_i = local.addr;
}

// Function to set router ready signals
void setRouterReadySignals(Vconfigurable_mesh_router* router,
                          bool north_ready, bool east_ready,
                          bool south_ready, bool west_ready,
                          bool local_ready) {
    router->north_ready_i = north_ready;
    router->east_ready_i = east_ready;
    router->south_ready_i = south_ready;
    router->west_ready_i = west_ready;
    router->local_ready_i = local_ready;
}

// Function to print router outputs with proper formatting
void printRouterOutputs(Vconfigurable_mesh_router* router) {
    std::cout << "North: valid=" << (router->north_valid_o ? "1" : "0")
              << " data=0x" << std::hex << std::setw(4) << std::setfill('0') << router->north_data_o
              << " addr=0x" << std::setw(3) << std::setfill('0') << (unsigned)router->north_addr_o << std::dec
              << " ready=" << (router->north_ready_o ? "1" : "0") << std::endl;
              
    std::cout << "East: valid=" << (router->east_valid_o ? "1" : "0")
              << " data=0x" << std::hex << std::setw(4) << std::setfill('0') << router->east_data_o
              << " addr=0x" << std::setw(3) << std::setfill('0') << (unsigned)router->east_addr_o << std::dec
              << " ready=" << (router->east_ready_o ? "1" : "0") << std::endl;
              
    std::cout << "South: valid=" << (router->south_valid_o ? "1" : "0")
              << " data=0x" << std::hex << std::setw(4) << std::setfill('0') << router->south_data_o
              << " addr=0x" << std::setw(3) << std::setfill('0') << (unsigned)router->south_addr_o << std::dec
              << " ready=" << (router->south_ready_o ? "1" : "0") << std::endl;
              
    std::cout << "West: valid=" << (router->west_valid_o ? "1" : "0")
              << " data=0x" << std::hex << std::setw(4) << std::setfill('0') << router->west_data_o
              << " addr=0x" << std::setw(3) << std::setfill('0') << (unsigned)router->west_addr_o << std::dec
              << " ready=" << (router->west_ready_o ? "1" : "0") << std::endl;
              
    std::cout << "Local: valid=" << (router->local_valid_o ? "1" : "0")
              << " data=0x" << std::hex << std::setw(4) << std::setfill('0') << router->local_data_o
              << " addr=0x" << std::setw(3) << std::setfill('0') << (unsigned)router->local_addr_o << std::dec
              << " ready=" << (router->local_ready_o ? "1" : "0") << std::endl;
}

// Function to create an address from X and Y coordinates for larger address width
uint32_t createAddress(uint32_t x, uint32_t y) {
    // Format: [X_ADDR(6 bits) | Y_ADDR(6 bits)]
    return ((x & ((1 << TEST_X_ADDR_WIDTH) - 1)) << TEST_Y_ADDR_WIDTH) | 
           (y & ((1 << TEST_Y_ADDR_WIDTH) - 1));
}

// Function to run the clock for n cycles
void runClock(Vconfigurable_mesh_router* router, VerilatedVcdC* tfp, int cycles) {
    for (int i = 0; i < cycles; i++) {
        router->clk = 0;
        router->eval();
        if (tfp) tfp->dump(sim_time++);
        
        router->clk = 1;
        router->eval();
        if (tfp) tfp->dump(sim_time++);
        posedge_cnt++;
    }
}

// Test larger network with more bits for addressing
void runLargeNetworkTest(Vconfigurable_mesh_router* router, VerilatedVcdC* tfp) {
    std::cout << "\n=== Running Large Network Test ===\n";
    
    // Set router coordinates to position (15, 20) in a larger 64x64 mesh
    // Make sure we don't exceed the width of the coordinate registers
    router->local_x_addr = 15 & ((1 << TEST_X_ADDR_WIDTH) - 1);
    router->local_y_addr = 20 & ((1 << TEST_Y_ADDR_WIDTH) - 1);
    
    // Test 1: Route from Local to North (15,10)
    std::cout << "\nTest 1: Route from Local to North (15,10)\n";
    Packet local_pkt(createAddress(15, 10), 0xDEAD, true);
    setRouterInputs(router, Packet(), Packet(), Packet(), Packet(), local_pkt);
    setRouterReadySignals(router, true, true, true, true, true);
    
    // Run simulation for a few cycles
    runClock(router, tfp, 3);
    std::cout << "Cycle " << posedge_cnt << " outputs:\n";
    printRouterOutputs(router);
    
    // Clear input
    local_pkt.valid = false;
    setRouterInputs(router, Packet(), Packet(), Packet(), Packet(), local_pkt);
    runClock(router, tfp, 5);
    
    // Test 2: Route from South to East (30, 20)
    std::cout << "\nTest 2: Route from South to East (30, 20)\n";
    Packet south_pkt(createAddress(30, 20), 0xBEEF, true);
    setRouterInputs(router, Packet(), Packet(), south_pkt, Packet(), Packet());
    setRouterReadySignals(router, true, true, true, true, true);
    
    // Run simulation
    runClock(router, tfp, 3);
    std::cout << "Cycle " << posedge_cnt << " outputs:\n";
    printRouterOutputs(router);
    
    // Clear input
    south_pkt.valid = false;
    setRouterInputs(router, Packet(), Packet(), south_pkt, Packet(), Packet());
    runClock(router, tfp, 5);
    
    // Test 3: Route from distant node to Local through multiple hops
    std::cout << "\nTest 3: Route from West with multi-hop path to (15, 20)\n";
    Packet west_pkt(createAddress(15, 20), 0xCAFE, true);
    setRouterInputs(router, Packet(), Packet(), Packet(), west_pkt, Packet());
    setRouterReadySignals(router, true, true, true, true, true);
    
    // Run simulation
    runClock(router, tfp, 3);
    std::cout << "Cycle " << posedge_cnt << " outputs:\n";
    printRouterOutputs(router);
}

// Test FIFO depth handling with multiple packets
void runFIFODepthTest(Vconfigurable_mesh_router* router, VerilatedVcdC* tfp) {
    std::cout << "\n=== Running FIFO Depth Test ===\n";
    
    // Set router coordinates
    router->local_x_addr = 10 & ((1 << TEST_X_ADDR_WIDTH) - 1);
    router->local_y_addr = 10 & ((1 << TEST_Y_ADDR_WIDTH) - 1);
    
    // Generate more packets than the FIFO can hold immediately
    std::cout << "Sending multiple packets to the West port (FIFO_DEPTH = " << TEST_FIFO_DEPTH << ")\n";
    
    // Create a sequence of packets all heading to the same destination
    for (int i = 0; i < TEST_FIFO_DEPTH + 2; i++) {
        // All packets go to (5, 10) - west direction
        Packet east_pkt(createAddress(5, 10), 0x1000 + i, true);
        
        // Send the packet
        setRouterInputs(router, Packet(), east_pkt, Packet(), Packet(), Packet());
        
        // Run for 1 cycle
        runClock(router, tfp, 1);
        
        if (i % 3 == 0) {
            std::cout << "After packet " << i << ":\n";
            printRouterOutputs(router);
        }
    }
    
    // Now run for more cycles to drain the FIFOs
    std::cout << "\nDraining the FIFOs:\n";
    setRouterInputs(router, Packet(), Packet(), Packet(), Packet(), Packet());
    for (int i = 0; i < TEST_FIFO_DEPTH + 5; i++) {
        runClock(router, tfp, 1);
        
        if (i % 3 == 0) {
            std::cout << "After " << i << " drain cycles:\n";
            printRouterOutputs(router);
        }
    }
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Create the module
    Vconfigurable_mesh_router* router = new Vconfigurable_mesh_router("TOP");
    
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    router->trace(tfp, 99);
    tfp->open("configurable_mesh_router_param_sim.vcd");
    
    std::cout << "=== Configurable Mesh Router Parameter Test ===\n";
    std::cout << "Using the following parameters set via Verilator -G flags:\n";
    std::cout << "DATA_WIDTH: " << TEST_DATA_WIDTH << "\n";
    std::cout << "ADDR_WIDTH: " << TEST_ADDR_WIDTH << "\n";
    std::cout << "X_ADDR_WIDTH: " << TEST_X_ADDR_WIDTH << "\n";
    std::cout << "Y_ADDR_WIDTH: " << TEST_Y_ADDR_WIDTH << "\n";
    std::cout << "FIFO_DEPTH: " << TEST_FIFO_DEPTH << "\n\n";
    
    // Reset the router
    router->rst_n = 0;
    runClock(router, tfp, 5);
    router->rst_n = 1;
    
    // Run large network test
    runLargeNetworkTest(router, tfp);
    
    // Reset before FIFO test
    router->rst_n = 0;
    runClock(router, tfp, 5);
    router->rst_n = 1;
    
    // Run FIFO depth test
    runFIFODepthTest(router, tfp);
    
    // Final simulation steps and cleanup
    runClock(router, tfp, 10);
    
    router->final();
    if (tfp) tfp->close();
    
    delete router;
    delete tfp;
    
    std::cout << "\nParameterized simulation completed successfully\n";
    return 0;
} 