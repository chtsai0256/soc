`include "defines.v"

module inst_fetch    
    (
        input wire rst_i,
        input wire clk_i,
        output reg[`DATA_WIDTH-1:0] inst_o
    );

    wire[`ADDR_WIDTH-1:0] pc_wire;
    wire ce_wire;
    
    pc_reg pc_reg0(
        .rst_i(rst_i),
        .clk_i(clk_i),
        .pc_o(pc_wire),
        .ce_o(ce_wire)
    );
    
    rom rom0(
        .addr_i(pc_wire),
        .clk_i(clk_i),
        .ce_i(ce_wire),
        .inst_o(inst_o)
    );
endmodule