module mux_case (
   a_i,
   b_i,
   c_i,
   d_i,
   sel_i,
   q_o
 );
 
  input a_i;
  input b_i;
  input c_i;
  input d_i;
  input [1:0] sel_i;
  output q_o;
 
  reg q_o;
 
  always@(a_i or b_i or c_i or d_i or sel_i) begin
       case (sel_i)
          2'b00   : q_o = a_i;
          2'b01   : q_o = b_i;
          2'b10   : q_o = c_i;
          default : q_o = d_i;
       endcase
  end
 
endmodule 
