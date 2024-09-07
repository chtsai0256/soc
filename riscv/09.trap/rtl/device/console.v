module console #(
  parameter string LogName = "./log/console.log",
  parameter bit    FlushOnChar = 1
) (
  input wire              clk_i,
  input wire              rst_i,

  input  wire             req_i,
  input  wire             we_i,
  input  wire[31:0]       addr_i,
  input  wire[31:0]       wdata_i,
  output reg              halt_o  // halt signal move here because halt_addr is a register in console
);

  localparam reg[7:0] CHAR_OUT_ADDR = 8'h4;
  localparam reg[7:0] SIM_CTRL_ADDR = 8'h8;   //halt register

  reg [7:0] ctrl_addr;
  reg [2:0] sim_finish = 3'b000;

  integer log_fd;

  initial begin
    log_fd = $fopen(LogName, "w");
  end

  final begin
    $fclose(log_fd);
  end

  assign ctrl_addr = addr_i[7:0];

  always @(posedge clk_i) begin
    if (rst_i == `RESET_ENABLE) begin
      sim_finish <= 'b0;
    end else begin
      if (req_i & we_i) begin
        case (ctrl_addr)

          CHAR_OUT_ADDR: begin
              $fwrite(log_fd, "%c", wdata_i[7:0]);  //logging
              $write("%c", wdata_i[7:0]);           //display in monitor
              if(FlushOnChar) begin
                $fflush(log_fd);
              end
          end

          SIM_CTRL_ADDR: begin
            if (wdata_i[0] && (sim_finish == 'b0)) begin
              //$display("Terminating simulation by software request.");
              sim_finish <= 3'b001;
            end
          end

          default: begin
          end
          
        endcase
      end
      else begin
      end
    end

    if (sim_finish != 'b0) begin
      sim_finish <= sim_finish + 1;
    end
    if (sim_finish >= 3'b010)  //halt after 3 cycles 
      halt_o <= 1'b1;     
    else 
      halt_o <= 1'b0;
  end

endmodule
