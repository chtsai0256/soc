`include "defines.v"

module exe_type_m(
    input wire clk_i,
    input wire rst_i,
    
    input wire[`DATA_WIDTH-1:0] op1_i,
    input wire[`DATA_WIDTH-1:0] op2_i,
    input wire[`RDATA_WIDTH-1:0] inst_i,
    //input wire                  flush_i,
    output wire                 stall_o,
    output reg[`RDATA_WIDTH-1:0] reg_wdata_o,
    output reg reg_we_o
);

    wire[6:0] opcode = inst_i[6:0];
    wire[2:0] funct3 = inst_i[14:12];
    wire[6:0] funct7 = inst_i[31:25];
     
    wire isType_m;
    wire isType_m = (opcode == `INST_TYPE_R_M) && (funct7 == 7'b0000001);
    
    reg[`DATA_WIDTH-1:0] a_o, b_o, div_result;
    reg                  is_q_operation, mult_req_o, div_req_o, mult_ready_i, div_ready_i;
    reg[`DATA_WIDTH*2-1:0] mult_result_i;

    mul#(.XLEN(`DATA_WIDTH)) mul0(
        .clk_i(clk_i),
        .rst_i(rst_i),
        .req_i(mult_req_o),
        .a_i(a_o),
        .b_i(b_o),
        .ready_o(mult_ready_i),
        .result_o(mult_result_i)
    );

    div#(.XLEN(`DATA_WIDTH)) div0(
        .clk_i(clk_i),
        .rst_i(rst_i),
        .req_i(div_req_o),
        .a_i(a_o),
        .b_i(b_o),
        .ready_o(div_ready_i),
        .is_q_i(is_q_operation), 
        .result_o(div_result)
    );

    assign stall_o = (mult_req_o & ~mult_ready_i)|(div_req_o & ~div_ready_i);    
    reg[`DATA_WIDTH-1:0] result;

    wire is_a_neg = op1_i[`DATA_WIDTH-1];
    wire is_b_neg = op2_i[`DATA_WIDTH-1];
    wire is_b_zero = ~(|op2_i);
    wire signed_adjust = is_a_neg ^ is_b_neg;
    reg[`DATA_WIDTH*2-1:0] invert_result;
    assign invert_result = (mult_req_o)? ~mult_result_i+1 : 64'b0;

    assign reg_wdata_o = {32{mult_ready_i | div_ready_i}} & result;
    always @(*) begin
        if (rst_i | ~isType_m) begin
            reg_wdata_o = `ZERO;
            reg_we_o = `WRITE_DISABLE;
            a_o = `ZERO;
            b_o = `ZERO;
            mult_req_o = 1'b0;
            div_req_o = 1'b0;
            result = 32'b0;
            is_q_operation = 1'b0;
        end else begin
            reg_we_o = `WRITE_ENABLE;
            a_o = `ZERO;
            b_o = `ZERO;
            mult_req_o = 1'b0;
            div_req_o = 1'b0;
            result = 32'b0;
            is_q_operation = 1'b0;
            case(funct3)
                    `INST_MUL: begin
                        a_o = op1_i;
                        b_o = op2_i;
                        mult_req_o = 1'b1;
                        result =  mult_result_i[`DATA_WIDTH-1:0];
                    end//ORI
                    `INST_MULH: begin
                        a_o = (is_a_neg)? ~op1_i+1 : op1_i;
                        b_o = (is_b_neg)? ~op2_i+1 : op2_i;
                        mult_req_o = 1'b1;
                        result = (signed_adjust)? invert_result[`DATA_WIDTH*2-1:`DATA_WIDTH] : mult_result_i[`DATA_WIDTH*2-1:`DATA_WIDTH];
                    end//ORI
                    `INST_MULHU: begin
                        a_o = op1_i;
                        b_o = op2_i;
                        mult_req_o = 1'b1;
                        result = mult_result_i[`DATA_WIDTH*2-1:`DATA_WIDTH];
                    end//ORI
                    `INST_MULHSU: begin
                        a_o = (is_a_neg)? -op1_i : op1_i;
                        b_o = op2_i;
                        mult_req_o = 1'b1;
                        result = (is_a_neg)? invert_result[`DATA_WIDTH*2-1:`DATA_WIDTH] : mult_result_i[`DATA_WIDTH*2-1:`DATA_WIDTH];
                    end
                    `INST_DIV: begin
                        a_o = (is_a_neg)? -op1_i : op1_i;
                        b_o = (is_b_neg)? -op2_i : op2_i;
                        div_req_o = 1'b1;
                        result = (is_b_zero)? div_result: (signed_adjust)? -div_result : div_result;
                        is_q_operation = 1'b1;
                    end
                    `INST_DIVU: begin
                        a_o = op1_i;
                        b_o = op2_i;
                        div_req_o = 1'b1;
                        result = div_result;
                        is_q_operation = 1'b1;
                    end
                    `INST_REMU: begin
                        a_o = op1_i;
                        b_o = op2_i;
                        div_req_o = 1'b1;
                        result = div_result;
                    end
                    `INST_REM: begin
                        a_o = (is_a_neg)? -op1_i : op1_i;
                        b_o = (is_b_neg)? -op2_i : op2_i;
                        div_req_o = 1'b1;
                        result = (is_b_zero)? div_result: (is_a_neg)? -div_result : div_result;
                    end
                    default: begin
                    end//default
            endcase
        end 
    end //always
endmodule
