`include "ROM32x32.v"
`include "RAM32x32.v"
`include "mini_riscv.v"

module tb_riscv(input clk, reset);
	//reg clk=0, reset=0;
	wire [31:0]	data,
				data_out,
				data_addr,
				
				lfu_rdata,
				lfu_raddr;
	wire rde, wre, is_byte; 
				
	/* Remove these:
    ROM32x32 instrMem(...);
    RAM32x32 dataMem(...);
    */

    // Add this:
    Memory_DPI mem(
        .clk(clk),
        
        .instr_addr(lfu_raddr),
        .instr(lfu_rdata),
        
        .data_addr(data_addr),
        .data_in(data_out),
        .data_wre(wre),
        .is_byte(is_byte),
        .data_out(data)
    );	

	mini_riscv cpu(
		.dataMem_addr(data_addr),
		.dataMem_wre(wre),
		.is_byte(is_byte),

		.instr(lfu_rdata),
		.instr_addr(lfu_raddr),

		.clk(clk),
		.reset(reset),
		.dataMem_in(data),
		.dataMem_out(data_out)
	);
	/*initial forever #1 clk = ~clk; 

	initial begin
		$monitor("opcode = %b", cpu.opcode);
		$monitor("pc = %d", cpu.pc);
		reset = 1;
		#4 reset = 0;
		#100000;
		$display("\n\nra= %d, \n sp=%d\ngp=%d\ntp=%d\nt0=%d\nt1=%d\nt2=%d\ns0_fp=%d\ns1=%d\na0=%d\na1=%d\na2=%d\na3=%d\na4=%d\na5=%d", 
			cpu.ra, cpu.sp, cpu.gp, cpu.tp, cpu.t0, cpu.t1, cpu.t2, cpu.s0_fp, cpu.s1, cpu.a0, cpu.a1, cpu.a2, cpu.a3, cpu.a4, cpu.a5
		);
		$display("pc = %d", cpu.pc);
		$stop;
	end*/	
	
endmodule
