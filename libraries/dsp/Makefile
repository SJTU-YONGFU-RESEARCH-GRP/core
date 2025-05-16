# Verilator configuration
VERILATOR = verilator
VERILATOR_FLAGS = -Wall --trace --cc --build -j 4

# Directory containing the Verilog source files
SRC_DIR = .

# Directory for object files
OBJDIR = obj_dir

# Find all Verilog files
VERILOG_FILES = $(wildcard $(SRC_DIR)/*.v)

# Create a list of test benches (cpp files starting with tb_)
TEST_BENCHES = $(wildcard $(SRC_DIR)/tb_*.cpp)

# Create a list of module names from the test benches
MODULES = $(patsubst $(SRC_DIR)/tb_%.cpp,%,$(TEST_BENCHES))

# Create a list of executable names
EXECUTABLES = $(patsubst %,$(SRC_DIR)/%.exe,$(MODULES))

# Default target
all: $(EXECUTABLES)

# Rule to build an executable for each module
%.exe: $(SRC_DIR)/%.v $(SRC_DIR)/tb_%.cpp
	@echo "Building $@..."
	@$(VERILATOR) $(VERILATOR_FLAGS) $^
	@mv $(OBJDIR)/V$* $@

# Run all tests
test: $(EXECUTABLES)
	@echo "\n=== Running all tests ==="
	for exe in $(EXECUTABLES); do \
		echo "\n--- Running $${exe} ---"; \
		$${exe}; \
		if [ $$? -ne 0 ]; then \
			echo "Test $${exe} failed!"; \
			exit 1; \
		fi; \
	done
	@echo "\n=== All tests completed successfully ===\n"

# Clean generated files
clean:
	@echo "Cleaning generated files..."
	@rm -rf $(OBJDIR) *.exe *.vcd

# List modules with and without testbenches
list:
	@echo "Modules with testbenches:"
	@for module in $(MODULES); do \
		echo "  - $$module"; \
	done
	@echo "\nModules without testbenches:"
	@for file in $(VERILOG_FILES); do \
		base=$$(basename $$file .v); \
		if [ ! -f $(SRC_DIR)/tb_$$base.cpp ]; then \
			echo "  - $$base"; \
		fi; \
	done

.PHONY: all test clean list 