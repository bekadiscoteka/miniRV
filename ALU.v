module ALU #(
	parameter integer WIDTH = 8 
) (
	output reg flag,
	output [WIDTH-1:0] sum,
	input [WIDTH-1:0] a, b,
		
	input temp_inc, wre, rde, clk, reset,
		temp_wre 
);
	reg [7:0] _sum, temp;
	assign sum = rde ? _sum : 8'bz;

	always @(posedge clk, posedge reset) begin
		if (reset) begin
			_sum <= 0;
			flag <= 0;
			temp <= 0;
		end
		else begin
			if (wre) begin
				if (temp_inc) begin
					_sum <= a + 1;
					flag <= a == 1 ? 1 : 0;
				end
				else begin
					_sum <= a + temp;
					flag <= a == temp ? 1 : 0;
				end
			end
			if (temp_wre) temp <= b;		
		end
	end	
endmodule
