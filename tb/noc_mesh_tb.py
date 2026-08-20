import cocotb
from cocotb.clock import Clock
from cocotb.triggers import FallingEdge, RisingEdge, Timer

#MANIPULATE INPUTS, ASSERT OUTPUTS

MESH_X = 4
MESH_Y = 4
MAX_TRAVEL_CYCLES = 20

# The default 64-bit flit layout from noc_pkg.sv is:
# type[63:62], dest_x[61:60], dest_y[59:58], packet_id[57:50], payload[49:0].
FLIT_SINGLE = 0b11
PAYLOAD_MASK = (1 << 50) - 1  # Creates a mask containing fifty 1-bits.


def make_flit(dest_x, dest_y, packet_id, payload):
    """Pack the flit fields into one 64-bit integer."""
    return (
        ((FLIT_SINGLE & 0b11) << 62)  # Place the two-bit flit type at bits 63:62.
        | ((dest_x & 0b11) << 60)  # | combines each field into the same integer.
        | ((dest_y & 0b11) << 58)
        | ((packet_id & 0xFF) << 50)  # 0xFF keeps the lowest eight ID bits.
        | (payload & PAYLOAD_MASK)
    )


async def reset_mesh(dut):  # async allows this function to pause at await statements.
    """Start the clock, initialize all local ports, and reset every router."""
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())  # Run clk in parallel.

    dut.rst_n.value = 0  # .value drives a SystemVerilog signal from Python.

    # Each [x][y] location represents the LOCAL port of one router.
    for x in range(MESH_X):
        for y in range(MESH_Y):
            dut.local_input_flits[x][y].value = 0
            dut.local_input_valid[x][y].value = 0
            dut.local_output_ready[x][y].value = 0

    await Timer(1, unit="ns")
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    await FallingEdge(dut.clk)

    dut.rst_n.value = 1
    await Timer(1, unit="ns")  # Allow combinational mesh signals to settle.


@cocotb.test()  # Register the following async function as an independent test.
async def test_reset_and_local_delivery(dut):
    await reset_mesh(dut)

    # Reset should leave all LOCAL input FIFOs ready and all LOCAL outputs invalid.
    for x in range(MESH_X):
        for y in range(MESH_Y):
            assert int(dut.local_input_ready[x][y].value) == 1
            assert int(dut.local_output_valid[x][y].value) == 0

    # Inject a flit at router (2,1) whose destination is also (2,1).
    # Because the coordinates already match, XY routing chooses the LOCAL output.
    flit = make_flit(dest_x=2, dest_y=1, packet_id=0x01, payload=0x101)

    await FallingEdge(dut.clk)
    assert int(dut.local_input_ready[2][1].value) == 1
    dut.local_input_flits[2][1].value = flit
    dut.local_input_valid[2][1].value = 1

    await RisingEdge(dut.clk)  # valid && ready stores the flit in router (2,1).
    await FallingEdge(dut.clk)
    dut.local_input_valid[2][1].value = 0
    await Timer(1, unit="ns")

    assert int(dut.local_output_valid[2][1].value) == 1
    assert int(dut.local_output_flits[2][1].value) == flit

    # The local endpoint accepts the flit on the next rising edge.
    dut.local_output_ready[2][1].value = 1
    await RisingEdge(dut.clk)
    await FallingEdge(dut.clk)
    dut.local_output_ready[2][1].value = 0
    await Timer(1, unit="ns")

    assert int(dut.local_output_valid[2][1].value) == 0


@cocotb.test()
async def test_corner_to_corner_xy_routing(dut):
    await reset_mesh(dut)

    # Send from the southwest corner (0,0) to the northeast corner (3,3).
    # XY routing moves EAST until x=3, then NORTH until y=3.
    flit = make_flit(dest_x=3, dest_y=3, packet_id=0x10, payload=0xABC)

    await FallingEdge(dut.clk)
    assert int(dut.local_input_ready[0][0].value) == 1
    dut.local_input_flits[0][0].value = flit
    dut.local_input_valid[0][0].value = 1

    await RisingEdge(dut.clk)  # Inject the flit into router (0,0).
    await FallingEdge(dut.clk)
    dut.local_input_valid[0][0].value = 0
    await Timer(1, unit="ns")

    # Wait until the flit reaches the LOCAL output at router (3,3).
    arrived = False
    for _ in range(MAX_TRAVEL_CYCLES):  # _ means the loop count is intentionally unused.
        if int(dut.local_output_valid[3][3].value):
            arrived = True
            break  # Leave the loop as soon as the destination becomes valid.

        await RisingEdge(dut.clk)
        await FallingEdge(dut.clk)
        await Timer(1, unit="ns")

    assert arrived, "The flit did not reach router (3,3) before the timeout"
    assert int(dut.local_output_flits[3][3].value) == flit

    # No other local endpoint should receive this point-to-point flit.
    for x in range(MESH_X):
        for y in range(MESH_Y):
            if (x, y) != (3, 3):  # Tuples make the coordinate comparison concise.
                assert int(dut.local_output_valid[x][y].value) == 0

    dut.local_output_ready[3][3].value = 1
    await RisingEdge(dut.clk)
    await FallingEdge(dut.clk)
    dut.local_output_ready[3][3].value = 0
    await Timer(1, unit="ns")

    assert int(dut.local_output_valid[3][3].value) == 0


@cocotb.test()
async def test_two_flits_cross_the_mesh_in_parallel(dut):
    await reset_mesh(dut)

    # These flits travel in opposite directions and exercise all four link types.
    northeast_flit = make_flit(3, 3, packet_id=0x20, payload=0x200)
    southwest_flit = make_flit(0, 0, packet_id=0x21, payload=0x201)

    # Inject both flits on the same rising edge.
    await FallingEdge(dut.clk)
    assert int(dut.local_input_ready[0][0].value) == 1
    assert int(dut.local_input_ready[3][3].value) == 1
    dut.local_input_flits[0][0].value = northeast_flit
    dut.local_input_flits[3][3].value = southwest_flit
    dut.local_input_valid[0][0].value = 1
    dut.local_input_valid[3][3].value = 1

    await RisingEdge(dut.clk)
    await FallingEdge(dut.clk)
    dut.local_input_valid[0][0].value = 0
    dut.local_input_valid[3][3].value = 0
    await Timer(1, unit="ns")

    # Keep both destinations blocked so neither flit disappears before checking.
    both_arrived = False
    for _ in range(MAX_TRAVEL_CYCLES):
        northeast_arrived = int(dut.local_output_valid[3][3].value)
        southwest_arrived = int(dut.local_output_valid[0][0].value)

        if northeast_arrived and southwest_arrived:
            both_arrived = True
            break

        await RisingEdge(dut.clk)
        await FallingEdge(dut.clk)
        await Timer(1, unit="ns")

    assert both_arrived, "Both flits did not arrive before the timeout"
    assert int(dut.local_output_flits[3][3].value) == northeast_flit
    assert int(dut.local_output_flits[0][0].value) == southwest_flit

    # Accept both destination outputs on the same rising edge.
    dut.local_output_ready[3][3].value = 1
    dut.local_output_ready[0][0].value = 1
    await RisingEdge(dut.clk)
    await FallingEdge(dut.clk)
    dut.local_output_ready[3][3].value = 0
    dut.local_output_ready[0][0].value = 0
    await Timer(1, unit="ns")

    assert int(dut.local_output_valid[3][3].value) == 0
    assert int(dut.local_output_valid[0][0].value) == 0


@cocotb.test()
async def test_destination_backpressure_holds_flit(dut):
    await reset_mesh(dut)

    # Send across the bottom row from router (0,0) to router (3,0).
    flit = make_flit(dest_x=3, dest_y=0, packet_id=0x30, payload=0x300)

    await FallingEdge(dut.clk)
    dut.local_input_flits[0][0].value = flit
    dut.local_input_valid[0][0].value = 1
    await RisingEdge(dut.clk)
    await FallingEdge(dut.clk)
    dut.local_input_valid[0][0].value = 0
    await Timer(1, unit="ns")

    arrived = False
    for _ in range(MAX_TRAVEL_CYCLES):
        if int(dut.local_output_valid[3][0].value):
            arrived = True
            break

        await RisingEdge(dut.clk)
        await FallingEdge(dut.clk)
        await Timer(1, unit="ns")

    assert arrived, "The flit did not reach router (3,0) before the timeout"
    assert int(dut.local_output_flits[3][0].value) == flit

    # output_ready stays 0 for three cycles, so valid and data must remain stable.
    for _ in range(3):
        assert int(dut.local_output_valid[3][0].value) == 1
        assert int(dut.local_output_flits[3][0].value) == flit
        await RisingEdge(dut.clk)
        await FallingEdge(dut.clk)
        await Timer(1, unit="ns")

    # Once the endpoint raises ready, the held flit transfers and valid clears.
    dut.local_output_ready[3][0].value = 1
    await RisingEdge(dut.clk)
    await FallingEdge(dut.clk)
    dut.local_output_ready[3][0].value = 0
    await Timer(1, unit="ns")

    assert int(dut.local_output_valid[3][0].value) == 0
