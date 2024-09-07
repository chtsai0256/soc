`include "defines.v"

module interrupt_ctrl(
    input wire                   clk_i,
    input wire                   rst_i,

    input wire[`DATA_WIDTH-1:0]  exception_i, //from mem (ecall, mret)
    input wire[`DATA_WIDTH-1:0]  pc_i,   // from ctrl

    // from csr
    input wire                   mstatus_ie_i,    // global interrupt enabled or not
    input wire                   mie_external_i,  // external interrupt enbled or not
    input wire                   mie_timer_i,     // timer interrupt enabled or not
    input wire                   mie_sw_i,        // sw interrupt enabled or not

    input wire                   mip_external_i,   // external interrupt pending
    input wire                   mip_timer_i,      // timer interrupt pending
    input wire                   mip_sw_i,         // sw interrupt pending

    input wire[`DATA_WIDTH-1:0]  mtvec_i,          // the trap vector
    input wire[`DATA_WIDTH-1:0]  epc_i,            // get the epc for the mret instruction

    //to csr
    output reg                   interrupt_type_o,
    output reg                   cause_we_o,
    output reg[3:0]              trap_casue_o,

    output reg                   epc_we_o,
    output reg[`DATA_WIDTH-1:0]  epc_o,

    output reg                   mstatus_ie_clear_o, //for interrupt
    output reg                   mstatus_ie_set_o, //for mret

    /* ---signals to other stages of the pipeline  ----*/
    output reg                   interrupt_en_o,   // clear all pipeline
    output reg[`DATA_WIDTH-1:0]  new_pc_o   // pc_reg = new_pc_o
);

    /* --------------------- handle the the interrupt and exceptions -------------------*/
    // state registers
    reg [3:0] S;
    reg [3:0] S_nxt;

    // machine states
    parameter RESET         = 4'b0001;
    parameter OPERATING     = 4'b0010;
    parameter TRAP_TAKEN    = 4'b0100;
    parameter TRAP_RETURN   = 4'b1000;

    //exception
    wire   mret, ecall;
    assign {ecall, mret}=exception_i[1:0];

    /* check there is a interrupt on pending*/
    wire   eip; 
    wire   tip;
    wire   sip;
    wire   ip;

    assign eip = mie_external_i & mip_external_i;
    assign tip = mie_timer_i &  mip_timer_i;
    assign sip = mie_sw_i & mip_sw_i;
    assign ip = eip | tip | sip;


    /* an interrupt need to be processed */
    wire   trap_happened;
    assign trap_happened = (mstatus_ie_i & ip) | ecall; //mstatus.MIE & MIP & MIE

    always @(posedge clk_i) begin
        if(rst_i == `RESET_ENABLE)
            S <= RESET;
        else
            S <= S_nxt;
    end
    //state transfer
    always @ (*)   begin
        case(S)
            RESET: begin
                S_nxt = OPERATING;
            end
            OPERATING: begin
                if(trap_happened)
                    S_nxt = TRAP_TAKEN;
                else if(mret)
                    S_nxt = TRAP_RETURN;
                else
                    S_nxt = OPERATING;
            end
            TRAP_TAKEN: begin
                S_nxt = OPERATING;
            end
            TRAP_RETURN: begin
                S_nxt = OPERATING;
            end
            default: begin
                S_nxt = OPERATING;
            end
        endcase
    end



    reg [29:0]         mtvec_base; // machine trap base address

    assign mtvec_base = mtvec_i[31:2]; // ISR vector base addr
    
    reg[`DATA_WIDTH-1:0] trap_mux_out;
    wire [`DATA_WIDTH-1:0] vec_mux_out;
    wire [`DATA_WIDTH-1:0] base_offset;

    // mtvec = { base[maxlen-1:2], mode[1:0]}
    // The value in the BASE field must always be aligned on a 4-byte boundary, and the MODE setting may impose
    // additional alignment constraints on the value in the BASE field.
    // when mode =2'b00, direct mode, When MODE=Direct, all traps into machine mode cause the pc to be set to the address in the BASE field.
    // when mode =2'b01, Vectored mode, all synchronous exceptions into machine mode cause the pc to be set to the address in the BASE
    // field, whereas interrupts cause the pc to be set to the address in the BASE field plus four times the interrupt cause number.
    assign base_offset = {26'b0, trap_casue_o, 2'b0};  // trap_casue_o * 4
    assign vec_mux_out = mtvec_i[0] ? {mtvec_base, 2'b00} + base_offset : {mtvec_base, 2'b00};
    assign trap_mux_out = interrupt_type_o ? vec_mux_out : {mtvec_base, 2'b00};

    reg exception;
    always @(posedge clk_i) 
        exception <= (|exception_i);

    // output generation
    always @ (*)   begin
        case(S)
            RESET: begin
                interrupt_en_o = 1'b0;
                new_pc_o = `ZERO;
                epc_we_o = 1'b0;
                cause_we_o = 1'b0;
                mstatus_ie_clear_o = 1'b0;
                mstatus_ie_set_o = 1'b0;
            end

            OPERATING: begin
                interrupt_en_o = 1'b0;
                new_pc_o = `ZERO;
                epc_we_o = 1'b0;
                cause_we_o = 1'b0;
                mstatus_ie_clear_o = 1'b0;
                mstatus_ie_set_o = 1'b0;
            end

            TRAP_TAKEN: begin
                interrupt_en_o = 1'b1;
                new_pc_o = trap_mux_out;       // jump to the trap handler
                epc_we_o = 1'b1;              // update the epc csr
                cause_we_o = 1'b1;            // update the mcause csr
                mstatus_ie_clear_o = 1'b1;     // disable the mie bit in the mstatus
                mstatus_ie_set_o = 1'b0;
                epc_o = (exception) ? pc_i - 32'h4 : pc_i;
            end

            TRAP_RETURN: begin
                interrupt_en_o = 1'b1;
                new_pc_o =  epc_i;
                epc_we_o = 1'b0;
                cause_we_o = 1'b0;
                mstatus_ie_clear_o = 1'b0;
                mstatus_ie_set_o = 1'b1;      //enable the mie
            end

            default: begin
                interrupt_en_o = 1'b0;
                new_pc_o = `ZERO;
                epc_we_o = 1'b0;
                cause_we_o = 1'b0;
                mstatus_ie_clear_o = 1'b0;
                mstatus_ie_set_o = 1'b0;
            end
        endcase
    end


    /* update the mcause csr */
    always @(posedge clk_i)
    begin
        if(rst_i == `RESET_ENABLE) begin
            trap_casue_o <= 4'b0;
            interrupt_type_o <= 1'b0;
        end else if(S == OPERATING) begin
            if(mstatus_ie_i & eip) begin
                trap_casue_o <= 4'd11; // M-mode external interrupt
                interrupt_type_o <= 1'b1; //interrupt
            end else if(mstatus_ie_i & sip) begin
                trap_casue_o <= 4'd3; // M-mode software interrupt
                interrupt_type_o <= 1'b1; //interrupt
            end else if(mstatus_ie_i & tip) begin
                trap_casue_o <= 4'd7; // M-mode timer interrupt
                interrupt_type_o <= 1'b1; //interrupt
            end else if(ecall) begin
                trap_casue_o <= 4'd11; // ecall from M-mode, cause = 11, exception
                interrupt_type_o <= 1'b0; //exception    
            end        
        end
    end

endmodule
