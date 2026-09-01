###############################################################################
# noc_mesh: deterministic top-level I/O pin placement
#
# This stage starts from the floorplan checkpoint produced by
# openroad/01_floorplan.tcl and writes a new checkpoint; it does not overwrite
# the floorplan-only database.
###############################################################################

set SCRIPT_DIR  [file dirname [file normalize [info script]]]
set RTL_GDS_DIR [file dirname $SCRIPT_DIR]

set INPUT_DB   $RTL_GDS_DIR/build/openroad/noc_mesh_floorplan.odb
set OUTPUT_DB  $RTL_GDS_DIR/build/openroad/noc_mesh_pins.odb
set OUTPUT_DEF $RTL_GDS_DIR/build/openroad/noc_mesh_pins.def
set PIN_SCRIPT $RTL_GDS_DIR/build/openroad/noc_mesh_pin_placement.tcl

puts "Reading the floorplan checkpoint..."
read_db $INPUT_DB

# Keep each interface direction together. The wildcard patterns expand to all
# bits of the packed buses. Incoming traffic/control enters from the left;
# outgoing traffic/control exits on the right.
set_io_pin_constraint \
    -region left:* \
    -group \
    -pin_names {local_input_flits* local_input_valid* local_output_ready*}

set_io_pin_constraint \
    -region right:* \
    -group \
    -pin_names {local_input_ready* local_output_flits* local_output_valid*}

# Keep clock and asynchronous reset together on the bottom edge.
set_io_pin_constraint \
    -region bottom:* \
    -group \
    -order \
    -pin_names {clk rst_n}

# SKY130 met3 has horizontal preferred routing and met2 has vertical preferred
# routing. Keep two routing tracks between adjacent pins and avoid die corners.
puts "Placing 2,114 top-level pin bits..."
place_pins \
    -hor_layers met3 \
    -ver_layers met2 \
    -corner_avoidance 10 \
    -min_distance 2 \
    -min_distance_in_tracks \
    -random_seed 42 \
    -write_pin_placement $PIN_SCRIPT

write_db $OUTPUT_DB
write_def $OUTPUT_DEF

puts "Pin-placement database written to: $OUTPUT_DB"
puts "Pin-placement DEF written to:      $OUTPUT_DEF"
puts "Reproducible pin commands written to: $PIN_SCRIPT"
