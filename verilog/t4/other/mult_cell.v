module    mult_cell
    #(
        parameter XLEN=32,
        parameter NrInputs=32,
        parameter NrOutput=16
    )
    (
      input wire            clk_i,
      input wire            rst_i,
      input wire            en_i,
      input wire            flush_i,
      // 2m -> m
      input wire[XLEN*2:0]  a_i [NrInputs],
      output reg[XLEN*2:0]  result_o [NrOutput],
      output reg            ready_o  
    );
      
    always @(posedge clk_i) begin
        if (rst_i | ~en_i | flush_i) begin
            for (integer device=0; device < NrOutput; device = device + 1) begin
                result_o[device] <=0;
            end
            ready_o <=1'b0;
        end else begin
            for (integer device=0; device < NrInputs; device = device + 2) begin
                result_o[device>>1] <= a_i[device]+a_i[device+1];
            end
            ready_o <= 1'b1;
        end
    end
endmodule
