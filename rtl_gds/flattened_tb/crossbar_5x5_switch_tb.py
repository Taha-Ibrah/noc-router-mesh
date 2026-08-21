import cocotb
from cocotb.triggers import Timer


NUM_PORTS = 5
FLIT_WIDTH = 64
FLIT_MASK = (1 << FLIT_WIDTH) - 1

# Give each input a unique 64-bit pattern so its path is easy to identify.
INPUT_FLITS = [
    0x1111111111111111,
    0x2222222222222222,
    0x3333333333333333,
    0x4444444444444444,
    0x5555555555555555,
]


def drive_inputs(dut):
    # Place one recognizable flit on each of the five crossbar inputs.
    packed_flits = 0
    for input_port in range(NUM_PORTS):
        packed_flits |= INPUT_FLITS[input_port] << (input_port * FLIT_WIDTH)
    dut.input_flits.value = packed_flits


def drive_grants(dut, selected_inputs):
    # Build one grant vector per output. A one-hot bit selects the input;
    # None leaves that output disconnected.
    packed_grants = 0
    for output_port, input_port in enumerate(selected_inputs):
        if input_port is not None:
            packed_grants |= 1 << (output_port * NUM_PORTS + input_port)
    dut.grants.value = packed_grants


async def check_outputs(dut, expected_outputs):
    # Allow the combinational crossbar to settle before checking its outputs.
    await Timer(1, unit="ns")

    # Compare every output as a complete 64-bit flit.
    packed_outputs = int(dut.output_flits.value)
    for output_port, expected in enumerate(expected_outputs):
        actual = (packed_outputs >> (output_port * FLIT_WIDTH)) & FLIT_MASK
        assert actual == expected, (
            f"output {output_port} produced 0x{actual:016x}, "
            f"expected 0x{expected:016x}"
        )


@cocotb.test()
async def test_no_grants_drive_zero(dut):
    drive_inputs(dut)

    # Clear all five grant vectors even though input data is present.
    drive_grants(dut, [None] * NUM_PORTS)

    # Without grants, no input is connected and every output stays at zero.
    await check_outputs(dut, [0] * NUM_PORTS)


@cocotb.test()
async def test_every_input_output_connection(dut):
    drive_inputs(dut)

    # Exercise each of the 25 possible input-to-output connections.
    for output_port in range(NUM_PORTS):
        for input_port in range(NUM_PORTS):
            # Grant one input to one output and disconnect the other outputs.
            selections = [None] * NUM_PORTS
            selections[output_port] = input_port

            # Only the selected output should receive the selected input flit.
            expected = [0] * NUM_PORTS
            expected[output_port] = INPUT_FLITS[input_port]

            drive_grants(dut, selections)
            await check_outputs(dut, expected)


@cocotb.test()
async def test_simultaneous_connections(dut):
    drive_inputs(dut)

    # Route all five inputs at once using a reversed mapping:
    # output 0 gets input 4, output 1 gets input 3, and so on.
    selected_inputs = [4, 3, 2, 1, 0]
    drive_grants(dut, selected_inputs)

    # Each output must contain the flit from its independently selected input.
    expected = [INPUT_FLITS[input_port] for input_port in selected_inputs]
    await check_outputs(dut, expected)
