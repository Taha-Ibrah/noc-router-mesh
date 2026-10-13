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

# Settings and rationale
# - Utilization 35%: a conservative starting density, leaving room for wide
#   NoC connections and later buffers/clock cells. More space can also mean
#   longer wires; revise this value after examining timing and congestion.
# - Aspect ratio 1: start with a square core before evaluating placement.
# - Core space 20 um: initial boundary clearance; revisit for PDN requirements.
# - Site unithd: SKY130 HD's single-height placement site, 0.46 x 2.72 um.
#   Its dimensions are library rules, not custom dimensions chosen here.
# - make_tracks: use the technology LEF's routing pitches and offsets.
# - noc_mesh: the synthesized top-level module. noc_mesh_mapped.v contains
#   the SKY130 standard-cell instances to implement.
# These settings are starting choices, not demonstrated optimal values.
#
# SKY130 components used
# - PDK installation: sky130A; high-density library: sky130_fd_sc_hd.
# - sky130_fd_sc_hd__nom.tlef: nominal technology LEF defining layers, vias,
#   routing properties, and placement sites.
# - sky130_fd_sc_hd.lef: standard-cell sizes, pin shapes, and obstructions.
# - sky130_fd_sc_hd__tt_025C_1v80.lib: timing/electrical models at typical
#   process, 25 C, and 1.80 V. Other timing corners are checked later.
# - noc_mesh.sdc supplies the clock and external-interface assumptions.
# This script initializes the floorplan; pin placement, taps, and PDN follow.
