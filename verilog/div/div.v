module div#(parameter XLEN = 32)
(
    input                   clk_i,
    input                   rst_i,
    input  [XLEN-1 : 0]     a_i,
    input  [XLEN-1 : 0]     b_i,
    input                   req_i,
    output reg [XLEN-1 : 0] q_o,
    output reg [XLEN-1 : 0] r_o,
    output reg              ready_o
);

function [XLEN-1 : 0] abs;
    input [XLEN-1 : 0] num;

    abs = num[XLEN-1] ? -num : num;
endfunction


wire is_a_zero, is_b_zero,
     is_a_neg, is_b_neg, signed_adjust;

assign is_a_zero = (a_i == 32'b0);
assign is_b_zero = (b_i == 32'b0);
assign is_a_neg  = a_i[31];
assign is_b_neg  = b_i[31];
assign signed_adjust = is_a_neg ^ is_b_neg;

wire [XLEN-1 : 0] op_a, op_b;

assign op_a = ( | is_a_neg)? abs(a_i) : a_i;
assign op_b = ( | is_b_neg)? abs(b_i) : b_i;

wire              is_calc_done;
reg  [XLEN-1 : 0] reg32;
reg  [XLEN*2 : 0] result;       // 65-bit, 1 extra bit
reg  [ 5 : 0]     cnt;

// For the slow shift-add binary multiplier.
assign is_calc_done = ~|cnt;

wire [XLEN-1 : 0] quotient, remainder;
assign quotient = result[31 : 0];
assign remainder = result[64 : 33];

// ================================================================================
// Finite State Machine
//
localparam S_IDLE        = 3'b000,
           S_CALC        = 3'b001,
           S_SIGN_ADJUST = 3'b010,
           S_DONE        = 3'b011;

reg [2 : 0] S, S_next;

always @(posedge clk_i)
begin
    if (rst_i)
        S <= S_IDLE;
    else
        S <= S_next;
end

always @(*)
begin
    case (S)
        S_IDLE:
            S_next = (req_i)? (is_a_zero | is_b_zero)? S_DONE : S_CALC : S_IDLE;
        S_CALC:
            S_next = (is_calc_done)? S_SIGN_ADJUST : S_CALC;
        S_SIGN_ADJUST:
            S_next = S_DONE;
        S_DONE:
            S_next = S_IDLE;
        default:
            S_next = S_IDLE;
    endcase
end

wire div_sub = (result[63: 32] >= reg32);

wire [32 : 0] sub_tmp = result[63: 32] - reg32;

wire [64 : 0] result_tmp = {sub_tmp, result[31: 0]};

always @(posedge clk_i)
begin
    if ( (S == S_IDLE) & req_i)
    begin
        if (is_b_zero)
        begin                   // divide by zero, generate special value
            result[64: 33] <= a_i;
            result[32]  <= 1'b0;
            result[31: 0] <= {32{1'b1}};
        end
        else
        begin
            cnt <= 'd32;
            reg32 <= op_b;
            result <= {1'b0, 32'b0, op_a};  // ext_bit | remainder | quotient
        end
    end
    else if (S == S_CALC)
    begin
        cnt <= cnt - 'd1;
        // slow divider: shift left
        result <= (div_sub)? {result_tmp[63 : 0], 1'b1} : {result[63 : 0], 1'b0};
    end
    else if (S == S_SIGN_ADJUST)
    begin
        result[64: 33] <= (is_a_neg)? -remainder : remainder;
        result[31: 0] <= (signed_adjust)? -quotient : quotient;
    end
end

// ================================================================================
// Output signals
//
always @(posedge clk_i)
begin
    if (S == S_DONE)
        ready_o <= 1;
    else
        ready_o <= 0;
end

always @(posedge clk_i)
begin
    if (S == S_DONE) begin
        q_o <= quotient;
        r_o <= remainder;
    end else begin
        q_o <= q_o;
        r_o <= r_o;
    end
end

endmodule
