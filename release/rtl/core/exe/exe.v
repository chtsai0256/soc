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
    output reg[`CSR_ADDR_WIDTH-1:0]     csr_raddr_o,

    //for csr data read forward
    //from mem
    input wire                          mem_csr_we_i,
    input wire[`CSR_ADDR_WIDTH-1:0]     mem_csr_waddr_i,
    input wire[`DATA_WIDTH-1:0]         mem_csr_wdata_i,

    //for int div and mult
    output reg[`ADDR_WIDTH-1:0]         inst_addr_o,
    input wire                          flush_int_i,

    //for exception
    input wire[`DATA_WIDTH-1:0]         exception_i,
    output reg[`DATA_WIDTH-1:0]         exception_o

);

    //for interrupt ctrl
    assign inst_addr_o = inst_addr_i;
    assign exception_o = exception_i;
    
    wire[6:0] opcode = inst_i[6:0];
    wire[2:0] funct3 = inst_i[14:12];
    wire[6:0] funct7 = inst_i[31:25];
        

    wire m_reg_we_o, mult_div_stall;
    wire[`DATA_WIDTH-1:0] m_reg_wdata_o;
    exe_type_m exe_type_m0(
        .clk_i(clk_i),
        .rst_i(rst_i),
        .inst_i(inst_i),
        .op1_i(op1_i),
        .op2_i(op2_i),
        .flush_i(flush_int_i),
        .stall_o(mult_div_stall),
        .reg_wdata_o(m_reg_wdata_o),
        .reg_we_o(m_reg_we_o)
     );

    assign  stallreq_o = mult_div_stall;  //只有mult, div指令才需要停止流水线

    assign csr_raddr_o = csr_addr_i; //read csr
    assign csr_waddr_o = csr_addr_i; //write csr
    reg[`DATA_WIDTH-1:0] csr_rdata;
    always @(*) begin
        if (csr_addr_i == mem_csr_waddr_i && mem_csr_we_i==`WRITE_ENABLE) begin
            csr_rdata = mem_csr_wdata_i;
        end else begin
            csr_rdata = csr_rdata_i;
        end
    end

    /*** for Type-I, R ***/
    wire[31:0] sr_shift;
    wire[31:0] sr_shift_mask;
    assign sr_shift = op1_i >> op2_i[4:0];
    assign sr_shift_mask = 32'hffffffff >> op2_i[4:0];
    wire op1_eq_op2;
    assign op1_eq_op2 = (op1_i == op2_i);
    wire op1_ge_op2_signed;
    wire op1_ge_op2_unsigned;
    assign op1_ge_op2_signed = ($signed(op1_i) >= $signed(op2_i));
    assign op1_ge_op2_unsigned = (op1_i >= op2_i);    
    /****for Type-M ****/
    wire isType_r;
    assign isType_r = (opcode == `INST_TYPE_R_M) && ((funct7 == 7'b0000000)||(funct7==7'b0100000));
    /*** for Type-S Type-L *****/
    wire[`ADDR_WIDTH-1:0] load_addr_offset;
    wire[`ADDR_WIDTH-1:0] store_addr_offset;
    assign store_addr_offset = {{20{inst_i[31]}}, inst_i[31:25], inst_i[11:7]};
    assign load_addr_offset = {{20{inst_i[31]}}, inst_i[31:20]};
    /********** for Type-B Type-J **************/
    wire[`DATA_WIDTH-1:0] b_imm;
    wire[`DATA_WIDTH-1:0] jal_imm;
    assign b_imm = {{20{inst_i[31]}}, inst_i[7], inst_i[30:25], inst_i[11:8], 1'b0};
    assign jal_imm = {{12{inst_i[31]}}, inst_i[19:12], inst_i[20], inst_i[30:21], 1'b0};


    //for jump

    always @(*) begin
        if (rst_i == 1'b1) begin
            jump_addr_o =  `ZERO;
            jump_enable_o = 1'b0;
        end else begin
            jump_addr_o =  `ZERO;
            jump_enable_o = 1'b0;
            case (opcode)
                /************************* Type-B ********************/
                `INST_TYPE_B: begin
                    case(funct3)
                    `INST_BNE:begin
                        jump_addr_o = inst_addr_i + b_imm;
                        jump_enable_o = (~op1_eq_op2);
                    end
                    `INST_BEQ:begin
                        jump_addr_o = inst_addr_i + b_imm;
                        jump_enable_o = (op1_eq_op2);
                    end
                    `INST_BLT:begin
                        jump_addr_o = inst_addr_i + b_imm;
                        jump_enable_o = (~op1_ge_op2_signed);
                    end
                    `INST_BGE:begin
                        jump_addr_o = inst_addr_i + b_imm;
                        jump_enable_o = (op1_ge_op2_signed);
                    end
                    `INST_BLTU:begin
                        jump_addr_o = inst_addr_i + b_imm;
                        jump_enable_o = (~op1_ge_op2_unsigned);
                    end
                    `INST_BGEU:begin
                        jump_addr_o = inst_addr_i + b_imm;
                        jump_enable_o = (op1_ge_op2_unsigned);
                    end
                    default:begin
                        jump_addr_o = `ZERO;
                        jump_enable_o = 1'b0;
                    end
                    endcase
                end
                `INST_TYPE_JAL:begin
                    jump_addr_o = inst_addr_i + jal_imm;
                    jump_enable_o = 1'b1;
                end
                `INST_TYPE_JALR:begin
                    jump_addr_o = (op1_i+{{20{inst_i[31]}}, inst_i[31:20]}) & {{31{1'b1}},1'b0};
                    jump_enable_o = 1'b1;
                end
                default:begin
                end 
            endcase
        end //if
    end //always


    // form mem
    always @(*) begin
        if (rst_i == 1'b1) begin
            mem_we_o = `WRITE_DISABLE;
            mem_addr_o = `ZERO;
            mem_data_o = `ZERO;
            mem_op_o = `MEM_NOP;
        end else begin
            mem_we_o = `WRITE_DISABLE;
            mem_addr_o = `ZERO;
            mem_data_o = `ZERO;
            mem_op_o = `MEM_NOP;
            case (opcode)
                /******************* Type-S  ***************/
                `INST_TYPE_S:begin
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
                /****************** Type-L *********************/
                `INST_TYPE_L:begin
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
                end 
            endcase
        end //if
    end //always

    //for csr

    always @(*) begin
        if (rst_i == 1'b1) begin
            csr_we_o = `WRITE_DISABLE;
            csr_wdata_o = `ZERO;
        end else begin
            csr_we_o = `WRITE_DISABLE;
            csr_wdata_o = `ZERO;
            if (opcode == `INST_TYPE_SYSTEM) begin //csr, ecall, ebreak, mret, wfi etc.
                    csr_wdata_o = `ZERO;
                    csr_we_o = csr_we_i;
                    case(funct3)
                        `INST_CSRRW, `INST_CSRRWI:
                            csr_wdata_o = op1_i;
                        `INST_CSRRS, `INST_CSRRSI:
                            csr_wdata_o = csr_rdata_i | op1_i;
                        `INST_CSRRC, `INST_CSRRCI: 
                            csr_wdata_o = csr_rdata_i & ~op1_i;
                        default: 
                            csr_we_o = `WRITE_DISABLE;
                    endcase
            end
        end //if
    end //always

    // for reg
    always @(*) begin
        if (rst_i == 1'b1) begin
            reg_waddr_o = `ZERO_REG;
            reg_wdata_o = `ZERO;
            reg_we_o = `WRITE_DISABLE;
        end else begin
            reg_waddr_o = `ZERO_REG;
            reg_wdata_o = `ZERO;
            reg_we_o = `WRITE_DISABLE;
            case (opcode)
            /************Type-I *****************/
                `INST_TYPE_I:begin
                    reg_waddr_o = reg_waddr_i;
                    reg_wdata_o = `ZERO;
                    reg_we_o = `WRITE_DISABLE;
                    case(funct3)
                        `INST_ORI: begin
                            reg_wdata_o = op1_i | op2_i;
                            reg_we_o = `WRITE_ENABLE;
                        end//ORI
                        `INST_ADDI: begin
                            reg_wdata_o = $signed(op1_i) + $signed(op2_i);
                            reg_we_o = `WRITE_ENABLE;
                        end//ADDI
                        `INST_ANDI: begin
                            reg_wdata_o = op1_i & op2_i;
                            reg_we_o = `WRITE_ENABLE;
                        end//ANDI
                        `INST_XORI: begin
                            reg_wdata_o = op1_i ^ op2_i;
                            reg_we_o = `WRITE_ENABLE;
                        end//XORI
                        `INST_SLTI: begin
                            reg_wdata_o = {32{(~op1_ge_op2_signed)}} & 32'h1;
                            reg_we_o = `WRITE_ENABLE;
                        end//SLTI
                        `INST_SLTIU: begin
                            reg_wdata_o = {32{(~op1_ge_op2_unsigned)}} & 32'h1;
                            reg_we_o = `WRITE_ENABLE;
                        end//SLTIU
                        `INST_SLLI: begin
                            if (funct7 == 7'b0000000) begin
                                reg_wdata_o = op1_i << op2_i[4:0]; 
                                reg_we_o = `WRITE_ENABLE;
                            end else begin
                                reg_waddr_o = `ZERO_REG;
                            end
                        end//SLLI
                        `INST_SRLI: begin
                            if (funct7 == 7'b0000000) begin
                                reg_wdata_o = op1_i >> op2_i[4:0]; 
                                reg_we_o = `WRITE_ENABLE;
                            end else if(funct7== 7'b0100000) begin
                                reg_wdata_o = (sr_shift & sr_shift_mask) | ({32{op1_i[31]}} & (~sr_shift_mask)); 
                                reg_we_o = `WRITE_ENABLE;
                            end else begin
                                reg_waddr_o = `ZERO_REG;
                            end
                        end//SRLI , SRAI
                        default: begin
                            reg_waddr_o = `ZERO_REG;
                        end//default
                    endcase
		        end
                /****************  Type-R-M *************************/
                `INST_TYPE_R_M:begin //Type_r or M
                    reg_waddr_o = reg_waddr_i;
                    reg_wdata_o = `ZERO;
                    reg_we_o = `WRITE_DISABLE;
                    if (isType_r)
                        case(funct3)
                        `INST_OR: begin
                            reg_wdata_o = op1_i | op2_i;
                            reg_we_o = `WRITE_ENABLE;
                        end//ORI
                        `INST_ADD: begin  //'INST_ADD==INST_SUB==000
                            if (funct7==7'b0000000) begin
                                reg_wdata_o = $signed(op1_i) + $signed(op2_i);
                                reg_we_o = `WRITE_ENABLE;
                            end else if (funct7==7'b0100000) begin
                                reg_wdata_o = $signed(op1_i) - $signed(op2_i);
                                reg_we_o = `WRITE_ENABLE;
                            end else begin
                                reg_waddr_o = `ZERO_REG;
                            end
                        end
                        `INST_SRL: begin  //SRL==SRA ==101
                            if (funct7==7'b0000000) begin  //SRL
                                reg_wdata_o = op1_i >> op2_i[4:0];
                                reg_we_o = `WRITE_ENABLE;
                            end else if (funct7==7'b0100000) begin //SRA
                                reg_wdata_o = (sr_shift & sr_shift_mask) | ({32{op1_i[31]}} & (~sr_shift_mask));
                                reg_we_o = `WRITE_ENABLE;
                            end else begin
                                reg_waddr_o = `ZERO_REG;
                            end
                        end
                        `INST_SLL: begin
                            reg_wdata_o = op1_i << op2_i[4:0];
                            reg_we_o = `WRITE_ENABLE;
                        end//SLL
                        `INST_SLT: begin
                            reg_wdata_o = {32{(~op1_ge_op2_signed)}} & 32'h1;
                            reg_we_o = `WRITE_ENABLE;
                        end//SLT
                        `INST_SLTU: begin
                            reg_wdata_o = {32{(~op1_ge_op2_unsigned)}} & 32'h1;
                            reg_we_o = `WRITE_ENABLE;
                        end//SLTU
                        `INST_XOR: begin
                            reg_wdata_o = op1_i ^ op2_i; 
                            reg_we_o = `WRITE_ENABLE;
                        end//XOR                        
                        `INST_AND: begin
                            reg_wdata_o = op1_i & op2_i; 
                            reg_we_o = `WRITE_ENABLE;
                        end//AND
                        default: begin
                            reg_waddr_o = `ZERO_REG;
                        end
                        endcase
                    else
                        case(funct3)
                        `INST_MUL, `INST_MULH, `INST_MULHU, `INST_MULHSU, `INST_DIV,`INST_DIVU,`INST_REM,`INST_REMU: begin
                            reg_wdata_o = m_reg_wdata_o;
                            reg_we_o = m_reg_we_o;
                        end
                        default: begin
                            reg_waddr_o = `ZERO_REG;
                        end//default
                    endcase
    	        end
                /*************** Type-U *************************/
                `INST_TYPE_LUI, `INST_TYPE_AUIPC:begin //type u
                    reg_waddr_o = reg_waddr_i;
                    reg_wdata_o = op1_i+op2_i;
                    reg_we_o = reg_we_i;
                end
                /******************* Type-S  ***************/
                `INST_TYPE_S:begin
                    reg_waddr_o = reg_waddr_i;
                    reg_we_o = `WRITE_DISABLE;
                end
                /****************** Type-L *********************/
                `INST_TYPE_L: begin
                    reg_waddr_o = reg_waddr_i;
                    reg_we_o = `WRITE_ENABLE;
                end
                `INST_TYPE_JAL, `INST_TYPE_JALR:begin
                    reg_waddr_o = reg_waddr_i;
                    reg_wdata_o = inst_addr_i+4;
                    reg_we_o = `WRITE_ENABLE;
                end
                /************** Type-SYSTEM *************************/                
                `INST_TYPE_SYSTEM:begin //csr, ecall, ebreak, mret, wfi etc.
                    reg_wdata_o = `ZERO;
                    reg_waddr_o = reg_waddr_i;
                    reg_we_o = reg_we_i;
                    case(funct3)
                        `INST_CSRRW, `INST_CSRRWI, `INST_CSRRS, `INST_CSRRSI, `INST_CSRRC, `INST_CSRRCI: 
                            reg_wdata_o = csr_rdata_i;
                        default: begin
                            reg_waddr_o = `ZERO_REG;
                            reg_we_o = `WRITE_DISABLE;
                        end//default
                    endcase
                end

                default:begin
                end 
            endcase
        end //if
    end //always

endmodule
