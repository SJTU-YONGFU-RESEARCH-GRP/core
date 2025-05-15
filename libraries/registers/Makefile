VERILATOR = verilator
VERILATOR_FLAGS = -Wall --trace --cc --build -j

# Object directory
OBJDIR = obj_dir

# List of modules to test
MODULES = shift_register_left \
          shift_register_right \
          shift_register \
          barrel_shifter \
          universal_shift_register \
          dual_edge_register \
          siso_register \
          piso_register \
          barrel_rotator \
          parameterized_barrel_rotator \
          bidirectional_shift_register \
          johnson_counter \
          loadable_updown_counter \
          register_file \
          scan_register \
          shadow_register \
          toggle_register \
          onehot_decoder_register \
          sync_preset_register \
          sipo_register \
          configurable_lfsr \
          lfsr

# Default target builds all executables
all: $(MODULES:%=%.exe)

# Rule for building executables
%.exe: %.v tb_%.cpp
	$(VERILATOR) $(VERILATOR_FLAGS) --Mdir $(OBJDIR) --exe tb_$*.cpp $*.v
	@echo "Building $@ using Verilator"
	@cp $(OBJDIR)/V$* $@

# Run all tests
test: $(MODULES:%=run_%)

# Rule for running a test
run_%: %.exe
	@echo "Running test for $*"
	./$*.exe

# Clean generated files
clean:
	rm -rf $(OBJDIR)
	rm -f *.exe
	rm -f *.vcd

.PHONY: all test clean $(MODULES:%=run_%) 