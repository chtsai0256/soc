`include "defines.v"

module regfile(
    input wire clk_i,
    input wire rst_i,

    //from WB
    input wire we_i,
    input wire[`RADDR_WIDTH-1:0] waddr_i,
    input wire[`RDATA_WIDTH-1:0] wdata_i,

    //from id read
    input wire re1_i,
    input wire[`RADDR_WIDTH-1:0] raddr1_i,
    input wire re2_i,
    input wire[`RADDR_WIDTH-1:0] raddr2_i,

    //to id
    output reg[`RDATA_WIDTH-1:0] rdata1_o,
    output reg[`RDATA_WIDTH-1:0] rdata2_o
);

    reg[`RDATA_WIDTH-1:0] regs[0:`RNUM-1];
    integer i;
    initial begin
        for (i=0;i<`RNUM;i=i+1)
            regs[i] = 0;
    end

    //write
    always @(posedge clk_i) begin
        if (rst_i == 0) begin
                // 先做寫
            if ((we_i == `WRITE_ENABLE) && (waddr_i != `ZERO_REG)) begin
                    regs[waddr_i] <= wdata_i;
                end
        end//if rst_i
    end//always
    //
    //read 1
    always @(*) begin
        if (raddr1_i == `ZERO_REG) begin
            rdata1_o = `ZERO;
        end else if (raddr1_i == waddr_i && we_i == `WRITE_ENABLE && re1_i == `READ_ENABLE) begin
            rdata1_o = wdata_i;
        end else if (re1_i == `READ_ENABLE) begin
            rdata1_o = regs[raddr1_i];
        end else begin
            rdata1_o = `ZERO;
        end//if
    end//always

    //read 2
    always @(*) begin
        if (raddr2_i == `ZERO_REG) begin
            rdata2_o = `ZERO;
        end else if (raddr2_i == waddr_i && we_i == `WRITE_ENABLE && re2_i == `READ_ENABLE) begin
            rdata2_o = wdata_i;
        end else if (re2_i == `READ_ENABLE) begin
            rdata2_o = regs[raddr2_i];
        end else begin
            rdata2_o = `ZERO;
        end//if
    end//always

    task readRegister;
        /*verilator public*/
        input integer raddr;
        output integer val;
        begin
            val = regs[raddr[4:0]];
        end
    endtask    


endmodule
