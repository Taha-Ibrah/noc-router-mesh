# Locate the project and SKY130 library.
set PROJECT_DIR [file normalize [file join [file dirname [info script]] ..]]
set CELL_DIR /Users/taha.ibrah/.ciel/sky130A/libs.ref/sky130_fd_sc_hd

# Resume the tap/endcap checkpoint.
read_liberty $CELL_DIR/lib/sky130_fd_sc_hd__tt_025C_1v80.lib
read_db $PROJECT_DIR/build/openroad/noc_mesh_taps.odb
read_sdc $PROJECT_DIR/constraints/noc_mesh.sdc

# Connect cell supply and body pins to power and ground.
add_global_connection -net VDD -inst_pattern {.*} \
    -pin_pattern {^(VPWR|VPB)$} -power
add_global_connection -net VSS -inst_pattern {.*} \
    -pin_pattern {^(VGND|VNB)$} -ground
global_connect

# Define one power domain covering the core.
set_voltage_domain -name CORE -power VDD -ground VSS
define_pdn_grid -name core_grid -voltage_domains {CORE} -pins {met5}

# Standard-cell rails and crossing upper-metal power straps.
add_pdn_stripe -grid core_grid -layer met1 \
    -width 0.48 -pitch 5.44 -offset 0 -followpins
add_pdn_stripe -grid core_grid -layer met4 \
    -width 1.60 -pitch 27.14 -offset 13.57
add_pdn_stripe -grid core_grid -layer met5 \
    -width 1.60 -pitch 27.20 -offset 13.60

# Join the layers with vias.
add_pdn_connect -grid core_grid -layers {met1 met4}
add_pdn_connect -grid core_grid -layers {met4 met5}

# Build the power network.
pdngen -failed_via_report $PROJECT_DIR/reports/pdn_failed_vias.rpt

# Check grid connectivity at this floorplanning stage.
check_power_grid -net VDD -floorplanning
check_power_grid -net VSS -floorplanning

# Save the checkpoints.
write_db $PROJECT_DIR/build/openroad/noc_mesh_pdn.odb
write_def $PROJECT_DIR/build/openroad/noc_mesh_pdn.def

puts "\nPDN generation saved."

# Settings follow OpenROAD's SKY130 HD reference configuration.
# - met1: 0.48 um rails following standard-cell rows.
# - met4: vertical straps, 1.60 um wide, 27.14 um pair pitch.
# - met5: horizontal straps, 1.60 um wide, 27.20 um pair pitch.
# - met5 also provides block-level power terminals.
# Recheck all cell connections after placement; IR-drop analysis comes later.