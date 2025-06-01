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

// Test vectors for AES-128
const uint8_t TEST_KEY[16] = {0x2b, 0x7e, 0x15, 0x16, 0x28, 0xae, 0xd2, 0xa6, 
                              0xab, 0xf7, 0x15, 0x88, 0x09, 0xcf, 0x4f, 0x3c};
const uint8_t TEST_PLAINTEXT[16] = {0x32, 0x43, 0xf6, 0xa8, 0x88, 0x5a, 0x30, 0x8d, 
                                    0x31, 0x31, 0x98, 0xa2, 0xe0, 0x37, 0x07, 0x34};
const uint8_t EXPECTED_CIPHERTEXT[16] = {0x39, 0x02, 0xdc, 0x19, 0x25, 0xdc, 0x11, 0x6a, 
                                         0x84, 0x09, 0x85, 0x0b, 0x1d, 0xfb, 0x97, 0x32};

void print_hex(const char* label, const uint8_t* data, size_t len) {
    std::cout << label << ": ";
    for (size_t i = 0; i < len; ++i) {
        std::cout << std::hex << std::setw(2) << std::setfill('0') 
                  << static_cast<int>(data[i]) << " ";
    }
    std::cout << std::dec << std::endl;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Instantiate the AES core module
    Vaes_core* aes = new Vaes_core;
    
    // Test Encryption
    std::cout << "=== AES-128 Encryption Test ===" << std::endl;
    
    // Prepare inputs
    uint64_t input_low = 0, input_high = 0;
    uint64_t key_low = 0, key_high = 0;
    
    for (int i = 0; i < 8; ++i) {
        input_low |= (static_cast<uint64_t>(TEST_PLAINTEXT[i]) << (i * 8));
        input_high |= (static_cast<uint64_t>(TEST_PLAINTEXT[i+8]) << (i * 8));
        key_low |= (static_cast<uint64_t>(TEST_KEY[i]) << (i * 8));
        key_high |= (static_cast<uint64_t>(TEST_KEY[i+8]) << (i * 8));
    }
    
    // Reset
    aes->rst_n = 0;
    aes->clk = 0;
    aes->eval();
    aes->clk = 1;
    aes->eval();
    
    // Release reset
    aes->rst_n = 1;
    aes->clk = 0;
    aes->eval();
    
    // Set inputs: assign plaintext and key words from low/high 64-bit halves
    {
        aes->data_in[0] = static_cast<uint32_t>((input_high >> 32) & 0xffffffff);
        aes->data_in[1] = static_cast<uint32_t>( input_high        & 0xffffffff);
        aes->data_in[2] = static_cast<uint32_t>((input_low  >> 32) & 0xffffffff);
        aes->data_in[3] = static_cast<uint32_t>( input_low         & 0xffffffff);
        aes->key[0]     = static_cast<uint32_t>((key_high   >> 32) & 0xffffffff);
        aes->key[1]     = static_cast<uint32_t>( key_high          & 0xffffffff);
        aes->key[2]     = static_cast<uint32_t>((key_low    >> 32) & 0xffffffff);
        aes->key[3]     = static_cast<uint32_t>( key_low           & 0xffffffff);
        aes->encrypt    = 1;  // Encryption mode
        aes->start      = 1;
    }
    
    // Clock cycles
    for (int i = 0; i < 20; ++i) {
        aes->clk = 1;
        aes->eval();
        aes->clk = 0;
        aes->eval();
        
        if (aes->done) {
            break;
        }
    }
    
    // Extract 32-bit words and reconstruct output bytes
    uint32_t w0 = aes->data_out[0];
    uint32_t w1 = aes->data_out[1];
    uint32_t w2 = aes->data_out[2];
    uint32_t w3 = aes->data_out[3];
    uint8_t output[16];
    output[0]  = (w0 >> 24) & 0xFF; output[1]  = (w0 >> 16) & 0xFF;
    output[2]  = (w0 >> 8)  & 0xFF; output[3]  = (w0 >> 0)  & 0xFF;
    output[4]  = (w1 >> 24) & 0xFF; output[5]  = (w1 >> 16) & 0xFF;
    output[6]  = (w1 >> 8)  & 0xFF; output[7]  = (w1 >> 0)  & 0xFF;
    output[8]  = (w2 >> 24) & 0xFF; output[9]  = (w2 >> 16) & 0xFF;
    output[10] = (w2 >> 8)  & 0xFF; output[11] = (w2 >> 0)  & 0xFF;
    output[12] = (w3 >> 24) & 0xFF; output[13] = (w3 >> 16) & 0xFF;
    output[14] = (w3 >> 8)  & 0xFF; output[15] = (w3 >> 0)  & 0xFF;
    
    print_hex("Plaintext", TEST_PLAINTEXT, 16);
    print_hex("Key", TEST_KEY, 16);
    print_hex("Ciphertext", output, 16);
    print_hex("Expected", EXPECTED_CIPHERTEXT, 16);
    
    // Verify result
    bool test_passed = true;
    for (int i = 0; i < 16; ++i) {
        if (output[i] != EXPECTED_CIPHERTEXT[i]) {
            test_passed = false;
            break;
        }
    }
    
    // Test Summary
    std::cout << "\n==== Test Summary ====" << std::endl;
    std::cout << "Result: " << (test_passed ? "Pass" : "Fail") << std::endl;
    std::cout << "Tests: " << (test_passed ? "1" : "0") << " of 1" << std::endl;
    
    delete aes;
    return test_passed ? 0 : 1;
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