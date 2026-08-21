# Why There Are Two RTL Versions

The `rtl/` folder contains the finalized, readable SystemVerilog used for understanding and normal simulation.

The `rtl_gds/flattened_rtl/` folder contains the same NoC design with complex ports flattened into packed vectors so native Yosys can synthesize it. This version is used for the RTL-to-GDS workflow, while `rtl/` remains the clean reference design.

## Flattened RTL Changes

- Unpacked arrays and custom-type module ports were replaced with packed `logic` vectors.
- Base offsets and `+:` part-selects are used to access individual ports, flits, routers, requests, and grants within those vectors.
- Explicit widths and index conversions were added where Yosys or Verilator required them.
- The routing, buffering, arbitration, crossbar, and mesh behavior remains the same.

## Flattened Testbench Changes

- Cocotb reads and writes complete packed buses instead of directly indexing SystemVerilog arrays.
- Small packing and unpacking helpers select the correct flit, port, request, grant, or mesh coordinate.
- The Makefile reads RTL from `flattened_rtl/`; the tests still verify the same design behavior as the readable version.
