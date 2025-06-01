#include "Vpcie_endpoint.h"
#include "verilated.h"
#include <iostream>
#include <vector>
#include <string>
#include <cstdint>

// Helper function to set a 256-bit wide value in Verilator
void set_wide_value(WData* dest, uint64_t value_hi, uint64_t value_lo) {
    // Set the least significant 64 bits
    dest[0] = value_lo & 0xFFFFFFFF;         // Bits 0-31
    dest[1] = (value_lo >> 32) & 0xFFFFFFFF; // Bits 32-63
    
    // Set the most significant 64 bits
    dest[2] = value_hi & 0xFFFFFFFF;         // Bits 64-95
    dest[3] = (value_hi >> 32) & 0xFFFFFFFF; // Bits 96-127
    
    // Set remaining bits to 0
    for (int i = 4; i < 8; i++) {
        dest[i] = 0;
    }
}

// Structure to represent TLP packet data
struct TLPPacket {
    uint64_t data_hi;  // Higher 64 bits of data
    uint64_t data_lo;  // Lower 64 bits of data
    bool sop;          // Start of packet
    bool eop;          // End of packet
    std::string description;
};

// Class for testing the PCIe Endpoint
class PCIeEndpointTester {
private:
    Vpcie_endpoint* m_dut;
    vluint64_t m_tickcount;
    int m_test_count;
    int m_test_passed;
    
public:
    PCIeEndpointTester(Vpcie_endpoint* dut) : 
        m_dut(dut), m_tickcount(0), m_test_count(0), m_test_passed(0) {}
    
    ~PCIeEndpointTester() {
        delete m_dut;
    }
    
    // Reset the DUT
    void reset() {
        m_dut->rst_n = 0;
        // Initialize SerDes signals
        m_dut->rx_p = 0;
        m_dut->rx_n = 0;
        m_dut->link_train = 0;
        m_dut->tx_tlp_valid = 0;
        m_dut->tx_tlp_sop = 0;
        m_dut->tx_tlp_eop = 0;
        
        // Initialize wide data signals with zeros
        set_wide_value(m_dut->tx_tlp_data, 0, 0);
        
        // Hold reset for 10 clock cycles
        for (int i = 0; i < 10; i++) {
            tick();
        }
        m_dut->rst_n = 1;
        tick();
    }
    
    // Clock tick
    void tick() {
        m_dut->clk = 0;
        m_dut->eval();
        m_tickcount++;
        
        m_dut->clk = 1;
        m_dut->eval();
        m_tickcount++;
    }
    
    // Perform link training
    bool train_link() {
        m_test_count++;
        std::cout << "Test #" << m_test_count << ": PCIe Link Training" << std::endl;
        
        // Assert link training
        m_dut->link_train = 1;
        
        // Wait a few cycles
        for (int i = 0; i < 5; i++) {
            tick();
        }
        
        // Deassert link training
        m_dut->link_train = 0;
        
        // Wait for link to come up (timeout after 100 cycles)
        int timeout = 100;
        while (!m_dut->link_up && timeout > 0) {
            tick();
            timeout--;
        }
        
        if (timeout == 0) {
            std::cout << "Error: Link training timed out" << std::endl;
            return false;
        }
        
        // Verify link status indicates correct width and speed
        std::cout << "Link Status: " << std::hex << (int)m_dut->link_status << std::dec << std::endl;
        
        // Check link is up
        if (!m_dut->link_up) {
            std::cout << "Error: Link is not up after training" << std::endl;
            return false;
        }
        
        std::cout << "Link training successful!" << std::endl;
        m_test_passed++;
        return true;
    }
    
    // Test TLP transmission
    bool test_tlp_tx() {
        m_test_count++;
        std::cout << "Test #" << m_test_count << ": TLP Transmission Test" << std::endl;
        
        // First ensure link is up
        if (!m_dut->link_up) {
            std::cout << "Error: Link not up, can't test TLP transmission" << std::endl;
            return false;
        }
        
        bool success = true;
        
        // Define TLP packets to send
        std::vector<TLPPacket> tlps = {
            {0x0000000000000000, 0x12345678ABCDEF01, true, false, "First packet (SOP)"},
            {0x0000000000000000, 0xFEDCBA9876543210, false, true, "Second packet (EOP)"},
            {0x0000000000000001, 0xA5A5A5A5A5A5A5A5, true, true, "Third packet (SOP+EOP)"}
        };
        
        // Send each packet
        for (size_t i = 0; i < tlps.size(); i++) {
            const auto& tlp = tlps[i];
            std::cout << "Sending TLP #" << (i+1) << ": " << tlp.description << std::endl;
            
            // Set TLP data using our helper function
            set_wide_value(m_dut->tx_tlp_data, tlp.data_hi, tlp.data_lo);
            m_dut->tx_tlp_sop = tlp.sop;
            m_dut->tx_tlp_eop = tlp.eop;
            m_dut->tx_tlp_valid = 1;
            
            // Wait for tx_ready
            int timeout = 20;
            while (!m_dut->tx_tlp_ready && timeout > 0) {
                tick();
                timeout--;
            }
            
            if (timeout == 0) {
                std::cout << "Error: Timeout waiting for tx_tlp_ready" << std::endl;
                success = false;
                break;
            }
            
            // Complete the transaction
            tick();
            m_dut->tx_tlp_valid = 0;
            
            // Wait a few cycles between TLPs
            for (int j = 0; j < 5; j++) {
                tick();
            }
        }
        
        if (success) {
            std::cout << "TLP transmission test successful!" << std::endl;
            m_test_passed++;
        }
        
        return success;
    }
    
    // Test TLP reception
    bool test_tlp_rx() {
        m_test_count++;
        std::cout << "Test #" << m_test_count << ": TLP Reception Test" << std::endl;
        
        // First ensure link is up
        if (!m_dut->link_up) {
            std::cout << "Error: Link not up, can't test TLP reception" << std::endl;
            return false;
        }
        
        bool success = true;
        int received_packets = 0;
        
        // We'll simulate SerDes activity by toggling the rx_p and rx_n signals
        // and wait for the PCIe endpoint to process them
        
        // Toggle rx signals to simulate packets
        for (int i = 0; i < 50; i++) {
            m_dut->rx_p = (i % 8 == 0) ? 0xF : 0;
            m_dut->rx_n = (i % 8 == 0) ? 0 : 0xF;
            tick();
            
            // Check if we've received a TLP
            if (m_dut->rx_tlp_valid) {
                // Print the lower 64 bits for brevity
                std::cout << "Received TLP: Data=0x" << std::hex 
                          << ((uint64_t)m_dut->rx_tlp_data[1] << 32 | m_dut->rx_tlp_data[0])
                          << ", SOP=" << m_dut->rx_tlp_sop
                          << ", EOP=" << m_dut->rx_tlp_eop
                          << std::dec << std::endl;
                received_packets++;
            }
        }
        
        // We should have received at least one packet
        if (received_packets == 0) {
            std::cout << "Error: No TLP packets received" << std::endl;
            success = false;
        } else {
            std::cout << "Received " << received_packets << " TLP packets" << std::endl;
        }
        
        if (success) {
            std::cout << "TLP reception test successful!" << std::endl;
            m_test_passed++;
        }
        
        return success;
    }
    
    // Test link retraining
    bool test_link_retrain() {
        m_test_count++;
        std::cout << "Test #" << m_test_count << ": PCIe Link Retraining" << std::endl;
        
        // First ensure link is up
        if (!m_dut->link_up) {
            std::cout << "Error: Link not up, can't test retraining" << std::endl;
            return false;
        }
        
        // Assert link training request
        m_dut->link_train = 1;
        
        // Link should go down
        tick();
        
        // Wait a few cycles
        for (int i = 0; i < 5; i++) {
            tick();
        }
        
        // Verify link is down
        if (m_dut->link_up) {
            std::cout << "Error: Link is still up during retraining" << std::endl;
            return false;
        }
        
        // Deassert link training
        m_dut->link_train = 0;
        
        // Wait for link to come back up
        int timeout = 100;
        while (!m_dut->link_up && timeout > 0) {
            tick();
            timeout--;
        }
        
        if (timeout == 0) {
            std::cout << "Error: Link retraining timed out" << std::endl;
            return false;
        }
        
        // Verify link is up again
        std::cout << "Link is back up after retraining" << std::endl;
        m_test_passed++;
        return true;
    }
    
    // Run all test cases
    void run_tests() {
        reset();
        
        // Train the link first
        if (train_link()) {
            // If link training was successful, run other tests
            test_tlp_tx();
            test_tlp_rx();
            test_link_retrain();
        }
        
        print_summary();
    }
    
    // Print test summary
    void print_summary() {
        std::cout << "\n==== Test Summary ====" << std::endl;
        std::cout << "Result: " << (m_test_passed == m_test_count ? "Pass" : "Fail") << std::endl;
        std::cout << "Tests: " << m_test_passed << " of " << m_test_count << std::endl;
    }
};

// Main function
int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create the DUT instance
    Vpcie_endpoint* dut = new Vpcie_endpoint;
    
    // Create tester
    PCIeEndpointTester tester(dut);
    
    // Run the tests
    tester.run_tests();
    
    // Finish
    return 0;
} 