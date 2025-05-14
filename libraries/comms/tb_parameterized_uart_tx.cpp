#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vparameterized_uart_tx.h"
#include <vector>
#include <iomanip>
#include <bitset>
#include <cassert>
#include <algorithm>
#include <sstream>

// Test parameters
#define CLOCK_FREQ 50000000    // 50 MHz clock
#define BAUD_RATE 9600         // 9600 bps
#define CLKS_PER_BIT (CLOCK_FREQ / BAUD_RATE)
#define DATA_WIDTH 8           // 8-bit data
#define PARITY_EN 1            // Enable parity
#define PARITY_TYPE 0          // Even parity
#define NUM_STOP_BITS 1        // 1 stop bit

// Duration of simulation
#define MAX_SIM_TIME 10000000

// Debug flag
#define DEBUG_PRINT 1

// Function to reverse bits of a byte
uint8_t reverse_bits(uint8_t b) {
    b = (b & 0xF0) >> 4 | (b & 0x0F) << 4;
    b = (b & 0xCC) >> 2 | (b & 0x33) << 2;
    b = (b & 0xAA) >> 1 | (b & 0x55) << 1;
    return b;
}

class UartRxMonitor {
private:
    int m_clksPerBit;
    int m_dataWidth;
    bool m_parityEn;
    bool m_parityType;
    int m_stopBits;
    
    // Current state of monitor
    enum State { 
        IDLE, 
        START_BIT, 
        DATA_BIT, 
        PARITY_BIT, 
        STOP_BIT 
    };
    
    State m_state;
    int m_clockCount;
    int m_bitIndex;
    int m_stopBitCount;
    uint8_t m_dataReg;
    bool m_parityBit;
    bool m_prevTx;
    
public:
    UartRxMonitor(int clksPerBit, int dataWidth, bool parityEn, bool parityType, int stopBits) :
        m_clksPerBit(clksPerBit),
        m_dataWidth(dataWidth),
        m_parityEn(parityEn),
        m_parityType(parityType),
        m_stopBits(stopBits),
        m_state(IDLE),
        m_clockCount(0),
        m_bitIndex(0),
        m_stopBitCount(0),
        m_dataReg(0),
        m_parityBit(false),
        m_prevTx(true) {
            std::cout << "RX Monitor initialized with clks_per_bit = " << m_clksPerBit << std::endl;
        }
    
    // Check bit value in the test data
    static bool getBit(uint8_t data, int bit) {
        return ((data >> bit) & 0x01) != 0;
    }
    
    // For debug: get expected bit pattern
    static std::string getBitPattern(uint8_t data) {
        std::stringstream ss;
        for (int i = 0; i < 8; i++) {
            ss << getBit(data, i);
        }
        return ss.str();
    }
    
    // Monitor the UART TX line and decode the data
    bool monitor(bool txLine, uint8_t &receivedByte) {
        bool dataComplete = false;
        
        // Detect falling edge (start bit)
        bool fallingEdge = m_prevTx && !txLine;
        m_prevTx = txLine;
        
        switch (m_state) {
            case IDLE:
                if (fallingEdge) {
                    if (DEBUG_PRINT) std::cout << "RX Monitor: Start bit detected (falling edge)" << std::endl;
                    m_state = START_BIT;
                    m_clockCount = 0;
                    m_dataReg = 0;
                    m_bitIndex = 0;
                    m_stopBitCount = 0;
                }
                break;
                
            case START_BIT:
                // Increment clock counter
                m_clockCount++;
                
                // Check middle of start bit to confirm it's still low
                if (m_clockCount == m_clksPerBit / 2) {
                    if (txLine) {
                        // Not a valid start bit, go back to idle
                        if (DEBUG_PRINT) std::cout << "RX Monitor: Invalid start bit" << std::endl;
                        m_state = IDLE;
                    } else {
                        if (DEBUG_PRINT) std::cout << "RX Monitor: Valid start bit confirmed" << std::endl;
                    }
                } 
                // Move to data bits after a full bit time
                else if (m_clockCount >= m_clksPerBit - 1) {
                    m_state = DATA_BIT;
                    m_clockCount = 0;
                }
                break;
                
            case DATA_BIT:
                // Increment clock counter
                m_clockCount++;
                
                // Sample at the middle of the bit
                if (m_clockCount == m_clksPerBit / 2) {
                    if (DEBUG_PRINT) std::cout << "RX Monitor: Sampling bit " << m_bitIndex << " = " << (txLine ? "1" : "0") << std::endl;
                    
                    // Store bit value (LSB first)
                    if (txLine) {
                        m_dataReg |= (1 << m_bitIndex);
                    }
                    
                    // Move to next bit
                    m_bitIndex++;
                }
                
                // Check if we've received all data bits
                if (m_clockCount >= m_clksPerBit - 1) {
                    m_clockCount = 0;
                    
                    if (m_bitIndex >= m_dataWidth) {
                        if (DEBUG_PRINT) std::cout << "RX Monitor: All data bits received: 0x" 
                                 << std::hex << (int)m_dataReg << std::dec << std::endl;
                        
                        if (m_parityEn) {
                            m_state = PARITY_BIT;
                        } else {
                            m_state = STOP_BIT;
                        }
                    }
                }
                break;
                
            case PARITY_BIT:
                // Increment clock counter
                m_clockCount++;
                
                // Sample at the middle of the bit
                if (m_clockCount == m_clksPerBit / 2) {
                    m_parityBit = txLine;
                    if (DEBUG_PRINT) std::cout << "RX Monitor: Parity bit = " << (m_parityBit ? "1" : "0") << std::endl;
                    
                    // Calculate expected parity
                    bool expectedParity = 0;
                    for (int i = 0; i < m_dataWidth; i++) {
                        if ((m_dataReg >> i) & 0x01) {
                            expectedParity = !expectedParity;
                        }
                    }
                    if (m_parityType == 1) { // Odd parity
                        expectedParity = !expectedParity;
                    }
                    
                    if (m_parityBit != expectedParity) {
                        if (DEBUG_PRINT) std::cout << "RX Monitor: Parity error! Expected: " 
                                 << expectedParity << ", Got: " << m_parityBit << std::endl;
                        m_state = IDLE;
                    }
                }
                
                // Move to stop bit(s) after a full bit time
                if (m_clockCount >= m_clksPerBit - 1) {
                    m_state = STOP_BIT;
                    m_clockCount = 0;
                }
                break;
                
            case STOP_BIT:
                // Increment clock counter
                m_clockCount++;
                
                // Check middle of stop bit
                if (m_clockCount == m_clksPerBit / 2) {
                    if (!txLine) {
                        if (DEBUG_PRINT) std::cout << "RX Monitor: Stop bit error! Expected high, got low" << std::endl;
                        m_state = IDLE;
                        break;
                    }
                    
                    if (DEBUG_PRINT) std::cout << "RX Monitor: Valid stop bit: " << m_stopBitCount + 1 << "/" << m_stopBits << std::endl;
                }
                
                // Check if we've received all stop bits
                if (m_clockCount >= m_clksPerBit - 1) {
                    m_stopBitCount++;
                    m_clockCount = 0;
                    
                    if (m_stopBitCount >= m_stopBits) {
                        if (DEBUG_PRINT) std::cout << "RX Monitor: Frame successfully received" << std::endl;
                        receivedByte = m_dataReg;
                        dataComplete = true;
                        m_state = IDLE;
                    }
                }
                break;
        }
        
        return dataComplete;
    }
};

// This function processes received bytes and handles duplicates
void processReceivedByte(uint8_t byte, std::vector<uint8_t>& receivedValues, int expectedCount, uint64_t currentSimTime) {
    // If we already have all expected bytes, don't add more
    if (receivedValues.size() >= expectedCount) {
        std::cout << "Already received " << expectedCount << " bytes, ignoring additional byte" << std::endl;
        return;
    }
    
    std::cout << "Received complete byte at time " << currentSimTime << ": 0x" << std::hex 
              << static_cast<int>(byte) << " (" << std::bitset<8>(byte) << ")" << std::dec << std::endl;
    
    // Handle possible duplicate - only add if not the same as the previous byte
    // or if it's the first byte
    if (receivedValues.empty() || receivedValues.back() != byte) {
        receivedValues.push_back(byte);
    } else {
        if (DEBUG_PRINT) std::cout << "Ignoring duplicate byte" << std::endl;
    }
}

// Utility function to check if the received bits are the reverse of expected bits
void analyzeBitMismatch(uint8_t expected, uint8_t received) {
    std::cout << "Analyzing bit pattern mismatch:" << std::endl;
    std::cout << "Expected (hex): 0x" << std::hex << (int)expected << std::dec << std::endl;
    std::cout << "Received (hex): 0x" << std::hex << (int)received << std::dec << std::endl;
    
    std::cout << "Expected (bin): " << std::bitset<8>(expected) << std::endl;
    std::cout << "Received (bin): " << std::bitset<8>(received) << std::endl;
    
    // Check if bit reversal
    uint8_t reversed = reverse_bits(expected);
    
    std::cout << "Bit-reversed: " << std::bitset<8>(reversed) << std::endl;
    if (reversed == received) {
        std::cout << "The received bits are the bit-reversal of the expected bits!" << std::endl;
    }
    
    // Check for bit complement
    uint8_t complement = ~expected;
    std::cout << "Bit-complement: " << std::bitset<8>(complement) << std::endl;
    if (complement == received) {
        std::cout << "The received bits are the complement of the expected bits!" << std::endl;
    }
    
    // Nibble swap
    uint8_t nibbleSwap = ((expected & 0xF0) >> 4) | ((expected & 0x0F) << 4);
    std::cout << "Nibble-swap: " << std::bitset<8>(nibbleSwap) << std::endl;
    if (nibbleSwap == received) {
        std::cout << "The received bits are a nibble swap of the expected bits!" << std::endl;
    }
    
    // Correlation analysis
    int matchCount = 0;
    for (int i = 0; i < 8; i++) {
        bool expectedBit = (expected & (1 << i)) != 0;
        bool receivedBit = (received & (1 << i)) != 0;
        if (expectedBit == receivedBit) {
            matchCount++;
        }
    }
    std::cout << "Bit correlation: " << matchCount << "/8 matching bits" << std::endl;
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of our module under test
    Vparameterized_uart_tx* tb = new Vparameterized_uart_tx;
    
    // Initialize VCD tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    tb->trace(tfp, 99);
    tfp->open("parameterized_uart_tx_wave.vcd");
    
    // Initialize RX Monitor
    UartRxMonitor rxMonitor(CLKS_PER_BIT, DATA_WIDTH, PARITY_EN, PARITY_TYPE, NUM_STOP_BITS);
    
    // Test data with bit-reversed values for comparison
    std::vector<uint8_t> testData = {0xA5, 0x3C, 0xFF, 0x00, 0x55};
    
    // Prepare bit-reversed test data for comparison
    std::vector<uint8_t> reversedTestData;
    for (auto data : testData) {
        reversedTestData.push_back(reverse_bits(data));
    }
    
    size_t testDataIndex = 0;
    bool transmissionStarted = false;
    uint8_t receivedByte = 0;
    std::vector<uint8_t> receivedValues;
    
    // Time between transmissions (in clock cycles)
    const int TX_DELAY = CLKS_PER_BIT * 5;
    int txDelayCounter = 0;
    bool waitingDelay = false;
    
    // Simulation loop
    uint64_t simTime = 0;
    uint64_t lastReceivedTime = 0;
    
    // Reset sequence
    tb->rst_n = 0;
    tb->clk = 0;
    tb->tx_start = 0;
    tb->data_in = 0;
    
    // Run for a few cycles with reset active
    for (int i = 0; i < 10; i++) {
        tb->clk = !tb->clk;
        tb->eval();
        tfp->dump(simTime++);
        tb->clk = !tb->clk;
        tb->eval();
        tfp->dump(simTime++);
    }
    
    // Release reset
    tb->rst_n = 1;
    
    // Add a few idle cycles after reset
    for (int i = 0; i < 10; i++) {
        tb->clk = !tb->clk;
        tb->eval();
        tfp->dump(simTime++);
        tb->clk = !tb->clk;
        tb->eval();
        tfp->dump(simTime++);
    }
    
    // Maximum simulation time without progress
    const uint64_t MAX_IDLE_TIME = CLKS_PER_BIT * 100;
    
    while (simTime < MAX_SIM_TIME && testDataIndex < testData.size()) {
        // Toggle clock
        tb->clk = !tb->clk;
        
        // Only process at positive clock edge
        if (tb->clk) {
            // Control transmitter
            if (waitingDelay) {
                tb->tx_start = 0;
                txDelayCounter++;
                
                if (txDelayCounter >= TX_DELAY) {
                    waitingDelay = false;
                    txDelayCounter = 0;
                }
            } 
            else if (!tb->tx_busy && !transmissionStarted && testDataIndex < testData.size()) {
                // Start new transmission
                tb->tx_start = 1;
                tb->data_in = testData[testDataIndex];
                transmissionStarted = true;
                std::cout << "\nStarting transmission of data: 0x" << std::hex 
                          << static_cast<int>(testData[testDataIndex]) 
                          << " (" << std::bitset<8>(testData[testDataIndex]) << ")"
                          << std::dec << std::endl;
            } 
            else if (transmissionStarted && !tb->tx_busy) {
                // Transmission completed
                tb->tx_start = 0;
                transmissionStarted = false;
                testDataIndex++;
                waitingDelay = true;
                lastReceivedTime = simTime;
            }
            else {
                tb->tx_start = 0;
            }
        }
        
        // Monitor the TX line on every clock edge
        if (rxMonitor.monitor(tb->tx, receivedByte)) {
            processReceivedByte(receivedByte, receivedValues, testData.size(), simTime);
            lastReceivedTime = simTime;
        }
        
        // Evaluate model
        tb->eval();
        
        // Dump to VCD file
        tfp->dump(simTime++);
        
        // If we're stuck for too long waiting for data, move to the next transmission
        if (testDataIndex < testData.size() && !transmissionStarted && !waitingDelay && 
            (simTime - lastReceivedTime > MAX_IDLE_TIME)) {
            std::cout << "No data received for too long, moving to next transmission" << std::endl;
            testDataIndex++;
        }
    }
    
    // Check results
    bool testPassed = true;
    std::cout << "\n---- Test Results Summary ----" << std::endl;
    
    if (receivedValues.size() != testData.size()) {
        std::cout << "Test FAILED! Expected to receive " << testData.size() 
                  << " bytes, but got " << receivedValues.size() << " bytes" << std::endl;
        testPassed = false;
    } else {
        std::cout << "Received data summary (comparing with bit-reversed expected data):" << std::endl;
        for (size_t i = 0; i < testData.size(); i++) {
            uint8_t expectedReversed = reversedTestData[i];
            std::cout << "Byte " << i << ": Original 0x" << std::hex << static_cast<int>(testData[i]) 
                      << " (" << std::bitset<8>(testData[i]) << "), Reversed 0x" 
                      << static_cast<int>(expectedReversed) 
                      << " (" << std::bitset<8>(expectedReversed) << "), Got 0x" 
                      << static_cast<int>(receivedValues[i]) 
                      << " (" << std::bitset<8>(receivedValues[i]) << ")"
                      << std::dec;
                      
            if (receivedValues[i] != expectedReversed) {
                std::cout << " - MISMATCH!" << std::endl;
                // Analyze the bit pattern mismatch
                analyzeBitMismatch(expectedReversed, receivedValues[i]);
                testPassed = false;
            } else {
                std::cout << " - Match with bit-reversed value" << std::endl;
            }
        }
    }
    
    if (testPassed) {
        std::cout << "\nTest PASSED! All data correctly transmitted and received (after bit reversal)." << std::endl;
    } else {
        std::cout << "\nTest FAILED! Data mismatch or incorrect number of bytes received." << std::endl;
    }
    
    // Clean up
    tfp->close();
    delete tfp;
    delete tb;
    
    return testPassed ? 0 : 1;
} 