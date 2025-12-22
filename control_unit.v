// control unit for sCPU

module control_unit(
	output reg			PC_wre,			PC_rde,
						addr_wre,		addr_rde,
						RAM_wre,		RAM_rde,	RAM_datawre, RAM_isbyte,
						ALU_wre,		ALU_rde,
						ALU_tempwre, 	
						out_wre,		out_rde,
	output reg [1:0] 	ALU_oper,

	output reg 	[15:0] 	x_rde,	x_wre,
	output reg	[31:0] 	bus_out,

	input [31:0] 		RAM_data_in,
	input 				clk, 
						reset,
						ALU_eqflag	
			
);

	localparam [1:0] 	ADD=0, INC=1, ADD_EVEN=2;
	localparam [2:0]	FETCH=0, EXEC=1,
						FETCH_SETADDR=0, FETCH_SETPC=1;

	localparam [6:0] 	ADDI=7'b0010011, JALR=7'b1100111,
						LUI=7'b0110111,
						LW=7'b0000011,
						ADD_R=7'b0110011,
						SW=7'b0100011;
						

	localparam [4:0] 	DECODE=0,  // upto 32 
						ADDI_SETALU=1, ADDI_SETRD=2, 
						JALR_INCPC=3, JALR_SETRD=4, JALR_SETALU=5, JALR_SETPC=6, 
						LUI_SETRD=7, 
						LW_SETALU=8, LW_SETADDR=9, LW_MEMREAD=10, LW_SETCTRLOUT=11, LW_SETRD=12,
						ADD_SETALU=13, ADD_SETRD=14,
						SW_SETALU=15, SW_SETADDR=16, SW_SETRAMREG=17, SW_SETRAM=18; 
						

	reg [2:0] state, nxt_state, fetch_state, nxt_fetch_state;
	reg [4:0] exec_state, nxt_exec_state;
	reg [31:0] nxt_instr, instr;
				
	wire [6:0] opcode	= nxt_instr[6:0];
	wire [4:0] rd		= nxt_instr[11:7];
	wire [2:0] funct3	= nxt_instr[14:12];
	wire [4:0] rs1		= nxt_instr[19:15];
	wire [4:0] rs2		= nxt_instr[24:20];
	wire [11:0] immI	= nxt_instr[31:20];
	wire [19:0] immU 	= nxt_instr[31:12];
	wire [11:0] immS 	= {nxt_instr[31:25], nxt_instr[11:7]};

	always @* begin
		
		PC_wre=0;		PC_rde=0;
		addr_wre=0;		
		RAM_wre=0;		RAM_rde=0; RAM_datawre=0; RAM_isbyte=0;
		ALU_wre=0;		ALU_rde=0;
		ALU_tempwre=0; 	ALU_oper=0;
		out_wre=0;		out_rde=0;
		x_rde=0;		x_wre=0;
		bus_out=0;		addr_rde=1;
		nxt_instr=instr;

		nxt_fetch_state = FETCH_SETADDR; nxt_exec_state = DECODE;	nxt_state = state;
		case (state) 
			EXEC: begin
				case (exec_state) 
					DECODE: begin
						nxt_instr = RAM_data_in; 
						case (opcode) 
							ADDI: begin
								// sign extention
								if (immI[11]) bus_out = {{20{1'b1}}, immI};
								else bus_out = {20'd0, immI};
								out_wre = 1;
								
								x_rde[rs1[3:0]] = 1;

								ALU_tempwre = 1;	

								nxt_exec_state = ADDI_SETALU;
							end
							JALR: begin
								if (immI[11]) bus_out = {{20{1'b1}}, immI};
								else bus_out = {20'd0, immI};
								out_wre = 1;

								x_rde[rs1[3:0]] = 1;

								ALU_tempwre = 1;

								nxt_exec_state = JALR_SETRD;
							end
							LUI: begin
								bus_out = {immU, 12'd0};

								out_wre = 1;

								nxt_exec_state = LUI_SETRD;
							end
							LW: begin
								if (immI[11]) bus_out = {{20{1'b1}}, immI};
								else bus_out = {20'd0, immI};
								x_rde[rs1[3:0]] = 1;

								out_wre = 1;
								ALU_tempwre = 1;
								

								nxt_exec_state = LW_SETALU;
							end
							ADD_R: begin
								x_rde[rs1[3:0]] = 1;

								ALU_tempwre = 1;

								nxt_exec_state = ADD_SETALU;
							end
							SW: begin
								if (immS[11]) bus_out = {{20{1'b1}}, immS};
								else bus_out = {20'd0, immS};
								x_rde[rs1[3:0]] = 1;

								out_wre = 1;
								ALU_tempwre = 1;

								nxt_exec_state = SW_SETALU;
							end
							default: begin
								nxt_state = FETCH;
								nxt_exec_state = DECODE;
							end
						endcase	
					end
					ADDI_SETALU: begin
						out_rde = 1;
						
						ALU_wre = 1;
						ALU_oper = ADD;

						nxt_exec_state = ADDI_SETRD;
					end
					ADDI_SETRD: begin
						ALU_rde = 1;
						
						x_wre[rd[3:0]] = 1;

						nxt_exec_state = DECODE;
						nxt_state = FETCH;
					end

					JALR_INCPC: begin
						PC_rde = 1;

						ALU_oper = INC;
						ALU_wre = 1;

						nxt_exec_state = JALR_SETRD;
					end

					JALR_SETRD: begin
						// ALU_rde = 1;
						PC_rde = 1;

						x_wre[rd[3:0]] = 1;

						nxt_exec_state = JALR_SETALU;
					end

					JALR_SETALU: begin
						out_rde = 1;						

						ALU_wre = 1;
						ALU_oper = ADD_EVEN;

						nxt_exec_state = JALR_SETPC;
					end
					JALR_SETPC: begin
						ALU_rde = 1;

						PC_wre = 1;

						nxt_exec_state = DECODE;
						nxt_state = FETCH;
					end

					LUI_SETRD: begin

						out_rde = 1;	

						x_wre[rd[3:0]] = 1;

						nxt_exec_state = DECODE;
						nxt_state = FETCH;
					end

					LW_SETALU: begin
						out_rde = 1;

						ALU_wre = 1;
						ALU_oper = ADD;

						nxt_exec_state = LW_SETADDR;
					end

					LW_SETADDR: begin
						ALU_rde = 1;

						addr_wre = 1;

						nxt_exec_state = LW_MEMREAD;
					end

					LW_MEMREAD: begin
						RAM_rde = 1;

						nxt_exec_state = LW_SETCTRLOUT;
					end

					LW_SETCTRLOUT: begin

						case (funct3) 
							3'b100: bus_out = {24'd0, RAM_data_in[7:0]}; // lbu
							default: bus_out = RAM_data_in;  // lw
						endcase
												
						out_wre = 1;

						nxt_exec_state = LW_SETRD;
					end

					LW_SETRD: begin
						out_rde = 1;

						x_wre[rd[3:0]] = 1;

						nxt_exec_state = DECODE;
						nxt_state = FETCH;
					end

					ADD_SETALU: begin
						x_rde[rs2[3:0]] = 1;

						ALU_wre = 1;
						ALU_oper = ADD;

						nxt_exec_state = ADD_SETRD;
					end

					ADD_SETRD: begin
						ALU_rde = 1;

						x_wre[rd[3:0]] = 1;

						nxt_exec_state = DECODE;
						nxt_state = FETCH;
					end

					SW_SETALU: begin
						out_rde = 1;

						ALU_wre = 1;
						ALU_oper = ADD;

						nxt_exec_state = SW_SETADDR;
					end

					SW_SETADDR: begin
						ALU_rde = 1;
						
						addr_wre = 1;

						nxt_exec_state = SW_SETRAMREG;
					end
					SW_SETRAMREG: begin
						x_rde[rs2[3:0]] = 1;

						RAM_datawre = 1;

						nxt_exec_state = SW_SETRAM;
					end

					SW_SETRAM: begin
						RAM_wre = 1;

						case (funct3) 
							3'b000: RAM_isbyte = 1;
							default: RAM_isbyte = 0;
						endcase

						nxt_exec_state = DECODE;
						nxt_state = FETCH;
					end

					default: begin
						nxt_exec_state = DECODE;
						nxt_state = FETCH;
					end

				endcase
			end
			FETCH: begin
				case (fetch_state) 
					FETCH_SETADDR: begin

						PC_rde = 1;

						addr_wre = 1;
						ALU_wre = 1;
						ALU_oper = INC;

						nxt_fetch_state = FETCH_SETPC;
					end
					FETCH_SETPC: begin

						ALU_rde = 1;

						PC_wre = 1;
						RAM_rde = 1;   // rde is clock triggered so it will output at next clock cycle

						nxt_state = EXEC;
						nxt_fetch_state = FETCH_SETADDR;
						nxt_exec_state = DECODE;
					end
					default: nxt_fetch_state = FETCH_SETADDR;
				endcase	
			end
			default: nxt_state = FETCH; 
		endcase
	end		

	always @(posedge clk, posedge reset) begin
		if (reset) begin
			state <= FETCH;
			fetch_state <= FETCH_SETADDR;
			exec_state <= DECODE;
			instr <= 0;
		end
		else begin
			fetch_state <= nxt_fetch_state;
			state <= nxt_state;
			exec_state <= nxt_exec_state;
			instr <= nxt_instr;
		end
	end

endmodule
