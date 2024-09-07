`include "defines.v"

module test_top(
    input wire rst_i,
    input wire clk_i
);

wire[`ADDR_WIDTH-1:0] pc_wire;
wire ce_wire;

//if to if_id lines
wire[`ADDR_WIDTH-1:0] if_inst_addr_o;
wire[`DATA_WIDTH-1:0] if_inst_o;

// 連接 if_id 與 id 的線
wire[`ADDR_WIDTH-1:0] if_id_inst_addr_o;
wire[`DATA_WIDTH-1:0] if_id_inst_o;

// 連接 id 與 id_exe線
wire[`DATA_WIDTH-1:0] id_inst_o;
wire[`RDATA_WIDTH-1:0] id_op1_o;
wire[`RDATA_WIDTH-1:0] id_op2_o;
wire id_reg_we_o;
wire[`RADDR_WIDTH-1:0] id_reg_waddr_o;
//id to regfile
wire[`RADDR_WIDTH-1:0] id_reg1_addr_o;
wire[`RADDR_WIDTH-1:0] id_reg2_addr_o;
wire id_reg1_re_o;
wire id_reg2_re_o;

//regfile 對外接線
wire[`RDATA_WIDTH-1:0] reg1_data_o;
wire[`RDATA_WIDTH-1:0] reg2_data_o;

//id_exe to exe
wire[`RDATA_WIDTH-1:0] id_exe_op1_o;
wire[`RDATA_WIDTH-1:0] id_exe_op2_o;
wire id_exe_reg_we_o;
wire[`RADDR_WIDTH-1:0] id_exe_reg_waddr_o;
wire[`DATA_WIDTH-1:0] id_exe_inst_o;
    
//exe
wire[`RADDR_WIDTH-1:0] exe_reg_waddr_o;
wire exe_reg_we_o;
wire[`RDATA_WIDTH-1:0] exe_reg_wdata_o;

//exe_mem
wire[`RADDR_WIDTH-1:0] exe_mem_reg_waddr_o;
wire exe_mem_reg_we_o;
wire[`RDATA_WIDTH-1:0] exe_mem_reg_wdata_o;

//mem
wire[`RADDR_WIDTH-1:0] mem_reg_waddr_o;
wire mem_reg_we_o;
wire[`RDATA_WIDTH-1:0] mem_reg_wdata_o;

//mem_wb
wire[`RADDR_WIDTH-1:0] mem_wb_reg_waddr_o;
wire mem_wb_reg_we_o;
wire[`RDATA_WIDTH-1:0] mem_wb_reg_wdata_o;




pc_reg pc_reg0(
    .rst_i(rst_i),
    .clk_i(clk_i),
    //to if_id
    .pc_o(pc_wire),
    // to rom
    .ce_o(ce_wire)
);

rom rom0(
    .addr_i(pc_wire),
    .clk_i(clk_i),
    .ce_i(ce_wire),
    .inst_o(if_inst_o)
);
assign if_inst_addr_o = pc_wire;

//IF/ID
if_id if_id0(
    .clk_i(clk_i), .rst_i(rst_i),
    //from if
    .inst_addr_i(if_inst_addr_o),
    .inst_i(if_inst_o),
    //to id
    .inst_addr_o(if_id_inst_addr_o),
    .inst_o(if_id_inst_o)
);




//ID
id id0(
    .rst_i(rst_i),

    //from if_id
    .inst_addr_i(if_id_inst_addr_o),
    .inst_i(if_id_inst_o),

    //from regfile
    .reg1_rdata_i(reg1_data_o),
    .reg2_rdata_i(reg2_data_o),

    //from exe
    .exe_reg_waddr_i(exe_reg_waddr_o),
    .exe_reg_wdata_i(exe_reg_wdata_o),
    .exe_reg_we_i(exe_reg_we_o),

    //from mem
    .mem_reg_waddr_i(mem_reg_waddr_o),
    .mem_reg_wdata_i(mem_reg_wdata_o),
    .mem_reg_we_i(mem_reg_we_o),


    //to regfile
    .reg1_raddr_o(id_reg1_addr_o),
    .reg2_raddr_o(id_reg2_addr_o),
    .reg1_re_o(id_reg1_re_o),
    .reg2_re_o(id_reg2_re_o),

    //to id_exe
    .inst_o(id_inst_o),
    .op1_o(id_op1_o),
    .op2_o(id_op2_o),
    .reg_we_o(id_reg_we_o),
    .reg_waddr_o(id_reg_waddr_o)
);
    
//regfile
regfile regfile0(
    .rst_i(rst_i), .clk_i(clk_i),

    //from wb
    .waddr_i(mem_wb_reg_waddr_o), 
    .we_i(mem_wb_reg_we_o), 
    .wdata_i(mem_wb_reg_wdata_o),
    //from id
    .re1_i(id_reg1_re_o),
    .raddr1_i(id_reg1_addr_o),
    .re2_i(id_reg2_re_o),
    .raddr2_i(id_reg2_addr_o),

    //to id
    .rdata1_o(reg1_data_o),
    .rdata2_o(reg2_data_o)
);


//ID_EXE
id_exe id_exe0(
    .rst_i(rst_i), .clk_i(clk_i),

    //from id
    .inst_i(id_inst_o),
    .op1_i(id_op1_o),
    .op2_i(id_op2_o),
    .reg_we_i(id_reg_we_o),
    .reg_waddr_i(id_reg_waddr_o),

    //to exe
    .op1_o(id_exe_op1_o),
    .op2_o(id_exe_op2_o),
    .reg_we_o(id_exe_reg_we_o),
    .reg_waddr_o(id_exe_reg_waddr_o),
    .inst_o(id_exe_inst_o)
);


    
    
//EXE
exe exe0(
    .rst_i(rst_i),
    
    //from id_exe
    .op1_i(id_exe_op1_o), 
    .op2_i(id_exe_op2_o),
    .reg_we_i(id_exe_reg_we_o), 
    .reg_waddr_i(id_exe_reg_waddr_o),
    .inst_i(id_exe_inst_o),
    //to exe_mem
    .reg_waddr_o(exe_reg_waddr_o), 
    .reg_we_o(exe_reg_we_o), 
    .reg_wdata_o(exe_reg_wdata_o)    
);

//exe_mem
exe_mem exe_mem0(
    .rst_i(rst_i), .clk_i(clk_i),
    
    //from exe
    .reg_waddr_i(exe_reg_waddr_o), 
    .reg_we_i(exe_reg_we_o), 
    .reg_wdata_i(exe_reg_wdata_o),
    
    //to mem
    .reg_waddr_o(exe_mem_reg_waddr_o), 
    .reg_we_o(exe_mem_reg_we_o), 
    .reg_wdata_o(exe_mem_reg_wdata_o)
);

//mem
mem mem0(
    .rst_i(rst_i),
    
    //from exe_mem
    .reg_waddr_i(exe_mem_reg_waddr_o), 
    .reg_we_i(exe_mem_reg_we_o), 
    .reg_wdata_i(exe_mem_reg_wdata_o),
    
    //to mem_wb
    .reg_waddr_o(mem_reg_waddr_o), 
    .reg_we_o(mem_reg_we_o), 
    .reg_wdata_o(mem_reg_wdata_o)    
);

//mem_wb
mem_wb mem_wb0(
    .rst_i(rst_i), .clk_i(clk_i),
    // from mem
    .reg_waddr_i(mem_reg_waddr_o), 
    .reg_we_i(mem_reg_we_o), 
    .reg_wdata_i(mem_reg_wdata_o),    
    
    //to regfile
    .reg_waddr_o(mem_wb_reg_waddr_o), 
    .reg_we_o(mem_wb_reg_we_o), 
    .reg_wdata_o(mem_wb_reg_wdata_o)
);
    
    
    
endmodule

