import cocotb
from cocotb.clock import Clock
from cocotb.triggers import FallingEdge, RisingEdge, Timer


NUM_PORTS = 5


async def drive_and_check(dut, requests, expected_grant, grant_accepted=1):
    await FallingEdge(dut.clk)
    dut.request.value = requests
    dut.grant_accepted.value = grant_accepted

    # Check the grant before the next edge accepts or holds it.
    await Timer(1, unit="ns")
    actual_grant = int(dut.grant.value)

    assert actual_grant == expected_grant, (
        f"request {requests:05b} produced grant {actual_grant:05b}, "
        f"expected {expected_grant:05b}"
    )

    # A valid result has no winner or exactly one winner.
    assert actual_grant == 0 or (actual_grant & (actual_grant - 1)) == 0

    await RisingEdge(dut.clk)


@cocotb.test()
async def test_round_robin_arbitration(dut):
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())

    # Reset priority to requester 0 with no active requests.
    dut.rst_n.value = 0
    dut.request.value = 0
    dut.grant_accepted.value = 0
    await Timer(1, unit="ns")
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    await FallingEdge(dut.clk)
    dut.rst_n.value = 1

    # No request should produce no grant and leave priority unchanged.
    await drive_and_check(dut, 0b00000, 0b00000)

    # Continuous contention should grant each requester once in order.
    for requester in range(NUM_PORTS):
        await drive_and_check(dut, 0b11111, 1 << requester)

    # Priority wraps from requester 4 back to requester 0.
    await drive_and_check(dut, 0b11111, 0b00001)

    # A lone requester wins even when it is not first in priority.
    await drive_and_check(dut, 0b01000, 0b01000)

    # After requester 3 wins, requester 4 is checked before requester 1.
    await drive_and_check(dut, 0b10010, 0b10000)
    await drive_and_check(dut, 0b10010, 0b00010)


@cocotb.test()
async def test_grant_is_held_until_accepted(dut):
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())

    dut.rst_n.value = 0
    dut.request.value = 0
    dut.grant_accepted.value = 0
    await Timer(1, unit="ns")
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    await FallingEdge(dut.clk)
    dut.rst_n.value = 1

    # Requester 2 wins, but the receiver does not accept the transfer.
    await drive_and_check(dut, 0b00100, 0b00100, grant_accepted=0)

    # A new higher-priority request cannot replace the stalled winner.
    await drive_and_check(dut, 0b00101, 0b00100, grant_accepted=0)

    # Accept requester 2; priority then moves to requester 3.
    await drive_and_check(dut, 0b00101, 0b00100, grant_accepted=1)
    await drive_and_check(dut, 0b11111, 0b01000, grant_accepted=1)
