`include "defines.v"

module exe_type_b_j(
    input wire rst_i,
    input wire[`DATA_WIDTH-1:0] inst_i,
    input wire[`ADDR_WIDTH-1:0] inst_addr_i,
    
    input wire[`DATA_WIDTH-1:0] op1_i,
    input wire[`DATA_WIDTH-1:0] op2_i,
    output reg[`ADDR_WIDTH-1:0] jump_addr_o,
    output reg jump_enable_o
);

    wire[6:0] opcode = inst_i[6:0];
    wire[2:0] funct3 = inst_i[14:12];
    wire op1_eq_op2;
    wire op1_ge_op2_signed;
    wire op1_ge_op2_unsigned;
    assign op1_eq_op2 = (op1_i == op2_i);
    assign op1_ge_op2_signed = ($signed(op1_i) >= $signed(op2_i));
    assign op1_ge_op2_unsigned = (op1_i >= op2_i);  

    wire[`DATA_WIDTH-1:0] pc;
    assign pc = inst_addr_i;  
    wire[`DATA_WIDTH-1:0] b_imm;
    assign b_imm = {{20{inst_i[31]}}, inst_i[7], inst_i[30:25], inst_i[11:8], 1'b0};

    always @(*) begin
        case(opcode) 
        `INST_TYPE_B: begin
            case(funct3)
            `INST_BNE:begin
                jump_addr_o = pc + b_imm;
                jump_enable_o = (~op1_eq_op2);
            end
            `INST_BEQ:begin
                jump_addr_o = pc + b_imm;
                jump_enable_o = (op1_eq_op2);
            end
            `INST_BLT:begin
                jump_addr_o = pc + b_imm;
                jump_enable_o = (~op1_ge_op2_signed);
            end
            `INST_BGE:begin
                jump_addr_o = pc + b_imm;
                jump_enable_o = (op1_ge_op2_signed);
            end
            `INST_BLTU:begin
                jump_addr_o = pc + b_imm;
                jump_enable_o = (~op1_ge_op2_unsigned);
            end
            `INST_BGEU:begin
                jump_addr_o = pc + b_imm;
                jump_enable_o = (op1_ge_op2_unsigned);
            end
            default:begin
                jump_addr_o = `ZERO;
                jump_enable_o = 1'b0;
            end
            endcase
        end
        default:
        begin
            jump_addr_o = `ZERO;
            jump_enable_o = 1'b0;
        end
     endcase
    end //always
endmodule
