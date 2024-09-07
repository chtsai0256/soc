module adder4(
    input signed [3:0] a, 
    input signed [3:0] b, 
    input c_in, 
    output signed [3:0] sum, 
    output c_out);

    wire [3:1] c;

    fulladder fa1(a[0],b[0], c_in, sum[0], c[1]) ;
    fulladder fa2(a[1],b[1], c[1], sum[1], c[2]) ;
    fulladder fa3(a[2],b[2], c[2], sum[2], c[3]) ;
    fulladder fa4(a[3],b[3], c[3], sum[3], c_out) ;

endmodule
