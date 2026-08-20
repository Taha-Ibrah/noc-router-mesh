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

# Inject a scheduled burst of packets through overlapping XY routes and observe
# their real input/output handshakes to measure delivery, latency, and throughput.
@cocotb.test()
async def test_analysis_traffic_and_performance_numbers(dut):
    await reset_mesh(dut)

    # Each tuple contains only:
    # (source coordinate, destination coordinate, scheduled injection cycle).
    # The scheduled cycle is when the testbench FIRST TRIES to send the packet.
    # It is a starting time, not a guarantee that the router accepts it that cycle.
    # Packet IDs are their list indexes, and payloads are 0x500 + packet ID.
    packets = [
        ((0, 0), (3, 2), 1),
        ((0, 0), (3, 3), 2),
        ((0, 1), (3, 1), 1),
        ((3, 3), (0, 0), 1),
        ((1, 0), (3, 2), 1),
        ((0, 0), (3, 2), 3),
    ]

    # Cycles 1-3 form a short burst. Several packets move east over overlapping
    # XY paths, while source (0,0) still injects no more than one flit per cycle.

    expected_hops = [5, 6, 3, 6, 4, 5]
    measurement_cycles = 25  # Also acts as the packet-delivery timeout.

    # A 4x4 mesh contains 16 routers and 24 bidirectional physical links.
    router_count = MESH_X * MESH_Y
    # Each row has MESH_X-1 horizontal links; each column has MESH_Y-1 vertical links.
    horizontal_links = (MESH_X - 1) * MESH_Y
    vertical_links = MESH_X * (MESH_Y - 1)
    physical_link_count = horizontal_links + vertical_links

    assert router_count == 16
    assert physical_link_count == 24

    # Recreate every deterministic XY path and count its links.
    hop_counts = []
    link_usage = {}

    for source, destination, _ in packets:
        # The underscore ignores the scheduled injection cycle in this calculation.
        x, y = source
        dest_x, dest_y = destination
        hops = 0

        # Move through X first, matching the RTL's XY-routing rule.
        while x != dest_x:
            # This one-line if/else chooses whether the next hop increases or decreases X.
            next_x = x + 1 if dest_x > x else x - 1
            # Sorting makes A->B and B->A identify the same physical link.
            link = tuple(sorted(((x, y), (next_x, y))))
            # get(link, 0) returns the old count, or 0 when this link is new.
            link_usage[link] = link_usage.get(link, 0) + 1
            x = next_x
            hops += 1

        # Move through Y only after the X coordinate matches.
        while y != dest_y:
            next_y = y + 1 if dest_y > y else y - 1
            link = tuple(sorted(((x, y), (x, next_y))))
            link_usage[link] = link_usage.get(link, 0) + 1
            y = next_y
            hops += 1

        hop_counts.append(hops)

    expected_link_usage = {
        ((0, 0), (1, 0)): 3,
        ((1, 0), (2, 0)): 4,
        ((2, 0), (3, 0)): 4,
        ((3, 0), (3, 1)): 4,
        ((3, 1), (3, 2)): 4,
        ((3, 2), (3, 3)): 1,
        ((0, 1), (1, 1)): 1,
        ((1, 1), (2, 1)): 1,
        ((2, 1), (3, 1)): 1,
        ((2, 3), (3, 3)): 1,
        ((1, 3), (2, 3)): 1,
        ((0, 3), (1, 3)): 1,
        ((0, 2), (0, 3)): 1,
        ((0, 1), (0, 2)): 1,
        ((0, 0), (0, 1)): 1,
    }

    assert hop_counts == expected_hops
    assert link_usage == expected_link_usage
    assert sum(hop_counts) == 29

    # Build the expected identity of each packet. The test later compares received
    # data against this table, but this table contains no expected arrival times.
    packet_details = {}
    for packet_id, (source, destination, scheduled_cycle) in enumerate(packets):
        dest_x, dest_y = destination
        payload = 0x500 + packet_id
        packet_details[packet_id] = {
            "source": source,
            "destination": destination,
            "scheduled_cycle": scheduled_cycle,
            "payload": payload,
            "flit": make_flit(dest_x, dest_y, packet_id, payload),
        }

    # Keep every destination ready for the entire measurement. A packet therefore
    # leaves the mesh on the first rising edge where its LOCAL output is valid.
    for x in range(MESH_X):
        for y in range(MESH_Y):
            dut.local_output_ready[x][y].value = 1

    # A queue is kept for each source so a packet remains pending if input_ready is
    # low. This prevents a later packet from replacing a stalled packet at a source.
    pending_by_source = {}

    # These dictionaries record real handshakes observed at clock edges. Their keys
    # are packet IDs and their values are the actual injection and receive cycles.
    actual_injection_cycles = {}
    receive_cycles = {}
    measured_latencies = {}

    for cycle in range(1, measurement_cycles + 1):
        # Drive and inspect signals before the rising edge where transfers occur.
        await FallingEdge(dut.clk)

        # Input valid defaults low. A pending packet below raises it for its source.
        for x in range(MESH_X):
            for y in range(MESH_Y):
                dut.local_input_valid[x][y].value = 0

        # Add packets whose scheduled injection time has arrived to their source
        # queues. This makes the packet available to send, but does not yet mean
        # that it has entered the router; entry requires a valid/ready handshake.
        # The schedule never adds two packets to one LOCAL input in a cycle.
        for packet_id, (source, _, scheduled_cycle) in enumerate(packets):
            if scheduled_cycle == cycle:
                pending_by_source.setdefault(source, []).append(packet_id)

        # Present only the oldest waiting packet at each source. If ready is low,
        # no injection occurs, so this same packet is tried again next cycle.
        for source, pending_packet_ids in pending_by_source.items():
            if pending_packet_ids:
                packet_id = pending_packet_ids[0]
                source_x, source_y = source
                dut.local_input_flits[source_x][source_y].value = (
                    packet_details[packet_id]["flit"]
                )
                dut.local_input_valid[source_x][source_y].value = 1

        await Timer(1, unit="ns")

        # RECORD ACTUAL INJECTIONS:
        # valid && ready means the packet will enter its source router on the next
        # rising edge. That edge—not the scheduled cycle—is the actual injection
        # time used when the packet's measured latency is calculated later.
        injected_this_cycle = []
        for source, pending_packet_ids in pending_by_source.items():
            if pending_packet_ids:
                source_x, source_y = source
                if (
                    int(dut.local_input_valid[source_x][source_y].value)
                    and int(dut.local_input_ready[source_x][source_y].value)
                ):
                    injected_this_cycle.append((pending_packet_ids[0], source))

        # DETECT ACTUAL OUTPUT HANDSHAKES:
        # Scan every LOCAL output instead of only the expected destinations. This
        # catches a packet routed to the wrong coordinate. Because ready stays 1,
        # each asserted output_valid causes a real delivery on the next rising edge.
        received_this_cycle = []
        received_ids_this_cycle = set()

        for x in range(MESH_X):
            for y in range(MESH_Y):
                output_valid = int(dut.local_output_valid[x][y].value)
                output_ready = int(dut.local_output_ready[x][y].value)

                if output_valid and output_ready:
                    received_flit = int(dut.local_output_flits[x][y].value)
                    received_packet_id = (received_flit >> 50) & 0xFF
                    received_payload = received_flit & PAYLOAD_MASK

                    assert received_packet_id in packet_details, (
                        f"Received unknown/corrupted packet ID {received_packet_id}"
                    )

                    details = packet_details[received_packet_id]
                    assert (x, y) == details["destination"], (
                        f"Packet {received_packet_id} arrived at {(x, y)}, "
                        f"expected {details['destination']}"
                    )
                    assert received_payload == details["payload"], (
                        f"Packet {received_packet_id} payload was corrupted"
                    )
                    assert received_flit == details["flit"], (
                        f"Packet {received_packet_id} flit fields were corrupted"
                    )
                    assert received_packet_id not in receive_cycles, (
                        f"Packet {received_packet_id} was delivered more than once"
                    )
                    assert received_packet_id not in received_ids_this_cycle, (
                        f"Packet {received_packet_id} appeared twice in cycle {cycle}"
                    )

                    received_ids_this_cycle.add(received_packet_id)
                    received_this_cycle.append(received_packet_id)

        await RisingEdge(dut.clk)  # All detected input/output handshakes occur here.

        # Record the real cycle of each successful input handshake. Removing the
        # packet from its source queue allows that source's next flit to be driven.
        for packet_id, source in injected_this_cycle:
            assert packet_id not in actual_injection_cycles
            actual_injection_cycles[packet_id] = cycle
            assert pending_by_source[source][0] == packet_id
            pending_by_source[source].pop(0)

        # CALCULATE MEASURED LATENCY:
        # The receive cycle comes from the real output handshake above. Subtract
        # the real input-handshake cycle; no expected latency controls this value.
        for packet_id in received_this_cycle:
            assert packet_id in actual_injection_cycles, (
                f"Packet {packet_id} was received before it was injected"
            )
            receive_cycles[packet_id] = cycle
            measured_latencies[packet_id] = (
                receive_cycles[packet_id] - actual_injection_cycles[packet_id]
            )

    packets_injected = len(actual_injection_cycles)
    packets_delivered = len(receive_cycles)
    missing_packet_ids = sorted(set(packet_details) - set(receive_cycles))

    assert packets_injected == len(packets), (
        f"Only {packets_injected} of {len(packets)} packets were injected"
    )
    assert not missing_packet_ids, (
        f"Packets {missing_packet_ids} were not delivered within "
        f"{measurement_cycles} cycles"
    )
    assert packets_delivered == packets_injected

    # Calculate performance only from observed handshakes and the fixed window.
    latency_values = [measured_latencies[packet_id] for packet_id in range(len(packets))]
    delivery_rate = packets_delivered / packets_injected
    minimum_latency = min(latency_values)
    maximum_latency = max(latency_values)
    average_latency = sum(latency_values) / packets_delivered
    average_hops = sum(hop_counts) / len(hop_counts)
    throughput = packets_delivered / measurement_cycles

    dut._log.info(f"Packets injected: {packets_injected}")
    dut._log.info(f"Packets delivered: {packets_delivered}")
    dut._log.info(f"Delivery rate: {delivery_rate:.2%}")

    for packet_id in range(len(packets)):
        details = packet_details[packet_id]
        dut._log.info(
            f"Packet {packet_id}: {details['source']} -> {details['destination']}, "
            f"injected cycle {actual_injection_cycles[packet_id]}, "
            f"received cycle {receive_cycles[packet_id]}, "
            f"latency {measured_latencies[packet_id]} cycles"
        )

    dut._log.info(f"Minimum latency: {minimum_latency} cycles")
    dut._log.info(f"Maximum latency: {maximum_latency} cycles")
    dut._log.info(f"Average latency: {average_latency} cycles")
    dut._log.info(f"Average hops: {average_hops}")
    dut._log.info(f"Throughput: {throughput} packets/cycle")
    dut._log.info(f"XY link usage: {link_usage}")
