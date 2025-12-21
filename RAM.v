module RAM32x32 (
	output reg [31:0] data_out,
	
	input [31:0] address,
				 data_in,
	input clk, reset,
	input wre, rde
);
	reg [7:0] mem [0:31];	
	reg [31:0] ram_out;
	
	always @(posedge clk, posedge reset) begin
		if (reset) begin
			ram_out <= 0;
			data_out <= 0;
		end
		else begin
		   	if (wre) {mem[address], mem[address+1], mem[address+2], mem[address+3]} <= data_in;	
			if (rde) data_out <= {mem[address+3], mem[address+2], mem[address+1], mem[address+0]}; 
		end
	end

	initial begin
		$readmemh("add_program.hex", mem);
	end

endmodule
