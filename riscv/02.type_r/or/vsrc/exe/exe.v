`include "defines.v"

module exe(
    input wire rst_i,
    
    //from id_exe
    input wire[`DATA_WIDTH-1:0] op1_i,
    input wire[`DATA_WIDTH-1:0] op2_i,
    input wire reg_we_i,
    input wire[`RADDR_WIDTH-1:0] reg_waddr_i,
    input wire[`RDATA_WIDTH-1:0] inst_i,

    //to exe_mem
    output reg[`RADDR_WIDTH-1:0] reg_waddr_o,
    output reg reg_we_o,
    output reg[`RDATA_WIDTH-1:0] reg_wdata_o

);

    wire[6:0] opcode = inst_i[6:0];
    wire[2:0] funct3 = inst_i[14:12];
    wire[6:0] funct7 = inst_i[31:25];
        

    wire i_reg_we_o;
    wire[`RDATA_WIDTH-1:0] i_reg_wdata_o;
    exe_type_i exe_type_i0(
        .rst_i(rst_i),
        .inst_i(inst_i),
        .op1_i(op1_i),
        .op2_i(op2_i),
        .reg_wdata_o(i_reg_wdata_o),
        .reg_we_o(i_reg_we_o)
     );

    wire r_reg_we_o;
    wire[`RDATA_WIDTH-1:0] r_reg_wdata_o;
    exe_type_r exe_type_r0(
        .rst_i(rst_i),
        .inst_i(inst_i),
        .op1_i(op1_i),
        .op2_i(op2_i),
        .reg_wdata_o(r_reg_wdata_o),
        .reg_we_o(r_reg_we_o)
     );


    always @(*) begin
        if (rst_i == 1'b1) begin
            reg_waddr_o = `ZERO_REG;
            reg_wdata_o = `ZERO;
            reg_we_o = `WRITE_DISABLE;
        end else begin
            case (opcode)
                `INST_TYPE_I:begin
                    reg_waddr_o = reg_waddr_i;
                    reg_wdata_o = i_reg_wdata_o;
                    reg_we_o = i_reg_we_o;
		        end
                `INST_TYPE_R_M:begin //Type_r and M
                    reg_waddr_o = reg_waddr_i;
                    reg_wdata_o = r_reg_wdata_o;
                    reg_we_o = r_reg_we_o;
		        end
                default:begin
                    reg_waddr_o = `ZERO_REG;
                    reg_wdata_o = `ZERO;
                    reg_we_o = `WRITE_DISABLE;
                end 
            endcase
        end //if
    end //always

endmodule
