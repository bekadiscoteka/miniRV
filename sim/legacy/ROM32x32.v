module ROM32x32 (
    input  wire [31:0] address,
    output wire [31:0] data_out
);

    reg [7:0] mem [0:16777215];

    wire [23:0] addr = address[23:0];

	assign data_out = {
		mem[addr + 3],
		mem[addr + 2],
		mem[addr + 1],
		mem[addr + 0]
   	};

	reg [24:0] i;
	initial begin 
        $readmemh("programs/hex/sum_byte_addressed.hex", mem);

		/*for (i = 0; i<=16777215; i=i+1) begin
			if (mem[i] === 8'bx) mem[i] = 0;
		end
		$display("mem max: %d", mem[16777215]); */
    end

endmodule
