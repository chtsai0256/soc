`include "defines.v"

module id(
    input wire rst_i,
    
    //from if_id
    input wire[`ADDR_WIDTH-1:0] inst_addr_i,
    input wire[`DATA_WIDTH-1:0] inst_i,

    //from id_exe
    input wire[`RADDR_WIDTH-1:0] exe_rd_i,
    input wire pre_inst_is_load_i,
    
    //from regfile
    input wire[`RDATA_WIDTH-1:0] reg1_rdata_i,
    input wire[`RDATA_WIDTH-1:0] reg2_rdata_i,

    //from exe
    input wire[`RADDR_WIDTH-1:0] exe_reg_waddr_i,
    input wire[`RDATA_WIDTH-1:0] exe_reg_wdata_i,
    input wire exe_reg_we_i,

    //from mem
    input wire[`RADDR_WIDTH-1:0] mem_reg_waddr_i,
    input wire[`RDATA_WIDTH-1:0] mem_reg_wdata_i,
    input wire mem_reg_we_i,
       
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
    output reg[`RADDR_WIDTH-1:0] reg_waddr_o,
    output reg[`ADDR_WIDTH-1:0]  inst_addr_o,


    //for csr
    //to id_exe
    output reg csr_we_o,
    output reg[`CSR_ADDR_WIDTH-1:0] csr_addr_o,

    //to ctrl
    output reg stallreq_o,

    //for exception
    output reg[`DATA_WIDTH-1:0] exception_o

    );

    assign exception_o = {30'b0, except_ecall, except_mret};
    assign inst_addr_o = inst_addr_i;

    reg except_mret;
    reg except_ecall;

    reg[`RDATA_WIDTH-1:0] op1_o_final;
    reg[`RDATA_WIDTH-1:0] op2_o_final;

    wire[6:0] opcode = inst_i[6:0];
    wire[2:0] funct3 = inst_i[14:12];
    wire[6:0] funct7 = inst_i[31:25];
    wire[4:0] shamt = inst_i[24:20]; 
    wire[4:0] rd = inst_i[11:7];
    wire[4:0] rs1 = inst_i[19:15];
    wire[4:0] rs2 = inst_i[24:20];

    wire is_load_hazard;
    assign is_load_hazard = (pre_inst_is_load_i==1'b1 && (rs1 == exe_rd_i || rs2==exe_rd_i));
    
    always@(*)begin
        if (is_load_hazard)
            stallreq_o = 1'b1;
        else
            stallreq_o = 1'b0;
    end

    //for exception
    always @(*) begin
        if (rst_i) begin
            except_mret = 1'b0;
            except_ecall = 1'b0;
        end else begin
            except_mret = 1'b0;
            except_ecall = 1'b0;
            if (opcode == `INST_TYPE_SYSTEM && funct3 == `INST_CSR_PRIV) begin//csr, ecall, ebreak, wfi
                if( (funct7==7'b0011000) && (rs2 == 5'b00010)) begin  //mret
                    // {00110, 00, rs2(00010), rs1(00000), funct3(000), rd(00000), opcode = 7b'1110011 }
                    // Return from traps in M-mode, and MRET copies MPIE into MIE, then sets MPIE.
                    // mret  :   ExceptionReturn(Machine)
                    except_mret = 1'b1;
                end else 
                if((funct7==7'b0000000) &&  (rs2 == 5'b00000))  begin //ecall
                    // {00000, 00, rs2(00000), rs1(00000), funct3(000), rd(00000), opcode = 7b'1110011 }
                    // Make a request to the supporting execution environment.
                    // When executed in U-mode, S-mode, or M-mode, it generates an
                    // environment-call-from-U-mode exception, environment-call-from-S-mode
                    // exception, or environment-call-from-M-mode exception, respectively, and
                    // performs no other operation.
                    // ecall  :   RaiseException(EnvironmentCall)
                    except_ecall= 1'b1;
                end else begin
                end
            end//if
        end//if
    end//always

    //for regfile     
    always @(*) begin
        if (rst_i) begin
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
            inst_o = inst_i;
            reg1_raddr_o = `ZERO_REG;
            reg2_raddr_o = `ZERO_REG;
            reg1_re_o = `READ_DISABLE;
            reg2_re_o = `READ_DISABLE;
            reg_we_o = `WRITE_DISABLE;
            reg_waddr_o = `ZERO_REG;
            op1_o_final = `ZERO;
            op2_o_final = `ZERO;
            case (opcode)
                /********** Type_I ******************/
                `INST_TYPE_I:begin //  reg_we, reg_waddr, reg1_re, op1=reg1, op2=imm
                    reg_we_o = `WRITE_ENABLE;
                    reg_waddr_o = rd;
                    reg1_raddr_o = rs1;
                    reg1_re_o = `READ_ENABLE;
                    op1_o_final = reg1_rdata_i;
                    case (funct3)
                    `INST_ADDI, `INST_SLTI,`INST_SLTIU,`INST_XORI,`INST_ORI,`INST_ANDI: begin
                        op2_o_final = {{20{inst_i[31]}}, inst_i[31:20]};
                    end
                    `INST_SLLI: begin
                        if (funct7 == 7'b0000000) begin
                            op2_o_final = {{27{1'b0}},shamt[4:0]};
                        end else begin
                        end
                    end
                    `INST_SRLI: begin
                        if (funct7 == 7'b0000000 || funct7 == 7'b0100000) begin
                            op2_o_final = {{27{1'b0}},shamt[4:0]};
                        end else begin
                        end
                    end
                    default: begin
                    end
                    endcase
                /*************************************************************/
                /***********Type-R or Type-M *********************************/
                end
                `INST_TYPE_R_M:begin //Type_r and M // rd, rs1, rs2
                    if ((funct7==7'b0000000)||(funct7==7'b0100000)||(funct7==7'b0000001)) begin
                        reg_we_o = `WRITE_ENABLE;
                        reg_waddr_o = rd;
                        reg1_raddr_o = rs1;
                        reg2_raddr_o = rs2;
                        reg1_re_o = `READ_ENABLE;
                        reg2_re_o = `READ_ENABLE;
                        op1_o_final = reg1_rdata_i;
                        op2_o_final = reg2_rdata_i;
                    end else begin
                    end
                end
                /*************************************/
                /******* Type-LUI , Type-AUIPC ******/
                `INST_TYPE_LUI:begin
                    op1_o_final = {inst_i[31:12],{12{1'b0}}};
                    op2_o_final = {32{1'b0}};
                    reg_we_o = `WRITE_ENABLE;
                    reg_waddr_o = rd;
                end
                `INST_TYPE_AUIPC:begin
                    op1_o_final = inst_addr_i;
                    op2_o_final = {inst_i[31:12],{12{1'b0}}};
                    reg_we_o = `WRITE_ENABLE;
                    reg_waddr_o = rd;
                end
                /***********************************/
                /************* Type-S and Type-L *****/
                `INST_TYPE_S:begin
                    reg1_raddr_o = rs1;
                    reg2_raddr_o = rs2;
                    reg1_re_o = `READ_ENABLE;
                    reg2_re_o = `READ_ENABLE;
                    op1_o_final = reg1_rdata_i;
                    op2_o_final = reg2_rdata_i;
                end
                `INST_TYPE_L:begin
                    reg1_raddr_o = rs1;
                    reg1_re_o = `READ_ENABLE;
                    op1_o_final = reg1_rdata_i;
                    reg_we_o = `WRITE_ENABLE;
                    reg_waddr_o = rd;
                end
                /***************************************/
                /********* Type-B and Type-J ***********/
                `INST_TYPE_B:begin
                    reg1_raddr_o = rs1;
                    reg2_raddr_o = rs2;
                    reg1_re_o = `READ_ENABLE;
                    reg2_re_o = `READ_ENABLE;
                    op1_o_final = reg1_rdata_i;
                    op2_o_final = reg2_rdata_i;
                end
                `INST_TYPE_JAL:begin
                    reg1_raddr_o = rs1;
                    reg2_raddr_o = rs2;
                    reg_we_o = `WRITE_ENABLE;
                    reg_waddr_o = rd;
                end
                `INST_TYPE_JALR:begin
                    reg1_raddr_o = rs1;
                    reg2_raddr_o = rs2;
                    reg1_re_o = `READ_ENABLE;
                    op1_o_final = reg1_rdata_i;
                    reg_we_o = `WRITE_ENABLE;
                    reg_waddr_o = rd;
                end
                /**********************************************/
                /************ Type-SYSTEM *********************/
                `INST_TYPE_SYSTEM: begin//csr, ecall, ebreak, wfi
                    case(funct3)
                        `INST_CSRRW,`INST_CSRRS, `INST_CSRRC: begin
                            reg1_raddr_o = rs1;
                            reg1_re_o = `READ_ENABLE;
                            reg_we_o = `WRITE_ENABLE;
                            reg_waddr_o = rd;
                            op1_o_final = reg1_rdata_i;
                            csr_we_o = `WRITE_ENABLE;
                            csr_addr_o = inst_i[31:20];
                        end
                        `INST_CSRRWI,`INST_CSRRSI, `INST_CSRRCI: begin
                            reg_we_o = `WRITE_ENABLE;
                            reg_waddr_o = rd;
                            op1_o_final = {{27{1'b0}},inst_i[19:15]}; //zero extend imm
                            csr_we_o = `WRITE_ENABLE;
                            csr_addr_o = inst_i[31:20];
                        end
                        default:begin

                        end
                    endcase
                end

                default:begin

                end//default
            endcase
        end//if
    end//always

    //for csr
    always @(*) begin
        if (rst_i) begin
            csr_we_o = `WRITE_DISABLE;
            csr_addr_o = 12'b0;
        end else begin
            case (opcode)
                /************ Type-SYSTEM *********************/
            `INST_TYPE_SYSTEM: begin//csr, ecall, ebreak, wfi
                case(funct3)
                `INST_CSRRW,`INST_CSRRS, `INST_CSRRC: begin
                    csr_we_o = `WRITE_ENABLE;
                    csr_addr_o = inst_i[31:20];
                end
                `INST_CSRRWI,`INST_CSRRSI, `INST_CSRRCI: begin
                    csr_we_o = `WRITE_ENABLE;
                    csr_addr_o = inst_i[31:20];
                end
                default:begin
                end
                endcase
            end
            default:begin
            end//default
            endcase
        end//if
    end//always

 	//determine op1_o
	always @(*) begin
        if (reg1_re_o == `READ_ENABLE && exe_reg_we_i == `WRITE_ENABLE && exe_reg_waddr_i == reg1_raddr_o) begin
            op1_o = (|reg1_raddr_o)? exe_reg_wdata_i:`ZERO;
        end else if(reg1_re_o == `READ_ENABLE && mem_reg_we_i == `WRITE_ENABLE && mem_reg_waddr_i == reg1_raddr_o) begin
            op1_o =(|reg1_raddr_o)? mem_reg_wdata_i:`ZERO;
        end else begin
            op1_o = op1_o_final;
        end
	end//always

	//determine op2_o
	always @(*) begin
        if (reg2_re_o == `READ_ENABLE && exe_reg_we_i == `WRITE_ENABLE && exe_reg_waddr_i == reg2_raddr_o) begin
            op2_o = (|reg2_raddr_o) ? exe_reg_wdata_i : `ZERO;
        end else if(reg2_re_o == `READ_ENABLE && mem_reg_we_i == `WRITE_ENABLE && mem_reg_waddr_i == reg2_raddr_o) begin
            op2_o = (|reg2_raddr_o)? mem_reg_wdata_i:`ZERO;
        end else begin
            op2_o = op2_o_final;
        end
	end//always
endmodule

