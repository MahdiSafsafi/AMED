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

const uint16_t amed_aarch64_aliases_array[] = 
{
  /* 0    */ 0,
  /* 1    */ 644, 0, // ADD_32_addsub_imm: MOV_ADD_32_addsub_imm
  /* 3    */ 645, 0, // ADD_64_addsub_imm: MOV_ADD_64_addsub_imm
  /* 5    */ 610, 0, // ADDS_32S_addsub_ext: CMN_ADDS_32S_addsub_ext
  /* 7    */ 611, 0, // ADDS_64S_addsub_ext: CMN_ADDS_64S_addsub_ext
  /* 9    */ 612, 0, // ADDS_32S_addsub_imm: CMN_ADDS_32S_addsub_imm
  /* 11   */ 613, 0, // ADDS_64S_addsub_imm: CMN_ADDS_64S_addsub_imm
  /* 13   */ 614, 0, // ADDS_32_addsub_shift: CMN_ADDS_32_addsub_shift
  /* 15   */ 615, 0, // ADDS_64_addsub_shift: CMN_ADDS_64_addsub_shift
  /* 17   */ 747, 0, // ANDS_32S_log_imm: TST_ANDS_32S_log_imm
  /* 19   */ 748, 0, // ANDS_64S_log_imm: TST_ANDS_64S_log_imm
  /* 21   */ 749, 0, // ANDS_32_log_shift: TST_ANDS_32_log_shift
  /* 23   */ 750, 0, // ANDS_64_log_shift: TST_ANDS_64_log_shift
  /* 25   */ 594, 0, // ASRV_32_dp_2src: ASR_ASRV_32_dp_2src
  /* 27   */ 595, 0, // ASRV_64_dp_2src: ASR_ASRV_64_dp_2src
  /* 29   */ 599, 601, 603, 0, // BFM_32M_bitfield: BFC_BFM_32M_bitfield BFI_BFM_32M_bitfield BFXIL_BFM_32M_bitfield
  /* 33   */ 600, 602, 604, 0, // BFM_64M_bitfield: BFC_BFM_64M_bitfield BFI_BFM_64M_bitfield BFXIL_BFM_64M_bitfield
  /* 37   */ 606, 626, 0, // CSINC_32_condsel: CINC_CSINC_32_condsel CSET_CSINC_32_condsel
  /* 40   */ 607, 627, 0, // CSINC_64_condsel: CINC_CSINC_64_condsel CSET_CSINC_64_condsel
  /* 43   */ 608, 628, 0, // CSINV_32_condsel: CINV_CSINV_32_condsel CSETM_CSINV_32_condsel
  /* 46   */ 609, 629, 0, // CSINV_64_condsel: CINV_CSINV_64_condsel CSETM_CSINV_64_condsel
  /* 49   */ 623, 0, // CSNEG_32_condsel: CNEG_CSNEG_32_condsel
  /* 51   */ 624, 0, // CSNEG_64_condsel: CNEG_CSNEG_64_condsel
  /* 53   */ 631, 0, // DSB_BO_barriers: DFB_DSB_BO_barriers
  /* 55   */ 667, 0, // EXTR_32_extract: ROR_EXTR_32_extract
  /* 57   */ 668, 0, // EXTR_64_extract: ROR_EXTR_64_extract
  /* 59   */ 677, 0, // LDADD_32_memop: STADD_LDADD_32_memop
  /* 61   */ 678, 0, // LDADDL_32_memop: STADDL_LDADDL_32_memop
  /* 63   */ 679, 0, // LDADD_64_memop: STADD_LDADD_64_memop
  /* 65   */ 680, 0, // LDADDL_64_memop: STADDL_LDADDL_64_memop
  /* 67   */ 681, 0, // LDADDB_32_memop: STADDB_LDADDB_32_memop
  /* 69   */ 682, 0, // LDADDLB_32_memop: STADDLB_LDADDLB_32_memop
  /* 71   */ 683, 0, // LDADDH_32_memop: STADDH_LDADDH_32_memop
  /* 73   */ 684, 0, // LDADDLH_32_memop: STADDLH_LDADDLH_32_memop
  /* 75   */ 685, 0, // LDCLR_32_memop: STCLR_LDCLR_32_memop
  /* 77   */ 686, 0, // LDCLRL_32_memop: STCLRL_LDCLRL_32_memop
  /* 79   */ 687, 0, // LDCLR_64_memop: STCLR_LDCLR_64_memop
  /* 81   */ 688, 0, // LDCLRL_64_memop: STCLRL_LDCLRL_64_memop
  /* 83   */ 689, 0, // LDCLRB_32_memop: STCLRB_LDCLRB_32_memop
  /* 85   */ 690, 0, // LDCLRLB_32_memop: STCLRLB_LDCLRLB_32_memop
  /* 87   */ 691, 0, // LDCLRH_32_memop: STCLRH_LDCLRH_32_memop
  /* 89   */ 692, 0, // LDCLRLH_32_memop: STCLRLH_LDCLRLH_32_memop
  /* 91   */ 693, 0, // LDEOR_32_memop: STEOR_LDEOR_32_memop
  /* 93   */ 694, 0, // LDEORL_32_memop: STEORL_LDEORL_32_memop
  /* 95   */ 695, 0, // LDEOR_64_memop: STEOR_LDEOR_64_memop
  /* 97   */ 696, 0, // LDEORL_64_memop: STEORL_LDEORL_64_memop
  /* 99   */ 697, 0, // LDEORB_32_memop: STEORB_LDEORB_32_memop
  /* 101  */ 698, 0, // LDEORLB_32_memop: STEORLB_LDEORLB_32_memop
  /* 103  */ 699, 0, // LDEORH_32_memop: STEORH_LDEORH_32_memop
  /* 105  */ 700, 0, // LDEORLH_32_memop: STEORLH_LDEORLH_32_memop
  /* 107  */ 701, 0, // LDSET_32_memop: STSET_LDSET_32_memop
  /* 109  */ 702, 0, // LDSETL_32_memop: STSETL_LDSETL_32_memop
  /* 111  */ 703, 0, // LDSET_64_memop: STSET_LDSET_64_memop
  /* 113  */ 704, 0, // LDSETL_64_memop: STSETL_LDSETL_64_memop
  /* 115  */ 705, 0, // LDSETB_32_memop: STSETB_LDSETB_32_memop
  /* 117  */ 706, 0, // LDSETLB_32_memop: STSETLB_LDSETLB_32_memop
  /* 119  */ 707, 0, // LDSETH_32_memop: STSETH_LDSETH_32_memop
  /* 121  */ 708, 0, // LDSETLH_32_memop: STSETLH_LDSETLH_32_memop
  /* 123  */ 709, 0, // LDSMAX_32_memop: STSMAX_LDSMAX_32_memop
  /* 125  */ 710, 0, // LDSMAXL_32_memop: STSMAXL_LDSMAXL_32_memop
  /* 127  */ 711, 0, // LDSMAX_64_memop: STSMAX_LDSMAX_64_memop
  /* 129  */ 712, 0, // LDSMAXL_64_memop: STSMAXL_LDSMAXL_64_memop
  /* 131  */ 713, 0, // LDSMAXB_32_memop: STSMAXB_LDSMAXB_32_memop
  /* 133  */ 714, 0, // LDSMAXLB_32_memop: STSMAXLB_LDSMAXLB_32_memop
  /* 135  */ 715, 0, // LDSMAXH_32_memop: STSMAXH_LDSMAXH_32_memop
  /* 137  */ 716, 0, // LDSMAXLH_32_memop: STSMAXLH_LDSMAXLH_32_memop
  /* 139  */ 717, 0, // LDSMIN_32_memop: STSMIN_LDSMIN_32_memop
  /* 141  */ 718, 0, // LDSMINL_32_memop: STSMINL_LDSMINL_32_memop
  /* 143  */ 719, 0, // LDSMIN_64_memop: STSMIN_LDSMIN_64_memop
  /* 145  */ 720, 0, // LDSMINL_64_memop: STSMINL_LDSMINL_64_memop
  /* 147  */ 721, 0, // LDSMINB_32_memop: STSMINB_LDSMINB_32_memop
  /* 149  */ 722, 0, // LDSMINLB_32_memop: STSMINLB_LDSMINLB_32_memop
  /* 151  */ 723, 0, // LDSMINH_32_memop: STSMINH_LDSMINH_32_memop
  /* 153  */ 724, 0, // LDSMINLH_32_memop: STSMINLH_LDSMINLH_32_memop
  /* 155  */ 725, 0, // LDUMAX_32_memop: STUMAX_LDUMAX_32_memop
  /* 157  */ 726, 0, // LDUMAXL_32_memop: STUMAXL_LDUMAXL_32_memop
  /* 159  */ 727, 0, // LDUMAX_64_memop: STUMAX_LDUMAX_64_memop
  /* 161  */ 728, 0, // LDUMAXL_64_memop: STUMAXL_LDUMAXL_64_memop
  /* 163  */ 729, 0, // LDUMAXB_32_memop: STUMAXB_LDUMAXB_32_memop
  /* 165  */ 730, 0, // LDUMAXLB_32_memop: STUMAXLB_LDUMAXLB_32_memop
  /* 167  */ 731, 0, // LDUMAXH_32_memop: STUMAXH_LDUMAXH_32_memop
  /* 169  */ 732, 0, // LDUMAXLH_32_memop: STUMAXLH_LDUMAXLH_32_memop
  /* 171  */ 733, 0, // LDUMIN_32_memop: STUMIN_LDUMIN_32_memop
  /* 173  */ 734, 0, // LDUMINL_32_memop: STUMINL_LDUMINL_32_memop
  /* 175  */ 735, 0, // LDUMIN_64_memop: STUMIN_LDUMIN_64_memop
  /* 177  */ 736, 0, // LDUMINL_64_memop: STUMINL_LDUMINL_64_memop
  /* 179  */ 737, 0, // LDUMINB_32_memop: STUMINB_LDUMINB_32_memop
  /* 181  */ 738, 0, // LDUMINLB_32_memop: STUMINLB_LDUMINLB_32_memop
  /* 183  */ 739, 0, // LDUMINH_32_memop: STUMINH_LDUMINH_32_memop
  /* 185  */ 740, 0, // LDUMINLH_32_memop: STUMINLH_LDUMINLH_32_memop
  /* 187  */ 634, 0, // LSLV_32_dp_2src: LSL_LSLV_32_dp_2src
  /* 189  */ 635, 0, // LSLV_64_dp_2src: LSL_LSLV_64_dp_2src
  /* 191  */ 638, 0, // LSRV_32_dp_2src: LSR_LSRV_32_dp_2src
  /* 193  */ 639, 0, // LSRV_64_dp_2src: LSR_LSRV_64_dp_2src
  /* 195  */ 654, 0, // MADD_32A_dp_3src: MUL_MADD_32A_dp_3src
  /* 197  */ 655, 0, // MADD_64A_dp_3src: MUL_MADD_64A_dp_3src
  /* 199  */ 646, 0, // MOVN_32_movewide: MOV_MOVN_32_movewide
  /* 201  */ 647, 0, // MOVN_64_movewide: MOV_MOVN_64_movewide
  /* 203  */ 648, 0, // MOVZ_32_movewide: MOV_MOVZ_32_movewide
  /* 205  */ 649, 0, // MOVZ_64_movewide: MOV_MOVZ_64_movewide
  /* 207  */ 642, 0, // MSUB_32A_dp_3src: MNEG_MSUB_32A_dp_3src
  /* 209  */ 643, 0, // MSUB_64A_dp_3src: MNEG_MSUB_64A_dp_3src
  /* 211  */ 656, 0, // ORN_32_log_shift: MVN_ORN_32_log_shift
  /* 213  */ 657, 0, // ORN_64_log_shift: MVN_ORN_64_log_shift
  /* 215  */ 650, 0, // ORR_32_log_imm: MOV_ORR_32_log_imm
  /* 217  */ 651, 0, // ORR_64_log_imm: MOV_ORR_64_log_imm
  /* 219  */ 652, 0, // ORR_32_log_shift: MOV_ORR_32_log_shift
  /* 221  */ 653, 0, // ORR_64_log_shift: MOV_ORR_64_log_shift
  /* 223  */ 666, 0, // REV_64_dp_1src: REV64_REV_64_dp_1src
  /* 225  */ 669, 0, // RORV_32_dp_2src: ROR_RORV_32_dp_2src
  /* 227  */ 670, 0, // RORV_64_dp_2src: ROR_RORV_64_dp_2src
  /* 229  */ 662, 0, // SBC_32_addsub_carry: NGC_SBC_32_addsub_carry
  /* 231  */ 663, 0, // SBC_64_addsub_carry: NGC_SBC_64_addsub_carry
  /* 233  */ 664, 0, // SBCS_32_addsub_carry: NGCS_SBCS_32_addsub_carry
  /* 235  */ 665, 0, // SBCS_64_addsub_carry: NGCS_SBCS_64_addsub_carry
  /* 237  */ 596, 671, 673, 741, 743, 0, // SBFM_32M_bitfield: ASR_SBFM_32M_bitfield SBFIZ_SBFM_32M_bitfield SBFX_SBFM_32M_bitfield SXTB_SBFM_32M_bitfield SXTH_SBFM_32M_bitfield
  /* 243  */ 597, 672, 674, 742, 744, 745, 0, // SBFM_64M_bitfield: ASR_SBFM_64M_bitfield SBFIZ_SBFM_64M_bitfield SBFX_SBFM_64M_bitfield SXTB_SBFM_64M_bitfield SXTH_SBFM_64M_bitfield SXTW_SBFM_64M_bitfield
  /* 250  */ 676, 0, // SMADDL_64WA_dp_3src: SMULL_SMADDL_64WA_dp_3src
  /* 252  */ 675, 0, // SMSUBL_64WA_dp_3src: SMNEGL_SMSUBL_64WA_dp_3src
  /* 254  */ 658, 0, // SUB_32_addsub_shift: NEG_SUB_32_addsub_shift
  /* 256  */ 659, 0, // SUB_64_addsub_shift: NEG_SUB_64_addsub_shift
  /* 258  */ 622, 0, // SUBPS_64S_dp_2src: CMPP_SUBPS_64S_dp_2src
  /* 260  */ 616, 0, // SUBS_32S_addsub_ext: CMP_SUBS_32S_addsub_ext
  /* 262  */ 617, 0, // SUBS_64S_addsub_ext: CMP_SUBS_64S_addsub_ext
  /* 264  */ 618, 0, // SUBS_32S_addsub_imm: CMP_SUBS_32S_addsub_imm
  /* 266  */ 619, 0, // SUBS_64S_addsub_imm: CMP_SUBS_64S_addsub_imm
  /* 268  */ 620, 660, 0, // SUBS_32_addsub_shift: CMP_SUBS_32_addsub_shift NEGS_SUBS_32_addsub_shift
  /* 271  */ 621, 661, 0, // SUBS_64_addsub_shift: CMP_SUBS_64_addsub_shift NEGS_SUBS_64_addsub_shift
  /* 274  */ 598, 605, 625, 630, 632, 633, 746, 0, // SYS_CR_systeminstrs: AT_SYS_CR_systeminstrs CFP_SYS_CR_systeminstrs CPP_SYS_CR_systeminstrs DC_SYS_CR_systeminstrs DVP_SYS_CR_systeminstrs IC_SYS_CR_systeminstrs TLBI_SYS_CR_systeminstrs
  /* 282  */ 636, 640, 751, 753, 757, 758, 0, // UBFM_32M_bitfield: LSL_UBFM_32M_bitfield LSR_UBFM_32M_bitfield UBFIZ_UBFM_32M_bitfield UBFX_UBFM_32M_bitfield UXTB_UBFM_32M_bitfield UXTH_UBFM_32M_bitfield
  /* 289  */ 637, 641, 752, 754, 0, // UBFM_64M_bitfield: LSL_UBFM_64M_bitfield LSR_UBFM_64M_bitfield UBFIZ_UBFM_64M_bitfield UBFX_UBFM_64M_bitfield
  /* 294  */ 756, 0, // UMADDL_64WA_dp_3src: UMULL_UMADDL_64WA_dp_3src
  /* 296  */ 755, 0, // UMSUBL_64WA_dp_3src: UMNEGL_UMSUBL_64WA_dp_3src
  /* 298  */ 1746, 0, // DUP_asisdone_only: MOV_DUP_asisdone_only
  /* 300  */ 1747, 0, // INS_asimdins_IV_v: MOV_INS_asimdins_IV_v
  /* 302  */ 1748, 0, // INS_asimdins_IR_r: MOV_INS_asimdins_IR_r
  /* 304  */ 1752, 0, // NOT_asimdmisc_R: MVN_NOT_asimdmisc_R
  /* 306  */ 1749, 0, // ORR_asimdsame_only: MOV_ORR_asimdsame_only
  /* 308  */ 1753, 0, // SSHLL_asimdshf_L: SXTL_SSHLL_asimdshf_L
  /* 310  */ 1750, 0, // UMOV_asimdins_W_w: MOV_UMOV_asimdins_W_w
  /* 312  */ 1751, 0, // UMOV_asimdins_X_x: MOV_UMOV_asimdins_X_x
  /* 314  */ 1754, 0, // USHLL_asimdshf_L: UXTL_USHLL_asimdshf_L
  /* 316  */ 2816, 0, // and_p_p_pp_z: MOV_and_p_p_pp_z
  /* 318  */ 2830, 0, // ands_p_p_pp_z: MOVS_ands_p_p_pp_z
  /* 320  */ 2802, 0, // and_z_zi_: BIC_and_z_zi_
  /* 322  */ 2806, 0, // cmpgt_p_p_zz_: CMPLT_cmpgt_p_p_zz_
  /* 324  */ 2803, 0, // cmpge_p_p_zz_: CMPLE_cmpge_p_p_zz_
  /* 326  */ 2804, 0, // cmphi_p_p_zz_: CMPLO_cmphi_p_p_zz_
  /* 328  */ 2805, 0, // cmphs_p_p_zz_: CMPLS_cmphs_p_p_zz_
  /* 330  */ 2817, 0, // cpy_z_o_i_: MOV_cpy_z_o_i_
  /* 332  */ 2812, 2818, 0, // cpy_z_p_i_: FMOV_cpy_z_p_i_ MOV_cpy_z_p_i_
  /* 335  */ 2819, 0, // cpy_z_p_r_: MOV_cpy_z_p_r_
  /* 337  */ 2820, 0, // cpy_z_p_v_: MOV_cpy_z_p_v_
  /* 339  */ 2813, 2821, 0, // dup_z_i_: FMOV_dup_z_i_ MOV_dup_z_i_
  /* 342  */ 2822, 0, // dup_z_r_: MOV_dup_z_r_
  /* 344  */ 2823, 2824, 0, // dup_z_zi_: MOV_dup_z_zi_ MOV_dup_z_zi_
  /* 347  */ 2825, 0, // dupm_z_i_: MOV_dupm_z_i_
  /* 349  */ 2832, 0, // eor_p_p_pp_z: NOT_eor_p_p_pp_z
  /* 351  */ 2833, 0, // eors_p_p_pp_z: NOTS_eors_p_p_pp_z
  /* 353  */ 2807, 0, // eor_z_zi_: EON_eor_z_zi_
  /* 355  */ 2809, 0, // facgt_p_p_zz_: FACLT_facgt_p_p_zz_
  /* 357  */ 2808, 0, // facge_p_p_zz_: FACLE_facge_p_p_zz_
  /* 359  */ 2811, 0, // fcmgt_p_p_zz_: FCMLT_fcmgt_p_p_zz_
  /* 361  */ 2810, 0, // fcmge_p_p_zz_: FCMLE_fcmge_p_p_zz_
  /* 363  */ 2814, 0, // fcpy_z_p_i_: FMOV_fcpy_z_p_i_
  /* 365  */ 2815, 0, // fdup_z_i_: FMOV_fdup_z_i_
  /* 367  */ 2826, 0, // orr_p_p_pp_z: MOV_orr_p_p_pp_z
  /* 369  */ 2831, 0, // orrs_p_p_pp_z: MOVS_orrs_p_p_pp_z
  /* 371  */ 2834, 0, // orr_z_zi_: ORN_orr_z_zi_
  /* 373  */ 2827, 0, // orr_z_zz_: MOV_orr_z_zz_
  /* 375  */ 2828, 0, // sel_p_p_pp_: MOV_sel_p_p_pp_
  /* 377  */ 2829, 0, // sel_z_p_zz_: MOV_sel_z_p_zz_
};

