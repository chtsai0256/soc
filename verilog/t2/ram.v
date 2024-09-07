  
module ram #(
  parameter XLEN = 32,  
  parameter MEM_SIZE    = 1024
) 
(
    input wire clk_i,
    input wire ce_i,

    input wire we_i,
    input wire[XLEN-1:0] addr_i,
    input reg[XLEN-1:0] data_i,
    output reg[XLEN-1:0] data_o
);
  localparam MADDR_WIDTH = MEM_SIZE>1? clog2(MEM_SIZE) : 1;

  reg[7:0] mem[MEM_SIZE-1:0];
  wire[MADDR_WIDTH-1:0] addr4;
  assign addr4 = {addr_i[MADDR_WIDTH-1:2],2'b0};
    
    //write
	always @ (posedge clk_i) begin
    if(ce_i && we_i ) begin
      mem[addr4] <= data_i[31:24];
      mem[addr4+1] <= data_i[23:16];
      mem[addr4+2] <= data_i[15:8];
      mem[addr4+3] <= data_i[7:0];
    end else begin
    end
	end

  always @(*)
    if (ce_i == 1'b0) begin
      data_o = 32'h0;
    end else begin
      data_o = {mem[addr4],mem[addr4+1],mem[addr4+2],mem[addr4+3]};
    end//if

  function integer clog2 (input integer n); begin
    n = n - 1;
    for (clog2 = 0; n > 0; clog2 = clog2 + 1)
      n = n >> 1;
  end
  endfunction  

endmodule
