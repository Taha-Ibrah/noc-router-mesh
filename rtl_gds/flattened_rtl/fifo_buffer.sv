//Generate input FIFO buffer, instantiated 5x by noc_router
//Implementing one input FIFO that holds FIFO_DEPTH flits, each flit is FLIT_WIDTH bits wide.
import noc_pkg::*;
module fifo_buffer(
    input logic clk,
    input logic rst_n,
    //read/write requests
    input logic write_request,
    input logic read_request,
    //data i/o
    input logic [63:0] flit_in, //writing data
    output logic[63:0] flit_out, //reading data
    //fifo status
    output logic full,
    output logic empty
);
    //Necessary internal logic:
    //FIFO Depth
    logic[FLIT_WIDTH-1:0] fifo_memory[0:FIFO_DEPTH-1];

    //read and write pointers for memory organization
    logic[FIFO_ADDR_WIDTH-1:0] wr_ptr;
    logic[FIFO_ADDR_WIDTH-1:0] rd_ptr;

    //counter
    logic[FIFO_ADDR_WIDTH:0] count;


    //status flags
    //needs to be combinational logic to prevent potential contention
    assign empty = (count==0);
    assign full = (count == FIFO_DEPTH[FIFO_ADDR_WIDTH:0]); //comparing 3 bits to 3 bits

    //read data needs to be adjusted to be output the oldest data that entered in the buffer
    assign flit_out = fifo_memory[rd_ptr];

    always_ff @(posedge clk or negedge rst_n) begin
        // Reset FIFO state.
        if (!rst_n) begin
            wr_ptr <= '0;
            rd_ptr <= '0;
            count <= '0;
        end else begin
            // Store a flit when space is available.
            if (write_request && !full) begin
                fifo_memory[wr_ptr] <= flit_in;
                wr_ptr <= wr_ptr + 1'b1;
            end

            // Advance past the oldest flit when reading.
            if (read_request && !empty) begin
                rd_ptr <= rd_ptr + 1'b1;
            end

            // Change the count only for a read or write alone.
            case ({write_request && !full, read_request && !empty})
                2'b10: count <= count + 1'b1;
                2'b01: count <= count - 1'b1;
                default: count <= count;
            endcase
        end
    end
endmodule
