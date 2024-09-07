`include "defines.v"

module exe_type_s_l(
    input wire rst_i,
    
    input wire[`DATA_WIDTH-1:0] op1_i,
    input wire[`DATA_WIDTH-1:0] op2_i,
    input wire[`RDATA_WIDTH-1:0] inst_i,
    output reg[`RDATA_WIDTH-1:0] reg_wdata_o,
    output reg reg_we_o,
    output reg[`ADDR_WIDTH-1:0] mem_addr_o,
    output reg[`DATA_WIDTH-1:0] mem_data_o,
    output reg mem_we_o,
    output reg[3:0] mem_op_o    
);

    wire[6:0] opcode = inst_i[6:0];
    wire[2:0] funct3 = inst_i[14:12];
    
    wire[`ADDR_WIDTH-1:0] load_addr_offset;
    wire[`ADDR_WIDTH-1:0] store_addr_offset;
    assign store_addr_offset = {{20{inst_i[31]}}, inst_i[31:25], inst_i[11:7]};
    assign load_addr_offset = {{20{inst_i[31]}}, inst_i[31:20]};

    always @(*) begin
        if (rst_i == 1) begin
                reg_wdata_o = `ZERO;
                reg_we_o = `WRITE_DISABLE;
                mem_addr_o = `ZERO;
                mem_data_o = `ZERO;
                mem_we_o = `WRITE_DISABLE;
                mem_op_o = `MEM_NOP;    
        end else begin
            case (opcode)
            `INST_TYPE_S:begin
                reg_wdata_o = `ZERO;
                reg_we_o = `WRITE_DISABLE;
                mem_addr_o = $signed(op1_i)+$signed(store_addr_offset);
                mem_data_o = op2_i;
                mem_we_o = `WRITE_ENABLE;
                case (funct3)
                `INST_SB:begin
                    mem_op_o = `SB;
                end
                `INST_SH:begin
                    mem_op_o = `SH;
                end
                `INST_SW:begin
                    mem_op_o = `SW;
                end
                default:begin
                    mem_op_o = `MEM_NOP;
                end
                endcase
            end
            `INST_TYPE_L:begin
                reg_wdata_o = `ZERO;
                reg_we_o = `WRITE_ENABLE;
                mem_addr_o = $signed(op1_i)+$signed(load_addr_offset);
                mem_data_o = `ZERO;
                mem_we_o = `WRITE_DISABLE;
                case (funct3)
                `INST_LB:begin
                    mem_op_o = `LB;
                end
                `INST_LH:begin
                    mem_op_o = `LH;
                end
                `INST_LW:begin
                    mem_op_o = `LW;
                end
                `INST_LBU:begin
                    mem_op_o = `LBU;
                end
                `INST_LHU:begin
                    mem_op_o = `LHU;
                end
                default:begin
                    mem_op_o = `MEM_NOP;
                end
                endcase
            end
            default:begin
                reg_wdata_o = `ZERO;
                reg_we_o = `WRITE_DISABLE;
                mem_addr_o = `ZERO;
                mem_data_o = `ZERO;
                mem_we_o = `WRITE_DISABLE;
                mem_op_o = `MEM_NOP;    
            end
            endcase
        end //if
    end //always
endmodule
