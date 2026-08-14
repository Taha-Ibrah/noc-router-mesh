import cocotb
from cocotb.clock import Clock
from cocotb.triggers import FallingEdge, ReadOnly, RisingEdge, Timer


@cocotb.test()
async def test_fifo_buffer(dut):
    # Start a 10 ns clock.
    cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())

    # Hold the active-low reset through two clock edges so the pointers and
    # occupancy counter are initialized without accepting a read or write.
    dut.rst_n.value = 0
    dut.write_request.value = 0
    dut.read_request.value = 0
    dut.flit_in.value = 0

    await Timer(1, units="ns")
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    await FallingEdge(dut.clk)
    dut.rst_n.value = 1
    await RisingEdge(dut.clk)
    await ReadOnly()

    # A reset FIFO contains no valid entries, so empty is high and full is low.
    assert dut.empty.value == 1
    assert dut.full.value == 0

    test_flits = [0x11, 0x22, 0x33, 0x44]

    # Drive each flit before the rising edge, where the FIFO stores it.
    for flit in test_flits:
        await FallingEdge(dut.clk)
        dut.flit_in.value = flit
        dut.write_request.value = 1
        await RisingEdge(dut.clk)

    await ReadOnly()
    assert dut.full.value == 1
    assert dut.empty.value == 0

    # Keep write_request asserted for one extra edge. Since full is high, 0x55
    # must not replace any of the four flits already stored.
    await FallingEdge(dut.clk)
    dut.flit_in.value = 0x55
    await RisingEdge(dut.clk)
    await ReadOnly()
    assert dut.full.value == 1

    # flit_out shows the entry at the current read pointer before that pointer
    # advances on the next rising edge. The values must leave in arrival order.
    for expected_flit in test_flits:
        await FallingEdge(dut.clk)
        dut.write_request.value = 0
        dut.read_request.value = 1
        await Timer(1, units="ns")
        assert int(dut.flit_out.value) == expected_flit
        await RisingEdge(dut.clk)

    # After the fourth accepted read, the occupancy returns to zero.
    await ReadOnly()
    assert dut.empty.value == 1
    assert dut.full.value == 0

    # An empty FIFO must ignore another read instead of decrementing below zero.
    await FallingEdge(dut.clk)
    dut.read_request.value = 1
    await RisingEdge(dut.clk)
    await ReadOnly()
    assert dut.empty.value == 1
