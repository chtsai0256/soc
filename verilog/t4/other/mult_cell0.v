module    mult_cell0
    #(
        parameter XLEN=32,
        parameter NrInputs=32
    )
    (
      input wire            clk_i,
      input wire            rst_i,
      input wire            en_i,
      input wire            flush_i,
      // 2m -> m
      input wire[XLEN-1:0]  a_i,
      input wire[XLEN-1:0]  b_i,
      output reg[XLEN*2:0]  result_o [NrInputs],
      output reg            ready_o  
    );
      
    reg [XLEN*2:0]   r = {33'b0, a_i};

    always @(posedge clk_i) begin
        if (rst_i | ~en_i | flush_i) begin
            for (integer device=0; device < XLEN; device = device + 1) begin
                result_o[device] <= 65'b0;
            end
            ready_o <= 1'b0;
        end else begin
            for (integer device=0; device < XLEN; device = device + 1) begin
                result_o[device] <= (b_i[device]) ? r << device: 'b0;
            end
            ready_o <= 1'b1;
        end
    end
endmodule
