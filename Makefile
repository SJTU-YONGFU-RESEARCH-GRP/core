# Simplified Makefile for LLM RTL Generation Project
# Compiles Verilog files and handles verification through C++

VERILATOR = verilator
VERILATOR_FLAGS = -Wall -Wno-EOFNEWLINE --trace --cc --build -j --Mdir $(OBJDIR)
VERILATOR_CPP_FLAGS = --exe

# Output directory
OBJDIR = build

# Directory structure
LIB_DIR = libraries

# Default warning suppressions for most modules
COMMON_WARNINGS = -Wno-EOFNEWLINE -Wno-UNUSEDSIGNAL -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-UNUSEDPARAM

# Find all Verilog files in the libraries directory
VERILOG_FILES := $(shell find $(LIB_DIR) -name "*.v")
TESTBENCH_FILES := $(shell find $(LIB_DIR) -name "tb_*.cpp")

# Extract module names from Verilog files (strip path and extension)
MODULES := $(sort $(basename $(notdir $(VERILOG_FILES))))

# Create list of modules with testbenches available
TESTBENCH_MODULES := $(basename $(notdir $(TESTBENCH_FILES)))
TESTABLE_MODULES := $(sort $(patsubst tb_%,%,$(TESTBENCH_MODULES)))

# Create build targets for each testable module
BUILD_TARGETS := $(addprefix build_,$(TESTABLE_MODULES))
RUN_TARGETS := $(addprefix run_,$(TESTABLE_MODULES))
CLEAN_MOD_TARGETS := $(addprefix clean_,$(TESTABLE_MODULES))

# Associate each module with its source files
define get_module_src
$(shell find $(LIB_DIR) -name "$(1).v")
endef

define get_module_tb
$(shell find $(LIB_DIR) -name "tb_$(1).cpp")
endef

# Default target to list available commands
help:
	@echo "LLM RTL Generation Project Makefile"
	@echo "Available targets:"
	@echo "  list_modules    - List all available modules and testable modules"
	@echo "  verify <module> - Verify a specific module (e.g., make verify shift_register)"
	@echo "  verify_all      - Verify all modules with testbenches"
	@echo "  clean           - Clean all build products"
	@echo "  clean_<module>  - Clean specific module"
	@echo ""
	@echo "Group verification targets:"
	@echo "  verify_adders, verify_fifos, verify_registers, verify_alu, verify_cordic,"
	@echo "  verify_counters, verify_dividers, verify_arbiters, verify_codings,"
	@echo "  verify_noc, verify_dsp, verify_mems, verify_filters, verify_fsm,"
	@echo "  verify_comms, verify_signals, verify_voters, verify_interfaces"

# Create directories
init:
	@mkdir -p $(OBJDIR)

# Target to find and display all available modules
list_modules:
	@echo "Found $(words $(MODULES)) Verilog modules:"
	@for module in $(sort $(MODULES)); do \
		echo "  $$module"; \
	done
	@echo ""
	@echo "Found $(words $(TESTABLE_MODULES)) modules with testbenches:"
	@for module in $(sort $(TESTABLE_MODULES)); do \
		echo "  $$module"; \
	done

# Generic module build function
define build_module
	MODULE="$(1)"; \
	VERILOG_FILE=$$(find $(LIB_DIR) -name "$$MODULE.v"); \
	TESTBENCH_FILE=$$(find $(LIB_DIR) -name "tb_$$MODULE.cpp"); \
	if [ -n "$$VERILOG_FILE" ] && [ -n "$$TESTBENCH_FILE" ]; then \
		echo "Building $$MODULE from $$(dirname $$VERILOG_FILE)..."; \
		$(VERILATOR) $(VERILATOR_FLAGS) $(COMMON_WARNINGS) $(VERILATOR_CPP_FLAGS) "$$VERILOG_FILE" "$$TESTBENCH_FILE"; \
		touch $(OBJDIR)/.$$MODULE.built; \
	else \
		echo "Module $$MODULE not found or missing testbench"; \
		echo "  Verilog file: $$VERILOG_FILE"; \
		echo "  Testbench file: $$TESTBENCH_FILE"; \
		exit 1; \
	fi
endef

# Generic module run function
define run_module
	@MODULE=$(1); \
	if [ -f "$(OBJDIR)/V$$MODULE" ]; then \
		echo "Running verification for $$MODULE..."; \
		$(OBJDIR)/V$$MODULE; \
	else \
		echo "Error: Module $$MODULE not built or missing executable"; \
		exit 1; \
	fi
endef

# Verify a specific module (build and run)
verify_%: init
	$(call build_module,$*)
	$(call run_module,$*)

# Special case for modules with dependencies
verify_sine_cosine_generator: init
	@VERILOG_FILE=`find $(LIB_DIR) -name "sine_cosine_generator.v"`; \
	CORDIC_FILE=`find $(LIB_DIR) -name "cordic_core.v"`; \
	TESTBENCH_FILE=`find $(LIB_DIR) -name "tb_sine_cosine_generator.cpp"`; \
	if [ -n "$$VERILOG_FILE" ] && [ -n "$$CORDIC_FILE" ] && [ -n "$$TESTBENCH_FILE" ]; then \
		echo "Building sine_cosine_generator with dependencies..."; \
		$(VERILATOR) $(VERILATOR_FLAGS) $(COMMON_WARNINGS) -I`dirname $$CORDIC_FILE` $(VERILATOR_CPP_FLAGS) $$VERILOG_FILE $$CORDIC_FILE $$TESTBENCH_FILE; \
		echo "Running verification for sine_cosine_generator..."; \
		$(OBJDIR)/Vsine_cosine_generator; \
	else \
		echo "Skipping sine_cosine_generator (missing source or testbench)"; \
		echo "  Verilog file: $$VERILOG_FILE"; \
		echo "  CORDIC file: $$CORDIC_FILE"; \
		echo "  Testbench file: $$TESTBENCH_FILE"; \
	fi

# Clean a specific module
clean_%:
	@echo "Cleaning module $*..."
	@rm -f $(OBJDIR)/V$*
	@rm -f $(OBJDIR)/.$*.built
	@rm -f $(OBJDIR)/$**.o
	@rm -f $(OBJDIR)/V$**.cpp
	@rm -f $(OBJDIR)/V$**.h

# Clean all build products
clean:
	@echo "Cleaning all build products..."
	@rm -rf $(OBJDIR)
	@rm -f *.vcd

# Verify all modules
verify_all: init
	@for module in $(TESTABLE_MODULES); do \
		echo "\n=== Verifying $$module ==="; \
		$(MAKE) verify_$$module || echo "Verification of $$module failed"; \
	done
	@echo "\nAll verifications completed."

# Group verification targets
verify_adders: init
	@for module in $(filter $(patsubst build_%,%,$(filter build_configurable_% build_dadda_%,$(BUILD_TARGETS))),$(TESTABLE_MODULES)); do \
		echo "\n=== Verifying adder: $$module ==="; \
		$(MAKE) verify_$$module || echo "Verification of $$module failed"; \
	done
	@echo "\nAll adder verifications completed."

verify_fifos: init
	@for module in $(filter $(patsubst build_%,%,$(filter build_%fifo build_%buffer build_%queue,$(BUILD_TARGETS))),$(TESTABLE_MODULES)); do \
		echo "\n=== Verifying FIFO: $$module ==="; \
		$(MAKE) verify_$$module || echo "Verification of $$module failed"; \
	done
	@echo "\nAll FIFO verifications completed."

verify_registers: init
	@for module in $(filter $(patsubst build_%,%,$(filter build_%register build_%counter build_barrel_% build_lfsr,$(BUILD_TARGETS))),$(TESTABLE_MODULES)); do \
		echo "\n=== Verifying register: $$module ==="; \
		$(MAKE) verify_$$module || echo "Verification of $$module failed"; \
	done
	@echo "\nAll register verifications completed."

verify_alu: init
	@if [ -f "$(LIB_DIR)/alu/alu.v" ] && [ -f "$(LIB_DIR)/alu/tb_alu.cpp" ]; then \
		echo "\n=== Verifying ALU ==="; \
		$(call build_module,alu) && $(call run_module,alu) || echo "Verification of alu failed"; \
	else \
		echo "Error: ALU module or testbench not found in $(LIB_DIR)/alu/"; \
		exit 1; \
	fi
	@echo "\nALU verification completed."

verify_cordic: init
	@for module in cordic_core sine_cosine_generator; do \
		if [ -n "$$(find $(LIB_DIR) -name "$$module.v")" ] && [ -n "$$(find $(LIB_DIR) -name "tb_$$module.cpp")" ]; then \
			echo "\n=== Verifying CORDIC: $$module ==="; \
			$(call build_module,$$module) && $(call run_module,$$module) || echo "Verification of $$module failed"; \
		fi; \
	done
	@echo "\nAll CORDIC verifications completed."

verify_counters: init
	@for module in $(filter $(patsubst build_%,%,$(filter build_%counter build_%synchronizer,$(BUILD_TARGETS))),$(TESTABLE_MODULES)); do \
		echo "\n=== Verifying counter: $$module ==="; \
		$(MAKE) verify_$$module || echo "Verification of $$module failed"; \
	done
	@echo "\nAll counter verifications completed."

verify_dividers: init
	@for module in $(filter $(patsubst build_%,%,$(filter build_%divider,$(BUILD_TARGETS))),$(TESTABLE_MODULES)); do \
		echo "\n=== Verifying divider: $$module ==="; \
		$(MAKE) verify_$$module || echo "Verification of $$module failed"; \
	done
	@echo "\nAll divider verifications completed."

verify_arbiters: init
	@for module in $(filter $(patsubst build_%,%,$(filter build_%arbiter,$(BUILD_TARGETS))),$(TESTABLE_MODULES)); do \
		echo "\n=== Verifying arbiter: $$module ==="; \
		$(MAKE) verify_$$module || echo "Verification of $$module failed"; \
	done
	@echo "\nAll arbiter verifications completed."

verify_codings: init
	@for module in $(filter $(patsubst build_%,%,$(filter build_%encoder build_%decoder build_%crc% build_%scrambler build_%binary build_%gray,$(BUILD_TARGETS))),$(TESTABLE_MODULES)); do \
		echo "\n=== Verifying coding: $$module ==="; \
		$(MAKE) verify_$$module || echo "Verification of $$module failed"; \
	done
	@echo "\nAll coding verifications completed."

verify_noc: init
	@for module in $(filter $(patsubst build_%,%,$(filter build_%router build_%switch build_%network,$(BUILD_TARGETS))),$(TESTABLE_MODULES)); do \
		echo "\n=== Verifying NoC: $$module ==="; \
		$(MAKE) verify_$$module || echo "Verification of $$module failed"; \
	done
	@echo "\nAll NoC verifications completed."

verify_dsp: init
	@for module in $(filter $(patsubst build_%,%,$(filter build_%fft build_%dds build_%filter,$(BUILD_TARGETS))),$(TESTABLE_MODULES)); do \
		echo "\n=== Verifying DSP: $$module ==="; \
		$(MAKE) verify_$$module || echo "Verification of $$module failed"; \
	done
	@echo "\nAll DSP verifications completed."

verify_mems: init
	@for module in $(filter $(patsubst build_%,%,$(filter build_%ram build_%cam build_%memory,$(BUILD_TARGETS))),$(TESTABLE_MODULES)); do \
		echo "\n=== Verifying memory: $$module ==="; \
		$(MAKE) verify_$$module || echo "Verification of $$module failed"; \
	done
	@echo "\nAll memory verifications completed."

verify_filters: init
	@for module in $(filter $(patsubst build_%,%,$(filter build_%filter,$(BUILD_TARGETS))),$(TESTABLE_MODULES)); do \
		echo "\n=== Verifying filter: $$module ==="; \
		$(MAKE) verify_$$module || echo "Verification of $$module failed"; \
	done
	@echo "\nAll filter verifications completed."

verify_fsm: init
	@for module in $(filter $(patsubst build_%,%,$(filter build_%fsm build_%detector build_%machine,$(BUILD_TARGETS))),$(TESTABLE_MODULES)); do \
		echo "\n=== Verifying FSM: $$module ==="; \
		$(MAKE) verify_$$module || echo "Verification of $$module failed"; \
	done
	@echo "\nAll FSM verifications completed."

verify_comms: init
	@for module in $(filter $(patsubst build_%,%,$(filter build_%uart% build_%spi% build_%i2c% build_%serdes% build_%serializer build_%deserializer build_%master build_%slave build_jtag_controller,$(BUILD_TARGETS))),$(TESTABLE_MODULES)); do \
		echo "\n=== Verifying communication: $$module ==="; \
		$(MAKE) verify_$$module || echo "Verification of $$module failed"; \
	done
	@echo "\nAll communication verifications completed."

verify_signals: init
	@for module in $(filter $(patsubst build_%,%,$(filter build_%pwm% build_%detector build_%gating build_%generator build_%controller build_%prng,$(BUILD_TARGETS))),$(TESTABLE_MODULES)); do \
		echo "\n=== Verifying signal: $$module ==="; \
		$(MAKE) verify_$$module || echo "Verification of $$module failed"; \
	done
	@echo "\nAll signal verifications completed."

verify_voters: init
	@for module in $(filter $(patsubst build_%,%,$(filter build_%voter,$(BUILD_TARGETS))),$(TESTABLE_MODULES)); do \
		echo "\n=== Verifying voter: $$module ==="; \
		$(MAKE) verify_$$module || echo "Verification of $$module failed"; \
	done
	@echo "\nAll voter verifications completed."

verify_interfaces: init
	@for module in $(filter $(patsubst build_%,%,$(filter build_%interface build_%protocol build_%bus,$(BUILD_TARGETS))),$(TESTABLE_MODULES)); do \
		echo "\n=== Verifying interface: $$module ==="; \
		$(MAKE) verify_$$module || echo "Verification of $$module failed"; \
	done
	@echo "\nAll interface verifications completed."

# Define phony targets
.PHONY: help init list_modules verify_all clean $(CLEAN_MOD_TARGETS) \
verify_adders verify_fifos verify_registers verify_alu verify_cordic \
verify_counters verify_dividers verify_arbiters verify_codings \
verify_noc verify_dsp verify_mems verify_filters verify_fsm \
verify_comms verify_signals verify_voters verify_interfaces
