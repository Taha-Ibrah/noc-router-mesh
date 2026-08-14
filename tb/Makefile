SIM ?= verilator
TOPLEVEL_LANG ?= verilog

RTL_DIR := $(abspath ../rtl)

VERILOG_SOURCES := $(RTL_DIR)/noc_pkg.sv \
                   $(RTL_DIR)/round_robin_arbitration.sv

TOPLEVEL := round_robin
COCOTB_TEST_MODULES := round_robin_arbitration_tb

include $(shell cocotb-config --makefiles)/Makefile.sim
