-- WARNING: Do NOT edit the input and output ports in this file in a text
-- editor if you plan to continue editing the block that represents it in
-- the Block Editor! File corruption is VERY likely to occur.

-- Copyright (C) 1991-2010 Altera Corporation
-- Your use of Altera Corporation's design tools, logic functions 
-- and other software and tools, and its AMPP partner logic 
-- functions, and any output files from any of the foregoing 
-- (including device programming or simulation files), and any 
-- associated documentation or information are expressly subject 
-- to the terms and conditions of the Altera Program License 
-- Subscription Agreement, Altera MegaCore Function License 
-- Agreement, or other applicable license agreement, including, 
-- without limitation, that your use is for the sole purpose of 
-- programming logic devices manufactured by Altera and sold by 
-- Altera or its authorized distributors.  Please refer to the 
-- applicable agreement for further details.


-- Generated by Quartus II Version 9.1 (Build Build 350 03/24/2010)
-- Created on Wed Apr 03 22:00:03 2019

FUNCTION rx_from_opm (f_32m, d_i[7..0], bit_cnt[11..0], gc128m)
	RETURNS (fs_ok[7..0], data_rx[3..0][24..0], en_rdy_d_rx, num_slot_rx[4..0], d_opm_i[3..0], en_h_rx, en_fix_h_rx);
