module pipe_ctrl(
    input wire clk_i,
    input wire rst_i,
 
    //input wire  stallreq_from_if_i,  //waiting ROM delay
    input wire  stallreq_from_id_i,  //load hazard 
    input wire  stallreq_from_exe_i,  //jump hazard 
    input wire  jump_en_i,
    input wire[`ADDR_WIDTH-1:0] jump_addr_i,

    input wire[`ADDR_WIDTH-1:0] pc_i, //from mem

    /* ---signals to other stages of the pipeline  ----*/
    output reg[5:0]              stall_o,   // stall request to PC,IF_ID, ID_EXE, EXE_MEM, MEM_WB， one bit for one stage respectively
    output reg                   flush_jump_o, //flush IF_ID, ID_EXE
    output reg                   flush_int_o, //flush IF_ID, ID_EXE, EXE_MEM, MEM_WB
    output reg[`ADDR_WIDTH-1:0]  new_pc_o,     // change pc

    //for int
    //input from interrupt ctrl
    input wire[`ADDR_WIDTH-1:0]  isr_pc_i,
    input wire                  int_en_i,
    output reg[`ADDR_WIDTH-1:0]  pc_o //to interrupt_ctrl for mepc
    
    );

    assign flush_jump_o = jump_en_i; 
    assign flush_int_o = int_en_i;
    assign new_pc_o = jump_addr_i;

    reg[`ADDR_WIDTH-1:0] current_pc;
    assign pc_o = (|pc_i)? pc_i: current_pc;

    always @(posedge clk_i) begin
        if (jump_en_i)
            current_pc <= jump_addr_i;
        else
            current_pc <= current_pc;
    end

    always @ (*) begin
        if (int_en_i) begin
            new_pc_o = isr_pc_i;
        end else if(jump_en_i) begin
            new_pc_o = jump_addr_i;
        end else begin
            new_pc_o = `ZERO;
        end
    end

    always @ (*) begin
        if(rst_i == 1'b1) begin
            stall_o = 6'b000000;
        // stall request from exu: stop the PC,IF_ID, ID_EXE, EXE_MEM            
        end else if (stallreq_from_exe_i == `STOP) begin
            stall_o = 6'b001111;
        // stall request from id: stop PC,IF_ID, ID_EXE
        end else if(stallreq_from_id_i == `STOP) begin
            stall_o = 6'b000111;
		// stall request from if: stop the PC,IF_ID, ID_EXE
        //end else if(stallreq_from_if_i == `STOP) begin
        //    stall_o = 6'b000111;
        end else begin
            stall_o = 6'b000000;
        end // if
    end // always

endmodule
