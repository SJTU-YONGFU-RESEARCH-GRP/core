#!/bin/bash

# Exit on error
set -e

# Colors for output
GREEN='\033[0;32m'
RED='\033[0;31m'
YELLOW='\033[0;33m'
NC='\033[0m' # No Color

echo -e "${YELLOW}===== True Random Generator Testing =====${NC}"

# Clean any previous builds
echo -e "${YELLOW}Cleaning previous builds...${NC}"
make clean

# Build and run the tests
echo -e "${YELLOW}Building and running tests...${NC}"
make test_trng

# Check exit status
if [ $? -eq 0 ]; then
    echo -e "${GREEN}All tests passed!${NC}"
else
    echo -e "${RED}Some tests failed.${NC}"
    exit 1
fi

echo -e "${YELLOW}Simulation VCD file: true_random_generator.vcd${NC}" 