module pipe_ctrl(
    input wire clk_i,
    input wire rst_i,
 
    //input wire  stallreq_from_if_i,  //waiting ROM delay
    input wire  stallreq_from_id_i,  //load hazard 

    /* ---signals to other stages of the pipeline  ----*/
    output reg[5:0]              stall_o   // stall request to PC,IF_ID, ID_EXE, EXE_MEM, MEM_WB， one bit for one stage respectively
    );


    always @ (*) begin
        if(rst_i == 1'b1) begin
            stall_o = 6'b000000;
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
