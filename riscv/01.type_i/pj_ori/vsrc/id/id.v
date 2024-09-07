`include "defines.v"

module id(
    input wire rst_i,
    
    //from if_id
    input wire[`ADDR_WIDTH-1:0] inst_addr_i,
    input wire[`DATA_WIDTH-1:0] inst_i,
    
    //from regfile
    input wire[`RDATA_WIDTH-1:0] reg1_rdata_i,
    input wire[`RDATA_WIDTH-1:0] reg2_rdata_i,
       
    // to regfile
    output reg[`RADDR_WIDTH-1:0] reg1_raddr_o,
    output reg[`RADDR_WIDTH-1:0] reg2_raddr_o,
    output reg reg1_re_o,
    output reg reg2_re_o,
    
    //to id_exe
    output reg[`DATA_WIDTH-1:0] inst_o,
    output reg[`RDATA_WIDTH-1:0] op1_o,
    output reg[`RDATA_WIDTH-1:0] op2_o,
    output reg reg_we_o,
    output reg[`RADDR_WIDTH-1:0] reg_waddr_o
    );
    
    reg[`RDATA_WIDTH-1:0] op1_o_final;
    reg[`RDATA_WIDTH-1:0] op2_o_final;


    wire[6:0] opcode = inst_i[6:0];
    wire[`RADDR_WIDTH-1:0] i_reg1_raddr_o;
    wire[`RADDR_WIDTH-1:0] i_reg2_raddr_o;
    wire i_reg1_re_o;
    wire i_reg2_re_o;
    wire[`RDATA_WIDTH-1:0] i_op1_o;
    wire[`RDATA_WIDTH-1:0] i_op2_o;
    wire i_reg_we_o;
    wire[`RADDR_WIDTH-1:0] i_reg_waddr_o;

    id_type_i inst_type_i(
        .inst_i(inst_i),
        .reg1_rdata_i(reg1_rdata_i),
        .reg2_rdata_i(reg2_rdata_i),
        .reg1_raddr_o(i_reg1_raddr_o),
        .reg2_raddr_o(i_reg2_raddr_o),
        .reg1_re_o(i_reg1_re_o),
        .reg2_re_o(i_reg2_re_o),
        .op1_o(i_op1_o),
        .op2_o(i_op2_o),
        .reg_we_o(i_reg_we_o),
        .reg_waddr_o(i_reg_waddr_o)
     );
    
    always @(*) begin
        if (rst_i == 1) begin
            inst_o = `NOP;
            reg1_raddr_o = `ZERO_REG;
            reg2_raddr_o = `ZERO_REG;
            reg1_re_o = `READ_DISABLE;
            reg2_re_o = `READ_DISABLE;
            reg_we_o = `WRITE_DISABLE;
            reg_waddr_o = `ZERO_REG;
            op1_o_final = `ZERO;
            op2_o_final = `ZERO;
        end else begin
            case (opcode)
                `INST_TYPE_I:begin
                    inst_o = inst_i;
                    reg1_raddr_o = i_reg1_raddr_o;
                    reg2_raddr_o = i_reg2_raddr_o;
                    reg1_re_o = i_reg1_re_o;
                    reg2_re_o = i_reg2_re_o;
                    op1_o_final = i_op1_o;
                    op2_o_final = i_op2_o;
                    reg_we_o = i_reg_we_o;
                    reg_waddr_o = i_reg_waddr_o;
                end
                default:begin
                    inst_o = `NOP;
                    reg1_raddr_o = `ZERO_REG;
                    reg2_raddr_o = `ZERO_REG;
                    reg1_re_o = `READ_DISABLE;
                    reg2_re_o = `READ_DISABLE;
                    reg_we_o = `WRITE_DISABLE;
                    reg_waddr_o = `ZERO_REG;
                    op1_o_final = `ZERO;
                    op2_o_final = `ZERO;
                end//default
            endcase
        end//if
    end//always

 	//determine op1_o
	always @(*) begin
    	op1_o = op1_o_final;
	end//always

	//determine op2_o
	always @(*) begin
		op2_o = op2_o_final;
	end//always
endmodule
