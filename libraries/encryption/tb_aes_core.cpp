#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <bitset>
#include <iomanip>
#include <vector>
#include "Vaes_core.h"

// ANSI color codes for terminal output
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_RESET   "\x1b[0m"

// Define test vector structure
typedef struct {
    int key_size;
    uint8_t key[32];
    uint8_t plaintext[16];
    uint8_t ciphertext[16];
} TestVector;

// Forward declarations
void print_state(const char* label, const uint8_t* data);
bool test_encryption(Vaes_core* aes, VerilatedVcdC* tfp, TestVector& test_vector, vluint64_t& main_time);
bool test_decryption(Vaes_core* aes, VerilatedVcdC* tfp, TestVector& test_vector, vluint64_t& main_time);
void apply_inputs(Vaes_core* aes, VerilatedVcdC* tfp, bool encrypt, const uint8_t* data, const uint8_t* key, int key_size, vluint64_t& main_time);
void read_output(Vaes_core* aes, uint8_t* result);
void advance_cycles(Vaes_core* aes, VerilatedVcdC* tfp, int cycles, vluint64_t& main_time);

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of the AES core
    Vaes_core* aes = new Vaes_core;
    
    // Initialize VCD tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    aes->trace(tfp, 99);
    tfp->open("aes_core.vcd");

    // Simulation time
    vluint64_t main_time = 0;

    // Define test vectors - only using AES-128 for simplicity
    std::vector<TestVector> test_vectors = {
        // AES-128 Test Vector 1
        {
            128,
            // Key (128 bits / 16 bytes)
            { 0x2b, 0x7e, 0x15, 0x16, 0x28, 0xae, 0xd2, 0xa6, 
              0xab, 0xf7, 0x15, 0x88, 0x09, 0xcf, 0x4f, 0x3c },
            // Plaintext (128 bits / 16 bytes)
            { 0x32, 0x43, 0xf6, 0xa8, 0x88, 0x5a, 0x30, 0x8d, 
              0x31, 0x31, 0x98, 0xa2, 0xe0, 0x37, 0x07, 0x34 },
            // Ciphertext (128 bits / 16 bytes)
            { 0x39, 0x25, 0x84, 0x1d, 0x02, 0xdc, 0x09, 0xfb, 
              0xdc, 0x11, 0x85, 0x97, 0x19, 0x6a, 0x0b, 0x32 }
        },
        // AES-128 Test Vector 2
        {
            128,
            // Key (128 bits / 16 bytes)
            { 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
              0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f },
            // Plaintext (128 bits / 16 bytes)
            { 0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77,
              0x88, 0x99, 0xaa, 0xbb, 0xcc, 0xdd, 0xee, 0xff },
            // Ciphertext (128 bits / 16 bytes)
            { 0x69, 0xc4, 0xe0, 0xd8, 0x6a, 0x7b, 0x04, 0x30,
              0xd8, 0xcd, 0xb7, 0x80, 0x70, 0xb4, 0xc5, 0x5a }
        }
    };

    // Start with reset
    aes->rst_n = 0;
    aes->clk = 0;
    aes->eval();
    tfp->dump(main_time);
    main_time++;
    
    // Release reset after a few clock cycles
    advance_cycles(aes, tfp, 5, main_time);
    aes->rst_n = 1;
    advance_cycles(aes, tfp, 5, main_time);
    
    // Track test results
    int tests_passed = 0;
    int total_tests = test_vectors.size() * 2; // For both encryption and decryption
    
    std::cout << ANSI_COLOR_YELLOW << "\n===== AES Core Testing =====" << ANSI_COLOR_RESET << std::endl;
    
    // Run tests for each test vector
    for (size_t i = 0; i < test_vectors.size(); i++) {
        TestVector& test_vector = test_vectors[i];
        
        std::cout << ANSI_COLOR_YELLOW << "\nTest Vector " << i+1 << " (AES-" 
                  << test_vector.key_size << ")" << ANSI_COLOR_RESET << std::endl;
        
        // Test encryption
        bool enc_result = test_encryption(aes, tfp, test_vector, main_time);
        if (enc_result) tests_passed++;
        
        // Reset between tests
        aes->rst_n = 0;
        advance_cycles(aes, tfp, 5, main_time);
        aes->rst_n = 1;
        advance_cycles(aes, tfp, 5, main_time);
        
        // Test decryption
        bool dec_result = test_decryption(aes, tfp, test_vector, main_time);
        if (dec_result) tests_passed++;
        
        // Reset after test
        aes->rst_n = 0;
        advance_cycles(aes, tfp, 5, main_time);
        aes->rst_n = 1;
        advance_cycles(aes, tfp, 5, main_time);
    }
    
    // Print test summary in the requested format
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (tests_passed == total_tests ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << tests_passed << " of " << total_tests << std::endl;
    std::cout << "VCD trace file: aes_core.vcd" << std::endl;
    
    // Clean up
    tfp->close();
    delete tfp;
    delete aes;
    
    return tests_passed == total_tests ? 0 : 1;
}

// Helper function to print state
void print_state(const char* label, const uint8_t* data) {
    std::cout << label << ": ";
    for (int i = 0; i < 16; i++) {
        std::cout << std::hex << std::setw(2) << std::setfill('0') << (int)data[i] << " ";
    }
    std::cout << std::dec << std::endl;
}

// Function to test encryption
bool test_encryption(Vaes_core* aes, VerilatedVcdC* tfp, TestVector& test_vector, vluint64_t& main_time) {
    std::cout << "Testing Encryption:" << std::endl;
    print_state("Plaintext", test_vector.plaintext);
    print_state("Expected ", test_vector.ciphertext);
    print_state("Key      ", test_vector.key);
    
    // Apply test vector inputs for encryption
    apply_inputs(aes, tfp, true, test_vector.plaintext, test_vector.key, test_vector.key_size, main_time);
    
    // Run simulation until AES core is done
    int timeout = 200; // Increased timeout for safety
    while ((!aes->done || aes->busy) && --timeout > 0) {
        advance_cycles(aes, tfp, 1, main_time);
        
        // Print debugging info about signals
        std::cout << "Cycle: " << (200-timeout) 
                  << " Done: " << (int)aes->done
                  << " Busy: " << (int)aes->busy
                  << std::endl;
    }
    
    if (timeout <= 0) {
        std::cout << "ERROR: Simulation timed out - AES core is stuck" << std::endl;
        return false;
    }
    
    // Wait a few more cycles for done signal to be processed
    advance_cycles(aes, tfp, 2, main_time);
    
    // Read encrypted output
    uint8_t result[16];
    read_output(aes, result);
    print_state("Result   ", result);
    
    // Check result
    bool success = true;
    for (int i = 0; i < 16; i++) {
        if (result[i] != test_vector.ciphertext[i]) {
            success = false;
            break;
        }
    }
    
    std::cout << "Encryption Test: " << (success ? 
        ANSI_COLOR_GREEN "PASSED" : 
        ANSI_COLOR_RED "FAILED") << ANSI_COLOR_RESET << std::endl;
    
    return success;
}

// Function to test decryption
bool test_decryption(Vaes_core* aes, VerilatedVcdC* tfp, TestVector& test_vector, vluint64_t& main_time) {
    std::cout << "Testing Decryption:" << std::endl;
    print_state("Ciphertext", test_vector.ciphertext);
    print_state("Expected  ", test_vector.plaintext);
    print_state("Key       ", test_vector.key);
    
    // Apply test vector inputs for decryption
    apply_inputs(aes, tfp, false, test_vector.ciphertext, test_vector.key, test_vector.key_size, main_time);
    
    // Run simulation until AES core is done
    int timeout = 200; // Increased timeout for safety
    while ((!aes->done || aes->busy) && --timeout > 0) {
        advance_cycles(aes, tfp, 1, main_time);
        
        // Print debugging info about signals
        std::cout << "Cycle: " << (200-timeout) 
                  << " Done: " << (int)aes->done
                  << " Busy: " << (int)aes->busy
                  << std::endl;
    }
    
    if (timeout <= 0) {
        std::cout << "ERROR: Simulation timed out - AES core is stuck" << std::endl;
        return false;
    }
    
    // Wait a few more cycles for done signal to be processed
    advance_cycles(aes, tfp, 2, main_time);
    
    // Read decrypted output
    uint8_t result[16];
    read_output(aes, result);
    print_state("Result    ", result);
    
    // Check result
    bool success = true;
    for (int i = 0; i < 16; i++) {
        if (result[i] != test_vector.plaintext[i]) {
            success = false;
            break;
        }
    }
    
    std::cout << "Decryption Test: " << (success ? 
        ANSI_COLOR_GREEN "PASSED" : 
        ANSI_COLOR_RED "FAILED") << ANSI_COLOR_RESET << std::endl;
    
    return success;
}

// Function to apply inputs to AES core
void apply_inputs(Vaes_core* aes, VerilatedVcdC* tfp, bool encrypt, const uint8_t* data, const uint8_t* key, int key_size, vluint64_t& main_time) {
    // Set encrypt mode
    aes->encrypt = encrypt;
    
    // Set data input - handling 128-bit wide signal properly
    for (int i = 0; i < 4; i++) {
        aes->data_in[i] = 0;
    }
    
    // Load 16 bytes into the data_in array (4 words of 32 bits each)
    for (int i = 0; i < 16; i++) {
        int word_idx = i / 4;
        int byte_pos = 3 - (i % 4);  // Big endian format within each word
        aes->data_in[word_idx] |= (static_cast<uint32_t>(data[i]) << (byte_pos * 8));
    }
    
    // Set key input - handling 128-bit wide signal properly
    for (int i = 0; i < 4; i++) {
        aes->key[i] = 0;
    }
    
    // Load 16 bytes into the key array (4 words of 32 bits each)
    for (int i = 0; i < 16; i++) {
        int word_idx = i / 4;
        int byte_pos = 3 - (i % 4);  // Big endian format within each word
        aes->key[word_idx] |= (static_cast<uint32_t>(key[i]) << (byte_pos * 8));
    }
    
    // Set start signal and reset done signal as we begin a new operation
    aes->start = 0;
    advance_cycles(aes, tfp, 2, main_time);
    aes->start = 1;
    advance_cycles(aes, tfp, 1, main_time);
    aes->start = 0;
}

// Function to read output from AES core
void read_output(Vaes_core* aes, uint8_t* result) {
    // Extract 16 bytes from the data_out array (4 words of 32 bits each)
    for (int i = 0; i < 16; i++) {
        int word_idx = i / 4;
        int byte_pos = 3 - (i % 4);  // Big endian format within each word
        result[i] = (aes->data_out[word_idx] >> (byte_pos * 8)) & 0xFF;
    }
}

// Function to advance simulation by multiple clock cycles
void advance_cycles(Vaes_core* aes, VerilatedVcdC* tfp, int cycles, vluint64_t& main_time) {
    for (int i = 0; i < cycles; i++) {
        // Toggle clock
        aes->clk = !aes->clk;
        aes->eval();
        if (tfp) tfp->dump(main_time);
        main_time++;
        
        aes->clk = !aes->clk;
        aes->eval();
        if (tfp) tfp->dump(main_time);
        main_time++;
    }
} 