module REGISTER #(
	parameter integer WIDTH = 8
) (
	output [WIDTH-1:0] reg_out,
  	input  [WIDTH-1:0] reg_in, 
	input wre, rde, clk, reset	
);	
	reg [WIDTH-1:0] _reg_out;
	assign reg_out = rde ? _reg_out : 8'b?; 	

	always @(posedge clk, posedge reset) begin
		if (reset) begin
			_reg_out <= 0;
		end
		else begin
			if (wre) _reg_out <= reg_in;
		end
	end
endmodule
