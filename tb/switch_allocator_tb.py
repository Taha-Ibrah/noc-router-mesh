import cocotb
from cocotb.clock import Clock
from cocotb.triggers import FallingEdge, RisingEdge, Timer


NUM_PORTS = 5
PORT_NAMES = ["LOCAL", "NORTH", "EAST", "SOUTH", "WEST"]
EAST_PORT = 2


async def drive_and_check(dut, request_vectors, expected_grants):
    await FallingEdge(dut.clk)

    for output_port in range(NUM_PORTS):
        dut.requests[output_port].value = request_vectors[output_port]

    # Check every combinational grant before priorities update.
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
