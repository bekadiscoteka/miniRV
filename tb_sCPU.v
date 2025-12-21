`include "sCPU.v"
`include "RAM.v"

`define R0 cpu.reg0._reg_out 
`define R1 cpu.reg1._reg_out
`define R2 cpu.reg2._reg_out
`define R3 cpu.reg3._reg_out
`define PC cpu.PC._reg_out

module stimulus;
	reg clk=0, reset=0;
	wire [31:0]	ram_dataout,
				cpu_RAMaddr;
	wire		cpu_RAMrde,
				cpu_RAMwre;
	wire [31:0] cpu_RAMdataout = 32'd0;
				

	RAM32x32 ram(
		.data_in(cpu_RAMdataout),
		.data_out(ram_dataout),	

		.rde(cpu_RAMrde),
		.wre(cpu_RAMwre),
		.address(cpu_RAMaddr),
		.clk(clk),
		.reset(reset)
	);	
	miniRV cpu(
		.RAM_addr(cpu_RAMaddr),
		.RAM_rde(cpu_RAMrde),
		.RAM_wre(cpu_RAMwre),

		.CLK(clk),
		.RST(reset),
		.RAM_data_in(ram_dataout)
	);

	initial forever #1 clk = ~clk; 

	initial begin
		//$monitor("\n\nr0 = %d\nr1 = %d\nr2 = %d\nr3 = %d\npc = %d", 
				//`R0,`R1,`R2,`R3, `PC);
		//$monitor("state = %b", cpu.cu.state);
		#5 reset = 1;
		#5 reset = 0;	
		
		#10000;		
		$display("x10 = %d", cpu.reg_file[10].x._reg_out);
		$stop;
	end	
endmodule
