`include "defines.v"

module mem_wb(
    input wire rst_i,
    input wire clk_i,
    
    //from exe_mem
    input wire[`RADDR_WIDTH-1:0] reg_waddr_i,
    input wire reg_we_i,
    input wire[`RDATA_WIDTH-1:0] reg_wdata_i,

    //to regfile
    output reg[`RADDR_WIDTH-1:0] reg_waddr_o,
    output reg reg_we_o,
    output reg[`RDATA_WIDTH-1:0] reg_wdata_o,

    //for csr from exe_mem
    input wire                   csr_we_i,
    input wire[`CSR_ADDR_WIDTH-1:0]  csr_waddr_i,
    input wire[`DATA_WIDTH-1:0] csr_wdata_i,
    //to csr_file
    output reg                  csr_we_o,
    output reg[`CSR_ADDR_WIDTH-1:0] csr_waddr_o,
    output reg[`DATA_WIDTH-1:0] csr_wdata_o,
    output reg                  instret_incr_o,

    //from interrupt ctrl
    input wire  flush_int_i

);

//csr file
    always @(posedge clk_i) begin
        if (rst_i == 1) begin
            csr_we_o <= `WRITE_DISABLE;
            csr_waddr_o <= {12'b0};
            csr_wdata_o <= `ZERO;
            instret_incr_o<=1'b0;
        end else if (flush_int_i) begin
            csr_we_o <= `WRITE_DISABLE;
            csr_waddr_o <= 12'b0;
            csr_wdata_o <= `ZERO;
            instret_incr_o<=1'b0;
        end else begin
            csr_we_o <= csr_we_i;
            csr_waddr_o <= csr_waddr_i;
            csr_wdata_o <= csr_wdata_i;
            instret_incr_o <= 1'b0;
        end //if
    end //always

    always @(posedge clk_i) begin
        if (rst_i == 1) begin
            reg_waddr_o <= `ZERO_REG;
            reg_we_o <= `WRITE_DISABLE;
            reg_wdata_o <= `ZERO;
        end else if (flush_int_i) begin
            reg_waddr_o <= `ZERO_REG;
            reg_we_o <= `WRITE_DISABLE;
            reg_wdata_o <= `ZERO;
        end else begin
            reg_waddr_o <= reg_waddr_i;
            reg_we_o <= reg_we_i;
            reg_wdata_o <= reg_wdata_i;
        end //if
    end //always
endmodule
