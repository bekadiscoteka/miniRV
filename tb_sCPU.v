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
				cpu_RAMwre,
				cpu_RAMisbyte;
	wire [31:0] cpu_RAMdataout;
				

	RAM32x32 ram(
		.data_in(cpu_RAMdataout),
		.data_out(ram_dataout),	

		.rde(cpu_RAMrde),
		.wre(cpu_RAMwre),
		.address(cpu_RAMaddr),
		.clk(clk),
		.reset(reset),

		.is_byte(cpu_isbyte)
	);	
	miniRV cpu(
		.RAM_addr(cpu_RAMaddr),
		.RAM_rde(cpu_RAMrde),
		.RAM_wre(cpu_RAMwre),
		.RAM_isbyte(cpu_RAMisbyte),

		.CLK(clk),
		.RST(reset),
		.RAM_data_in(ram_dataout),
		.RAM_data_out(cpu_RAMdataout)
	);

	initial forever #1 clk = ~clk; 

	initial begin
		//$monitor("\n\nr0 = %d\nr1 = %d\nr2 = %d\nr3 = %d\npc = %d", 
				//`R0,`R1,`R2,`R3, `PC);
		//$monitor("state = %b", cpu.cu.state);
		#5 reset = 1;
		#5 reset = 0;	
		
		#1000000;		

		while (cpu.reg_file[10].x._reg_out != 0) begin
			#1000;
			$display("x15 = %d", cpu.reg_file[15].x._reg_out);
		end

		$display("x1 = %h", cpu.reg_file[1].x._reg_out); 
		$display("x2 = %h", cpu.reg_file[2].x._reg_out);
		$display("x3 = %h", cpu.reg_file[3].x._reg_out);
		$display("x4 = %h", cpu.reg_file[4].x._reg_out);
		$display("x5 = %h", cpu.reg_file[5].x._reg_out);
		$display("x6 = %h", cpu.reg_file[6].x._reg_out);
		$display("x7 = %h", cpu.reg_file[7].x._reg_out);

		$display("x10 = %h", cpu.reg_file[10].x._reg_out);
		$display("x11 = %h", cpu.reg_file[11].x._reg_out);
		$display("x12 = %h", cpu.reg_file[12].x._reg_out);
		$display("x13 = %h", cpu.reg_file[13].x._reg_out);
		$display("x14 = %h", cpu.reg_file[14].x._reg_out);


		$display("mem4 = %h", ram.mem[4]);
		$display("mem5 = %h", ram.mem[5]);
		$display("mem6 = %h", ram.mem[6]);
		$display("mem7 = %h", ram.mem[7]);
		$display("mem8 = %h", ram.mem[8]);

		$display("mem = %h", ram.mem[16'h1000]);
		$display("mem = %h", ram.mem[16'h1004]);
		$display("mem = %h", ram.mem[16'h1008]);

    	// 3. Halt State Check (PC)
    	// Note: Access the PC register instance
    	$display("PC (Halt Addr) = %d", cpu.PC._reg_out); // Should be 12
		$stop;
	end	
endmodule
