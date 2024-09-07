module div#(parameter XLEN = 32)
(
    input wire              clk_i,
    input wire              rst_i,
    input wire              req_i,
    input wire[XLEN-1 : 0]  a_i, //被乘數
    input wire[XLEN-1 : 0]  b_i, //乘數
    output reg              ready_o,
    output reg[XLEN*2-1 : 0]  result_o
);

    always @(*) begin
        if (rst_i) begin
            ready_o = 1'b0;
            result_o = 64'b0;
        end else begin
            ready_o = 1'b0;
            result_o = 64'b0;
        end
    end
endmodule
