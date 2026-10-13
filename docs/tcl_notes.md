# Tcl Notes

Tcl scripts contain commands executed from top to bottom. OpenSTA and OpenROAD add their own commands for loading designs, running stages, and generating reports.

## Basic Syntax

| Syntax | Purpose | Example |
|---|---|---|
| `#` | Comment | `# Load timing constraints` |
| `set` | Create or update a variable | `set CLK_PERIOD_NS 20.0` |
| `$NAME` | Read a variable | `create_clock -period $CLK_PERIOD_NS [get_ports clk]` |
| `[command]` | Execute a command and substitute its result | `[get_ports clk]` |
| `{...}` | Group literal text without variable expansion | `{slew capacitance fanout}` |
| `"..."` | Group text with variable and command expansion | `puts "Period: $CLK_PERIOD_NS ns"` |
| `puts` | Print text | `puts "Floorplan saved."` |
| `expr` | Evaluate an expression | `set HALF_PERIOD [expr {$CLK_PERIOD_NS / 2.0}]` |

A trailing backslash continues a command onto the next line. Do not put spaces after it.

```tcl
initialize_floorplan -utilization 35 -aspect_ratio 1 \
    -core_space 20 -site unithd
```

## Paths

```tcl
# Locate rtl_gds when this script is inside rtl_gds/sta or rtl_gds/openroad.
set PROJECT_DIR [file normalize [file join [file dirname [info script]] ..]]
read_sdc [file join $PROJECT_DIR constraints noc_mesh.sdc]
```

`info script` returns the script's path. `file dirname` finds its directory, `..` refers to the parent, and `file normalize` produces an absolute path. Nested brackets are evaluated from the inside out.

## Commands Used in This Project

| Command | Purpose |
|---|---|
| `read_liberty` | Load cell timing models |
| `read_lef` | Load technology or cell physical information in OpenROAD |
| `read_verilog` / `link_design` | Load the netlist and resolve the top-level circuit |
| `read_sdc` | Load timing constraints |
| `report_checks` | Print timing paths |
| `write_db` / `write_def` | Save OpenROAD physical-design checkpoints |

Options such as `-period` and `-utilization` belong to the command using them. Tcl names are case-sensitive.

Run `.tcl` files through OpenSTA or OpenROAD. Shell commands such as `mkdir`, `cat`, and `tee` belong in the terminal; they should not be pasted into these scripts.
