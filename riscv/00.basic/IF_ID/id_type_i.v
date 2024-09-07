`include "defines.v"

module id_type_i(
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
    wire[2:0] funct3 = inst_i[14:12];
    wire[4:0] rd = inst_i[11:7];
    wire[4:0] rs1 = inst_i[19:15];
    wire[4:0] rs2 = inst_i[24:20];

    always @(*) begin
        case (funct3)
	    `INST_ORI: begin
	        reg_we_o = `WRITE_ENABLE;
            reg_waddr_o = rd;
	        reg1_raddr_o = rs1;
	        reg2_raddr_o = `ZERO_REG;
            reg1_re_o = `READ_ENABLE;
            reg2_re_o = `READ_DISABLE;
	        op1_o = reg1_rdata_i;
	        op2_o = {{20{inst_i[31]}}, inst_i[31:20]};
            end
        default:begin
                reg1_raddr_o = `ZERO_REG;
                reg2_raddr_o = `ZERO_REG;
                reg1_re_o = `READ_DISABLE;
                reg2_re_o = `READ_DISABLE;
                reg_we_o = `WRITE_DISABLE;
                reg_waddr_o = `ZERO_REG;
                op1_o = `ZERO;
                op2_o = `ZERO;
            end//default
        endcase
    end
endmodule
