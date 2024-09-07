`include "defines.v"

module exe(
    input wire clk_i,
    input wire rst_i,
    
    //from id_exe
    input wire[`DATA_WIDTH-1:0] op1_i,
    input wire[`DATA_WIDTH-1:0] op2_i,
    input wire reg_we_i,
    input wire[`RADDR_WIDTH-1:0] reg_waddr_i,
    input wire[`RDATA_WIDTH-1:0] inst_i,
    input wire[`ADDR_WIDTH-1:0]  inst_addr_i,

    //to exe_mem
    output reg[`RADDR_WIDTH-1:0] reg_waddr_o,
    output reg reg_we_o,
    output reg[`RDATA_WIDTH-1:0] reg_wdata_o,
    output reg mem_we_o,
    output reg[`ADDR_WIDTH-1:0] mem_addr_o,
    output reg[`DATA_WIDTH-1:0] mem_data_o,
    output reg[3:0] mem_op_o,  //LB,LH,LW,LBU, LHU, SB, SH, SW

    //to pipe_ctrl
    output reg[`ADDR_WIDTH-1:0] jump_addr_o,
    output reg jump_enable_o,
    output reg stallreq_o,

    //csr file
    //to exe_mem , from id_exe
    input wire                          csr_we_i,
    input wire[`CSR_ADDR_WIDTH-1:0]     csr_addr_i,
    output reg                          csr_we_o,
    output reg[`CSR_ADDR_WIDTH-1:0]     csr_waddr_o,
    output reg[`DATA_WIDTH-1:0]         csr_wdata_o,

    // to/from csr_file
    input wire[`DATA_WIDTH-1:0]         csr_rdata_i,
    output reg[`CSR_ADDR_WIDTH-1:0]     csr_raddr_o

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

    wire s_reg_we_o;
    wire[`RDATA_WIDTH-1:0] s_reg_wdata_o;
    wire[`DATA_WIDTH-1:0] s_mem_data_o;
    wire[`ADDR_WIDTH-1:0] s_mem_addr_o;
    wire s_mem_we_o;
    wire[3:0] s_mem_op_o;
    exe_type_s_l exe_type_s_l0(
        .rst_i(rst_i),
        .inst_i(inst_i),
        .op1_i(op1_i),
        .op2_i(op2_i),
        .reg_wdata_o(s_reg_wdata_o),
        .reg_we_o(s_reg_we_o),
        .mem_addr_o(s_mem_addr_o),
        .mem_data_o(s_mem_data_o),
        .mem_we_o(s_mem_we_o),
        .mem_op_o(s_mem_op_o)    
     );

    wire[`ADDR_WIDTH-1:0] b_jump_addr_o;
    wire b_jump_enable_o;
    exe_type_b_j exe_type_b_j0(
        .rst_i(rst_i),
        .inst_i(inst_i),  
        .inst_addr_i(inst_addr_i),//inst_addr_i from id
        .op1_i(op1_i),
        .op2_i(op2_i),
        .jump_addr_o(b_jump_addr_o),
        .jump_enable_o(b_jump_enable_o)
     );


    wire m_reg_we_o, mult_div_stall;
    wire[`DATA_WIDTH-1:0] m_reg_wdata_o;
    exe_type_m exe_type_m0(
        .clk_i(clk_i),
        .rst_i(rst_i),
        .inst_i(inst_i),
        .op1_i(op1_i),
        .op2_i(op2_i),
        .stall_o(mult_div_stall),
        .reg_wdata_o(m_reg_wdata_o),
        .reg_we_o(m_reg_we_o)
     );

    assign  stallreq_o = mult_div_stall;  //只有mult, div指令才需要停止流水线

    //for csr file
    always @(*) begin
        if (rst_i == 1'b1) begin
            csr_we_o = `WRITE_DISABLE;
            csr_waddr_o = {12'b0};
            csr_wdata_o = `ZERO;
            csr_raddr_o = {12'b0};
        end else begin
            csr_we_o = `WRITE_DISABLE;
            csr_waddr_o = {12'b0};
            csr_wdata_o = `ZERO;
            csr_raddr_o = {12'b0};
        end
    end    


    always @(*) begin
        if (rst_i == 1'b1) begin
            reg_waddr_o = `ZERO_REG;
            reg_wdata_o = `ZERO;
            reg_we_o = `WRITE_DISABLE;
            mem_we_o = `WRITE_DISABLE;
            mem_addr_o = `ZERO;
            mem_data_o = `ZERO;
            mem_op_o = `MEM_NOP;
            jump_addr_o =  `ZERO;
            jump_enable_o = 1'b0;
        end else begin
            case (opcode)
                `INST_TYPE_I:begin
                    reg_waddr_o = reg_waddr_i;
                    reg_wdata_o = i_reg_wdata_o;
                    reg_we_o = i_reg_we_o;
                    mem_we_o = `WRITE_DISABLE;
                    mem_addr_o = `ZERO;
                    mem_data_o = `ZERO;
                    mem_op_o = `MEM_NOP;
                    jump_addr_o =  `ZERO;
                    jump_enable_o = 1'b0;
		        end
                `INST_TYPE_R_M:begin //Type_r or M
                    reg_waddr_o = reg_waddr_i;
                    mem_we_o = `WRITE_DISABLE;
                    mem_addr_o = `ZERO;
                    mem_data_o = `ZERO;
                    mem_op_o = `MEM_NOP;
                    jump_addr_o =  `ZERO;
                    jump_enable_o = 1'b0;
                    reg_wdata_o = r_reg_wdata_o | m_reg_wdata_o;
                    reg_we_o = r_reg_we_o | m_reg_we_o;
		        end
                `INST_TYPE_LUI, `INST_TYPE_AUIPC:begin //type u
                    reg_waddr_o = reg_waddr_i;
                    reg_wdata_o = op1_i+op2_i;
                    reg_we_o = reg_we_i;
                    mem_we_o = `WRITE_DISABLE;
                    mem_addr_o = `ZERO;
                    mem_data_o = `ZERO;
                    mem_op_o = `MEM_NOP;
                    jump_addr_o =  `ZERO;
                    jump_enable_o = 1'b0;
                end
                `INST_TYPE_S, `INST_TYPE_L:begin //type store, load
                    reg_waddr_o = reg_waddr_i;
                    reg_wdata_o = s_reg_wdata_o;
                    reg_we_o = s_reg_we_o;
                    mem_we_o = s_mem_we_o;
                    mem_addr_o = s_mem_addr_o;
                    mem_data_o = s_mem_data_o;
                    mem_op_o = s_mem_op_o;
                    jump_addr_o =  `ZERO;
                    jump_enable_o = 1'b0;
                end
                `INST_TYPE_B:begin //type B, j
                    reg_waddr_o = `ZERO_REG;
                    reg_wdata_o = `ZERO;
                    reg_we_o = `WRITE_DISABLE;
                    mem_we_o = `WRITE_DISABLE;
                    mem_addr_o = `ZERO;
                    mem_data_o = `ZERO;
                    mem_op_o = `MEM_NOP;
                    jump_addr_o =  b_jump_addr_o;
                    jump_enable_o = b_jump_enable_o;
                end
                `INST_TYPE_JAL:begin
                    reg_waddr_o = reg_waddr_i;
                    reg_wdata_o = inst_addr_i+4;
                    reg_we_o = `WRITE_ENABLE;
                    mem_we_o = `WRITE_DISABLE;
                    mem_addr_o = `ZERO;
                    mem_data_o = `ZERO;
                    mem_op_o = `MEM_NOP;
                    jump_addr_o =  b_jump_addr_o;
                    jump_enable_o = b_jump_enable_o;
                end
                `INST_TYPE_JALR:begin
                    reg_waddr_o = reg_waddr_i;
                    reg_wdata_o = inst_addr_i+4; 
                    reg_we_o = `WRITE_ENABLE;
                    mem_we_o = `WRITE_DISABLE;
                    mem_addr_o = `ZERO;
                    mem_data_o = `ZERO;
                    mem_op_o = `MEM_NOP;
                    jump_addr_o =  (b_jump_addr_o + op1_i) & {{31{1'b1}},1'b0};
                    jump_enable_o = b_jump_enable_o;
                end
                default:begin
                    reg_waddr_o = `ZERO_REG;
                    reg_wdata_o = `ZERO;
                    reg_we_o = `WRITE_DISABLE;
                    mem_we_o = `WRITE_DISABLE;
                    mem_addr_o = `ZERO;
                    mem_data_o = `ZERO;
                    mem_op_o = `MEM_NOP;
                    jump_addr_o =  `ZERO;
                    jump_enable_o = 1'b0;
                end 
            endcase
        end //if
    end //always

endmodule
