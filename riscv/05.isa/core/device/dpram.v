`include "defines.v"

module dpram #(
  parameter RAM_SIZE        = 1,
  parameter RAM_ADDR_WIDTH  = 1
  )(
    // data port
	input wire				      clk_i,
    input wire                    ce_i,
	input wire[`ADDR_WIDTH-1:0]	  addr_i,
	input wire					  we_i,	
	input wire[`DATA_WIDTH-1:0]	  data_i,
	output reg[`DATA_WIDTH-1:0]	  data_o,
	
	// instrution port
    input  wire                    inst_ce_i,
    input  wire[`ADDR_WIDTH-1:0]   pc_i,
    output reg[`DATA_WIDTH-1:0]    inst_o	
);

    reg[7:0]  mem[0:RAM_SIZE-1];
    wire[RAM_ADDR_WIDTH-1:0] addr4;
    assign addr4 = {addr_i[RAM_ADDR_WIDTH-1:2],2'b0};    

    wire[RAM_ADDR_WIDTH-1:0] rom_addr4;
    assign rom_addr4 = {pc_i[RAM_ADDR_WIDTH-1:2],2'b0};    


    /*------------------ data port ----------------------*/
	always @ (posedge clk_i) begin
		if( (ce_i == `CHIP_ENABLE) && (we_i == `WRITE_ENABLE) ) begin
            mem[addr4] <= data_i[31:24];
            mem[addr4+1] <= data_i[23:16];
            mem[addr4+2] <= data_i[15:8];
            mem[addr4+3] <= data_i[7:0];
        end
	end
	
	always @ (*) begin
		if (ce_i==`CHIP_ENABLE) begin
		    data_o =  {mem[addr4],mem[addr4+1],mem[addr4+2],mem[addr4+3]};
		end else begin
			data_o = `ZERO;
		end
	end		

    /*------------------ instruction port ----------------------*/
    always @(*)
        if (inst_ce_i == 1'b0) begin
            inst_o = `ZERO;
        end else begin
            inst_o = {mem[rom_addr4],mem[rom_addr4+1],mem[rom_addr4+2],mem[rom_addr4+3]};
        end//if
    
    task readByte;
        /*verilator public*/
        input integer byte_addr;
        output integer val;
        begin
            val = {24'b0,mem[byte_addr[RAM_ADDR_WIDTH-1:0]]};
        end
    endtask    


    task writeByte;
        /*verilator public*/
        input integer byte_addr;
        input [7:0] val;
        begin
            mem[byte_addr[RAM_ADDR_WIDTH-1:0]] = val;
        end
    endtask    


endmodule
