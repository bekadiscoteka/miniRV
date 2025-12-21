// control unit for sCPU

module control_unit(
	output reg			PC_wre,			PC_rde,
						x0_wre, 		x0_rde,
						addr_wre,		addr_rde,
						RAM_wre,		RAM_rde,
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

	localparam [2:0]	FETCH=0, EXEC=1,
						FETCH_SETADDR=0, FETCH_SETPC=1,
						DECODE=0, ADDI_SETALU=1, ADDI_SETRD=2, JALR_INCPC=3, JALR_SETRD=4, JALR_SETALU=5, JALR_SETPC=6,
						ADD=0, INC=1, ADD_EVEN=2;

	localparam [6:0] 	ADDI=7'b0010011, JALR=7'b1100111;
						

	reg [2:0] state, exec_state, fetch_state;
	reg [2:0] nxt_state, nxt_exec_state, nxt_fetch_state;
	reg [31:0] nxt_instr, instr;
				
	wire [6:0] opcode	= RAM_data_in[6:0];
	wire [4:0] rd		= RAM_data_in[11:7];
	wire [2:0] funct3	= RAM_data_in[14:12];
	wire [4:0] rs1		= RAM_data_in[19:15];
	wire [11:0] immI	= RAM_data_in[31:20];

	always @* begin
		
		PC_wre=0;		PC_rde=0;
				 		x0_rde=0;
		addr_wre=0;		
		RAM_wre=0;		RAM_rde=0;
		ALU_wre=0;		ALU_rde=0;
		ALU_tempwre=0; 	ALU_oper=0;
		out_wre=0;		out_rde=0;
		x_rde=0;		x_wre=0;
		bus_out=0;		

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
								
								x_rde[rs1] = 1;

								ALU_tempwre = 1;	

								nxt_exec_state = ADDI_SETALU;
							end
							JALR: begin
								if (immI[11]) bus_out = {{20{1'b1}}, immI};
								else bus_out = {20'd0, immI};
								out_wre = 1;

								x_rde[rs1] = 1;

								ALU_tempwre = 1;

								nxt_exec_state = JALR_INCPC;
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

						x_wre[rd] = 1;

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
						ALU_rde = 1;

						x_wre[rd] = 1;

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
			x0_wre <= 0;
			addr_rde <= 1;
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
