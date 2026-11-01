module ROM32x32 (
    input  wire        clk,
    input  wire        reset,
    input  wire [31:0] address,
    input  wire [31:0] data_in,
    output wire [31:0] data_out
);

    reg [7:0] mem [0:65_535];

    wire [15:0] addr = address[15:0];

	assign data_out = {
		mem[addr + 3],
		mem[addr + 2],
		mem[addr + 1],
		mem[addr + 0]
   	};

	integer i;
	initial begin 
        $readmemh("programs/hex/addi.hex", mem);
    end

endmodule
