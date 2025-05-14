VERILATOR = verilator
VERILATOR_FLAGS = -Wall --trace --cc --build -j --Mdir $(OBJDIR)
VERILATOR_CPP_FLAGS = --exe

# Output directory
OBJDIR = build

# Special flags for specific modules
VERILATOR_FLAGS_FP_ADDER = --trace --cc --build -j --Mdir $(OBJDIR)

# Library directories and module categories
LIB_DIR = libraries
ADDERS_DIR = $(LIB_DIR)/adders
ARBITERS_DIR = $(LIB_DIR)/arbiters
ALU_DIR = $(LIB_DIR)/alu
COMMS_DIR = $(LIB_DIR)/comms
CODINGS_DIR = $(LIB_DIR)/codings
COUNTERS_DIR = $(LIB_DIR)/counters
DIVIDERS_DIR = $(LIB_DIR)/dividers
FIFO_DIR = $(LIB_DIR)/fifo
FILTERS_DIR = $(LIB_DIR)/filters
FSM_DIR = $(LIB_DIR)/fsm
MEMS_DIR = $(LIB_DIR)/mems
MULTIPLIERS_DIR = $(LIB_DIR)/multipliers
REGISTERS_DIR = $(LIB_DIR)/registers
SIGNALS_DIR = $(LIB_DIR)/signals

# Adder modules
CONFIG_CLA_TARGET = configurable_carry_lookahead_adder
CONFIG_KS_TARGET = configurable_kogge_stone_adder
CONFIG_BK_TARGET = configurable_brent_kung_adder
CONFIG_COND_SUM_TARGET = configurable_conditional_sum_adder
CONFIG_CSK_TARGET = configurable_carry_skip_adder
CONFIG_CSEL_TARGET = configurable_carry_select_adder

# FIFO modules
FIFO_TARGET = fifo
CONFIG_SYNC_FIFO_TARGET = configurable_sync_fifo
CONFIG_PARAM_FIFO_TARGET = configurable_param_fifo
DUAL_CLOCK_FIFO_TARGET = dual_clock_fifo

# Register modules
SHIFT_REG_RIGHT_TARGET = shift_register_right
SHIFT_REG_LEFT_TARGET = shift_register_left
SHIFT_REG_TARGET = shift_register
SIPO_TARGET = sipo_register
PISO_TARGET = piso_register
BARREL_ROTATOR_TARGET = barrel_rotator
PARAM_BARREL_ROTATOR_TARGET = parameterized_barrel_rotator

# ALU and arithmetic modules
ALU_TARGET = alu
BARREL_SHIFTER_TARGET = barrel_shifter
MULT_TARGET = configurable_mult
CONFIG_FP_ADDER_TARGET = configurable_fp_adder

# Counter and sequence modules
GRAY_COUNTER_TARGET = gray_counter
LFSR_TARGET = lfsr
CONFIG_LFSR_TARGET = configurable_lfsr
PWM_TARGET = pwm_generator
CLOCK_DIV_TARGET = clock_divider
PARAM_FREQ_DIV_TARGET = parameterized_freq_divider

# Arbiter modules
ARBITER_TARGET = arbiter
ARBITER_RR_TARGET = arbiter_rr
FAIR_ARBITER_TARGET = fair_priority_arbiter

# Coding and decoding modules
BINARY_TO_GRAY_TARGET = binary_to_gray
GRAY_TO_BINARY_TARGET = gray_to_binary
HAMMING_CODE_TARGET = hamming_code
PRIORITY_ENC_TARGET = priority_encoder
CONFIG_PRIORITY_ENC_TARGET = configurable_priority_encoder
LZC_TARGET = leading_zero_counter
CONFIG_CLZ_CLO_TARGET = configurable_clz_clo
MESH_ROUTER_TARGET = configurable_mesh_router

# Memory modules
DUAL_PORT_RAM_TARGET = dual_port_ram

# Filter modules
FIR_FILTER_TARGET = fir_filter
CONFIG_FIR_FILTER_TARGET = configurable_fir_filter

# FSM modules
SEQ_DETECTOR_TARGET = sequence_detector_fsm

# Communication modules
CROSSBAR_TARGET = crossbar_switch
PARAM_SERDES_TARGET = parameterized_serdes
PARAM_UART_TX_TARGET = parameterized_uart_tx

# Module categories for convenient building
ADDERS_MODULES = run_configurable_carry_lookahead_adder run_configurable_kogge_stone_adder run_configurable_brent_kung_adder run_configurable_conditional_sum_adder run_configurable_carry_skip_adder run_configurable_carry_select_adder
FIFO_MODULES = run_fifo run_configurable_sync_fifo run_configurable_param_fifo run_dual_clock_fifo
SHIFTER_MODULES = run_shift_register_right run_shift_register_left run_sipo_register run_piso_register
REGISTER_MODULES = $(SHIFTER_MODULES) run_barrel_rotator run_parameterized_barrel_rotator run_barrel_shifter run_lfsr run_configurable_lfsr
ALU_MODULES = run_alu run_configurable_mult run_configurable_fp_adder
COUNTERS = run_gray_counter run_configurable_clz_clo
DIVIDERS = run_clock_divider run_parameterized_freq_divider
ARBITERS = run_arbiter run_arbiter_rr run_fair_priority_arbiter
CODINGS = run_binary_to_gray run_gray_to_binary run_hamming_code run_priority_encoder run_configurable_priority_encoder run_leading_zero_counter run_configurable_mesh_router
MEMS = run_dual_port_ram
FILTERS = run_fir_filter run_configurable_fir_filter
FSM_MODULES = run_sequence_detector_fsm
COMMS = run_crossbar_switch run_parameterized_serdes run_parameterized_uart_tx
SIGNALS = run_pwm_generator

# All modules combined
ALL_MODULES = $(ADDERS_MODULES) $(FIFO_MODULES) $(REGISTER_MODULES) $(ALU_MODULES) $(COUNTERS) $(DIVIDERS) $(ARBITERS) $(CODINGS) $(MEMS) $(FILTERS) $(FSM_MODULES) $(COMMS) $(SIGNALS)

# Default target to build and run all modules
all: $(ALL_MODULES)

# ---------------------------------------
# Generic build and run rules
# ---------------------------------------

# Generic rule for building modules
define build_module_rule
build_$(1): $$($(3))/$$($(2)_TARGET).v $$($(3))/tb_$$($(2)_TARGET).cpp
	$$(VERILATOR) $$(VERILATOR_FLAGS) $$(VERILATOR_CPP_FLAGS) $$($(3))/$$($(2)_TARGET).v $$($(3))/tb_$$($(2)_TARGET).cpp

# Run the module testbench
$(1): build_$(1)
	./$$(OBJDIR)/V$$($(2)_TARGET)
endef

# Generate rules for each module type
$(foreach module,run_configurable_carry_lookahead_adder,$(eval $(call build_module_rule,$(module),CONFIG_CLA,ADDERS_DIR)))
$(foreach module,run_configurable_kogge_stone_adder,$(eval $(call build_module_rule,$(module),CONFIG_KS,ADDERS_DIR)))
$(foreach module,run_configurable_brent_kung_adder,$(eval $(call build_module_rule,$(module),CONFIG_BK,ADDERS_DIR)))
$(foreach module,run_configurable_conditional_sum_adder,$(eval $(call build_module_rule,$(module),CONFIG_COND_SUM,ADDERS_DIR)))
$(foreach module,run_configurable_carry_skip_adder,$(eval $(call build_module_rule,$(module),CONFIG_CSK,ADDERS_DIR)))
$(foreach module,run_configurable_carry_select_adder,$(eval $(call build_module_rule,$(module),CONFIG_CSEL,ADDERS_DIR)))

$(foreach module,run_fifo,$(eval $(call build_module_rule,$(module),FIFO,FIFO_DIR)))
$(foreach module,run_configurable_sync_fifo,$(eval $(call build_module_rule,$(module),CONFIG_SYNC_FIFO,FIFO_DIR)))
$(foreach module,run_configurable_param_fifo,$(eval $(call build_module_rule,$(module),CONFIG_PARAM_FIFO,FIFO_DIR)))
$(foreach module,run_dual_clock_fifo,$(eval $(call build_module_rule,$(module),DUAL_CLOCK_FIFO,FIFO_DIR)))

$(foreach module,run_shift_register_right,$(eval $(call build_module_rule,$(module),SHIFT_REG_RIGHT,REGISTERS_DIR)))
$(foreach module,run_shift_register_left,$(eval $(call build_module_rule,$(module),SHIFT_REG_LEFT,REGISTERS_DIR)))
$(foreach module,run_shift_register,$(eval $(call build_module_rule,$(module),SHIFT_REG,REGISTERS_DIR)))
$(foreach module,run_sipo_register,$(eval $(call build_module_rule,$(module),SIPO,REGISTERS_DIR)))
$(foreach module,run_piso_register,$(eval $(call build_module_rule,$(module),PISO,REGISTERS_DIR)))

$(foreach module,run_alu,$(eval $(call build_module_rule,$(module),ALU,ALU_DIR)))
$(foreach module,run_barrel_shifter,$(eval $(call build_module_rule,$(module),BARREL_SHIFTER,REGISTERS_DIR)))

$(foreach module,run_barrel_rotator,$(eval $(call build_module_rule,$(module),BARREL_ROTATOR,REGISTERS_DIR)))
$(foreach module,run_parameterized_barrel_rotator,$(eval $(call build_module_rule,$(module),PARAM_BARREL_ROTATOR,REGISTERS_DIR)))
$(foreach module,run_configurable_mult,$(eval $(call build_module_rule,$(module),MULT,MULTIPLIERS_DIR)))

# Special rule for FP adder that uses different flags
build_run_configurable_fp_adder: $(ADDERS_DIR)/$(CONFIG_FP_ADDER_TARGET).v $(ADDERS_DIR)/tb_$(CONFIG_FP_ADDER_TARGET).cpp
	$(VERILATOR) $(VERILATOR_FLAGS_FP_ADDER) $(VERILATOR_CPP_FLAGS) $(ADDERS_DIR)/$(CONFIG_FP_ADDER_TARGET).v $(ADDERS_DIR)/tb_$(CONFIG_FP_ADDER_TARGET).cpp

run_configurable_fp_adder: build_run_configurable_fp_adder
	./$(OBJDIR)/V$(CONFIG_FP_ADDER_TARGET)

$(foreach module,run_gray_counter,$(eval $(call build_module_rule,$(module),GRAY_COUNTER,COUNTERS_DIR)))
$(foreach module,run_lfsr,$(eval $(call build_module_rule,$(module),LFSR,REGISTERS_DIR)))
$(foreach module,run_configurable_lfsr,$(eval $(call build_module_rule,$(module),CONFIG_LFSR,REGISTERS_DIR)))
$(foreach module,run_pwm_generator,$(eval $(call build_module_rule,$(module),PWM,SIGNALS_DIR)))
$(foreach module,run_clock_divider,$(eval $(call build_module_rule,$(module),CLOCK_DIV,DIVIDERS_DIR)))
$(foreach module,run_parameterized_freq_divider,$(eval $(call build_module_rule,$(module),PARAM_FREQ_DIV,DIVIDERS_DIR)))

$(foreach module,run_arbiter,$(eval $(call build_module_rule,$(module),ARBITER,ARBITERS_DIR)))
$(foreach module,run_arbiter_rr,$(eval $(call build_module_rule,$(module),ARBITER_RR,ARBITERS_DIR)))
$(foreach module,run_fair_priority_arbiter,$(eval $(call build_module_rule,$(module),FAIR_ARBITER,ARBITERS_DIR)))

$(foreach module,run_binary_to_gray,$(eval $(call build_module_rule,$(module),BINARY_TO_GRAY,CODINGS_DIR)))
$(foreach module,run_gray_to_binary,$(eval $(call build_module_rule,$(module),GRAY_TO_BINARY,CODINGS_DIR)))
$(foreach module,run_hamming_code,$(eval $(call build_module_rule,$(module),HAMMING_CODE,CODINGS_DIR)))
$(foreach module,run_priority_encoder,$(eval $(call build_module_rule,$(module),PRIORITY_ENC,CODINGS_DIR)))
$(foreach module,run_configurable_priority_encoder,$(eval $(call build_module_rule,$(module),CONFIG_PRIORITY_ENC,CODINGS_DIR)))
$(foreach module,run_leading_zero_counter,$(eval $(call build_module_rule,$(module),LZC,COUNTERS_DIR)))
$(foreach module,run_configurable_clz_clo,$(eval $(call build_module_rule,$(module),CONFIG_CLZ_CLO,COUNTERS_DIR)))
$(foreach module,run_configurable_mesh_router,$(eval $(call build_module_rule,$(module),MESH_ROUTER,CODINGS_DIR)))

$(foreach module,run_dual_port_ram,$(eval $(call build_module_rule,$(module),DUAL_PORT_RAM,MEMS_DIR)))

$(foreach module,run_fir_filter,$(eval $(call build_module_rule,$(module),FIR_FILTER,FILTERS_DIR)))
$(foreach module,run_configurable_fir_filter,$(eval $(call build_module_rule,$(module),CONFIG_FIR_FILTER,FILTERS_DIR)))

$(foreach module,run_sequence_detector_fsm,$(eval $(call build_module_rule,$(module),SEQ_DETECTOR,FSM_DIR)))

$(foreach module,run_crossbar_switch,$(eval $(call build_module_rule,$(module),CROSSBAR,CODINGS_DIR)))
$(foreach module,run_parameterized_serdes,$(eval $(call build_module_rule,$(module),PARAM_SERDES,COMMS_DIR)))
$(foreach module,run_parameterized_uart_tx,$(eval $(call build_module_rule,$(module),PARAM_UART_TX,COMMS_DIR)))

# Group targets for specific categories
adders: $(ADDERS_MODULES)
fifos: $(FIFO_MODULES)
registers: $(REGISTER_MODULES)
alu: $(ALU_MODULES)
counters: $(COUNTERS)
dividers: $(DIVIDERS)
arbiters: $(ARBITERS)
codings: $(CODINGS)
mems: $(MEMS)
filters: $(FILTERS) run_config_fir_low_pass run_config_fir_high_pass
fsm: $(FSM_MODULES)
comms: $(COMMS)
signals: $(SIGNALS)

# Clean all build products
clean:
	rm -rf $(OBJDIR)
	rm -f *.vcd

# PHONY targets to prevent conflicts with file names
.PHONY: all clean $(ALL_MODULES) \
	adders fifos registers alu counters dividers arbiters codings mems filters fsm comms signals \
	build_config_fir_low_pass run_config_fir_low_pass build_config_fir_high_pass run_config_fir_high_pass