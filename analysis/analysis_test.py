import networkx as nx
import matplotlib.pyplot as plt
import statistics


MESH_X = 4
MESH_Y = 4


def create_mesh():
    """Create the 4x4 NoC mesh topology."""
    return nx.grid_2d_graph(MESH_X, MESH_Y)


def xy_route(src, dst):
    """Return the XY routing path from source to destination."""

    x, y = src
    dest_x, dest_y = dst

    path = [(x, y)]

    # Move in X direction first.
    while x != dest_x:
        if dest_x > x:
            x += 1
        else:
            x -= 1

        path.append((x, y))

    # Then move in Y direction.
    while y != dest_y:
        if dest_y > y:
            y += 1
        else:
            y -= 1

        path.append((x, y))

    return path


def hop_count(path):
    """Return the number of links crossed."""
    return len(path) - 1


def count_link_usage(routes):
    """Count how many packets travel through each mesh link."""

    link_usage = {}

    for route in routes:
        for i in range(len(route) - 1):

            router_a = route[i]
            router_b = route[i + 1]

            # Treat A -> B and B -> A as the same physical link.
            link = tuple(sorted((router_a, router_b)))

            link_usage[link] = link_usage.get(link, 0) + 1

    return link_usage


def average_latency(latencies):
    """Return the average packet latency in cycles."""

    if not latencies:
        return 0

    return statistics.mean(latencies)


def throughput(num_packets, total_cycles):
    """Return packets delivered per cycle."""

    if total_cycles == 0:
        return 0

    return num_packets / total_cycles


def draw_heatmap(mesh, link_usage):
    """Draw mesh traffic as a link-utilization heatmap."""

    positions = {
        node: (node[0], -node[1])
        for node in mesh.nodes
    }

    usage_values = []

    for edge in mesh.edges:
        link = tuple(sorted(edge))
        usage_values.append(link_usage.get(link, 0))

    # Draw routers.
    nx.draw_networkx_nodes(
        mesh,
        pos=positions,
        node_size=1200
    )

    nx.draw_networkx_labels(
        mesh,
        pos=positions
    )

    # Draw links.
    # Low traffic = dark purple
    # High traffic = orange/yellow
    edges = nx.draw_networkx_edges(
        mesh,
        pos=positions,
        edge_color=usage_values,
        edge_cmap=plt.cm.inferno,
        edge_vmin=0,
        edge_vmax=max(usage_values, default=1),
        width=[2 + usage for usage in usage_values]
    )

    if max(usage_values, default=0) > 0:
        plt.colorbar(
            edges,
            ax=plt.gca(),
            label="Packets Using Link"
        )

    plt.title("4x4 NoC Link Utilization Heatmap")
    plt.axis("off")
    plt.show()


def main():

    # --------------------------------------------------
    # Create mesh topology
    # --------------------------------------------------

    mesh = create_mesh()

    print("Routers:", mesh.number_of_nodes())
    print("Links:", mesh.number_of_edges())


    # --------------------------------------------------
    # Example traffic
    #
    # These are temporary.
    # Later this data should come from cocotb.
    # --------------------------------------------------

    packets = [
        ((0, 0), (3, 2)),
        ((0, 0), (3, 3)),
        ((0, 1), (3, 1)),
        ((3, 3), (0, 0)),
        ((1, 0), (3, 2)),
        ((0, 0), (3, 2)),
    ]


    # --------------------------------------------------
    # Calculate routes
    # --------------------------------------------------

    routes = []
    hop_counts = []

    for packet_id, (src, dst) in enumerate(packets):

        route = xy_route(src, dst)

        # Verify every router exists in the mesh.
        for router in route:
            assert router in mesh

        routes.append(route)

        hops = hop_count(route)
        hop_counts.append(hops)

        print()
        print("Packet:", packet_id)
        print("Source:", src)
        print("Destination:", dst)
        print("Route:", route)
        print("Hops:", hops)


    # --------------------------------------------------
    # Calculate link utilization
    # --------------------------------------------------

    link_usage = count_link_usage(routes)

    print("\nLink Usage:")

    for link, count in sorted(link_usage.items()):
        print(link, ":", count, "packets")


    # --------------------------------------------------
    # Performance
    #
    # Temporary latency data.
    # Later this should come from cocotb.
    # --------------------------------------------------

    latencies = [6, 7, 5, 9, 5, 8]

    total_cycles = 25

    print("\nPerformance Results:")

    print(
        "Packets delivered:",
        len(packets)
    )

    print(
        "Average latency:",
        average_latency(latencies),
        "cycles"
    )

    print(
        "Average hops:",
        statistics.mean(hop_counts)
    )

    print(
        "Throughput:",
        throughput(len(packets), total_cycles),
        "packets/cycle"
    )


    # --------------------------------------------------
    # Visualize traffic
    # --------------------------------------------------

    draw_heatmap(mesh, link_usage)


if __name__ == "__main__":
    main()