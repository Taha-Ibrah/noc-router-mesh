import cocotb
from cocotb.triggers import Timer


LOCAL_PORT = 0
NORTH_PORT = 1
EAST_PORT = 2
SOUTH_PORT = 3
WEST_PORT = 4


async def check_route(dut, current, destination, expected_port):
    dut.current_x.value = current[0]
    dut.current_y.value = current[1]
    dut.dest_x.value = destination[0]
    dut.dest_y.value = destination[1]

    # Allow the combinational routing logic to settle.
    await Timer(1, unit="ns")

    assert int(dut.route_out.value) == expected_port, (
        f"route {current} -> {destination} selected "
        f"port {int(dut.route_out.value)}, expected {expected_port}"
    )


@cocotb.test()
async def test_xy_routing(dut):
    # Check delivery and each of the four neighboring directions.
    await check_route(dut, (1, 1), (1, 1), LOCAL_PORT)
    await check_route(dut, (1, 1), (3, 1), EAST_PORT)
    await check_route(dut, (2, 1), (0, 1), WEST_PORT)
    await check_route(dut, (1, 1), (1, 3), NORTH_PORT)
    await check_route(dut, (1, 2), (1, 0), SOUTH_PORT)

    # When both coordinates differ, X must be resolved before Y.
    await check_route(dut, (1, 1), (2, 0), EAST_PORT)
    await check_route(dut, (2, 1), (0, 3), WEST_PORT)
