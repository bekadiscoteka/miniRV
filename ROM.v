module ROM8x8 (
	output [7:0] data,
	
	input [7:0] address,
	input rde
);
	reg [7:0] mem [7:0];	

	assign data = rde ? mem[address] : 8'bz; 


	initial begin
		mem[0] = 8'h8a;
		mem[1] = 8'h90;
		mem[2] = 8'ha0;
		mem[3] = 8'hb1;
		mem[4] = 8'h17;
		mem[5] = 8'h29;
		mem[6] = 8'hd1;
		mem[7] = 8'hdf;
	end

endmodule
