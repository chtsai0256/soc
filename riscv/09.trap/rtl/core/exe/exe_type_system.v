`include "defines.v"

module exe_type_system(
    input wire rst_i,
    
    input wire[`DATA_WIDTH-1:0] op1_i,
    input wire[`RDATA_WIDTH-1:0] inst_i,
    output reg[`RDATA_WIDTH-1:0] reg_wdata_o,
    input wire[`RDATA_WIDTH-1:0] csr_rdata_i,
    output reg[`RDATA_WIDTH-1:0] csr_wdata_o
    
);

    wire[6:0] opcode = inst_i[6:0];
    wire[2:0] funct3 = inst_i[14:12];
 
    wire isType_system;
    assign isType_system = (opcode == `INST_TYPE_SYSTEM);
    
    always @(*) begin
        if (rst_i == 1'b1 || ~isType_system) begin
            reg_wdata_o = `ZERO;
            csr_wdata_o = `ZERO;
        end else begin
                case(funct3)
                    `INST_CSRRW, `INST_CSRRWI: begin
                        reg_wdata_o = csr_rdata_i;
                        csr_wdata_o = op1_i;
                    end
                    `INST_CSRRS, `INST_CSRRSI: begin
                        reg_wdata_o = csr_rdata_i;
                        csr_wdata_o = csr_rdata_i | op1_i;
                    end
                    `INST_CSRRC, `INST_CSRRCI: begin
                        reg_wdata_o = csr_rdata_i;
                        csr_wdata_o = csr_rdata_i & ~op1_i;
                    end
                    default: begin
                        csr_wdata_o = `ZERO;
                        reg_wdata_o = `ZERO;
                    end//default
                endcase
        end //if
    end //always
endmodule
