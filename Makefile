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
ADDERS_MODULES = cla ks bk cond_sum csk csel
FIFO_MODULES = fifo sync_fifo param_fifo dual_clock_fifo
SHIFTER_MODULES = shift_right shift_left sipo piso
REGISTER_MODULES = $(SHIFTER_MODULES) barrel_rotator param_barrel_rotator barrel_shifter
ALU_MODULES = alu mult fp_adder
COUNTERS = gray_counter lfsr config_lfsr pwm clock_div param_freq_div
ARBITERS = arbiter rr fair_arbiter
CODINGS = bin_to_gray gray_to_bin hamming priority_enc config_priority_enc lzc clz_clo mesh_router
MEMS = dual_port_ram
FILTERS = fir config_fir
FSM_MODULES = seq_detector
COMMS = crossbar serdes uart_tx

# All modules combined
ALL_MODULES = $(ADDERS_MODULES) $(FIFO_MODULES) $(REGISTER_MODULES) $(ALU_MODULES) $(COUNTERS) $(ARBITERS) $(CODINGS) $(MEMS) $(FILTERS) $(FSM_MODULES) $(COMMS)

# Default target to build and run all modules
all: $(foreach module,$(ALL_MODULES),run_$(module))

# ---------------------------------------
# Generic build and run rules
# ---------------------------------------

# Generic rule for building modules
define build_module_rule
build_$(1): $$($(3))/$$($(2)_TARGET).v $$($(3))/tb_$$($(2)_TARGET).cpp
	$$(VERILATOR) $$(VERILATOR_FLAGS) $$(VERILATOR_CPP_FLAGS) $$($(3))/$$($(2)_TARGET).v $$($(3))/tb_$$($(2)_TARGET).cpp

# Run the module testbench
run_$(1): build_$(1)
	./$$(OBJDIR)/V$$($(2)_TARGET)
endef

# Generate rules for each module type
$(foreach module,cla,$(eval $(call build_module_rule,$(module),CONFIG_CLA,ADDERS_DIR)))
$(foreach module,ks,$(eval $(call build_module_rule,$(module),CONFIG_KS,ADDERS_DIR)))
$(foreach module,bk,$(eval $(call build_module_rule,$(module),CONFIG_BK,ADDERS_DIR)))
$(foreach module,cond_sum,$(eval $(call build_module_rule,$(module),CONFIG_COND_SUM,ADDERS_DIR)))
$(foreach module,csk,$(eval $(call build_module_rule,$(module),CONFIG_CSK,ADDERS_DIR)))
$(foreach module,csel,$(eval $(call build_module_rule,$(module),CONFIG_CSEL,ADDERS_DIR)))

$(foreach module,fifo,$(eval $(call build_module_rule,$(module),FIFO,FIFO_DIR)))
$(foreach module,sync_fifo,$(eval $(call build_module_rule,$(module),CONFIG_SYNC_FIFO,FIFO_DIR)))
$(foreach module,param_fifo,$(eval $(call build_module_rule,$(module),CONFIG_PARAM_FIFO,FIFO_DIR)))
$(foreach module,dual_clock_fifo,$(eval $(call build_module_rule,$(module),DUAL_CLOCK_FIFO,FIFO_DIR)))

$(foreach module,shift_right,$(eval $(call build_module_rule,$(module),SHIFT_REG_RIGHT,REGISTERS_DIR)))
$(foreach module,shift_left,$(eval $(call build_module_rule,$(module),SHIFT_REG_LEFT,REGISTERS_DIR)))
$(foreach module,sipo,$(eval $(call build_module_rule,$(module),SIPO,REGISTERS_DIR)))
$(foreach module,piso,$(eval $(call build_module_rule,$(module),PISO,REGISTERS_DIR)))

$(foreach module,alu,$(eval $(call build_module_rule,$(module),ALU,ALU_DIR)))
$(foreach module,barrel_shifter,$(eval $(call build_module_rule,$(module),BARREL_SHIFTER,REGISTERS_DIR)))

$(foreach module,barrel_rotator,$(eval $(call build_module_rule,$(module),BARREL_ROTATOR,REGISTERS_DIR)))
$(foreach module,param_barrel_rotator,$(eval $(call build_module_rule,$(module),PARAM_BARREL_ROTATOR,REGISTERS_DIR)))
$(foreach module,mult,$(eval $(call build_module_rule,$(module),MULT,MULTIPLIERS_DIR)))

# Special rule for FP adder that uses different flags
build_fp_adder: $(CONFIG_FP_ADDER_TARGET).v tb_$(CONFIG_FP_ADDER_TARGET).cpp
	$(VERILATOR) $(VERILATOR_FLAGS_FP_ADDER) $(VERILATOR_CPP_FLAGS) $(CONFIG_FP_ADDER_TARGET).v tb_$(CONFIG_FP_ADDER_TARGET).cpp

run_fp_adder: build_fp_adder
	./$(OBJDIR)/V$(CONFIG_FP_ADDER_TARGET)

$(foreach module,gray_counter,$(eval $(call build_module_rule,$(module),GRAY_COUNTER,COUNTERS_DIR)))
$(foreach module,lfsr,$(eval $(call build_module_rule,$(module),LFSR,COUNTERS_DIR)))
$(foreach module,config_lfsr,$(eval $(call build_module_rule,$(module),CONFIG_LFSR,COUNTERS_DIR)))
$(foreach module,pwm,$(eval $(call build_module_rule,$(module),PWM,COUNTERS_DIR)))
$(foreach module,clock_div,$(eval $(call build_module_rule,$(module),CLOCK_DIV,COUNTERS_DIR)))
$(foreach module,param_freq_div,$(eval $(call build_module_rule,$(module),PARAM_FREQ_DIV,COUNTERS_DIR)))

$(foreach module,arbiter,$(eval $(call build_module_rule,$(module),ARBITER,ARBITERS_DIR)))
$(foreach module,rr,$(eval $(call build_module_rule,$(module),ARBITER_RR,ARBITERS_DIR)))
$(foreach module,fair_arbiter,$(eval $(call build_module_rule,$(module),FAIR_ARBITER,ARBITERS_DIR)))

$(foreach module,bin_to_gray,$(eval $(call build_module_rule,$(module),BINARY_TO_GRAY,CODINGS_DIR)))
$(foreach module,gray_to_bin,$(eval $(call build_module_rule,$(module),GRAY_TO_BINARY,CODINGS_DIR)))
$(foreach module,hamming,$(eval $(call build_module_rule,$(module),HAMMING_CODE,CODINGS_DIR)))
$(foreach module,priority_enc,$(eval $(call build_module_rule,$(module),PRIORITY_ENC,CODINGS_DIR)))
$(foreach module,config_priority_enc,$(eval $(call build_module_rule,$(module),CONFIG_PRIORITY_ENC,CODINGS_DIR)))
$(foreach module,lzc,$(eval $(call build_module_rule,$(module),LZC,CODINGS_DIR)))
$(foreach module,clz_clo,$(eval $(call build_module_rule,$(module),CONFIG_CLZ_CLO,CODINGS_DIR)))
$(foreach module,mesh_router,$(eval $(call build_module_rule,$(module),MESH_ROUTER,CODINGS_DIR)))

$(foreach module,dual_port_ram,$(eval $(call build_module_rule,$(module),DUAL_PORT_RAM,MEMS_DIR)))

$(foreach module,fir,$(eval $(call build_module_rule,$(module),FIR_FILTER,FILTERS_DIR)))
$(foreach module,config_fir,$(eval $(call build_module_rule,$(module),CONFIG_FIR_FILTER,FILTERS_DIR)))

$(foreach module,seq_detector,$(eval $(call build_module_rule,$(module),SEQ_DETECTOR,FSM_DIR)))

$(foreach module,crossbar,$(eval $(call build_module_rule,$(module),CROSSBAR,COMMS_DIR)))
$(foreach module,serdes,$(eval $(call build_module_rule,$(module),PARAM_SERDES,COMMS_DIR)))
$(foreach module,uart_tx,$(eval $(call build_module_rule,$(module),PARAM_UART_TX,COMMS_DIR)))

# Special rules for parameterized modules with different parameter configs
# FIR filter with different configurations
build_config_fir_low_pass: $(FILTERS_DIR)/$(CONFIG_FIR_FILTER_TARGET).v $(FILTERS_DIR)/tb_$(CONFIG_FIR_FILTER_TARGET).cpp
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_CPP_FLAGS) -GFILTER_TYPE=0 $(FILTERS_DIR)/$(CONFIG_FIR_FILTER_TARGET).v $(FILTERS_DIR)/tb_$(CONFIG_FIR_FILTER_TARGET).cpp

run_config_fir_low_pass: build_config_fir_low_pass
	@echo "\n==== RUNNING LOW-PASS FILTER TEST ====\n"
	./$(OBJDIR)/V$(CONFIG_FIR_FILTER_TARGET) 0

build_config_fir_high_pass: $(FILTERS_DIR)/$(CONFIG_FIR_FILTER_TARGET).v $(FILTERS_DIR)/tb_$(CONFIG_FIR_FILTER_TARGET).cpp
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_CPP_FLAGS) -GFILTER_TYPE=1 $(FILTERS_DIR)/$(CONFIG_FIR_FILTER_TARGET).v $(FILTERS_DIR)/tb_$(CONFIG_FIR_FILTER_TARGET).cpp

run_config_fir_high_pass: build_config_fir_high_pass
	@echo "\n==== RUNNING HIGH-PASS FILTER TEST ====\n"
	./$(OBJDIR)/V$(CONFIG_FIR_FILTER_TARGET) 1

# Group targets for specific categories
adders: $(foreach module,$(ADDERS_MODULES),run_$(module))
fifos: $(foreach module,$(FIFO_MODULES),run_$(module))
registers: $(foreach module,$(REGISTER_MODULES),run_$(module))
alu: $(foreach module,$(ALU_MODULES),run_$(module))
counters: $(foreach module,$(COUNTERS),run_$(module))
arbiters: $(foreach module,$(ARBITERS),run_$(module))
codings: $(foreach module,$(CODINGS),run_$(module))
mems: $(foreach module,$(MEMS),run_$(module))
filters: $(foreach module,$(FILTERS),run_$(module)) run_config_fir_low_pass run_config_fir_high_pass
fsm: $(foreach module,$(FSM_MODULES),run_$(module))
comms: $(foreach module,$(COMMS),run_$(module))

# Clean all build products
clean:
	rm -rf $(OBJDIR)
	rm -f *.vcd

# PHONY targets to prevent conflicts with file names
.PHONY: all clean $(foreach module,$(ALL_MODULES),build_$(module) run_$(module)) \
	adders fifos registers alu counters arbiters codings mems filters fsm comms \
	build_config_fir_low_pass run_config_fir_low_pass build_config_fir_high_pass run_config_fir_high_pass