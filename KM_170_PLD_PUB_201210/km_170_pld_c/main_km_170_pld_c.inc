-- WARNING: Do NOT edit the input and output ports in this file in a text
-- editor if you plan to continue editing the block that represents it in
-- the Block Editor! File corruption is VERY likely to occur.

-- Copyright (C) 1991-2015 Altera Corporation. All rights reserved.
-- Your use of Altera Corporation's design tools, logic functions 
-- and other software and tools, and its AMPP partner logic 
-- functions, and any output files from any of the foregoing 
-- (including device programming or simulation files), and any 
-- associated documentation or information are expressly subject 
-- to the terms and conditions of the Altera Program License 
-- Subscription Agreement, the Altera Quartus II License Agreement,
-- the Altera MegaCore Function License Agreement, or other 
-- applicable license agreement, including, without limitation, 
-- that your use is for the sole purpose of programming logic 
-- devices manufactured by Altera and sold by Altera or its 
-- authorized distributors.  Please refer to the applicable 
-- agreement for further details.


-- Generated by Quartus II 64-Bit Version 15.0 (Build Build 145 04/22/2015)
-- Created on Wed Oct 28 15:03:35 2020

FUNCTION main_km_170_pld_c (CS_PLD, LBXA[9..0], LB_WR, LB_RD, LBDXin[7..0], STB_FRM, F16M_C, VOICE_B[23..0], VOICE_A[23..0])
	RETURNS (LBDXout[7..0], LBDXoutEna, INT_CLS, TO_MPUC[9..1], TO_OPMC[4..1], DE_OPMC[4..1], STB_A, STB_B, VOICE_A_O[25..24], VOICE_B_O[25..24], DSP67_DR0, DSP67_FSR0, DSP67_FSX0, DSP67_CLKR0, DSP67_CLKX0, DE_OPMR[4..1], TO_OPMR[4..1], DSP67_DR1, SPEC_TST1, SPEC_TST3, RED_C, GREEN_C);