noc_mesh
└── 16 × noc_router
    ├── 5 × input_fifo
    ├── 5 x XY route computation
    ├── switch_allocator
    │   ├── 5 × round_robin_arbiter
    │   └── output-locking state // for multi-flit wormhole packets
    └── crossbar_5x5



Network Topology: 4x4 2D Mesh
Network Type: Packet-switched (performs routing per packet in each router. Routing each packet individually.)
Routing Algorithm: Deterministic XY Routing (Fixed path regardless of network traffic)
Switching technique: Wormhole switching (Packets broken into smaller flits. Pipelined switching is lower latency    )


**CORE ROUTER MODULES:**

**noc_router.sv** - Top-level router connecting all internal modules
Each router has 5 physical inputs and 5 physical output ports:
5 input ports
      ↓
5 input FIFOs: One FIFO in each incoming direction
      ↓
5 route-computation decisions: The front flit of each nonempty FIFO is examined. Routing only determines which output each flit wants.
      ↓
Switch allocator: Traffic manager. If there is contention after computation decision, switch allocator sends requests to respective arbiter.
      ↓
    5 round-robin arbiters: delegates the contention fairly (5 arbiters nested inside switch allocator)
      ↓
5×5 crossbar: Configurable connection network.
      ↓
5 output ports



**fifo_buffer.sv** - Buffers incoming flits (flow control units); instantiate one per input port

**xy_routing** - Chooses N, E, S, W or Local based on destination coordinates
How the routing algorithm works: Fix the X-coord, Y-coord, then deliver locally when both coordinates match

**switch_allocator.sv** - Collects route reqeuests and instantiates/uses one arbiter per output

**round_robin_arbitration.sv** - Selecting one requester when several inputs want the same output (nested within **switch_allocator.sv**)

**crossbar_5x5_switch.sv** - Connects selected input flits to the five output ports

**vc_allocator.sv** - OPTIONAL FOR SCALABILITY: baseline design uses one FIFO per input, not multiple virtual channels. VC allocator is needed only when each physical input has multiple virtual-channel FIFOs.


**MESH-LEVEL MODULES:**

**noc_mesh.sv** - Instantiates and connects all routers in the 2D mesh (4x4)



**noc_pkg.sv** - Contains shared definitions used by every module.