// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

module bus #(
  parameter NrDevices    = 1,
  parameter NrHosts      = 1,
  parameter DataWidth    = 32,
  parameter AddressWidth = 32
) (
  input wire                      clk_i,
  input wire                      rst_i,

  // Hosts (masters)
  input  wire                     host_req_i    [NrHosts],
  output reg                      host_gnt_o    [NrHosts],

  input  wire[AddressWidth-1:0]   host_addr_i   [NrHosts],
  input  wire                     host_we_i     [NrHosts],
  input  wire[DataWidth-1:0]      host_wdata_i  [NrHosts],
  output reg[DataWidth-1:0]       host_rdata_o  [NrHosts],
  
  // Devices (slaves)
  output reg                     device_req_o    [NrDevices],

  output reg[AddressWidth-1:0]   device_addr_o   [NrDevices],
  output reg                     device_we_o     [NrDevices],
  output reg[DataWidth-1:0]      device_wdata_o  [NrDevices],
  input  wire[DataWidth-1:0]     device_rdata_i  [NrDevices],
  
  // Device address map
  input wire[AddressWidth-1:0]    cfg_device_addr_base [NrDevices],
  input wire[AddressWidth-1:0]    cfg_device_addr_mask [NrDevices]
);

  localparam NumBitsHostSel = NrHosts > 1 ? clog2(NrHosts) : 1;
  localparam NumBitsDeviceSel = NrDevices > 1 ? clog2(NrDevices) : 1;

  reg [NumBitsHostSel-1:0] host_sel_req, host_sel_resp;
  reg [NumBitsDeviceSel-1:0] device_sel_req, device_sel_resp;

  // Master select prio arbiter
  always @ ( * ) begin
    host_sel_req = '0;
    for (integer host = NrHosts - 1; host >= 0; host = host - 1) begin
      if (host_req_i[host]) begin
        host_sel_req = NumBitsDeviceSel'(host);
      end
    end
  end

  // Device select
  always @ ( * ) begin
    device_sel_req = 0;
    for (integer device = 0; device < NrDevices; device = device + 1) begin
      if ((host_addr_i[host_sel_req] & cfg_device_addr_mask[device]) == cfg_device_addr_base[device]) begin
        device_sel_req = NumBitsDeviceSel'(device);
      end
    end
  end

  always @(*) begin         
     if (rst_i==1'b1) begin
        host_sel_resp = '0;
        device_sel_resp = '0;
     end else begin
        // Responses are always expected 1 cycle after the request
        device_sel_resp = device_sel_req;
        host_sel_resp = host_sel_req;
     end
  end

  always @ ( * ) begin
    for (integer device = 0; device < NrDevices; device = device + 1) begin
      if (NumBitsDeviceSel'(device) == device_sel_req) begin
        device_req_o[device]   = host_req_i[host_sel_req];
        device_we_o[device]    = host_we_i[host_sel_req];
        device_addr_o[device]  = host_addr_i[host_sel_req];
        device_wdata_o[device] = host_wdata_i[host_sel_req];
      end else begin
        device_req_o[device]   = 1'b0;
        device_we_o[device]    = 1'b0;
        device_addr_o[device]  = 'b0;
        device_wdata_o[device] = 'b0;
      end
    end
  end

  always @ ( * ) begin
    for (integer host = 0; host < NrHosts; host = host + 1) begin
      host_gnt_o[host] = 1'b0;
      if (NumBitsHostSel'(host) == host_sel_resp) begin
        host_rdata_o[host]  = device_rdata_i[device_sel_resp];
      end else begin
        host_rdata_o[host]  = 'b0;
      end
    end
    host_gnt_o[host_sel_req] = host_req_i[host_sel_req];
  end


  function integer clog2 (input integer n); begin
    n = n - 1;
    for (clog2 = 0; n > 0; clog2 = clog2 + 1)
      n = n >> 1;
  end
  endfunction  
endmodule
