module mul#(parameter XLEN = 32)
(
    input wire              clk_i,
    input wire              rst_i,
    input wire              req_i,
    input wire[XLEN-1 : 0]  a_i, //被乘數
    input wire[XLEN-1 : 0]  b_i, //乘數
    output reg              ready_o,
    output reg[XLEN*2-1 : 0]  result_o
);

    wire [XLEN-1:0]         a_temp [XLEN-1:0] ;
    wire [XLEN-1:0]         b_temp [XLEN-1:0] ;
    wire [XLEN*2:0]         acc_temp [XLEN-1:0] ;
    wire [XLEN-1:0]         ready_temp ;

    //第一次初始化，不能用 generate 语句
    mult_cell      #(.XLEN(XLEN))
    u_mult_step0
    (
      .clk_i              (clk_i),
      .rst_i              (rst_i),
      .en_i               (req_i),
      .flush_i            (~req_i),
      .a_i                (a_i),
      .b_i                (b_i),
      .acc_i              ({(XLEN*2+1){1'b0}}),
      //output
      .a_o                (a_temp[0]),
      .b_o                (b_temp[0]),
      .acc_o              (acc_temp[0]),
      .ready_o            (ready_temp[0]) );

    //多次模块例化，用 generate 语句
    genvar               i ;
    generate
        for(i=1; i<=XLEN-1; i=i+1) begin: mult_stepx
            mult_cell      #(.XLEN(XLEN))
            u_mult_step
            (
              .clk_i            (clk_i),
              .rst_i            (rst_i),
              .en_i             (ready_temp[i-1]),
              .flush_i          (~req_i),
              .a_i              (a_temp[i-1]),
              .b_i              (b_temp[i-1]),
              .acc_i            (acc_temp[i-1]),
              //output
              .a_o              (a_temp[i]),                                      
              .b_o              (b_temp[i]),  
              .acc_o            (acc_temp[i]), 
              .ready_o          (ready_temp[i]) );
        end
    endgenerate

    always @(*) begin
        if (rst_i) begin
            ready_o = 1'b0;
            result_o = 64'b0;
        end else begin
            ready_o = (req_i) ? ready_temp[XLEN-1]: 1'b0;
            result_o = (req_i) ? acc_temp[XLEN-1][63:0]: 64'b0; 
        end
    end
endmodule
