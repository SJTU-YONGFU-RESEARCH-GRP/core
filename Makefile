VERILATOR = verilator
VERILATOR_FLAGS = -Wall -Wno-EOFNEWLINE --trace --cc --build -j --Mdir $(OBJDIR)
VERILATOR_CPP_FLAGS = --exe

# Output directory
OBJDIR = build

# Special flags for specific modules
VERILATOR_FLAGS_FP_ADDER = --trace --cc --build -j --Mdir $(OBJDIR)
VERILATOR_FLAGS_SIGNED_COMPARATOR = -Wall --trace --cc --build -j --Mdir $(OBJDIR) -GWIDTH=16 -GSIGNED_COMPARE=1
VERILATOR_FLAGS_UART_RX = -Wall --trace --cc --build -j --Mdir $(OBJDIR) -GCLK_FREQ=50000 -GBAUD_RATE=1000
VERILATOR_FLAGS_SPI_MASTER = -Wall --trace --cc --build -j --Mdir $(OBJDIR) -GDATA_WIDTH=8
VERILATOR_FLAGS_PARAM_FFT = --trace --cc --build -j --Mdir $(OBJDIR) -GDATA_WIDTH=16 -GFFT_POINTS=8 -Wno-width -Wno-unoptflat -Wno-unusedsignal -Wno-unsigned
VERILATOR_FLAGS_JOHNSON_COUNTER = -Wall --trace --cc --build -j --Mdir $(OBJDIR) -GWIDTH=6
VERILATOR_FLAGS_PARAM_CLOCK_GATING = -Wall --trace --cc --build -j --Mdir $(OBJDIR) -GSTAGES=2 -GLATCH_BASED=1 -GENABLE_ACTIVE_LOW=0
VERILATOR_FLAGS_UNIVERSAL_SHIFT_REGISTER = -Wall --trace --cc --build -j --Mdir $(OBJDIR) -GWIDTH=8 -GDIRECTION_WIDTH=2
VERILATOR_FLAGS_BIDIRECTIONAL_SHIFT_REGISTER = -Wall --trace --cc --build -j --Mdir $(OBJDIR) -GWIDTH=8
VERILATOR_FLAGS_JOHNSON_COUNTER_REG = -Wall --trace --cc --build -j --Mdir $(OBJDIR) -GWIDTH=4
VERILATOR_FLAGS_LOADABLE_UPDOWN_COUNTER = -Wall --trace --cc --build -j --Mdir $(OBJDIR) -GWIDTH=8
VERILATOR_FLAGS_REGISTER_FILE = -Wall --trace --cc --build -j --Mdir $(OBJDIR) -GWIDTH=32 -GDEPTH=32
VERILATOR_FLAGS_SCAN_REGISTER = -Wall --trace --cc --build -j --Mdir $(OBJDIR) -GWIDTH=8
VERILATOR_FLAGS_SHADOW_REGISTER = -Wall --trace --cc --build -j --Mdir $(OBJDIR) -GWIDTH=32
VERILATOR_FLAGS_MATRIX_ARBITER = -Wall -Wno-UNUSEDSIGNAL -Wno-LATCH -Wno-WIDTHTRUNC --trace --cc --build -j --Mdir $(OBJDIR) -GNUM_REQUESTORS=4 -GPRIORITY_WIDTH=2 -GRESET_HIGH=1
VERILATOR_FLAGS_MEMORY_CONTROLLER = -Wall --trace --cc --build -j --Mdir $(OBJDIR) -GADDR_WIDTH=8 -GDATA_WIDTH=32 -GMEM_DEPTH=256 -GBURST_LENGTH=4 -GREAD_LATENCY=2
VERILATOR_FLAGS_PARAM_GRAY_COUNTER = -Wall --trace --cc --build -j --Mdir $(OBJDIR) -GWIDTH=4 -GCOUNT_MODE=0 -GINITIAL_VALUE=0
VERILATOR_FLAGS_PARAM_PWM = -Wall --trace --cc --build -j --Mdir $(OBJDIR) -GCNT_WIDTH=8 -GPOLARITY=1 -GDIV_WIDTH=16 
VERILATOR_FLAGS_PARAM_DESERIALIZER = -Wall --trace --cc --build -j --Mdir $(OBJDIR) -GDATA_WIDTH=8 -GCLOCK_DIV=4 -GMSB_FIRST=1 -GUSE_SYNC_PATTERN=0 -GSYNC_PATTERN=8\'hA5
VERILATOR_FLAGS_BOOTH_MULTIPLIER = -Wall --trace --cc --build -j --Mdir $(OBJDIR) -GWIDTH=8
VERILATOR_FLAGS_CONFIG_PRNG = -Wall --trace --cc --build -j --Mdir $(OBJDIR) -GWIDTH=16 -GMODE=0
VERILATOR_FLAGS_CONFIG_PRNG_GALOIS = -Wall --trace --cc --build -j --Mdir $(OBJDIR) -GWIDTH=16 -GMODE=1
VERILATOR_FLAGS_RADIX4_BOOTH_MULTIPLIER = -Wall --trace --cc --build -j --Mdir $(OBJDIR) -GWIDTH=8
VERILATOR_FLAGS_NON_RESTORING_DIVIDER = -Wall --trace --cc --build -j --Mdir $(OBJDIR) -GWIDTH=8
VERILATOR_FLAGS_PARAM_SCRAMBLER = -Wall --trace --cc --build -j --Mdir $(OBJDIR) -GWIDTH=16 -GPOLYNOMIAL=16'h8016 -GSELF_SYNCHRONIZED=0
VERILATOR_FLAGS_MULTI_PHASE_PWM = -Wall -Wno-WIDTHTRUNC -Wno-EOFNEWLINE --trace --cc --build -j --Mdir $(OBJDIR) -GCHANNELS=3 -GCNT_WIDTH=8 -GPHASE_WIDTH=10 -GDEADTIME_WIDTH=6 -GPOLARITY=1
VERILATOR_FLAGS_SINE_COSINE_GENERATOR = -Wall -Wno-EOFNEWLINE -Wno-UNUSEDSIGNAL -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -I./libraries/cordic --trace --cc --build -j --Mdir $(OBJDIR) -GDATA_WIDTH=16 -GPHASE_WIDTH=16 -GITERATIONS=10 -GPIPELINE=1
VERILATOR_FLAGS_PARAM_CAM = -Wall --trace --cc --build -j --Mdir $(OBJDIR) -GDATA_WIDTH=8 -GADDR_WIDTH=4 -GNUM_ENTRIES=16 -GPRIORITY_ENCODER=1
VERILATOR_FLAGS_PARAM_DDS = -Wall -Wno-UNUSEDSIGNAL -Wno-REDEFMACRO -Wno-DECLFILENAME --trace --cc --build -j --Mdir $(OBJDIR) -GPHASE_WIDTH=16 -GOUTPUT_WIDTH=12 -GLUT_ADDR_WIDTH=8 -GUSE_QUARTER_SINE=1
VERILATOR_FLAGS_PARAM_I2C_MASTER = -Wall -Wno-UNUSEDSIGNAL -Wno-EOFNEWLINE --trace --cc --build -j --Mdir $(OBJDIR) -GCLK_FREQ=50000000 -GI2C_FREQ=100000
VERILATOR_FLAGS_AHB_LITE_MASTER = -Wall -Wno-BLKSEQ --trace --cc --build -j --Mdir $(OBJDIR) -GADDR_WIDTH=32 -GDATA_WIDTH=32 -GBURST_SIZE=4 -GRESET_ACTIVE_LOW=1
VERILATOR_FLAGS_PARAM_ROTATION_SIPO = -Wall -Wno-EOFNEWLINE --trace --cc --build -j --Mdir $(OBJDIR) -GWIDTH=8 -GROTATION=2 -GMSB_FIRST=1
VERILATOR_FLAGS_DIGITAL_THERMOMETER = -Wall -Wno-EOFNEWLINE -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC -Wno-UNUSEDPARAM -Wno-UNUSEDSIGNAL --trace --cc --build -j --Mdir $(OBJDIR) -GCLK_FREQ_HZ=1000000 -GUPDATE_RATE_HZ=2 -GADC_WIDTH=10 -GTEMP_WIDTH=8 -GFILTER_DEPTH=4 -GUNITS_CELSIUS=1 -GALERT_THRESHOLD=40

# Library directories and module categories
LIB_DIR = libraries
ADDERS_DIR = $(LIB_DIR)/adders
ARBITERS_DIR = $(LIB_DIR)/arbiters
ALU_DIR = $(LIB_DIR)/alu
COMMS_DIR = $(LIB_DIR)/comms
CODINGS_DIR = $(LIB_DIR)/codings
CORDIC_DIR = $(LIB_DIR)/cordic
COUNTERS_DIR = $(LIB_DIR)/counters
DIVIDERS_DIR = $(LIB_DIR)/dividers
DSP_DIR = $(LIB_DIR)/dsp
FIFO_DIR = $(LIB_DIR)/fifo
FILTERS_DIR = $(LIB_DIR)/filters
FSM_DIR = $(LIB_DIR)/fsm
MEMS_DIR = $(LIB_DIR)/mems
MULTIPLIERS_DIR = $(LIB_DIR)/multipliers
NOC_DIR = $(LIB_DIR)/noc
REGISTERS_DIR = $(LIB_DIR)/registers
SIGNALS_DIR = $(LIB_DIR)/signals
VOTERS_DIR = $(LIB_DIR)/voters

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
PRIORITY_QUEUE_TARGET = parameterized_priority_queue
CIRCULAR_BUFFER_FIFO_TARGET = circular_buffer_fifo
CREDIT_FIFO_TARGET = credit_based_fifo
SKID_BUFFER_TARGET = skid_buffer
ELASTIC_BUFFER_TARGET = elastic_buffer
ASYNC_FIFO_TARGET = async_fifo
FWFT_FIFO_TARGET = fwft_fifo
SHOWAHEAD_FIFO_TARGET = showahead_fifo
SYNC_FIFO_TARGET = sync_fifo
MEMORY_MAPPED_FIFO_TARGET = memory_mapped_fifo
PIPELINED_FIFO_TARGET = pipelined_fifo
BARREL_SHIFTER_FIFO_TARGET = barrel_shifter_fifo

# Register modules
SHIFT_REG_RIGHT_TARGET = shift_register_right
SHIFT_REG_LEFT_TARGET = shift_register_left
SHIFT_REG_TARGET = shift_register
SIPO_TARGET = sipo_register
PISO_TARGET = piso_register
BARREL_ROTATOR_TARGET = barrel_rotator
PARAM_BARREL_ROTATOR_TARGET = parameterized_barrel_rotator
UNIVERSAL_SHIFT_REG_TARGET = universal_shift_register
BIDIRECTIONAL_SHIFT_REG_TARGET = bidirectional_shift_register
JOHNSON_COUNTER_REG_TARGET = johnson_counter
LOADABLE_UPDOWN_COUNTER_TARGET = loadable_updown_counter
REGISTER_FILE_TARGET = register_file
SCAN_REGISTER_TARGET = scan_register
SHADOW_REGISTER_TARGET = shadow_register
SISO_TARGET = siso_register
DUAL_EDGE_REGISTER_TARGET = dual_edge_register
TOGGLE_REGISTER_TARGET = toggle_register
ONEHOT_DECODER_REGISTER_TARGET = onehot_decoder_register
SYNC_PRESET_REGISTER_TARGET = sync_preset_register
PARAM_ROTATION_SIPO_TARGET = parameterized_rotation_sipo

# ALU and arithmetic modules
ALU_TARGET = alu
BARREL_SHIFTER_TARGET = barrel_shifter
MULT_TARGET = configurable_mult
CONFIG_FP_ADDER_TARGET = configurable_fp_adder
CONFIG_COMPARATOR_TARGET = configurable_comparator

# Counter and sequence modules
GRAY_COUNTER_TARGET = gray_counter
LFSR_TARGET = lfsr
CONFIG_LFSR_TARGET = configurable_lfsr
PWM_TARGET = pwm_generator
CLOCK_DIV_TARGET = clock_divider
PARAM_FREQ_DIV_TARGET = parameterized_freq_divider
PARAM_JOHNSON_COUNTER_TARGET = parameterized_johnson_counter
MULTI_FLOP_SYNCHRONIZER_TARGET = multi_flop_synchronizer
PARAMETERIZED_GRAY_COUNTER_TARGET = parameterized_gray_counter

# Arbiter modules
ARBITER_TARGET = arbiter
ARBITER_RR_TARGET = arbiter_rr
FAIR_ARBITER_TARGET = fair_priority_arbiter
MATRIX_ARBITER_TARGET = matrix_arbiter

# Coding and decoding modules
BINARY_TO_GRAY_TARGET = binary_to_gray
GRAY_TO_BINARY_TARGET = gray_to_binary
HAMMING_CODE_TARGET = hamming_code
PRIORITY_ENC_TARGET = priority_encoder
CONFIG_PRIORITY_ENC_TARGET = configurable_priority_encoder
LZC_TARGET = leading_zero_counter
CONFIG_CLZ_CLO_TARGET = configurable_clz_clo
MESH_ROUTER_TARGET = configurable_mesh_router
PARAM_CRC_GEN_TARGET = parameterized_crc_generator
PARAM_SCRAMBLER_TARGET = parameterized_scrambler

# Network-on-Chip modules
CROSSBAR_TARGET = crossbar_switch

# Memory modules
DUAL_PORT_RAM_TARGET = dual_port_ram
PARAM_CAM_TARGET = parameterized_cam

# Filter modules
FIR_FILTER_TARGET = fir_filter
CONFIG_FIR_FILTER_TARGET = configurable_fir_filter

# FSM modules
SEQ_DETECTOR_TARGET = sequence_detector_fsm

# Communication modules
PARAM_SERDES_TARGET = parameterized_serdes
PARAM_UART_TX_TARGET = parameterized_uart_tx
PARAM_UART_RX_TARGET = parameterized_uart_rx
SIMPLE_SPI_MASTER_TARGET = simple_spi_master
SPI_MASTER_TARGET = spi_master
FIXED_SPI_MASTER_TARGET = fixed_spi_master
BASIC_SPI_MASTER_TARGET = basic_spi_master
PARAM_SPI_MASTER_TARGET = parameterized_spi_master
PARAM_I2C_MASTER_TARGET = parameterized_i2c_master
AHB_LITE_MASTER_TARGET = ahb_lite_master

# Voter modules
MAJORITY_VOTER_TARGET = majority_voter

# CORDIC module
CORDIC_TARGET = cordic
SINE_COSINE_GENERATOR_TARGET = sine_cosine_generator

# Signal modules
PWM_TARGET = pwm_generator
PULSE_WIDTH_DETECTOR_TARGET = pulse_width_detector
PARAM_CLOCK_GATING_TARGET = parameterized_clock_gating
PARAM_PWM_TARGET = parameterized_pwm
CONFIG_PRNG_TARGET = configurable_prng
MULTI_PHASE_PWM_TARGET = multi_phase_pwm_controller
DIGITAL_THERMOMETER_TARGET = digital_thermometer_controller

# DSP modules
PARAM_FFT_TARGET = parameterized_fft
PARAM_DDS_TARGET = parameterized_dds

# Multiplier modules
RADIX4_BOOTH_MULT_TARGET = radix4_booth_multiplier

# Divider modules
NON_RESTORING_DIVIDER_TARGET = non_restoring_divider

# Module categories for convenient building
ADDERS_MODULES = run_configurable_carry_lookahead_adder run_configurable_kogge_stone_adder run_configurable_brent_kung_adder run_configurable_conditional_sum_adder run_configurable_carry_skip_adder run_configurable_carry_select_adder
FIFO_MODULES = run_fifo run_configurable_sync_fifo run_configurable_param_fifo run_dual_clock_fifo run_parameterized_priority_queue run_circular_buffer_fifo run_credit_based_fifo run_skid_buffer run_elastic_buffer run_async_fifo run_fwft_fifo run_showahead_fifo run_sync_fifo run_memory_mapped_fifo run_pipelined_fifo run_barrel_shifter_fifo run_clock_domain_crossing_fifo run_multi_ported_fifo run_smart_fifo run_cache_fifo
SHIFTER_MODULES = run_shift_register_right run_shift_register_left run_sipo_register run_piso_register run_siso_register
REGISTER_MODULES = $(SHIFTER_MODULES) run_barrel_rotator run_parameterized_barrel_rotator run_barrel_shifter run_lfsr run_configurable_lfsr run_universal_shift_register run_bidirectional_shift_register run_johnson_counter run_loadable_updown_counter run_register_file run_scan_register run_shadow_register run_dual_edge_register run_toggle_register run_onehot_decoder_register run_sync_preset_register run_parameterized_rotation_sipo
ALU_MODULES = run_alu run_configurable_mult run_configurable_fp_adder run_configurable_comparator run_configurable_signed_comparator run_booth_multiplier run_radix4_booth_multiplier
CORDIC_MODULES = run_cordic run_sine_cosine_generator
COUNTERS = run_gray_counter run_configurable_clz_clo run_parameterized_johnson_counter run_multi_flop_synchronizer run_parameterized_gray_counter
DIVIDERS = run_clock_divider run_parameterized_freq_divider run_non_restoring_divider
ARBITERS = run_arbiter run_arbiter_rr run_fair_priority_arbiter run_matrix_arbiter
CODINGS = run_binary_to_gray run_gray_to_binary run_hamming_code run_priority_encoder run_configurable_priority_encoder run_leading_zero_counter run_parameterized_crc_generator run_parameterized_scrambler
NOC_MODULES = run_configurable_mesh_router run_crossbar_switch
DSP_MODULES = run_parameterized_fft run_parameterized_dds
MEMS = run_dual_port_ram run_parameterized_cam
FILTERS = run_fir_filter run_configurable_fir_filter
FSM_MODULES = run_sequence_detector_fsm
COMMS = run_parameterized_serdes run_parameterized_uart_tx run_parameterized_uart_rx run_simple_spi_master run_spi_master run_fixed_spi_master run_basic_spi_master run_parameterized_spi_master run_parameterized_deserializer run_parameterized_i2c_master run_ahb_lite_master
SIGNALS = run_pwm_generator run_pulse_width_detector run_parameterized_clock_gating run_parameterized_pwm run_configurable_prng run_multi_phase_pwm_controller run_digital_thermometer_controller
VOTERS_MODULES = run_majority_voter

# All modules combined
ALL_MODULES = $(ADDERS_MODULES) $(FIFO_MODULES) $(REGISTER_MODULES) $(ALU_MODULES) $(CORDIC_MODULES) $(COUNTERS) $(DIVIDERS) $(ARBITERS) $(CODINGS) $(NOC_MODULES) $(DSP_MODULES) $(MEMS) $(FILTERS) $(FSM_MODULES) $(COMMS) $(SIGNALS) $(VOTERS_MODULES)

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
$(foreach module,run_parameterized_priority_queue,$(eval $(call build_module_rule,$(module),PRIORITY_QUEUE,FIFO_DIR)))
$(foreach module,run_credit_based_fifo,$(eval $(call build_module_rule,$(module),CREDIT_FIFO,FIFO_DIR)))

$(foreach module,run_shift_register_right,$(eval $(call build_module_rule,$(module),SHIFT_REG_RIGHT,REGISTERS_DIR)))
$(foreach module,run_shift_register_left,$(eval $(call build_module_rule,$(module),SHIFT_REG_LEFT,REGISTERS_DIR)))
$(foreach module,run_shift_register,$(eval $(call build_module_rule,$(module),SHIFT_REG,REGISTERS_DIR)))
$(foreach module,run_sipo_register,$(eval $(call build_module_rule,$(module),SIPO,REGISTERS_DIR)))
$(foreach module,run_piso_register,$(eval $(call build_module_rule,$(module),PISO,REGISTERS_DIR)))

$(foreach module,run_alu,$(eval $(call build_module_rule,$(module),ALU,ALU_DIR)))
$(foreach module,run_barrel_shifter,$(eval $(call build_module_rule,$(module),BARREL_SHIFTER,REGISTERS_DIR)))
$(foreach module,run_configurable_comparator,$(eval $(call build_module_rule,$(module),CONFIG_COMPARATOR,ALU_DIR)))

$(foreach module,run_barrel_rotator,$(eval $(call build_module_rule,$(module),BARREL_ROTATOR,REGISTERS_DIR)))
$(foreach module,run_parameterized_barrel_rotator,$(eval $(call build_module_rule,$(module),PARAM_BARREL_ROTATOR,REGISTERS_DIR)))
$(foreach module,run_configurable_mult,$(eval $(call build_module_rule,$(module),MULT,MULTIPLIERS_DIR)))

# Special rule for FP adder that uses different flags
build_run_configurable_fp_adder: $(ADDERS_DIR)/$(CONFIG_FP_ADDER_TARGET).v $(ADDERS_DIR)/tb_$(CONFIG_FP_ADDER_TARGET).cpp
	$(VERILATOR) $(VERILATOR_FLAGS_FP_ADDER) $(VERILATOR_CPP_FLAGS) $(ADDERS_DIR)/$(CONFIG_FP_ADDER_TARGET).v $(ADDERS_DIR)/tb_$(CONFIG_FP_ADDER_TARGET).cpp

run_configurable_fp_adder: build_run_configurable_fp_adder
	./$(OBJDIR)/V$(CONFIG_FP_ADDER_TARGET)

# Special rule for signed comparator with 16-bit width 
build_run_configurable_signed_comparator: $(ALU_DIR)/$(CONFIG_COMPARATOR_TARGET).v $(ALU_DIR)/tb_$(CONFIG_COMPARATOR_TARGET)_signed.cpp
	$(VERILATOR) $(VERILATOR_FLAGS_SIGNED_COMPARATOR) $(VERILATOR_CPP_FLAGS) $(ALU_DIR)/$(CONFIG_COMPARATOR_TARGET).v $(ALU_DIR)/tb_$(CONFIG_COMPARATOR_TARGET)_signed.cpp -o V$(CONFIG_COMPARATOR_TARGET)_signed

run_configurable_signed_comparator: build_run_configurable_signed_comparator
	./$(OBJDIR)/V$(CONFIG_COMPARATOR_TARGET)_signed

# Special rule for UART RX with test-specific parameters
build_run_parameterized_uart_rx: $(COMMS_DIR)/$(PARAM_UART_RX_TARGET).v $(COMMS_DIR)/tb_$(PARAM_UART_RX_TARGET).cpp
	$(VERILATOR) $(VERILATOR_FLAGS_UART_RX) $(VERILATOR_CPP_FLAGS) $(COMMS_DIR)/$(PARAM_UART_RX_TARGET).v $(COMMS_DIR)/tb_$(PARAM_UART_RX_TARGET).cpp

run_parameterized_uart_rx: build_run_parameterized_uart_rx
	./$(OBJDIR)/V$(PARAM_UART_RX_TARGET)

# Special rule for SPI master with test-specific parameters
build_run_parameterized_spi_master: $(COMMS_DIR)/$(PARAM_SPI_MASTER_TARGET).v $(COMMS_DIR)/tb_$(PARAM_SPI_MASTER_TARGET).cpp
	$(VERILATOR) $(VERILATOR_FLAGS_SPI_MASTER) $(VERILATOR_CPP_FLAGS) $(COMMS_DIR)/$(PARAM_SPI_MASTER_TARGET).v $(COMMS_DIR)/tb_$(PARAM_SPI_MASTER_TARGET).cpp

run_parameterized_spi_master: build_run_parameterized_spi_master
	./$(OBJDIR)/V$(PARAM_SPI_MASTER_TARGET)

$(foreach module,run_gray_counter,$(eval $(call build_module_rule,$(module),GRAY_COUNTER,COUNTERS_DIR)))
$(foreach module,run_lfsr,$(eval $(call build_module_rule,$(module),LFSR,REGISTERS_DIR)))
$(foreach module,run_configurable_lfsr,$(eval $(call build_module_rule,$(module),CONFIG_LFSR,REGISTERS_DIR)))
$(foreach module,run_pwm_generator,$(eval $(call build_module_rule,$(module),PWM,SIGNALS_DIR)))
$(foreach module,run_pulse_width_detector,$(eval $(call build_module_rule,$(module),PULSE_WIDTH_DETECTOR,SIGNALS_DIR)))
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
$(foreach module,run_configurable_mesh_router,$(eval $(call build_module_rule,$(module),MESH_ROUTER,NOC_DIR)))
$(foreach module,run_parameterized_crc_generator,$(eval $(call build_module_rule,$(module),PARAM_CRC_GEN,CODINGS_DIR)))
$(foreach module,run_parameterized_scrambler,$(eval $(call build_module_rule,$(module),PARAM_SCRAMBLER,CODINGS_DIR)))

$(foreach module,run_dual_port_ram,$(eval $(call build_module_rule,$(module),DUAL_PORT_RAM,MEMS_DIR)))

$(foreach module,run_fir_filter,$(eval $(call build_module_rule,$(module),FIR_FILTER,FILTERS_DIR)))
$(foreach module,run_configurable_fir_filter,$(eval $(call build_module_rule,$(module),CONFIG_FIR_FILTER,FILTERS_DIR)))

$(foreach module,run_sequence_detector_fsm,$(eval $(call build_module_rule,$(module),SEQ_DETECTOR,FSM_DIR)))

$(foreach module,run_crossbar_switch,$(eval $(call build_module_rule,$(module),CROSSBAR,NOC_DIR)))
$(foreach module,run_parameterized_serdes,$(eval $(call build_module_rule,$(module),PARAM_SERDES,COMMS_DIR)))
$(foreach module,run_parameterized_uart_tx,$(eval $(call build_module_rule,$(module),PARAM_UART_TX,COMMS_DIR)))

# Add rule for the majority voter
$(foreach module,run_majority_voter,$(eval $(call build_module_rule,$(module),MAJORITY_VOTER,VOTERS_DIR)))

# Add CORDIC module
$(foreach module,run_cordic,$(eval $(call build_module_rule,$(module),CORDIC,CORDIC_DIR)))

# Add rule for the sine_cosine_generator module
build_run_sine_cosine_generator: $(CORDIC_DIR)/$(SINE_COSINE_GENERATOR_TARGET).v $(CORDIC_DIR)/cordic_core.v $(CORDIC_DIR)/tb_$(SINE_COSINE_GENERATOR_TARGET).cpp
	$(VERILATOR) $(VERILATOR_FLAGS_SINE_COSINE_GENERATOR) $(VERILATOR_CPP_FLAGS) $(CORDIC_DIR)/$(SINE_COSINE_GENERATOR_TARGET).v $(CORDIC_DIR)/cordic_core.v $(CORDIC_DIR)/tb_$(SINE_COSINE_GENERATOR_TARGET).cpp

run_sine_cosine_generator: build_run_sine_cosine_generator
	./$(OBJDIR)/V$(SINE_COSINE_GENERATOR_TARGET)

# Special rule for SPI master
build_run_simple_spi_master: $(COMMS_DIR)/$(SIMPLE_SPI_MASTER_TARGET).v $(COMMS_DIR)/tb_$(SIMPLE_SPI_MASTER_TARGET).cpp
	$(VERILATOR) $(VERILATOR_FLAGS_SPI_MASTER) $(VERILATOR_CPP_FLAGS) $(COMMS_DIR)/$(SIMPLE_SPI_MASTER_TARGET).v $(COMMS_DIR)/tb_$(SIMPLE_SPI_MASTER_TARGET).cpp

run_simple_spi_master: build_run_simple_spi_master
	./$(OBJDIR)/V$(SIMPLE_SPI_MASTER_TARGET)

# Special rule for improved SPI master
build_run_spi_master: $(COMMS_DIR)/$(SPI_MASTER_TARGET).v $(COMMS_DIR)/tb_$(SPI_MASTER_TARGET).cpp
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_CPP_FLAGS) $(COMMS_DIR)/$(SPI_MASTER_TARGET).v $(COMMS_DIR)/tb_$(SPI_MASTER_TARGET).cpp

run_spi_master: build_run_spi_master
	./$(OBJDIR)/V$(SPI_MASTER_TARGET)

# Special rule for fixed SPI master that works correctly
build_run_fixed_spi_master: $(COMMS_DIR)/$(FIXED_SPI_MASTER_TARGET).v $(COMMS_DIR)/tb_$(FIXED_SPI_MASTER_TARGET).cpp
	$(VERILATOR) -Wall -Wno-UNUSEDSIGNAL --trace --cc --build -j --Mdir $(OBJDIR) $(VERILATOR_CPP_FLAGS) $(COMMS_DIR)/$(FIXED_SPI_MASTER_TARGET).v $(COMMS_DIR)/tb_$(FIXED_SPI_MASTER_TARGET).cpp

run_fixed_spi_master: build_run_fixed_spi_master
	./$(OBJDIR)/V$(FIXED_SPI_MASTER_TARGET)

# Add rule for the parameterized FFT
build_run_parameterized_fft: $(DSP_DIR)/$(PARAM_FFT_TARGET).v $(DSP_DIR)/tb_$(PARAM_FFT_TARGET).cpp
	$(VERILATOR) $(VERILATOR_FLAGS_PARAM_FFT) $(VERILATOR_CPP_FLAGS) $(DSP_DIR)/$(PARAM_FFT_TARGET).v $(DSP_DIR)/tb_$(PARAM_FFT_TARGET).cpp

run_parameterized_fft: build_run_parameterized_fft
	./$(OBJDIR)/V$(PARAM_FFT_TARGET)

# Special rule for basic SPI master (final working version)
build_run_basic_spi_master: $(COMMS_DIR)/$(BASIC_SPI_MASTER_TARGET).v $(COMMS_DIR)/tb_$(BASIC_SPI_MASTER_TARGET).cpp
	$(VERILATOR) -Wall -Wno-UNUSEDSIGNAL --trace --cc --build -j --Mdir $(OBJDIR) $(VERILATOR_CPP_FLAGS) $(COMMS_DIR)/$(BASIC_SPI_MASTER_TARGET).v $(COMMS_DIR)/tb_$(BASIC_SPI_MASTER_TARGET).cpp

run_basic_spi_master: build_run_basic_spi_master
	./$(OBJDIR)/V$(BASIC_SPI_MASTER_TARGET)

# Special rule for Johnson counter with width parameter
build_run_parameterized_johnson_counter: $(COUNTERS_DIR)/$(PARAM_JOHNSON_COUNTER_TARGET).v $(COUNTERS_DIR)/tb_$(PARAM_JOHNSON_COUNTER_TARGET).cpp
	$(VERILATOR) $(VERILATOR_FLAGS_JOHNSON_COUNTER) $(VERILATOR_CPP_FLAGS) $(COUNTERS_DIR)/$(PARAM_JOHNSON_COUNTER_TARGET).v $(COUNTERS_DIR)/tb_$(PARAM_JOHNSON_COUNTER_TARGET).cpp

run_parameterized_johnson_counter: build_run_parameterized_johnson_counter
	./$(OBJDIR)/V$(PARAM_JOHNSON_COUNTER_TARGET)

# Group targets for specific categories
adders: $(ADDERS_MODULES)
fifos: $(FIFO_MODULES)
registers: $(REGISTER_MODULES)
alu: $(ALU_MODULES)
cordic: $(CORDIC_MODULES)
counters: $(COUNTERS)
dividers: $(DIVIDERS)
arbiters: $(ARBITERS)
codings: $(CODINGS)
noc: $(NOC_MODULES)
dsp: $(DSP_MODULES)
mems: $(MEMS)
filters: $(FILTERS) run_config_fir_low_pass run_config_fir_high_pass
fsm: $(FSM_MODULES)
comms: $(COMMS)
signals: $(SIGNALS)
voters: $(VOTERS_MODULES)

# Clean all build products
clean:
	rm -rf $(OBJDIR)
	rm -f *.vcd

# PHONY targets to prevent conflicts with file names
.PHONY: all clean $(ALL_MODULES) run_configurable_signed_comparator run_parameterized_cam \
	adders fifos registers alu cordic counters dividers arbiters codings noc dsp mems filters fsm comms signals voters \
	build_config_fir_low_pass run_config_fir_low_pass build_config_fir_high_pass run_config_fir_high_pass \
	run_async_fifo run_fwft_fifo run_showahead_fifo run_sync_fifo run_memory_mapped_fifo run_pipelined_fifo run_barrel_shifter_fifo run_clock_domain_crossing_fifo run_multi_ported_fifo run_smart_fifo run_cache_fifo \
	run_ahb_lite_master build_run_ahb_lite_master run_parameterized_rotation_sipo run_digital_thermometer_controller

# Add rule for the parameterized clock gating module
build_run_parameterized_clock_gating: $(SIGNALS_DIR)/$(PARAM_CLOCK_GATING_TARGET).v $(SIGNALS_DIR)/tb_$(PARAM_CLOCK_GATING_TARGET).cpp
	$(VERILATOR) $(VERILATOR_FLAGS_PARAM_CLOCK_GATING) $(VERILATOR_CPP_FLAGS) $(SIGNALS_DIR)/$(PARAM_CLOCK_GATING_TARGET).v $(SIGNALS_DIR)/tb_$(PARAM_CLOCK_GATING_TARGET).cpp

run_parameterized_clock_gating: build_run_parameterized_clock_gating
	./$(OBJDIR)/V$(PARAM_CLOCK_GATING_TARGET)

# Add rule for the circular buffer FIFO
build_run_circular_buffer_fifo: $(FIFO_DIR)/$(CIRCULAR_BUFFER_FIFO_TARGET).v $(FIFO_DIR)/tb_$(CIRCULAR_BUFFER_FIFO_TARGET).cpp
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_CPP_FLAGS) $(FIFO_DIR)/$(CIRCULAR_BUFFER_FIFO_TARGET).v $(FIFO_DIR)/tb_$(CIRCULAR_BUFFER_FIFO_TARGET).cpp

run_circular_buffer_fifo: build_run_circular_buffer_fifo
	./$(OBJDIR)/V$(CIRCULAR_BUFFER_FIFO_TARGET)

# Add rule for the skid buffer
build_run_skid_buffer: $(FIFO_DIR)/$(SKID_BUFFER_TARGET).v $(FIFO_DIR)/tb_$(SKID_BUFFER_TARGET).cpp
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_CPP_FLAGS) $(FIFO_DIR)/$(SKID_BUFFER_TARGET).v $(FIFO_DIR)/tb_$(SKID_BUFFER_TARGET).cpp

run_skid_buffer: build_run_skid_buffer
	./$(OBJDIR)/V$(SKID_BUFFER_TARGET)

# Add rule for the elastic buffer
build_run_elastic_buffer: $(FIFO_DIR)/$(ELASTIC_BUFFER_TARGET).v $(FIFO_DIR)/tb_$(ELASTIC_BUFFER_TARGET).cpp
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_CPP_FLAGS) $(FIFO_DIR)/$(ELASTIC_BUFFER_TARGET).v $(FIFO_DIR)/tb_$(ELASTIC_BUFFER_TARGET).cpp

run_elastic_buffer: build_run_elastic_buffer
	./$(OBJDIR)/V$(ELASTIC_BUFFER_TARGET)

# Add rule for the async FIFO
build_run_async_fifo: $(FIFO_DIR)/$(ASYNC_FIFO_TARGET).v $(FIFO_DIR)/tb_$(ASYNC_FIFO_TARGET).cpp
	$(VERILATOR) -Wall -Wno-EOFNEWLINE -Wno-UNUSEDSIGNAL -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-UNUSEDPARAM --trace --cc --build -j --Mdir $(OBJDIR) $(VERILATOR_CPP_FLAGS) $(FIFO_DIR)/$(ASYNC_FIFO_TARGET).v $(FIFO_DIR)/tb_$(ASYNC_FIFO_TARGET).cpp

run_async_fifo: build_run_async_fifo
	./$(OBJDIR)/V$(ASYNC_FIFO_TARGET)

# Add rule for the FWFT FIFO
build_run_fwft_fifo: $(FIFO_DIR)/$(FWFT_FIFO_TARGET).v $(FIFO_DIR)/tb_$(FWFT_FIFO_TARGET).cpp
	$(VERILATOR) -Wall -Wno-EOFNEWLINE -Wno-UNUSEDSIGNAL -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-UNUSEDPARAM --trace --cc --build -j --Mdir $(OBJDIR) $(VERILATOR_CPP_FLAGS) $(FIFO_DIR)/$(FWFT_FIFO_TARGET).v $(FIFO_DIR)/tb_$(FWFT_FIFO_TARGET).cpp

run_fwft_fifo: build_run_fwft_fifo
	./$(OBJDIR)/V$(FWFT_FIFO_TARGET)

# Add rule for the Showahead FIFO
build_run_showahead_fifo: $(FIFO_DIR)/$(SHOWAHEAD_FIFO_TARGET).v $(FIFO_DIR)/tb_$(SHOWAHEAD_FIFO_TARGET).cpp
	$(VERILATOR) -Wall -Wno-EOFNEWLINE -Wno-UNUSEDSIGNAL -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-UNUSEDPARAM --trace --cc --build -j --Mdir $(OBJDIR) $(VERILATOR_CPP_FLAGS) $(FIFO_DIR)/$(SHOWAHEAD_FIFO_TARGET).v $(FIFO_DIR)/tb_$(SHOWAHEAD_FIFO_TARGET).cpp

run_showahead_fifo: build_run_showahead_fifo
	./$(OBJDIR)/V$(SHOWAHEAD_FIFO_TARGET)

# Add rule for the Synchronization FIFO
build_run_sync_fifo: $(FIFO_DIR)/$(SYNC_FIFO_TARGET).v $(FIFO_DIR)/tb_$(SYNC_FIFO_TARGET).cpp
	$(VERILATOR) -Wall -Wno-EOFNEWLINE -Wno-UNUSEDSIGNAL -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-UNUSEDPARAM --trace --cc --build -j --Mdir $(OBJDIR) $(VERILATOR_CPP_FLAGS) $(FIFO_DIR)/$(SYNC_FIFO_TARGET).v $(FIFO_DIR)/tb_$(SYNC_FIFO_TARGET).cpp

run_sync_fifo: build_run_sync_fifo
	./$(OBJDIR)/V$(SYNC_FIFO_TARGET)

# Add rule for the Memory-mapped FIFO
build_run_memory_mapped_fifo: $(FIFO_DIR)/$(MEMORY_MAPPED_FIFO_TARGET).v $(FIFO_DIR)/tb_$(MEMORY_MAPPED_FIFO_TARGET).cpp
	$(VERILATOR) -Wall -Wno-EOFNEWLINE -Wno-UNUSEDSIGNAL -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-UNUSEDPARAM --trace --cc --build -j --Mdir $(OBJDIR) $(VERILATOR_CPP_FLAGS) $(FIFO_DIR)/$(MEMORY_MAPPED_FIFO_TARGET).v $(FIFO_DIR)/tb_$(MEMORY_MAPPED_FIFO_TARGET).cpp

run_memory_mapped_fifo: build_run_memory_mapped_fifo
	./$(OBJDIR)/V$(MEMORY_MAPPED_FIFO_TARGET)

# Add rule for the Pipelined FIFO
build_run_pipelined_fifo: $(FIFO_DIR)/$(PIPELINED_FIFO_TARGET).v $(FIFO_DIR)/tb_$(PIPELINED_FIFO_TARGET).cpp
	$(VERILATOR) -Wall -Wno-EOFNEWLINE -Wno-UNUSEDSIGNAL -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-UNUSEDPARAM --trace --cc --build -j --Mdir $(OBJDIR) $(VERILATOR_CPP_FLAGS) $(FIFO_DIR)/$(PIPELINED_FIFO_TARGET).v $(FIFO_DIR)/tb_$(PIPELINED_FIFO_TARGET).cpp

run_pipelined_fifo: build_run_pipelined_fifo
	./$(OBJDIR)/V$(PIPELINED_FIFO_TARGET)

# Add rule for the Barrel Shifter FIFO
build_run_barrel_shifter_fifo: $(FIFO_DIR)/$(BARREL_SHIFTER_FIFO_TARGET).v $(FIFO_DIR)/tb_$(BARREL_SHIFTER_FIFO_TARGET).cpp
	$(VERILATOR) -Wall -Wno-EOFNEWLINE -Wno-UNUSEDSIGNAL -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-UNUSEDPARAM --trace --cc --build -j --Mdir $(OBJDIR) $(VERILATOR_CPP_FLAGS) $(FIFO_DIR)/$(BARREL_SHIFTER_FIFO_TARGET).v $(FIFO_DIR)/tb_$(BARREL_SHIFTER_FIFO_TARGET).cpp

run_barrel_shifter_fifo: build_run_barrel_shifter_fifo
	./$(OBJDIR)/V$(BARREL_SHIFTER_FIFO_TARGET)

# Add the multi_flop_synchronizer using the standard macro
$(foreach module,run_multi_flop_synchronizer,$(eval $(call build_module_rule,$(module),MULTI_FLOP_SYNCHRONIZER,COUNTERS_DIR)))

# Add build rules for new register modules
$(foreach module,run_siso_register,$(eval $(call build_module_rule,$(module),SISO,REGISTERS_DIR)))
$(foreach module,run_dual_edge_register,$(eval $(call build_module_rule,$(module),DUAL_EDGE_REGISTER,REGISTERS_DIR)))
$(foreach module,run_toggle_register,$(eval $(call build_module_rule,$(module),TOGGLE_REGISTER,REGISTERS_DIR)))
$(foreach module,run_onehot_decoder_register,$(eval $(call build_module_rule,$(module),ONEHOT_DECODER_REGISTER,REGISTERS_DIR)))

# Add rule for the Clock Domain Crossing FIFO
build_run_clock_domain_crossing_fifo: $(SIGNALS_DIR)/clock_domain_crossing_fifo.v $(SIGNALS_DIR)/tb_clock_domain_crossing_fifo.cpp
	$(VERILATOR) -Wall -Wno-EOFNEWLINE -Wno-UNUSEDSIGNAL -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-UNUSEDPARAM --trace --cc --build -j --Mdir $(OBJDIR) $(VERILATOR_CPP_FLAGS) $(SIGNALS_DIR)/clock_domain_crossing_fifo.v $(SIGNALS_DIR)/tb_clock_domain_crossing_fifo.cpp

run_clock_domain_crossing_fifo: build_run_clock_domain_crossing_fifo
	./$(OBJDIR)/Vclock_domain_crossing_fifo

# Add rule for the Multi-Ported FIFO
build_run_multi_ported_fifo: $(FIFO_DIR)/multi_ported_fifo.v $(FIFO_DIR)/tb_multi_ported_fifo.cpp
	$(VERILATOR) -Wall -Wno-EOFNEWLINE -Wno-UNUSEDSIGNAL -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-UNUSEDPARAM --trace --cc --build -j --Mdir $(OBJDIR) $(VERILATOR_CPP_FLAGS) $(FIFO_DIR)/multi_ported_fifo.v $(FIFO_DIR)/tb_multi_ported_fifo.cpp

run_multi_ported_fifo: build_run_multi_ported_fifo
	./$(OBJDIR)/Vmulti_ported_fifo

# Add rule for the Smart FIFO
build_run_smart_fifo: $(FIFO_DIR)/smart_fifo.v $(FIFO_DIR)/tb_smart_fifo.cpp
	$(VERILATOR) -Wall -Wno-EOFNEWLINE -Wno-UNUSEDSIGNAL -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-UNUSEDPARAM --trace --cc --build -j --Mdir $(OBJDIR) $(VERILATOR_CPP_FLAGS) $(FIFO_DIR)/smart_fifo.v $(FIFO_DIR)/tb_smart_fifo.cpp

run_smart_fifo: build_run_smart_fifo
	./$(OBJDIR)/Vsmart_fifo

# Add rule for the Cache FIFO
build_run_cache_fifo: $(FIFO_DIR)/cache_fifo.v $(FIFO_DIR)/tb_cache_fifo.cpp
	$(VERILATOR) -Wall -Wno-EOFNEWLINE -Wno-UNUSEDSIGNAL -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-UNUSEDPARAM --trace --cc --build -j --Mdir $(OBJDIR) $(VERILATOR_CPP_FLAGS) $(FIFO_DIR)/cache_fifo.v $(FIFO_DIR)/tb_cache_fifo.cpp

run_cache_fifo: build_run_cache_fifo
	./$(OBJDIR)/Vcache_fifo

# Add rule for the matrix arbiter
build_run_matrix_arbiter: $(ARBITERS_DIR)/$(MATRIX_ARBITER_TARGET).v $(ARBITERS_DIR)/tb_$(MATRIX_ARBITER_TARGET).cpp
	$(VERILATOR) $(VERILATOR_FLAGS_MATRIX_ARBITER) $(VERILATOR_CPP_FLAGS) $(ARBITERS_DIR)/$(MATRIX_ARBITER_TARGET).v $(ARBITERS_DIR)/tb_$(MATRIX_ARBITER_TARGET).cpp

run_matrix_arbiter: build_run_matrix_arbiter
	./$(OBJDIR)/V$(MATRIX_ARBITER_TARGET)

# Add rule for configurable PRNG
build_run_configurable_prng: $(SIGNALS_DIR)/$(CONFIG_PRNG_TARGET).v $(SIGNALS_DIR)/tb_$(CONFIG_PRNG_TARGET).cpp
	$(VERILATOR) $(VERILATOR_FLAGS_CONFIG_PRNG) $(VERILATOR_CPP_FLAGS) $(SIGNALS_DIR)/$(CONFIG_PRNG_TARGET).v $(SIGNALS_DIR)/tb_$(CONFIG_PRNG_TARGET).cpp

run_configurable_prng: build_run_configurable_prng
	./$(OBJDIR)/V$(CONFIG_PRNG_TARGET)

# Add rule for configurable PRNG in Galois mode
build_run_configurable_prng_galois: $(SIGNALS_DIR)/$(CONFIG_PRNG_TARGET).v $(SIGNALS_DIR)/tb_$(CONFIG_PRNG_TARGET).cpp
	$(VERILATOR) $(VERILATOR_FLAGS_CONFIG_PRNG_GALOIS) $(VERILATOR_CPP_FLAGS) $(SIGNALS_DIR)/$(CONFIG_PRNG_TARGET).v $(SIGNALS_DIR)/tb_$(CONFIG_PRNG_TARGET).cpp -o V$(CONFIG_PRNG_TARGET)_galois

run_configurable_prng_galois: build_run_configurable_prng_galois
	./$(OBJDIR)/V$(CONFIG_PRNG_TARGET)_galois

# Add rule for the non-restoring divider
build_run_non_restoring_divider: $(DIVIDERS_DIR)/$(NON_RESTORING_DIVIDER_TARGET).v $(DIVIDERS_DIR)/tb_$(NON_RESTORING_DIVIDER_TARGET).cpp
	$(VERILATOR) $(VERILATOR_FLAGS_NON_RESTORING_DIVIDER) $(VERILATOR_CPP_FLAGS) $(DIVIDERS_DIR)/$(NON_RESTORING_DIVIDER_TARGET).v $(DIVIDERS_DIR)/tb_$(NON_RESTORING_DIVIDER_TARGET).cpp

run_non_restoring_divider: build_run_non_restoring_divider
	./$(OBJDIR)/V$(NON_RESTORING_DIVIDER_TARGET)

# Add rule for Radix-4 Booth multiplier
build_run_radix4_booth_multiplier: $(MULTIPLIERS_DIR)/$(RADIX4_BOOTH_MULT_TARGET).v $(MULTIPLIERS_DIR)/tb_$(RADIX4_BOOTH_MULT_TARGET).cpp
	$(VERILATOR) $(VERILATOR_FLAGS_RADIX4_BOOTH_MULTIPLIER) $(VERILATOR_CPP_FLAGS) $(MULTIPLIERS_DIR)/$(RADIX4_BOOTH_MULT_TARGET).v $(MULTIPLIERS_DIR)/tb_$(RADIX4_BOOTH_MULT_TARGET).cpp

run_radix4_booth_multiplier: build_run_radix4_booth_multiplier
	./$(OBJDIR)/V$(RADIX4_BOOTH_MULT_TARGET)

# Add rule for the multi_phase_pwm_controller
build_run_multi_phase_pwm_controller: $(SIGNALS_DIR)/$(MULTI_PHASE_PWM_TARGET).v $(SIGNALS_DIR)/tb_$(MULTI_PHASE_PWM_TARGET).cpp
	$(VERILATOR) $(VERILATOR_FLAGS_MULTI_PHASE_PWM) $(VERILATOR_CPP_FLAGS) $(SIGNALS_DIR)/$(MULTI_PHASE_PWM_TARGET).v $(SIGNALS_DIR)/tb_$(MULTI_PHASE_PWM_TARGET).cpp

run_multi_phase_pwm_controller: build_run_multi_phase_pwm_controller
	./$(OBJDIR)/V$(MULTI_PHASE_PWM_TARGET)

# Add rule for the parameterized CAM
build_run_parameterized_cam: $(MEMS_DIR)/$(PARAM_CAM_TARGET).v $(MEMS_DIR)/tb_$(PARAM_CAM_TARGET).cpp
	$(VERILATOR) $(VERILATOR_FLAGS_PARAM_CAM) $(VERILATOR_CPP_FLAGS) $(MEMS_DIR)/$(PARAM_CAM_TARGET).v $(MEMS_DIR)/tb_$(PARAM_CAM_TARGET).cpp

run_parameterized_cam: build_run_parameterized_cam
	./$(OBJDIR)/V$(PARAM_CAM_TARGET)

# Add rule for the parameterized DDS
build_run_parameterized_dds: $(DSP_DIR)/$(PARAM_DDS_TARGET).v $(DSP_DIR)/tb_$(PARAM_DDS_TARGET).cpp
	$(VERILATOR) $(VERILATOR_FLAGS_PARAM_DDS) $(VERILATOR_CPP_FLAGS) $(DSP_DIR)/$(PARAM_DDS_TARGET).v $(DSP_DIR)/tb_$(PARAM_DDS_TARGET).cpp

run_parameterized_dds: build_run_parameterized_dds
	./$(OBJDIR)/V$(PARAM_DDS_TARGET)

# Add rule for the parameterized I2C master
build_run_parameterized_i2c_master: $(COMMS_DIR)/$(PARAM_I2C_MASTER_TARGET).v $(COMMS_DIR)/tb_$(PARAM_I2C_MASTER_TARGET).cpp
	$(VERILATOR) $(VERILATOR_FLAGS_PARAM_I2C_MASTER) $(VERILATOR_CPP_FLAGS) $(COMMS_DIR)/$(PARAM_I2C_MASTER_TARGET).v $(COMMS_DIR)/tb_$(PARAM_I2C_MASTER_TARGET).cpp

run_parameterized_i2c_master: build_run_parameterized_i2c_master
	./$(OBJDIR)/V$(PARAM_I2C_MASTER_TARGET)

# Add rule for the digital thermometer controller
build_run_digital_thermometer_controller: $(SIGNALS_DIR)/$(DIGITAL_THERMOMETER_TARGET).v $(SIGNALS_DIR)/tb_$(DIGITAL_THERMOMETER_TARGET).cpp
	$(VERILATOR) $(VERILATOR_FLAGS_DIGITAL_THERMOMETER) $(VERILATOR_CPP_FLAGS) $(SIGNALS_DIR)/$(DIGITAL_THERMOMETER_TARGET).v $(SIGNALS_DIR)/tb_$(DIGITAL_THERMOMETER_TARGET).cpp

run_digital_thermometer_controller: build_run_digital_thermometer_controller
	./$(OBJDIR)/V$(DIGITAL_THERMOMETER_TARGET)

# Add rule for parameterized rotation SIPO
build_run_parameterized_rotation_sipo: $(REGISTERS_DIR)/$(PARAM_ROTATION_SIPO_TARGET).v $(REGISTERS_DIR)/tb_$(PARAM_ROTATION_SIPO_TARGET).cpp
	$(VERILATOR) $(VERILATOR_FLAGS_PARAM_ROTATION_SIPO) $(VERILATOR_CPP_FLAGS) $(REGISTERS_DIR)/$(PARAM_ROTATION_SIPO_TARGET).v $(REGISTERS_DIR)/tb_$(PARAM_ROTATION_SIPO_TARGET).cpp

run_parameterized_rotation_sipo: build_run_parameterized_rotation_sipo
	./$(OBJDIR)/V$(PARAM_ROTATION_SIPO_TARGET)

# Add rule for AHB Lite master
build_run_ahb_lite_master: $(COMMS_DIR)/$(AHB_LITE_MASTER_TARGET).v $(COMMS_DIR)/tb_$(AHB_LITE_MASTER_TARGET).cpp
	$(VERILATOR) $(VERILATOR_FLAGS_AHB_LITE_MASTER) $(VERILATOR_CPP_FLAGS) $(COMMS_DIR)/$(AHB_LITE_MASTER_TARGET).v $(COMMS_DIR)/tb_$(AHB_LITE_MASTER_TARGET).cpp

run_ahb_lite_master: build_run_ahb_lite_master
	./$(OBJDIR)/V$(AHB_LITE_MASTER_TARGET)