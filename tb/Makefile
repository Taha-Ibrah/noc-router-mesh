SIM ?= verilator
TOPLEVEL_LANG ?= verilog

RTL_DIR := $(abspath ../rtl)

VERILOG_SOURCES := $(RTL_DIR)/noc_pkg.sv \
                   $(RTL_DIR)/xy_routing.sv

TOPLEVEL := xy_routing
MODULE := xy_routing_tb

include $(shell cocotb-config --makefiles)/Makefile.sim
