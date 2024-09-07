`include "defines.v"

module test_top(

    input  wire          clk_i,
    input  wire          rst_i,

    output reg           halt_o

);

   localparam int NrDevices = 3;
   localparam int NrHosts = 1;
   localparam int MemSize = 32'h200000;
   localparam int MemAddrWidth = 21;

   `define     HOST_CORE_PORT 0
   `define     DEV_RAM        1
   `define     DEV_CONSOLE    2
   `define     DEV_CLINT      0
   

    // host and device signals
    wire                        host_req[NrHosts];
    wire                        host_gnt[NrHosts];
    wire [`ADDR_WIDTH-1:0]      host_addr[NrHosts];
    wire                        host_we[NrHosts];
    wire [`DATA_WIDTH-1:0]      host_wdata[NrHosts];
    wire [`DATA_WIDTH-1:0]      host_rdata[NrHosts];

    // devices (slaves)
    wire                        device_req[NrDevices];
    wire [`ADDR_WIDTH-1:0]      device_addr[NrDevices];
    wire                        device_we[NrDevices];
    wire [`DATA_WIDTH-1:0]      device_wdata[NrDevices];
    wire [`DATA_WIDTH-1:0]      device_rdata[NrDevices];

    // Device address mapping
    wire [`ADDR_WIDTH-1:0] cfg_device_addr_base [NrDevices];
    wire [`ADDR_WIDTH-1:0] cfg_device_addr_mask [NrDevices];

    assign cfg_device_addr_base[`DEV_RAM] = 32'h000000;
    assign cfg_device_addr_mask[`DEV_RAM] = ~32'h1FFFFF; // 2 MB
    assign cfg_device_addr_base[`DEV_CONSOLE] = 32'h200000;
    assign cfg_device_addr_mask[`DEV_CONSOLE] = ~32'hFFFFF; // 1 MB
    assign cfg_device_addr_base[`DEV_CLINT] = 32'h2000000;
    assign cfg_device_addr_mask[`DEV_CLINT] = ~32'hFFFF; 

   
    wire halt_from_console;
    assign halt_o = halt_from_console;

    wire irq_external = 1'b0;


    bus #(
        .NrDevices    ( NrDevices ),
        .NrHosts      ( NrHosts   ),
        .DataWidth    ( `DATA_WIDTH ),
        .AddressWidth ( `ADDR_WIDTH )
    ) u_bus (
        .clk_i               (clk_i),
        .rst_i               (rst_i),

        .host_req_i          (host_req     ),
        .host_gnt_o          (host_gnt     ),
        .host_addr_i         (host_addr    ),
        .host_we_i           (host_we      ),
        .host_wdata_i        (host_wdata   ),
        .host_rdata_o        (host_rdata   ),

        .device_req_o        (device_req   ),
        .device_addr_o       (device_addr  ),
        .device_we_o         (device_we    ),
        .device_wdata_o      (device_wdata ),
        .device_rdata_i      (device_rdata ),

        .cfg_device_addr_base,
        .cfg_device_addr_mask
    );

    wire clint_irq_software_o;
    wire clint_irq_timer_o;

    clint clint0(
        .clk_i          (clk_i),
        .rst_i          (rst_i),
        .req_i          (device_req[`DEV_CLINT]),
        .we_i           (device_we[`DEV_CLINT]),
        .addr_i         (device_addr[`DEV_CLINT]),
        .data_i         (device_wdata[`DEV_CLINT]),
		.data_o         (device_rdata[`DEV_CLINT]),
        .timer_irq_o    (clint_irq_timer_o),
        .software_irq_o (clint_irq_software_o)

    );

    console #(
        .LogName("./log/console.log")
        ) console0 (
        .clk_i     (clk_i),
        .rst_i     (rst_i),

        .req_i     (device_req[`DEV_CONSOLE]),
        .we_i      (device_we[`DEV_CONSOLE]),
        .addr_i    (device_addr[`DEV_CONSOLE]),
        .wdata_i   (device_wdata[`DEV_CONSOLE]),
        .halt_o    (halt_from_console)

        );


    // SRAM block for data storage
	dpram #(
        .RAM_SIZE            ( MemSize ),
        .RAM_ADDR_WIDTH      ( MemAddrWidth )
    ) data_ram0(
		.clk_i(clk_i),
        
		.ce_i(device_req[`DEV_RAM]),
		.addr_i(device_addr[`DEV_RAM]),
		.we_i(device_we[`DEV_RAM]),        
		.data_i(device_wdata[`DEV_RAM]),
		.data_o(device_rdata[`DEV_RAM]),

        .inst_ce_i(inst_ce_o),
        .pc_i(pc_o),
        .inst_o(inst_o)        
	);

    wire inst_ce_o;
    wire[`ADDR_WIDTH-1:0] pc_o;
    wire[`DATA_WIDTH-1:0] inst_o;
    
    core_top core_top0(
		.clk_i(clk_i),
		.rst_i(rst_i),

		.rom_ce_o(inst_ce_o),    
		.rom_addr_o(pc_o),
		.rom_data_i(inst_o),

		.ram_ce_o(host_req[`HOST_CORE_PORT]),
		.ram_addr_o(host_addr[`HOST_CORE_PORT]),
		.ram_we_o(host_we[`HOST_CORE_PORT]),        
		.ram_wdata_o(host_wdata[`HOST_CORE_PORT]),
		.ram_rdata_i(host_rdata[`HOST_CORE_PORT]),

        //for int
        .irq_external_i(irq_external),
        .irq_software_i(clint_irq_software_o),
        .irq_timer_i(clint_irq_timer_o)

	);
	
endmodule
