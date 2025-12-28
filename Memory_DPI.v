module Memory_DPI(
    input clk,
    
    // Instruction Fetch Interface
    input [31:0] instr_addr,
    output reg [31:0] instr,

    // Data Memory Interface
    input [31:0] data_addr,
    input [31:0] data_in,
    input data_wre,
    input is_byte, 
    output [31:0] data_out
);
    import "DPI-C" function int mem_read(input int raddr);
    import "DPI-C" function void mem_write(input int waddr, input int wdata, input byte wmask);

    // 1. Instruction Fetch 

	always @(posedge clk) instr <= mem_read(instr_addr);

    // 2. Data Read
    //assign data_out = mem_read(data_addr);

	always @(posedge clk) data_out = mem_read(data_addr);

    // 3. Data Write Logic
    reg [7:0] wmask;
    reg [31:0] aligned_data; // New signal to hold shifted data

    always @(*) begin
        // Default values
        wmask = 0;
        aligned_data = data_in; 

        if (data_wre) begin
            if (is_byte) begin
                // If writing a byte, enable only the specific byte mask
                // AND shift the data into that byte lane.
                case(data_addr[1:0])
                    2'b00: begin
                        wmask = 8'b0000_0001;
                        aligned_data = data_in;           // Byte 0: No shift
                    end
                    2'b01: begin
                        wmask = 8'b0000_0010;
                        aligned_data = data_in << 8;      // Byte 1: Shift 8 bits
                    end
                    2'b10: begin
                        wmask = 8'b0000_0100;
                        aligned_data = data_in << 16;     // Byte 2: Shift 16 bits
                    end
                    2'b11: begin
                        wmask = 8'b0000_1000;
                        aligned_data = data_in << 24;     // Byte 3: Shift 24 bits
                    end
                endcase
            end else begin
                // If writing a word, enable all bytes and pass data as is
                wmask = 8'b0000_1111;
                aligned_data = data_in;
            end
        end 
    end

    // Perform the write on the clock edge
    always @(posedge clk) begin
        if (data_wre) begin
            // Pass the ALIGNED data to C++
            mem_write(data_addr, aligned_data, wmask);
        end
    end

endmodule
