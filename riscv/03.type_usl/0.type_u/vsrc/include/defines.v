`define RNUM         32
`define ADDR_WIDTH   32
`define RADDR_WIDTH  5
`define DATA_WIDTH   32
`define RDATA_WIDTH  32
`define MEM_SIZE    32'h200000
`define MEM_OFFSET  0
`define PART_ADDR_WIDTH 21

`define ZERO        32'h0
`define ZERO_REG    0
`define WRITE_ENABLE    1'b1
`define READ_ENABLE     1'b1
`define WRITE_DISABLE   1'b0
`define READ_DISABLE    1'b0


`define NOP   0 
// I type inst
`define INST_TYPE_I 7'b0010011   //opcode
`define INST_ADDI 3'b000         //funct3
`define INST_SLTI 3'b010
`define INST_SLTIU 3'b011
`define INST_XORI 3'b100
`define INST_ORI  3'b110
`define INST_ANDI 3'b111
`define INST_SLLI 3'b001 //funct7 = 0000000
`define INST_SRLI 3'b101 //funct7 = 0000000
`define INST_SRAI 3'b101 //funct7 = 0100000
// R type inst
`define INST_TYPE_R_M 7'b0110011   //opcode
`define INST_ADD 3'b000         //funct7=0000000
`define INST_SUB 3'b000         //funct7=0100000
`define INST_SLL 3'b001
`define INST_SLT 3'b010
`define INST_SLTU 3'b011
`define INST_XOR  3'b100
`define INST_SRL 3'b101         //funct7 = 0000000
`define INST_SRA 3'b101         //funct7 = 0100000
`define INST_OR 3'b110 
`define INST_AND 3'b111 
// LUI, AUIPC
`define INST_TYPE_LUI 7'b0110111
`define INST_TYPE_AUIPC 7'b0010111
