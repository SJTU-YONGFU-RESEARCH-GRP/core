# Makefile for Verilator simulation of the Encryption modules

# Default target
all: test_trng test_aes

# Verilator flags
VERILATOR_FLAGS = -Wall -Wno-fatal --trace --trace-params --trace-structs
AES_VERILATOR_FLAGS = -Wall -Wno-fatal -Wno-BLKSEQ -Wno-SYNCASYNCNET -Wno-VARHIDDEN -Wno-CASEINCOMPLETE --trace --trace-depth 99 --trace-params --trace-structs -CFLAGS "-DDEBUG_TRACE"

# C++ compiler flags
CFLAGS = -Wall -O3 -g

# Obj directory
OBJ_DIR = obj_dir
AES_OBJ_DIR = aes_obj_dir

# Module names
TRNG_MODULE = true_random_generator
AES_MODULE = aes_core

# Testbenches
TRNG_TB = tb_$(TRNG_MODULE)
AES_TB = tb_$(AES_MODULE)

# Verilate the TRNG module
$(OBJ_DIR)/V$(TRNG_MODULE).mk: $(TRNG_MODULE).v
	verilator $(VERILATOR_FLAGS) --cc $(TRNG_MODULE).v --exe $(TRNG_TB).cpp
	
# Build the TRNG simulation executable
$(OBJ_DIR)/V$(TRNG_MODULE): $(OBJ_DIR)/V$(TRNG_MODULE).mk $(TRNG_TB).cpp
	make -C $(OBJ_DIR) -f V$(TRNG_MODULE).mk

# Build and run the AES module all in one step
test_aes: $(AES_MODULE).v $(AES_TB).cpp
	mkdir -p $(AES_OBJ_DIR)
	verilator $(AES_VERILATOR_FLAGS) --cc $(AES_MODULE).v --exe $(AES_TB).cpp --Mdir $(AES_OBJ_DIR) --build -j
	$(AES_OBJ_DIR)/V$(AES_MODULE)

# Test targets
test_trng: $(OBJ_DIR)/V$(TRNG_MODULE)
	$(OBJ_DIR)/V$(TRNG_MODULE)

# Clean target
clean:
	rm -rf $(OBJ_DIR) $(AES_OBJ_DIR) *.vcd

.PHONY: all clean test_trng test_aes 