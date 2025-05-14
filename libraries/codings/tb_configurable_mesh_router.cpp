#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vconfigurable_mesh_router.h"

#define MAX_SIM_TIME 1000
#define DATA_WIDTH 32
#define ADDR_WIDTH 8
#define X_ADDR_WIDTH 4
#define Y_ADDR_WIDTH 4
#define FIFO_DEPTH 4

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
              << " data=0x" << std::hex << std::setw(8) << std::setfill('0') << router->north_data_o
              << " addr=0x" << std::setw(2) << std::setfill('0') << (unsigned)router->north_addr_o << std::dec
              << " ready=" << (router->north_ready_o ? "1" : "0") << std::endl;
              
    std::cout << "East: valid=" << (router->east_valid_o ? "1" : "0")
              << " data=0x" << std::hex << std::setw(8) << std::setfill('0') << router->east_data_o
              << " addr=0x" << std::setw(2) << std::setfill('0') << (unsigned)router->east_addr_o << std::dec
              << " ready=" << (router->east_ready_o ? "1" : "0") << std::endl;
              
    std::cout << "South: valid=" << (router->south_valid_o ? "1" : "0")
              << " data=0x" << std::hex << std::setw(8) << std::setfill('0') << router->south_data_o
              << " addr=0x" << std::setw(2) << std::setfill('0') << (unsigned)router->south_addr_o << std::dec
              << " ready=" << (router->south_ready_o ? "1" : "0") << std::endl;
              
    std::cout << "West: valid=" << (router->west_valid_o ? "1" : "0")
              << " data=0x" << std::hex << std::setw(8) << std::setfill('0') << router->west_data_o
              << " addr=0x" << std::setw(2) << std::setfill('0') << (unsigned)router->west_addr_o << std::dec
              << " ready=" << (router->west_ready_o ? "1" : "0") << std::endl;
              
    std::cout << "Local: valid=" << (router->local_valid_o ? "1" : "0")
              << " data=0x" << std::hex << std::setw(8) << std::setfill('0') << router->local_data_o
              << " addr=0x" << std::setw(2) << std::setfill('0') << (unsigned)router->local_addr_o << std::dec
              << " ready=" << (router->local_ready_o ? "1" : "0") << std::endl;
}

// Function to create an address from X and Y coordinates
uint32_t createAddress(uint8_t x, uint8_t y) {
    // Properly format the address based on the router's expectations
    // Format: [X_ADDR(4 bits) | Y_ADDR(4 bits)]
    return ((uint32_t)x << Y_ADDR_WIDTH) | y;
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

// Test cases
void runBasicXYRoutingTest(Vconfigurable_mesh_router* router, VerilatedVcdC* tfp) {
    std::cout << "\n=== Running Basic XY Routing Test ===\n";
    
    // Local router coordinates (1,1)
    router->local_x_addr = 1;
    router->local_y_addr = 1;
    
    // Test 1: Route from Local to North (1,0)
    std::cout << "\nTest 1: Route from Local to North (1,0)\n";
    Packet local_pkt(createAddress(1, 0), 0xA0A0A0A0, true);
    setRouterInputs(router, Packet(), Packet(), Packet(), Packet(), local_pkt);
    setRouterReadySignals(router, true, true, true, true, true);
    
    // Run simulation for a few cycles
    runClock(router, tfp, 3);
    std::cout << "Cycle " << posedge_cnt << " outputs:\n";
    printRouterOutputs(router);
    
    // Once the packet is transmitted, set local_valid_i to 0
    if (router->local_ready_o && local_pkt.valid) {
        local_pkt.valid = false;
        setRouterInputs(router, Packet(), Packet(), Packet(), Packet(), local_pkt);
    }
    
    // Run for a few more cycles to allow routing to complete
    runClock(router, tfp, 7);
    
    // Test 2: Route from West to East (2,1)
    std::cout << "\nTest 2: Route from West to East (2,1)\n";
    Packet west_pkt(createAddress(2, 1), 0xBBBBBBBB, true);
    setRouterInputs(router, Packet(), Packet(), Packet(), west_pkt, Packet());
    setRouterReadySignals(router, true, true, true, true, true);
    
    // Run simulation for a few cycles
    runClock(router, tfp, 3);
    std::cout << "Cycle " << posedge_cnt << " outputs:\n";
    printRouterOutputs(router);
    
    // Once the packet is transmitted, set west_valid_i to 0
    if (router->west_ready_o && west_pkt.valid) {
        west_pkt.valid = false;
        setRouterInputs(router, Packet(), Packet(), Packet(), west_pkt, Packet());
    }
    
    // Run for a few more cycles to allow routing to complete
    runClock(router, tfp, 7);
    
    // Test 3: Route from North to South (1,2)
    std::cout << "\nTest 3: Route from North to South (1,2)\n";
    Packet north_pkt(createAddress(1, 2), 0xCCCCCCCC, true);
    setRouterInputs(router, north_pkt, Packet(), Packet(), Packet(), Packet());
    setRouterReadySignals(router, true, true, true, true, true);
    
    // Run simulation for a few cycles
    runClock(router, tfp, 3);
    std::cout << "Cycle " << posedge_cnt << " outputs:\n";
    printRouterOutputs(router);
    
    // Once the packet is transmitted, set north_valid_i to 0
    if (router->north_ready_o && north_pkt.valid) {
        north_pkt.valid = false;
        setRouterInputs(router, north_pkt, Packet(), Packet(), Packet(), Packet());
    }
    
    // Run for a few more cycles to allow routing to complete
    runClock(router, tfp, 7);
    
    // Test 4: Route from East to Local (1,1) - packet destined for the router itself
    std::cout << "\nTest 4: Route from East to Local (1,1)\n";
    Packet east_pkt(createAddress(1, 1), 0xDDDDDDDD, true);
    setRouterInputs(router, Packet(), east_pkt, Packet(), Packet(), Packet());
    setRouterReadySignals(router, true, true, true, true, true);
    
    // Run simulation for a few cycles
    runClock(router, tfp, 3);
    std::cout << "Cycle " << posedge_cnt << " outputs:\n";
    printRouterOutputs(router);
    
    // Once the packet is transmitted, set east_valid_i to 0
    if (router->east_ready_o && east_pkt.valid) {
        east_pkt.valid = false;
        setRouterInputs(router, Packet(), east_pkt, Packet(), Packet(), Packet());
    }
    
    // Run for a few more cycles to allow routing to complete
    runClock(router, tfp, 7);
}

// Test concurrent packet routing from multiple ports
void runConcurrentRoutingTest(Vconfigurable_mesh_router* router, VerilatedVcdC* tfp) {
    std::cout << "\n=== Running Concurrent Routing Test ===\n";
    
    // Local router coordinates (2,2)
    router->local_x_addr = 2;
    router->local_y_addr = 2;
    
    // Multiple packets arriving at the same time
    Packet north_pkt(createAddress(2, 3), 0x11111111, true);  // Goes to South
    Packet east_pkt(createAddress(1, 2), 0x22222222, true);   // Goes to West
    Packet south_pkt(createAddress(2, 1), 0x33333333, true);  // Goes to North
    Packet west_pkt(createAddress(3, 2), 0x44444444, true);   // Goes to East
    Packet local_pkt(createAddress(2, 2), 0x55555555, true);  // Goes to Local
    
    setRouterInputs(router, north_pkt, east_pkt, south_pkt, west_pkt, local_pkt);
    setRouterReadySignals(router, true, true, true, true, true);
    
    // Run simulation for a few cycles and check outputs
    runClock(router, tfp, 3);
    std::cout << "Cycle " << posedge_cnt << " outputs:\n";
    printRouterOutputs(router);
    
    // Clear inputs once they've been accepted to avoid overwriting the FIFOs
    if (router->north_ready_o && north_pkt.valid) north_pkt.valid = false;
    if (router->east_ready_o && east_pkt.valid) east_pkt.valid = false;
    if (router->south_ready_o && south_pkt.valid) south_pkt.valid = false;
    if (router->west_ready_o && west_pkt.valid) west_pkt.valid = false;
    if (router->local_ready_o && local_pkt.valid) local_pkt.valid = false;
    
    setRouterInputs(router, north_pkt, east_pkt, south_pkt, west_pkt, local_pkt);
    
    // Run more cycles to see routing progress
    runClock(router, tfp, 7);
    std::cout << "Cycle " << posedge_cnt << " outputs:\n";
    printRouterOutputs(router);
    
    // Run a few more cycles
    runClock(router, tfp, 10);
}

// Test backpressure handling
void runBackpressureTest(Vconfigurable_mesh_router* router, VerilatedVcdC* tfp) {
    std::cout << "\n=== Running Backpressure Test ===\n";
    
    // Local router coordinates (1,1)
    router->local_x_addr = 1;
    router->local_y_addr = 1;
    
    // Multiple packets going to the same output port (East)
    Packet north_pkt(createAddress(2, 1), 0xAAAAAAAA, true);
    Packet south_pkt(createAddress(2, 1), 0xBBBBBBBB, true);
    Packet west_pkt(createAddress(2, 1), 0xCCCCCCCC, true);
    Packet local_pkt(createAddress(2, 1), 0xDDDDDDDD, true);
    
    setRouterInputs(router, north_pkt, Packet(), south_pkt, west_pkt, local_pkt);
    
    // Set East port to not ready (backpressure)
    setRouterReadySignals(router, true, false, true, true, true);
    
    std::cout << "Initial state with East port not ready:\n";
    
    // Run a few cycles and observe - FIFOs should fill up but no output to East
    runClock(router, tfp, 3);
    std::cout << "Cycle " << posedge_cnt << " outputs:\n";
    printRouterOutputs(router);
    
    // Run more cycles - after 5 cycles, set East ready to true to drain the FIFOs
    runClock(router, tfp, 5);
    std::cout << "Setting East port ready to drain FIFOs\n";
    setRouterReadySignals(router, true, true, true, true, true);
    
    // Run more cycles and observe draining
    runClock(router, tfp, 3);
    std::cout << "Cycle " << posedge_cnt << " outputs (after enabling East port):\n";
    printRouterOutputs(router);
    
    // Run a few more cycles to fully drain FIFOs
    runClock(router, tfp, 10);
    std::cout << "Cycle " << posedge_cnt << " outputs (after more cycles):\n";
    printRouterOutputs(router);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vconfigurable_mesh_router* router = new Vconfigurable_mesh_router;
    
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    router->trace(tfp, 99);
    tfp->open("configurable_mesh_router_sim.vcd");
    
    // Reset the router
    router->rst_n = 0;
    runClock(router, tfp, 5);
    router->rst_n = 1;
    
    // Run different test scenarios
    runBasicXYRoutingTest(router, tfp);
    
    // Reset the router before next test
    router->rst_n = 0;
    runClock(router, tfp, 5);
    router->rst_n = 1;
    
    runConcurrentRoutingTest(router, tfp);
    
    // Reset the router before next test
    router->rst_n = 0;
    runClock(router, tfp, 5);
    router->rst_n = 1;
    
    runBackpressureTest(router, tfp);
    
    // Final simulation steps and cleanup
    runClock(router, tfp, 10);
    
    router->final();
    if (tfp) tfp->close();
    
    delete router;
    delete tfp;
    
    std::cout << "\nSimulation completed successfully\n";
    return 0;
} 