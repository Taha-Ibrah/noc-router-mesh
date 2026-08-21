import cocotb
from cocotb.clock import Clock
from cocotb.triggers import FallingEdge, RisingEdge, Timer


# Port indexes from noc_pkg.sv.
LOCAL_PORT = 0
NORTH_PORT = 1
EAST_PORT = 2
SOUTH_PORT = 3
WEST_PORT = 4
NUM_PORTS = 5
FLIT_WIDTH = 64
FLIT_MASK = (1 << FLIT_WIDTH) - 1

ALL_PORTS = 0b11111  # One bit for each of the five ports.
FIFO_DEPTH = 4

# These tests assume the Makefile sets ROUTER_X=1 and ROUTER_Y=1.
# The default 64-bit flit layout is:
# type[63:62], dest_x[61:60], dest_y[59:58], packet_id[57:50], payload[49:0].
FLIT_SINGLE = 0b11
PAYLOAD_MASK = (1 << 50) - 1  # Creates a mask containing fifty 1-bits.


def set_input_flits(dut, port_flits):
    """Pack {port: flit} entries and drive the complete input bus once."""
    packed_inputs = 0
    for port, flit in port_flits.items():
        packed_inputs |= (flit & FLIT_MASK) << (port * FLIT_WIDTH)
    dut.input_flits.value = packed_inputs


def get_output_flit(dut, port):
    """Read one port's 64-bit section from the packed output bus."""
    shift = port * FLIT_WIDTH
    return (int(dut.output_flits.value) >> shift) & FLIT_MASK


def make_flit(dest_x, dest_y, packet_id, payload):
    """Pack the flit fields into one 64-bit integer."""
    return (
        ((FLIT_SINGLE & 0b11) << 62)  # Place the two-bit flit type at bits 63:62.
        | ((dest_x & 0b11) << 60)  # | combines each field into the same integer.
        | ((dest_y & 0b11) << 58)
        | ((packet_id & 0xFF) << 50)  # 0xFF keeps the lowest eight ID bits.
        | (payload & PAYLOAD_MASK)
    )


async def reset_router(dut):  # async allows this function to pause at await statements.
    """Start the clock, initialize every input, and reset the router."""
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())  # Run clk in parallel.

    dut.rst_n.value = 0  # .value drives a SystemVerilog signal from Python.
    dut.input_valid.value = 0
    dut.output_ready.value = 0
    dut.input_flits.value = 0

    await Timer(1, unit="ns")  # Pause this test coroutine for one nanosecond.
    await RisingEdge(dut.clk)  # Wait until clk changes from 0 to 1.
    await RisingEdge(dut.clk)
    await FallingEdge(dut.clk)  # Wait until clk changes from 1 to 0.

    dut.rst_n.value = 1
    await Timer(1, unit="ns")  # Allow combinational router signals to settle.


@cocotb.test()  # Register the following async function as an independent test.
async def test_reset_clears_router(dut):
    await reset_router(dut)

    assert int(dut.input_ready.value) == ALL_PORTS  # int() converts the HDL value.
    assert int(dut.output_valid.value) == 0

    # Send one LOCAL input flit whose destination requires the EAST output.
    flit = make_flit(dest_x=2, dest_y=1, packet_id=1, payload=0x101)
    await FallingEdge(dut.clk)
    assert int(dut.input_ready.value) & (1 << LOCAL_PORT)  # Check LOCAL ready.
    set_input_flits(dut, {LOCAL_PORT: flit})
    dut.input_valid.value = 1 << LOCAL_PORT  # Create a one-hot LOCAL valid mask.

    await RisingEdge(dut.clk)  # valid && ready stores the flit in the LOCAL FIFO.
    await FallingEdge(dut.clk)
    dut.input_valid.value = 0
    await Timer(1, unit="ns")

    assert int(dut.output_valid.value) == (1 << EAST_PORT)
    assert get_output_flit(dut, EAST_PORT) == flit

    # Asserting asynchronous reset must immediately empty the occupied FIFO.
    dut.rst_n.value = 0
    await Timer(1, unit="ns")

    assert int(dut.input_ready.value) == ALL_PORTS
    assert int(dut.output_valid.value) == 0


@cocotb.test()
async def test_all_routes_and_crossbar_connections(dut):
    await reset_router(dut)

    # Each input gets a different flit, and each flit requests a different output.
    local_input_flit = make_flit(2, 1, packet_id=0x10, payload=0x100)  # EAST
    north_input_flit = make_flit(1, 0, packet_id=0x11, payload=0x101)  # SOUTH
    east_input_flit = make_flit(0, 1, packet_id=0x12, payload=0x102)  # WEST
    south_input_flit = make_flit(1, 1, packet_id=0x13, payload=0x103)  # LOCAL
    west_input_flit = make_flit(1, 2, packet_id=0x14, payload=0x104)  # NORTH

    # Drive all five input flits and assert all five input_valid bits together.
    await FallingEdge(dut.clk)
    assert int(dut.input_ready.value) == ALL_PORTS
    set_input_flits(
        dut,
        {
            LOCAL_PORT: local_input_flit,
            NORTH_PORT: north_input_flit,
            EAST_PORT: east_input_flit,
            SOUTH_PORT: south_input_flit,
            WEST_PORT: west_input_flit,
        },
    )
    dut.input_valid.value = ALL_PORTS

    await RisingEdge(dut.clk)  # All five ready/valid input handshakes occur here.
    await FallingEdge(dut.clk)
    dut.input_valid.value = 0
    await Timer(1, unit="ns")

    # All outputs should be valid, with the crossbar performing this permutation.
    assert int(dut.output_valid.value) == ALL_PORTS
    assert get_output_flit(dut, EAST_PORT) == local_input_flit
    assert get_output_flit(dut, SOUTH_PORT) == north_input_flit
    assert get_output_flit(dut, WEST_PORT) == east_input_flit
    assert get_output_flit(dut, LOCAL_PORT) == south_input_flit
    assert get_output_flit(dut, NORTH_PORT) == west_input_flit

    # Make every receiver ready, so all five output handshakes happen together.
    dut.output_ready.value = ALL_PORTS
    await RisingEdge(dut.clk)
    await FallingEdge(dut.clk)
    dut.output_ready.value = 0
    await Timer(1, unit="ns")

    assert int(dut.output_valid.value) == 0


@cocotb.test()
async def test_east_output_round_robin_order(dut):
    await reset_router(dut)

    # Build five unique flits. Every destination is EAST of router (1,1).
    contenders = []
    for input_port in range(NUM_PORTS):
        contenders.append(  # append() adds one flit to the end of the Python list.
            make_flit(
                dest_x=2,
                dest_y=1,
                packet_id=0x20 + input_port,
                payload=0x200 + input_port,
            )
        )

    # Place one EAST-requesting flit into every input FIFO on the same edge.
    await FallingEdge(dut.clk)
    set_input_flits(
        dut,
        {input_port: contenders[input_port] for input_port in range(NUM_PORTS)},
    )
    dut.input_valid.value = ALL_PORTS

    await RisingEdge(dut.clk)
    await FallingEdge(dut.clk)
    dut.input_valid.value = 0
    await Timer(1, unit="ns")

    # Keep EAST ready. One contender transfers on each rising edge.
    dut.output_ready.value = 1 << EAST_PORT
    for input_port in range(NUM_PORTS):
        assert int(dut.output_valid.value) == (1 << EAST_PORT)
        assert get_output_flit(dut, EAST_PORT) == contenders[input_port]

        await RisingEdge(dut.clk)  # Accept the current winner and advance priority.
        await FallingEdge(dut.clk)
        await Timer(1, unit="ns")

    dut.output_ready.value = 0
    assert int(dut.output_valid.value) == 0


@cocotb.test()
async def test_stalled_grant_holds_the_same_flit(dut):
    await reset_router(dut)

    first_flit = make_flit(2, 1, packet_id=0x31, payload=0x301)
    later_flit = make_flit(2, 1, packet_id=0x32, payload=0x302)

    # Put the first flit in input FIFO 2. EAST remains blocked because ready=0.
    await FallingEdge(dut.clk)
    set_input_flits(dut, {EAST_PORT: first_flit})
    dut.input_valid.value = 1 << EAST_PORT
    await RisingEdge(dut.clk)
    await FallingEdge(dut.clk)
    dut.input_valid.value = 0
    await Timer(1, unit="ns")

    assert int(dut.output_valid.value) == (1 << EAST_PORT)
    assert get_output_flit(dut, EAST_PORT) == first_flit

    # Wait one blocked cycle so the EAST arbiter stores input 2 as its held grant.
    await RisingEdge(dut.clk)
    await FallingEdge(dut.clk)

    # A new input-0 request arrives, but it must not replace the held input-2 flit.
    set_input_flits(dut, {LOCAL_PORT: later_flit})
    dut.input_valid.value = 1 << LOCAL_PORT
    await RisingEdge(dut.clk)
    await FallingEdge(dut.clk)
    dut.input_valid.value = 0
    await Timer(1, unit="ns")

    # Keep EAST blocked for two more cycles and check that its data never changes.
    for _ in range(2):  # _ means the loop counter itself is intentionally unused.
        assert int(dut.output_valid.value) == (1 << EAST_PORT)
        assert get_output_flit(dut, EAST_PORT) == first_flit
        await RisingEdge(dut.clk)
        await FallingEdge(dut.clk)
        await Timer(1, unit="ns")

    # Accept the held flit. The later LOCAL-input flit should then win EAST.
    dut.output_ready.value = 1 << EAST_PORT
    await RisingEdge(dut.clk)
    await FallingEdge(dut.clk)
    dut.output_ready.value = 0
    await Timer(1, unit="ns")

    assert int(dut.output_valid.value) == (1 << EAST_PORT)
    assert get_output_flit(dut, EAST_PORT) == later_flit

    # Accept the remaining flit and confirm that EAST becomes idle.
    dut.output_ready.value = 1 << EAST_PORT
    await RisingEdge(dut.clk)
    await FallingEdge(dut.clk)
    dut.output_ready.value = 0
    await Timer(1, unit="ns")

    assert int(dut.output_valid.value) == 0


@cocotb.test()
async def test_fifo_backpressure_and_order(dut):
    await reset_router(dut)

    # Create four flits, matching the configured FIFO depth.
    queued_flits = []
    for index in range(FIFO_DEPTH):
        queued_flits.append(
            make_flit(
                dest_x=1,
                dest_y=2,
                packet_id=0x40 + index,
                payload=0x400 + index,
            )
        )

    # Keep NORTH blocked and write the four flits into the LOCAL input FIFO.
    for flit in queued_flits:
        await FallingEdge(dut.clk)
        assert int(dut.input_ready.value) & (1 << LOCAL_PORT)
        set_input_flits(dut, {LOCAL_PORT: flit})
        dut.input_valid.value = 1 << LOCAL_PORT
        await RisingEdge(dut.clk)
        await FallingEdge(dut.clk)
        dut.input_valid.value = 0
        await Timer(1, unit="ns")

    # LOCAL ready must become 0 because its four-entry FIFO is now full.
    assert not (int(dut.input_ready.value) & (1 << LOCAL_PORT))
    assert int(dut.output_valid.value) == (1 << NORTH_PORT)
    assert get_output_flit(dut, NORTH_PORT) == queued_flits[0]

    # Present one extra flit while ready=0. No handshake occurs, so it is rejected.
    rejected_flit = make_flit(1, 2, packet_id=0x4F, payload=0x4FF)
    await FallingEdge(dut.clk)
    set_input_flits(dut, {LOCAL_PORT: rejected_flit})
    dut.input_valid.value = 1 << LOCAL_PORT
    await RisingEdge(dut.clk)
    await FallingEdge(dut.clk)
    dut.input_valid.value = 0
    await Timer(1, unit="ns")

    assert not (int(dut.input_ready.value) & (1 << LOCAL_PORT))
    assert get_output_flit(dut, NORTH_PORT) == queued_flits[0]

    # Keep NORTH ready and verify that the four accepted flits leave oldest first.
    dut.output_ready.value = 1 << NORTH_PORT
    for expected_flit in queued_flits:
        assert int(dut.output_valid.value) == (1 << NORTH_PORT)
        assert get_output_flit(dut, NORTH_PORT) == expected_flit
        await RisingEdge(dut.clk)
        await FallingEdge(dut.clk)
        await Timer(1, unit="ns")

    dut.output_ready.value = 0
    assert int(dut.output_valid.value) == 0
    assert int(dut.input_ready.value) & (1 << LOCAL_PORT)
