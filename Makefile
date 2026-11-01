TOP       := tb_riscv
BUILD_DIR := build
OBJ_DIR   := $(BUILD_DIR)/obj_dir
BIN       := $(OBJ_DIR)/V$(TOP)

RTL_SRCS  := rtl/mini_riscv.v
SIM_SRCS  := sim/Memory_DPI.v sim/tb_riscv.v
CPP_SRCS  := sim/main_diff.cpp

IMG       ?= programs/bin/dummy-minirv-npc.bin

VFLAGS    := -cc --exe --top-module $(TOP) -Wno-WIDTH -Wno-CASEINCOMPLETE \
             --Mdir $(OBJ_DIR) -CFLAGS -I$(abspath sim)

.PHONY: all build sim clean

all: build

build: $(BIN)

$(BIN): $(RTL_SRCS) $(SIM_SRCS) $(CPP_SRCS) sim/GoldenModel.h
	@mkdir -p $(OBJ_DIR)
	verilator $(VFLAGS) $(RTL_SRCS) $(SIM_SRCS) $(abspath $(CPP_SRCS))
	$(MAKE) -j -C $(OBJ_DIR) -f V$(TOP).mk

sim: $(BIN)
	./$(BIN) $(IMG)

clean:
	rm -rf $(BUILD_DIR) obj_dir
