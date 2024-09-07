`include "defines.v"

module id_exe(
    input wire rst_i,
    input wire clk_i,
    
    // from id
    input wire[`RDATA_WIDTH-1:0] op1_i,
    input wire[`RDATA_WIDTH-1:0] op2_i,
    input wire reg_we_i,
    input wire[`RADDR_WIDTH-1:0] reg_waddr_i,
    input wire[`DATA_WIDTH-1:0] inst_i,
    
    //to exe
    output reg[`RDATA_WIDTH-1:0] op1_o,
    output reg[`RDATA_WIDTH-1:0] op2_o,
    output reg reg_we_o,
    output reg[`RADDR_WIDTH-1:0] reg_waddr_o,
    output reg[`DATA_WIDTH-1:0] inst_o
);

    always @(posedge clk_i) begin
        if (rst_i == 1) begin
            inst_o   <=  `NOP;
            op1_o     <= `ZERO;
            op2_o     <= `ZERO;
            reg_we_o  <= `WRITE_DISABLE;
            reg_waddr_o <= `ZERO_REG;
        end else begin
            inst_o <= inst_i;
            op1_o <= op1_i;
            op2_o <= op2_i;
            reg_we_o <= reg_we_i;
            reg_waddr_o <= reg_waddr_i;
        end//if
    end //always
endmodule

