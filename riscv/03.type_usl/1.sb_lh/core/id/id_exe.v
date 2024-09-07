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

    //to id
    output reg inst_is_load_o,
    output reg[`RADDR_WIDTH-1:0] rd_o,

    //from ctrl
    input wire[5:0] stall_i,


    //to exe
    output reg[`RDATA_WIDTH-1:0] op1_o,
    output reg[`RDATA_WIDTH-1:0] op2_o,
    output reg reg_we_o,
    output reg[`RADDR_WIDTH-1:0] reg_waddr_o,
    output reg[`DATA_WIDTH-1:0] inst_o
);
    wire[6:0] opcode = inst_i[6:0];
    

    always @(posedge clk_i) begin
        if (rst_i == 1) begin
            inst_o   <=  `NOP;
            op1_o     <= `ZERO;
            op2_o     <= `ZERO;
            reg_we_o  <= `WRITE_DISABLE;
            reg_waddr_o <= `ZERO_REG;
            inst_is_load_o <= 1'b0;
            rd_o <= `ZERO_REG;
        end else if(stall_i[2] == `STOP && stall_i[3] == `STOP) begin
            inst_o   <=  inst_o;
            op1_o     <= op1_o;
            op2_o     <= op2_o;
            reg_we_o  <= reg_we_o;
            reg_waddr_o <= reg_waddr_o;
            inst_is_load_o <= inst_is_load_o;
            rd_o <= rd_o;
        end else if(stall_i[2] == `STOP && stall_i[3] == `NOSTOP) begin
            inst_o   <=  `NOP;
            op1_o     <= `ZERO;
            op2_o     <= `ZERO;
            reg_we_o  <= `WRITE_DISABLE;
            reg_waddr_o <= `ZERO_REG;
            inst_is_load_o <= 1'b0;
            rd_o <= `ZERO_REG;
        end else begin
            inst_o <= inst_i;
            op1_o <= op1_i;
            op2_o <= op2_i;
            reg_we_o <= reg_we_i;
            reg_waddr_o <= reg_waddr_i;
            inst_is_load_o <= (opcode == `INST_TYPE_L);
            rd_o <= inst_i[11:7];
        end//if
    end //always
endmodule

