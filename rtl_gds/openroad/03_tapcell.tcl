# Locate the project and timing library.
set PROJECT_DIR [file normalize [file join [file dirname [info script]] ..]]
set CELL_DIR /Users/taha.ibrah/.ciel/sky130A/libs.ref/sky130_fd_sc_hd

# Resume the pin-placement checkpoint.
read_liberty $CELL_DIR/lib/sky130_fd_sc_hd__tt_025C_1v80.lib
read_db $PROJECT_DIR/build/openroad/noc_mesh_pins.odb
read_sdc $PROJECT_DIR/constraints/noc_mesh.sdc

# Insert physical helper cells.
tapcell -distance 14 \
    -tapcell_master sky130_fd_sc_hd__tapvpwrvgnd_1 \
    -endcap_master sky130_fd_sc_hd__decap_3

# Save the checkpoint for PDN generation.
write_db $PROJECT_DIR/build/openroad/noc_mesh_taps.odb
write_def $PROJECT_DIR/build/openroad/noc_mesh_taps.def

puts "\nTap/endcap insertion saved."

# Settings:
# - 14 um distance follows the OpenROAD SKY130 HD platform setup.
# - tapvpwrvgnd_1 is the SKY130 HD well-tap cell.
# - decap_3 is used as an endcap in OpenROAD's SKY130 HD test example.
# Power connections will be established during the PDN stage.