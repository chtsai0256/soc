`include "defines.v"

module csr_file(
    input wire clk_i,
    input wire rst_i,
    
    //from exe read pipe_ctrl
    input  wire[`CSR_ADDR_WIDTH-1:0] raddr_i,
    output reg[`DATA_WIDTH-1:0] rdata_o,

    //wb update csr
    input wire we_i,
    input wire[`CSR_ADDR_WIDTH-1:0] waddr_i,
    input wire[`DATA_WIDTH-1:0] wdata_i,
    input wire instret_incr_i,

    //interrupt signal from clint or plic
    input wire irq_timer_i,
    input wire irq_software_i,  
    input wire irq_external_i,  //from plic and not implemet now so always 0

    //to interrupt ctrl signal for interrupt
    output reg mstatus_ie_o,
    output reg mie_external_o,
    output reg mie_timer_o,
    output reg mie_software_o,
    
    output reg mip_external_o,
    output reg mip_timer_o,
    output reg mip_software_o,
    output reg[`DATA_WIDTH-1:0]  mtvec_o,
    output reg[`DATA_WIDTH-1:0]  epc_o,

    //from ctrl signal 
    input wire interrupt_type_i,
    input wire cause_we_i,
    input wire[3:0] cause_i,
    input wire epc_we_i,
    input wire[`DATA_WIDTH-1:0] epc_i,
    input wire  mstatus_ie_clear_i,
    input wire mstatus_ie_set_i

    );

    // mvendorid
    localparam CSR_MVENDORID_VALUE  = 32'b0;
    // Architecture ID
    localparam CSR_MARCHID_VALUE = {1'b0, 31'd22};
    // mimpid
    localparam  CSR_MIMPID_VALUE = 32'b0;
    // hardid
    localparam CSR_MHARTID = 32'b0;

    /*--------------------------------------------- MISA ------------------------------------------*/
    // The misa CSR is a WARL read-write register reporting the ISA supported by the hart. This
    // register must be readable in any implementation, but a value of zero can be returned to indicate
    // the misa register has not been implemented
    wire [1:0]  mxl; // machine XLEN
    wire [25:0] mextensions; // ISA extensions
    wire [`DATA_WIDTH-1:0] misa; // machine ISA register
    assign mxl = 2'b01;
    assign mextensions = 26'b00000000000001000100000000;  // i and m
    assign misa = {mxl, 4'b0, mextensions};

    /*--------------------------------------------- mcycle ------------------------------------------*/
    // mcycle : counts the number of clock cycles executed by the processor core on which the hart is running.
    // 64-bit precision on all RV32 and RV64 systems.
    reg[`DATA_WIDTH2-1:0] mcycle;   //server as cycle as well

    /*--------------------------------------------- minstret ----------------------------------------*/
    // minstret:  counts the number of instructions the hart has retired.
    // 64-bit precision on all RV32 and RV64 systems.
    reg[`DATA_WIDTH2-1:0] minstret;

    always @ (posedge clk_i) begin
        if (rst_i == 1'b1) begin
            mcycle <= {`ZERO, `ZERO};
            minstret <= {`ZERO, `ZERO};
        end else begin
            mcycle <= mcycle + 64'd1;
            if(instret_incr_i) 
                minstret <= minstret + 64'd1;
        end
    end


    /*--------------------------------------------- mstatus ----------------------------------------*/
    // {SD(1), WPRI(8), TSR(1), TW(1), TVM(1), MXR(1), SUM(1), MPRV(1), XS(2),
    //  FS(2), MPP(2), WPRI(2), SPP(1), MPIE(1), WPRI(1), SPIE(1), UPIE(1),MIE(1), WPRI(1), SIE(1), UIE(1)}
    // Global interrupt-enable bits, MIE, SIE, and UIE, are provided for each privilege mode.
    // xPIE holds the value of the interrupt-enable bit active prior to the trap, and xPP holds the previous privilege mode.
    reg[`DATA_WIDTH-1:0]       mstatus;
    //for machine mode
    reg mstatus_mpie; 
    reg mstatus_mie;
    reg[1:0] mstatus_mpp;
    assign mstatus_mpp = 2'b11; //machine mode
    assign mstatus_ie_o = mstatus_mie;
    assign mstatus = {19'b0,mstatus_mpp,3'b0,mstatus_mpie,3'b0,mstatus_mie, 3'b0};
    wire w_mstatus;
    assign w_mstatus = ((waddr_i == `CSR_MSTATUS_ADDR) && we_i==`WRITE_ENABLE);
    always @(posedge clk_i) begin
        if(rst_i == `RESET_ENABLE) begin
            mstatus_mie <= 1'b0;
            mstatus_mpie <= 1'b1;
        end else if(w_mstatus) begin
            mstatus_mie <= wdata_i[3];
            mstatus_mpie <= wdata_i[7];
        end else if(mstatus_ie_clear_i) begin
            mstatus_mpie <= mstatus_mie; //中斷保留中斷前的 mie
            mstatus_mie <= 1'b0;    
        end else if(mstatus_ie_set_i) begin
            mstatus_mie <= mstatus_mpie; //mret 還原 mie
            mstatus_mpie <= 1'b1;
        end else begin
            mstatus_mie <= mstatus_mie;
            mstatus_mpie <= mstatus_mpie;
        end
    end

    /*--------------------------------------------- mie ----------------------------------------*/
    // mie: {WPRI[31:12], MEIE(1), WPRI(1), SEIE(1), UEIE(1), MTIE(1), WPRI(1), STIE(1), UTIE(1), MSIE(1), WPRI(1), SSIE(1), USIE(1)}
    // MTIE, STIE, and UTIE for M-mode, S-mode, and U-mode timer interrupts respectively.
    // MSIE, SSIE, and USIE fields enable software interrupts in M-mode, S-mode software, and U-mode, respectively.
    // MEIE, SEIE, and UEIE fields enable external interrupts in M-mode, S-mode software, and U-mode, respectively.
    reg[`DATA_WIDTH-1:0]  mie;
    reg           mie_external; // external interrupt enable
    reg           mie_timer;    // timer interrupt enable
    reg           mie_software;       // software interrupt enable

    assign mie_external_o = mie_external;
    assign mie_timer_o = mie_timer;
    assign mie_software_o = mie_software;
    assign mie = {20'b0, mie_external, 3'b0, mie_timer, 3'b0, mie_software, 3'b0};

    wire w_mie;
    assign w_mie = ((waddr_i == `CSR_MIE_ADDR) && we_i==`WRITE_ENABLE);
    always @(posedge clk_i) begin
        if(rst_i == `RESET_ENABLE) begin
            mie_external <= 1'b0;
            mie_timer <= 1'b0;
            mie_software <= 1'b0;
        end else if(w_mie) begin
            mie_external <= wdata_i[11];
            mie_timer <= wdata_i[7];
            mie_software <= wdata_i[3];
        end else begin
            mie_external <= mie_external;
            mie_timer <= mie_timer;
            mie_software <= mie_software;
        end
    end
    

    /*--------------------------------------------- mtvec ----------------------------------------*/
    // The mtvec register is an MXLEN-bit read/write register that holds trap vector configuration,
    // consisting of a vector base address (BASE) and a vector mode (MODE).
    // mtvec = { base[maxlen-1:2], mode[1:0]}
    // The value in the BASE field must always be aligned on a 4-byte boundary, and the MODE setting may impose
    // additional alignment constraints on the value in the BASE field.
    // when mode =2'b00, direct mode, When MODE=Direct, all traps into machine mode cause the pc to be set to the address in the BASE field.
    // when mode =2'b01, Vectored mode, all synchronous exceptions into machine mode cause the pc to be set to the address in the BASE
    // field, whereas interrupts cause the pc to be set to the address in the BASE field plus four times the interrupt cause number.

    reg[`DATA_WIDTH-1:0]     mtvec;
    assign mtvec_o = mtvec;    

    wire w_mtvec;
    assign w_mtvec = ((waddr_i == `CSR_MTVEC_ADDR) && we_i==`WRITE_ENABLE);
    always @(posedge clk_i) begin
        if (rst_i == `RESET_ENABLE) 
            mtvec <= `ZERO;
        else if (w_mtvec)
            mtvec <= wdata_i; 
        else
            mtvec <= mtvec;
    end


    /*--------------------------------------------- mscratch ----------------------------------------*/
    // mscratch : Typically, it is used to hold a pointer to a machine-mode hart-local context space and swapped
    // with a user register upon entry to an M-mode trap handler.
    reg[`DATA_WIDTH-1:0]       mscratch;
    wire w_mscratch;
    assign w_mscratch = ((waddr_i == `CSR_MSCRATCH_ADDR) && we_i==`WRITE_ENABLE);
    always @(posedge clk_i) begin
        if (rst_i == `RESET_ENABLE) 
            mscratch <= `ZERO;
        else if (w_mscratch)
            mscratch <= wdata_i; 
        else
            mscratch <= mscratch;
    end

    /*--------------------------------------------- mepc ----------------------------------------*/
    // When a trap is taken into M-mode, mepc is written with the virtual address of the instruction
    // that was interrupted or that encountered the exception.
    // The low bit of mepc (mepc[0]) is always zero.
    // On implementations that support only IALIGN=32, the two low bits (mepc[1:0]) are always zero.
    reg[`DATA_WIDTH-1:0]       mepc;
    
    assign epc_o = mepc;

    wire w_mepc;
    assign w_mepc = ((waddr_i == `CSR_MEPC_ADDR) && we_i==`WRITE_ENABLE);
    always @(posedge clk_i) begin
        if (rst_i == `RESET_ENABLE) 
            mepc <= `ZERO;
        else if(epc_we_i)
            mepc <= {epc_i[31:2], 2'b00}; 
        else if (w_mepc)
            mepc <= wdata_i; 
        else
            mepc <= mepc;   
    end


    /*--------------------------------------------- mcause ----------------------------------------*/
    // When a trap is taken into M-mode, mcause is written with a code indicating the event that caused the trap.
    // Otherwise, mcause is never written by the implementation, though it may be explicitly written by software.
    // mcause = {interupt[31:30], Exception code }
    // The Interrupt bit in the mcause register is set if the trap was caused by an interrupt. The Exception
    // Code field contains a code identifying the last exception.

    reg[`DATA_WIDTH-1:0]       mcause;
    reg [3:0] cause; // interrupt cause
    reg [26:0] cause_rem; // remaining bits of mcause register
    reg interrupt_type; // interrupt or exception signal

    assign mcause = {interrupt_type, cause_rem, cause};

    wire w_mcause;
    assign w_mcause = ((waddr_i == `CSR_MCAUSE_ADDR) && we_i==`WRITE_ENABLE);
    always @(posedge clk_i) begin
        if(rst_i == `RESET_ENABLE) begin
            cause <= 4'b0000;
            cause_rem <= 27'b0;
            interrupt_type <= 1'b0;
        end else if(cause_we_i) begin
            cause <= cause_i;
            cause_rem <= 27'b0;
            interrupt_type <= interrupt_type_i;
        end else if(w_mcause) begin
            cause <= wdata_i[3:0];
            cause_rem <= wdata_i[30:4];
            interrupt_type <= wdata_i[31];
        end
    end

    /*--------------------------------------------- mip ----------------------------------------*/
    // mip: {WPRI[31:12], MEIP(1), WPRI(1), SEIP(1), UEIP(1), MTIP(1), WPRI(1), STIP(1), UTIP(1), MSIP(1), WPRI(1), SSIP(1), USIP(1)}
    // The MTIP, STIP, UTIP bits correspond to timer interrupt-pending bits for machine, supervisor, and user timer interrupts, respectively.
    reg[`DATA_WIDTH-1:0]       mip;
    reg mip_external; // external interrupt pending
    reg mip_timer; // timer interrupt pending
    reg mip_software; // software interrupt pending

    assign mip = {20'b0, mip_external, 3'b0, mip_timer, 3'b0, mip_software, 3'b0};

    assign mip_external_o = mip_external;
    assign mip_timer_o = mip_timer;
    assign mip_software_o = mip_software;

    always @(posedge clk_i) begin
        if (rst_i == `RESET_ENABLE) begin
            mip_external <= 1'b0;
            mip_timer <= 1'b0;
            mip_software <= 1'b0;
        end else begin
            mip_external <= irq_external_i;
            mip_timer <= irq_timer_i;
            mip_software <= irq_software_i;
        end
    end

    /*--------------------------------------------- mtval ----------------------------------------*/
    // When a trap is taken into M-mode, mtval is either set to zero or written with exception-specific information
    // to assist software in handling the trap.
    // When a hardware breakpoint is triggered, or an instruction-fetch, load, or store address-misaligned,
    // access, or page-fault exception occurs, mtval is written with the faulting virtual address.
    // On an illegal instruction trap, mtval may be written with the first XLEN or ILEN bits of the faulting instruction
    reg[`DATA_WIDTH-1:0]       mtval;
    wire w_mtval;
    assign w_mtval = ((waddr_i == `CSR_MTVAL_ADDR) && we_i==`WRITE_ENABLE);
    always @(posedge clk_i) begin
        if (rst_i == 1'b1) 
            mtval <= `ZERO;
        else if (w_mtval)
            mtval <= wdata_i; 
    end

    /* ----------------------- read csr --------------------------------------*/
    always @ (*) begin
        // bypass the write port to the read port
        if ((waddr_i == raddr_i) && (we_i == `WRITE_ENABLE)) begin
            rdata_o = wdata_i;
        end else begin
            case (raddr_i)
                `CSR_MVENDORID_ADDR: begin
                    rdata_o = CSR_MVENDORID_VALUE;
                end

                `CSR_MARCHID_ADDR: begin
                    rdata_o = CSR_MARCHID_VALUE;
                end

                `CSR_MIMPID_ADDR: begin
                    rdata_o = CSR_MIMPID_VALUE;
                end

                `CSR_MHARTID_ADDR: begin
                    rdata_o = CSR_MHARTID;
                end

                `CSR_MISA_ADDR: begin
                    rdata_o = misa;
                end

                `CSR_MCYCLE_ADDR, `CSR_CYCLE_ADDR: begin
                    rdata_o = mcycle[`DATA_WIDTH-1:0];
                end

                `CSR_MCYCLEH_ADDR, `CSR_CYCLEH_ADDR: begin
                    rdata_o = mcycle[63:32];
                end

               `CSR_MINSTRET_ADDR: begin
                    rdata_o = minstret[`DATA_WIDTH-1:0];
                end

                `CSR_MSTATUS_ADDR: begin
                    rdata_o = mstatus;
                end

                `CSR_MIE_ADDR: begin
                    rdata_o = mie;
                end

                `CSR_MTVEC_ADDR: begin
                    rdata_o = mtvec;
                end

                `CSR_MSCRATCH_ADDR: begin
                    rdata_o = mscratch;
                end

                `CSR_MEPC_ADDR: begin
                    rdata_o = mepc;
                end

                `CSR_MCAUSE_ADDR: begin
                    rdata_o = mcause;
                end

                `CSR_MIP_ADDR: begin
                    rdata_o = mip;
                end

                `CSR_MTVAL_ADDR: begin
                    rdata_o = mtval;
                end

                default: begin
                    rdata_o = `ZERO;
                end
            endcase // 
        end //end else begin
    end //always @ (*) begin

endmodule
