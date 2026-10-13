# Locate the project and SKY130 cell library.
set PROJECT_DIR [file normalize [file join [file dirname [info script]] ..]]
set CELL_DIR /Users/taha.ibrah/.ciel/sky130A/libs.ref/sky130_fd_sc_hd

# Load metal-layer rules, cell shapes, and timing models.
read_lef $CELL_DIR/techlef/sky130_fd_sc_hd__nom.tlef
read_lef $CELL_DIR/lef/sky130_fd_sc_hd.lef
read_liberty $CELL_DIR/lib/sky130_fd_sc_hd__tt_025C_1v80.lib

# Load the synthesized circuit and timing requirements.
read_verilog $PROJECT_DIR/build/noc_mesh_mapped.v
link_design noc_mesh
read_sdc $PROJECT_DIR/constraints/noc_mesh.sdc

# Create a square floorplan with 35% cell utilization.
# Leave 20 um between the core and die boundary.
initialize_floorplan -utilization 35 -aspect_ratio 1 \
    -core_space 20 -site unithd

# Create the grid that routing wires will follow.
make_tracks

# Save the floorplan for subsequent stages.
write_db $PROJECT_DIR/build/openroad/noc_mesh_floorplan.odb
write_def $PROJECT_DIR/build/openroad/noc_mesh_floorplan.def

puts "\nFloorplan saved."
