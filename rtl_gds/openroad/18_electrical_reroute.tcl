# === REPAIR/REROUTE PURPOSE HEADER ============================================
# PURPOSE: REBUILD ROUTING AFTER THE STRONGER ELECTRICAL-REPAIR CANDIDATE CHANGES CELLS
#          AND CONNECTIONS.
# GOAL: PRODUCE COMPLETE, GEOMETRY-CLEAN WIRING FOR THE ELECTRICAL CUSHION CANDIDATE
#       WHILE RETAINING ITS CELLS, PLACEMENT, AND POWER/GROUND NETWORK.
# HOW IT WORKS: DELETE EXISTING SIGNAL AND CLOCK WIRE GEOMETRY, PRESERVE POWER/GROUND
#               GEOMETRY AND LOGICAL CONNECTIVITY, THEN REBUILD GLOBAL GUIDES AND
#               DETAILED ROUTES. SAVE THE CUSHION-ROUTED CHECKPOINT AND REPORT ROUTER
#               AND ANTENNA RESULTS. STAGE 19 EXTRACTS RC AND CHECKS ELECTRICAL/TIMING
#               CLOSURE.
# ============================================================================

# Locate the project and library.
set PROJECT_DIR [file normalize [file join [file dirname [info script]] ..]]
set CELL_DIR /Users/taha.ibrah/.ciel/sky130A/libs.ref/sky130_fd_sc_hd

set INPUT $PROJECT_DIR/build/openroad/noc_mesh_electrical_cushion_before_reroute
set OUTPUT $PROJECT_DIR/build/openroad/noc_mesh_electrical_cushion_routed

file mkdir $PROJECT_DIR/reports

# Resume the latest cushion-repair checkpoint.
read_liberty $CELL_DIR/lib/sky130_fd_sc_hd__tt_025C_1v80.lib
read_db ${INPUT}.odb

# Remove old signal/clock wire geometry before rebuilding routing.
# Preserve cells, connectivity, and power/ground routing.
foreach net [[ord::get_db_block] getNets] {
    set NET_TYPE [$net getSigType]

    if {$NET_TYPE != "POWER" && $NET_TYPE != "GROUND"} {
        set OLD_WIRE [$net getWire]

        if {$OLD_WIRE != "NULL"} {
            odb::dbWire_destroy $OLD_WIRE
        }
    }
}

read_sdc ${INPUT}.sdc

set_propagated_clock [all_clocks]
set_thread_count 4
global_connect
check_placement -verbose

# Rebuild routing guides for the changed cells and connections.
set_routing_layers -signal met1-met5 -clock met3-met5
set_global_routing_layer_adjustment met1-met5 0.20

global_route \
    -guide_file ${OUTPUT}.guide \
    -congestion_iterations 50

# Complete detailed wiring and resolve router geometry violations.
detailed_route \
    -output_drc $PROJECT_DIR/reports/electrical_cushion_reroute_drc.rpt \
    -drc_report_iter_step 5 \
    -verbose 1

# Save the routed result before generating additional reports.
write_db ${OUTPUT}.odb
write_def ${OUTPUT}.def
write_verilog ${OUTPUT}.v
write_sdc ${OUTPUT}.sdc

puts "\nELECTRICAL CUSHION REROUTING METRICS"
report_design_area
puts "All signal nets routed: [design_is_routed]"
puts "Router geometry violations: [detailed_route_num_drvs]"

check_antennas \
    -report_file $PROJECT_DIR/reports/electrical_cushion_reroute_antenna.rpt

puts "\nSaved: ${OUTPUT}.odb"
puts "Next: fresh RC extraction and STA on this routed checkpoint."