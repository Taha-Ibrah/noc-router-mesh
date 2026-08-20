SIM ?= verilator
TOPLEVEL_LANG ?= verilog

RTL_DIR := $(abspath ../rtl)

VERILOG_SOURCES := $(RTL_DIR)/noc_pkg.sv \
                   $(RTL_DIR)/fifo_buffer.sv \
                   $(RTL_DIR)/xy_routing.sv \
                   $(RTL_DIR)/round_robin_arbitration.sv \
                   $(RTL_DIR)/switch_allocator.sv \
                   $(RTL_DIR)/crossbar_5x5_switch.sv \
                   $(RTL_DIR)/noc_router.sv \
                   $(RTL_DIR)/noc_mesh.sv

TOPLEVEL := noc_mesh
COCOTB_TEST_MODULES := noc_mesh_tb

include $(shell cocotb-config --makefiles)/Makefile.sim
