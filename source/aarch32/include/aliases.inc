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

const uint16_t amed_aarch32_aliases_array[] = 
{
  /* 0    */ 0,
  /* 1    */ 911, 0, // ADR_A1: ADD_ADR_A1
  /* 3    */ 972, 0, // ADR_A2: SUB_ADR_A2
  /* 5    */ 912, 0, // ADR_T1: ADD_ADR_T1
  /* 7    */ 973, 0, // ADR_T2: SUB_ADR_T2
  /* 9    */ 913, 0, // ADR_T3: ADD_ADR_T3
  /* 11   */ 950, 0, // LDM_A1: POP_LDM_A1
  /* 13   */ 951, 0, // LDM_T2: POP_LDM_T2
  /* 15   */ 952, 0, // LDR_i_A1_post: POP_LDR_i_A1_post
  /* 17   */ 953, 0, // LDR_i_T4_post: POP_LDR_i_T4_post
  /* 19   */ 968, 0, // MOV_r_A1_RRX: RRX_MOV_r_A1_RRX
  /* 21   */ 914, 926, 938, 958, 0, // MOV_r_A1: ASR_MOV_r_A1 LSL_MOV_r_A1 LSR_MOV_r_A1 ROR_MOV_r_A1
  /* 26   */ 970, 0, // MOVS_r_A1_RRX: RRXS_MOVS_r_A1_RRX
  /* 28   */ 920, 932, 944, 963, 0, // MOVS_r_A1: ASRS_MOVS_r_A1 LSLS_MOVS_r_A1 LSRS_MOVS_r_A1 RORS_MOVS_r_A1
  /* 33   */ 915, 921, 927, 933, 939, 945, 0, // MOV_r_T2: ASR_MOV_r_T2 ASRS_MOV_r_T2 LSL_MOV_r_T2 LSLS_MOV_r_T2 LSR_MOV_r_T2 LSRS_MOV_r_T2
  /* 40   */ 969, 0, // MOV_r_T3_RRX: RRX_MOV_r_T3_RRX
  /* 42   */ 916, 928, 940, 959, 0, // MOV_r_T3: ASR_MOV_r_T3 LSL_MOV_r_T3 LSR_MOV_r_T3 ROR_MOV_r_T3
  /* 47   */ 971, 0, // MOVS_r_T3_RRX: RRXS_MOVS_r_T3_RRX
  /* 49   */ 922, 934, 946, 964, 0, // MOVS_r_T3: ASRS_MOVS_r_T3 LSLS_MOVS_r_T3 LSRS_MOVS_r_T3 RORS_MOVS_r_T3
  /* 54   */ 923, 935, 947, 965, 0, // MOVS_rr_A1: ASRS_MOVS_rr_A1 LSLS_MOVS_rr_A1 LSRS_MOVS_rr_A1 RORS_MOVS_rr_A1
  /* 59   */ 917, 929, 941, 960, 0, // MOV_rr_A1: ASR_MOV_rr_A1 LSL_MOV_rr_A1 LSR_MOV_rr_A1 ROR_MOV_rr_A1
  /* 64   */ 918, 924, 0, // MOV_rr_T1_ASR: ASR_MOV_rr_T1_ASR ASRS_MOV_rr_T1_ASR
  /* 67   */ 930, 936, 0, // MOV_rr_T1_LSL: LSL_MOV_rr_T1_LSL LSLS_MOV_rr_T1_LSL
  /* 70   */ 942, 948, 0, // MOV_rr_T1_LSR: LSR_MOV_rr_T1_LSR LSRS_MOV_rr_T1_LSR
  /* 73   */ 961, 966, 0, // MOV_rr_T1_ROR: ROR_MOV_rr_T1_ROR RORS_MOV_rr_T1_ROR
  /* 76   */ 925, 937, 949, 967, 0, // MOVS_rr_T2: ASRS_MOVS_rr_T2 LSLS_MOVS_rr_T2 LSRS_MOVS_rr_T2 RORS_MOVS_rr_T2
  /* 81   */ 919, 931, 943, 962, 0, // MOV_rr_T2: ASR_MOV_rr_T2 LSL_MOV_rr_T2 LSR_MOV_rr_T2 ROR_MOV_rr_T2
  /* 86   */ 954, 0, // STMDB_A1: PUSH_STMDB_A1
  /* 88   */ 955, 0, // STMDB_T1: PUSH_STMDB_T1
  /* 90   */ 956, 0, // STR_i_A1_pre: PUSH_STR_i_A1_pre
  /* 92   */ 957, 0, // STR_i_T4_pre: PUSH_STR_i_T4_pre
  /* 94   */ 2280, 0, // VACGE_A1_D: VACLE_VACGE_A1_D
  /* 96   */ 2281, 0, // VACGE_A1_Q: VACLE_VACGE_A1_Q
  /* 98   */ 2282, 0, // VACGE_T1_D: VACLE_VACGE_T1_D
  /* 100  */ 2283, 0, // VACGE_T1_Q: VACLE_VACGE_T1_Q
  /* 102  */ 2284, 0, // VACGT_A1_D: VACLT_VACGT_A1_D
  /* 104  */ 2285, 0, // VACGT_A1_Q: VACLT_VACGT_A1_Q
  /* 106  */ 2286, 0, // VACGT_T1_D: VACLT_VACGT_T1_D
  /* 108  */ 2287, 0, // VACGT_T1_Q: VACLT_VACGT_T1_Q
  /* 110  */ 2288, 0, // VBIC_i_A1_D: VAND_VBIC_i_A1_D
  /* 112  */ 2289, 0, // VBIC_i_A1_Q: VAND_VBIC_i_A1_Q
  /* 114  */ 2290, 0, // VBIC_i_A2_D: VAND_VBIC_i_A2_D
  /* 116  */ 2291, 0, // VBIC_i_A2_Q: VAND_VBIC_i_A2_Q
  /* 118  */ 2292, 0, // VBIC_i_T1_D: VAND_VBIC_i_T1_D
  /* 120  */ 2293, 0, // VBIC_i_T1_Q: VAND_VBIC_i_T1_Q
  /* 122  */ 2294, 0, // VBIC_i_T2_D: VAND_VBIC_i_T2_D
  /* 124  */ 2295, 0, // VBIC_i_T2_Q: VAND_VBIC_i_T2_Q
  /* 126  */ 2296, 0, // VCGE_r_A1_D: VCLE_VCGE_r_A1_D
  /* 128  */ 2297, 0, // VCGE_r_A1_Q: VCLE_VCGE_r_A1_Q
  /* 130  */ 2298, 0, // VCGE_r_A2_D: VCLE_VCGE_r_A2_D
  /* 132  */ 2299, 0, // VCGE_r_A2_Q: VCLE_VCGE_r_A2_Q
  /* 134  */ 2300, 0, // VCGE_r_T1_D: VCLE_VCGE_r_T1_D
  /* 136  */ 2301, 0, // VCGE_r_T1_Q: VCLE_VCGE_r_T1_Q
  /* 138  */ 2302, 0, // VCGE_r_T2_D: VCLE_VCGE_r_T2_D
  /* 140  */ 2303, 0, // VCGE_r_T2_Q: VCLE_VCGE_r_T2_Q
  /* 142  */ 2304, 0, // VCGT_r_A1_D: VCLT_VCGT_r_A1_D
  /* 144  */ 2305, 0, // VCGT_r_A1_Q: VCLT_VCGT_r_A1_Q
  /* 146  */ 2306, 0, // VCGT_r_A2_D: VCLT_VCGT_r_A2_D
  /* 148  */ 2307, 0, // VCGT_r_A2_Q: VCLT_VCGT_r_A2_Q
  /* 150  */ 2308, 0, // VCGT_r_T1_D: VCLT_VCGT_r_T1_D
  /* 152  */ 2309, 0, // VCGT_r_T1_Q: VCLT_VCGT_r_T1_Q
  /* 154  */ 2310, 0, // VCGT_r_T2_D: VCLT_VCGT_r_T2_D
  /* 156  */ 2311, 0, // VCGT_r_T2_Q: VCLT_VCGT_r_T2_Q
  /* 158  */ 2312, 0, // VEXT_A1_D: VEXT_VEXT_A1_D
  /* 160  */ 2313, 0, // VEXT_A1_Q: VEXT_VEXT_A1_Q
  /* 162  */ 2314, 0, // VEXT_T1_D: VEXT_VEXT_T1_D
  /* 164  */ 2315, 0, // VEXT_T1_Q: VEXT_VEXT_T1_Q
  /* 166  */ 2328, 0, // VLDM_A1: VPOP_VLDM_A1
  /* 168  */ 2329, 0, // VLDM_A2: VPOP_VLDM_A2
  /* 170  */ 2330, 0, // VLDM_T1: VPOP_VLDM_T1
  /* 172  */ 2331, 0, // VLDM_T2: VPOP_VLDM_T2
  /* 174  */ 2348, 2354, 0, // VMOVN_A1: VRSHRN_VMOVN_A1 VSHRN_VMOVN_A1
  /* 177  */ 2349, 2355, 0, // VMOVN_T1: VRSHRN_VMOVN_T1 VSHRN_VMOVN_T1
  /* 180  */ 2320, 0, // VORR_i_A1_D: VORN_VORR_i_A1_D
  /* 182  */ 2321, 0, // VORR_i_A1_Q: VORN_VORR_i_A1_Q
  /* 184  */ 2322, 0, // VORR_i_A2_D: VORN_VORR_i_A2_D
  /* 186  */ 2323, 0, // VORR_i_A2_Q: VORN_VORR_i_A2_Q
  /* 188  */ 2324, 0, // VORR_i_T1_D: VORN_VORR_i_T1_D
  /* 190  */ 2325, 0, // VORR_i_T1_Q: VORN_VORR_i_T1_Q
  /* 192  */ 2326, 0, // VORR_i_T2_D: VORN_VORR_i_T2_D
  /* 194  */ 2327, 0, // VORR_i_T2_Q: VORN_VORR_i_T2_Q
  /* 196  */ 2316, 2344, 2350, 0, // VORR_r_A1_D: VMOV_VORR_r_A1_D VRSHR_VORR_r_A1_D VSHR_VORR_r_A1_D
  /* 200  */ 2317, 2345, 2351, 0, // VORR_r_A1_Q: VMOV_VORR_r_A1_Q VRSHR_VORR_r_A1_Q VSHR_VORR_r_A1_Q
  /* 204  */ 2318, 2346, 2352, 0, // VORR_r_T1_D: VMOV_VORR_r_T1_D VRSHR_VORR_r_T1_D VSHR_VORR_r_T1_D
  /* 208  */ 2319, 2347, 2353, 0, // VORR_r_T1_Q: VMOV_VORR_r_T1_Q VRSHR_VORR_r_T1_Q VSHR_VORR_r_T1_Q
  /* 212  */ 2336, 2340, 0, // VQMOVN_A1: VQRSHRN_VQMOVN_A1 VQSHRN_VQMOVN_A1
  /* 215  */ 2338, 2342, 0, // VQMOVUN_A1: VQRSHRUN_VQMOVUN_A1 VQSHRUN_VQMOVUN_A1
  /* 218  */ 2337, 2341, 0, // VQMOVN_T1: VQRSHRN_VQMOVN_T1 VQSHRN_VQMOVN_T1
  /* 221  */ 2339, 2343, 0, // VQMOVUN_T1: VQRSHRUN_VQMOVUN_T1 VQSHRUN_VQMOVUN_T1
  /* 224  */ 2332, 0, // VSTMDB_A1: VPUSH_VSTMDB_A1
  /* 226  */ 2333, 0, // VSTMDB_A2: VPUSH_VSTMDB_A2
  /* 228  */ 2334, 0, // VSTMDB_T1: VPUSH_VSTMDB_T1
  /* 230  */ 2335, 0, // VSTMDB_T2: VPUSH_VSTMDB_T2
  /* 232  */ 2356, 2358, 0, // VTRN_A1_D: VUZP_VTRN_A1_D VZIP_VTRN_A1_D
  /* 235  */ 2357, 2359, 0, // VTRN_T1_D: VUZP_VTRN_T1_D VZIP_VTRN_T1_D
};

