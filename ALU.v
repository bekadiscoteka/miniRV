module ALU #(
	parameter integer WIDTH = 8 
) (
	output reg eq_flag,
	output [WIDTH-1:0] out,
	input [WIDTH-1:0] a, b,
			
	input [1:0] oper,

	input wre, rde, clk, reset, temp_wre 
);
	localparam [1:0]	ADD = 0,
						INC = 1,
						ADD_EVEN = 2;
	reg [WIDTH-1:0] _sum, temp;
	assign out = rde ? _sum : {WIDTH{1'bz}};

	always @(posedge clk, posedge reset) begin
		if (reset) begin
			_sum <= 0;
			eq_flag <= 0;
			temp <= 0;
		end
		else begin
			if (wre) begin
				eq_flag <= a == temp;
				case (oper) 
					ADD: _sum <= a + temp;
					INC: _sum <= a + 4;
					ADD_EVEN: _sum <= (a + temp) & ~32'b1;  // for jalr
					default: _sum <= a + temp;
				endcase
			end
			if (temp_wre) temp <= b;		
		end
	end	
endmodule
