SIM ?= verilator
TOPLEVEL_LANG ?= verilog

RTL_DIR := $(abspath ../rtl)

VERILOG_SOURCES := $(RTL_DIR)/noc_pkg.sv \
                   $(RTL_DIR)/round_robin_arbitration.sv \
                   $(RTL_DIR)/switch_allocator.sv

TOPLEVEL := switch_allocator
COCOTB_TEST_MODULES := switch_allocator_tb

include $(shell cocotb-config --makefiles)/Makefile.sim
