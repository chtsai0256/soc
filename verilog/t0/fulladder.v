module fulladder (
input a, b, c_in, 
output sum, c_out);

    wire s1, c1, c2;

    xor g1(s1, a, b);
    xor g2(sum, s1, c_in);
    and g3(c1, a,b);
    and g4(c2, s1, c_in) ;
    xor g5(c_out, c2, c1) ;

endmodule
