// sCPU with 3 instructions

`include "alu.v"
`include "control_unit.v"
`include "register.v"

module miniRV (
	output	[31:0]		RAM_addr,
	output				RAM_rde,
						RAM_wre,
	
	//output 	[31:0]		RAM_data_out,
	input	[31:0]		RAM_data_in,	

	input				CLK,
   						RST	
);
	wire [31:0] BUS,
				ctrl_busout;

	wire [1:0] ctrl_ALUoper;
	wire	ALU_eqflag,	

			ctrl_ALUtemprde,
			ctrl_ALUwre,
			ctrl_ALUrde,

			ctrl_RAMwre,
			ctrl_RAMrde,

			ctrl_addrwre,
			ctrl_addrrde,

			ctrl_busoutwre,
			ctrl_busoutrde,

			ctrl_PCwre,
			ctrl_PCrde;

	wire [15:0] ctrl_xrde,
				ctrl_xwre;
				
	wire [31:0] addr_out;

	genvar i;

	generate
		for (i=1; i <= 15; i = i+1) begin: reg_file // from 1 because x0 is initiated separately
			REGISTER #(.WIDTH(32)) x(
				.wre(ctrl_xwre[i]),
				.rde(ctrl_xrde[i]),

				.reg_out(BUS),
				.reg_in(BUS),

				.reset(RST),
				.clk(CLK)		
			);
		end	
	endgenerate
	

	assign RAM_rde = ctrl_RAMrde;
	assign RAM_wre = ctrl_RAMwre;
	assign RAM_addr = addr_out;
		
	
	ALU #(.WIDTH(32)) alu_unit(   // only adder
		.a(BUS),
		.b(BUS),
		.oper(ctrl_ALUoper),
		.temp_wre(ctrl_ALUtempwre),
		.wre(ctrl_ALUwre),
		.rde(ctrl_ALUrde),
		.eq_flag(ALU_eqflag),
		.out(BUS),
		.clk(CLK),
		.reset(RST)
	);

	control_unit CU(
		//
		.clk(CLK),
		.reset(RST),
		//
		.RAM_data_in(RAM_data_in),
		
		.x_wre(ctrl_xwre),
		.x_rde(ctrl_xrde),

		.PC_wre(ctrl_PCwre),
		.PC_rde(ctrl_PCrde),

		.addr_wre(ctrl_addrwre),
		.addr_rde(ctrl_addrrde),

		.ALU_wre(ctrl_ALUwre),
		.ALU_rde(ctrl_ALUrde),

		.RAM_wre(ctrl_RAMwre),
		.RAM_rde(ctrl_RAMrde),

		.ALU_tempwre(ctrl_ALUtempwre),
		.ALU_oper(ctrl_ALUoper),

		.out_wre(ctrl_busoutwre),
		.out_rde(ctrl_busoutrde),

		.bus_out(ctrl_busout),
		.ALU_eqflag(ALU_eqflag)
	);

	REGISTER #(.WIDTH(32)) addr(
		.wre(ctrl_addrwre),
		.rde(ctrl_addrrde),

		.reg_out(addr_out),
		.reg_in(BUS),

		.reset(RST),
		.clk(CLK)		
	);

	REGISTER #(.WIDTH(32)) x0(
		.wre(1'b0),
		.rde(ctrl_xrde[0]),//.rde(ctrl_memrde),

		.reg_out(BUS),
		.reg_in(BUS),

		.reset(RST),
		.clk(CLK)		
	);

	REGISTER #(.WIDTH(32)) PC(
		.wre(ctrl_PCwre),
		.rde(ctrl_PCrde),
		.reg_out(BUS),
		.reg_in(BUS),

		.reset(RST),
		.clk(CLK)		
	);

	REGISTER #(.WIDTH(32)) CTRL_out(
		.wre(ctrl_busoutwre),
		.rde(ctrl_busoutrde),
		.reg_out(BUS),
		.reg_in(ctrl_busout),

		.reset(RST),
		.clk(CLK)		
	);

endmodule

