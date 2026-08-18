import cocotb
from cocotb.clock import Clock
from cocotb.triggers import FallingEdge, RisingEdge, Timer


NUM_PORTS = 5
PORT_NAMES = ["LOCAL", "NORTH", "EAST", "SOUTH", "WEST"]
EAST_PORT = 2


async def drive_and_check(
    dut, request_vectors, expected_grants, accepted_outputs=0b11111
):
    await FallingEdge(dut.clk)
    dut.grant_accepted.value = accepted_outputs

    for output_port in range(NUM_PORTS):
        dut.requests[output_port].value = request_vectors[output_port]

    # Check every grant before the next edge accepts or holds it.
    await Timer(1, unit="ns")

    for output_port in range(NUM_PORTS):
        actual = int(dut.grants[output_port].value)
        expected = expected_grants[output_port]

        assert actual == expected, (
            f"{PORT_NAMES[output_port]} output granted {actual:05b}, "
            f"expected {expected:05b} for request "
            f"{request_vectors[output_port]:05b}"
        )

        # Each output may select no input or exactly one input.
        assert actual == 0 or (actual & (actual - 1)) == 0

    await RisingEdge(dut.clk)


@cocotb.test()
async def test_switch_allocator(dut):
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())

    # Reset all five arbiters with no active requests.
    dut.rst_n.value = 0
    dut.grant_accepted.value = 0
    for output_port in range(NUM_PORTS):
        dut.requests[output_port].value = 0

    await Timer(1, unit="ns")
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    await FallingEdge(dut.clk)
    dut.rst_n.value = 1

    # Idle outputs must not grant any input.
    await drive_and_check(dut, [0] * NUM_PORTS, [0] * NUM_PORTS)

    # Give each output a different single requester to verify array mapping.
    single_requests = [1 << port for port in range(NUM_PORTS)]
    await drive_and_check(dut, single_requests, single_requests)

    # Under full contention, each output rotates from its own priority.
    for cycle in range(NUM_PORTS):
        expected = [
            1 << ((output_port + cycle + 1) % NUM_PORTS)
            for output_port in range(NUM_PORTS)
        ]
        await drive_and_check(dut, [0b11111] * NUM_PORTS, expected)

    # Activity on EAST must not create grants or change priority elsewhere.
    east_only_requests = [0] * NUM_PORTS
    east_only_requests[EAST_PORT] = 0b10001
    east_only_grants = [0] * NUM_PORTS
    east_only_grants[EAST_PORT] = 0b10000
    await drive_and_check(dut, east_only_requests, east_only_grants)

    expected_after_east = [0b00010, 0b00100, 0b00001, 0b10000, 0b00001]
    await drive_and_check(dut, [0b11111] * NUM_PORTS, expected_after_east)


@cocotb.test()
async def test_stalled_output_holds_its_grant(dut):
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())

    dut.rst_n.value = 0
    dut.grant_accepted.value = 0
    for output_port in range(NUM_PORTS):
        dut.requests[output_port].value = 0

    await Timer(1, unit="ns")
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    await FallingEdge(dut.clk)
    dut.rst_n.value = 1

    requests = [0] * NUM_PORTS
    expected = [0] * NUM_PORTS

    # Input 2 wins EAST, but EAST does not accept the transfer.
    requests[EAST_PORT] = 0b00100
    expected[EAST_PORT] = 0b00100
    await drive_and_check(dut, requests, expected, accepted_outputs=0)

    # A new input 0 request cannot replace EAST's stalled input 2 grant.
    requests[EAST_PORT] = 0b00101
    await drive_and_check(dut, requests, expected, accepted_outputs=0)

    # Accept EAST's held grant, then verify its priority advances to input 3.
    await drive_and_check(
        dut, requests, expected, accepted_outputs=(1 << EAST_PORT)
    )
    requests[EAST_PORT] = 0b11111
    expected[EAST_PORT] = 0b01000
    await drive_and_check(dut, requests, expected)
