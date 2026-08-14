//Switch allocator instantiates 5 round robin arbiters,
//One for each output port.

/*
switch_allocator
├── RR arbiter for NORTH
├── RR arbiter for SOUTH
├── RR arbiter for EAST
├── RR arbiter for WEST
└── RR arbiter for LOCAL
*/

