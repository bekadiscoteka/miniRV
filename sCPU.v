// sCPU with 3 instructions
`include "alu.v"
`include "control_unit.v"
`include "register.v"

module sCPU(
	output	[7:0]	mem_addr,
	output			ROM_rde,
	
	input	[7:0]	mem_data,	
	input			CLK,
   					RST	
);
	wire [7:0] BUS;

	wire	ALU_flag,	

			ctrl_ALUtempinc,
			ctrl_ALUtemprde,
			ctrl_ALUwre,
			ctrl_ALUrde,

			ctrl_reg0wre,
			ctrl_reg0rde,
			ctrl_reg1wre,	
			ctrl_reg1rde,
			ctrl_reg2wre,
			ctrl_reg2rde,
			ctrl_reg3wre,	
			ctrl_reg3rde,
			ctrl_pcwre,
			ctrl_pcrde,
			ctrl_memwre,
			ctrl_memrde;
			
	
	ALU #(.WIDTH(8)) alu_unit(   // only adder
		.a(BUS),
		.b(BUS),
		.temp_inc(ctrl_ALUtempinc),
		.temp_wre(ctrl_ALUtempwre),
		.wre(ctrl_ALUwre),
		.rde(ctrl_ALUrde),
		.sum(BUS),
		.flag(ALU_flag),
		.clk(CLK),
		.reset(RST)
	);

	control_unit cu(
		//
		.clk(CLK),
		.reset(RST),
		//
		.instr(mem_data),
		
		.reg0_wre(ctrl_reg0wre),
		.reg1_wre(ctrl_reg1wre),
		.reg2_wre(ctrl_reg2wre),
		.reg3_wre(ctrl_reg3wre),
		.pc_wre(ctrl_pcwre),
		.ALU_wre(ctrl_ALUwre),
		.ALU_tempwre(ctrl_ALUtempwre),
		.mem_wre(ctrl_memwre),

		.reg0_rde(ctrl_reg0rde),
		.reg1_rde(ctrl_reg1rde),
		.reg2_rde(ctrl_reg2rde),
		.reg3_rde(ctrl_reg3rde),
		.pc_rde(ctrl_pcrde),
		.ALU_rde(ctrl_ALUrde),
		//.mem_rde(ctrl_memrde),
		.ROM_rde(ROM_rde),

		.ALU_tempinc(ctrl_ALUtempinc),
		.data_out(BUS),
		.ALU_flag(ALU_flag)
	);

	REGISTER #(.WIDTH(8)) MR(
		.wre(ctrl_memwre),
		.rde(1'b1),//.rde(ctrl_memrde),
		.reg_out(mem_addr),
		.reg_in(BUS),

		.reset(RST),
		.clk(CLK)		
	);

	REGISTER #(.WIDTH(8)) PC(
		.wre(ctrl_pcwre),
		.rde(ctrl_pcrde),
		.reg_out(BUS),
		.reg_in(BUS),

		.reset(RST),
		.clk(CLK)		
	);
	REGISTER #(.WIDTH(8)) reg0(
		.wre(ctrl_reg0wre),
		.rde(ctrl_reg0rde),
		.reg_out(BUS),
		.reg_in(BUS),

		.reset(RST),
		.clk(CLK)
	);

	REGISTER #(.WIDTH(8)) reg1(
		.wre(ctrl_reg1wre),
		.rde(ctrl_reg1rde),
		.reg_out(BUS),
		.reg_in(BUS),

		.reset(RST),
		.clk(CLK)
	);

	REGISTER #(.WIDTH(8)) reg2(
		.wre(ctrl_reg2wre),
		.rde(ctrl_reg2rde),
		.reg_out(BUS),
		.reg_in(BUS),

		.reset(RST),
		.clk(CLK)
	);

	REGISTER #(.WIDTH(8)) reg3(
		.wre(ctrl_reg3wre),
		.rde(ctrl_reg3rde),
		.reg_out(BUS),
		.reg_in(BUS),

		.reset(RST),
		.clk(CLK)
	);

	
endmodule

