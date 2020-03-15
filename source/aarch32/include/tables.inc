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

static const amed_db_tv COND_items[17] = 
{{.cond=MK_COND(EQ), .encoding=0, .is_representable=1},
{.cond=MK_COND(NE), .encoding=1, .is_representable=1},
{.cond=MK_COND(CS), .encoding=2, .is_representable=1},
{.cond=MK_COND(CC), .encoding=3, .is_representable=1},
{.cond=MK_COND(MI), .encoding=4, .is_representable=1},
{.cond=MK_COND(PL), .encoding=5, .is_representable=1},
{.cond=MK_COND(VS), .encoding=6, .is_representable=1},
{.cond=MK_COND(VC), .encoding=7, .is_representable=1},
{.cond=MK_COND(HI), .encoding=8, .is_representable=1},
{.cond=MK_COND(LS), .encoding=9, .is_representable=1},
{.cond=MK_COND(GE), .encoding=10, .is_representable=1},
{.cond=MK_COND(LT), .encoding=11, .is_representable=1},
{.cond=MK_COND(GT), .encoding=12, .is_representable=1},
{.cond=MK_COND(LE), .encoding=13, .is_representable=1},
{.cond=MK_COND(AL), .encoding=14, .is_representable=1},
{.cond=MK_COND(HS), .encoding=2, .is_representable=1},
{.cond=MK_COND(LO), .encoding=3, .is_representable=1}}
;
static const amed_db_table COND = { .count=17, .items=(void*)&COND_items[0] };
static const amed_db_tv AUAL_items[2] = 
{{.cond=MK_COND(AL), .encoding=14, .is_representable=1},
{.table=(void*)&COND, .unpredictable=1}}
;
static const amed_db_table AUAL = { .count=2, .items=(void*)&AUAL_items[0] };
static const amed_db_tv tbl_align_items[2] = 
{{.encoding=0, .is_representable=1, .omitted=1},
{.encoding=1, .is_representable=1, .value=64}}
;
static const amed_db_table tbl_align = { .count=2, .items=(void*)&tbl_align_items[0] };
static const amed_db_tv tbl_align1_items[3] = 
{{.encoding=0, .is_representable=1, .omitted=1},
{.encoding=1, .is_representable=1, .value=64},
{.encoding=2, .is_representable=1, .value=128}}
;
static const amed_db_table tbl_align1 = { .count=3, .items=(void*)&tbl_align1_items[0] };
static const amed_db_tv tbl_align2_items[4] = 
{{.encoding=0, .is_representable=1, .omitted=1},
{.encoding=1, .is_representable=1, .value=64},
{.encoding=2, .is_representable=1, .value=128},
{.encoding=3, .is_representable=1, .value=256}}
;
static const amed_db_table tbl_align2 = { .count=4, .items=(void*)&tbl_align2_items[0] };
static const amed_db_tv tbl_align3_items[2] = 
{{.encoding=0, .is_representable=1, .omitted=1},
{.encoding=1, .is_representable=1, .undefined=1}}
;
static const amed_db_table tbl_align3 = { .count=2, .items=(void*)&tbl_align3_items[0] };
static const amed_db_tv tbl_align4_items[2] = 
{{.encoding=0, .is_representable=1, .omitted=1},
{.encoding=1, .is_representable=1, .value=16}}
;
static const amed_db_table tbl_align4 = { .count=2, .items=(void*)&tbl_align4_items[0] };
static const amed_db_tv tbl_align5_items[2] = 
{{.encoding=0, .is_representable=1, .omitted=1},
{.encoding=3, .is_representable=1, .value=32}}
;
static const amed_db_table tbl_align5 = { .count=2, .items=(void*)&tbl_align5_items[0] };
static const amed_db_tv tbl_align6_items[2] = 
{{.encoding=0, .is_representable=1, .omitted=1},
{.encoding=1, .is_representable=1, .value=16}}
;
static const amed_db_table tbl_align6 = { .count=2, .items=(void*)&tbl_align6_items[0] };
static const amed_db_tv tbl_align7_items[2] = 
{{.encoding=0, .is_representable=1, .omitted=1},
{.encoding=1, .is_representable=1, .value=32}}
;
static const amed_db_table tbl_align7 = { .count=2, .items=(void*)&tbl_align7_items[0] };
static const amed_db_tv tbl_align8_items[2] = 
{{.encoding=0, .is_representable=1, .omitted=1},
{.encoding=1, .is_representable=1, .value=64}}
;
static const amed_db_table tbl_align8 = { .count=2, .items=(void*)&tbl_align8_items[0] };
static const amed_db_tv tbl_barrier_items[13] = 
{{.barrier=MK_BARRIER(SY), .encoding=15, .is_representable=1},
{.barrier=MK_BARRIER(ST), .encoding=14, .is_representable=1},
{.barrier=MK_BARRIER(SYST), .encoding=14, .is_representable=1},
{.barrier=MK_BARRIER(LD), .encoding=13, .is_representable=1},
{.barrier=MK_BARRIER(ISH), .encoding=11, .is_representable=1},
{.barrier=MK_BARRIER(ISHST), .encoding=10, .is_representable=1},
{.barrier=MK_BARRIER(ISHLD), .encoding=9, .is_representable=1},
{.barrier=MK_BARRIER(NSH), .encoding=7, .is_representable=1},
{.barrier=MK_BARRIER(NSHST), .encoding=6, .is_representable=1},
{.barrier=MK_BARRIER(NSHLD), .encoding=5, .is_representable=1},
{.barrier=MK_BARRIER(OSH), .encoding=3, .is_representable=1},
{.barrier=MK_BARRIER(OSHST), .encoding=2, .is_representable=1},
{.barrier=MK_BARRIER(OSHLD), .encoding=1, .is_representable=1}}
;
static const amed_db_table tbl_barrier = { .count=13, .items=(void*)&tbl_barrier_items[0] };
static const amed_db_tv tbl_barrier1_items[1] = 
{{.barrier=MK_BARRIER(SY), .encoding=15, .is_representable=1}}
;
static const amed_db_table tbl_barrier1 = { .count=1, .items=(void*)&tbl_barrier1_items[0] };
static const amed_db_tv tbl_bnkdreg_items[64] = 
{{.bnkdreg=MK_BNKDREG(R8_usr), .encoding=0, .is_representable=1},
{.bnkdreg=MK_BNKDREG(R9_usr), .encoding=1, .is_representable=1},
{.bnkdreg=MK_BNKDREG(R10_usr), .encoding=2, .is_representable=1},
{.bnkdreg=MK_BNKDREG(R11_usr), .encoding=3, .is_representable=1},
{.bnkdreg=MK_BNKDREG(R12_usr), .encoding=4, .is_representable=1},
{.bnkdreg=MK_BNKDREG(SP_usr), .encoding=5, .is_representable=1},
{.bnkdreg=MK_BNKDREG(LR_usr), .encoding=6, .is_representable=1},
{.encoding=7, .is_representable=1, .unpredictable=1},
{.bnkdreg=MK_BNKDREG(R8_fiq), .encoding=8, .is_representable=1},
{.bnkdreg=MK_BNKDREG(R9_fiq), .encoding=9, .is_representable=1},
{.bnkdreg=MK_BNKDREG(R10_fiq), .encoding=10, .is_representable=1},
{.bnkdreg=MK_BNKDREG(R11_fiq), .encoding=11, .is_representable=1},
{.bnkdreg=MK_BNKDREG(R12_fiq), .encoding=12, .is_representable=1},
{.bnkdreg=MK_BNKDREG(SP_fiq), .encoding=13, .is_representable=1},
{.bnkdreg=MK_BNKDREG(LR_fiq), .encoding=14, .is_representable=1},
{.encoding=15, .is_representable=1, .unpredictable=1},
{.bnkdreg=MK_BNKDREG(LR_irq), .encoding=16, .is_representable=1},
{.bnkdreg=MK_BNKDREG(SP_irq), .encoding=17, .is_representable=1},
{.bnkdreg=MK_BNKDREG(LR_svc), .encoding=18, .is_representable=1},
{.bnkdreg=MK_BNKDREG(SP_svc), .encoding=19, .is_representable=1},
{.bnkdreg=MK_BNKDREG(LR_abt), .encoding=20, .is_representable=1},
{.bnkdreg=MK_BNKDREG(SP_abt), .encoding=21, .is_representable=1},
{.bnkdreg=MK_BNKDREG(LR_und), .encoding=22, .is_representable=1},
{.bnkdreg=MK_BNKDREG(SP_und), .encoding=23, .is_representable=1},
{.encoding=24, .is_representable=1, .unpredictable=1},
{.encoding=25, .is_representable=1, .unpredictable=1},
{.encoding=26, .is_representable=1, .unpredictable=1},
{.encoding=27, .is_representable=1, .unpredictable=1},
{.bnkdreg=MK_BNKDREG(LR_mon), .encoding=28, .is_representable=1},
{.bnkdreg=MK_BNKDREG(SP_mon), .encoding=29, .is_representable=1},
{.bnkdreg=MK_BNKDREG(ELR_hyp), .encoding=30, .is_representable=1},
{.bnkdreg=MK_BNKDREG(SP_hyp), .encoding=31, .is_representable=1},
{.encoding=32, .is_representable=1, .unpredictable=1},
{.encoding=33, .is_representable=1, .unpredictable=1},
{.encoding=34, .is_representable=1, .unpredictable=1},
{.encoding=35, .is_representable=1, .unpredictable=1},
{.encoding=36, .is_representable=1, .unpredictable=1},
{.encoding=37, .is_representable=1, .unpredictable=1},
{.encoding=38, .is_representable=1, .unpredictable=1},
{.encoding=39, .is_representable=1, .unpredictable=1},
{.encoding=40, .is_representable=1, .unpredictable=1},
{.encoding=41, .is_representable=1, .unpredictable=1},
{.encoding=42, .is_representable=1, .unpredictable=1},
{.encoding=43, .is_representable=1, .unpredictable=1},
{.encoding=44, .is_representable=1, .unpredictable=1},
{.encoding=45, .is_representable=1, .unpredictable=1},
{.bnkdreg=MK_BNKDREG(SPSR_fiq), .encoding=46, .is_representable=1},
{.encoding=47, .is_representable=1, .unpredictable=1},
{.bnkdreg=MK_BNKDREG(SPSR_irq), .encoding=48, .is_representable=1},
{.encoding=49, .is_representable=1, .unpredictable=1},
{.bnkdreg=MK_BNKDREG(SPSR_svc), .encoding=50, .is_representable=1},
{.encoding=51, .is_representable=1, .unpredictable=1},
{.bnkdreg=MK_BNKDREG(SPSR_abt), .encoding=52, .is_representable=1},
{.encoding=53, .is_representable=1, .unpredictable=1},
{.bnkdreg=MK_BNKDREG(SPSR_und), .encoding=54, .is_representable=1},
{.encoding=55, .is_representable=1, .unpredictable=1},
{.encoding=56, .is_representable=1, .unpredictable=1},
{.encoding=57, .is_representable=1, .unpredictable=1},
{.encoding=58, .is_representable=1, .unpredictable=1},
{.encoding=59, .is_representable=1, .unpredictable=1},
{.bnkdreg=MK_BNKDREG(SPSR_mon), .encoding=60, .is_representable=1},
{.encoding=61, .is_representable=1, .unpredictable=1},
{.bnkdreg=MK_BNKDREG(SPSR_hyp), .encoding=62, .is_representable=1},
{.encoding=63, .is_representable=1, .unpredictable=1}}
;
static const amed_db_table tbl_bnkdreg = { .count=64, .items=(void*)&tbl_bnkdreg_items[0] };
static const amed_db_tv tbl_endian_items[2] = 
{{.encoding=0, .endian=MK_ENDIAN(LE), .is_representable=1},
{.encoding=1, .endian=MK_ENDIAN(BE), .is_representable=1}}
;
static const amed_db_table tbl_endian = { .count=2, .items=(void*)&tbl_endian_items[0] };
static const amed_db_tv tbl_imm0_items[4] = 
{{.encoding=0, .is_representable=1, .omitted=1},
{.encoding=1, .is_representable=1, .value=8},
{.encoding=2, .is_representable=1, .value=16},
{.encoding=3, .is_representable=1, .value=24}}
;
static const amed_db_table tbl_imm0 = { .count=4, .items=(void*)&tbl_imm0_items[0] };
static const amed_db_tv tbl_imm1_items[4] = 
{{.encoding=0, .is_representable=1, .value=0},
{.encoding=1, .is_representable=1, .value=90},
{.encoding=2, .is_representable=1, .value=180},
{.encoding=3, .is_representable=1, .value=270}}
;
static const amed_db_table tbl_imm1 = { .count=4, .items=(void*)&tbl_imm1_items[0] };
static const amed_db_tv tbl_imm2_items[2] = 
{{.encoding=0, .is_representable=1, .value=90},
{.encoding=1, .is_representable=1, .value=270}}
;
static const amed_db_table tbl_imm2 = { .count=2, .items=(void*)&tbl_imm2_items[0] };
static const amed_db_tv tbl_inc_items[2] = 
{{.encoding=0, .is_representable=1, .value=1},
{.encoding=1, .is_representable=1, .value=2}}
;
static const amed_db_table tbl_inc = { .count=2, .items=(void*)&tbl_inc_items[0] };
static const amed_db_tv tbl_inc1_items[2] = 
{{.encoding=0, .is_representable=1, .value=1},
{.encoding=1, .is_representable=1, .undefined=1}}
;
static const amed_db_table tbl_inc1 = { .count=2, .items=(void*)&tbl_inc1_items[0] };
static const amed_db_tv tbl_inc2_items[2] = 
{{.encoding=0, .is_representable=1, .value=1},
{.encoding=2, .is_representable=1, .value=2}}
;
static const amed_db_table tbl_inc2 = { .count=2, .items=(void*)&tbl_inc2_items[0] };
static const amed_db_tv tbl_inc3_items[2] = 
{{.encoding=0, .is_representable=1, .value=1},
{.encoding=4, .is_representable=1, .value=2}}
;
static const amed_db_table tbl_inc3 = { .count=2, .items=(void*)&tbl_inc3_items[0] };
static const amed_db_tv tbl_pspace_items[2] = 
{{.encoding=0, .is_representable=1, .pspace=MK_PSPACE(p14)},
{.encoding=1, .is_representable=1, .pspace=MK_PSPACE(p15)}}
;
static const amed_db_table tbl_pspace = { .count=2, .items=(void*)&tbl_pspace_items[0] };
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
static const amed_db_tv tbl_specreg_items[3] = 
{{.encoding=0, .hasalias=1, .is_representable=1, .specreg=MK_SPECREG(CPSR)},
{.encoding=1, .is_representable=1, .specreg=MK_SPECREG(SPSR)},
{.alias=1, .encoding=0, .is_representable=1, .specreg=MK_SPECREG(APSR)}}
;
static const amed_db_table tbl_specreg = { .count=3, .items=(void*)&tbl_specreg_items[0] };
static const amed_db_tv tbl_specreg1_items[16] = 
{{.encoding=0, .is_representable=1, .specreg=MK_SPECREG(FPSID)},
{.encoding=1, .is_representable=1, .specreg=MK_SPECREG(FPSCR)},
{.encoding=2, .is_representable=1, .unpredictable=1},
{.encoding=3, .is_representable=1, .unpredictable=1},
{.encoding=4, .is_representable=1, .unpredictable=1},
{.encoding=5, .is_representable=1, .specreg=MK_SPECREG(MVFR2)},
{.encoding=6, .is_representable=1, .specreg=MK_SPECREG(MVFR1)},
{.encoding=7, .is_representable=1, .specreg=MK_SPECREG(MVFR0)},
{.encoding=8, .is_representable=1, .specreg=MK_SPECREG(FPEXC)},
{.encoding=9, .is_representable=1, .unpredictable=1},
{.encoding=10, .is_representable=1, .unpredictable=1},
{.encoding=11, .is_representable=1, .unpredictable=1},
{.encoding=12, .is_representable=1, .unpredictable=1},
{.encoding=13, .is_representable=1, .unpredictable=1},
{.encoding=14, .is_representable=1, .unpredictable=1},
{.encoding=15, .is_representable=1, .unpredictable=1}}
;
static const amed_db_table tbl_specreg1 = { .count=16, .items=(void*)&tbl_specreg1_items[0] };
static const amed_db_tv tbl_specreg2_items[16] = 
{{.encoding=0, .is_representable=1, .specreg=MK_SPECREG(FPSID)},
{.encoding=1, .is_representable=1, .specreg=MK_SPECREG(FPSCR)},
{.encoding=2, .is_representable=1, .unpredictable=1},
{.encoding=3, .is_representable=1, .unpredictable=1},
{.encoding=4, .is_representable=1, .unpredictable=1},
{.encoding=5, .is_representable=1, .unpredictable=1},
{.encoding=6, .is_representable=1, .unpredictable=1},
{.encoding=7, .is_representable=1, .unpredictable=1},
{.encoding=8, .is_representable=1, .specreg=MK_SPECREG(FPEXC)},
{.encoding=9, .is_representable=1, .unpredictable=1},
{.encoding=10, .is_representable=1, .unpredictable=1},
{.encoding=11, .is_representable=1, .unpredictable=1},
{.encoding=12, .is_representable=1, .unpredictable=1},
{.encoding=13, .is_representable=1, .unpredictable=1},
{.encoding=14, .is_representable=1, .unpredictable=1},
{.encoding=15, .is_representable=1, .unpredictable=1}}
;
static const amed_db_table tbl_specreg2 = { .count=16, .items=(void*)&tbl_specreg2_items[0] };
