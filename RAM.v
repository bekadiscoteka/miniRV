/*module RAM32x32 (
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
		$readmemh("sw_program.hex", mem);
	end

endmodule*/

/*
module RAM32x32 (
    input  wire        clk,
    input  wire        reset,
    input  wire        wre,
    input  wire        rde,
    input  wire [31:0] address,
    input  wire [31:0] data_in,
    output reg  [31:0] data_out
);

    // 32 words × 4 bytes = 128 bytes
    reg [7:0] mem [0:127];

    wire [6:0] addr = address[6:0];  // byte address

    always @(posedge clk) begin
        if (reset) begin
            data_out <= 32'b0;
        end else begin
            if (wre) begin
                // little-endian write
                mem[addr + 0] <= data_in[7:0];
                mem[addr + 1] <= data_in[15:8];
                mem[addr + 2] <= data_in[23:16];
                mem[addr + 3] <= data_in[31:24];
            end

            if (rde) begin
                // little-endian read
                data_out <= {
                    mem[addr + 3],
                    mem[addr + 2],
                    mem[addr + 1],
                    mem[addr + 0]
                };
            end
        end
    end

    initial begin
        $readmemh("lw_program.hex", mem);
    end

endmodule
*/


module RAM32x32 (
    input  wire        clk,
    input  wire        reset,
    input  wire        wre,
    input  wire        rde,
    input  wire        is_byte,   
    input  wire [31:0] address,
    input  wire [31:0] data_in,
    output reg  [31:0] data_out
);

    // 128 bytes of memory
    reg [7:0] mem [0:65_535];

    wire [15:0] addr = address[15:0];

    always @(posedge clk) begin
        if (reset) begin
            data_out <= 32'b0;
        end else begin
            if (wre) begin
                if (is_byte) begin
                    mem[addr] <= data_in[7:0];
                end else begin
                    mem[addr + 0] <= data_in[7:0];
                    mem[addr + 1] <= data_in[15:8];
                    mem[addr + 2] <= data_in[23:16];
                    mem[addr + 3] <= data_in[31:24];
                end
            end

            if (rde) begin
                data_out <= {
                    mem[addr + 3],
                    mem[addr + 2],
                    mem[addr + 1],
                    mem[addr + 0]
                };
            end
        end
    end

	reg [23:0] i;

	initial begin 
        $readmemh("test_programs/program_dump.hex", mem);
		for (i = 0; i<={16{1'b1}}; i=i+1) begin
			if (mem[i] === 8'bx) mem[i] = 8'b0;
			$display("counter == %b", i);
		end
		$display("mem[max] ==", mem[16'hFFFF]); 
    end

endmodule
