`include "defines.v"

module id_type_r(
    input wire[`DATA_WIDTH-1:0] inst_i,
   
    input wire[`RDATA_WIDTH-1:0] reg1_rdata_i,
    input wire[`RDATA_WIDTH-1:0] reg2_rdata_i,
       
    output reg[`RADDR_WIDTH-1:0] reg1_raddr_o,
    output reg[`RADDR_WIDTH-1:0] reg2_raddr_o,
    output reg reg1_re_o,
    output reg reg2_re_o,    
    output reg[`RDATA_WIDTH-1:0] op1_o,
    output reg[`RDATA_WIDTH-1:0] op2_o,
    output reg reg_we_o,
    output reg[`RADDR_WIDTH-1:0] reg_waddr_o
);
    wire[6:0] opcode = inst_i[6:0];
    wire[2:0] funct3 = inst_i[14:12];
    wire[6:0] funct7 = inst_i[31:25];
    wire[4:0] shamt = inst_i[24:20]; 
    wire[4:0] rd = inst_i[11:7];
    wire[4:0] rs1 = inst_i[19:15];
    wire[4:0] rs2 = inst_i[24:20];

    wire isType_r;
    assign isType_r = (opcode == `INST_TYPE_R_M) && ((funct7 == 7'b0000000)||(funct7==7'b0100000));
    
    always @(*) begin
        if (isType_r) begin
            reg_we_o = `WRITE_ENABLE;
            reg_waddr_o = rd;
            reg1_raddr_o = rs1;
            reg2_raddr_o = rs2;
            reg1_re_o = `READ_ENABLE;
            reg2_re_o = `READ_ENABLE;
            op1_o = reg1_rdata_i;
            op2_o = reg2_rdata_i;
        end else begin
            reg_we_o = `WRITE_DISABLE;
            reg_waddr_o = `ZERO_REG;
            reg1_raddr_o = `ZERO_REG;
            reg2_raddr_o = `ZERO_REG;
            reg1_re_o = `READ_DISABLE;
            reg2_re_o = `READ_DISABLE;
            op1_o = `ZERO_REG;
            op2_o = `ZERO_REG;
        end
    end
endmodule
