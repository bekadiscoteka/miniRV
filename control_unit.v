// control unit for sCPU
module control_unit(
	output reg	reg0_wre,	reg0_rde,

			reg1_wre, 	reg1_rde,

			reg2_wre, 	reg2_rde,

			reg3_wre, 	reg3_rde,
				
			pc_wre,		pc_rde,

			mem_wre, 	//mem_rde,
					 	ROM_rde,
		
			ALU_wre,	ALU_rde,
			ALU_tempwre, ALU_tempinc,
			
	output reg	[7:0] data_out,

	input [7:0] instr,
	input 		clk, 
				reset,
				ALU_flag	
			
);
	localparam [2:0] 	EXEC1 =1,
						EXEC2 =2,
						EXEC3 =3,
						EXEC4 =4,
						EXEC5 =5,
						LI =2,
						ADD =0,
						BNER0 =3,
						EXEC = 1,
						FETCH = 2,
						FETCH1 =1,
						FETCH2 =2,
						FETCH3 =3;

	reg [2:0] state, exec_state, fetch_state;

	always @(posedge clk, posedge reset) begin
		if (reset) begin
			state <= FETCH;
			exec_state <= EXEC1;
			fetch_state <= FETCH1;
			pc_wre <= 0; pc_rde <= 0;
			mem_wre	<= 0; mem_wre <= 0;
			ALU_wre <= 0; ALU_rde <= 0;
			reg0_wre <= 0; reg0_rde <= 0;
			reg1_wre <= 0; reg1_rde <= 0;
			reg2_wre <= 0; reg2_rde <= 0;
			reg3_wre <= 0; reg3_rde <= 0;
			data_out <= 8'bz;
			ROM_rde <= 1;
		end
		case (state) 
			EXEC: 
				case (instr[7:6]) // opcode
					LI: begin		
						case (exec_state) 
							EXEC1: begin
								// reset 
								

								case (instr[5:4])  
									0: begin
										reg0_wre <= 1;
										data_out <= {4'd0, instr[3:0]};
										exec_state <= EXEC2;
									end	
									1: begin
										reg1_wre <= 1;	
										data_out <= {4'd0, instr[3:0]};
										exec_state <= EXEC2;
									end
									2: begin
										reg2_wre <= 1;
										data_out <= {4'd0, instr[3:0]};
										exec_state <= EXEC2;
									end
									3: begin
										reg3_wre <= 1;
										data_out <= {4'd0, instr[3:0]};
										exec_state <= EXEC2;
									end
								endcase
							end
							EXEC2: begin
								reg0_wre <= 0;
								reg1_wre <= 0;
								reg2_wre <= 0;
								reg3_wre <= 0;
								data_out <= 8'bz;	
								
								state <= FETCH;			
								exec_state <= EXEC1;
							end
						endcase	
					end
					ADD: begin
						case (exec_state) 
							EXEC1: begin
								ALU_tempwre <= 1;
								exec_state <= EXEC2;
								case (instr[3:2]) 
									0: reg0_rde <= 1;
									1: reg1_rde <= 1;
									2: reg2_rde <= 1;
									3: reg3_rde <= 1;
								endcase
							end
							EXEC2: begin
								ALU_tempwre <= 0;

								ALU_wre <= 1;
								exec_state <= EXEC3; 
								case (instr[1:0]) 
									0: begin
										reg1_rde <= 0;
										reg2_rde <= 0;
										reg3_rde <= 0;

									   	reg0_rde <= 1;
									end
									1: begin
										reg0_rde <= 0;
										reg2_rde <= 0;
										reg3_rde <= 0;

									   	reg1_rde <= 1;
									end
									2: begin
										reg0_rde <= 0;
										reg1_rde <= 0;
										reg3_rde <= 0;

										reg2_rde <= 1;

									end
									3: begin
										reg0_rde <= 0;
										reg2_rde <= 0;
										reg1_rde <= 0;

										reg3_rde <= 1;
									end
								endcase
							end
							EXEC3: begin
								reg0_rde <= 0;
								reg2_rde <= 0;
								reg1_rde <= 0;
								reg3_rde <= 0;

								ALU_rde <= 1;
								exec_state <= EXEC4;
								case (instr[5:4]) 
									0: reg0_wre <= 1;
									1: reg1_wre <= 1;
									2: reg2_wre <= 1;
									3: reg3_wre <= 1;
								endcase
							end
							EXEC4: begin
								reg0_wre <= 0;
								reg1_wre <= 0;
								reg2_wre <= 0;
								reg3_wre <= 0;	
								ALU_rde <= 0;

								exec_state <= EXEC1;
								state <= FETCH;
							end
						endcase
					end
					BNER0: begin
						case (exec_state)
							EXEC1: begin
								ALU_tempwre <= 1;
								case (instr[1:0]) 
									0: reg0_rde <= 1;
									1: reg1_rde <= 1;
									2: reg2_rde <= 1;
									3: reg3_rde <= 1;
								endcase	
								exec_state <= EXEC2;
							end
							EXEC2: begin
								ALU_tempwre <= 0;
								reg1_rde <= 0;
								reg2_rde <= 0;
								reg3_rde <= 0;

								reg0_rde <= 1;
								ALU_wre <= 1;
								exec_state <= EXEC3;
							end
							EXEC3: begin
								ALU_wre <= 0;
								reg0_rde <= 0;
								exec_state <= EXEC4;

								// wait cycle
							end
							EXEC4: begin
								if (!ALU_flag) begin
									exec_state <= EXEC5;	
									data_out <= {4'b0,instr[5:2]};
									pc_wre <= 1;	
								end			
								else begin
									exec_state <= EXEC1;
									state <= FETCH;
								end
							end
							EXEC5: begin
								data_out <= 8'bz;
								pc_wre <= 0;
								exec_state <= EXEC1;
								state <= FETCH;
							end
						endcase	
					end
				endcase
			FETCH: begin
				case (fetch_state) 
					FETCH1: begin
						pc_rde <= 1;
						mem_wre <= 1;		
						ALU_wre <= 1;
						ALU_tempinc <= 1;
						fetch_state <= FETCH2;
					end	
					FETCH2: begin
						// reset values
						pc_rde <= 0;
						mem_wre <= 0;		
						ALU_wre <= 0;							
						ALU_tempinc <= 0;	
						/////////////////
						
						ALU_rde <= 1;
						pc_wre <= 1;	
						fetch_state <= FETCH3;						
					end
					FETCH3: begin
						// reset previous
						ALU_rde <= 0;
						pc_wre <= 0;

						fetch_state <= FETCH1;
						state <= EXEC;
						exec_state <= EXEC1;
					end
				endcase	
			end
		endcase
	end		
endmodule
