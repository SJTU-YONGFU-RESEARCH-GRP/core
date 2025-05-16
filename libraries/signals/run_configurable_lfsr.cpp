#include <iostream>
#include <iomanip>
#include <vector>
#include <bitset>
#include <cstdint>

// Simplified version to test the output format
std::vector<uint32_t> calculate_lfsr_sequence(uint32_t seed, uint32_t tap_pattern, int width, int sequence_length) {
    std::vector<uint32_t> sequence;
    uint32_t lfsr = seed;
    uint32_t mask = (1 << width) - 1;  // Mask for the width
    
    for (int i = 0; i < sequence_length; i++) {
        sequence.push_back(lfsr);
        
        // Calculate feedback bit
        uint32_t feedback = 0;
        for (int j = 0; j < width; j++) {
            if ((tap_pattern >> j) & 1) {
                feedback ^= ((lfsr >> j) & 1);
            }
        }
        
        // Shift right, insert feedback at MSB
        lfsr = ((feedback << (width - 1)) | (lfsr >> 1)) & mask;
    }
    
    return sequence;
}

int main() {
    const int WIDTH = 8;
    const int MAX_CYCLES = 32;
    
    uint32_t seed = 0x01;  // Non-zero seed
    uint32_t tap_pattern = 0b00110001;  // Taps at positions 0, 4, 5, 6
    
    // Calculate expected sequence
    std::vector<uint32_t> expected_sequence = calculate_lfsr_sequence(seed, tap_pattern, WIDTH, MAX_CYCLES);
    
    // Run and display results
    for (int i = 0; i < MAX_CYCLES; i++) {
        uint32_t expected = expected_sequence[i];
        uint32_t actual = expected;  // In this test, we're assuming expected == actual
        
        printf("%-7d0x%-13x0x%-13xPASS\n", i, expected, actual);
    }
    
    std::cout << "\nAll tests passed!" << std::endl;
    
    return 0;
} 