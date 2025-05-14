VERILATOR = verilator
VERILATOR_FLAGS = -Wall --trace --cc --build -j
VERILATOR_CPP_FLAGS = --exe

FIFO_TARGET = fifo
FIFO_TB = tb_$(FIFO_TARGET)
FIFO_TOP_MODULE = $(FIFO_TARGET)

SHIFT_REG_RIGHT_TARGET = shift_register_right
SHIFT_REG_LEFT_TARGET = shift_register_left
SHIFT_REG_RIGHT_TB = tb_$(SHIFT_REG_RIGHT_TARGET)
SHIFT_REG_LEFT_TB = tb_$(SHIFT_REG_LEFT_TARGET)

ALU_TARGET = alu
ALU_TB = tb_$(ALU_TARGET)
ALU_TOP_MODULE = $(ALU_TARGET)

PRIORITY_ENC_TARGET = priority_encoder
PRIORITY_ENC_TB = tb_$(PRIORITY_ENC_TARGET)
PRIORITY_ENC_TOP_MODULE = $(PRIORITY_ENC_TARGET)

BARREL_SHIFTER_TARGET = barrel_shifter
BARREL_SHIFTER_TB = tb_$(BARREL_SHIFTER_TARGET)
BARREL_SHIFTER_TOP_MODULE = $(BARREL_SHIFTER_TARGET)

GRAY_COUNTER_TARGET = gray_counter
GRAY_COUNTER_TB = tb_$(GRAY_COUNTER_TARGET)
GRAY_COUNTER_TOP_MODULE = $(GRAY_COUNTER_TARGET)

LFSR_TARGET = lfsr
LFSR_TB = tb_$(LFSR_TARGET)
LFSR_TOP_MODULE = $(LFSR_TARGET)

all: run_fifo run_shift_reg_right run_shift_reg_left run_alu run_priority_enc run_barrel_shifter run_gray_counter run_lfsr

build_fifo: $(FIFO_TB).cpp $(FIFO_TARGET).v
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_CPP_FLAGS) $(FIFO_TARGET).v $(FIFO_TB).cpp

run_fifo: build_fifo
	./obj_dir/V$(FIFO_TOP_MODULE)

# Compile and build the right shift register with its testbench
build_shift_reg_right: $(SHIFT_REG_RIGHT_TARGET).v $(SHIFT_REG_RIGHT_TB).cpp
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_CPP_FLAGS) $(SHIFT_REG_RIGHT_TARGET).v $(SHIFT_REG_RIGHT_TB).cpp

# Run the right shift register testbench
run_shift_reg_right: build_shift_reg_right
	./obj_dir/V$(SHIFT_REG_RIGHT_TARGET)

# Compile and build the left shift register with its testbench
build_shift_reg_left: $(SHIFT_REG_LEFT_TARGET).v $(SHIFT_REG_LEFT_TB).cpp
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_CPP_FLAGS) $(SHIFT_REG_LEFT_TARGET).v $(SHIFT_REG_LEFT_TB).cpp

# Run the left shift register testbench
run_shift_reg_left: build_shift_reg_left
	./obj_dir/V$(SHIFT_REG_LEFT_TARGET)

# Compile and build the ALU with its testbench
build_alu: $(ALU_TARGET).v $(ALU_TB).cpp
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_CPP_FLAGS) $(ALU_TARGET).v $(ALU_TB).cpp

# Run the ALU testbench
run_alu: build_alu
	./obj_dir/V$(ALU_TOP_MODULE)

# Compile and build the priority encoder with its testbench
build_priority_enc: $(PRIORITY_ENC_TARGET).v $(PRIORITY_ENC_TB).cpp
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_CPP_FLAGS) $(PRIORITY_ENC_TARGET).v $(PRIORITY_ENC_TB).cpp

# Run the priority encoder testbench
run_priority_enc: build_priority_enc
	./obj_dir/V$(PRIORITY_ENC_TOP_MODULE)

# Compile and build the barrel shifter with its testbench
build_barrel_shifter: $(BARREL_SHIFTER_TARGET).v $(BARREL_SHIFTER_TB).cpp
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_CPP_FLAGS) $(BARREL_SHIFTER_TARGET).v $(BARREL_SHIFTER_TB).cpp

# Run the barrel shifter testbench
run_barrel_shifter: build_barrel_shifter
	./obj_dir/V$(BARREL_SHIFTER_TOP_MODULE)

# Compile and build the gray counter with its testbench
build_gray_counter: $(GRAY_COUNTER_TARGET).v $(GRAY_COUNTER_TB).cpp
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_CPP_FLAGS) $(GRAY_COUNTER_TARGET).v $(GRAY_COUNTER_TB).cpp

# Run the gray counter testbench
run_gray_counter: build_gray_counter
	./obj_dir/V$(GRAY_COUNTER_TOP_MODULE)

# Compile and build the LFSR with its testbench
build_lfsr: $(LFSR_TARGET).v $(LFSR_TB).cpp
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_CPP_FLAGS) $(LFSR_TARGET).v $(LFSR_TB).cpp

# Run the LFSR testbench
run_lfsr: build_lfsr
	./obj_dir/V$(LFSR_TOP_MODULE)

clean:
	rm -rf obj_dir
	rm -f *.vcd

.PHONY: all build_fifo run_fifo build_shift_reg_right run_shift_reg_right build_shift_reg_left run_shift_reg_left build_alu run_alu build_priority_enc run_priority_enc build_barrel_shifter run_barrel_shifter build_gray_counter run_gray_counter build_lfsr run_lfsr clean 