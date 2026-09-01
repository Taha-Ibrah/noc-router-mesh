###############################################################################
# noc_mesh: OpenROAD design loading and initial floorplan
#
# Run from rtl_gds with:
#   openroad -no_init -log reports/openroad/01_floorplan.log \
#       openroad/01_floorplan.tcl
###############################################################################

# Resolve every project path relative to this script, not the terminal's cwd.
set SCRIPT_DIR  [file dirname [file normalize [info script]]]
set RTL_GDS_DIR [file dirname $SCRIPT_DIR]

# SKY130 HD physical and timing views.
set TECH_LEF /Users/taha.ibrah/.ciel/sky130A/libs.ref/sky130_fd_sc_hd/techlef/sky130_fd_sc_hd__nom.tlef
set CELL_LEF /Users/taha.ibrah/.ciel/sky130A/libs.ref/sky130_fd_sc_hd/lef/sky130_fd_sc_hd.lef
set LIBERTY /Users/taha.ibrah/.ciel/sky130A/libs.ref/sky130_fd_sc_hd/lib/sky130_fd_sc_hd__tt_025C_1v80.lib

# Project inputs and checkpoint outputs.
set NETLIST    $RTL_GDS_DIR/build/noc_mesh_mapped.v
set SDC        $RTL_GDS_DIR/constraints/noc_mesh.sdc
set OUTPUT_DB  $RTL_GDS_DIR/build/openroad/noc_mesh_floorplan.odb
set OUTPUT_DEF $RTL_GDS_DIR/build/openroad/noc_mesh_floorplan.def

puts "Reading the SKY130 technology and standard-cell physical abstracts..."
# Read both files into the same database library. In this OpenROAD build,
# `read_lef -tech` intentionally omits placement SITE definitions such as
# `unithd`, so combined mode is required for SKY130 standard-cell rows.
read_lef $TECH_LEF
read_lef $CELL_LEF

puts "Reading SKY130 cell timing and the mapped gate-level netlist..."
read_liberty $LIBERTY
read_verilog $NETLIST
link_design noc_mesh

puts "Applying the 100 MHz timing constraints..."
read_sdc $SDC

# Use a square core with deliberately low initial utilization. The design has
# about 742,000 um^2 of standard-cell area, and 35% leaves room for buffers,
# clock-tree cells, hold fixes, tap cells, and routing congestion.
puts "Initializing the floorplan at 35% core utilization..."
initialize_floorplan \
    -utilization 35 \
    -aspect_ratio 1.0 \
    -core_space {20 20 20 20} \
    -site unithd

# Generate legal routing-track grids from the SKY130 technology LEF.
make_tracks

# Print the initial area summary into the OpenROAD log.
report_design_area

# Save both OpenROAD's native database and an interoperable DEF checkpoint.
write_db $OUTPUT_DB
write_def $OUTPUT_DEF

puts "Floorplan database written to: $OUTPUT_DB"
puts "Floorplan DEF written to:      $OUTPUT_DEF"
