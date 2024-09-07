module mul#(parameter XLEN = 32)
(
    input wire              clk_i,
    input wire              rst_i,
    input wire              req_i,
    input wire              flush_i,    
    input wire[XLEN-1 : 0]  a_i, //被乘數
    input wire[XLEN-1 : 0]  b_i, //乘數
    output reg              ready_o,
    output reg[XLEN*2-1 : 0]  result_o
);

    reg [XLEN*2:0]   a_temp [XLEN-1:0];
    reg [5:0]   ready_temp;
    wire is_a_zero = ~(|a_i);
    wire is_b_zero = ~(|b_i);
    wire req = req_i & ~flush_i;

    mult_cell0 #(.XLEN(XLEN), .NrInputs(XLEN)) mult_cellB(
        .clk_i(clk_i),
        .rst_i(rst_i),
        .en_i(req),
        .flush_i(~req),
        .a_i(a_i),
        .b_i(b_i),
        .result_o(a_temp),
        .ready_o(ready_temp[0])
    );
    
    wire [XLEN*2:0]   a_next1[XLEN>>1];//32 -> 16    
    mult_cell #(.XLEN(XLEN), .NrInputs(XLEN), .NrOutput(XLEN>>1)) mult_cell0(
        .clk_i(clk_i),
        .rst_i(rst_i),
        .en_i(ready_temp[0]),
        .flush_i(~req),
        .a_i(a_temp),
        .result_o(a_next1),
        .ready_o(ready_temp[1])
    );
        
    wire [XLEN*2:0]   a_next2 [XLEN>>2];//16 -> 8
    mult_cell #(.XLEN(XLEN), .NrInputs(XLEN>>1),.NrOutput(XLEN>>2)) mult_cell1(
        .clk_i(clk_i),
        .rst_i(rst_i),
        .en_i(ready_temp[1]),
        .flush_i(~req),
        .a_i(a_next1),
        .result_o(a_next2),
        .ready_o(ready_temp[2])
    );

    wire [XLEN*2:0]   a_next3 [XLEN>>3];// 8 -> 4    
    mult_cell #(.XLEN(XLEN), .NrInputs(XLEN>>2), .NrOutput(XLEN>>3)) mult_cell2(
        .clk_i(clk_i),
        .rst_i(rst_i),
        .en_i(ready_temp[2]),
        .flush_i(~req),
        .a_i(a_next2),
        .result_o(a_next3),
        .ready_o(ready_temp[3])
    );

    wire [XLEN*2:0]   a_next4[XLEN>>4]; //4->2   
    mult_cell #(.XLEN(XLEN), .NrInputs(XLEN>>3), .NrOutput(XLEN>>4)) mult_cell3(
        .clk_i(clk_i),
        .rst_i(rst_i),
        .en_i(ready_temp[3]),
        .flush_i(~req),
        .a_i(a_next3),
        .result_o(a_next4),
        .ready_o(ready_temp[4])
    );

    wire [XLEN*2:0]   a_next5 [XLEN>>5]; // 2->1   
    mult_cell #(.XLEN(XLEN), .NrInputs(XLEN>>4), .NrOutput(XLEN>>5)) mult_cell4(
        .clk_i(clk_i),
        .rst_i(rst_i),
        .en_i(ready_temp[4]),
        .flush_i(~req),
        .a_i(a_next4),
        .result_o(a_next5),
        .ready_o(ready_temp[5])
    );

    always @(*) begin
        if (rst_i | ~req) begin
            ready_o = 1'b0;
            result_o = 64'b0;
        end else if(is_a_zero|is_b_zero) begin
            ready_o = 1'b1;
            result_o = 64'b0;
        end else begin
            ready_o = (req) ? ready_temp[5]: 1'b0;
            result_o = (req) ? a_next5[0][63:0]: 64'b0; 
        end
    end
endmodule
