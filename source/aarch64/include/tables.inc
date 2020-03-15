/*BEGIN_HEADER
*
* Copyright (C) 2020 Mahdi Safsafi.
*
* https://github.com/MahdiSafsafi/AMED
*
* See licence file 'LICENCE' for use and distribution rights.
*
*END_HEADER*/


/*===----------------------------------------------------------------------===*\
|*                                                                            *|
|*                Automatically generated file, do not edit!                  *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

static const amed_db_tv tbl_at_op_items[14] = 
{{.at_op=MK_AT_OP(S1E1R), .encoding=0, .is_representable=1},
{.at_op=MK_AT_OP(S1E1W), .encoding=1, .is_representable=1},
{.at_op=MK_AT_OP(S1E0R), .encoding=2, .is_representable=1},
{.at_op=MK_AT_OP(S1E0W), .encoding=3, .is_representable=1},
{.at_op=MK_AT_OP(S1E1RP), .encoding=8, .is_representable=1},
{.at_op=MK_AT_OP(S1E1WP), .encoding=9, .is_representable=1},
{.at_op=MK_AT_OP(S1E2R), .encoding=64, .is_representable=1},
{.at_op=MK_AT_OP(S1E2W), .encoding=65, .is_representable=1},
{.at_op=MK_AT_OP(S12E1R), .encoding=68, .is_representable=1},
{.at_op=MK_AT_OP(S12E1W), .encoding=69, .is_representable=1},
{.at_op=MK_AT_OP(S12E0R), .encoding=70, .is_representable=1},
{.at_op=MK_AT_OP(S12E0W), .encoding=71, .is_representable=1},
{.at_op=MK_AT_OP(S1E3R), .encoding=96, .is_representable=1},
{.at_op=MK_AT_OP(S1E3W), .encoding=97, .is_representable=1}}
;
static const amed_db_table tbl_at_op = { .count=14, .items=(void*)&tbl_at_op_items[0] };
static const amed_db_tv tbl_bti_op_items[4] = 
{{.encoding=0, .is_representable=1, .omitted=1},
{.bti_op=MK_BTI_OP(c), .encoding=1, .is_representable=1},
{.bti_op=MK_BTI_OP(j), .encoding=2, .is_representable=1},
{.bti_op=MK_BTI_OP(jc), .encoding=3, .is_representable=1}}
;
static const amed_db_table tbl_bti_op = { .count=4, .items=(void*)&tbl_bti_op_items[0] };
static const amed_db_tv tbl_dc_op_items[28] = 
{{.dc_op=MK_DC_OP(IVAC), .encoding=49, .is_representable=1},
{.dc_op=MK_DC_OP(ISW), .encoding=50, .is_representable=1},
{.dc_op=MK_DC_OP(IGVAC), .encoding=51, .is_representable=1},
{.dc_op=MK_DC_OP(IGSW), .encoding=52, .is_representable=1},
{.dc_op=MK_DC_OP(IGDVAC), .encoding=53, .is_representable=1},
{.dc_op=MK_DC_OP(IGDSW), .encoding=54, .is_representable=1},
{.dc_op=MK_DC_OP(CSW), .encoding=82, .is_representable=1},
{.dc_op=MK_DC_OP(CGSW), .encoding=84, .is_representable=1},
{.dc_op=MK_DC_OP(CGDSW), .encoding=86, .is_representable=1},
{.dc_op=MK_DC_OP(CISW), .encoding=114, .is_representable=1},
{.dc_op=MK_DC_OP(CIGSW), .encoding=116, .is_representable=1},
{.dc_op=MK_DC_OP(CIGDSW), .encoding=118, .is_representable=1},
{.dc_op=MK_DC_OP(ZVA), .encoding=417, .is_representable=1},
{.dc_op=MK_DC_OP(GVA), .encoding=419, .is_representable=1},
{.dc_op=MK_DC_OP(GZVA), .encoding=420, .is_representable=1},
{.dc_op=MK_DC_OP(CVAC), .encoding=465, .is_representable=1},
{.dc_op=MK_DC_OP(CGVAC), .encoding=467, .is_representable=1},
{.dc_op=MK_DC_OP(CGDVAC), .encoding=469, .is_representable=1},
{.dc_op=MK_DC_OP(CVAU), .encoding=473, .is_representable=1},
{.dc_op=MK_DC_OP(CVAP), .encoding=481, .is_representable=1},
{.dc_op=MK_DC_OP(CGVAP), .encoding=483, .is_representable=1},
{.dc_op=MK_DC_OP(CGDVAP), .encoding=485, .is_representable=1},
{.dc_op=MK_DC_OP(CVADP), .encoding=489, .is_representable=1},
{.dc_op=MK_DC_OP(CGVADP), .encoding=491, .is_representable=1},
{.dc_op=MK_DC_OP(CGDVADP), .encoding=493, .is_representable=1},
{.dc_op=MK_DC_OP(CIVAC), .encoding=497, .is_representable=1},
{.dc_op=MK_DC_OP(CIGVAC), .encoding=499, .is_representable=1},
{.dc_op=MK_DC_OP(CIGDVAC), .encoding=501, .is_representable=1}}
;
static const amed_db_table tbl_dc_op = { .count=28, .items=(void*)&tbl_dc_op_items[0] };
static const amed_db_tv tbl_extend0_items[9] = 
{{.encoding=0, .extend=MK_EXTEND(UXTB), .is_representable=1},
{.encoding=1, .extend=MK_EXTEND(UXTH), .is_representable=1},
{.encoding=2, .extend=MK_EXTEND(LSL), .hasalias=1, .is_representable=1},
{.encoding=3, .extend=MK_EXTEND(UXTX), .is_representable=1},
{.encoding=4, .extend=MK_EXTEND(SXTB), .is_representable=1},
{.encoding=5, .extend=MK_EXTEND(SXTH), .is_representable=1},
{.encoding=6, .extend=MK_EXTEND(SXTW), .is_representable=1},
{.encoding=7, .extend=MK_EXTEND(SXTX), .is_representable=1},
{.alias=1, .encoding=2, .extend=MK_EXTEND(UXTW), .is_representable=1}}
;
static const amed_db_table tbl_extend0 = { .count=9, .items=(void*)&tbl_extend0_items[0] };
static const amed_db_tv tbl_extend1_items[9] = 
{{.encoding=0, .extend=MK_EXTEND(UXTB), .is_representable=1},
{.encoding=1, .extend=MK_EXTEND(UXTH), .is_representable=1},
{.encoding=2, .extend=MK_EXTEND(UXTW), .is_representable=1},
{.encoding=3, .extend=MK_EXTEND(LSL), .hasalias=1, .is_representable=1},
{.encoding=4, .extend=MK_EXTEND(SXTB), .is_representable=1},
{.encoding=5, .extend=MK_EXTEND(SXTH), .is_representable=1},
{.encoding=6, .extend=MK_EXTEND(SXTW), .is_representable=1},
{.encoding=7, .extend=MK_EXTEND(SXTX), .is_representable=1},
{.alias=1, .encoding=3, .extend=MK_EXTEND(UXTX), .is_representable=1}}
;
static const amed_db_table tbl_extend1 = { .count=9, .items=(void*)&tbl_extend1_items[0] };
static const amed_db_tv tbl_extend2_items[3] = 
{{.encoding=2, .extend=MK_EXTEND(UXTW), .is_representable=1},
{.encoding=6, .extend=MK_EXTEND(SXTW), .is_representable=1},
{.encoding=7, .extend=MK_EXTEND(SXTX), .is_representable=1}}
;
static const amed_db_table tbl_extend2 = { .count=3, .items=(void*)&tbl_extend2_items[0] };
static const amed_db_tv tbl_extend3_items[4] = 
{{.encoding=2, .extend=MK_EXTEND(UXTW), .is_representable=1},
{.encoding=3, .extend=MK_EXTEND(LSL), .is_representable=1},
{.encoding=6, .extend=MK_EXTEND(SXTW), .is_representable=1},
{.encoding=7, .extend=MK_EXTEND(SXTX), .is_representable=1}}
;
static const amed_db_table tbl_extend3 = { .count=4, .items=(void*)&tbl_extend3_items[0] };
static const amed_db_tv tbl_extend4_items[4] = 
{{.absent=1, .encoding=0, .is_representable=1},
{.encoding=1, .extend=MK_EXTEND(LSL), .is_representable=1},
{.encoding=3, .extend=MK_EXTEND(LSL), .is_representable=1},
{.encoding=2, .extend=MK_EXTEND(LSL), .is_representable=1}}
;
static const amed_db_table tbl_extend4 = { .count=4, .items=(void*)&tbl_extend4_items[0] };
static const amed_db_tv tbl_extend5_items[2] = 
{{.encoding=0, .extend=MK_EXTEND(UXTW), .is_representable=1},
{.encoding=1, .extend=MK_EXTEND(SXTW), .is_representable=1}}
;
static const amed_db_table tbl_extend5 = { .count=2, .items=(void*)&tbl_extend5_items[0] };
static const amed_db_tv tbl_fpimm0_items[2] = 
{{.encoding=0, .fpvalue=0.5, .is_representable=1},
{.encoding=1, .fpvalue=1.0, .is_representable=1}}
;
static const amed_db_table tbl_fpimm0 = { .count=2, .items=(void*)&tbl_fpimm0_items[0] };
static const amed_db_tv tbl_fpimm1_items[2] = 
{{.encoding=0, .fpvalue=0.0, .is_representable=1},
{.encoding=1, .fpvalue=1.0, .is_representable=1}}
;
static const amed_db_table tbl_fpimm1 = { .count=2, .items=(void*)&tbl_fpimm1_items[0] };
static const amed_db_tv tbl_fpimm2_items[2] = 
{{.encoding=0, .fpvalue=0.5, .is_representable=1},
{.encoding=1, .fpvalue=2.0, .is_representable=1}}
;
static const amed_db_table tbl_fpimm2 = { .count=2, .items=(void*)&tbl_fpimm2_items[0] };
static const amed_db_tv tbl_ic_op_items[3] = 
{{.encoding=8, .ic_op=MK_IC_OP(IALLUIS), .is_representable=1},
{.encoding=40, .ic_op=MK_IC_OP(IALLU), .is_representable=1},
{.encoding=425, .ic_op=MK_IC_OP(IVAU), .is_representable=1}}
;
static const amed_db_table tbl_ic_op = { .count=3, .items=(void*)&tbl_ic_op_items[0] };
static const amed_db_tv tbl_imm0_items[4] = 
{{.encoding=0, .is_representable=1, .value=0},
{.encoding=1, .is_representable=1, .value=90},
{.encoding=2, .is_representable=1, .value=180},
{.encoding=3, .is_representable=1, .value=270}}
;
static const amed_db_table tbl_imm0 = { .count=4, .items=(void*)&tbl_imm0_items[0] };
static const amed_db_tv tbl_imm1_items[2] = 
{{.encoding=0, .is_representable=1, .value=0},
{.encoding=1, .is_representable=1, .value=8}}
;
static const amed_db_table tbl_imm1 = { .count=2, .items=(void*)&tbl_imm1_items[0] };
static const amed_db_tv tbl_imm2_items[4] = 
{{.encoding=0, .is_representable=1, .value=0},
{.encoding=1, .is_representable=1, .value=8},
{.encoding=2, .is_representable=1, .value=16},
{.encoding=3, .is_representable=1, .value=24}}
;
static const amed_db_table tbl_imm2 = { .count=4, .items=(void*)&tbl_imm2_items[0] };
static const amed_db_tv tbl_imm3_items[2] = 
{{.encoding=0, .is_representable=1, .value=8},
{.encoding=1, .is_representable=1, .value=16}}
;
static const amed_db_table tbl_imm3 = { .count=2, .items=(void*)&tbl_imm3_items[0] };
static const amed_db_tv tbl_imm4_items[2] = 
{{.encoding=0, .is_representable=1, .value=90},
{.encoding=1, .is_representable=1, .value=270}}
;
static const amed_db_table tbl_imm4 = { .count=2, .items=(void*)&tbl_imm4_items[0] };
static const amed_db_tv tbl_imm5_items[2] = 
{{.encoding=0, .is_representable=1, .value=0},
{.encoding=1, .is_representable=1, .value=1}}
;
static const amed_db_table tbl_imm5 = { .count=2, .items=(void*)&tbl_imm5_items[0] };
static const amed_db_tv tbl_imm6_items[2] = 
{{.encoding=0, .is_representable=1, .value=0},
{.encoding=1, .is_representable=1, .value=2}}
;
static const amed_db_table tbl_imm6 = { .count=2, .items=(void*)&tbl_imm6_items[0] };
static const amed_db_tv tbl_imm7_items[2] = 
{{.encoding=0, .is_representable=1, .value=0},
{.encoding=1, .is_representable=1, .value=3}}
;
static const amed_db_table tbl_imm7 = { .count=2, .items=(void*)&tbl_imm7_items[0] };
static const amed_db_tv tbl_imm8_items[2] = 
{{.encoding=0, .is_representable=1, .value=0},
{.encoding=1, .is_representable=1, .value=4}}
;
static const amed_db_table tbl_imm8 = { .count=2, .items=(void*)&tbl_imm8_items[0] };
static const amed_db_tv tbl_imm9_items[4] = 
{{.absent=1, .encoding=0, .is_representable=1},
{.encoding=1, .is_representable=1, .value=1},
{.encoding=2, .is_representable=1, .value=2},
{.encoding=3, .is_representable=1, .value=3}}
;
static const amed_db_table tbl_imm9 = { .count=4, .items=(void*)&tbl_imm9_items[0] };
static const amed_db_tv tbl_pattern_items[46] = 
{{.encoding=0, .is_representable=1, .pattern=MK_PATTERN(POW2)},
{.encoding=1, .is_representable=1, .pattern=MK_PATTERN(VL1)},
{.encoding=2, .is_representable=1, .pattern=MK_PATTERN(VL2)},
{.encoding=3, .is_representable=1, .pattern=MK_PATTERN(VL3)},
{.encoding=4, .is_representable=1, .pattern=MK_PATTERN(VL4)},
{.encoding=5, .is_representable=1, .pattern=MK_PATTERN(VL5)},
{.encoding=6, .is_representable=1, .pattern=MK_PATTERN(VL6)},
{.encoding=7, .is_representable=1, .pattern=MK_PATTERN(VL7)},
{.encoding=8, .is_representable=1, .pattern=MK_PATTERN(VL8)},
{.encoding=9, .is_representable=1, .pattern=MK_PATTERN(VL16)},
{.encoding=10, .is_representable=1, .pattern=MK_PATTERN(VL32)},
{.encoding=11, .is_representable=1, .pattern=MK_PATTERN(VL64)},
{.encoding=12, .is_representable=1, .pattern=MK_PATTERN(VL128)},
{.encoding=13, .is_representable=1, .pattern=MK_PATTERN(VL256)},
{.encoding=14, .is_representable=0, .pattern=MK_PATTERN(uimm5)},
{.encoding=15, .is_representable=0, .pattern=MK_PATTERN(uimm5)},
{.encoding=21, .is_representable=0, .pattern=MK_PATTERN(uimm5)},
{.encoding=23, .is_representable=0, .pattern=MK_PATTERN(uimm5)},
{.encoding=22, .is_representable=0, .pattern=MK_PATTERN(uimm5)},
{.encoding=17, .is_representable=0, .pattern=MK_PATTERN(uimm5)},
{.encoding=19, .is_representable=0, .pattern=MK_PATTERN(uimm5)},
{.encoding=21, .is_representable=0, .pattern=MK_PATTERN(uimm5)},
{.encoding=23, .is_representable=0, .pattern=MK_PATTERN(uimm5)},
{.encoding=25, .is_representable=0, .pattern=MK_PATTERN(uimm5)},
{.encoding=27, .is_representable=0, .pattern=MK_PATTERN(uimm5)},
{.encoding=18, .is_representable=0, .pattern=MK_PATTERN(uimm5)},
{.encoding=19, .is_representable=0, .pattern=MK_PATTERN(uimm5)},
{.encoding=22, .is_representable=0, .pattern=MK_PATTERN(uimm5)},
{.encoding=23, .is_representable=0, .pattern=MK_PATTERN(uimm5)},
{.encoding=26, .is_representable=0, .pattern=MK_PATTERN(uimm5)},
{.encoding=16, .is_representable=0, .pattern=MK_PATTERN(uimm5)},
{.encoding=17, .is_representable=0, .pattern=MK_PATTERN(uimm5)},
{.encoding=18, .is_representable=0, .pattern=MK_PATTERN(uimm5)},
{.encoding=19, .is_representable=0, .pattern=MK_PATTERN(uimm5)},
{.encoding=20, .is_representable=0, .pattern=MK_PATTERN(uimm5)},
{.encoding=21, .is_representable=0, .pattern=MK_PATTERN(uimm5)},
{.encoding=22, .is_representable=0, .pattern=MK_PATTERN(uimm5)},
{.encoding=23, .is_representable=0, .pattern=MK_PATTERN(uimm5)},
{.encoding=24, .is_representable=0, .pattern=MK_PATTERN(uimm5)},
{.encoding=25, .is_representable=0, .pattern=MK_PATTERN(uimm5)},
{.encoding=26, .is_representable=0, .pattern=MK_PATTERN(uimm5)},
{.encoding=27, .is_representable=0, .pattern=MK_PATTERN(uimm5)},
{.encoding=28, .is_representable=0, .pattern=MK_PATTERN(uimm5)},
{.encoding=29, .is_representable=1, .pattern=MK_PATTERN(MUL4)},
{.encoding=30, .is_representable=1, .pattern=MK_PATTERN(MUL3)},
{.encoding=31, .is_representable=1, .pattern=MK_PATTERN(ALL)}}
;
static const amed_db_table tbl_pattern = { .count=46, .items=(void*)&tbl_pattern_items[0] };
static const amed_db_tv tbl_prf_op_items[16] = 
{{.encoding=0, .is_representable=1, .prf_op=MK_PRF_OP(PLDL1KEEP)},
{.encoding=1, .is_representable=1, .prf_op=MK_PRF_OP(PLDL1STRM)},
{.encoding=2, .is_representable=1, .prf_op=MK_PRF_OP(PLDL2KEEP)},
{.encoding=3, .is_representable=1, .prf_op=MK_PRF_OP(PLDL2STRM)},
{.encoding=4, .is_representable=1, .prf_op=MK_PRF_OP(PLDL3KEEP)},
{.encoding=5, .is_representable=1, .prf_op=MK_PRF_OP(PLDL3STRM)},
{.encoding=6, .is_representable=0, .prf_op=MK_PRF_OP(uimm4)},
{.encoding=7, .is_representable=0, .prf_op=MK_PRF_OP(uimm4)},
{.encoding=14, .is_representable=0, .prf_op=MK_PRF_OP(uimm4)},
{.encoding=15, .is_representable=0, .prf_op=MK_PRF_OP(uimm4)},
{.encoding=8, .is_representable=1, .prf_op=MK_PRF_OP(PSTL1KEEP)},
{.encoding=9, .is_representable=1, .prf_op=MK_PRF_OP(PSTL1STRM)},
{.encoding=10, .is_representable=1, .prf_op=MK_PRF_OP(PSTL2KEEP)},
{.encoding=11, .is_representable=1, .prf_op=MK_PRF_OP(PSTL2STRM)},
{.encoding=12, .is_representable=1, .prf_op=MK_PRF_OP(PSTL3KEEP)},
{.encoding=13, .is_representable=1, .prf_op=MK_PRF_OP(PSTL3STRM)}}
;
static const amed_db_table tbl_prf_op = { .count=16, .items=(void*)&tbl_prf_op_items[0] };
static const amed_db_tv tbl_pstatefield_items[8] = 
{{.encoding=3, .is_representable=1, .pstatefield=MK_PSTATEFIELD(UAO)},
{.encoding=4, .is_representable=1, .pstatefield=MK_PSTATEFIELD(PAN)},
{.encoding=5, .is_representable=1, .pstatefield=MK_PSTATEFIELD(SPSel)},
{.encoding=25, .is_representable=1, .pstatefield=MK_PSTATEFIELD(SSBS)},
{.encoding=26, .is_representable=1, .pstatefield=MK_PSTATEFIELD(DIT)},
{.encoding=28, .is_representable=1, .pstatefield=MK_PSTATEFIELD(TCO)},
{.encoding=30, .is_representable=1, .pstatefield=MK_PSTATEFIELD(DAIFSet)},
{.encoding=31, .is_representable=1, .pstatefield=MK_PSTATEFIELD(DAIFClr)}}
;
static const amed_db_table tbl_pstatefield = { .count=8, .items=(void*)&tbl_pstatefield_items[0] };
static const amed_db_tv tbl_shift0_items[3] = 
{{.encoding=0, .is_representable=1, .shift=MK_SHIFT(LSL)},
{.encoding=1, .is_representable=1, .shift=MK_SHIFT(LSR)},
{.encoding=2, .is_representable=1, .shift=MK_SHIFT(ASR)}}
;
static const amed_db_table tbl_shift0 = { .count=3, .items=(void*)&tbl_shift0_items[0] };
static const amed_db_tv tbl_shift1_items[4] = 
{{.encoding=0, .is_representable=1, .shift=MK_SHIFT(LSL)},
{.encoding=1, .is_representable=1, .shift=MK_SHIFT(LSR)},
{.encoding=2, .is_representable=1, .shift=MK_SHIFT(ASR)},
{.encoding=3, .is_representable=1, .shift=MK_SHIFT(ROR)}}
;
static const amed_db_table tbl_shift1 = { .count=4, .items=(void*)&tbl_shift1_items[0] };
static const amed_db_tv tbl_shifter_items[2] = 
{{.amount=0, .encoding=0, .shift=MK_SHIFT(LSL)},
{.amount=12, .encoding=1, .shift=MK_SHIFT(LSL)}}
;
static const amed_db_table tbl_shifter = { .count=2, .items=(void*)&tbl_shifter_items[0] };
static const amed_db_tv tbl_shifter1_items[2] = 
{{.amount=0, .encoding=0, .shift=MK_SHIFT(LSL)},
{.amount=8, .encoding=1, .shift=MK_SHIFT(LSL)}}
;
static const amed_db_table tbl_shifter1 = { .count=2, .items=(void*)&tbl_shifter1_items[0] };
static const amed_db_tv tbl_tlbi_op_items[78] = 
{{.encoding=8, .is_representable=1, .tlbi_op=MK_TLBI_OP(VMALLE1OS)},
{.encoding=9, .is_representable=1, .tlbi_op=MK_TLBI_OP(VAE1OS)},
{.encoding=10, .is_representable=1, .tlbi_op=MK_TLBI_OP(ASIDE1OS)},
{.encoding=11, .is_representable=1, .tlbi_op=MK_TLBI_OP(VAAE1OS)},
{.encoding=13, .is_representable=1, .tlbi_op=MK_TLBI_OP(VALE1OS)},
{.encoding=15, .is_representable=1, .tlbi_op=MK_TLBI_OP(VAALE1OS)},
{.encoding=17, .is_representable=1, .tlbi_op=MK_TLBI_OP(RVAE1IS)},
{.encoding=19, .is_representable=1, .tlbi_op=MK_TLBI_OP(RVAAE1IS)},
{.encoding=21, .is_representable=1, .tlbi_op=MK_TLBI_OP(RVALE1IS)},
{.encoding=23, .is_representable=1, .tlbi_op=MK_TLBI_OP(RVAALE1IS)},
{.encoding=24, .is_representable=1, .tlbi_op=MK_TLBI_OP(VMALLE1IS)},
{.encoding=25, .is_representable=1, .tlbi_op=MK_TLBI_OP(VAE1IS)},
{.encoding=26, .is_representable=1, .tlbi_op=MK_TLBI_OP(ASIDE1IS)},
{.encoding=27, .is_representable=1, .tlbi_op=MK_TLBI_OP(VAAE1IS)},
{.encoding=29, .is_representable=1, .tlbi_op=MK_TLBI_OP(VALE1IS)},
{.encoding=31, .is_representable=1, .tlbi_op=MK_TLBI_OP(VAALE1IS)},
{.encoding=41, .is_representable=1, .tlbi_op=MK_TLBI_OP(RVAE1OS)},
{.encoding=43, .is_representable=1, .tlbi_op=MK_TLBI_OP(RVAAE1OS)},
{.encoding=45, .is_representable=1, .tlbi_op=MK_TLBI_OP(RVALE1OS)},
{.encoding=47, .is_representable=1, .tlbi_op=MK_TLBI_OP(RVAALE1OS)},
{.encoding=49, .is_representable=1, .tlbi_op=MK_TLBI_OP(RVAE1)},
{.encoding=51, .is_representable=1, .tlbi_op=MK_TLBI_OP(RVAAE1)},
{.encoding=53, .is_representable=1, .tlbi_op=MK_TLBI_OP(RVALE1)},
{.encoding=55, .is_representable=1, .tlbi_op=MK_TLBI_OP(RVAALE1)},
{.encoding=56, .is_representable=1, .tlbi_op=MK_TLBI_OP(VMALLE1)},
{.encoding=57, .is_representable=1, .tlbi_op=MK_TLBI_OP(VAE1)},
{.encoding=58, .is_representable=1, .tlbi_op=MK_TLBI_OP(ASIDE1)},
{.encoding=59, .is_representable=1, .tlbi_op=MK_TLBI_OP(VAAE1)},
{.encoding=61, .is_representable=1, .tlbi_op=MK_TLBI_OP(VALE1)},
{.encoding=63, .is_representable=1, .tlbi_op=MK_TLBI_OP(VAALE1)},
{.encoding=513, .is_representable=1, .tlbi_op=MK_TLBI_OP(IPAS2E1IS)},
{.encoding=514, .is_representable=1, .tlbi_op=MK_TLBI_OP(RIPAS2E1IS)},
{.encoding=517, .is_representable=1, .tlbi_op=MK_TLBI_OP(IPAS2LE1IS)},
{.encoding=518, .is_representable=1, .tlbi_op=MK_TLBI_OP(RIPAS2LE1IS)},
{.encoding=520, .is_representable=1, .tlbi_op=MK_TLBI_OP(ALLE2OS)},
{.encoding=521, .is_representable=1, .tlbi_op=MK_TLBI_OP(VAE2OS)},
{.encoding=524, .is_representable=1, .tlbi_op=MK_TLBI_OP(ALLE1OS)},
{.encoding=525, .is_representable=1, .tlbi_op=MK_TLBI_OP(VALE2OS)},
{.encoding=526, .is_representable=1, .tlbi_op=MK_TLBI_OP(VMALLS12E1OS)},
{.encoding=529, .is_representable=1, .tlbi_op=MK_TLBI_OP(RVAE2IS)},
{.encoding=533, .is_representable=1, .tlbi_op=MK_TLBI_OP(RVALE2IS)},
{.encoding=536, .is_representable=1, .tlbi_op=MK_TLBI_OP(ALLE2IS)},
{.encoding=537, .is_representable=1, .tlbi_op=MK_TLBI_OP(VAE2IS)},
{.encoding=540, .is_representable=1, .tlbi_op=MK_TLBI_OP(ALLE1IS)},
{.encoding=541, .is_representable=1, .tlbi_op=MK_TLBI_OP(VALE2IS)},
{.encoding=542, .is_representable=1, .tlbi_op=MK_TLBI_OP(VMALLS12E1IS)},
{.encoding=544, .is_representable=1, .tlbi_op=MK_TLBI_OP(IPAS2E1OS)},
{.encoding=545, .is_representable=1, .tlbi_op=MK_TLBI_OP(IPAS2E1)},
{.encoding=546, .is_representable=1, .tlbi_op=MK_TLBI_OP(RIPAS2E1)},
{.encoding=547, .is_representable=1, .tlbi_op=MK_TLBI_OP(RIPAS2E1OS)},
{.encoding=548, .is_representable=1, .tlbi_op=MK_TLBI_OP(IPAS2LE1OS)},
{.encoding=549, .is_representable=1, .tlbi_op=MK_TLBI_OP(IPAS2LE1)},
{.encoding=550, .is_representable=1, .tlbi_op=MK_TLBI_OP(RIPAS2LE1)},
{.encoding=551, .is_representable=1, .tlbi_op=MK_TLBI_OP(RIPAS2LE1OS)},
{.encoding=553, .is_representable=1, .tlbi_op=MK_TLBI_OP(RVAE2OS)},
{.encoding=557, .is_representable=1, .tlbi_op=MK_TLBI_OP(RVALE2OS)},
{.encoding=561, .is_representable=1, .tlbi_op=MK_TLBI_OP(RVAE2)},
{.encoding=565, .is_representable=1, .tlbi_op=MK_TLBI_OP(RVALE2)},
{.encoding=568, .is_representable=1, .tlbi_op=MK_TLBI_OP(ALLE2)},
{.encoding=569, .is_representable=1, .tlbi_op=MK_TLBI_OP(VAE2)},
{.encoding=572, .is_representable=1, .tlbi_op=MK_TLBI_OP(ALLE1)},
{.encoding=573, .is_representable=1, .tlbi_op=MK_TLBI_OP(VALE2)},
{.encoding=574, .is_representable=1, .tlbi_op=MK_TLBI_OP(VMALLS12E1)},
{.encoding=776, .is_representable=1, .tlbi_op=MK_TLBI_OP(ALLE3OS)},
{.encoding=777, .is_representable=1, .tlbi_op=MK_TLBI_OP(VAE3OS)},
{.encoding=781, .is_representable=1, .tlbi_op=MK_TLBI_OP(VALE3OS)},
{.encoding=785, .is_representable=1, .tlbi_op=MK_TLBI_OP(RVAE3IS)},
{.encoding=789, .is_representable=1, .tlbi_op=MK_TLBI_OP(RVALE3IS)},
{.encoding=792, .is_representable=1, .tlbi_op=MK_TLBI_OP(ALLE3IS)},
{.encoding=793, .is_representable=1, .tlbi_op=MK_TLBI_OP(VAE3IS)},
{.encoding=797, .is_representable=1, .tlbi_op=MK_TLBI_OP(VALE3IS)},
{.encoding=809, .is_representable=1, .tlbi_op=MK_TLBI_OP(RVAE3OS)},
{.encoding=813, .is_representable=1, .tlbi_op=MK_TLBI_OP(RVALE3OS)},
{.encoding=817, .is_representable=1, .tlbi_op=MK_TLBI_OP(RVAE3)},
{.encoding=821, .is_representable=1, .tlbi_op=MK_TLBI_OP(RVALE3)},
{.encoding=824, .is_representable=1, .tlbi_op=MK_TLBI_OP(ALLE3)},
{.encoding=825, .is_representable=1, .tlbi_op=MK_TLBI_OP(VAE3)},
{.encoding=829, .is_representable=1, .tlbi_op=MK_TLBI_OP(VALE3)}}
;
static const amed_db_table tbl_tlbi_op = { .count=78, .items=(void*)&tbl_tlbi_op_items[0] };
