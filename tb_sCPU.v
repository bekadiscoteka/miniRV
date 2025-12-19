`include "sCPU.v"
`include "ROM.v"

`define R0 cpu.reg0._reg_out 
`define R1 cpu.reg1._reg_out
`define R2 cpu.reg2._reg_out
`define R3 cpu.reg3._reg_out
`define PC cpu.PC._reg_out

module stimulus;
	reg clk=0, reset=0;
	wire [7:0]	mem_data,
				cpu_addr;
	wire		cpu_ROMrde;

	ROM8x8 mem(
		.data(mem_data),
		
		.rde(cpu_ROMrde),
		.address(cpu_addr)	
	);	
	sCPU cpu(
		.mem_addr(cpu_addr),
		.ROM_rde(cpu_ROMrde),

		.CLK(clk),
		.RST(reset),
		.mem_data(mem_data)
	);

	initial forever #1 clk = ~clk; 

	initial begin
		$monitor("\n\nr0 = %d\nr1 = %d\nr2 = %d\nr3 = %d\npc = %d", 
				`R0,`R1,`R2,`R3, `PC);
		//$monitor("state = %b", cpu.cu.state);
		#5 reset = 1;
		#5 reset = 0;	
		
		#10000;		
		$stop;
	end	
endmodule
