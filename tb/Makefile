SIM ?= verilator
TOPLEVEL_LANG ?= verilog

RTL_DIR := $(abspath ../rtl)

VERILOG_SOURCES := $(RTL_DIR)/noc_pkg.sv \
                   $(RTL_DIR)/crossbar_5x5_switch.sv

TOPLEVEL := crossbar_5x5
COCOTB_TEST_MODULES := crossbar_5x5_switch_tb

include $(shell cocotb-config --makefiles)/Makefile.sim
