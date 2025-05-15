# This file has been integrated into the main project Makefile
# The content was:
#
# VERILATOR = verilator
# VERILATOR_FLAGS = -Wall --trace --cc --build -j
#
# # Object directory
# OBJDIR = obj_dir
#
# # List of modules to test
# MODULES = booth_multiplier \
#           radix4_booth_multiplier \
#           configurable_mult
#
# # Default target builds all executables
# all: $(MODULES:%=%.exe)
#
# # Rule for building executables
# %.exe: %.v tb_%.cpp
# 	$(VERILATOR) $(VERILATOR_FLAGS) --Mdir $(OBJDIR) --exe tb_$*.cpp $*.v
# 	@echo "Building $@ using Verilator"
# 	@cp $(OBJDIR)/V$* $@
#
# # Run all tests
# test: $(MODULES:%=%.exe)
# 	@echo "\n=== Running all tests ==="
# 	@for module in $(MODULES); do \
# 		echo "\n--- Running test for $$module ---"; \
# 		./$$module.exe | grep -A3 "Test Summary"; \
# 	done
# 	@echo "\n=== All tests completed ===\n"
#
# # Rule for running a single test
# run_%: %.exe
# 	@echo "Running test for $*"
# 	./$*.exe
#
# # Clean generated files
# clean:
# 	rm -rf $(OBJDIR)
# 	rm -f *.exe
# 	rm -f *.vcd
#
# .PHONY: all test clean $(MODULES:%=run_%) 