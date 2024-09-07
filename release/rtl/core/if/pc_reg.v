`include "defines.v"

module pc_reg(
    input wire clk_i,
    input wire rst_i,
    
    //from pipe_ctrl
    input wire[`ADDR_WIDTH-1:0] new_pc_i,
    input wire flush_jump_i, //for jump
    //from ctrl
    input wire[5:0] stall_i,

    output reg[`ADDR_WIDTH-1:0] pc_o,
    output reg ce_o,
    //for int
    input wire flush_int_i
            
    );

    always @(posedge clk_i)   begin
        if (rst_i == 1'b1) begin
            ce_o <= 1'b0;
        end else begin
            ce_o <= 1'b1;
        end
    end

    wire is_new_pc = (flush_int_i | flush_jump_i);
    always @(posedge clk_i)  begin
        if (ce_o == 1'b0) 
            pc_o <= `REBOOT_ADDR;
        else if (is_new_pc)
            pc_o <= new_pc_i;
        else if (stall_i[0]==`STOP) 
            pc_o <= pc_o;  //loop
        else  
            pc_o <= pc_o + 4;
    end

endmodule
