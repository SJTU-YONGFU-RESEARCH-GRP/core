#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vparameterized_uart_tx.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include <bitset>
#include <sstream>
#include <cassert>
#include <cstring>

// Debug level
#define DEBUG_LEVEL 1

// Maximum simulation time
#define MAX_SIM_TIME 100000

// Define test parameters - must match the Verilog module parameters
const int CLK_FREQ = 50000;      // Clock frequency in Hz
const int BAUD_RATE = 1000;      // Baud rate in bits per second
const int CLOCKS_PER_BIT = CLK_FREQ / BAUD_RATE;
const int DATA_WIDTH = 8;
const bool PARITY_EN = 0;
const bool PARITY_TYPE = 0;
const int STOP_BITS = 1;

// UART RX Monitor for testbench
class UartRxMonitor {
private:
    int m_clksPerBit;
    int m_dataWidth;
    bool m_parityEn;
    bool m_parityType;
    int m_stopBits;
    
    enum State { 
        IDLE, 
        START_BIT, 
        DATA_BIT, 
        PARITY_BIT, 
        STOP_BIT,
        WAIT_IDLE
    };
    
    State m_state;
    int m_clockCount;
    int m_bitIndex;
    int m_stopBitCount;
    uint8_t m_dataReg;
    bool m_prevTx;
    
public:
    UartRxMonitor(int clksPerBit, int dataWidth, bool parityEn, bool parityType, int stopBits)
        : m_clksPerBit(clksPerBit), m_dataWidth(dataWidth), m_parityEn(parityEn),
          m_parityType(parityType), m_stopBits(stopBits), m_state(IDLE), m_clockCount(0),
          m_bitIndex(0), m_dataReg(0), m_stopBitCount(0), m_prevTx(true) {
        if (DEBUG_LEVEL > 0) {
            std::cout << "RX Monitor initialized with clks_per_bit = " << m_clksPerBit << std::endl;
        }
    }
    
    // Reset the monitor to a known state
    void reset() {
        m_state = IDLE;
        m_clockCount = 0;
        m_bitIndex = 0;
        m_dataReg = 0;
        m_stopBitCount = 0;
        m_prevTx = true;
        if (DEBUG_LEVEL > 0) {
            std::cout << "RX Monitor reset to IDLE state" << std::endl;
        }
    }
    
    // Monitor the UART TX line and decode the data
    bool monitor(bool txLine, uint8_t &receivedByte) {
        bool dataComplete = false;
        
        // Detect falling edge (start bit)
        bool fallingEdge = m_prevTx && !txLine;
        
        // Debug output
        if (DEBUG_LEVEL > 2) {
            std::cout << "RX Monitor: state=" << m_state 
                      << ", txLine=" << txLine 
                      << ", prevTx=" << m_prevTx 
                      << ", fallingEdge=" << fallingEdge 
                      << ", clockCount=" << m_clockCount
                      << ", bitIndex=" << m_bitIndex
                      << std::endl;
        }
        
        m_prevTx = txLine;
        
        switch (m_state) {
            case IDLE:
                if (fallingEdge) {
                    if (DEBUG_LEVEL > 0) {
                        std::cout << "RX Monitor: Detected start bit (falling edge)" << std::endl;
                    }
                    m_state = START_BIT;
                    m_clockCount = 0;
                    m_bitIndex = 0;
                    m_dataReg = 0;
                }
                break;
                
            case START_BIT:
                m_clockCount++;
                
                // Sample middle of start bit to confirm it's still low
                if (m_clockCount == m_clksPerBit / 2) {
                    if (txLine) {
                        if (DEBUG_LEVEL > 0) {
                            std::cout << "RX Monitor: Invalid start bit" << std::endl;
                        }
                        m_state = IDLE;
                    } else {
                        if (DEBUG_LEVEL > 0) {
                            std::cout << "RX Monitor: Valid start bit confirmed" << std::endl;
                        }
                    }
                }
                
                // Move to data bits after one full bit period
                if (m_clockCount >= m_clksPerBit) {
                    m_state = DATA_BIT;
                    m_clockCount = 0;
                }
                break;
                
            case DATA_BIT:
                m_clockCount++;
                
                // Sample at the middle of each bit period
                if (m_clockCount == m_clksPerBit / 2) {
                    if (DEBUG_LEVEL > 0) {
                        std::cout << "RX Monitor: Sampling bit " << m_bitIndex 
                                  << " = " << (txLine ? "1" : "0") << std::endl;
                    }
                    
                    // Store bit value (LSB first)
                    if (txLine) {
                        m_dataReg |= (1 << m_bitIndex);
                    }
                }
                
                // Move to next bit after full bit period
                if (m_clockCount >= m_clksPerBit) {
                    m_clockCount = 0;
                    m_bitIndex++;
                    
                    if (m_bitIndex >= m_dataWidth) {
                        if (DEBUG_LEVEL > 0) {
                            std::cout << "RX Monitor: All data bits received: 0x"
                                      << std::hex << (int)m_dataReg << std::dec << std::endl;
                        }
                        
                        if (m_parityEn) {
                            m_state = PARITY_BIT;
                        } else {
                            m_state = STOP_BIT;
                            m_stopBitCount = 0;
                        }
                    }
                }
                break;
                
            case PARITY_BIT:
                m_clockCount++;
                
                // Sample at the middle of the bit
                if (m_clockCount == m_clksPerBit / 2) {
                    bool parityBit = txLine;
                    
                    if (DEBUG_LEVEL > 0) {
                        std::cout << "RX Monitor: Parity bit = " << (parityBit ? "1" : "0") << std::endl;
                    }
                    
                    // Calculate expected parity
                    bool expectedParity = 0;
                    for (int i = 0; i < m_dataWidth; i++) {
                        expectedParity ^= ((m_dataReg >> i) & 0x01);
                    }
                    
                    if (m_parityType == 1) { // Odd parity
                        expectedParity = !expectedParity;
                    }
                    
                    if (parityBit != expectedParity) {
                        if (DEBUG_LEVEL > 0) {
                            std::cout << "RX Monitor: Parity error! Expected: " 
                                      << expectedParity << ", Got: " << parityBit << std::endl;
                        }
                        m_state = IDLE;
                    }
                }
                
                // Move to stop bit after full bit period
                if (m_clockCount >= m_clksPerBit) {
                    m_state = STOP_BIT;
                    m_clockCount = 0;
                    m_stopBitCount = 0;
                }
                break;
                
            case STOP_BIT:
                m_clockCount++;
                
                // Sample at the middle of the bit
                if (m_clockCount == m_clksPerBit / 2) {
                    if (!txLine) {
                        if (DEBUG_LEVEL > 0) {
                            std::cout << "RX Monitor: Stop bit error! Expected high, got low" << std::endl;
                        }
                        m_state = IDLE;
                        break;
                    }
                    
                    if (DEBUG_LEVEL > 0) {
                        std::cout << "RX Monitor: Valid stop bit " << (m_stopBitCount + 1) 
                                  << "/" << m_stopBits << std::endl;
                    }
                }
                
                // Move to next stop bit or complete frame
                if (m_clockCount >= m_clksPerBit) {
                    m_stopBitCount++;
                    m_clockCount = 0;
                    
                    if (m_stopBitCount >= m_stopBits) {
                        receivedByte = m_dataReg;
                        dataComplete = true;
                        
                        if (DEBUG_LEVEL > 0) {
                            std::cout << "RX Monitor: Frame successfully received: 0x" 
                                      << std::hex << (int)m_dataReg << std::dec << std::endl;
                        }
                        
                        m_state = IDLE;
                    }
                }
                break;
                
            default:
                m_state = IDLE;
                break;
        }
        
        return dataComplete;
    }
};

// Function to transmit a byte using the UART TX module
void uart_tx_byte(Vparameterized_uart_tx *dut, VerilatedVcdC *tfp, uint8_t data_byte, 
                 uint64_t &sim_time, bool &transmission_done, UartRxMonitor &rx_monitor, 
                 std::vector<uint8_t> &received_data) {
    
    std::cout << "Starting transmission of byte: 0x" << std::hex << (int)data_byte 
              << std::dec << " at time " << sim_time << std::endl;
    
    // Set data and assert tx_start for one clock cycle
    dut->data_in = data_byte;
    dut->tx_start = 1;
    
    // One clock cycle with tx_start high
    dut->clk = 0;
    dut->eval();
    if (tfp) tfp->dump(sim_time++);
    
    dut->clk = 1;
    dut->eval();
    if (tfp) tfp->dump(sim_time++);
    
    // Clear tx_start
    dut->tx_start = 0;
    
    // Wait for tx_busy to go high (transmission starts)
    bool tx_started = false;
    for (int i = 0; i < 20 && !tx_started; i++) {
        dut->clk = 0;
        dut->eval();
        if (tfp) tfp->dump(sim_time++);
        
        dut->clk = 1;
        dut->eval();
        if (dut->tx_busy) {
            tx_started = true;
            std::cout << "Transmission started (tx_busy high) at time " << sim_time << std::endl;
        }
        if (tfp) tfp->dump(sim_time++);
    }
    
    if (!tx_started) {
        std::cout << "ERROR: Transmission did not start (tx_busy never went high)" << std::endl;
        return;
    }
    
    // Wait for tx_busy to go low (transmission complete)
    transmission_done = false;
    int timeout = 5000; // Maximum cycles to wait - increased for slower baud rates
    uint8_t received_byte = 0;
    
    while (timeout > 0 && !transmission_done) {
        dut->clk = 0;
        dut->eval();
        if (tfp) tfp->dump(sim_time++);
        
        dut->clk = 1;
        dut->eval();
        
        // Monitor the TX line
        if (rx_monitor.monitor(dut->tx, received_byte)) {
            std::cout << "Received byte during transmission: 0x" << std::hex << (int)received_byte 
                      << std::dec << " at time " << sim_time << std::endl;
            received_data.push_back(received_byte);
        }
        
        if (!dut->tx_busy) {
            transmission_done = true;
            std::cout << "Transmission complete (tx_busy low) at time " << sim_time << std::endl;
        }
        
        if (tfp) tfp->dump(sim_time++);
        timeout--;
        
        // Status update every 1000 cycles
        if (timeout % 1000 == 0) {
            std::cout << "Still waiting for transmission to complete, " << timeout 
                      << " cycles remaining..." << std::endl;
        }
    }
    
    if (!transmission_done) {
        std::cout << "ERROR: Transmission did not complete (tx_busy never went low)" << std::endl;
    }
    
    // Add some idle time between transmissions
    for (int i = 0; i < 20; i++) {
        dut->clk = 0;
        dut->eval();
        if (tfp) tfp->dump(sim_time++);
        
        dut->clk = 1;
        dut->eval();
        
        // Monitor the TX line during idle time
        if (rx_monitor.monitor(dut->tx, received_byte)) {
            std::cout << "Received byte during idle time: 0x" << std::hex << (int)received_byte 
                      << std::dec << " at time " << sim_time << std::endl;
            received_data.push_back(received_byte);
        }
        
        if (tfp) tfp->dump(sim_time++);
    }
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Parse command line arguments
    bool traceEnabled = false;
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--trace") == 0) {
            traceEnabled = true;
        }
    }
    
    // Test data
    std::vector<uint8_t> testData = {0xA5, 0x3C, 0xFF, 0x00, 0x55};
    std::vector<uint8_t> receivedData;
    
    // Create UART RX monitor
    UartRxMonitor rxMonitor(CLOCKS_PER_BIT, DATA_WIDTH, PARITY_EN, PARITY_TYPE, STOP_BITS);
    
    // Create and initialize the DUT
    Vparameterized_uart_tx* dut = new Vparameterized_uart_tx;
    
    // Display test parameters
    std::cout << "Test Parameters:" << std::endl;
    std::cout << "  CLK_FREQ     = " << CLK_FREQ << " Hz" << std::endl;
    std::cout << "  BAUD_RATE    = " << BAUD_RATE << " bps" << std::endl;
    std::cout << "  CLOCKS_PER_BIT = " << CLOCKS_PER_BIT << std::endl;
    std::cout << "  DATA_WIDTH   = " << DATA_WIDTH << " bits" << std::endl;
    std::cout << "  PARITY_EN    = " << PARITY_EN << std::endl;
    std::cout << "  STOP_BITS    = " << STOP_BITS << std::endl;
    
    // Setup trace if enabled
    VerilatedVcdC* tfp = nullptr;
    if (traceEnabled) {
        Verilated::traceEverOn(true);
        tfp = new VerilatedVcdC;
        dut->trace(tfp, 99);
        tfp->open("waveform.vcd");
    }
    
    // Initialize signals
    dut->clk = 0;
    dut->rst_n = 0;
    dut->tx_start = 0;
    dut->data_in = 0;
    
    // Reset sequence
    std::cout << "Starting reset sequence..." << std::endl;
    for (int i = 0; i < 10; i++) {
        dut->clk = !dut->clk;
        dut->eval();
        if (tfp) tfp->dump(i);
    }
    
    // Release reset
    dut->rst_n = 1;
    dut->eval();
    
    // Main simulation variables
    uint64_t simTime = 10;
    uint8_t receivedByte = 0;
    
    std::cout << "Starting main simulation loop..." << std::endl;
    
    // Transmit each test byte
    for (size_t i = 0; i < testData.size(); i++) {
        bool transmission_done = false;
        uart_tx_byte(dut, tfp, testData[i], simTime, transmission_done, rxMonitor, receivedData);
        
        if (!transmission_done) {
            std::cout << "ERROR: Failed to transmit byte " << i << std::endl;
            break;
        }
        
        // Check if the byte was received by the monitor
        if (receivedData.size() < i + 1) {
            std::cout << "WARNING: Byte " << i << " was not detected by the RX monitor" << std::endl;
        }
    }
    
    // Run a few more cycles to catch any late receptions
    std::cout << "Running additional cycles to catch any late receptions..." << std::endl;
    for (int i = 0; i < CLOCKS_PER_BIT * 20; i++) {
        dut->clk = 0;
        dut->eval();
        if (tfp) tfp->dump(simTime++);
        
        dut->clk = 1;
        dut->eval();
        
        // Monitor the TX line
        if (rxMonitor.monitor(dut->tx, receivedByte)) {
            std::cout << "Received byte: 0x" << std::hex << (int)receivedByte << std::dec 
                      << " at time " << simTime << std::endl;
            receivedData.push_back(receivedByte);
        }
        
        if (tfp) tfp->dump(simTime++);
    }
    
    // Verify results
    bool testPassed = true;
    
    if (receivedData.size() != testData.size()) {
        std::cout << "TEST FAILED! Expected to receive " << testData.size() 
                  << " bytes, but got " << receivedData.size() << " bytes" << std::endl;
        testPassed = false;
    } else {
        for (size_t i = 0; i < testData.size(); i++) {
            if (receivedData[i] != testData[i]) {
                std::cout << "Byte " << i << " mismatch! Expected: 0x" << std::hex 
                          << (int)testData[i] << ", Got: 0x" << (int)receivedData[i] 
                          << std::dec << std::endl;
                testPassed = false;
            }
        }
    }
    
    // Print test results
    std::cout << "\n---- Test Results Summary ----" << std::endl;
    if (testPassed) {
        std::cout << "Test PASSED! All data transmitted and received correctly." << std::endl;
    } else {
        std::cout << "Test FAILED! Data mismatch or incorrect number of bytes received." << std::endl;
    }
    
    // Clean up
    if (tfp) {
        tfp->close();
        delete tfp;
    }
    delete dut;
    
    return testPassed ? 0 : 1;
} 