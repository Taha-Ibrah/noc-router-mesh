# Load SKY130HD timing library
read_liberty /Users/taha.ibrah/.ciel/sky130A/libs.ref/sky130_fd_sc_hd/lib/sky130_fd_sc_hd__tt_025C_1v80.lib

# Load synthesized gate-level netlist from Yosys
read_verilog /Users/taha.ibrah/Downloads/noc-router-mesh/rtl_gds/build/noc_mesh_synth.v

# Set the top-level design
link_design noc_mesh

# Load timing constraints
read_sdc /Users/taha.ibrah/Downloads/noc-router-mesh/rtl_gds/constraints/noc_mesh.sdc

# Report setup timing paths
report_checks
