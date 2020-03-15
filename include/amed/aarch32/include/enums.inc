/*! @file */
/*! @brief enums */
#define AMED_AARCH32_ENCODING_MAX_TEXT_LENGTH (19 + 1)

typedef enum _amed_aarch32_encoding
{
  AMED_AARCH32_ENCODING_NONE,
  AMED_AARCH32_ENCODING_invalid, //!< <a href="../target/aarch32/invalid.html#invalid">INVALID</a>
  AMED_AARCH32_ENCODING_ADC_i_A1, //!< <a href="../target/aarch32/ADC_i.html#ADC_i_A1">ADC</a>
  AMED_AARCH32_ENCODING_ADCS_i_A1, //!< <a href="../target/aarch32/ADC_i.html#ADCS_i_A1">ADCS</a>
  AMED_AARCH32_ENCODING_ADC_i_T1, //!< <a href="../target/aarch32/ADC_i.html#ADC_i_T1">ADC</a>
  AMED_AARCH32_ENCODING_ADCS_i_T1, //!< <a href="../target/aarch32/ADC_i.html#ADCS_i_T1">ADCS</a>
  AMED_AARCH32_ENCODING_ADC_r_A1_RRX, //!< <a href="../target/aarch32/ADC_r.html#ADC_r_A1_RRX">ADC, rotate right with extend</a>
  AMED_AARCH32_ENCODING_ADC_r_A1, //!< <a href="../target/aarch32/ADC_r.html#ADC_r_A1">ADC, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_ADCS_r_A1_RRX, //!< <a href="../target/aarch32/ADC_r.html#ADCS_r_A1_RRX">ADCS, rotate right with extend</a>
  AMED_AARCH32_ENCODING_ADCS_r_A1, //!< <a href="../target/aarch32/ADC_r.html#ADCS_r_A1">ADCS, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_ADC_r_T1, //!< <a href="../target/aarch32/ADC_r.html#ADC_r_T1">T1</a>
  AMED_AARCH32_ENCODING_ADC_r_T2_RRX, //!< <a href="../target/aarch32/ADC_r.html#ADC_r_T2_RRX">ADC, rotate right with extend</a>
  AMED_AARCH32_ENCODING_ADC_r_T2, //!< <a href="../target/aarch32/ADC_r.html#ADC_r_T2">ADC, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_ADCS_r_T2_RRX, //!< <a href="../target/aarch32/ADC_r.html#ADCS_r_T2_RRX">ADCS, rotate right with extend</a>
  AMED_AARCH32_ENCODING_ADCS_r_T2, //!< <a href="../target/aarch32/ADC_r.html#ADCS_r_T2">ADCS, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_ADCS_rr_A1, //!< <a href="../target/aarch32/ADC_rr.html#ADCS_rr_A1">Flag setting</a>
  AMED_AARCH32_ENCODING_ADC_rr_A1, //!< <a href="../target/aarch32/ADC_rr.html#ADC_rr_A1">Not flag setting</a>
  AMED_AARCH32_ENCODING_ADD_i_A1, //!< <a href="../target/aarch32/ADD_i.html#ADD_i_A1">ADD</a>
  AMED_AARCH32_ENCODING_ADDS_i_A1, //!< <a href="../target/aarch32/ADD_i.html#ADDS_i_A1">ADDS</a>
  AMED_AARCH32_ENCODING_ADD_i_T1, //!< <a href="../target/aarch32/ADD_i.html#ADD_i_T1">T1</a>
  AMED_AARCH32_ENCODING_ADD_i_T2, //!< <a href="../target/aarch32/ADD_i.html#ADD_i_T2">T2</a>
  AMED_AARCH32_ENCODING_ADD_i_T3, //!< <a href="../target/aarch32/ADD_i.html#ADD_i_T3">ADD</a>
  AMED_AARCH32_ENCODING_ADDS_i_T3, //!< <a href="../target/aarch32/ADD_i.html#ADDS_i_T3">ADDS</a>
  AMED_AARCH32_ENCODING_ADD_i_T4, //!< <a href="../target/aarch32/ADD_i.html#ADD_i_T4">T4</a>
  AMED_AARCH32_ENCODING_ADD_r_A1_RRX, //!< <a href="../target/aarch32/ADD_r.html#ADD_r_A1_RRX">ADD, rotate right with extend</a>
  AMED_AARCH32_ENCODING_ADD_r_A1, //!< <a href="../target/aarch32/ADD_r.html#ADD_r_A1">ADD, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_ADDS_r_A1_RRX, //!< <a href="../target/aarch32/ADD_r.html#ADDS_r_A1_RRX">ADDS, rotate right with extend</a>
  AMED_AARCH32_ENCODING_ADDS_r_A1, //!< <a href="../target/aarch32/ADD_r.html#ADDS_r_A1">ADDS, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_ADD_r_T1, //!< <a href="../target/aarch32/ADD_r.html#ADD_r_T1">T1</a>
  AMED_AARCH32_ENCODING_ADD_r_T2, //!< <a href="../target/aarch32/ADD_r.html#ADD_r_T2">T2</a>
  AMED_AARCH32_ENCODING_ADD_r_T3_RRX, //!< <a href="../target/aarch32/ADD_r.html#ADD_r_T3_RRX">ADD, rotate right with extend</a>
  AMED_AARCH32_ENCODING_ADD_r_T3, //!< <a href="../target/aarch32/ADD_r.html#ADD_r_T3">ADD, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_ADDS_r_T3_RRX, //!< <a href="../target/aarch32/ADD_r.html#ADDS_r_T3_RRX">ADDS, rotate right with extend</a>
  AMED_AARCH32_ENCODING_ADDS_r_T3, //!< <a href="../target/aarch32/ADD_r.html#ADDS_r_T3">ADDS, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_ADDS_rr_A1, //!< <a href="../target/aarch32/ADD_rr.html#ADDS_rr_A1">Flag setting</a>
  AMED_AARCH32_ENCODING_ADD_rr_A1, //!< <a href="../target/aarch32/ADD_rr.html#ADD_rr_A1">Not flag setting</a>
  AMED_AARCH32_ENCODING_ADD_SP_i_A1, //!< <a href="../target/aarch32/ADD_SP_i.html#ADD_SP_i_A1">ADD</a>
  AMED_AARCH32_ENCODING_ADDS_SP_i_A1, //!< <a href="../target/aarch32/ADD_SP_i.html#ADDS_SP_i_A1">ADDS</a>
  AMED_AARCH32_ENCODING_ADD_SP_i_T1, //!< <a href="../target/aarch32/ADD_SP_i.html#ADD_SP_i_T1">T1</a>
  AMED_AARCH32_ENCODING_ADD_SP_i_T2, //!< <a href="../target/aarch32/ADD_SP_i.html#ADD_SP_i_T2">T2</a>
  AMED_AARCH32_ENCODING_ADD_SP_i_T3, //!< <a href="../target/aarch32/ADD_SP_i.html#ADD_SP_i_T3">ADD</a>
  AMED_AARCH32_ENCODING_ADDS_SP_i_T3, //!< <a href="../target/aarch32/ADD_SP_i.html#ADDS_SP_i_T3">ADDS</a>
  AMED_AARCH32_ENCODING_ADD_SP_i_T4, //!< <a href="../target/aarch32/ADD_SP_i.html#ADD_SP_i_T4">T4</a>
  AMED_AARCH32_ENCODING_ADD_SP_r_A1_RRX, //!< <a href="../target/aarch32/ADD_SP_r.html#ADD_SP_r_A1_RRX">ADD, rotate right with extend</a>
  AMED_AARCH32_ENCODING_ADD_SP_r_A1, //!< <a href="../target/aarch32/ADD_SP_r.html#ADD_SP_r_A1">ADD, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_ADDS_SP_r_A1_RRX, //!< <a href="../target/aarch32/ADD_SP_r.html#ADDS_SP_r_A1_RRX">ADDS, rotate right with extend</a>
  AMED_AARCH32_ENCODING_ADDS_SP_r_A1, //!< <a href="../target/aarch32/ADD_SP_r.html#ADDS_SP_r_A1">ADDS, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_ADD_SP_r_T1, //!< <a href="../target/aarch32/ADD_SP_r.html#ADD_SP_r_T1">T1</a>
  AMED_AARCH32_ENCODING_ADD_SP_r_T2, //!< <a href="../target/aarch32/ADD_SP_r.html#ADD_SP_r_T2">T2</a>
  AMED_AARCH32_ENCODING_ADD_SP_r_T3_RRX, //!< <a href="../target/aarch32/ADD_SP_r.html#ADD_SP_r_T3_RRX">ADD, rotate right with extend</a>
  AMED_AARCH32_ENCODING_ADD_SP_r_T3, //!< <a href="../target/aarch32/ADD_SP_r.html#ADD_SP_r_T3">ADD, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_ADDS_SP_r_T3_RRX, //!< <a href="../target/aarch32/ADD_SP_r.html#ADDS_SP_r_T3_RRX">ADDS, rotate right with extend</a>
  AMED_AARCH32_ENCODING_ADDS_SP_r_T3, //!< <a href="../target/aarch32/ADD_SP_r.html#ADDS_SP_r_T3">ADDS, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_ADR_A1, //!< <a href="../target/aarch32/ADR.html#ADR_A1">A1</a>
  AMED_AARCH32_ENCODING_ADR_A2, //!< <a href="../target/aarch32/ADR.html#ADR_A2">A2</a>
  AMED_AARCH32_ENCODING_ADR_T1, //!< <a href="../target/aarch32/ADR.html#ADR_T1">T1</a>
  AMED_AARCH32_ENCODING_ADR_T2, //!< <a href="../target/aarch32/ADR.html#ADR_T2">T2</a>
  AMED_AARCH32_ENCODING_ADR_T3, //!< <a href="../target/aarch32/ADR.html#ADR_T3">T3</a>
  AMED_AARCH32_ENCODING_AND_i_A1, //!< <a href="../target/aarch32/AND_i.html#AND_i_A1">AND</a>
  AMED_AARCH32_ENCODING_ANDS_i_A1, //!< <a href="../target/aarch32/AND_i.html#ANDS_i_A1">ANDS</a>
  AMED_AARCH32_ENCODING_AND_i_T1, //!< <a href="../target/aarch32/AND_i.html#AND_i_T1">AND</a>
  AMED_AARCH32_ENCODING_ANDS_i_T1, //!< <a href="../target/aarch32/AND_i.html#ANDS_i_T1">ANDS</a>
  AMED_AARCH32_ENCODING_AND_r_A1_RRX, //!< <a href="../target/aarch32/AND_r.html#AND_r_A1_RRX">AND, rotate right with extend</a>
  AMED_AARCH32_ENCODING_AND_r_A1, //!< <a href="../target/aarch32/AND_r.html#AND_r_A1">AND, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_ANDS_r_A1_RRX, //!< <a href="../target/aarch32/AND_r.html#ANDS_r_A1_RRX">ANDS, rotate right with extend</a>
  AMED_AARCH32_ENCODING_ANDS_r_A1, //!< <a href="../target/aarch32/AND_r.html#ANDS_r_A1">ANDS, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_AND_r_T1, //!< <a href="../target/aarch32/AND_r.html#AND_r_T1">T1</a>
  AMED_AARCH32_ENCODING_AND_r_T2_RRX, //!< <a href="../target/aarch32/AND_r.html#AND_r_T2_RRX">AND, rotate right with extend</a>
  AMED_AARCH32_ENCODING_AND_r_T2, //!< <a href="../target/aarch32/AND_r.html#AND_r_T2">AND, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_ANDS_r_T2_RRX, //!< <a href="../target/aarch32/AND_r.html#ANDS_r_T2_RRX">ANDS, rotate right with extend</a>
  AMED_AARCH32_ENCODING_ANDS_r_T2, //!< <a href="../target/aarch32/AND_r.html#ANDS_r_T2">ANDS, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_ANDS_rr_A1, //!< <a href="../target/aarch32/AND_rr.html#ANDS_rr_A1">Flag setting</a>
  AMED_AARCH32_ENCODING_AND_rr_A1, //!< <a href="../target/aarch32/AND_rr.html#AND_rr_A1">Not flag setting</a>
  AMED_AARCH32_ENCODING_B_A1, //!< <a href="../target/aarch32/B.html#B_A1">A1</a>
  AMED_AARCH32_ENCODING_B_T1, //!< <a href="../target/aarch32/B.html#B_T1">T1</a>
  AMED_AARCH32_ENCODING_B_T2, //!< <a href="../target/aarch32/B.html#B_T2">T2</a>
  AMED_AARCH32_ENCODING_B_T3, //!< <a href="../target/aarch32/B.html#B_T3">T3</a>
  AMED_AARCH32_ENCODING_B_T4, //!< <a href="../target/aarch32/B.html#B_T4">T4</a>
  AMED_AARCH32_ENCODING_BFC_A1, //!< <a href="../target/aarch32/BFC.html#BFC_A1">A1</a>
  AMED_AARCH32_ENCODING_BFC_T1, //!< <a href="../target/aarch32/BFC.html#BFC_T1">T1</a>
  AMED_AARCH32_ENCODING_BFI_A1, //!< <a href="../target/aarch32/BFI.html#BFI_A1">A1</a>
  AMED_AARCH32_ENCODING_BFI_T1, //!< <a href="../target/aarch32/BFI.html#BFI_T1">T1</a>
  AMED_AARCH32_ENCODING_BIC_i_A1, //!< <a href="../target/aarch32/BIC_i.html#BIC_i_A1">BIC</a>
  AMED_AARCH32_ENCODING_BICS_i_A1, //!< <a href="../target/aarch32/BIC_i.html#BICS_i_A1">BICS</a>
  AMED_AARCH32_ENCODING_BIC_i_T1, //!< <a href="../target/aarch32/BIC_i.html#BIC_i_T1">BIC</a>
  AMED_AARCH32_ENCODING_BICS_i_T1, //!< <a href="../target/aarch32/BIC_i.html#BICS_i_T1">BICS</a>
  AMED_AARCH32_ENCODING_BIC_r_A1_RRX, //!< <a href="../target/aarch32/BIC_r.html#BIC_r_A1_RRX">BIC, rotate right with extend</a>
  AMED_AARCH32_ENCODING_BIC_r_A1, //!< <a href="../target/aarch32/BIC_r.html#BIC_r_A1">BIC, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_BICS_r_A1_RRX, //!< <a href="../target/aarch32/BIC_r.html#BICS_r_A1_RRX">BICS, rotate right with extend</a>
  AMED_AARCH32_ENCODING_BICS_r_A1, //!< <a href="../target/aarch32/BIC_r.html#BICS_r_A1">BICS, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_BIC_r_T1, //!< <a href="../target/aarch32/BIC_r.html#BIC_r_T1">T1</a>
  AMED_AARCH32_ENCODING_BIC_r_T2_RRX, //!< <a href="../target/aarch32/BIC_r.html#BIC_r_T2_RRX">BIC, rotate right with extend</a>
  AMED_AARCH32_ENCODING_BIC_r_T2, //!< <a href="../target/aarch32/BIC_r.html#BIC_r_T2">BIC, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_BICS_r_T2_RRX, //!< <a href="../target/aarch32/BIC_r.html#BICS_r_T2_RRX">BICS, rotate right with extend</a>
  AMED_AARCH32_ENCODING_BICS_r_T2, //!< <a href="../target/aarch32/BIC_r.html#BICS_r_T2">BICS, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_BICS_rr_A1, //!< <a href="../target/aarch32/BIC_rr.html#BICS_rr_A1">Flag setting</a>
  AMED_AARCH32_ENCODING_BIC_rr_A1, //!< <a href="../target/aarch32/BIC_rr.html#BIC_rr_A1">Not flag setting</a>
  AMED_AARCH32_ENCODING_BKPT_A1, //!< <a href="../target/aarch32/BKPT.html#BKPT_A1">A1</a>
  AMED_AARCH32_ENCODING_BKPT_T1, //!< <a href="../target/aarch32/BKPT.html#BKPT_T1">T1</a>
  AMED_AARCH32_ENCODING_BL_i_A1, //!< <a href="../target/aarch32/BL_i.html#BL_i_A1">A1</a>
  AMED_AARCH32_ENCODING_BL_i_A2, //!< <a href="../target/aarch32/BL_i.html#BL_i_A2">A2</a>
  AMED_AARCH32_ENCODING_BL_i_T1, //!< <a href="../target/aarch32/BL_i.html#BL_i_T1">T1</a>
  AMED_AARCH32_ENCODING_BL_i_T2, //!< <a href="../target/aarch32/BL_i.html#BL_i_T2">T2</a>
  AMED_AARCH32_ENCODING_BLX_r_A1, //!< <a href="../target/aarch32/BLX_r.html#BLX_r_A1">A1</a>
  AMED_AARCH32_ENCODING_BLX_r_T1, //!< <a href="../target/aarch32/BLX_r.html#BLX_r_T1">T1</a>
  AMED_AARCH32_ENCODING_BX_A1, //!< <a href="../target/aarch32/BX.html#BX_A1">A1</a>
  AMED_AARCH32_ENCODING_BX_T1, //!< <a href="../target/aarch32/BX.html#BX_T1">T1</a>
  AMED_AARCH32_ENCODING_BXJ_A1, //!< <a href="../target/aarch32/BXJ.html#BXJ_A1">A1</a>
  AMED_AARCH32_ENCODING_BXJ_T1, //!< <a href="../target/aarch32/BXJ.html#BXJ_T1">T1</a>
  AMED_AARCH32_ENCODING_CBNZ_T1, //!< <a href="../target/aarch32/CBNZ.html#CBNZ_T1">CBNZ</a>
  AMED_AARCH32_ENCODING_CBZ_T1, //!< <a href="../target/aarch32/CBNZ.html#CBZ_T1">CBZ</a>
  AMED_AARCH32_ENCODING_CLREX_A1, //!< <a href="../target/aarch32/CLREX.html#CLREX_A1">A1</a>
  AMED_AARCH32_ENCODING_CLREX_T1, //!< <a href="../target/aarch32/CLREX.html#CLREX_T1">T1</a>
  AMED_AARCH32_ENCODING_CLZ_A1, //!< <a href="../target/aarch32/CLZ.html#CLZ_A1">A1</a>
  AMED_AARCH32_ENCODING_CLZ_T1, //!< <a href="../target/aarch32/CLZ.html#CLZ_T1">T1</a>
  AMED_AARCH32_ENCODING_CMN_i_A1, //!< <a href="../target/aarch32/CMN_i.html#CMN_i_A1">A1</a>
  AMED_AARCH32_ENCODING_CMN_i_T1, //!< <a href="../target/aarch32/CMN_i.html#CMN_i_T1">T1</a>
  AMED_AARCH32_ENCODING_CMN_r_A1_RRX, //!< <a href="../target/aarch32/CMN_r.html#CMN_r_A1_RRX">Rotate right with extend</a>
  AMED_AARCH32_ENCODING_CMN_r_A1, //!< <a href="../target/aarch32/CMN_r.html#CMN_r_A1">Shift or rotate by value</a>
  AMED_AARCH32_ENCODING_CMN_r_T1, //!< <a href="../target/aarch32/CMN_r.html#CMN_r_T1">T1</a>
  AMED_AARCH32_ENCODING_CMN_r_T2_RRX, //!< <a href="../target/aarch32/CMN_r.html#CMN_r_T2_RRX">Rotate right with extend</a>
  AMED_AARCH32_ENCODING_CMN_r_T2, //!< <a href="../target/aarch32/CMN_r.html#CMN_r_T2">Shift or rotate by value</a>
  AMED_AARCH32_ENCODING_CMN_rr_A1, //!< <a href="../target/aarch32/CMN_rr.html#CMN_rr_A1">A1</a>
  AMED_AARCH32_ENCODING_CMP_i_A1, //!< <a href="../target/aarch32/CMP_i.html#CMP_i_A1">A1</a>
  AMED_AARCH32_ENCODING_CMP_i_T1, //!< <a href="../target/aarch32/CMP_i.html#CMP_i_T1">T1</a>
  AMED_AARCH32_ENCODING_CMP_i_T2, //!< <a href="../target/aarch32/CMP_i.html#CMP_i_T2">T2</a>
  AMED_AARCH32_ENCODING_CMP_r_A1_RRX, //!< <a href="../target/aarch32/CMP_r.html#CMP_r_A1_RRX">Rotate right with extend</a>
  AMED_AARCH32_ENCODING_CMP_r_A1, //!< <a href="../target/aarch32/CMP_r.html#CMP_r_A1">Shift or rotate by value</a>
  AMED_AARCH32_ENCODING_CMP_r_T1, //!< <a href="../target/aarch32/CMP_r.html#CMP_r_T1">T1</a>
  AMED_AARCH32_ENCODING_CMP_r_T2, //!< <a href="../target/aarch32/CMP_r.html#CMP_r_T2">T2</a>
  AMED_AARCH32_ENCODING_CMP_r_T3_RRX, //!< <a href="../target/aarch32/CMP_r.html#CMP_r_T3_RRX">Rotate right with extend</a>
  AMED_AARCH32_ENCODING_CMP_r_T3, //!< <a href="../target/aarch32/CMP_r.html#CMP_r_T3">Shift or rotate by value</a>
  AMED_AARCH32_ENCODING_CMP_rr_A1, //!< <a href="../target/aarch32/CMP_rr.html#CMP_rr_A1">A1</a>
  AMED_AARCH32_ENCODING_CPS_A1_AS, //!< <a href="../target/aarch32/CPS.html#CPS_A1_AS">CPS</a>
  AMED_AARCH32_ENCODING_CPSID_A1_AS, //!< <a href="../target/aarch32/CPS.html#CPSID_A1_AS">CPSID</a>
  AMED_AARCH32_ENCODING_CPSID_A1_ASM, //!< <a href="../target/aarch32/CPS.html#CPSID_A1_ASM">CPSID</a>
  AMED_AARCH32_ENCODING_CPSIE_A1_AS, //!< <a href="../target/aarch32/CPS.html#CPSIE_A1_AS">CPSIE</a>
  AMED_AARCH32_ENCODING_CPSIE_A1_ASM, //!< <a href="../target/aarch32/CPS.html#CPSIE_A1_ASM">CPSIE</a>
  AMED_AARCH32_ENCODING_CPSID_T1_AS, //!< <a href="../target/aarch32/CPS.html#CPSID_T1_AS">CPSID</a>
  AMED_AARCH32_ENCODING_CPSIE_T1_AS, //!< <a href="../target/aarch32/CPS.html#CPSIE_T1_AS">CPSIE</a>
  AMED_AARCH32_ENCODING_CPS_T2_AS, //!< <a href="../target/aarch32/CPS.html#CPS_T2_AS">CPS</a>
  AMED_AARCH32_ENCODING_CPSID_T2_AS, //!< <a href="../target/aarch32/CPS.html#CPSID_T2_AS">CPSID</a>
  AMED_AARCH32_ENCODING_CPSID_T2_ASM, //!< <a href="../target/aarch32/CPS.html#CPSID_T2_ASM">CPSID</a>
  AMED_AARCH32_ENCODING_CPSIE_T2_AS, //!< <a href="../target/aarch32/CPS.html#CPSIE_T2_AS">CPSIE</a>
  AMED_AARCH32_ENCODING_CPSIE_T2_ASM, //!< <a href="../target/aarch32/CPS.html#CPSIE_T2_ASM">CPSIE</a>
  AMED_AARCH32_ENCODING_CRC32B_A1, //!< <a href="../target/aarch32/CRC32.html#CRC32B_A1">CRC32B</a>
  AMED_AARCH32_ENCODING_CRC32H_A1, //!< <a href="../target/aarch32/CRC32.html#CRC32H_A1">CRC32H</a>
  AMED_AARCH32_ENCODING_CRC32W_A1, //!< <a href="../target/aarch32/CRC32.html#CRC32W_A1">CRC32W</a>
  AMED_AARCH32_ENCODING_CRC32B_T1, //!< <a href="../target/aarch32/CRC32.html#CRC32B_T1">CRC32B</a>
  AMED_AARCH32_ENCODING_CRC32H_T1, //!< <a href="../target/aarch32/CRC32.html#CRC32H_T1">CRC32H</a>
  AMED_AARCH32_ENCODING_CRC32W_T1, //!< <a href="../target/aarch32/CRC32.html#CRC32W_T1">CRC32W</a>
  AMED_AARCH32_ENCODING_CRC32CB_A1, //!< <a href="../target/aarch32/CRC32C.html#CRC32CB_A1">CRC32CB</a>
  AMED_AARCH32_ENCODING_CRC32CH_A1, //!< <a href="../target/aarch32/CRC32C.html#CRC32CH_A1">CRC32CH</a>
  AMED_AARCH32_ENCODING_CRC32CW_A1, //!< <a href="../target/aarch32/CRC32C.html#CRC32CW_A1">CRC32CW</a>
  AMED_AARCH32_ENCODING_CRC32CB_T1, //!< <a href="../target/aarch32/CRC32C.html#CRC32CB_T1">CRC32CB</a>
  AMED_AARCH32_ENCODING_CRC32CH_T1, //!< <a href="../target/aarch32/CRC32C.html#CRC32CH_T1">CRC32CH</a>
  AMED_AARCH32_ENCODING_CRC32CW_T1, //!< <a href="../target/aarch32/CRC32C.html#CRC32CW_T1">CRC32CW</a>
  AMED_AARCH32_ENCODING_CSDB_A1, //!< <a href="../target/aarch32/CSDB.html#CSDB_A1">A1</a>
  AMED_AARCH32_ENCODING_CSDB_T1, //!< <a href="../target/aarch32/CSDB.html#CSDB_T1">T1</a>
  AMED_AARCH32_ENCODING_DBG_A1, //!< <a href="../target/aarch32/DBG.html#DBG_A1">A1</a>
  AMED_AARCH32_ENCODING_DBG_T1, //!< <a href="../target/aarch32/DBG.html#DBG_T1">T1</a>
  AMED_AARCH32_ENCODING_DCPS1_T1, //!< <a href="../target/aarch32/DCPS1.html#DCPS1_T1">T1</a>
  AMED_AARCH32_ENCODING_DCPS2_T1, //!< <a href="../target/aarch32/DCPS2.html#DCPS2_T1">T1</a>
  AMED_AARCH32_ENCODING_DCPS3_T1, //!< <a href="../target/aarch32/DCPS3.html#DCPS3_T1">T1</a>
  AMED_AARCH32_ENCODING_DMB_A1, //!< <a href="../target/aarch32/DMB.html#DMB_A1">A1</a>
  AMED_AARCH32_ENCODING_DMB_T1, //!< <a href="../target/aarch32/DMB.html#DMB_T1">T1</a>
  AMED_AARCH32_ENCODING_DSB_A1, //!< <a href="../target/aarch32/DSB.html#DSB_A1">A1</a>
  AMED_AARCH32_ENCODING_DSB_T1, //!< <a href="../target/aarch32/DSB.html#DSB_T1">T1</a>
  AMED_AARCH32_ENCODING_EOR_i_A1, //!< <a href="../target/aarch32/EOR_i.html#EOR_i_A1">EOR</a>
  AMED_AARCH32_ENCODING_EORS_i_A1, //!< <a href="../target/aarch32/EOR_i.html#EORS_i_A1">EORS</a>
  AMED_AARCH32_ENCODING_EOR_i_T1, //!< <a href="../target/aarch32/EOR_i.html#EOR_i_T1">EOR</a>
  AMED_AARCH32_ENCODING_EORS_i_T1, //!< <a href="../target/aarch32/EOR_i.html#EORS_i_T1">EORS</a>
  AMED_AARCH32_ENCODING_EOR_r_A1_RRX, //!< <a href="../target/aarch32/EOR_r.html#EOR_r_A1_RRX">EOR, rotate right with extend</a>
  AMED_AARCH32_ENCODING_EOR_r_A1, //!< <a href="../target/aarch32/EOR_r.html#EOR_r_A1">EOR, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_EORS_r_A1_RRX, //!< <a href="../target/aarch32/EOR_r.html#EORS_r_A1_RRX">EORS, rotate right with extend</a>
  AMED_AARCH32_ENCODING_EORS_r_A1, //!< <a href="../target/aarch32/EOR_r.html#EORS_r_A1">EORS, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_EOR_r_T1, //!< <a href="../target/aarch32/EOR_r.html#EOR_r_T1">T1</a>
  AMED_AARCH32_ENCODING_EOR_r_T2_RRX, //!< <a href="../target/aarch32/EOR_r.html#EOR_r_T2_RRX">EOR, rotate right with extend</a>
  AMED_AARCH32_ENCODING_EOR_r_T2, //!< <a href="../target/aarch32/EOR_r.html#EOR_r_T2">EOR, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_EORS_r_T2_RRX, //!< <a href="../target/aarch32/EOR_r.html#EORS_r_T2_RRX">EORS, rotate right with extend</a>
  AMED_AARCH32_ENCODING_EORS_r_T2, //!< <a href="../target/aarch32/EOR_r.html#EORS_r_T2">EORS, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_EORS_rr_A1, //!< <a href="../target/aarch32/EOR_rr.html#EORS_rr_A1">Flag setting</a>
  AMED_AARCH32_ENCODING_EOR_rr_A1, //!< <a href="../target/aarch32/EOR_rr.html#EOR_rr_A1">Not flag setting</a>
  AMED_AARCH32_ENCODING_ERET_A1, //!< <a href="../target/aarch32/ERET.html#ERET_A1">A1</a>
  AMED_AARCH32_ENCODING_ERET_T1, //!< <a href="../target/aarch32/ERET.html#ERET_T1">T1</a>
  AMED_AARCH32_ENCODING_ESB_A1, //!< <a href="../target/aarch32/ESB.html#ESB_A1">A1</a>
  AMED_AARCH32_ENCODING_ESB_T1, //!< <a href="../target/aarch32/ESB.html#ESB_T1">T1</a>
  AMED_AARCH32_ENCODING_HLT_A1, //!< <a href="../target/aarch32/HLT.html#HLT_A1">A1</a>
  AMED_AARCH32_ENCODING_HLT_T1, //!< <a href="../target/aarch32/HLT.html#HLT_T1">T1</a>
  AMED_AARCH32_ENCODING_HVC_A1, //!< <a href="../target/aarch32/HVC.html#HVC_A1">A1</a>
  AMED_AARCH32_ENCODING_HVC_T1, //!< <a href="../target/aarch32/HVC.html#HVC_T1">T1</a>
  AMED_AARCH32_ENCODING_ISB_A1, //!< <a href="../target/aarch32/ISB.html#ISB_A1">A1</a>
  AMED_AARCH32_ENCODING_ISB_T1, //!< <a href="../target/aarch32/ISB.html#ISB_T1">T1</a>
  AMED_AARCH32_ENCODING_IT_T1, //!< <a href="../target/aarch32/IT.html#IT_T1">T1</a>
  AMED_AARCH32_ENCODING_LDA_A1, //!< <a href="../target/aarch32/LDA.html#LDA_A1">A1</a>
  AMED_AARCH32_ENCODING_LDA_T1, //!< <a href="../target/aarch32/LDA.html#LDA_T1">T1</a>
  AMED_AARCH32_ENCODING_LDAB_A1, //!< <a href="../target/aarch32/LDAB.html#LDAB_A1">A1</a>
  AMED_AARCH32_ENCODING_LDAB_T1, //!< <a href="../target/aarch32/LDAB.html#LDAB_T1">T1</a>
  AMED_AARCH32_ENCODING_LDAEX_A1, //!< <a href="../target/aarch32/LDAEX.html#LDAEX_A1">A1</a>
  AMED_AARCH32_ENCODING_LDAEX_T1, //!< <a href="../target/aarch32/LDAEX.html#LDAEX_T1">T1</a>
  AMED_AARCH32_ENCODING_LDAEXB_A1, //!< <a href="../target/aarch32/LDAEXB.html#LDAEXB_A1">A1</a>
  AMED_AARCH32_ENCODING_LDAEXB_T1, //!< <a href="../target/aarch32/LDAEXB.html#LDAEXB_T1">T1</a>
  AMED_AARCH32_ENCODING_LDAEXD_A1, //!< <a href="../target/aarch32/LDAEXD.html#LDAEXD_A1">A1</a>
  AMED_AARCH32_ENCODING_LDAEXD_T1, //!< <a href="../target/aarch32/LDAEXD.html#LDAEXD_T1">T1</a>
  AMED_AARCH32_ENCODING_LDAEXH_A1, //!< <a href="../target/aarch32/LDAEXH.html#LDAEXH_A1">A1</a>
  AMED_AARCH32_ENCODING_LDAEXH_T1, //!< <a href="../target/aarch32/LDAEXH.html#LDAEXH_T1">T1</a>
  AMED_AARCH32_ENCODING_LDAH_A1, //!< <a href="../target/aarch32/LDAH.html#LDAH_A1">A1</a>
  AMED_AARCH32_ENCODING_LDAH_T1, //!< <a href="../target/aarch32/LDAH.html#LDAH_T1">T1</a>
  AMED_AARCH32_ENCODING_LDC_i_A1_off, //!< <a href="../target/aarch32/LDC_i.html#LDC_i_A1_off">Offset</a>
  AMED_AARCH32_ENCODING_LDC_i_A1_post, //!< <a href="../target/aarch32/LDC_i.html#LDC_i_A1_post">Post-indexed</a>
  AMED_AARCH32_ENCODING_LDC_i_A1_pre, //!< <a href="../target/aarch32/LDC_i.html#LDC_i_A1_pre">Pre-indexed</a>
  AMED_AARCH32_ENCODING_LDC_i_A1_unind, //!< <a href="../target/aarch32/LDC_i.html#LDC_i_A1_unind">Unindexed</a>
  AMED_AARCH32_ENCODING_LDC_i_T1_off, //!< <a href="../target/aarch32/LDC_i.html#LDC_i_T1_off">Offset</a>
  AMED_AARCH32_ENCODING_LDC_i_T1_post, //!< <a href="../target/aarch32/LDC_i.html#LDC_i_T1_post">Post-indexed</a>
  AMED_AARCH32_ENCODING_LDC_i_T1_pre, //!< <a href="../target/aarch32/LDC_i.html#LDC_i_T1_pre">Pre-indexed</a>
  AMED_AARCH32_ENCODING_LDC_i_T1_unind, //!< <a href="../target/aarch32/LDC_i.html#LDC_i_T1_unind">Unindexed</a>
  AMED_AARCH32_ENCODING_LDC_l_A1, //!< <a href="../target/aarch32/LDC_l.html#LDC_l_A1">A1</a>
  AMED_AARCH32_ENCODING_LDC_l_T1, //!< <a href="../target/aarch32/LDC_l.html#LDC_l_T1">T1</a>
  AMED_AARCH32_ENCODING_LDM_A1, //!< <a href="../target/aarch32/LDM.html#LDM_A1">A1</a>
  AMED_AARCH32_ENCODING_LDM_T1, //!< <a href="../target/aarch32/LDM.html#LDM_T1">T1</a>
  AMED_AARCH32_ENCODING_LDM_T2, //!< <a href="../target/aarch32/LDM.html#LDM_T2">T2</a>
  AMED_AARCH32_ENCODING_LDM_e_A1_AS, //!< <a href="../target/aarch32/LDM_e.html#LDM_e_A1_AS">A1</a>
  AMED_AARCH32_ENCODING_LDM_u_A1_AS, //!< <a href="../target/aarch32/LDM_u.html#LDM_u_A1_AS">A1</a>
  AMED_AARCH32_ENCODING_LDMDA_A1, //!< <a href="../target/aarch32/LDMDA.html#LDMDA_A1">A1</a>
  AMED_AARCH32_ENCODING_LDMDB_A1, //!< <a href="../target/aarch32/LDMDB.html#LDMDB_A1">A1</a>
  AMED_AARCH32_ENCODING_LDMDB_T1, //!< <a href="../target/aarch32/LDMDB.html#LDMDB_T1">T1</a>
  AMED_AARCH32_ENCODING_LDMIB_A1, //!< <a href="../target/aarch32/LDMIB.html#LDMIB_A1">A1</a>
  AMED_AARCH32_ENCODING_LDR_i_A1_off, //!< <a href="../target/aarch32/LDR_i.html#LDR_i_A1_off">Offset</a>
  AMED_AARCH32_ENCODING_LDR_i_A1_post, //!< <a href="../target/aarch32/LDR_i.html#LDR_i_A1_post">Post-indexed</a>
  AMED_AARCH32_ENCODING_LDR_i_A1_pre, //!< <a href="../target/aarch32/LDR_i.html#LDR_i_A1_pre">Pre-indexed</a>
  AMED_AARCH32_ENCODING_LDR_i_T1, //!< <a href="../target/aarch32/LDR_i.html#LDR_i_T1">T1</a>
  AMED_AARCH32_ENCODING_LDR_i_T2, //!< <a href="../target/aarch32/LDR_i.html#LDR_i_T2">T2</a>
  AMED_AARCH32_ENCODING_LDR_i_T3, //!< <a href="../target/aarch32/LDR_i.html#LDR_i_T3">T3</a>
  AMED_AARCH32_ENCODING_LDR_i_T4_off, //!< <a href="../target/aarch32/LDR_i.html#LDR_i_T4_off">Offset</a>
  AMED_AARCH32_ENCODING_LDR_i_T4_post, //!< <a href="../target/aarch32/LDR_i.html#LDR_i_T4_post">Post-indexed</a>
  AMED_AARCH32_ENCODING_LDR_i_T4_pre, //!< <a href="../target/aarch32/LDR_i.html#LDR_i_T4_pre">Pre-indexed</a>
  AMED_AARCH32_ENCODING_LDR_l_A1, //!< <a href="../target/aarch32/LDR_l.html#LDR_l_A1">A1</a>
  AMED_AARCH32_ENCODING_LDR_l_T1, //!< <a href="../target/aarch32/LDR_l.html#LDR_l_T1">T1</a>
  AMED_AARCH32_ENCODING_LDR_l_T2, //!< <a href="../target/aarch32/LDR_l.html#LDR_l_T2">T2</a>
  AMED_AARCH32_ENCODING_LDR_r_A1_off, //!< <a href="../target/aarch32/LDR_r.html#LDR_r_A1_off">Offset</a>
  AMED_AARCH32_ENCODING_LDR_r_A1_post, //!< <a href="../target/aarch32/LDR_r.html#LDR_r_A1_post">Post-indexed</a>
  AMED_AARCH32_ENCODING_LDR_r_A1_pre, //!< <a href="../target/aarch32/LDR_r.html#LDR_r_A1_pre">Pre-indexed</a>
  AMED_AARCH32_ENCODING_LDR_r_T1, //!< <a href="../target/aarch32/LDR_r.html#LDR_r_T1">T1</a>
  AMED_AARCH32_ENCODING_LDR_r_T2, //!< <a href="../target/aarch32/LDR_r.html#LDR_r_T2">T2</a>
  AMED_AARCH32_ENCODING_LDRB_i_A1_off, //!< <a href="../target/aarch32/LDRB_i.html#LDRB_i_A1_off">Offset</a>
  AMED_AARCH32_ENCODING_LDRB_i_A1_post, //!< <a href="../target/aarch32/LDRB_i.html#LDRB_i_A1_post">Post-indexed</a>
  AMED_AARCH32_ENCODING_LDRB_i_A1_pre, //!< <a href="../target/aarch32/LDRB_i.html#LDRB_i_A1_pre">Pre-indexed</a>
  AMED_AARCH32_ENCODING_LDRB_i_T1, //!< <a href="../target/aarch32/LDRB_i.html#LDRB_i_T1">T1</a>
  AMED_AARCH32_ENCODING_LDRB_i_T2, //!< <a href="../target/aarch32/LDRB_i.html#LDRB_i_T2">T2</a>
  AMED_AARCH32_ENCODING_LDRB_i_T3_off, //!< <a href="../target/aarch32/LDRB_i.html#LDRB_i_T3_off">Offset</a>
  AMED_AARCH32_ENCODING_LDRB_i_T3_post, //!< <a href="../target/aarch32/LDRB_i.html#LDRB_i_T3_post">Post-indexed</a>
  AMED_AARCH32_ENCODING_LDRB_i_T3_pre, //!< <a href="../target/aarch32/LDRB_i.html#LDRB_i_T3_pre">Pre-indexed</a>
  AMED_AARCH32_ENCODING_LDRB_l_A1, //!< <a href="../target/aarch32/LDRB_l.html#LDRB_l_A1">A1</a>
  AMED_AARCH32_ENCODING_LDRB_l_T1, //!< <a href="../target/aarch32/LDRB_l.html#LDRB_l_T1">T1</a>
  AMED_AARCH32_ENCODING_LDRB_r_A1_off, //!< <a href="../target/aarch32/LDRB_r.html#LDRB_r_A1_off">Offset</a>
  AMED_AARCH32_ENCODING_LDRB_r_A1_post, //!< <a href="../target/aarch32/LDRB_r.html#LDRB_r_A1_post">Post-indexed</a>
  AMED_AARCH32_ENCODING_LDRB_r_A1_pre, //!< <a href="../target/aarch32/LDRB_r.html#LDRB_r_A1_pre">Pre-indexed</a>
  AMED_AARCH32_ENCODING_LDRB_r_T1, //!< <a href="../target/aarch32/LDRB_r.html#LDRB_r_T1">T1</a>
  AMED_AARCH32_ENCODING_LDRB_r_T2, //!< <a href="../target/aarch32/LDRB_r.html#LDRB_r_T2">T2</a>
  AMED_AARCH32_ENCODING_LDRBT_A1, //!< <a href="../target/aarch32/LDRBT.html#LDRBT_A1">A1</a>
  AMED_AARCH32_ENCODING_LDRBT_A2, //!< <a href="../target/aarch32/LDRBT.html#LDRBT_A2">A2</a>
  AMED_AARCH32_ENCODING_LDRBT_T1, //!< <a href="../target/aarch32/LDRBT.html#LDRBT_T1">T1</a>
  AMED_AARCH32_ENCODING_LDRD_i_A1_off, //!< <a href="../target/aarch32/LDRD_i.html#LDRD_i_A1_off">Offset</a>
  AMED_AARCH32_ENCODING_LDRD_i_A1_post, //!< <a href="../target/aarch32/LDRD_i.html#LDRD_i_A1_post">Post-indexed</a>
  AMED_AARCH32_ENCODING_LDRD_i_A1_pre, //!< <a href="../target/aarch32/LDRD_i.html#LDRD_i_A1_pre">Pre-indexed</a>
  AMED_AARCH32_ENCODING_LDRD_i_T1_off, //!< <a href="../target/aarch32/LDRD_i.html#LDRD_i_T1_off">Offset</a>
  AMED_AARCH32_ENCODING_LDRD_i_T1_post, //!< <a href="../target/aarch32/LDRD_i.html#LDRD_i_T1_post">Post-indexed</a>
  AMED_AARCH32_ENCODING_LDRD_i_T1_pre, //!< <a href="../target/aarch32/LDRD_i.html#LDRD_i_T1_pre">Pre-indexed</a>
  AMED_AARCH32_ENCODING_LDRD_l_A1, //!< <a href="../target/aarch32/LDRD_l.html#LDRD_l_A1">A1</a>
  AMED_AARCH32_ENCODING_LDRD_l_T1, //!< <a href="../target/aarch32/LDRD_l.html#LDRD_l_T1">T1</a>
  AMED_AARCH32_ENCODING_LDRD_r_A1_off, //!< <a href="../target/aarch32/LDRD_r.html#LDRD_r_A1_off">Offset</a>
  AMED_AARCH32_ENCODING_LDRD_r_A1_post, //!< <a href="../target/aarch32/LDRD_r.html#LDRD_r_A1_post">Post-indexed</a>
  AMED_AARCH32_ENCODING_LDRD_r_A1_pre, //!< <a href="../target/aarch32/LDRD_r.html#LDRD_r_A1_pre">Pre-indexed</a>
  AMED_AARCH32_ENCODING_LDREX_A1, //!< <a href="../target/aarch32/LDREX.html#LDREX_A1">A1</a>
  AMED_AARCH32_ENCODING_LDREX_T1, //!< <a href="../target/aarch32/LDREX.html#LDREX_T1">T1</a>
  AMED_AARCH32_ENCODING_LDREXB_A1, //!< <a href="../target/aarch32/LDREXB.html#LDREXB_A1">A1</a>
  AMED_AARCH32_ENCODING_LDREXB_T1, //!< <a href="../target/aarch32/LDREXB.html#LDREXB_T1">T1</a>
  AMED_AARCH32_ENCODING_LDREXD_A1, //!< <a href="../target/aarch32/LDREXD.html#LDREXD_A1">A1</a>
  AMED_AARCH32_ENCODING_LDREXD_T1, //!< <a href="../target/aarch32/LDREXD.html#LDREXD_T1">T1</a>
  AMED_AARCH32_ENCODING_LDREXH_A1, //!< <a href="../target/aarch32/LDREXH.html#LDREXH_A1">A1</a>
  AMED_AARCH32_ENCODING_LDREXH_T1, //!< <a href="../target/aarch32/LDREXH.html#LDREXH_T1">T1</a>
  AMED_AARCH32_ENCODING_LDRH_i_A1_off, //!< <a href="../target/aarch32/LDRH_i.html#LDRH_i_A1_off">Offset</a>
  AMED_AARCH32_ENCODING_LDRH_i_A1_post, //!< <a href="../target/aarch32/LDRH_i.html#LDRH_i_A1_post">Post-indexed</a>
  AMED_AARCH32_ENCODING_LDRH_i_A1_pre, //!< <a href="../target/aarch32/LDRH_i.html#LDRH_i_A1_pre">Pre-indexed</a>
  AMED_AARCH32_ENCODING_LDRH_i_T1, //!< <a href="../target/aarch32/LDRH_i.html#LDRH_i_T1">T1</a>
  AMED_AARCH32_ENCODING_LDRH_i_T2, //!< <a href="../target/aarch32/LDRH_i.html#LDRH_i_T2">T2</a>
  AMED_AARCH32_ENCODING_LDRH_i_T3_off, //!< <a href="../target/aarch32/LDRH_i.html#LDRH_i_T3_off">Offset</a>
  AMED_AARCH32_ENCODING_LDRH_i_T3_post, //!< <a href="../target/aarch32/LDRH_i.html#LDRH_i_T3_post">Post-indexed</a>
  AMED_AARCH32_ENCODING_LDRH_i_T3_pre, //!< <a href="../target/aarch32/LDRH_i.html#LDRH_i_T3_pre">Pre-indexed</a>
  AMED_AARCH32_ENCODING_LDRH_l_A1, //!< <a href="../target/aarch32/LDRH_l.html#LDRH_l_A1">A1</a>
  AMED_AARCH32_ENCODING_LDRH_l_T1, //!< <a href="../target/aarch32/LDRH_l.html#LDRH_l_T1">T1</a>
  AMED_AARCH32_ENCODING_LDRH_r_A1_off, //!< <a href="../target/aarch32/LDRH_r.html#LDRH_r_A1_off">Offset</a>
  AMED_AARCH32_ENCODING_LDRH_r_A1_post, //!< <a href="../target/aarch32/LDRH_r.html#LDRH_r_A1_post">Post-indexed</a>
  AMED_AARCH32_ENCODING_LDRH_r_A1_pre, //!< <a href="../target/aarch32/LDRH_r.html#LDRH_r_A1_pre">Pre-indexed</a>
  AMED_AARCH32_ENCODING_LDRH_r_T1, //!< <a href="../target/aarch32/LDRH_r.html#LDRH_r_T1">T1</a>
  AMED_AARCH32_ENCODING_LDRH_r_T2, //!< <a href="../target/aarch32/LDRH_r.html#LDRH_r_T2">T2</a>
  AMED_AARCH32_ENCODING_LDRHT_A1, //!< <a href="../target/aarch32/LDRHT.html#LDRHT_A1">A1</a>
  AMED_AARCH32_ENCODING_LDRHT_A2, //!< <a href="../target/aarch32/LDRHT.html#LDRHT_A2">A2</a>
  AMED_AARCH32_ENCODING_LDRHT_T1, //!< <a href="../target/aarch32/LDRHT.html#LDRHT_T1">T1</a>
  AMED_AARCH32_ENCODING_LDRSB_i_A1_off, //!< <a href="../target/aarch32/LDRSB_i.html#LDRSB_i_A1_off">Offset</a>
  AMED_AARCH32_ENCODING_LDRSB_i_A1_post, //!< <a href="../target/aarch32/LDRSB_i.html#LDRSB_i_A1_post">Post-indexed</a>
  AMED_AARCH32_ENCODING_LDRSB_i_A1_pre, //!< <a href="../target/aarch32/LDRSB_i.html#LDRSB_i_A1_pre">Pre-indexed</a>
  AMED_AARCH32_ENCODING_LDRSB_i_T1, //!< <a href="../target/aarch32/LDRSB_i.html#LDRSB_i_T1">T1</a>
  AMED_AARCH32_ENCODING_LDRSB_i_T2_off, //!< <a href="../target/aarch32/LDRSB_i.html#LDRSB_i_T2_off">Offset</a>
  AMED_AARCH32_ENCODING_LDRSB_i_T2_post, //!< <a href="../target/aarch32/LDRSB_i.html#LDRSB_i_T2_post">Post-indexed</a>
  AMED_AARCH32_ENCODING_LDRSB_i_T2_pre, //!< <a href="../target/aarch32/LDRSB_i.html#LDRSB_i_T2_pre">Pre-indexed</a>
  AMED_AARCH32_ENCODING_LDRSB_l_A1, //!< <a href="../target/aarch32/LDRSB_l.html#LDRSB_l_A1">A1</a>
  AMED_AARCH32_ENCODING_LDRSB_l_T1, //!< <a href="../target/aarch32/LDRSB_l.html#LDRSB_l_T1">T1</a>
  AMED_AARCH32_ENCODING_LDRSB_r_A1_off, //!< <a href="../target/aarch32/LDRSB_r.html#LDRSB_r_A1_off">Offset</a>
  AMED_AARCH32_ENCODING_LDRSB_r_A1_post, //!< <a href="../target/aarch32/LDRSB_r.html#LDRSB_r_A1_post">Post-indexed</a>
  AMED_AARCH32_ENCODING_LDRSB_r_A1_pre, //!< <a href="../target/aarch32/LDRSB_r.html#LDRSB_r_A1_pre">Pre-indexed</a>
  AMED_AARCH32_ENCODING_LDRSB_r_T1, //!< <a href="../target/aarch32/LDRSB_r.html#LDRSB_r_T1">T1</a>
  AMED_AARCH32_ENCODING_LDRSB_r_T2, //!< <a href="../target/aarch32/LDRSB_r.html#LDRSB_r_T2">T2</a>
  AMED_AARCH32_ENCODING_LDRSBT_A1, //!< <a href="../target/aarch32/LDRSBT.html#LDRSBT_A1">A1</a>
  AMED_AARCH32_ENCODING_LDRSBT_A2, //!< <a href="../target/aarch32/LDRSBT.html#LDRSBT_A2">A2</a>
  AMED_AARCH32_ENCODING_LDRSBT_T1, //!< <a href="../target/aarch32/LDRSBT.html#LDRSBT_T1">T1</a>
  AMED_AARCH32_ENCODING_LDRSH_i_A1_off, //!< <a href="../target/aarch32/LDRSH_i.html#LDRSH_i_A1_off">Offset</a>
  AMED_AARCH32_ENCODING_LDRSH_i_A1_post, //!< <a href="../target/aarch32/LDRSH_i.html#LDRSH_i_A1_post">Post-indexed</a>
  AMED_AARCH32_ENCODING_LDRSH_i_A1_pre, //!< <a href="../target/aarch32/LDRSH_i.html#LDRSH_i_A1_pre">Pre-indexed</a>
  AMED_AARCH32_ENCODING_LDRSH_i_T1, //!< <a href="../target/aarch32/LDRSH_i.html#LDRSH_i_T1">T1</a>
  AMED_AARCH32_ENCODING_LDRSH_i_T2_off, //!< <a href="../target/aarch32/LDRSH_i.html#LDRSH_i_T2_off">Offset</a>
  AMED_AARCH32_ENCODING_LDRSH_i_T2_post, //!< <a href="../target/aarch32/LDRSH_i.html#LDRSH_i_T2_post">Post-indexed</a>
  AMED_AARCH32_ENCODING_LDRSH_i_T2_pre, //!< <a href="../target/aarch32/LDRSH_i.html#LDRSH_i_T2_pre">Pre-indexed</a>
  AMED_AARCH32_ENCODING_LDRSH_l_A1, //!< <a href="../target/aarch32/LDRSH_l.html#LDRSH_l_A1">A1</a>
  AMED_AARCH32_ENCODING_LDRSH_l_T1, //!< <a href="../target/aarch32/LDRSH_l.html#LDRSH_l_T1">T1</a>
  AMED_AARCH32_ENCODING_LDRSH_r_A1_off, //!< <a href="../target/aarch32/LDRSH_r.html#LDRSH_r_A1_off">Offset</a>
  AMED_AARCH32_ENCODING_LDRSH_r_A1_post, //!< <a href="../target/aarch32/LDRSH_r.html#LDRSH_r_A1_post">Post-indexed</a>
  AMED_AARCH32_ENCODING_LDRSH_r_A1_pre, //!< <a href="../target/aarch32/LDRSH_r.html#LDRSH_r_A1_pre">Pre-indexed</a>
  AMED_AARCH32_ENCODING_LDRSH_r_T1, //!< <a href="../target/aarch32/LDRSH_r.html#LDRSH_r_T1">T1</a>
  AMED_AARCH32_ENCODING_LDRSH_r_T2, //!< <a href="../target/aarch32/LDRSH_r.html#LDRSH_r_T2">T2</a>
  AMED_AARCH32_ENCODING_LDRSHT_A1, //!< <a href="../target/aarch32/LDRSHT.html#LDRSHT_A1">A1</a>
  AMED_AARCH32_ENCODING_LDRSHT_A2, //!< <a href="../target/aarch32/LDRSHT.html#LDRSHT_A2">A2</a>
  AMED_AARCH32_ENCODING_LDRSHT_T1, //!< <a href="../target/aarch32/LDRSHT.html#LDRSHT_T1">T1</a>
  AMED_AARCH32_ENCODING_LDRT_A1, //!< <a href="../target/aarch32/LDRT.html#LDRT_A1">A1</a>
  AMED_AARCH32_ENCODING_LDRT_A2, //!< <a href="../target/aarch32/LDRT.html#LDRT_A2">A2</a>
  AMED_AARCH32_ENCODING_LDRT_T1, //!< <a href="../target/aarch32/LDRT.html#LDRT_T1">T1</a>
  AMED_AARCH32_ENCODING_MCR_A1, //!< <a href="../target/aarch32/MCR.html#MCR_A1">A1</a>
  AMED_AARCH32_ENCODING_MCR_T1, //!< <a href="../target/aarch32/MCR.html#MCR_T1">T1</a>
  AMED_AARCH32_ENCODING_MCRR_A1, //!< <a href="../target/aarch32/MCRR.html#MCRR_A1">A1</a>
  AMED_AARCH32_ENCODING_MCRR_T1, //!< <a href="../target/aarch32/MCRR.html#MCRR_T1">T1</a>
  AMED_AARCH32_ENCODING_MLAS_A1, //!< <a href="../target/aarch32/MLA.html#MLAS_A1">Flag setting</a>
  AMED_AARCH32_ENCODING_MLA_A1, //!< <a href="../target/aarch32/MLA.html#MLA_A1">Not flag setting</a>
  AMED_AARCH32_ENCODING_MLA_T1, //!< <a href="../target/aarch32/MLA.html#MLA_T1">T1</a>
  AMED_AARCH32_ENCODING_MLS_A1, //!< <a href="../target/aarch32/MLS.html#MLS_A1">A1</a>
  AMED_AARCH32_ENCODING_MLS_T1, //!< <a href="../target/aarch32/MLS.html#MLS_T1">T1</a>
  AMED_AARCH32_ENCODING_MOV_i_A1, //!< <a href="../target/aarch32/MOV_i.html#MOV_i_A1">MOV</a>
  AMED_AARCH32_ENCODING_MOVS_i_A1, //!< <a href="../target/aarch32/MOV_i.html#MOVS_i_A1">MOVS</a>
  AMED_AARCH32_ENCODING_MOV_i_A2, //!< <a href="../target/aarch32/MOV_i.html#MOV_i_A2">A2</a>
  AMED_AARCH32_ENCODING_MOV_i_T1, //!< <a href="../target/aarch32/MOV_i.html#MOV_i_T1">T1</a>
  AMED_AARCH32_ENCODING_MOV_i_T2, //!< <a href="../target/aarch32/MOV_i.html#MOV_i_T2">MOV</a>
  AMED_AARCH32_ENCODING_MOVS_i_T2, //!< <a href="../target/aarch32/MOV_i.html#MOVS_i_T2">MOVS</a>
  AMED_AARCH32_ENCODING_MOV_i_T3, //!< <a href="../target/aarch32/MOV_i.html#MOV_i_T3">T3</a>
  AMED_AARCH32_ENCODING_MOV_r_A1_RRX, //!< <a href="../target/aarch32/MOV_r.html#MOV_r_A1_RRX">MOV, rotate right with extend</a>
  AMED_AARCH32_ENCODING_MOV_r_A1, //!< <a href="../target/aarch32/MOV_r.html#MOV_r_A1">MOV, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_MOVS_r_A1_RRX, //!< <a href="../target/aarch32/MOV_r.html#MOVS_r_A1_RRX">MOVS, rotate right with extend</a>
  AMED_AARCH32_ENCODING_MOVS_r_A1, //!< <a href="../target/aarch32/MOV_r.html#MOVS_r_A1">MOVS, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_MOV_r_T1, //!< <a href="../target/aarch32/MOV_r.html#MOV_r_T1">T1</a>
  AMED_AARCH32_ENCODING_MOV_r_T2, //!< <a href="../target/aarch32/MOV_r.html#MOV_r_T2">T2</a>
  AMED_AARCH32_ENCODING_MOV_r_T3_RRX, //!< <a href="../target/aarch32/MOV_r.html#MOV_r_T3_RRX">MOV, rotate right with extend</a>
  AMED_AARCH32_ENCODING_MOV_r_T3, //!< <a href="../target/aarch32/MOV_r.html#MOV_r_T3">MOV, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_MOVS_r_T3_RRX, //!< <a href="../target/aarch32/MOV_r.html#MOVS_r_T3_RRX">MOVS, rotate right with extend</a>
  AMED_AARCH32_ENCODING_MOVS_r_T3, //!< <a href="../target/aarch32/MOV_r.html#MOVS_r_T3">MOVS, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_MOVS_rr_A1, //!< <a href="../target/aarch32/MOV_rr.html#MOVS_rr_A1">Flag setting</a>
  AMED_AARCH32_ENCODING_MOV_rr_A1, //!< <a href="../target/aarch32/MOV_rr.html#MOV_rr_A1">Not flag setting</a>
  AMED_AARCH32_ENCODING_MOV_rr_T1_ASR, //!< <a href="../target/aarch32/MOV_rr.html#MOV_rr_T1_ASR">Arithmetic shift right</a>
  AMED_AARCH32_ENCODING_MOV_rr_T1_LSL, //!< <a href="../target/aarch32/MOV_rr.html#MOV_rr_T1_LSL">Logical shift left</a>
  AMED_AARCH32_ENCODING_MOV_rr_T1_LSR, //!< <a href="../target/aarch32/MOV_rr.html#MOV_rr_T1_LSR">Logical shift right</a>
  AMED_AARCH32_ENCODING_MOV_rr_T1_ROR, //!< <a href="../target/aarch32/MOV_rr.html#MOV_rr_T1_ROR">Rotate right</a>
  AMED_AARCH32_ENCODING_MOVS_rr_T2, //!< <a href="../target/aarch32/MOV_rr.html#MOVS_rr_T2">Flag setting</a>
  AMED_AARCH32_ENCODING_MOV_rr_T2, //!< <a href="../target/aarch32/MOV_rr.html#MOV_rr_T2">Not flag setting</a>
  AMED_AARCH32_ENCODING_MOVT_A1, //!< <a href="../target/aarch32/MOVT.html#MOVT_A1">A1</a>
  AMED_AARCH32_ENCODING_MOVT_T1, //!< <a href="../target/aarch32/MOVT.html#MOVT_T1">T1</a>
  AMED_AARCH32_ENCODING_MRC_A1, //!< <a href="../target/aarch32/MRC.html#MRC_A1">A1</a>
  AMED_AARCH32_ENCODING_MRC_T1, //!< <a href="../target/aarch32/MRC.html#MRC_T1">T1</a>
  AMED_AARCH32_ENCODING_MRRC_A1, //!< <a href="../target/aarch32/MRRC.html#MRRC_A1">A1</a>
  AMED_AARCH32_ENCODING_MRRC_T1, //!< <a href="../target/aarch32/MRRC.html#MRRC_T1">T1</a>
  AMED_AARCH32_ENCODING_MRS_A1_AS, //!< <a href="../target/aarch32/MRS.html#MRS_A1_AS">A1</a>
  AMED_AARCH32_ENCODING_MRS_T1_AS, //!< <a href="../target/aarch32/MRS.html#MRS_T1_AS">T1</a>
  AMED_AARCH32_ENCODING_MRS_br_A1_AS, //!< <a href="../target/aarch32/MRS_br.html#MRS_br_A1_AS">A1</a>
  AMED_AARCH32_ENCODING_MRS_br_T1_AS, //!< <a href="../target/aarch32/MRS_br.html#MRS_br_T1_AS">T1</a>
  AMED_AARCH32_ENCODING_MSR_br_A1_AS, //!< <a href="../target/aarch32/MSR_br.html#MSR_br_A1_AS">A1</a>
  AMED_AARCH32_ENCODING_MSR_br_T1_AS, //!< <a href="../target/aarch32/MSR_br.html#MSR_br_T1_AS">T1</a>
  AMED_AARCH32_ENCODING_MSR_i_A1_AS, //!< <a href="../target/aarch32/MSR_i.html#MSR_i_A1_AS">A1</a>
  AMED_AARCH32_ENCODING_MSR_r_A1_AS, //!< <a href="../target/aarch32/MSR_r.html#MSR_r_A1_AS">A1</a>
  AMED_AARCH32_ENCODING_MSR_r_T1_AS, //!< <a href="../target/aarch32/MSR_r.html#MSR_r_T1_AS">T1</a>
  AMED_AARCH32_ENCODING_MULS_A1, //!< <a href="../target/aarch32/MUL.html#MULS_A1">Flag setting</a>
  AMED_AARCH32_ENCODING_MUL_A1, //!< <a href="../target/aarch32/MUL.html#MUL_A1">Not flag setting</a>
  AMED_AARCH32_ENCODING_MUL_T1, //!< <a href="../target/aarch32/MUL.html#MUL_T1">T1</a>
  AMED_AARCH32_ENCODING_MUL_T2, //!< <a href="../target/aarch32/MUL.html#MUL_T2">T2</a>
  AMED_AARCH32_ENCODING_MVN_i_A1, //!< <a href="../target/aarch32/MVN_i.html#MVN_i_A1">MVN</a>
  AMED_AARCH32_ENCODING_MVNS_i_A1, //!< <a href="../target/aarch32/MVN_i.html#MVNS_i_A1">MVNS</a>
  AMED_AARCH32_ENCODING_MVN_i_T1, //!< <a href="../target/aarch32/MVN_i.html#MVN_i_T1">MVN</a>
  AMED_AARCH32_ENCODING_MVNS_i_T1, //!< <a href="../target/aarch32/MVN_i.html#MVNS_i_T1">MVNS</a>
  AMED_AARCH32_ENCODING_MVN_r_A1_RRX, //!< <a href="../target/aarch32/MVN_r.html#MVN_r_A1_RRX">MVN, rotate right with extend</a>
  AMED_AARCH32_ENCODING_MVN_r_A1, //!< <a href="../target/aarch32/MVN_r.html#MVN_r_A1">MVN, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_MVNS_r_A1_RRX, //!< <a href="../target/aarch32/MVN_r.html#MVNS_r_A1_RRX">MVNS, rotate right with extend</a>
  AMED_AARCH32_ENCODING_MVNS_r_A1, //!< <a href="../target/aarch32/MVN_r.html#MVNS_r_A1">MVNS, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_MVN_r_T1, //!< <a href="../target/aarch32/MVN_r.html#MVN_r_T1">T1</a>
  AMED_AARCH32_ENCODING_MVN_r_T2_RRX, //!< <a href="../target/aarch32/MVN_r.html#MVN_r_T2_RRX">MVN, rotate right with extend</a>
  AMED_AARCH32_ENCODING_MVN_r_T2, //!< <a href="../target/aarch32/MVN_r.html#MVN_r_T2">MVN, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_MVNS_r_T2_RRX, //!< <a href="../target/aarch32/MVN_r.html#MVNS_r_T2_RRX">MVNS, rotate right with extend</a>
  AMED_AARCH32_ENCODING_MVNS_r_T2, //!< <a href="../target/aarch32/MVN_r.html#MVNS_r_T2">MVNS, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_MVNS_rr_A1, //!< <a href="../target/aarch32/MVN_rr.html#MVNS_rr_A1">Flag setting</a>
  AMED_AARCH32_ENCODING_MVN_rr_A1, //!< <a href="../target/aarch32/MVN_rr.html#MVN_rr_A1">Not flag setting</a>
  AMED_AARCH32_ENCODING_NOP_A1, //!< <a href="../target/aarch32/NOP.html#NOP_A1">A1</a>
  AMED_AARCH32_ENCODING_NOP_T1, //!< <a href="../target/aarch32/NOP.html#NOP_T1">T1</a>
  AMED_AARCH32_ENCODING_NOP_T2, //!< <a href="../target/aarch32/NOP.html#NOP_T2">T2</a>
  AMED_AARCH32_ENCODING_ORNS_i_T1, //!< <a href="../target/aarch32/ORN_i.html#ORNS_i_T1">Flag setting</a>
  AMED_AARCH32_ENCODING_ORN_i_T1, //!< <a href="../target/aarch32/ORN_i.html#ORN_i_T1">Not flag setting</a>
  AMED_AARCH32_ENCODING_ORN_r_T1_RRX, //!< <a href="../target/aarch32/ORN_r.html#ORN_r_T1_RRX">ORN, rotate right with extend</a>
  AMED_AARCH32_ENCODING_ORN_r_T1, //!< <a href="../target/aarch32/ORN_r.html#ORN_r_T1">ORN, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_ORNS_r_T1_RRX, //!< <a href="../target/aarch32/ORN_r.html#ORNS_r_T1_RRX">ORNS, rotate right with extend</a>
  AMED_AARCH32_ENCODING_ORNS_r_T1, //!< <a href="../target/aarch32/ORN_r.html#ORNS_r_T1">ORNS, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_ORR_i_A1, //!< <a href="../target/aarch32/ORR_i.html#ORR_i_A1">ORR</a>
  AMED_AARCH32_ENCODING_ORRS_i_A1, //!< <a href="../target/aarch32/ORR_i.html#ORRS_i_A1">ORRS</a>
  AMED_AARCH32_ENCODING_ORR_i_T1, //!< <a href="../target/aarch32/ORR_i.html#ORR_i_T1">ORR</a>
  AMED_AARCH32_ENCODING_ORRS_i_T1, //!< <a href="../target/aarch32/ORR_i.html#ORRS_i_T1">ORRS</a>
  AMED_AARCH32_ENCODING_ORR_r_A1_RRX, //!< <a href="../target/aarch32/ORR_r.html#ORR_r_A1_RRX">ORR, rotate right with extend</a>
  AMED_AARCH32_ENCODING_ORR_r_A1, //!< <a href="../target/aarch32/ORR_r.html#ORR_r_A1">ORR, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_ORRS_r_A1_RRX, //!< <a href="../target/aarch32/ORR_r.html#ORRS_r_A1_RRX">ORRS, rotate right with extend</a>
  AMED_AARCH32_ENCODING_ORRS_r_A1, //!< <a href="../target/aarch32/ORR_r.html#ORRS_r_A1">ORRS, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_ORR_r_T1, //!< <a href="../target/aarch32/ORR_r.html#ORR_r_T1">T1</a>
  AMED_AARCH32_ENCODING_ORR_r_T2_RRX, //!< <a href="../target/aarch32/ORR_r.html#ORR_r_T2_RRX">ORR, rotate right with extend</a>
  AMED_AARCH32_ENCODING_ORR_r_T2, //!< <a href="../target/aarch32/ORR_r.html#ORR_r_T2">ORR, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_ORRS_r_T2_RRX, //!< <a href="../target/aarch32/ORR_r.html#ORRS_r_T2_RRX">ORRS, rotate right with extend</a>
  AMED_AARCH32_ENCODING_ORRS_r_T2, //!< <a href="../target/aarch32/ORR_r.html#ORRS_r_T2">ORRS, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_ORRS_rr_A1, //!< <a href="../target/aarch32/ORR_rr.html#ORRS_rr_A1">Flag setting</a>
  AMED_AARCH32_ENCODING_ORR_rr_A1, //!< <a href="../target/aarch32/ORR_rr.html#ORR_rr_A1">Not flag setting</a>
  AMED_AARCH32_ENCODING_PKHBT_A1, //!< <a href="../target/aarch32/PKH.html#PKHBT_A1">PKHBT</a>
  AMED_AARCH32_ENCODING_PKHTB_A1, //!< <a href="../target/aarch32/PKH.html#PKHTB_A1">PKHTB</a>
  AMED_AARCH32_ENCODING_PKHBT_T1, //!< <a href="../target/aarch32/PKH.html#PKHBT_T1">PKHBT</a>
  AMED_AARCH32_ENCODING_PKHTB_T1, //!< <a href="../target/aarch32/PKH.html#PKHTB_T1">PKHTB</a>
  AMED_AARCH32_ENCODING_PLD_i_A1, //!< <a href="../target/aarch32/PLD_i.html#PLD_i_A1">Preload read</a>
  AMED_AARCH32_ENCODING_PLDW_i_A1, //!< <a href="../target/aarch32/PLD_i.html#PLDW_i_A1">Preload write</a>
  AMED_AARCH32_ENCODING_PLD_i_T1, //!< <a href="../target/aarch32/PLD_i.html#PLD_i_T1">Preload read</a>
  AMED_AARCH32_ENCODING_PLDW_i_T1, //!< <a href="../target/aarch32/PLD_i.html#PLDW_i_T1">Preload write</a>
  AMED_AARCH32_ENCODING_PLD_i_T2, //!< <a href="../target/aarch32/PLD_i.html#PLD_i_T2">Preload read</a>
  AMED_AARCH32_ENCODING_PLDW_i_T2, //!< <a href="../target/aarch32/PLD_i.html#PLDW_i_T2">Preload write</a>
  AMED_AARCH32_ENCODING_PLD_l_A1, //!< <a href="../target/aarch32/PLD_l.html#PLD_l_A1">A1</a>
  AMED_AARCH32_ENCODING_PLD_l_T1, //!< <a href="../target/aarch32/PLD_l.html#PLD_l_T1">T1</a>
  AMED_AARCH32_ENCODING_PLD_r_A1, //!< <a href="../target/aarch32/PLD_r.html#PLD_r_A1">Preload read, optional shift or rotate</a>
  AMED_AARCH32_ENCODING_PLD_r_A1_RRX, //!< <a href="../target/aarch32/PLD_r.html#PLD_r_A1_RRX">Preload read, rotate right with extend</a>
  AMED_AARCH32_ENCODING_PLDW_r_A1, //!< <a href="../target/aarch32/PLD_r.html#PLDW_r_A1">Preload write, optional shift or rotate</a>
  AMED_AARCH32_ENCODING_PLDW_r_A1_RRX, //!< <a href="../target/aarch32/PLD_r.html#PLDW_r_A1_RRX">Preload write, rotate right with extend</a>
  AMED_AARCH32_ENCODING_PLD_r_T1, //!< <a href="../target/aarch32/PLD_r.html#PLD_r_T1">Preload read</a>
  AMED_AARCH32_ENCODING_PLDW_r_T1, //!< <a href="../target/aarch32/PLD_r.html#PLDW_r_T1">Preload write</a>
  AMED_AARCH32_ENCODING_PLI_i_A1, //!< <a href="../target/aarch32/PLI_i.html#PLI_i_A1">A1</a>
  AMED_AARCH32_ENCODING_PLI_i_T1, //!< <a href="../target/aarch32/PLI_i.html#PLI_i_T1">T1</a>
  AMED_AARCH32_ENCODING_PLI_i_T2, //!< <a href="../target/aarch32/PLI_i.html#PLI_i_T2">T2</a>
  AMED_AARCH32_ENCODING_PLI_i_T3, //!< <a href="../target/aarch32/PLI_i.html#PLI_i_T3">T3</a>
  AMED_AARCH32_ENCODING_PLI_r_A1_RRX, //!< <a href="../target/aarch32/PLI_r.html#PLI_r_A1_RRX">Rotate right with extend</a>
  AMED_AARCH32_ENCODING_PLI_r_A1, //!< <a href="../target/aarch32/PLI_r.html#PLI_r_A1">Shift or rotate by value</a>
  AMED_AARCH32_ENCODING_PLI_r_T1, //!< <a href="../target/aarch32/PLI_r.html#PLI_r_T1">T1</a>
  AMED_AARCH32_ENCODING_POP_T1, //!< <a href="../target/aarch32/POP.html#POP_T1">T1</a>
  AMED_AARCH32_ENCODING_PSSBB_A1, //!< <a href="../target/aarch32/PSSBB.html#PSSBB_A1">A1</a>
  AMED_AARCH32_ENCODING_PSSBB_T1, //!< <a href="../target/aarch32/PSSBB.html#PSSBB_T1">T1</a>
  AMED_AARCH32_ENCODING_PUSH_T1, //!< <a href="../target/aarch32/PUSH.html#PUSH_T1">T1</a>
  AMED_AARCH32_ENCODING_QADD_A1, //!< <a href="../target/aarch32/QADD.html#QADD_A1">A1</a>
  AMED_AARCH32_ENCODING_QADD_T1, //!< <a href="../target/aarch32/QADD.html#QADD_T1">T1</a>
  AMED_AARCH32_ENCODING_QADD16_A1, //!< <a href="../target/aarch32/QADD16.html#QADD16_A1">A1</a>
  AMED_AARCH32_ENCODING_QADD16_T1, //!< <a href="../target/aarch32/QADD16.html#QADD16_T1">T1</a>
  AMED_AARCH32_ENCODING_QADD8_A1, //!< <a href="../target/aarch32/QADD8.html#QADD8_A1">A1</a>
  AMED_AARCH32_ENCODING_QADD8_T1, //!< <a href="../target/aarch32/QADD8.html#QADD8_T1">T1</a>
  AMED_AARCH32_ENCODING_QASX_A1, //!< <a href="../target/aarch32/QASX.html#QASX_A1">A1</a>
  AMED_AARCH32_ENCODING_QASX_T1, //!< <a href="../target/aarch32/QASX.html#QASX_T1">T1</a>
  AMED_AARCH32_ENCODING_QDADD_A1, //!< <a href="../target/aarch32/QDADD.html#QDADD_A1">A1</a>
  AMED_AARCH32_ENCODING_QDADD_T1, //!< <a href="../target/aarch32/QDADD.html#QDADD_T1">T1</a>
  AMED_AARCH32_ENCODING_QDSUB_A1, //!< <a href="../target/aarch32/QDSUB.html#QDSUB_A1">A1</a>
  AMED_AARCH32_ENCODING_QDSUB_T1, //!< <a href="../target/aarch32/QDSUB.html#QDSUB_T1">T1</a>
  AMED_AARCH32_ENCODING_QSAX_A1, //!< <a href="../target/aarch32/QSAX.html#QSAX_A1">A1</a>
  AMED_AARCH32_ENCODING_QSAX_T1, //!< <a href="../target/aarch32/QSAX.html#QSAX_T1">T1</a>
  AMED_AARCH32_ENCODING_QSUB_A1, //!< <a href="../target/aarch32/QSUB.html#QSUB_A1">A1</a>
  AMED_AARCH32_ENCODING_QSUB_T1, //!< <a href="../target/aarch32/QSUB.html#QSUB_T1">T1</a>
  AMED_AARCH32_ENCODING_QSUB16_A1, //!< <a href="../target/aarch32/QSUB16.html#QSUB16_A1">A1</a>
  AMED_AARCH32_ENCODING_QSUB16_T1, //!< <a href="../target/aarch32/QSUB16.html#QSUB16_T1">T1</a>
  AMED_AARCH32_ENCODING_QSUB8_A1, //!< <a href="../target/aarch32/QSUB8.html#QSUB8_A1">A1</a>
  AMED_AARCH32_ENCODING_QSUB8_T1, //!< <a href="../target/aarch32/QSUB8.html#QSUB8_T1">T1</a>
  AMED_AARCH32_ENCODING_RBIT_A1, //!< <a href="../target/aarch32/RBIT.html#RBIT_A1">A1</a>
  AMED_AARCH32_ENCODING_RBIT_T1, //!< <a href="../target/aarch32/RBIT.html#RBIT_T1">T1</a>
  AMED_AARCH32_ENCODING_REV_A1, //!< <a href="../target/aarch32/REV.html#REV_A1">A1</a>
  AMED_AARCH32_ENCODING_REV_T1, //!< <a href="../target/aarch32/REV.html#REV_T1">T1</a>
  AMED_AARCH32_ENCODING_REV_T2, //!< <a href="../target/aarch32/REV.html#REV_T2">T2</a>
  AMED_AARCH32_ENCODING_REV16_A1, //!< <a href="../target/aarch32/REV16.html#REV16_A1">A1</a>
  AMED_AARCH32_ENCODING_REV16_T1, //!< <a href="../target/aarch32/REV16.html#REV16_T1">T1</a>
  AMED_AARCH32_ENCODING_REV16_T2, //!< <a href="../target/aarch32/REV16.html#REV16_T2">T2</a>
  AMED_AARCH32_ENCODING_REVSH_A1, //!< <a href="../target/aarch32/REVSH.html#REVSH_A1">A1</a>
  AMED_AARCH32_ENCODING_REVSH_T1, //!< <a href="../target/aarch32/REVSH.html#REVSH_T1">T1</a>
  AMED_AARCH32_ENCODING_REVSH_T2, //!< <a href="../target/aarch32/REVSH.html#REVSH_T2">T2</a>
  AMED_AARCH32_ENCODING_RFEDA_A1_AS, //!< <a href="../target/aarch32/RFE.html#RFEDA_A1_AS">Decrement After</a>
  AMED_AARCH32_ENCODING_RFEDB_A1_AS, //!< <a href="../target/aarch32/RFE.html#RFEDB_A1_AS">Decrement Before</a>
  AMED_AARCH32_ENCODING_RFEIA_A1_AS, //!< <a href="../target/aarch32/RFE.html#RFEIA_A1_AS">Increment After</a>
  AMED_AARCH32_ENCODING_RFEIB_A1_AS, //!< <a href="../target/aarch32/RFE.html#RFEIB_A1_AS">Increment Before</a>
  AMED_AARCH32_ENCODING_RFE_T1_AS, //!< <a href="../target/aarch32/RFE.html#RFE_T1_AS">T1</a>
  AMED_AARCH32_ENCODING_RFE_T2_AS, //!< <a href="../target/aarch32/RFE.html#RFE_T2_AS">T2</a>
  AMED_AARCH32_ENCODING_RSB_i_A1, //!< <a href="../target/aarch32/RSB_i.html#RSB_i_A1">RSB</a>
  AMED_AARCH32_ENCODING_RSBS_i_A1, //!< <a href="../target/aarch32/RSB_i.html#RSBS_i_A1">RSBS</a>
  AMED_AARCH32_ENCODING_RSB_i_T1, //!< <a href="../target/aarch32/RSB_i.html#RSB_i_T1">T1</a>
  AMED_AARCH32_ENCODING_RSB_i_T2, //!< <a href="../target/aarch32/RSB_i.html#RSB_i_T2">RSB</a>
  AMED_AARCH32_ENCODING_RSBS_i_T2, //!< <a href="../target/aarch32/RSB_i.html#RSBS_i_T2">RSBS</a>
  AMED_AARCH32_ENCODING_RSB_r_A1_RRX, //!< <a href="../target/aarch32/RSB_r.html#RSB_r_A1_RRX">RSB, rotate right with extend</a>
  AMED_AARCH32_ENCODING_RSB_r_A1, //!< <a href="../target/aarch32/RSB_r.html#RSB_r_A1">RSB, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_RSBS_r_A1_RRX, //!< <a href="../target/aarch32/RSB_r.html#RSBS_r_A1_RRX">RSBS, rotate right with extend</a>
  AMED_AARCH32_ENCODING_RSBS_r_A1, //!< <a href="../target/aarch32/RSB_r.html#RSBS_r_A1">RSBS, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_RSB_r_T1_RRX, //!< <a href="../target/aarch32/RSB_r.html#RSB_r_T1_RRX">RSB, rotate right with extend</a>
  AMED_AARCH32_ENCODING_RSB_r_T1, //!< <a href="../target/aarch32/RSB_r.html#RSB_r_T1">RSB, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_RSBS_r_T1_RRX, //!< <a href="../target/aarch32/RSB_r.html#RSBS_r_T1_RRX">RSBS, rotate right with extend</a>
  AMED_AARCH32_ENCODING_RSBS_r_T1, //!< <a href="../target/aarch32/RSB_r.html#RSBS_r_T1">RSBS, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_RSBS_rr_A1, //!< <a href="../target/aarch32/RSB_rr.html#RSBS_rr_A1">Flag setting</a>
  AMED_AARCH32_ENCODING_RSB_rr_A1, //!< <a href="../target/aarch32/RSB_rr.html#RSB_rr_A1">Not flag setting</a>
  AMED_AARCH32_ENCODING_RSC_i_A1, //!< <a href="../target/aarch32/RSC_i.html#RSC_i_A1">RSC</a>
  AMED_AARCH32_ENCODING_RSCS_i_A1, //!< <a href="../target/aarch32/RSC_i.html#RSCS_i_A1">RSCS</a>
  AMED_AARCH32_ENCODING_RSC_r_A1_RRX, //!< <a href="../target/aarch32/RSC_r.html#RSC_r_A1_RRX">RSC, rotate right with extend</a>
  AMED_AARCH32_ENCODING_RSC_r_A1, //!< <a href="../target/aarch32/RSC_r.html#RSC_r_A1">RSC, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_RSCS_r_A1_RRX, //!< <a href="../target/aarch32/RSC_r.html#RSCS_r_A1_RRX">RSCS, rotate right with extend</a>
  AMED_AARCH32_ENCODING_RSCS_r_A1, //!< <a href="../target/aarch32/RSC_r.html#RSCS_r_A1">RSCS, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_RSCS_rr_A1, //!< <a href="../target/aarch32/RSC_rr.html#RSCS_rr_A1">Flag setting</a>
  AMED_AARCH32_ENCODING_RSC_rr_A1, //!< <a href="../target/aarch32/RSC_rr.html#RSC_rr_A1">Not flag setting</a>
  AMED_AARCH32_ENCODING_SADD16_A1, //!< <a href="../target/aarch32/SADD16.html#SADD16_A1">A1</a>
  AMED_AARCH32_ENCODING_SADD16_T1, //!< <a href="../target/aarch32/SADD16.html#SADD16_T1">T1</a>
  AMED_AARCH32_ENCODING_SADD8_A1, //!< <a href="../target/aarch32/SADD8.html#SADD8_A1">A1</a>
  AMED_AARCH32_ENCODING_SADD8_T1, //!< <a href="../target/aarch32/SADD8.html#SADD8_T1">T1</a>
  AMED_AARCH32_ENCODING_SASX_A1, //!< <a href="../target/aarch32/SASX.html#SASX_A1">A1</a>
  AMED_AARCH32_ENCODING_SASX_T1, //!< <a href="../target/aarch32/SASX.html#SASX_T1">T1</a>
  AMED_AARCH32_ENCODING_SB_A1, //!< <a href="../target/aarch32/SB.html#SB_A1">A1</a>
  AMED_AARCH32_ENCODING_SB_T1, //!< <a href="../target/aarch32/SB.html#SB_T1">T1</a>
  AMED_AARCH32_ENCODING_SBC_i_A1, //!< <a href="../target/aarch32/SBC_i.html#SBC_i_A1">SBC</a>
  AMED_AARCH32_ENCODING_SBCS_i_A1, //!< <a href="../target/aarch32/SBC_i.html#SBCS_i_A1">SBCS</a>
  AMED_AARCH32_ENCODING_SBC_i_T1, //!< <a href="../target/aarch32/SBC_i.html#SBC_i_T1">SBC</a>
  AMED_AARCH32_ENCODING_SBCS_i_T1, //!< <a href="../target/aarch32/SBC_i.html#SBCS_i_T1">SBCS</a>
  AMED_AARCH32_ENCODING_SBC_r_A1_RRX, //!< <a href="../target/aarch32/SBC_r.html#SBC_r_A1_RRX">SBC, rotate right with extend</a>
  AMED_AARCH32_ENCODING_SBC_r_A1, //!< <a href="../target/aarch32/SBC_r.html#SBC_r_A1">SBC, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_SBCS_r_A1_RRX, //!< <a href="../target/aarch32/SBC_r.html#SBCS_r_A1_RRX">SBCS, rotate right with extend</a>
  AMED_AARCH32_ENCODING_SBCS_r_A1, //!< <a href="../target/aarch32/SBC_r.html#SBCS_r_A1">SBCS, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_SBC_r_T1, //!< <a href="../target/aarch32/SBC_r.html#SBC_r_T1">T1</a>
  AMED_AARCH32_ENCODING_SBC_r_T2_RRX, //!< <a href="../target/aarch32/SBC_r.html#SBC_r_T2_RRX">SBC, rotate right with extend</a>
  AMED_AARCH32_ENCODING_SBC_r_T2, //!< <a href="../target/aarch32/SBC_r.html#SBC_r_T2">SBC, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_SBCS_r_T2_RRX, //!< <a href="../target/aarch32/SBC_r.html#SBCS_r_T2_RRX">SBCS, rotate right with extend</a>
  AMED_AARCH32_ENCODING_SBCS_r_T2, //!< <a href="../target/aarch32/SBC_r.html#SBCS_r_T2">SBCS, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_SBCS_rr_A1, //!< <a href="../target/aarch32/SBC_rr.html#SBCS_rr_A1">Flag setting</a>
  AMED_AARCH32_ENCODING_SBC_rr_A1, //!< <a href="../target/aarch32/SBC_rr.html#SBC_rr_A1">Not flag setting</a>
  AMED_AARCH32_ENCODING_SBFX_A1, //!< <a href="../target/aarch32/SBFX.html#SBFX_A1">A1</a>
  AMED_AARCH32_ENCODING_SBFX_T1, //!< <a href="../target/aarch32/SBFX.html#SBFX_T1">T1</a>
  AMED_AARCH32_ENCODING_SDIV_A1, //!< <a href="../target/aarch32/SDIV.html#SDIV_A1">A1</a>
  AMED_AARCH32_ENCODING_SDIV_T1, //!< <a href="../target/aarch32/SDIV.html#SDIV_T1">T1</a>
  AMED_AARCH32_ENCODING_SEL_A1, //!< <a href="../target/aarch32/SEL.html#SEL_A1">A1</a>
  AMED_AARCH32_ENCODING_SEL_T1, //!< <a href="../target/aarch32/SEL.html#SEL_T1">T1</a>
  AMED_AARCH32_ENCODING_SETEND_A1, //!< <a href="../target/aarch32/SETEND.html#SETEND_A1">A1</a>
  AMED_AARCH32_ENCODING_SETEND_T1, //!< <a href="../target/aarch32/SETEND.html#SETEND_T1">T1</a>
  AMED_AARCH32_ENCODING_SETPAN_A1, //!< <a href="../target/aarch32/SETPAN.html#SETPAN_A1">A1</a>
  AMED_AARCH32_ENCODING_SETPAN_T1, //!< <a href="../target/aarch32/SETPAN.html#SETPAN_T1">T1</a>
  AMED_AARCH32_ENCODING_SEV_A1, //!< <a href="../target/aarch32/SEV.html#SEV_A1">A1</a>
  AMED_AARCH32_ENCODING_SEV_T1, //!< <a href="../target/aarch32/SEV.html#SEV_T1">T1</a>
  AMED_AARCH32_ENCODING_SEV_T2, //!< <a href="../target/aarch32/SEV.html#SEV_T2">T2</a>
  AMED_AARCH32_ENCODING_SEVL_A1, //!< <a href="../target/aarch32/SEVL.html#SEVL_A1">A1</a>
  AMED_AARCH32_ENCODING_SEVL_T1, //!< <a href="../target/aarch32/SEVL.html#SEVL_T1">T1</a>
  AMED_AARCH32_ENCODING_SEVL_T2, //!< <a href="../target/aarch32/SEVL.html#SEVL_T2">T2</a>
  AMED_AARCH32_ENCODING_SHADD16_A1, //!< <a href="../target/aarch32/SHADD16.html#SHADD16_A1">A1</a>
  AMED_AARCH32_ENCODING_SHADD16_T1, //!< <a href="../target/aarch32/SHADD16.html#SHADD16_T1">T1</a>
  AMED_AARCH32_ENCODING_SHADD8_A1, //!< <a href="../target/aarch32/SHADD8.html#SHADD8_A1">A1</a>
  AMED_AARCH32_ENCODING_SHADD8_T1, //!< <a href="../target/aarch32/SHADD8.html#SHADD8_T1">T1</a>
  AMED_AARCH32_ENCODING_SHASX_A1, //!< <a href="../target/aarch32/SHASX.html#SHASX_A1">A1</a>
  AMED_AARCH32_ENCODING_SHASX_T1, //!< <a href="../target/aarch32/SHASX.html#SHASX_T1">T1</a>
  AMED_AARCH32_ENCODING_SHSAX_A1, //!< <a href="../target/aarch32/SHSAX.html#SHSAX_A1">A1</a>
  AMED_AARCH32_ENCODING_SHSAX_T1, //!< <a href="../target/aarch32/SHSAX.html#SHSAX_T1">T1</a>
  AMED_AARCH32_ENCODING_SHSUB16_A1, //!< <a href="../target/aarch32/SHSUB16.html#SHSUB16_A1">A1</a>
  AMED_AARCH32_ENCODING_SHSUB16_T1, //!< <a href="../target/aarch32/SHSUB16.html#SHSUB16_T1">T1</a>
  AMED_AARCH32_ENCODING_SHSUB8_A1, //!< <a href="../target/aarch32/SHSUB8.html#SHSUB8_A1">A1</a>
  AMED_AARCH32_ENCODING_SHSUB8_T1, //!< <a href="../target/aarch32/SHSUB8.html#SHSUB8_T1">T1</a>
  AMED_AARCH32_ENCODING_SMC_A1_AS, //!< <a href="../target/aarch32/SMC.html#SMC_A1_AS">A1</a>
  AMED_AARCH32_ENCODING_SMC_T1_AS, //!< <a href="../target/aarch32/SMC.html#SMC_T1_AS">T1</a>
  AMED_AARCH32_ENCODING_SMLABB_A1, //!< <a href="../target/aarch32/SMLABB.html#SMLABB_A1">SMLABB</a>
  AMED_AARCH32_ENCODING_SMLABT_A1, //!< <a href="../target/aarch32/SMLABB.html#SMLABT_A1">SMLABT</a>
  AMED_AARCH32_ENCODING_SMLATB_A1, //!< <a href="../target/aarch32/SMLABB.html#SMLATB_A1">SMLATB</a>
  AMED_AARCH32_ENCODING_SMLATT_A1, //!< <a href="../target/aarch32/SMLABB.html#SMLATT_A1">SMLATT</a>
  AMED_AARCH32_ENCODING_SMLABB_T1, //!< <a href="../target/aarch32/SMLABB.html#SMLABB_T1">SMLABB</a>
  AMED_AARCH32_ENCODING_SMLABT_T1, //!< <a href="../target/aarch32/SMLABB.html#SMLABT_T1">SMLABT</a>
  AMED_AARCH32_ENCODING_SMLATB_T1, //!< <a href="../target/aarch32/SMLABB.html#SMLATB_T1">SMLATB</a>
  AMED_AARCH32_ENCODING_SMLATT_T1, //!< <a href="../target/aarch32/SMLABB.html#SMLATT_T1">SMLATT</a>
  AMED_AARCH32_ENCODING_SMLAD_A1, //!< <a href="../target/aarch32/SMLAD.html#SMLAD_A1">SMLAD</a>
  AMED_AARCH32_ENCODING_SMLADX_A1, //!< <a href="../target/aarch32/SMLAD.html#SMLADX_A1">SMLADX</a>
  AMED_AARCH32_ENCODING_SMLAD_T1, //!< <a href="../target/aarch32/SMLAD.html#SMLAD_T1">SMLAD</a>
  AMED_AARCH32_ENCODING_SMLADX_T1, //!< <a href="../target/aarch32/SMLAD.html#SMLADX_T1">SMLADX</a>
  AMED_AARCH32_ENCODING_SMLALS_A1, //!< <a href="../target/aarch32/SMLAL.html#SMLALS_A1">Flag setting</a>
  AMED_AARCH32_ENCODING_SMLAL_A1, //!< <a href="../target/aarch32/SMLAL.html#SMLAL_A1">Not flag setting</a>
  AMED_AARCH32_ENCODING_SMLAL_T1, //!< <a href="../target/aarch32/SMLAL.html#SMLAL_T1">T1</a>
  AMED_AARCH32_ENCODING_SMLALBB_A1, //!< <a href="../target/aarch32/SMLALBB.html#SMLALBB_A1">SMLALBB</a>
  AMED_AARCH32_ENCODING_SMLALBT_A1, //!< <a href="../target/aarch32/SMLALBB.html#SMLALBT_A1">SMLALBT</a>
  AMED_AARCH32_ENCODING_SMLALTB_A1, //!< <a href="../target/aarch32/SMLALBB.html#SMLALTB_A1">SMLALTB</a>
  AMED_AARCH32_ENCODING_SMLALTT_A1, //!< <a href="../target/aarch32/SMLALBB.html#SMLALTT_A1">SMLALTT</a>
  AMED_AARCH32_ENCODING_SMLALBB_T1, //!< <a href="../target/aarch32/SMLALBB.html#SMLALBB_T1">SMLALBB</a>
  AMED_AARCH32_ENCODING_SMLALBT_T1, //!< <a href="../target/aarch32/SMLALBB.html#SMLALBT_T1">SMLALBT</a>
  AMED_AARCH32_ENCODING_SMLALTB_T1, //!< <a href="../target/aarch32/SMLALBB.html#SMLALTB_T1">SMLALTB</a>
  AMED_AARCH32_ENCODING_SMLALTT_T1, //!< <a href="../target/aarch32/SMLALBB.html#SMLALTT_T1">SMLALTT</a>
  AMED_AARCH32_ENCODING_SMLALD_A1, //!< <a href="../target/aarch32/SMLALD.html#SMLALD_A1">SMLALD</a>
  AMED_AARCH32_ENCODING_SMLALDX_A1, //!< <a href="../target/aarch32/SMLALD.html#SMLALDX_A1">SMLALDX</a>
  AMED_AARCH32_ENCODING_SMLALD_T1, //!< <a href="../target/aarch32/SMLALD.html#SMLALD_T1">SMLALD</a>
  AMED_AARCH32_ENCODING_SMLALDX_T1, //!< <a href="../target/aarch32/SMLALD.html#SMLALDX_T1">SMLALDX</a>
  AMED_AARCH32_ENCODING_SMLAWB_A1, //!< <a href="../target/aarch32/SMLAWB.html#SMLAWB_A1">SMLAWB</a>
  AMED_AARCH32_ENCODING_SMLAWT_A1, //!< <a href="../target/aarch32/SMLAWB.html#SMLAWT_A1">SMLAWT</a>
  AMED_AARCH32_ENCODING_SMLAWB_T1, //!< <a href="../target/aarch32/SMLAWB.html#SMLAWB_T1">SMLAWB</a>
  AMED_AARCH32_ENCODING_SMLAWT_T1, //!< <a href="../target/aarch32/SMLAWB.html#SMLAWT_T1">SMLAWT</a>
  AMED_AARCH32_ENCODING_SMLSD_A1, //!< <a href="../target/aarch32/SMLSD.html#SMLSD_A1">SMLSD</a>
  AMED_AARCH32_ENCODING_SMLSDX_A1, //!< <a href="../target/aarch32/SMLSD.html#SMLSDX_A1">SMLSDX</a>
  AMED_AARCH32_ENCODING_SMLSD_T1, //!< <a href="../target/aarch32/SMLSD.html#SMLSD_T1">SMLSD</a>
  AMED_AARCH32_ENCODING_SMLSDX_T1, //!< <a href="../target/aarch32/SMLSD.html#SMLSDX_T1">SMLSDX</a>
  AMED_AARCH32_ENCODING_SMLSLD_A1, //!< <a href="../target/aarch32/SMLSLD.html#SMLSLD_A1">SMLSLD</a>
  AMED_AARCH32_ENCODING_SMLSLDX_A1, //!< <a href="../target/aarch32/SMLSLD.html#SMLSLDX_A1">SMLSLDX</a>
  AMED_AARCH32_ENCODING_SMLSLD_T1, //!< <a href="../target/aarch32/SMLSLD.html#SMLSLD_T1">SMLSLD</a>
  AMED_AARCH32_ENCODING_SMLSLDX_T1, //!< <a href="../target/aarch32/SMLSLD.html#SMLSLDX_T1">SMLSLDX</a>
  AMED_AARCH32_ENCODING_SMMLA_A1, //!< <a href="../target/aarch32/SMMLA.html#SMMLA_A1">SMMLA</a>
  AMED_AARCH32_ENCODING_SMMLAR_A1, //!< <a href="../target/aarch32/SMMLA.html#SMMLAR_A1">SMMLAR</a>
  AMED_AARCH32_ENCODING_SMMLA_T1, //!< <a href="../target/aarch32/SMMLA.html#SMMLA_T1">SMMLA</a>
  AMED_AARCH32_ENCODING_SMMLAR_T1, //!< <a href="../target/aarch32/SMMLA.html#SMMLAR_T1">SMMLAR</a>
  AMED_AARCH32_ENCODING_SMMLS_A1, //!< <a href="../target/aarch32/SMMLS.html#SMMLS_A1">SMMLS</a>
  AMED_AARCH32_ENCODING_SMMLSR_A1, //!< <a href="../target/aarch32/SMMLS.html#SMMLSR_A1">SMMLSR</a>
  AMED_AARCH32_ENCODING_SMMLS_T1, //!< <a href="../target/aarch32/SMMLS.html#SMMLS_T1">SMMLS</a>
  AMED_AARCH32_ENCODING_SMMLSR_T1, //!< <a href="../target/aarch32/SMMLS.html#SMMLSR_T1">SMMLSR</a>
  AMED_AARCH32_ENCODING_SMMUL_A1, //!< <a href="../target/aarch32/SMMUL.html#SMMUL_A1">SMMUL</a>
  AMED_AARCH32_ENCODING_SMMULR_A1, //!< <a href="../target/aarch32/SMMUL.html#SMMULR_A1">SMMULR</a>
  AMED_AARCH32_ENCODING_SMMUL_T1, //!< <a href="../target/aarch32/SMMUL.html#SMMUL_T1">SMMUL</a>
  AMED_AARCH32_ENCODING_SMMULR_T1, //!< <a href="../target/aarch32/SMMUL.html#SMMULR_T1">SMMULR</a>
  AMED_AARCH32_ENCODING_SMUAD_A1, //!< <a href="../target/aarch32/SMUAD.html#SMUAD_A1">SMUAD</a>
  AMED_AARCH32_ENCODING_SMUADX_A1, //!< <a href="../target/aarch32/SMUAD.html#SMUADX_A1">SMUADX</a>
  AMED_AARCH32_ENCODING_SMUAD_T1, //!< <a href="../target/aarch32/SMUAD.html#SMUAD_T1">SMUAD</a>
  AMED_AARCH32_ENCODING_SMUADX_T1, //!< <a href="../target/aarch32/SMUAD.html#SMUADX_T1">SMUADX</a>
  AMED_AARCH32_ENCODING_SMULBB_A1, //!< <a href="../target/aarch32/SMULBB.html#SMULBB_A1">SMULBB</a>
  AMED_AARCH32_ENCODING_SMULBT_A1, //!< <a href="../target/aarch32/SMULBB.html#SMULBT_A1">SMULBT</a>
  AMED_AARCH32_ENCODING_SMULTB_A1, //!< <a href="../target/aarch32/SMULBB.html#SMULTB_A1">SMULTB</a>
  AMED_AARCH32_ENCODING_SMULTT_A1, //!< <a href="../target/aarch32/SMULBB.html#SMULTT_A1">SMULTT</a>
  AMED_AARCH32_ENCODING_SMULBB_T1, //!< <a href="../target/aarch32/SMULBB.html#SMULBB_T1">SMULBB</a>
  AMED_AARCH32_ENCODING_SMULBT_T1, //!< <a href="../target/aarch32/SMULBB.html#SMULBT_T1">SMULBT</a>
  AMED_AARCH32_ENCODING_SMULTB_T1, //!< <a href="../target/aarch32/SMULBB.html#SMULTB_T1">SMULTB</a>
  AMED_AARCH32_ENCODING_SMULTT_T1, //!< <a href="../target/aarch32/SMULBB.html#SMULTT_T1">SMULTT</a>
  AMED_AARCH32_ENCODING_SMULLS_A1, //!< <a href="../target/aarch32/SMULL.html#SMULLS_A1">Flag setting</a>
  AMED_AARCH32_ENCODING_SMULL_A1, //!< <a href="../target/aarch32/SMULL.html#SMULL_A1">Not flag setting</a>
  AMED_AARCH32_ENCODING_SMULL_T1, //!< <a href="../target/aarch32/SMULL.html#SMULL_T1">T1</a>
  AMED_AARCH32_ENCODING_SMULWB_A1, //!< <a href="../target/aarch32/SMULWB.html#SMULWB_A1">SMULWB</a>
  AMED_AARCH32_ENCODING_SMULWT_A1, //!< <a href="../target/aarch32/SMULWB.html#SMULWT_A1">SMULWT</a>
  AMED_AARCH32_ENCODING_SMULWB_T1, //!< <a href="../target/aarch32/SMULWB.html#SMULWB_T1">SMULWB</a>
  AMED_AARCH32_ENCODING_SMULWT_T1, //!< <a href="../target/aarch32/SMULWB.html#SMULWT_T1">SMULWT</a>
  AMED_AARCH32_ENCODING_SMUSD_A1, //!< <a href="../target/aarch32/SMUSD.html#SMUSD_A1">SMUSD</a>
  AMED_AARCH32_ENCODING_SMUSDX_A1, //!< <a href="../target/aarch32/SMUSD.html#SMUSDX_A1">SMUSDX</a>
  AMED_AARCH32_ENCODING_SMUSD_T1, //!< <a href="../target/aarch32/SMUSD.html#SMUSD_T1">SMUSD</a>
  AMED_AARCH32_ENCODING_SMUSDX_T1, //!< <a href="../target/aarch32/SMUSD.html#SMUSDX_T1">SMUSDX</a>
  AMED_AARCH32_ENCODING_SRSDA_A1_AS, //!< <a href="../target/aarch32/SRS.html#SRSDA_A1_AS">Decrement After</a>
  AMED_AARCH32_ENCODING_SRSDB_A1_AS, //!< <a href="../target/aarch32/SRS.html#SRSDB_A1_AS">Decrement Before</a>
  AMED_AARCH32_ENCODING_SRSIA_A1_AS, //!< <a href="../target/aarch32/SRS.html#SRSIA_A1_AS">Increment After</a>
  AMED_AARCH32_ENCODING_SRSIB_A1_AS, //!< <a href="../target/aarch32/SRS.html#SRSIB_A1_AS">Increment Before</a>
  AMED_AARCH32_ENCODING_SRS_T1_AS, //!< <a href="../target/aarch32/SRS.html#SRS_T1_AS">T1</a>
  AMED_AARCH32_ENCODING_SRS_T2_AS, //!< <a href="../target/aarch32/SRS.html#SRS_T2_AS">T2</a>
  AMED_AARCH32_ENCODING_SSAT_A1_ASR, //!< <a href="../target/aarch32/SSAT.html#SSAT_A1_ASR">Arithmetic shift right</a>
  AMED_AARCH32_ENCODING_SSAT_A1_LSL, //!< <a href="../target/aarch32/SSAT.html#SSAT_A1_LSL">Logical shift left</a>
  AMED_AARCH32_ENCODING_SSAT_T1_ASR, //!< <a href="../target/aarch32/SSAT.html#SSAT_T1_ASR">Arithmetic shift right</a>
  AMED_AARCH32_ENCODING_SSAT_T1_LSL, //!< <a href="../target/aarch32/SSAT.html#SSAT_T1_LSL">Logical shift left</a>
  AMED_AARCH32_ENCODING_SSAT16_A1, //!< <a href="../target/aarch32/SSAT16.html#SSAT16_A1">A1</a>
  AMED_AARCH32_ENCODING_SSAT16_T1, //!< <a href="../target/aarch32/SSAT16.html#SSAT16_T1">T1</a>
  AMED_AARCH32_ENCODING_SSAX_A1, //!< <a href="../target/aarch32/SSAX.html#SSAX_A1">A1</a>
  AMED_AARCH32_ENCODING_SSAX_T1, //!< <a href="../target/aarch32/SSAX.html#SSAX_T1">T1</a>
  AMED_AARCH32_ENCODING_SSBB_A1, //!< <a href="../target/aarch32/SSBB.html#SSBB_A1">A1</a>
  AMED_AARCH32_ENCODING_SSBB_T1, //!< <a href="../target/aarch32/SSBB.html#SSBB_T1">T1</a>
  AMED_AARCH32_ENCODING_SSUB16_A1, //!< <a href="../target/aarch32/SSUB16.html#SSUB16_A1">A1</a>
  AMED_AARCH32_ENCODING_SSUB16_T1, //!< <a href="../target/aarch32/SSUB16.html#SSUB16_T1">T1</a>
  AMED_AARCH32_ENCODING_SSUB8_A1, //!< <a href="../target/aarch32/SSUB8.html#SSUB8_A1">A1</a>
  AMED_AARCH32_ENCODING_SSUB8_T1, //!< <a href="../target/aarch32/SSUB8.html#SSUB8_T1">T1</a>
  AMED_AARCH32_ENCODING_STC_A1_off, //!< <a href="../target/aarch32/STC.html#STC_A1_off">Offset</a>
  AMED_AARCH32_ENCODING_STC_A1_post, //!< <a href="../target/aarch32/STC.html#STC_A1_post">Post-indexed</a>
  AMED_AARCH32_ENCODING_STC_A1_pre, //!< <a href="../target/aarch32/STC.html#STC_A1_pre">Pre-indexed</a>
  AMED_AARCH32_ENCODING_STC_A1_unind, //!< <a href="../target/aarch32/STC.html#STC_A1_unind">Unindexed</a>
  AMED_AARCH32_ENCODING_STC_T1_off, //!< <a href="../target/aarch32/STC.html#STC_T1_off">Offset</a>
  AMED_AARCH32_ENCODING_STC_T1_post, //!< <a href="../target/aarch32/STC.html#STC_T1_post">Post-indexed</a>
  AMED_AARCH32_ENCODING_STC_T1_pre, //!< <a href="../target/aarch32/STC.html#STC_T1_pre">Pre-indexed</a>
  AMED_AARCH32_ENCODING_STC_T1_unind, //!< <a href="../target/aarch32/STC.html#STC_T1_unind">Unindexed</a>
  AMED_AARCH32_ENCODING_STL_A1, //!< <a href="../target/aarch32/STL.html#STL_A1">A1</a>
  AMED_AARCH32_ENCODING_STL_T1, //!< <a href="../target/aarch32/STL.html#STL_T1">T1</a>
  AMED_AARCH32_ENCODING_STLB_A1, //!< <a href="../target/aarch32/STLB.html#STLB_A1">A1</a>
  AMED_AARCH32_ENCODING_STLB_T1, //!< <a href="../target/aarch32/STLB.html#STLB_T1">T1</a>
  AMED_AARCH32_ENCODING_STLEX_A1, //!< <a href="../target/aarch32/STLEX.html#STLEX_A1">A1</a>
  AMED_AARCH32_ENCODING_STLEX_T1, //!< <a href="../target/aarch32/STLEX.html#STLEX_T1">T1</a>
  AMED_AARCH32_ENCODING_STLEXB_A1, //!< <a href="../target/aarch32/STLEXB.html#STLEXB_A1">A1</a>
  AMED_AARCH32_ENCODING_STLEXB_T1, //!< <a href="../target/aarch32/STLEXB.html#STLEXB_T1">T1</a>
  AMED_AARCH32_ENCODING_STLEXD_A1, //!< <a href="../target/aarch32/STLEXD.html#STLEXD_A1">A1</a>
  AMED_AARCH32_ENCODING_STLEXD_T1, //!< <a href="../target/aarch32/STLEXD.html#STLEXD_T1">T1</a>
  AMED_AARCH32_ENCODING_STLEXH_A1, //!< <a href="../target/aarch32/STLEXH.html#STLEXH_A1">A1</a>
  AMED_AARCH32_ENCODING_STLEXH_T1, //!< <a href="../target/aarch32/STLEXH.html#STLEXH_T1">T1</a>
  AMED_AARCH32_ENCODING_STLH_A1, //!< <a href="../target/aarch32/STLH.html#STLH_A1">A1</a>
  AMED_AARCH32_ENCODING_STLH_T1, //!< <a href="../target/aarch32/STLH.html#STLH_T1">T1</a>
  AMED_AARCH32_ENCODING_STM_A1, //!< <a href="../target/aarch32/STM.html#STM_A1">A1</a>
  AMED_AARCH32_ENCODING_STM_T1, //!< <a href="../target/aarch32/STM.html#STM_T1">T1</a>
  AMED_AARCH32_ENCODING_STM_T2, //!< <a href="../target/aarch32/STM.html#STM_T2">T2</a>
  AMED_AARCH32_ENCODING_STM_u_A1_AS, //!< <a href="../target/aarch32/STM_u.html#STM_u_A1_AS">A1</a>
  AMED_AARCH32_ENCODING_STMDA_A1, //!< <a href="../target/aarch32/STMDA.html#STMDA_A1">A1</a>
  AMED_AARCH32_ENCODING_STMDB_A1, //!< <a href="../target/aarch32/STMDB.html#STMDB_A1">A1</a>
  AMED_AARCH32_ENCODING_STMDB_T1, //!< <a href="../target/aarch32/STMDB.html#STMDB_T1">T1</a>
  AMED_AARCH32_ENCODING_STMIB_A1, //!< <a href="../target/aarch32/STMIB.html#STMIB_A1">A1</a>
  AMED_AARCH32_ENCODING_STR_i_A1_off, //!< <a href="../target/aarch32/STR_i.html#STR_i_A1_off">Offset</a>
  AMED_AARCH32_ENCODING_STR_i_A1_post, //!< <a href="../target/aarch32/STR_i.html#STR_i_A1_post">Post-indexed</a>
  AMED_AARCH32_ENCODING_STR_i_A1_pre, //!< <a href="../target/aarch32/STR_i.html#STR_i_A1_pre">Pre-indexed</a>
  AMED_AARCH32_ENCODING_STR_i_T1, //!< <a href="../target/aarch32/STR_i.html#STR_i_T1">T1</a>
  AMED_AARCH32_ENCODING_STR_i_T2, //!< <a href="../target/aarch32/STR_i.html#STR_i_T2">T2</a>
  AMED_AARCH32_ENCODING_STR_i_T3, //!< <a href="../target/aarch32/STR_i.html#STR_i_T3">T3</a>
  AMED_AARCH32_ENCODING_STR_i_T4_off, //!< <a href="../target/aarch32/STR_i.html#STR_i_T4_off">Offset</a>
  AMED_AARCH32_ENCODING_STR_i_T4_post, //!< <a href="../target/aarch32/STR_i.html#STR_i_T4_post">Post-indexed</a>
  AMED_AARCH32_ENCODING_STR_i_T4_pre, //!< <a href="../target/aarch32/STR_i.html#STR_i_T4_pre">Pre-indexed</a>
  AMED_AARCH32_ENCODING_STR_r_A1_off, //!< <a href="../target/aarch32/STR_r.html#STR_r_A1_off">Offset</a>
  AMED_AARCH32_ENCODING_STR_r_A1_post, //!< <a href="../target/aarch32/STR_r.html#STR_r_A1_post">Post-indexed</a>
  AMED_AARCH32_ENCODING_STR_r_A1_pre, //!< <a href="../target/aarch32/STR_r.html#STR_r_A1_pre">Pre-indexed</a>
  AMED_AARCH32_ENCODING_STR_r_T1, //!< <a href="../target/aarch32/STR_r.html#STR_r_T1">T1</a>
  AMED_AARCH32_ENCODING_STR_r_T2, //!< <a href="../target/aarch32/STR_r.html#STR_r_T2">T2</a>
  AMED_AARCH32_ENCODING_STRB_i_A1_off, //!< <a href="../target/aarch32/STRB_i.html#STRB_i_A1_off">Offset</a>
  AMED_AARCH32_ENCODING_STRB_i_A1_post, //!< <a href="../target/aarch32/STRB_i.html#STRB_i_A1_post">Post-indexed</a>
  AMED_AARCH32_ENCODING_STRB_i_A1_pre, //!< <a href="../target/aarch32/STRB_i.html#STRB_i_A1_pre">Pre-indexed</a>
  AMED_AARCH32_ENCODING_STRB_i_T1, //!< <a href="../target/aarch32/STRB_i.html#STRB_i_T1">T1</a>
  AMED_AARCH32_ENCODING_STRB_i_T2, //!< <a href="../target/aarch32/STRB_i.html#STRB_i_T2">T2</a>
  AMED_AARCH32_ENCODING_STRB_i_T3_offn, //!< <a href="../target/aarch32/STRB_i.html#STRB_i_T3_offn">Offset</a>
  AMED_AARCH32_ENCODING_STRB_i_T3_post, //!< <a href="../target/aarch32/STRB_i.html#STRB_i_T3_post">Post-indexed</a>
  AMED_AARCH32_ENCODING_STRB_i_T3_pre, //!< <a href="../target/aarch32/STRB_i.html#STRB_i_T3_pre">Pre-indexed</a>
  AMED_AARCH32_ENCODING_STRB_r_A1_off, //!< <a href="../target/aarch32/STRB_r.html#STRB_r_A1_off">Offset</a>
  AMED_AARCH32_ENCODING_STRB_r_A1_post, //!< <a href="../target/aarch32/STRB_r.html#STRB_r_A1_post">Post-indexed</a>
  AMED_AARCH32_ENCODING_STRB_r_A1_pre, //!< <a href="../target/aarch32/STRB_r.html#STRB_r_A1_pre">Pre-indexed</a>
  AMED_AARCH32_ENCODING_STRB_r_T1, //!< <a href="../target/aarch32/STRB_r.html#STRB_r_T1">T1</a>
  AMED_AARCH32_ENCODING_STRB_r_T2, //!< <a href="../target/aarch32/STRB_r.html#STRB_r_T2">T2</a>
  AMED_AARCH32_ENCODING_STRBT_A1, //!< <a href="../target/aarch32/STRBT.html#STRBT_A1">A1</a>
  AMED_AARCH32_ENCODING_STRBT_A2, //!< <a href="../target/aarch32/STRBT.html#STRBT_A2">A2</a>
  AMED_AARCH32_ENCODING_STRBT_T1, //!< <a href="../target/aarch32/STRBT.html#STRBT_T1">T1</a>
  AMED_AARCH32_ENCODING_STRD_i_A1_off, //!< <a href="../target/aarch32/STRD_i.html#STRD_i_A1_off">Offset</a>
  AMED_AARCH32_ENCODING_STRD_i_A1_post, //!< <a href="../target/aarch32/STRD_i.html#STRD_i_A1_post">Post-indexed</a>
  AMED_AARCH32_ENCODING_STRD_i_A1_pre, //!< <a href="../target/aarch32/STRD_i.html#STRD_i_A1_pre">Pre-indexed</a>
  AMED_AARCH32_ENCODING_STRD_i_T1_off, //!< <a href="../target/aarch32/STRD_i.html#STRD_i_T1_off">Offset</a>
  AMED_AARCH32_ENCODING_STRD_i_T1_post, //!< <a href="../target/aarch32/STRD_i.html#STRD_i_T1_post">Post-indexed</a>
  AMED_AARCH32_ENCODING_STRD_i_T1_pre, //!< <a href="../target/aarch32/STRD_i.html#STRD_i_T1_pre">Pre-indexed</a>
  AMED_AARCH32_ENCODING_STRD_r_A1_off, //!< <a href="../target/aarch32/STRD_r.html#STRD_r_A1_off">Offset</a>
  AMED_AARCH32_ENCODING_STRD_r_A1_post, //!< <a href="../target/aarch32/STRD_r.html#STRD_r_A1_post">Post-indexed</a>
  AMED_AARCH32_ENCODING_STRD_r_A1_pre, //!< <a href="../target/aarch32/STRD_r.html#STRD_r_A1_pre">Pre-indexed</a>
  AMED_AARCH32_ENCODING_STREX_A1, //!< <a href="../target/aarch32/STREX.html#STREX_A1">A1</a>
  AMED_AARCH32_ENCODING_STREX_T1, //!< <a href="../target/aarch32/STREX.html#STREX_T1">T1</a>
  AMED_AARCH32_ENCODING_STREXB_A1, //!< <a href="../target/aarch32/STREXB.html#STREXB_A1">A1</a>
  AMED_AARCH32_ENCODING_STREXB_T1, //!< <a href="../target/aarch32/STREXB.html#STREXB_T1">T1</a>
  AMED_AARCH32_ENCODING_STREXD_A1, //!< <a href="../target/aarch32/STREXD.html#STREXD_A1">A1</a>
  AMED_AARCH32_ENCODING_STREXD_T1, //!< <a href="../target/aarch32/STREXD.html#STREXD_T1">T1</a>
  AMED_AARCH32_ENCODING_STREXH_A1, //!< <a href="../target/aarch32/STREXH.html#STREXH_A1">A1</a>
  AMED_AARCH32_ENCODING_STREXH_T1, //!< <a href="../target/aarch32/STREXH.html#STREXH_T1">T1</a>
  AMED_AARCH32_ENCODING_STRH_i_A1_off, //!< <a href="../target/aarch32/STRH_i.html#STRH_i_A1_off">Offset</a>
  AMED_AARCH32_ENCODING_STRH_i_A1_post, //!< <a href="../target/aarch32/STRH_i.html#STRH_i_A1_post">Post-indexed</a>
  AMED_AARCH32_ENCODING_STRH_i_A1_pre, //!< <a href="../target/aarch32/STRH_i.html#STRH_i_A1_pre">Pre-indexed</a>
  AMED_AARCH32_ENCODING_STRH_i_T1, //!< <a href="../target/aarch32/STRH_i.html#STRH_i_T1">T1</a>
  AMED_AARCH32_ENCODING_STRH_i_T2, //!< <a href="../target/aarch32/STRH_i.html#STRH_i_T2">T2</a>
  AMED_AARCH32_ENCODING_STRH_i_T3_offn, //!< <a href="../target/aarch32/STRH_i.html#STRH_i_T3_offn">Offset</a>
  AMED_AARCH32_ENCODING_STRH_i_T3_post, //!< <a href="../target/aarch32/STRH_i.html#STRH_i_T3_post">Post-indexed</a>
  AMED_AARCH32_ENCODING_STRH_i_T3_pre, //!< <a href="../target/aarch32/STRH_i.html#STRH_i_T3_pre">Pre-indexed</a>
  AMED_AARCH32_ENCODING_STRH_r_A1_off, //!< <a href="../target/aarch32/STRH_r.html#STRH_r_A1_off">Offset</a>
  AMED_AARCH32_ENCODING_STRH_r_A1_post, //!< <a href="../target/aarch32/STRH_r.html#STRH_r_A1_post">Post-indexed</a>
  AMED_AARCH32_ENCODING_STRH_r_A1_pre, //!< <a href="../target/aarch32/STRH_r.html#STRH_r_A1_pre">Pre-indexed</a>
  AMED_AARCH32_ENCODING_STRH_r_T1, //!< <a href="../target/aarch32/STRH_r.html#STRH_r_T1">T1</a>
  AMED_AARCH32_ENCODING_STRH_r_T2, //!< <a href="../target/aarch32/STRH_r.html#STRH_r_T2">T2</a>
  AMED_AARCH32_ENCODING_STRHT_A1, //!< <a href="../target/aarch32/STRHT.html#STRHT_A1">A1</a>
  AMED_AARCH32_ENCODING_STRHT_A2, //!< <a href="../target/aarch32/STRHT.html#STRHT_A2">A2</a>
  AMED_AARCH32_ENCODING_STRHT_T1, //!< <a href="../target/aarch32/STRHT.html#STRHT_T1">T1</a>
  AMED_AARCH32_ENCODING_STRT_A1, //!< <a href="../target/aarch32/STRT.html#STRT_A1">A1</a>
  AMED_AARCH32_ENCODING_STRT_A2, //!< <a href="../target/aarch32/STRT.html#STRT_A2">A2</a>
  AMED_AARCH32_ENCODING_STRT_T1, //!< <a href="../target/aarch32/STRT.html#STRT_T1">T1</a>
  AMED_AARCH32_ENCODING_SUB_i_A1, //!< <a href="../target/aarch32/SUB_i.html#SUB_i_A1">SUB</a>
  AMED_AARCH32_ENCODING_SUBS_i_A1, //!< <a href="../target/aarch32/SUB_i.html#SUBS_i_A1">SUBS</a>
  AMED_AARCH32_ENCODING_SUB_i_T1, //!< <a href="../target/aarch32/SUB_i.html#SUB_i_T1">T1</a>
  AMED_AARCH32_ENCODING_SUB_i_T2, //!< <a href="../target/aarch32/SUB_i.html#SUB_i_T2">T2</a>
  AMED_AARCH32_ENCODING_SUB_i_T3, //!< <a href="../target/aarch32/SUB_i.html#SUB_i_T3">SUB</a>
  AMED_AARCH32_ENCODING_SUBS_i_T3, //!< <a href="../target/aarch32/SUB_i.html#SUBS_i_T3">SUBS</a>
  AMED_AARCH32_ENCODING_SUB_i_T4, //!< <a href="../target/aarch32/SUB_i.html#SUB_i_T4">T4</a>
  AMED_AARCH32_ENCODING_SUBS_PC_T5_AS, //!< <a href="../target/aarch32/SUB_i.html#SUBS_PC_T5_AS">T5</a>
  AMED_AARCH32_ENCODING_SUB_r_A1_RRX, //!< <a href="../target/aarch32/SUB_r.html#SUB_r_A1_RRX">SUB, rotate right with extend</a>
  AMED_AARCH32_ENCODING_SUB_r_A1, //!< <a href="../target/aarch32/SUB_r.html#SUB_r_A1">SUB, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_SUBS_r_A1_RRX, //!< <a href="../target/aarch32/SUB_r.html#SUBS_r_A1_RRX">SUBS, rotate right with extend</a>
  AMED_AARCH32_ENCODING_SUBS_r_A1, //!< <a href="../target/aarch32/SUB_r.html#SUBS_r_A1">SUBS, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_SUB_r_T1, //!< <a href="../target/aarch32/SUB_r.html#SUB_r_T1">T1</a>
  AMED_AARCH32_ENCODING_SUB_r_T2_RRX, //!< <a href="../target/aarch32/SUB_r.html#SUB_r_T2_RRX">SUB, rotate right with extend</a>
  AMED_AARCH32_ENCODING_SUB_r_T2, //!< <a href="../target/aarch32/SUB_r.html#SUB_r_T2">SUB, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_SUBS_r_T2_RRX, //!< <a href="../target/aarch32/SUB_r.html#SUBS_r_T2_RRX">SUBS, rotate right with extend</a>
  AMED_AARCH32_ENCODING_SUBS_r_T2, //!< <a href="../target/aarch32/SUB_r.html#SUBS_r_T2">SUBS, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_SUBS_rr_A1, //!< <a href="../target/aarch32/SUB_rr.html#SUBS_rr_A1">Flag setting</a>
  AMED_AARCH32_ENCODING_SUB_rr_A1, //!< <a href="../target/aarch32/SUB_rr.html#SUB_rr_A1">Not flag setting</a>
  AMED_AARCH32_ENCODING_SUB_SP_i_A1, //!< <a href="../target/aarch32/SUB_SP_i.html#SUB_SP_i_A1">SUB</a>
  AMED_AARCH32_ENCODING_SUBS_SP_i_A1, //!< <a href="../target/aarch32/SUB_SP_i.html#SUBS_SP_i_A1">SUBS</a>
  AMED_AARCH32_ENCODING_SUB_SP_i_T1, //!< <a href="../target/aarch32/SUB_SP_i.html#SUB_SP_i_T1">T1</a>
  AMED_AARCH32_ENCODING_SUB_SP_i_T2, //!< <a href="../target/aarch32/SUB_SP_i.html#SUB_SP_i_T2">SUB</a>
  AMED_AARCH32_ENCODING_SUBS_SP_i_T2, //!< <a href="../target/aarch32/SUB_SP_i.html#SUBS_SP_i_T2">SUBS</a>
  AMED_AARCH32_ENCODING_SUB_SP_i_T3, //!< <a href="../target/aarch32/SUB_SP_i.html#SUB_SP_i_T3">T3</a>
  AMED_AARCH32_ENCODING_SUB_SP_r_A1_RRX, //!< <a href="../target/aarch32/SUB_SP_r.html#SUB_SP_r_A1_RRX">SUB, rotate right with extend</a>
  AMED_AARCH32_ENCODING_SUB_SP_r_A1, //!< <a href="../target/aarch32/SUB_SP_r.html#SUB_SP_r_A1">SUB, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_SUBS_SP_r_A1_RRX, //!< <a href="../target/aarch32/SUB_SP_r.html#SUBS_SP_r_A1_RRX">SUBS, rotate right with extend</a>
  AMED_AARCH32_ENCODING_SUBS_SP_r_A1, //!< <a href="../target/aarch32/SUB_SP_r.html#SUBS_SP_r_A1">SUBS, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_SUB_SP_r_T1_RRX, //!< <a href="../target/aarch32/SUB_SP_r.html#SUB_SP_r_T1_RRX">SUB, rotate right with extend</a>
  AMED_AARCH32_ENCODING_SUB_SP_r_T1, //!< <a href="../target/aarch32/SUB_SP_r.html#SUB_SP_r_T1">SUB, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_SUBS_SP_r_T1_RRX, //!< <a href="../target/aarch32/SUB_SP_r.html#SUBS_SP_r_T1_RRX">SUBS, rotate right with extend</a>
  AMED_AARCH32_ENCODING_SUBS_SP_r_T1, //!< <a href="../target/aarch32/SUB_SP_r.html#SUBS_SP_r_T1">SUBS, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_SVC_A1, //!< <a href="../target/aarch32/SVC.html#SVC_A1">A1</a>
  AMED_AARCH32_ENCODING_SVC_T1, //!< <a href="../target/aarch32/SVC.html#SVC_T1">T1</a>
  AMED_AARCH32_ENCODING_SXTAB_A1, //!< <a href="../target/aarch32/SXTAB.html#SXTAB_A1">A1</a>
  AMED_AARCH32_ENCODING_SXTAB_T1, //!< <a href="../target/aarch32/SXTAB.html#SXTAB_T1">T1</a>
  AMED_AARCH32_ENCODING_SXTAB16_A1, //!< <a href="../target/aarch32/SXTAB16.html#SXTAB16_A1">A1</a>
  AMED_AARCH32_ENCODING_SXTAB16_T1, //!< <a href="../target/aarch32/SXTAB16.html#SXTAB16_T1">T1</a>
  AMED_AARCH32_ENCODING_SXTAH_A1, //!< <a href="../target/aarch32/SXTAH.html#SXTAH_A1">A1</a>
  AMED_AARCH32_ENCODING_SXTAH_T1, //!< <a href="../target/aarch32/SXTAH.html#SXTAH_T1">T1</a>
  AMED_AARCH32_ENCODING_SXTB_A1, //!< <a href="../target/aarch32/SXTB.html#SXTB_A1">A1</a>
  AMED_AARCH32_ENCODING_SXTB_T1, //!< <a href="../target/aarch32/SXTB.html#SXTB_T1">T1</a>
  AMED_AARCH32_ENCODING_SXTB_T2, //!< <a href="../target/aarch32/SXTB.html#SXTB_T2">T2</a>
  AMED_AARCH32_ENCODING_SXTB16_A1, //!< <a href="../target/aarch32/SXTB16.html#SXTB16_A1">A1</a>
  AMED_AARCH32_ENCODING_SXTB16_T1, //!< <a href="../target/aarch32/SXTB16.html#SXTB16_T1">T1</a>
  AMED_AARCH32_ENCODING_SXTH_A1, //!< <a href="../target/aarch32/SXTH.html#SXTH_A1">A1</a>
  AMED_AARCH32_ENCODING_SXTH_T1, //!< <a href="../target/aarch32/SXTH.html#SXTH_T1">T1</a>
  AMED_AARCH32_ENCODING_SXTH_T2, //!< <a href="../target/aarch32/SXTH.html#SXTH_T2">T2</a>
  AMED_AARCH32_ENCODING_TBB_T1, //!< <a href="../target/aarch32/TBB.html#TBB_T1">Byte</a>
  AMED_AARCH32_ENCODING_TBH_T1, //!< <a href="../target/aarch32/TBB.html#TBH_T1">Halfword</a>
  AMED_AARCH32_ENCODING_TEQ_i_A1, //!< <a href="../target/aarch32/TEQ_i.html#TEQ_i_A1">A1</a>
  AMED_AARCH32_ENCODING_TEQ_i_T1, //!< <a href="../target/aarch32/TEQ_i.html#TEQ_i_T1">T1</a>
  AMED_AARCH32_ENCODING_TEQ_r_A1_RRX, //!< <a href="../target/aarch32/TEQ_r.html#TEQ_r_A1_RRX">Rotate right with extend</a>
  AMED_AARCH32_ENCODING_TEQ_r_A1, //!< <a href="../target/aarch32/TEQ_r.html#TEQ_r_A1">Shift or rotate by value</a>
  AMED_AARCH32_ENCODING_TEQ_r_T1_RRX, //!< <a href="../target/aarch32/TEQ_r.html#TEQ_r_T1_RRX">Rotate right with extend</a>
  AMED_AARCH32_ENCODING_TEQ_r_T1, //!< <a href="../target/aarch32/TEQ_r.html#TEQ_r_T1">Shift or rotate by value</a>
  AMED_AARCH32_ENCODING_TEQ_rr_A1, //!< <a href="../target/aarch32/TEQ_rr.html#TEQ_rr_A1">A1</a>
  AMED_AARCH32_ENCODING_TSB_A1, //!< <a href="../target/aarch32/TSB.html#TSB_A1">A1</a>
  AMED_AARCH32_ENCODING_TSB_T1, //!< <a href="../target/aarch32/TSB.html#TSB_T1">T1</a>
  AMED_AARCH32_ENCODING_TST_i_A1, //!< <a href="../target/aarch32/TST_i.html#TST_i_A1">A1</a>
  AMED_AARCH32_ENCODING_TST_i_T1, //!< <a href="../target/aarch32/TST_i.html#TST_i_T1">T1</a>
  AMED_AARCH32_ENCODING_TST_r_A1_RRX, //!< <a href="../target/aarch32/TST_r.html#TST_r_A1_RRX">Rotate right with extend</a>
  AMED_AARCH32_ENCODING_TST_r_A1, //!< <a href="../target/aarch32/TST_r.html#TST_r_A1">Shift or rotate by value</a>
  AMED_AARCH32_ENCODING_TST_r_T1, //!< <a href="../target/aarch32/TST_r.html#TST_r_T1">T1</a>
  AMED_AARCH32_ENCODING_TST_r_T2_RRX, //!< <a href="../target/aarch32/TST_r.html#TST_r_T2_RRX">Rotate right with extend</a>
  AMED_AARCH32_ENCODING_TST_r_T2, //!< <a href="../target/aarch32/TST_r.html#TST_r_T2">Shift or rotate by value</a>
  AMED_AARCH32_ENCODING_TST_rr_A1, //!< <a href="../target/aarch32/TST_rr.html#TST_rr_A1">A1</a>
  AMED_AARCH32_ENCODING_UADD16_A1, //!< <a href="../target/aarch32/UADD16.html#UADD16_A1">A1</a>
  AMED_AARCH32_ENCODING_UADD16_T1, //!< <a href="../target/aarch32/UADD16.html#UADD16_T1">T1</a>
  AMED_AARCH32_ENCODING_UADD8_A1, //!< <a href="../target/aarch32/UADD8.html#UADD8_A1">A1</a>
  AMED_AARCH32_ENCODING_UADD8_T1, //!< <a href="../target/aarch32/UADD8.html#UADD8_T1">T1</a>
  AMED_AARCH32_ENCODING_UASX_A1, //!< <a href="../target/aarch32/UASX.html#UASX_A1">A1</a>
  AMED_AARCH32_ENCODING_UASX_T1, //!< <a href="../target/aarch32/UASX.html#UASX_T1">T1</a>
  AMED_AARCH32_ENCODING_UBFX_A1, //!< <a href="../target/aarch32/UBFX.html#UBFX_A1">A1</a>
  AMED_AARCH32_ENCODING_UBFX_T1, //!< <a href="../target/aarch32/UBFX.html#UBFX_T1">T1</a>
  AMED_AARCH32_ENCODING_UDF_A1, //!< <a href="../target/aarch32/UDF.html#UDF_A1">A1</a>
  AMED_AARCH32_ENCODING_UDF_T1, //!< <a href="../target/aarch32/UDF.html#UDF_T1">T1</a>
  AMED_AARCH32_ENCODING_UDF_T2, //!< <a href="../target/aarch32/UDF.html#UDF_T2">T2</a>
  AMED_AARCH32_ENCODING_UDIV_A1, //!< <a href="../target/aarch32/UDIV.html#UDIV_A1">A1</a>
  AMED_AARCH32_ENCODING_UDIV_T1, //!< <a href="../target/aarch32/UDIV.html#UDIV_T1">T1</a>
  AMED_AARCH32_ENCODING_UHADD16_A1, //!< <a href="../target/aarch32/UHADD16.html#UHADD16_A1">A1</a>
  AMED_AARCH32_ENCODING_UHADD16_T1, //!< <a href="../target/aarch32/UHADD16.html#UHADD16_T1">T1</a>
  AMED_AARCH32_ENCODING_UHADD8_A1, //!< <a href="../target/aarch32/UHADD8.html#UHADD8_A1">A1</a>
  AMED_AARCH32_ENCODING_UHADD8_T1, //!< <a href="../target/aarch32/UHADD8.html#UHADD8_T1">T1</a>
  AMED_AARCH32_ENCODING_UHASX_A1, //!< <a href="../target/aarch32/UHASX.html#UHASX_A1">A1</a>
  AMED_AARCH32_ENCODING_UHASX_T1, //!< <a href="../target/aarch32/UHASX.html#UHASX_T1">T1</a>
  AMED_AARCH32_ENCODING_UHSAX_A1, //!< <a href="../target/aarch32/UHSAX.html#UHSAX_A1">A1</a>
  AMED_AARCH32_ENCODING_UHSAX_T1, //!< <a href="../target/aarch32/UHSAX.html#UHSAX_T1">T1</a>
  AMED_AARCH32_ENCODING_UHSUB16_A1, //!< <a href="../target/aarch32/UHSUB16.html#UHSUB16_A1">A1</a>
  AMED_AARCH32_ENCODING_UHSUB16_T1, //!< <a href="../target/aarch32/UHSUB16.html#UHSUB16_T1">T1</a>
  AMED_AARCH32_ENCODING_UHSUB8_A1, //!< <a href="../target/aarch32/UHSUB8.html#UHSUB8_A1">A1</a>
  AMED_AARCH32_ENCODING_UHSUB8_T1, //!< <a href="../target/aarch32/UHSUB8.html#UHSUB8_T1">T1</a>
  AMED_AARCH32_ENCODING_UMAAL_A1, //!< <a href="../target/aarch32/UMAAL.html#UMAAL_A1">A1</a>
  AMED_AARCH32_ENCODING_UMAAL_T1, //!< <a href="../target/aarch32/UMAAL.html#UMAAL_T1">T1</a>
  AMED_AARCH32_ENCODING_UMLALS_A1, //!< <a href="../target/aarch32/UMLAL.html#UMLALS_A1">Flag setting</a>
  AMED_AARCH32_ENCODING_UMLAL_A1, //!< <a href="../target/aarch32/UMLAL.html#UMLAL_A1">Not flag setting</a>
  AMED_AARCH32_ENCODING_UMLAL_T1, //!< <a href="../target/aarch32/UMLAL.html#UMLAL_T1">T1</a>
  AMED_AARCH32_ENCODING_UMULLS_A1, //!< <a href="../target/aarch32/UMULL.html#UMULLS_A1">Flag setting</a>
  AMED_AARCH32_ENCODING_UMULL_A1, //!< <a href="../target/aarch32/UMULL.html#UMULL_A1">Not flag setting</a>
  AMED_AARCH32_ENCODING_UMULL_T1, //!< <a href="../target/aarch32/UMULL.html#UMULL_T1">T1</a>
  AMED_AARCH32_ENCODING_UQADD16_A1, //!< <a href="../target/aarch32/UQADD16.html#UQADD16_A1">A1</a>
  AMED_AARCH32_ENCODING_UQADD16_T1, //!< <a href="../target/aarch32/UQADD16.html#UQADD16_T1">T1</a>
  AMED_AARCH32_ENCODING_UQADD8_A1, //!< <a href="../target/aarch32/UQADD8.html#UQADD8_A1">A1</a>
  AMED_AARCH32_ENCODING_UQADD8_T1, //!< <a href="../target/aarch32/UQADD8.html#UQADD8_T1">T1</a>
  AMED_AARCH32_ENCODING_UQASX_A1, //!< <a href="../target/aarch32/UQASX.html#UQASX_A1">A1</a>
  AMED_AARCH32_ENCODING_UQASX_T1, //!< <a href="../target/aarch32/UQASX.html#UQASX_T1">T1</a>
  AMED_AARCH32_ENCODING_UQSAX_A1, //!< <a href="../target/aarch32/UQSAX.html#UQSAX_A1">A1</a>
  AMED_AARCH32_ENCODING_UQSAX_T1, //!< <a href="../target/aarch32/UQSAX.html#UQSAX_T1">T1</a>
  AMED_AARCH32_ENCODING_UQSUB16_A1, //!< <a href="../target/aarch32/UQSUB16.html#UQSUB16_A1">A1</a>
  AMED_AARCH32_ENCODING_UQSUB16_T1, //!< <a href="../target/aarch32/UQSUB16.html#UQSUB16_T1">T1</a>
  AMED_AARCH32_ENCODING_UQSUB8_A1, //!< <a href="../target/aarch32/UQSUB8.html#UQSUB8_A1">A1</a>
  AMED_AARCH32_ENCODING_UQSUB8_T1, //!< <a href="../target/aarch32/UQSUB8.html#UQSUB8_T1">T1</a>
  AMED_AARCH32_ENCODING_USAD8_A1, //!< <a href="../target/aarch32/USAD8.html#USAD8_A1">A1</a>
  AMED_AARCH32_ENCODING_USAD8_T1, //!< <a href="../target/aarch32/USAD8.html#USAD8_T1">T1</a>
  AMED_AARCH32_ENCODING_USADA8_A1, //!< <a href="../target/aarch32/USADA8.html#USADA8_A1">A1</a>
  AMED_AARCH32_ENCODING_USADA8_T1, //!< <a href="../target/aarch32/USADA8.html#USADA8_T1">T1</a>
  AMED_AARCH32_ENCODING_USAT_A1_ASR, //!< <a href="../target/aarch32/USAT.html#USAT_A1_ASR">Arithmetic shift right</a>
  AMED_AARCH32_ENCODING_USAT_A1_LSL, //!< <a href="../target/aarch32/USAT.html#USAT_A1_LSL">Logical shift left</a>
  AMED_AARCH32_ENCODING_USAT_T1_ASR, //!< <a href="../target/aarch32/USAT.html#USAT_T1_ASR">Arithmetic shift right</a>
  AMED_AARCH32_ENCODING_USAT_T1_LSL, //!< <a href="../target/aarch32/USAT.html#USAT_T1_LSL">Logical shift left</a>
  AMED_AARCH32_ENCODING_USAT16_A1, //!< <a href="../target/aarch32/USAT16.html#USAT16_A1">A1</a>
  AMED_AARCH32_ENCODING_USAT16_T1, //!< <a href="../target/aarch32/USAT16.html#USAT16_T1">T1</a>
  AMED_AARCH32_ENCODING_USAX_A1, //!< <a href="../target/aarch32/USAX.html#USAX_A1">A1</a>
  AMED_AARCH32_ENCODING_USAX_T1, //!< <a href="../target/aarch32/USAX.html#USAX_T1">T1</a>
  AMED_AARCH32_ENCODING_USUB16_A1, //!< <a href="../target/aarch32/USUB16.html#USUB16_A1">A1</a>
  AMED_AARCH32_ENCODING_USUB16_T1, //!< <a href="../target/aarch32/USUB16.html#USUB16_T1">T1</a>
  AMED_AARCH32_ENCODING_USUB8_A1, //!< <a href="../target/aarch32/USUB8.html#USUB8_A1">A1</a>
  AMED_AARCH32_ENCODING_USUB8_T1, //!< <a href="../target/aarch32/USUB8.html#USUB8_T1">T1</a>
  AMED_AARCH32_ENCODING_UXTAB_A1, //!< <a href="../target/aarch32/UXTAB.html#UXTAB_A1">A1</a>
  AMED_AARCH32_ENCODING_UXTAB_T1, //!< <a href="../target/aarch32/UXTAB.html#UXTAB_T1">T1</a>
  AMED_AARCH32_ENCODING_UXTAB16_A1, //!< <a href="../target/aarch32/UXTAB16.html#UXTAB16_A1">A1</a>
  AMED_AARCH32_ENCODING_UXTAB16_T1, //!< <a href="../target/aarch32/UXTAB16.html#UXTAB16_T1">T1</a>
  AMED_AARCH32_ENCODING_UXTAH_A1, //!< <a href="../target/aarch32/UXTAH.html#UXTAH_A1">A1</a>
  AMED_AARCH32_ENCODING_UXTAH_T1, //!< <a href="../target/aarch32/UXTAH.html#UXTAH_T1">T1</a>
  AMED_AARCH32_ENCODING_UXTB_A1, //!< <a href="../target/aarch32/UXTB.html#UXTB_A1">A1</a>
  AMED_AARCH32_ENCODING_UXTB_T1, //!< <a href="../target/aarch32/UXTB.html#UXTB_T1">T1</a>
  AMED_AARCH32_ENCODING_UXTB_T2, //!< <a href="../target/aarch32/UXTB.html#UXTB_T2">T2</a>
  AMED_AARCH32_ENCODING_UXTB16_A1, //!< <a href="../target/aarch32/UXTB16.html#UXTB16_A1">A1</a>
  AMED_AARCH32_ENCODING_UXTB16_T1, //!< <a href="../target/aarch32/UXTB16.html#UXTB16_T1">T1</a>
  AMED_AARCH32_ENCODING_UXTH_A1, //!< <a href="../target/aarch32/UXTH.html#UXTH_A1">A1</a>
  AMED_AARCH32_ENCODING_UXTH_T1, //!< <a href="../target/aarch32/UXTH.html#UXTH_T1">T1</a>
  AMED_AARCH32_ENCODING_UXTH_T2, //!< <a href="../target/aarch32/UXTH.html#UXTH_T2">T2</a>
  AMED_AARCH32_ENCODING_WFE_A1, //!< <a href="../target/aarch32/WFE.html#WFE_A1">A1</a>
  AMED_AARCH32_ENCODING_WFE_T1, //!< <a href="../target/aarch32/WFE.html#WFE_T1">T1</a>
  AMED_AARCH32_ENCODING_WFE_T2, //!< <a href="../target/aarch32/WFE.html#WFE_T2">T2</a>
  AMED_AARCH32_ENCODING_WFI_A1, //!< <a href="../target/aarch32/WFI.html#WFI_A1">A1</a>
  AMED_AARCH32_ENCODING_WFI_T1, //!< <a href="../target/aarch32/WFI.html#WFI_T1">T1</a>
  AMED_AARCH32_ENCODING_WFI_T2, //!< <a href="../target/aarch32/WFI.html#WFI_T2">T2</a>
  AMED_AARCH32_ENCODING_YIELD_A1, //!< <a href="../target/aarch32/YIELD.html#YIELD_A1">A1</a>
  AMED_AARCH32_ENCODING_YIELD_T1, //!< <a href="../target/aarch32/YIELD.html#YIELD_T1">T1</a>
  AMED_AARCH32_ENCODING_YIELD_T2, //!< <a href="../target/aarch32/YIELD.html#YIELD_T2">T2</a>
  AMED_AARCH32_ENCODING_ADD_ADR_A1, //!< <a href="../target/aarch32/ADD_ADR.html#ADD_ADR_A1">A1</a>
  AMED_AARCH32_ENCODING_ADD_ADR_T1, //!< <a href="../target/aarch32/ADD_ADR.html#ADD_ADR_T1">T1</a>
  AMED_AARCH32_ENCODING_ADD_ADR_T3, //!< <a href="../target/aarch32/ADD_ADR.html#ADD_ADR_T3">T3</a>
  AMED_AARCH32_ENCODING_ASR_MOV_r_A1, //!< <a href="../target/aarch32/ASR_MOV_r.html#ASR_MOV_r_A1">MOV, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_ASR_MOV_r_T2, //!< <a href="../target/aarch32/ASR_MOV_r.html#ASR_MOV_r_T2">T2</a>
  AMED_AARCH32_ENCODING_ASR_MOV_r_T3, //!< <a href="../target/aarch32/ASR_MOV_r.html#ASR_MOV_r_T3">MOV, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_ASR_MOV_rr_A1, //!< <a href="../target/aarch32/ASR_MOV_rr.html#ASR_MOV_rr_A1">Not flag setting</a>
  AMED_AARCH32_ENCODING_ASR_MOV_rr_T1_ASR, //!< <a href="../target/aarch32/ASR_MOV_rr.html#ASR_MOV_rr_T1_ASR">Arithmetic shift right</a>
  AMED_AARCH32_ENCODING_ASR_MOV_rr_T2, //!< <a href="../target/aarch32/ASR_MOV_rr.html#ASR_MOV_rr_T2">Not flag setting</a>
  AMED_AARCH32_ENCODING_ASRS_MOVS_r_A1, //!< <a href="../target/aarch32/ASRS_MOV_r.html#ASRS_MOVS_r_A1">MOVS, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_ASRS_MOV_r_T2, //!< <a href="../target/aarch32/ASRS_MOV_r.html#ASRS_MOV_r_T2">T2</a>
  AMED_AARCH32_ENCODING_ASRS_MOVS_r_T3, //!< <a href="../target/aarch32/ASRS_MOV_r.html#ASRS_MOVS_r_T3">MOVS, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_ASRS_MOVS_rr_A1, //!< <a href="../target/aarch32/ASRS_MOV_rr.html#ASRS_MOVS_rr_A1">Flag setting</a>
  AMED_AARCH32_ENCODING_ASRS_MOV_rr_T1_ASR, //!< <a href="../target/aarch32/ASRS_MOV_rr.html#ASRS_MOV_rr_T1_ASR">Arithmetic shift right</a>
  AMED_AARCH32_ENCODING_ASRS_MOVS_rr_T2, //!< <a href="../target/aarch32/ASRS_MOV_rr.html#ASRS_MOVS_rr_T2">Flag setting</a>
  AMED_AARCH32_ENCODING_LSL_MOV_r_A1, //!< <a href="../target/aarch32/LSL_MOV_r.html#LSL_MOV_r_A1">MOV, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_LSL_MOV_r_T2, //!< <a href="../target/aarch32/LSL_MOV_r.html#LSL_MOV_r_T2">T2</a>
  AMED_AARCH32_ENCODING_LSL_MOV_r_T3, //!< <a href="../target/aarch32/LSL_MOV_r.html#LSL_MOV_r_T3">MOV, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_LSL_MOV_rr_A1, //!< <a href="../target/aarch32/LSL_MOV_rr.html#LSL_MOV_rr_A1">Not flag setting</a>
  AMED_AARCH32_ENCODING_LSL_MOV_rr_T1_LSL, //!< <a href="../target/aarch32/LSL_MOV_rr.html#LSL_MOV_rr_T1_LSL">Logical shift left</a>
  AMED_AARCH32_ENCODING_LSL_MOV_rr_T2, //!< <a href="../target/aarch32/LSL_MOV_rr.html#LSL_MOV_rr_T2">Not flag setting</a>
  AMED_AARCH32_ENCODING_LSLS_MOVS_r_A1, //!< <a href="../target/aarch32/LSLS_MOV_r.html#LSLS_MOVS_r_A1">MOVS, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_LSLS_MOV_r_T2, //!< <a href="../target/aarch32/LSLS_MOV_r.html#LSLS_MOV_r_T2">T2</a>
  AMED_AARCH32_ENCODING_LSLS_MOVS_r_T3, //!< <a href="../target/aarch32/LSLS_MOV_r.html#LSLS_MOVS_r_T3">MOVS, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_LSLS_MOVS_rr_A1, //!< <a href="../target/aarch32/LSLS_MOV_rr.html#LSLS_MOVS_rr_A1">Flag setting</a>
  AMED_AARCH32_ENCODING_LSLS_MOV_rr_T1_LSL, //!< <a href="../target/aarch32/LSLS_MOV_rr.html#LSLS_MOV_rr_T1_LSL">Logical shift left</a>
  AMED_AARCH32_ENCODING_LSLS_MOVS_rr_T2, //!< <a href="../target/aarch32/LSLS_MOV_rr.html#LSLS_MOVS_rr_T2">Flag setting</a>
  AMED_AARCH32_ENCODING_LSR_MOV_r_A1, //!< <a href="../target/aarch32/LSR_MOV_r.html#LSR_MOV_r_A1">MOV, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_LSR_MOV_r_T2, //!< <a href="../target/aarch32/LSR_MOV_r.html#LSR_MOV_r_T2">T2</a>
  AMED_AARCH32_ENCODING_LSR_MOV_r_T3, //!< <a href="../target/aarch32/LSR_MOV_r.html#LSR_MOV_r_T3">MOV, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_LSR_MOV_rr_A1, //!< <a href="../target/aarch32/LSR_MOV_rr.html#LSR_MOV_rr_A1">Not flag setting</a>
  AMED_AARCH32_ENCODING_LSR_MOV_rr_T1_LSR, //!< <a href="../target/aarch32/LSR_MOV_rr.html#LSR_MOV_rr_T1_LSR">Logical shift right</a>
  AMED_AARCH32_ENCODING_LSR_MOV_rr_T2, //!< <a href="../target/aarch32/LSR_MOV_rr.html#LSR_MOV_rr_T2">Not flag setting</a>
  AMED_AARCH32_ENCODING_LSRS_MOVS_r_A1, //!< <a href="../target/aarch32/LSRS_MOV_r.html#LSRS_MOVS_r_A1">MOVS, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_LSRS_MOV_r_T2, //!< <a href="../target/aarch32/LSRS_MOV_r.html#LSRS_MOV_r_T2">T2</a>
  AMED_AARCH32_ENCODING_LSRS_MOVS_r_T3, //!< <a href="../target/aarch32/LSRS_MOV_r.html#LSRS_MOVS_r_T3">MOVS, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_LSRS_MOVS_rr_A1, //!< <a href="../target/aarch32/LSRS_MOV_rr.html#LSRS_MOVS_rr_A1">Flag setting</a>
  AMED_AARCH32_ENCODING_LSRS_MOV_rr_T1_LSR, //!< <a href="../target/aarch32/LSRS_MOV_rr.html#LSRS_MOV_rr_T1_LSR">Logical shift right</a>
  AMED_AARCH32_ENCODING_LSRS_MOVS_rr_T2, //!< <a href="../target/aarch32/LSRS_MOV_rr.html#LSRS_MOVS_rr_T2">Flag setting</a>
  AMED_AARCH32_ENCODING_POP_LDM_A1, //!< <a href="../target/aarch32/POP_LDM.html#POP_LDM_A1">A1</a>
  AMED_AARCH32_ENCODING_POP_LDM_T2, //!< <a href="../target/aarch32/POP_LDM.html#POP_LDM_T2">T2</a>
  AMED_AARCH32_ENCODING_POP_LDR_i_A1_post, //!< <a href="../target/aarch32/POP_LDR_i.html#POP_LDR_i_A1_post">Post-indexed</a>
  AMED_AARCH32_ENCODING_POP_LDR_i_T4_post, //!< <a href="../target/aarch32/POP_LDR_i.html#POP_LDR_i_T4_post">Post-indexed</a>
  AMED_AARCH32_ENCODING_PUSH_STMDB_A1, //!< <a href="../target/aarch32/PUSH_STMDB.html#PUSH_STMDB_A1">A1</a>
  AMED_AARCH32_ENCODING_PUSH_STMDB_T1, //!< <a href="../target/aarch32/PUSH_STMDB.html#PUSH_STMDB_T1">T1</a>
  AMED_AARCH32_ENCODING_PUSH_STR_i_A1_pre, //!< <a href="../target/aarch32/PUSH_STR_i.html#PUSH_STR_i_A1_pre">Pre-indexed</a>
  AMED_AARCH32_ENCODING_PUSH_STR_i_T4_pre, //!< <a href="../target/aarch32/PUSH_STR_i.html#PUSH_STR_i_T4_pre">Pre-indexed</a>
  AMED_AARCH32_ENCODING_ROR_MOV_r_A1, //!< <a href="../target/aarch32/ROR_MOV_r.html#ROR_MOV_r_A1">MOV, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_ROR_MOV_r_T3, //!< <a href="../target/aarch32/ROR_MOV_r.html#ROR_MOV_r_T3">MOV, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_ROR_MOV_rr_A1, //!< <a href="../target/aarch32/ROR_MOV_rr.html#ROR_MOV_rr_A1">Not flag setting</a>
  AMED_AARCH32_ENCODING_ROR_MOV_rr_T1_ROR, //!< <a href="../target/aarch32/ROR_MOV_rr.html#ROR_MOV_rr_T1_ROR">Rotate right</a>
  AMED_AARCH32_ENCODING_ROR_MOV_rr_T2, //!< <a href="../target/aarch32/ROR_MOV_rr.html#ROR_MOV_rr_T2">Not flag setting</a>
  AMED_AARCH32_ENCODING_RORS_MOVS_r_A1, //!< <a href="../target/aarch32/RORS_MOV_r.html#RORS_MOVS_r_A1">MOVS, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_RORS_MOVS_r_T3, //!< <a href="../target/aarch32/RORS_MOV_r.html#RORS_MOVS_r_T3">MOVS, shift or rotate by value</a>
  AMED_AARCH32_ENCODING_RORS_MOVS_rr_A1, //!< <a href="../target/aarch32/RORS_MOV_rr.html#RORS_MOVS_rr_A1">Flag setting</a>
  AMED_AARCH32_ENCODING_RORS_MOV_rr_T1_ROR, //!< <a href="../target/aarch32/RORS_MOV_rr.html#RORS_MOV_rr_T1_ROR">Rotate right</a>
  AMED_AARCH32_ENCODING_RORS_MOVS_rr_T2, //!< <a href="../target/aarch32/RORS_MOV_rr.html#RORS_MOVS_rr_T2">Flag setting</a>
  AMED_AARCH32_ENCODING_RRX_MOV_r_A1_RRX, //!< <a href="../target/aarch32/RRX_MOV_r.html#RRX_MOV_r_A1_RRX">MOV, rotate right with extend</a>
  AMED_AARCH32_ENCODING_RRX_MOV_r_T3_RRX, //!< <a href="../target/aarch32/RRX_MOV_r.html#RRX_MOV_r_T3_RRX">MOV, rotate right with extend</a>
  AMED_AARCH32_ENCODING_RRXS_MOVS_r_A1_RRX, //!< <a href="../target/aarch32/RRXS_MOV_r.html#RRXS_MOVS_r_A1_RRX">MOVS, rotate right with extend</a>
  AMED_AARCH32_ENCODING_RRXS_MOVS_r_T3_RRX, //!< <a href="../target/aarch32/RRXS_MOV_r.html#RRXS_MOVS_r_T3_RRX">MOVS, rotate right with extend</a>
  AMED_AARCH32_ENCODING_SUB_ADR_A2, //!< <a href="../target/aarch32/SUB_ADR.html#SUB_ADR_A2">A2</a>
  AMED_AARCH32_ENCODING_SUB_ADR_T2, //!< <a href="../target/aarch32/SUB_ADR.html#SUB_ADR_T2">T2</a>
  AMED_AARCH32_ENCODING_AESD_A1, //!< <a href="../target/aarch32/AESD.html#AESD_A1">A1</a>
  AMED_AARCH32_ENCODING_AESD_T1, //!< <a href="../target/aarch32/AESD.html#AESD_T1">T1</a>
  AMED_AARCH32_ENCODING_AESE_A1, //!< <a href="../target/aarch32/AESE.html#AESE_A1">A1</a>
  AMED_AARCH32_ENCODING_AESE_T1, //!< <a href="../target/aarch32/AESE.html#AESE_T1">T1</a>
  AMED_AARCH32_ENCODING_AESIMC_A1, //!< <a href="../target/aarch32/AESIMC.html#AESIMC_A1">A1</a>
  AMED_AARCH32_ENCODING_AESIMC_T1, //!< <a href="../target/aarch32/AESIMC.html#AESIMC_T1">T1</a>
  AMED_AARCH32_ENCODING_AESMC_A1, //!< <a href="../target/aarch32/AESMC.html#AESMC_A1">A1</a>
  AMED_AARCH32_ENCODING_AESMC_T1, //!< <a href="../target/aarch32/AESMC.html#AESMC_T1">T1</a>
  AMED_AARCH32_ENCODING_FLDMDBX_A1, //!< <a href="../target/aarch32/FLDMX.html#FLDMDBX_A1">Decrement Before</a>
  AMED_AARCH32_ENCODING_FLDMIAX_A1, //!< <a href="../target/aarch32/FLDMX.html#FLDMIAX_A1">Increment After</a>
  AMED_AARCH32_ENCODING_FLDMDBX_T1, //!< <a href="../target/aarch32/FLDMX.html#FLDMDBX_T1">Decrement Before</a>
  AMED_AARCH32_ENCODING_FLDMIAX_T1, //!< <a href="../target/aarch32/FLDMX.html#FLDMIAX_T1">Increment After</a>
  AMED_AARCH32_ENCODING_FSTMDBX_A1, //!< <a href="../target/aarch32/FSTMX.html#FSTMDBX_A1">Decrement Before</a>
  AMED_AARCH32_ENCODING_FSTMIAX_A1, //!< <a href="../target/aarch32/FSTMX.html#FSTMIAX_A1">Increment After</a>
  AMED_AARCH32_ENCODING_FSTMDBX_T1, //!< <a href="../target/aarch32/FSTMX.html#FSTMDBX_T1">Decrement Before</a>
  AMED_AARCH32_ENCODING_FSTMIAX_T1, //!< <a href="../target/aarch32/FSTMX.html#FSTMIAX_T1">Increment After</a>
  AMED_AARCH32_ENCODING_SHA1C_A1, //!< <a href="../target/aarch32/SHA1C.html#SHA1C_A1">A1</a>
  AMED_AARCH32_ENCODING_SHA1C_T1, //!< <a href="../target/aarch32/SHA1C.html#SHA1C_T1">T1</a>
  AMED_AARCH32_ENCODING_SHA1H_A1, //!< <a href="../target/aarch32/SHA1H.html#SHA1H_A1">A1</a>
  AMED_AARCH32_ENCODING_SHA1H_T1, //!< <a href="../target/aarch32/SHA1H.html#SHA1H_T1">T1</a>
  AMED_AARCH32_ENCODING_SHA1M_A1, //!< <a href="../target/aarch32/SHA1M.html#SHA1M_A1">A1</a>
  AMED_AARCH32_ENCODING_SHA1M_T1, //!< <a href="../target/aarch32/SHA1M.html#SHA1M_T1">T1</a>
  AMED_AARCH32_ENCODING_SHA1P_A1, //!< <a href="../target/aarch32/SHA1P.html#SHA1P_A1">A1</a>
  AMED_AARCH32_ENCODING_SHA1P_T1, //!< <a href="../target/aarch32/SHA1P.html#SHA1P_T1">T1</a>
  AMED_AARCH32_ENCODING_SHA1SU0_A1, //!< <a href="../target/aarch32/SHA1SU0.html#SHA1SU0_A1">A1</a>
  AMED_AARCH32_ENCODING_SHA1SU0_T1, //!< <a href="../target/aarch32/SHA1SU0.html#SHA1SU0_T1">T1</a>
  AMED_AARCH32_ENCODING_SHA1SU1_A1, //!< <a href="../target/aarch32/SHA1SU1.html#SHA1SU1_A1">A1</a>
  AMED_AARCH32_ENCODING_SHA1SU1_T1, //!< <a href="../target/aarch32/SHA1SU1.html#SHA1SU1_T1">T1</a>
  AMED_AARCH32_ENCODING_SHA256H_A1, //!< <a href="../target/aarch32/SHA256H.html#SHA256H_A1">A1</a>
  AMED_AARCH32_ENCODING_SHA256H_T1, //!< <a href="../target/aarch32/SHA256H.html#SHA256H_T1">T1</a>
  AMED_AARCH32_ENCODING_SHA256H2_A1, //!< <a href="../target/aarch32/SHA256H2.html#SHA256H2_A1">A1</a>
  AMED_AARCH32_ENCODING_SHA256H2_T1, //!< <a href="../target/aarch32/SHA256H2.html#SHA256H2_T1">T1</a>
  AMED_AARCH32_ENCODING_SHA256SU0_A1, //!< <a href="../target/aarch32/SHA256SU0.html#SHA256SU0_A1">A1</a>
  AMED_AARCH32_ENCODING_SHA256SU0_T1, //!< <a href="../target/aarch32/SHA256SU0.html#SHA256SU0_T1">T1</a>
  AMED_AARCH32_ENCODING_SHA256SU1_A1, //!< <a href="../target/aarch32/SHA256SU1.html#SHA256SU1_A1">A1</a>
  AMED_AARCH32_ENCODING_SHA256SU1_T1, //!< <a href="../target/aarch32/SHA256SU1.html#SHA256SU1_T1">T1</a>
  AMED_AARCH32_ENCODING_VST4_1_A3_nowb, //!< <a href="../target/aarch32/ST4_1.html#VST4_1_A3_nowb">A3</a>
  AMED_AARCH32_ENCODING_VABA_A1_D, //!< <a href="../target/aarch32/VABA.html#VABA_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VABA_A1_Q, //!< <a href="../target/aarch32/VABA.html#VABA_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VABA_T1_D, //!< <a href="../target/aarch32/VABA.html#VABA_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VABA_T1_Q, //!< <a href="../target/aarch32/VABA.html#VABA_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VABAL_A1, //!< <a href="../target/aarch32/VABAL.html#VABAL_A1">A1</a>
  AMED_AARCH32_ENCODING_VABAL_T1, //!< <a href="../target/aarch32/VABAL.html#VABAL_T1">T1</a>
  AMED_AARCH32_ENCODING_VABD_f_A1_D, //!< <a href="../target/aarch32/VABD_f.html#VABD_f_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VABD_f_A1_Q, //!< <a href="../target/aarch32/VABD_f.html#VABD_f_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VABD_f_T1_D, //!< <a href="../target/aarch32/VABD_f.html#VABD_f_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VABD_f_T1_Q, //!< <a href="../target/aarch32/VABD_f.html#VABD_f_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VABD_i_A1_D, //!< <a href="../target/aarch32/VABD_i.html#VABD_i_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VABD_i_A1_Q, //!< <a href="../target/aarch32/VABD_i.html#VABD_i_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VABD_i_T1_D, //!< <a href="../target/aarch32/VABD_i.html#VABD_i_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VABD_i_T1_Q, //!< <a href="../target/aarch32/VABD_i.html#VABD_i_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VABDL_i_A1, //!< <a href="../target/aarch32/VABDL_i.html#VABDL_i_A1">A1</a>
  AMED_AARCH32_ENCODING_VABDL_i_T1, //!< <a href="../target/aarch32/VABDL_i.html#VABDL_i_T1">T1</a>
  AMED_AARCH32_ENCODING_VABS_A1_D, //!< <a href="../target/aarch32/VABS.html#VABS_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VABS_A1_Q, //!< <a href="../target/aarch32/VABS.html#VABS_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VABS_A2_H, //!< <a href="../target/aarch32/VABS.html#VABS_A2_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VABS_A2_S, //!< <a href="../target/aarch32/VABS.html#VABS_A2_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VABS_A2_D, //!< <a href="../target/aarch32/VABS.html#VABS_A2_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VABS_T1_D, //!< <a href="../target/aarch32/VABS.html#VABS_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VABS_T1_Q, //!< <a href="../target/aarch32/VABS.html#VABS_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VABS_T2_H, //!< <a href="../target/aarch32/VABS.html#VABS_T2_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VABS_T2_S, //!< <a href="../target/aarch32/VABS.html#VABS_T2_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VABS_T2_D, //!< <a href="../target/aarch32/VABS.html#VABS_T2_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VACGE_A1_D, //!< <a href="../target/aarch32/VACGE.html#VACGE_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VACGE_A1_Q, //!< <a href="../target/aarch32/VACGE.html#VACGE_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VACGE_T1_D, //!< <a href="../target/aarch32/VACGE.html#VACGE_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VACGE_T1_Q, //!< <a href="../target/aarch32/VACGE.html#VACGE_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VACGT_A1_D, //!< <a href="../target/aarch32/VACGT.html#VACGT_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VACGT_A1_Q, //!< <a href="../target/aarch32/VACGT.html#VACGT_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VACGT_T1_D, //!< <a href="../target/aarch32/VACGT.html#VACGT_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VACGT_T1_Q, //!< <a href="../target/aarch32/VACGT.html#VACGT_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VADD_f_A1_D, //!< <a href="../target/aarch32/VADD_f.html#VADD_f_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VADD_f_A1_Q, //!< <a href="../target/aarch32/VADD_f.html#VADD_f_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VADD_f_A2_H, //!< <a href="../target/aarch32/VADD_f.html#VADD_f_A2_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VADD_f_A2_S, //!< <a href="../target/aarch32/VADD_f.html#VADD_f_A2_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VADD_f_A2_D, //!< <a href="../target/aarch32/VADD_f.html#VADD_f_A2_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VADD_f_T1_D, //!< <a href="../target/aarch32/VADD_f.html#VADD_f_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VADD_f_T1_Q, //!< <a href="../target/aarch32/VADD_f.html#VADD_f_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VADD_f_T2_H, //!< <a href="../target/aarch32/VADD_f.html#VADD_f_T2_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VADD_f_T2_S, //!< <a href="../target/aarch32/VADD_f.html#VADD_f_T2_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VADD_f_T2_D, //!< <a href="../target/aarch32/VADD_f.html#VADD_f_T2_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VADD_i_A1_D, //!< <a href="../target/aarch32/VADD_i.html#VADD_i_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VADD_i_A1_Q, //!< <a href="../target/aarch32/VADD_i.html#VADD_i_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VADD_i_T1_D, //!< <a href="../target/aarch32/VADD_i.html#VADD_i_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VADD_i_T1_Q, //!< <a href="../target/aarch32/VADD_i.html#VADD_i_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VADDHN_A1, //!< <a href="../target/aarch32/VADDHN.html#VADDHN_A1">A1</a>
  AMED_AARCH32_ENCODING_VADDHN_T1, //!< <a href="../target/aarch32/VADDHN.html#VADDHN_T1">T1</a>
  AMED_AARCH32_ENCODING_VADDL_A1, //!< <a href="../target/aarch32/VADDL.html#VADDL_A1">A1</a>
  AMED_AARCH32_ENCODING_VADDL_T1, //!< <a href="../target/aarch32/VADDL.html#VADDL_T1">T1</a>
  AMED_AARCH32_ENCODING_VADDW_A1, //!< <a href="../target/aarch32/VADDW.html#VADDW_A1">A1</a>
  AMED_AARCH32_ENCODING_VADDW_T1, //!< <a href="../target/aarch32/VADDW.html#VADDW_T1">T1</a>
  AMED_AARCH32_ENCODING_VAND_r_A1_D, //!< <a href="../target/aarch32/VAND_r.html#VAND_r_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VAND_r_A1_Q, //!< <a href="../target/aarch32/VAND_r.html#VAND_r_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VAND_r_T1_D, //!< <a href="../target/aarch32/VAND_r.html#VAND_r_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VAND_r_T1_Q, //!< <a href="../target/aarch32/VAND_r.html#VAND_r_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VBIC_i_A1_D, //!< <a href="../target/aarch32/VBIC_i.html#VBIC_i_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VBIC_i_A1_Q, //!< <a href="../target/aarch32/VBIC_i.html#VBIC_i_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VBIC_i_A2_D, //!< <a href="../target/aarch32/VBIC_i.html#VBIC_i_A2_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VBIC_i_A2_Q, //!< <a href="../target/aarch32/VBIC_i.html#VBIC_i_A2_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VBIC_i_T1_D, //!< <a href="../target/aarch32/VBIC_i.html#VBIC_i_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VBIC_i_T1_Q, //!< <a href="../target/aarch32/VBIC_i.html#VBIC_i_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VBIC_i_T2_D, //!< <a href="../target/aarch32/VBIC_i.html#VBIC_i_T2_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VBIC_i_T2_Q, //!< <a href="../target/aarch32/VBIC_i.html#VBIC_i_T2_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VBIC_r_A1_D, //!< <a href="../target/aarch32/VBIC_r.html#VBIC_r_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VBIC_r_A1_Q, //!< <a href="../target/aarch32/VBIC_r.html#VBIC_r_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VBIC_r_T1_D, //!< <a href="../target/aarch32/VBIC_r.html#VBIC_r_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VBIC_r_T1_Q, //!< <a href="../target/aarch32/VBIC_r.html#VBIC_r_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VBIF_A1_D, //!< <a href="../target/aarch32/VBIF.html#VBIF_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VBIF_A1_Q, //!< <a href="../target/aarch32/VBIF.html#VBIF_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VBIF_T1_D, //!< <a href="../target/aarch32/VBIF.html#VBIF_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VBIF_T1_Q, //!< <a href="../target/aarch32/VBIF.html#VBIF_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VBIT_A1_D, //!< <a href="../target/aarch32/VBIT.html#VBIT_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VBIT_A1_Q, //!< <a href="../target/aarch32/VBIT.html#VBIT_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VBIT_T1_D, //!< <a href="../target/aarch32/VBIT.html#VBIT_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VBIT_T1_Q, //!< <a href="../target/aarch32/VBIT.html#VBIT_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VBSL_A1_D, //!< <a href="../target/aarch32/VBSL.html#VBSL_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VBSL_A1_Q, //!< <a href="../target/aarch32/VBSL.html#VBSL_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VBSL_T1_D, //!< <a href="../target/aarch32/VBSL.html#VBSL_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VBSL_T1_Q, //!< <a href="../target/aarch32/VBSL.html#VBSL_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCADD_A1_D, //!< <a href="../target/aarch32/VCADD.html#VCADD_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCADD_A1_Q, //!< <a href="../target/aarch32/VCADD.html#VCADD_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCADD_T1_D, //!< <a href="../target/aarch32/VCADD.html#VCADD_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCADD_T1_Q, //!< <a href="../target/aarch32/VCADD.html#VCADD_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCEQ_i_A1_D, //!< <a href="../target/aarch32/VCEQ_i.html#VCEQ_i_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCEQ_i_A1_Q, //!< <a href="../target/aarch32/VCEQ_i.html#VCEQ_i_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCEQ_i_T1_D, //!< <a href="../target/aarch32/VCEQ_i.html#VCEQ_i_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCEQ_i_T1_Q, //!< <a href="../target/aarch32/VCEQ_i.html#VCEQ_i_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCEQ_r_A1_D, //!< <a href="../target/aarch32/VCEQ_r.html#VCEQ_r_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCEQ_r_A1_Q, //!< <a href="../target/aarch32/VCEQ_r.html#VCEQ_r_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCEQ_r_A2_D, //!< <a href="../target/aarch32/VCEQ_r.html#VCEQ_r_A2_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCEQ_r_A2_Q, //!< <a href="../target/aarch32/VCEQ_r.html#VCEQ_r_A2_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCEQ_r_T1_D, //!< <a href="../target/aarch32/VCEQ_r.html#VCEQ_r_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCEQ_r_T1_Q, //!< <a href="../target/aarch32/VCEQ_r.html#VCEQ_r_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCEQ_r_T2_D, //!< <a href="../target/aarch32/VCEQ_r.html#VCEQ_r_T2_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCEQ_r_T2_Q, //!< <a href="../target/aarch32/VCEQ_r.html#VCEQ_r_T2_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCGE_i_A1_D, //!< <a href="../target/aarch32/VCGE_i.html#VCGE_i_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCGE_i_A1_Q, //!< <a href="../target/aarch32/VCGE_i.html#VCGE_i_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCGE_i_T1_D, //!< <a href="../target/aarch32/VCGE_i.html#VCGE_i_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCGE_i_T1_Q, //!< <a href="../target/aarch32/VCGE_i.html#VCGE_i_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCGE_r_A1_D, //!< <a href="../target/aarch32/VCGE_r.html#VCGE_r_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCGE_r_A1_Q, //!< <a href="../target/aarch32/VCGE_r.html#VCGE_r_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCGE_r_A2_D, //!< <a href="../target/aarch32/VCGE_r.html#VCGE_r_A2_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCGE_r_A2_Q, //!< <a href="../target/aarch32/VCGE_r.html#VCGE_r_A2_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCGE_r_T1_D, //!< <a href="../target/aarch32/VCGE_r.html#VCGE_r_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCGE_r_T1_Q, //!< <a href="../target/aarch32/VCGE_r.html#VCGE_r_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCGE_r_T2_D, //!< <a href="../target/aarch32/VCGE_r.html#VCGE_r_T2_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCGE_r_T2_Q, //!< <a href="../target/aarch32/VCGE_r.html#VCGE_r_T2_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCGT_i_A1_D, //!< <a href="../target/aarch32/VCGT_i.html#VCGT_i_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCGT_i_A1_Q, //!< <a href="../target/aarch32/VCGT_i.html#VCGT_i_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCGT_i_T1_D, //!< <a href="../target/aarch32/VCGT_i.html#VCGT_i_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCGT_i_T1_Q, //!< <a href="../target/aarch32/VCGT_i.html#VCGT_i_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCGT_r_A1_D, //!< <a href="../target/aarch32/VCGT_r.html#VCGT_r_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCGT_r_A1_Q, //!< <a href="../target/aarch32/VCGT_r.html#VCGT_r_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCGT_r_A2_D, //!< <a href="../target/aarch32/VCGT_r.html#VCGT_r_A2_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCGT_r_A2_Q, //!< <a href="../target/aarch32/VCGT_r.html#VCGT_r_A2_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCGT_r_T1_D, //!< <a href="../target/aarch32/VCGT_r.html#VCGT_r_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCGT_r_T1_Q, //!< <a href="../target/aarch32/VCGT_r.html#VCGT_r_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCGT_r_T2_D, //!< <a href="../target/aarch32/VCGT_r.html#VCGT_r_T2_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCGT_r_T2_Q, //!< <a href="../target/aarch32/VCGT_r.html#VCGT_r_T2_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCLE_i_A1_D, //!< <a href="../target/aarch32/VCLE_i.html#VCLE_i_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCLE_i_A1_Q, //!< <a href="../target/aarch32/VCLE_i.html#VCLE_i_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCLE_i_T1_D, //!< <a href="../target/aarch32/VCLE_i.html#VCLE_i_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCLE_i_T1_Q, //!< <a href="../target/aarch32/VCLE_i.html#VCLE_i_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCLS_A1_D, //!< <a href="../target/aarch32/VCLS.html#VCLS_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCLS_A1_Q, //!< <a href="../target/aarch32/VCLS.html#VCLS_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCLS_T1_D, //!< <a href="../target/aarch32/VCLS.html#VCLS_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCLS_T1_Q, //!< <a href="../target/aarch32/VCLS.html#VCLS_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCLT_i_A1_D, //!< <a href="../target/aarch32/VCLT_i.html#VCLT_i_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCLT_i_A1_Q, //!< <a href="../target/aarch32/VCLT_i.html#VCLT_i_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCLT_i_T1_D, //!< <a href="../target/aarch32/VCLT_i.html#VCLT_i_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCLT_i_T1_Q, //!< <a href="../target/aarch32/VCLT_i.html#VCLT_i_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCLZ_A1_D, //!< <a href="../target/aarch32/VCLZ.html#VCLZ_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCLZ_A1_Q, //!< <a href="../target/aarch32/VCLZ.html#VCLZ_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCLZ_T1_D, //!< <a href="../target/aarch32/VCLZ.html#VCLZ_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCLZ_T1_Q, //!< <a href="../target/aarch32/VCLZ.html#VCLZ_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCMLA_A1_D, //!< <a href="../target/aarch32/VCMLA.html#VCMLA_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCMLA_A1_Q, //!< <a href="../target/aarch32/VCMLA.html#VCMLA_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCMLA_T1_D, //!< <a href="../target/aarch32/VCMLA.html#VCMLA_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCMLA_T1_Q, //!< <a href="../target/aarch32/VCMLA.html#VCMLA_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCMLA_s_A1_DH, //!< <a href="../target/aarch32/VCMLA_s.html#VCMLA_s_A1_DH">64-bit SIMD vector of half-precision floating-point</a>
  AMED_AARCH32_ENCODING_VCMLA_s_A1_DS, //!< <a href="../target/aarch32/VCMLA_s.html#VCMLA_s_A1_DS">64-bit SIMD vector of single-precision floating-point</a>
  AMED_AARCH32_ENCODING_VCMLA_s_A1_QH, //!< <a href="../target/aarch32/VCMLA_s.html#VCMLA_s_A1_QH">128-bit SIMD vector of half-precision floating-point</a>
  AMED_AARCH32_ENCODING_VCMLA_s_A1_QS, //!< <a href="../target/aarch32/VCMLA_s.html#VCMLA_s_A1_QS">128-bit SIMD vector of single-precision floating-point</a>
  AMED_AARCH32_ENCODING_VCMLA_s_T1_DH, //!< <a href="../target/aarch32/VCMLA_s.html#VCMLA_s_T1_DH">64-bit SIMD vector of half-precision floating-point</a>
  AMED_AARCH32_ENCODING_VCMLA_s_T1_DS, //!< <a href="../target/aarch32/VCMLA_s.html#VCMLA_s_T1_DS">64-bit SIMD vector of single-precision floating-point</a>
  AMED_AARCH32_ENCODING_VCMLA_s_T1_QH, //!< <a href="../target/aarch32/VCMLA_s.html#VCMLA_s_T1_QH">128-bit SIMD vector of half-precision floating-point</a>
  AMED_AARCH32_ENCODING_VCMLA_s_T1_QS, //!< <a href="../target/aarch32/VCMLA_s.html#VCMLA_s_T1_QS">128-bit SIMD vector of single-precision floating-point</a>
  AMED_AARCH32_ENCODING_VCMP_A1_H, //!< <a href="../target/aarch32/VCMP.html#VCMP_A1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VCMP_A1_S, //!< <a href="../target/aarch32/VCMP.html#VCMP_A1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VCMP_A1_D, //!< <a href="../target/aarch32/VCMP.html#VCMP_A1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VCMP_A2_H, //!< <a href="../target/aarch32/VCMP.html#VCMP_A2_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VCMP_A2_S, //!< <a href="../target/aarch32/VCMP.html#VCMP_A2_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VCMP_A2_D, //!< <a href="../target/aarch32/VCMP.html#VCMP_A2_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VCMP_T1_H, //!< <a href="../target/aarch32/VCMP.html#VCMP_T1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VCMP_T1_S, //!< <a href="../target/aarch32/VCMP.html#VCMP_T1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VCMP_T1_D, //!< <a href="../target/aarch32/VCMP.html#VCMP_T1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VCMP_T2_H, //!< <a href="../target/aarch32/VCMP.html#VCMP_T2_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VCMP_T2_S, //!< <a href="../target/aarch32/VCMP.html#VCMP_T2_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VCMP_T2_D, //!< <a href="../target/aarch32/VCMP.html#VCMP_T2_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VCMPE_A1_H, //!< <a href="../target/aarch32/VCMPE.html#VCMPE_A1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VCMPE_A1_S, //!< <a href="../target/aarch32/VCMPE.html#VCMPE_A1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VCMPE_A1_D, //!< <a href="../target/aarch32/VCMPE.html#VCMPE_A1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VCMPE_A2_H, //!< <a href="../target/aarch32/VCMPE.html#VCMPE_A2_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VCMPE_A2_S, //!< <a href="../target/aarch32/VCMPE.html#VCMPE_A2_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VCMPE_A2_D, //!< <a href="../target/aarch32/VCMPE.html#VCMPE_A2_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VCMPE_T1_H, //!< <a href="../target/aarch32/VCMPE.html#VCMPE_T1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VCMPE_T1_S, //!< <a href="../target/aarch32/VCMPE.html#VCMPE_T1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VCMPE_T1_D, //!< <a href="../target/aarch32/VCMPE.html#VCMPE_T1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VCMPE_T2_H, //!< <a href="../target/aarch32/VCMPE.html#VCMPE_T2_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VCMPE_T2_S, //!< <a href="../target/aarch32/VCMPE.html#VCMPE_T2_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VCMPE_T2_D, //!< <a href="../target/aarch32/VCMPE.html#VCMPE_T2_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VCNT_A1_D, //!< <a href="../target/aarch32/VCNT.html#VCNT_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCNT_A1_Q, //!< <a href="../target/aarch32/VCNT.html#VCNT_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCNT_T1_D, //!< <a href="../target/aarch32/VCNT.html#VCNT_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCNT_T1_Q, //!< <a href="../target/aarch32/VCNT.html#VCNT_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCVT_bfs_A1, //!< <a href="../target/aarch32/VCVT_bfs.html#VCVT_bfs_A1">A1</a>
  AMED_AARCH32_ENCODING_VCVT_bfs_T1, //!< <a href="../target/aarch32/VCVT_bfs.html#VCVT_bfs_T1">T1</a>
  AMED_AARCH32_ENCODING_VCVT_ds_A1, //!< <a href="../target/aarch32/VCVT_ds.html#VCVT_ds_A1">Single-precision to double-precision</a>
  AMED_AARCH32_ENCODING_VCVT_sd_A1, //!< <a href="../target/aarch32/VCVT_ds.html#VCVT_sd_A1">Double-precision to single-precision</a>
  AMED_AARCH32_ENCODING_VCVT_ds_T1, //!< <a href="../target/aarch32/VCVT_ds.html#VCVT_ds_T1">Single-precision to double-precision</a>
  AMED_AARCH32_ENCODING_VCVT_sd_T1, //!< <a href="../target/aarch32/VCVT_ds.html#VCVT_sd_T1">Double-precision to single-precision</a>
  AMED_AARCH32_ENCODING_VCVT_sh_A1, //!< <a href="../target/aarch32/VCVT_hs.html#VCVT_sh_A1">Half-precision to single-precision</a>
  AMED_AARCH32_ENCODING_VCVT_hs_A1, //!< <a href="../target/aarch32/VCVT_hs.html#VCVT_hs_A1">Single-precision to half-precision</a>
  AMED_AARCH32_ENCODING_VCVT_sh_T1, //!< <a href="../target/aarch32/VCVT_hs.html#VCVT_sh_T1">Half-precision to single-precision</a>
  AMED_AARCH32_ENCODING_VCVT_hs_T1, //!< <a href="../target/aarch32/VCVT_hs.html#VCVT_hs_T1">Single-precision to half-precision</a>
  AMED_AARCH32_ENCODING_VCVT_is_A1_D, //!< <a href="../target/aarch32/VCVT_is.html#VCVT_is_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCVT_is_A1_Q, //!< <a href="../target/aarch32/VCVT_is.html#VCVT_is_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCVT_is_T1_D, //!< <a href="../target/aarch32/VCVT_is.html#VCVT_is_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCVT_is_T1_Q, //!< <a href="../target/aarch32/VCVT_is.html#VCVT_is_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCVT_uiv_A1_H, //!< <a href="../target/aarch32/VCVT_iv.html#VCVT_uiv_A1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVT_siv_A1_H, //!< <a href="../target/aarch32/VCVT_iv.html#VCVT_siv_A1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVT_uiv_A1_S, //!< <a href="../target/aarch32/VCVT_iv.html#VCVT_uiv_A1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVT_siv_A1_S, //!< <a href="../target/aarch32/VCVT_iv.html#VCVT_siv_A1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVT_uiv_A1_D, //!< <a href="../target/aarch32/VCVT_iv.html#VCVT_uiv_A1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVT_siv_A1_D, //!< <a href="../target/aarch32/VCVT_iv.html#VCVT_siv_A1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVT_uiv_T1_H, //!< <a href="../target/aarch32/VCVT_iv.html#VCVT_uiv_T1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVT_siv_T1_H, //!< <a href="../target/aarch32/VCVT_iv.html#VCVT_siv_T1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVT_uiv_T1_S, //!< <a href="../target/aarch32/VCVT_iv.html#VCVT_uiv_T1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVT_siv_T1_S, //!< <a href="../target/aarch32/VCVT_iv.html#VCVT_siv_T1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVT_uiv_T1_D, //!< <a href="../target/aarch32/VCVT_iv.html#VCVT_uiv_T1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVT_siv_T1_D, //!< <a href="../target/aarch32/VCVT_iv.html#VCVT_siv_T1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVT_vi_A1_H, //!< <a href="../target/aarch32/VCVT_vi.html#VCVT_vi_A1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVT_vi_A1_S, //!< <a href="../target/aarch32/VCVT_vi.html#VCVT_vi_A1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVT_vi_A1_D, //!< <a href="../target/aarch32/VCVT_vi.html#VCVT_vi_A1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVT_vi_T1_H, //!< <a href="../target/aarch32/VCVT_vi.html#VCVT_vi_T1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVT_vi_T1_S, //!< <a href="../target/aarch32/VCVT_vi.html#VCVT_vi_T1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVT_vi_T1_D, //!< <a href="../target/aarch32/VCVT_vi.html#VCVT_vi_T1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVT_xs_A1_D, //!< <a href="../target/aarch32/VCVT_xs.html#VCVT_xs_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCVT_xs_A1_Q, //!< <a href="../target/aarch32/VCVT_xs.html#VCVT_xs_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCVT_xs_T1_D, //!< <a href="../target/aarch32/VCVT_xs.html#VCVT_xs_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCVT_xs_T1_Q, //!< <a href="../target/aarch32/VCVT_xs.html#VCVT_xs_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCVT_toxv_A1_H, //!< <a href="../target/aarch32/VCVT_xv.html#VCVT_toxv_A1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVT_xv_A1_H, //!< <a href="../target/aarch32/VCVT_xv.html#VCVT_xv_A1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVT_toxv_A1_S, //!< <a href="../target/aarch32/VCVT_xv.html#VCVT_toxv_A1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVT_xv_A1_S, //!< <a href="../target/aarch32/VCVT_xv.html#VCVT_xv_A1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVT_toxv_A1_D, //!< <a href="../target/aarch32/VCVT_xv.html#VCVT_toxv_A1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVT_xv_A1_D, //!< <a href="../target/aarch32/VCVT_xv.html#VCVT_xv_A1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVT_toxv_T1_H, //!< <a href="../target/aarch32/VCVT_xv.html#VCVT_toxv_T1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVT_xv_T1_H, //!< <a href="../target/aarch32/VCVT_xv.html#VCVT_xv_T1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVT_toxv_T1_S, //!< <a href="../target/aarch32/VCVT_xv.html#VCVT_toxv_T1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVT_xv_T1_S, //!< <a href="../target/aarch32/VCVT_xv.html#VCVT_xv_T1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVT_toxv_T1_D, //!< <a href="../target/aarch32/VCVT_xv.html#VCVT_toxv_T1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVT_xv_T1_D, //!< <a href="../target/aarch32/VCVT_xv.html#VCVT_xv_T1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVTA_asimd_A1_D, //!< <a href="../target/aarch32/VCVTA_asimd.html#VCVTA_asimd_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCVTA_asimd_A1_Q, //!< <a href="../target/aarch32/VCVTA_asimd.html#VCVTA_asimd_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCVTA_asimd_T1_D, //!< <a href="../target/aarch32/VCVTA_asimd.html#VCVTA_asimd_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCVTA_asimd_T1_Q, //!< <a href="../target/aarch32/VCVTA_asimd.html#VCVTA_asimd_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCVTA_vfp_A1_H, //!< <a href="../target/aarch32/VCVTA_vfp.html#VCVTA_vfp_A1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVTA_vfp_A1_S, //!< <a href="../target/aarch32/VCVTA_vfp.html#VCVTA_vfp_A1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVTA_vfp_A1_D, //!< <a href="../target/aarch32/VCVTA_vfp.html#VCVTA_vfp_A1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVTA_vfp_T1_H, //!< <a href="../target/aarch32/VCVTA_vfp.html#VCVTA_vfp_T1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVTA_vfp_T1_S, //!< <a href="../target/aarch32/VCVTA_vfp.html#VCVTA_vfp_T1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVTA_vfp_T1_D, //!< <a href="../target/aarch32/VCVTA_vfp.html#VCVTA_vfp_T1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVTB_A1_SH, //!< <a href="../target/aarch32/VCVTB.html#VCVTB_A1_SH">Half-precision to single-precision</a>
  AMED_AARCH32_ENCODING_VCVTB_A1_DH, //!< <a href="../target/aarch32/VCVTB.html#VCVTB_A1_DH">Half-precision to double-precision</a>
  AMED_AARCH32_ENCODING_VCVTB_A1_HS, //!< <a href="../target/aarch32/VCVTB.html#VCVTB_A1_HS">Single-precision to half-precision</a>
  AMED_AARCH32_ENCODING_VCVTB_A1_HD, //!< <a href="../target/aarch32/VCVTB.html#VCVTB_A1_HD">Double-precision to half-precision</a>
  AMED_AARCH32_ENCODING_VCVTB_T1_SH, //!< <a href="../target/aarch32/VCVTB.html#VCVTB_T1_SH">Half-precision to single-precision</a>
  AMED_AARCH32_ENCODING_VCVTB_T1_DH, //!< <a href="../target/aarch32/VCVTB.html#VCVTB_T1_DH">Half-precision to double-precision</a>
  AMED_AARCH32_ENCODING_VCVTB_T1_HS, //!< <a href="../target/aarch32/VCVTB.html#VCVTB_T1_HS">Single-precision to half-precision</a>
  AMED_AARCH32_ENCODING_VCVTB_T1_HD, //!< <a href="../target/aarch32/VCVTB.html#VCVTB_T1_HD">Double-precision to half-precision</a>
  AMED_AARCH32_ENCODING_VCVTB_A1_bfs, //!< <a href="../target/aarch32/VCVTB_bfs.html#VCVTB_A1_bfs">A1</a>
  AMED_AARCH32_ENCODING_VCVTB_T1_bfs, //!< <a href="../target/aarch32/VCVTB_bfs.html#VCVTB_T1_bfs">T1</a>
  AMED_AARCH32_ENCODING_VCVTM_asimd_A1_D, //!< <a href="../target/aarch32/VCVTM_asimd.html#VCVTM_asimd_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCVTM_asimd_A1_Q, //!< <a href="../target/aarch32/VCVTM_asimd.html#VCVTM_asimd_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCVTM_asimd_T1_D, //!< <a href="../target/aarch32/VCVTM_asimd.html#VCVTM_asimd_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCVTM_asimd_T1_Q, //!< <a href="../target/aarch32/VCVTM_asimd.html#VCVTM_asimd_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCVTM_vfp_A1_H, //!< <a href="../target/aarch32/VCVTM_vfp.html#VCVTM_vfp_A1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVTM_vfp_A1_S, //!< <a href="../target/aarch32/VCVTM_vfp.html#VCVTM_vfp_A1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVTM_vfp_A1_D, //!< <a href="../target/aarch32/VCVTM_vfp.html#VCVTM_vfp_A1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVTM_vfp_T1_H, //!< <a href="../target/aarch32/VCVTM_vfp.html#VCVTM_vfp_T1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVTM_vfp_T1_S, //!< <a href="../target/aarch32/VCVTM_vfp.html#VCVTM_vfp_T1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVTM_vfp_T1_D, //!< <a href="../target/aarch32/VCVTM_vfp.html#VCVTM_vfp_T1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVTN_asimd_A1_D, //!< <a href="../target/aarch32/VCVTN_asimd.html#VCVTN_asimd_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCVTN_asimd_A1_Q, //!< <a href="../target/aarch32/VCVTN_asimd.html#VCVTN_asimd_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCVTN_asimd_T1_D, //!< <a href="../target/aarch32/VCVTN_asimd.html#VCVTN_asimd_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCVTN_asimd_T1_Q, //!< <a href="../target/aarch32/VCVTN_asimd.html#VCVTN_asimd_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCVTN_vfp_A1_H, //!< <a href="../target/aarch32/VCVTN_vfp.html#VCVTN_vfp_A1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVTN_vfp_A1_S, //!< <a href="../target/aarch32/VCVTN_vfp.html#VCVTN_vfp_A1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVTN_vfp_A1_D, //!< <a href="../target/aarch32/VCVTN_vfp.html#VCVTN_vfp_A1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVTN_vfp_T1_H, //!< <a href="../target/aarch32/VCVTN_vfp.html#VCVTN_vfp_T1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVTN_vfp_T1_S, //!< <a href="../target/aarch32/VCVTN_vfp.html#VCVTN_vfp_T1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVTN_vfp_T1_D, //!< <a href="../target/aarch32/VCVTN_vfp.html#VCVTN_vfp_T1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVTP_asimd_A1_D, //!< <a href="../target/aarch32/VCVTP_asimd.html#VCVTP_asimd_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCVTP_asimd_A1_Q, //!< <a href="../target/aarch32/VCVTP_asimd.html#VCVTP_asimd_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCVTP_asimd_T1_D, //!< <a href="../target/aarch32/VCVTP_asimd.html#VCVTP_asimd_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCVTP_asimd_T1_Q, //!< <a href="../target/aarch32/VCVTP_asimd.html#VCVTP_asimd_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCVTP_vfp_A1_H, //!< <a href="../target/aarch32/VCVTP_vfp.html#VCVTP_vfp_A1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVTP_vfp_A1_S, //!< <a href="../target/aarch32/VCVTP_vfp.html#VCVTP_vfp_A1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVTP_vfp_A1_D, //!< <a href="../target/aarch32/VCVTP_vfp.html#VCVTP_vfp_A1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVTP_vfp_T1_H, //!< <a href="../target/aarch32/VCVTP_vfp.html#VCVTP_vfp_T1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVTP_vfp_T1_S, //!< <a href="../target/aarch32/VCVTP_vfp.html#VCVTP_vfp_T1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVTP_vfp_T1_D, //!< <a href="../target/aarch32/VCVTP_vfp.html#VCVTP_vfp_T1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVTR_uiv_A1_H, //!< <a href="../target/aarch32/VCVTR_iv.html#VCVTR_uiv_A1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVTR_siv_A1_H, //!< <a href="../target/aarch32/VCVTR_iv.html#VCVTR_siv_A1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVTR_uiv_A1_S, //!< <a href="../target/aarch32/VCVTR_iv.html#VCVTR_uiv_A1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVTR_siv_A1_S, //!< <a href="../target/aarch32/VCVTR_iv.html#VCVTR_siv_A1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVTR_uiv_A1_D, //!< <a href="../target/aarch32/VCVTR_iv.html#VCVTR_uiv_A1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVTR_siv_A1_D, //!< <a href="../target/aarch32/VCVTR_iv.html#VCVTR_siv_A1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVTR_uiv_T1_H, //!< <a href="../target/aarch32/VCVTR_iv.html#VCVTR_uiv_T1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVTR_siv_T1_H, //!< <a href="../target/aarch32/VCVTR_iv.html#VCVTR_siv_T1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVTR_uiv_T1_S, //!< <a href="../target/aarch32/VCVTR_iv.html#VCVTR_uiv_T1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVTR_siv_T1_S, //!< <a href="../target/aarch32/VCVTR_iv.html#VCVTR_siv_T1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVTR_uiv_T1_D, //!< <a href="../target/aarch32/VCVTR_iv.html#VCVTR_uiv_T1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVTR_siv_T1_D, //!< <a href="../target/aarch32/VCVTR_iv.html#VCVTR_siv_T1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VCVTT_A1_SH, //!< <a href="../target/aarch32/VCVTT.html#VCVTT_A1_SH">Half-precision to single-precision</a>
  AMED_AARCH32_ENCODING_VCVTT_A1_DH, //!< <a href="../target/aarch32/VCVTT.html#VCVTT_A1_DH">Half-precision to double-precision</a>
  AMED_AARCH32_ENCODING_VCVTT_A1_HS, //!< <a href="../target/aarch32/VCVTT.html#VCVTT_A1_HS">Single-precision to half-precision</a>
  AMED_AARCH32_ENCODING_VCVTT_A1_HD, //!< <a href="../target/aarch32/VCVTT.html#VCVTT_A1_HD">Double-precision to half-precision</a>
  AMED_AARCH32_ENCODING_VCVTT_T1_SH, //!< <a href="../target/aarch32/VCVTT.html#VCVTT_T1_SH">Half-precision to single-precision</a>
  AMED_AARCH32_ENCODING_VCVTT_T1_DH, //!< <a href="../target/aarch32/VCVTT.html#VCVTT_T1_DH">Half-precision to double-precision</a>
  AMED_AARCH32_ENCODING_VCVTT_T1_HS, //!< <a href="../target/aarch32/VCVTT.html#VCVTT_T1_HS">Single-precision to half-precision</a>
  AMED_AARCH32_ENCODING_VCVTT_T1_HD, //!< <a href="../target/aarch32/VCVTT.html#VCVTT_T1_HD">Double-precision to half-precision</a>
  AMED_AARCH32_ENCODING_VCVTT_A1_bfs, //!< <a href="../target/aarch32/VCVTT_bfs.html#VCVTT_A1_bfs">A1</a>
  AMED_AARCH32_ENCODING_VCVTT_T1_bfs, //!< <a href="../target/aarch32/VCVTT_bfs.html#VCVTT_T1_bfs">T1</a>
  AMED_AARCH32_ENCODING_VDIV_A1_H, //!< <a href="../target/aarch32/VDIV.html#VDIV_A1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VDIV_A1_S, //!< <a href="../target/aarch32/VDIV.html#VDIV_A1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VDIV_A1_D, //!< <a href="../target/aarch32/VDIV.html#VDIV_A1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VDIV_T1_H, //!< <a href="../target/aarch32/VDIV.html#VDIV_T1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VDIV_T1_S, //!< <a href="../target/aarch32/VDIV.html#VDIV_T1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VDIV_T1_D, //!< <a href="../target/aarch32/VDIV.html#VDIV_T1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VDOT_A1_D, //!< <a href="../target/aarch32/VDOT.html#VDOT_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VDOT_A1_Q, //!< <a href="../target/aarch32/VDOT.html#VDOT_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VDOT_T1_D, //!< <a href="../target/aarch32/VDOT.html#VDOT_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VDOT_T1_Q, //!< <a href="../target/aarch32/VDOT.html#VDOT_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VDOT_s_A1_D, //!< <a href="../target/aarch32/VDOT_s.html#VDOT_s_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VDOT_s_A1_Q, //!< <a href="../target/aarch32/VDOT_s.html#VDOT_s_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VDOT_s_T1_D, //!< <a href="../target/aarch32/VDOT_s.html#VDOT_s_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VDOT_s_T1_Q, //!< <a href="../target/aarch32/VDOT_s.html#VDOT_s_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VDUP_r_A1, //!< <a href="../target/aarch32/VDUP_r.html#VDUP_r_A1">A1</a>
  AMED_AARCH32_ENCODING_VDUP_r_T1, //!< <a href="../target/aarch32/VDUP_r.html#VDUP_r_T1">T1</a>
  AMED_AARCH32_ENCODING_VDUP_s_A1_D, //!< <a href="../target/aarch32/VDUP_s.html#VDUP_s_A1_D">VDUP_s_A1_D</a>
  AMED_AARCH32_ENCODING_VDUP_s_A1_Q, //!< <a href="../target/aarch32/VDUP_s.html#VDUP_s_A1_Q">VDUP_s_A1_Q</a>
  AMED_AARCH32_ENCODING_VDUP_s_T1_D, //!< <a href="../target/aarch32/VDUP_s.html#VDUP_s_T1_D">VDUP_s_T1_D</a>
  AMED_AARCH32_ENCODING_VDUP_s_T1_Q, //!< <a href="../target/aarch32/VDUP_s.html#VDUP_s_T1_Q">VDUP_s_T1_Q</a>
  AMED_AARCH32_ENCODING_VEOR_A1_D, //!< <a href="../target/aarch32/VEOR.html#VEOR_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VEOR_A1_Q, //!< <a href="../target/aarch32/VEOR.html#VEOR_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VEOR_T1_D, //!< <a href="../target/aarch32/VEOR.html#VEOR_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VEOR_T1_Q, //!< <a href="../target/aarch32/VEOR.html#VEOR_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VEXT_A1_D, //!< <a href="../target/aarch32/VEXT.html#VEXT_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VEXT_A1_Q, //!< <a href="../target/aarch32/VEXT.html#VEXT_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VEXT_T1_D, //!< <a href="../target/aarch32/VEXT.html#VEXT_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VEXT_T1_Q, //!< <a href="../target/aarch32/VEXT.html#VEXT_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VFMA_A1_D, //!< <a href="../target/aarch32/VFMA.html#VFMA_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VFMA_A1_Q, //!< <a href="../target/aarch32/VFMA.html#VFMA_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VFMA_A2_H, //!< <a href="../target/aarch32/VFMA.html#VFMA_A2_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VFMA_A2_S, //!< <a href="../target/aarch32/VFMA.html#VFMA_A2_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VFMA_A2_D, //!< <a href="../target/aarch32/VFMA.html#VFMA_A2_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VFMA_T1_D, //!< <a href="../target/aarch32/VFMA.html#VFMA_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VFMA_T1_Q, //!< <a href="../target/aarch32/VFMA.html#VFMA_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VFMA_T2_H, //!< <a href="../target/aarch32/VFMA.html#VFMA_T2_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VFMA_T2_S, //!< <a href="../target/aarch32/VFMA.html#VFMA_T2_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VFMA_T2_D, //!< <a href="../target/aarch32/VFMA.html#VFMA_T2_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VFMA_bf_A1_Q, //!< <a href="../target/aarch32/VFMA_bf.html#VFMA_bf_A1_Q">A1</a>
  AMED_AARCH32_ENCODING_VFMA_bf_T1_Q, //!< <a href="../target/aarch32/VFMA_bf.html#VFMA_bf_T1_Q">T1</a>
  AMED_AARCH32_ENCODING_VFMA_bfs_A1_Q, //!< <a href="../target/aarch32/VFMA_bfs.html#VFMA_bfs_A1_Q">A1</a>
  AMED_AARCH32_ENCODING_VFMA_bfs_T1_Q, //!< <a href="../target/aarch32/VFMA_bfs.html#VFMA_bfs_T1_Q">T1</a>
  AMED_AARCH32_ENCODING_VFMAL_A1_D, //!< <a href="../target/aarch32/VFMAL.html#VFMAL_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VFMAL_A1_Q, //!< <a href="../target/aarch32/VFMAL.html#VFMAL_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VFMAL_T1_D, //!< <a href="../target/aarch32/VFMAL.html#VFMAL_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VFMAL_T1_Q, //!< <a href="../target/aarch32/VFMAL.html#VFMAL_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VFMAL_s_A1_D, //!< <a href="../target/aarch32/VFMAL_s.html#VFMAL_s_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VFMAL_s_A1_Q, //!< <a href="../target/aarch32/VFMAL_s.html#VFMAL_s_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VFMAL_s_T1_D, //!< <a href="../target/aarch32/VFMAL_s.html#VFMAL_s_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VFMAL_s_T1_Q, //!< <a href="../target/aarch32/VFMAL_s.html#VFMAL_s_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VFMS_A1_D, //!< <a href="../target/aarch32/VFMS.html#VFMS_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VFMS_A1_Q, //!< <a href="../target/aarch32/VFMS.html#VFMS_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VFMS_A2_H, //!< <a href="../target/aarch32/VFMS.html#VFMS_A2_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VFMS_A2_S, //!< <a href="../target/aarch32/VFMS.html#VFMS_A2_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VFMS_A2_D, //!< <a href="../target/aarch32/VFMS.html#VFMS_A2_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VFMS_T1_D, //!< <a href="../target/aarch32/VFMS.html#VFMS_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VFMS_T1_Q, //!< <a href="../target/aarch32/VFMS.html#VFMS_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VFMS_T2_H, //!< <a href="../target/aarch32/VFMS.html#VFMS_T2_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VFMS_T2_S, //!< <a href="../target/aarch32/VFMS.html#VFMS_T2_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VFMS_T2_D, //!< <a href="../target/aarch32/VFMS.html#VFMS_T2_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VFMSL_A1_D, //!< <a href="../target/aarch32/VFMSL.html#VFMSL_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VFMSL_A1_Q, //!< <a href="../target/aarch32/VFMSL.html#VFMSL_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VFMSL_T1_D, //!< <a href="../target/aarch32/VFMSL.html#VFMSL_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VFMSL_T1_Q, //!< <a href="../target/aarch32/VFMSL.html#VFMSL_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VFMSL_s_A1_D, //!< <a href="../target/aarch32/VFMSL_s.html#VFMSL_s_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VFMSL_s_A1_Q, //!< <a href="../target/aarch32/VFMSL_s.html#VFMSL_s_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VFMSL_s_T1_D, //!< <a href="../target/aarch32/VFMSL_s.html#VFMSL_s_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VFMSL_s_T1_Q, //!< <a href="../target/aarch32/VFMSL_s.html#VFMSL_s_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VFNMA_A1_H, //!< <a href="../target/aarch32/VFNMA.html#VFNMA_A1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VFNMA_A1_S, //!< <a href="../target/aarch32/VFNMA.html#VFNMA_A1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VFNMA_A1_D, //!< <a href="../target/aarch32/VFNMA.html#VFNMA_A1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VFNMA_T1_H, //!< <a href="../target/aarch32/VFNMA.html#VFNMA_T1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VFNMA_T1_S, //!< <a href="../target/aarch32/VFNMA.html#VFNMA_T1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VFNMA_T1_D, //!< <a href="../target/aarch32/VFNMA.html#VFNMA_T1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VFNMS_A1_H, //!< <a href="../target/aarch32/VFNMS.html#VFNMS_A1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VFNMS_A1_S, //!< <a href="../target/aarch32/VFNMS.html#VFNMS_A1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VFNMS_A1_D, //!< <a href="../target/aarch32/VFNMS.html#VFNMS_A1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VFNMS_T1_H, //!< <a href="../target/aarch32/VFNMS.html#VFNMS_T1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VFNMS_T1_S, //!< <a href="../target/aarch32/VFNMS.html#VFNMS_T1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VFNMS_T1_D, //!< <a href="../target/aarch32/VFNMS.html#VFNMS_T1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VHADD_A1_D, //!< <a href="../target/aarch32/VHADD.html#VHADD_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VHADD_A1_Q, //!< <a href="../target/aarch32/VHADD.html#VHADD_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VHADD_T1_D, //!< <a href="../target/aarch32/VHADD.html#VHADD_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VHADD_T1_Q, //!< <a href="../target/aarch32/VHADD.html#VHADD_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VHSUB_A1_D, //!< <a href="../target/aarch32/VHSUB.html#VHSUB_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VHSUB_A1_Q, //!< <a href="../target/aarch32/VHSUB.html#VHSUB_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VHSUB_T1_D, //!< <a href="../target/aarch32/VHSUB.html#VHSUB_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VHSUB_T1_Q, //!< <a href="../target/aarch32/VHSUB.html#VHSUB_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VINS_A1, //!< <a href="../target/aarch32/VINS.html#VINS_A1">A1</a>
  AMED_AARCH32_ENCODING_VINS_T1, //!< <a href="../target/aarch32/VINS.html#VINS_T1">T1</a>
  AMED_AARCH32_ENCODING_VJCVT_A1, //!< <a href="../target/aarch32/VJCVT.html#VJCVT_A1">A1</a>
  AMED_AARCH32_ENCODING_VJCVT_T1, //!< <a href="../target/aarch32/VJCVT.html#VJCVT_T1">T1</a>
  AMED_AARCH32_ENCODING_VLD1_1_A1_nowb, //!< <a href="../target/aarch32/VLD1_1.html#VLD1_1_A1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD1_1_A1_posti, //!< <a href="../target/aarch32/VLD1_1.html#VLD1_1_A1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD1_1_A1_postr, //!< <a href="../target/aarch32/VLD1_1.html#VLD1_1_A1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD1_1_A2_nowb, //!< <a href="../target/aarch32/VLD1_1.html#VLD1_1_A2_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD1_1_A2_posti, //!< <a href="../target/aarch32/VLD1_1.html#VLD1_1_A2_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD1_1_A2_postr, //!< <a href="../target/aarch32/VLD1_1.html#VLD1_1_A2_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD1_1_A3_nowb, //!< <a href="../target/aarch32/VLD1_1.html#VLD1_1_A3_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD1_1_A3_posti, //!< <a href="../target/aarch32/VLD1_1.html#VLD1_1_A3_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD1_1_A3_postr, //!< <a href="../target/aarch32/VLD1_1.html#VLD1_1_A3_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD1_1_T1_nowb, //!< <a href="../target/aarch32/VLD1_1.html#VLD1_1_T1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD1_1_T1_posti, //!< <a href="../target/aarch32/VLD1_1.html#VLD1_1_T1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD1_1_T1_postr, //!< <a href="../target/aarch32/VLD1_1.html#VLD1_1_T1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD1_1_T2_nowb, //!< <a href="../target/aarch32/VLD1_1.html#VLD1_1_T2_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD1_1_T2_posti, //!< <a href="../target/aarch32/VLD1_1.html#VLD1_1_T2_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD1_1_T2_postr, //!< <a href="../target/aarch32/VLD1_1.html#VLD1_1_T2_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD1_1_T3_nowb, //!< <a href="../target/aarch32/VLD1_1.html#VLD1_1_T3_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD1_1_T3_posti, //!< <a href="../target/aarch32/VLD1_1.html#VLD1_1_T3_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD1_1_T3_postr, //!< <a href="../target/aarch32/VLD1_1.html#VLD1_1_T3_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD1_a_A1_nowb, //!< <a href="../target/aarch32/VLD1_a.html#VLD1_a_A1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD1_a_A1_posti, //!< <a href="../target/aarch32/VLD1_a.html#VLD1_a_A1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD1_a_A1_postr, //!< <a href="../target/aarch32/VLD1_a.html#VLD1_a_A1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD1_a_T1_nowb, //!< <a href="../target/aarch32/VLD1_a.html#VLD1_a_T1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD1_a_T1_posti, //!< <a href="../target/aarch32/VLD1_a.html#VLD1_a_T1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD1_a_T1_postr, //!< <a href="../target/aarch32/VLD1_a.html#VLD1_a_T1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD1_m_A1_nowb, //!< <a href="../target/aarch32/VLD1_m.html#VLD1_m_A1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD1_m_A1_posti, //!< <a href="../target/aarch32/VLD1_m.html#VLD1_m_A1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD1_m_A1_postr, //!< <a href="../target/aarch32/VLD1_m.html#VLD1_m_A1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD1_m_A2_nowb, //!< <a href="../target/aarch32/VLD1_m.html#VLD1_m_A2_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD1_m_A2_posti, //!< <a href="../target/aarch32/VLD1_m.html#VLD1_m_A2_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD1_m_A2_postr, //!< <a href="../target/aarch32/VLD1_m.html#VLD1_m_A2_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD1_m_A3_nowb, //!< <a href="../target/aarch32/VLD1_m.html#VLD1_m_A3_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD1_m_A3_posti, //!< <a href="../target/aarch32/VLD1_m.html#VLD1_m_A3_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD1_m_A3_postr, //!< <a href="../target/aarch32/VLD1_m.html#VLD1_m_A3_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD1_m_A4_nowb, //!< <a href="../target/aarch32/VLD1_m.html#VLD1_m_A4_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD1_m_A4_posti, //!< <a href="../target/aarch32/VLD1_m.html#VLD1_m_A4_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD1_m_A4_postr, //!< <a href="../target/aarch32/VLD1_m.html#VLD1_m_A4_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD1_m_T1_nowb, //!< <a href="../target/aarch32/VLD1_m.html#VLD1_m_T1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD1_m_T1_posti, //!< <a href="../target/aarch32/VLD1_m.html#VLD1_m_T1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD1_m_T1_postr, //!< <a href="../target/aarch32/VLD1_m.html#VLD1_m_T1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD1_m_T2_nowb, //!< <a href="../target/aarch32/VLD1_m.html#VLD1_m_T2_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD1_m_T2_posti, //!< <a href="../target/aarch32/VLD1_m.html#VLD1_m_T2_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD1_m_T2_postr, //!< <a href="../target/aarch32/VLD1_m.html#VLD1_m_T2_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD1_m_T3_nowb, //!< <a href="../target/aarch32/VLD1_m.html#VLD1_m_T3_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD1_m_T3_posti, //!< <a href="../target/aarch32/VLD1_m.html#VLD1_m_T3_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD1_m_T3_postr, //!< <a href="../target/aarch32/VLD1_m.html#VLD1_m_T3_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD1_m_T4_nowb, //!< <a href="../target/aarch32/VLD1_m.html#VLD1_m_T4_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD1_m_T4_posti, //!< <a href="../target/aarch32/VLD1_m.html#VLD1_m_T4_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD1_m_T4_postr, //!< <a href="../target/aarch32/VLD1_m.html#VLD1_m_T4_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD2_1_A1_nowb, //!< <a href="../target/aarch32/VLD2_1.html#VLD2_1_A1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD2_1_A1_posti, //!< <a href="../target/aarch32/VLD2_1.html#VLD2_1_A1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD2_1_A1_postr, //!< <a href="../target/aarch32/VLD2_1.html#VLD2_1_A1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD2_1_A2_nowb, //!< <a href="../target/aarch32/VLD2_1.html#VLD2_1_A2_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD2_1_A2_posti, //!< <a href="../target/aarch32/VLD2_1.html#VLD2_1_A2_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD2_1_A2_postr, //!< <a href="../target/aarch32/VLD2_1.html#VLD2_1_A2_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD2_1_A3_nowb, //!< <a href="../target/aarch32/VLD2_1.html#VLD2_1_A3_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD2_1_A3_posti, //!< <a href="../target/aarch32/VLD2_1.html#VLD2_1_A3_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD2_1_A3_postr, //!< <a href="../target/aarch32/VLD2_1.html#VLD2_1_A3_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD2_1_T1_nowb, //!< <a href="../target/aarch32/VLD2_1.html#VLD2_1_T1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD2_1_T1_posti, //!< <a href="../target/aarch32/VLD2_1.html#VLD2_1_T1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD2_1_T1_postr, //!< <a href="../target/aarch32/VLD2_1.html#VLD2_1_T1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD2_1_T2_nowb, //!< <a href="../target/aarch32/VLD2_1.html#VLD2_1_T2_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD2_1_T2_posti, //!< <a href="../target/aarch32/VLD2_1.html#VLD2_1_T2_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD2_1_T2_postr, //!< <a href="../target/aarch32/VLD2_1.html#VLD2_1_T2_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD2_1_T3_nowb, //!< <a href="../target/aarch32/VLD2_1.html#VLD2_1_T3_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD2_1_T3_posti, //!< <a href="../target/aarch32/VLD2_1.html#VLD2_1_T3_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD2_1_T3_postr, //!< <a href="../target/aarch32/VLD2_1.html#VLD2_1_T3_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD2_a_A1_nowb, //!< <a href="../target/aarch32/VLD2_a.html#VLD2_a_A1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD2_a_A1_posti, //!< <a href="../target/aarch32/VLD2_a.html#VLD2_a_A1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD2_a_A1_postr, //!< <a href="../target/aarch32/VLD2_a.html#VLD2_a_A1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD2_a_T1_nowb, //!< <a href="../target/aarch32/VLD2_a.html#VLD2_a_T1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD2_a_T1_posti, //!< <a href="../target/aarch32/VLD2_a.html#VLD2_a_T1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD2_a_T1_postr, //!< <a href="../target/aarch32/VLD2_a.html#VLD2_a_T1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD2_m_A1_nowb, //!< <a href="../target/aarch32/VLD2_m.html#VLD2_m_A1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD2_m_A1_posti, //!< <a href="../target/aarch32/VLD2_m.html#VLD2_m_A1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD2_m_A1_postr, //!< <a href="../target/aarch32/VLD2_m.html#VLD2_m_A1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD2_m_A2_nowb, //!< <a href="../target/aarch32/VLD2_m.html#VLD2_m_A2_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD2_m_A2_posti, //!< <a href="../target/aarch32/VLD2_m.html#VLD2_m_A2_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD2_m_A2_postr, //!< <a href="../target/aarch32/VLD2_m.html#VLD2_m_A2_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD2_m_T1_nowb, //!< <a href="../target/aarch32/VLD2_m.html#VLD2_m_T1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD2_m_T1_posti, //!< <a href="../target/aarch32/VLD2_m.html#VLD2_m_T1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD2_m_T1_postr, //!< <a href="../target/aarch32/VLD2_m.html#VLD2_m_T1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD2_m_T2_nowb, //!< <a href="../target/aarch32/VLD2_m.html#VLD2_m_T2_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD2_m_T2_posti, //!< <a href="../target/aarch32/VLD2_m.html#VLD2_m_T2_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD2_m_T2_postr, //!< <a href="../target/aarch32/VLD2_m.html#VLD2_m_T2_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD3_1_A1_nowb, //!< <a href="../target/aarch32/VLD3_1.html#VLD3_1_A1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD3_1_A1_posti, //!< <a href="../target/aarch32/VLD3_1.html#VLD3_1_A1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD3_1_A1_postr, //!< <a href="../target/aarch32/VLD3_1.html#VLD3_1_A1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD3_1_A2_nowb, //!< <a href="../target/aarch32/VLD3_1.html#VLD3_1_A2_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD3_1_A2_posti, //!< <a href="../target/aarch32/VLD3_1.html#VLD3_1_A2_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD3_1_A2_postr, //!< <a href="../target/aarch32/VLD3_1.html#VLD3_1_A2_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD3_1_A3_nowb, //!< <a href="../target/aarch32/VLD3_1.html#VLD3_1_A3_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD3_1_A3_posti, //!< <a href="../target/aarch32/VLD3_1.html#VLD3_1_A3_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD3_1_A3_postr, //!< <a href="../target/aarch32/VLD3_1.html#VLD3_1_A3_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD3_1_T1_nowb, //!< <a href="../target/aarch32/VLD3_1.html#VLD3_1_T1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD3_1_T1_posti, //!< <a href="../target/aarch32/VLD3_1.html#VLD3_1_T1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD3_1_T1_postr, //!< <a href="../target/aarch32/VLD3_1.html#VLD3_1_T1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD3_1_T2_nowb, //!< <a href="../target/aarch32/VLD3_1.html#VLD3_1_T2_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD3_1_T2_posti, //!< <a href="../target/aarch32/VLD3_1.html#VLD3_1_T2_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD3_1_T2_postr, //!< <a href="../target/aarch32/VLD3_1.html#VLD3_1_T2_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD3_1_T3_nowb, //!< <a href="../target/aarch32/VLD3_1.html#VLD3_1_T3_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD3_1_T3_posti, //!< <a href="../target/aarch32/VLD3_1.html#VLD3_1_T3_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD3_1_T3_postr, //!< <a href="../target/aarch32/VLD3_1.html#VLD3_1_T3_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD3_a_A1_nowb, //!< <a href="../target/aarch32/VLD3_a.html#VLD3_a_A1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD3_a_A1_posti, //!< <a href="../target/aarch32/VLD3_a.html#VLD3_a_A1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD3_a_A1_postr, //!< <a href="../target/aarch32/VLD3_a.html#VLD3_a_A1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD3_a_T1_nowb, //!< <a href="../target/aarch32/VLD3_a.html#VLD3_a_T1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD3_a_T1_posti, //!< <a href="../target/aarch32/VLD3_a.html#VLD3_a_T1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD3_a_T1_postr, //!< <a href="../target/aarch32/VLD3_a.html#VLD3_a_T1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD3_m_A1_nowb, //!< <a href="../target/aarch32/VLD3_m.html#VLD3_m_A1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD3_m_A1_posti, //!< <a href="../target/aarch32/VLD3_m.html#VLD3_m_A1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD3_m_A1_postr, //!< <a href="../target/aarch32/VLD3_m.html#VLD3_m_A1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD3_m_T1_nowb, //!< <a href="../target/aarch32/VLD3_m.html#VLD3_m_T1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD3_m_T1_posti, //!< <a href="../target/aarch32/VLD3_m.html#VLD3_m_T1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD3_m_T1_postr, //!< <a href="../target/aarch32/VLD3_m.html#VLD3_m_T1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD4_1_A1_nowb, //!< <a href="../target/aarch32/VLD4_1.html#VLD4_1_A1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD4_1_A1_posti, //!< <a href="../target/aarch32/VLD4_1.html#VLD4_1_A1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD4_1_A1_postr, //!< <a href="../target/aarch32/VLD4_1.html#VLD4_1_A1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD4_1_A2_nowb, //!< <a href="../target/aarch32/VLD4_1.html#VLD4_1_A2_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD4_1_A2_posti, //!< <a href="../target/aarch32/VLD4_1.html#VLD4_1_A2_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD4_1_A2_postr, //!< <a href="../target/aarch32/VLD4_1.html#VLD4_1_A2_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD4_1_A3_nowb, //!< <a href="../target/aarch32/VLD4_1.html#VLD4_1_A3_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD4_1_A3_posti, //!< <a href="../target/aarch32/VLD4_1.html#VLD4_1_A3_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD4_1_A3_postr, //!< <a href="../target/aarch32/VLD4_1.html#VLD4_1_A3_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD4_1_T1_nowb, //!< <a href="../target/aarch32/VLD4_1.html#VLD4_1_T1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD4_1_T1_posti, //!< <a href="../target/aarch32/VLD4_1.html#VLD4_1_T1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD4_1_T1_postr, //!< <a href="../target/aarch32/VLD4_1.html#VLD4_1_T1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD4_1_T2_nowb, //!< <a href="../target/aarch32/VLD4_1.html#VLD4_1_T2_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD4_1_T2_posti, //!< <a href="../target/aarch32/VLD4_1.html#VLD4_1_T2_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD4_1_T2_postr, //!< <a href="../target/aarch32/VLD4_1.html#VLD4_1_T2_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD4_1_T3_nowb, //!< <a href="../target/aarch32/VLD4_1.html#VLD4_1_T3_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD4_1_T3_posti, //!< <a href="../target/aarch32/VLD4_1.html#VLD4_1_T3_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD4_1_T3_postr, //!< <a href="../target/aarch32/VLD4_1.html#VLD4_1_T3_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD4_a_A1_nowb, //!< <a href="../target/aarch32/VLD4_a.html#VLD4_a_A1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD4_a_A1_posti, //!< <a href="../target/aarch32/VLD4_a.html#VLD4_a_A1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD4_a_A1_postr, //!< <a href="../target/aarch32/VLD4_a.html#VLD4_a_A1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD4_a_T1_nowb, //!< <a href="../target/aarch32/VLD4_a.html#VLD4_a_T1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD4_a_T1_posti, //!< <a href="../target/aarch32/VLD4_a.html#VLD4_a_T1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD4_a_T1_postr, //!< <a href="../target/aarch32/VLD4_a.html#VLD4_a_T1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD4_m_A1_nowb, //!< <a href="../target/aarch32/VLD4_m.html#VLD4_m_A1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD4_m_A1_posti, //!< <a href="../target/aarch32/VLD4_m.html#VLD4_m_A1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD4_m_A1_postr, //!< <a href="../target/aarch32/VLD4_m.html#VLD4_m_A1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD4_m_T1_nowb, //!< <a href="../target/aarch32/VLD4_m.html#VLD4_m_T1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VLD4_m_T1_posti, //!< <a href="../target/aarch32/VLD4_m.html#VLD4_m_T1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLD4_m_T1_postr, //!< <a href="../target/aarch32/VLD4_m.html#VLD4_m_T1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VLDMDB_A1, //!< <a href="../target/aarch32/VLDM.html#VLDMDB_A1">Decrement Before</a>
  AMED_AARCH32_ENCODING_VLDM_A1, //!< <a href="../target/aarch32/VLDM.html#VLDM_A1">Increment After</a>
  AMED_AARCH32_ENCODING_VLDMDB_A2, //!< <a href="../target/aarch32/VLDM.html#VLDMDB_A2">Decrement Before</a>
  AMED_AARCH32_ENCODING_VLDM_A2, //!< <a href="../target/aarch32/VLDM.html#VLDM_A2">Increment After</a>
  AMED_AARCH32_ENCODING_VLDMDB_T1, //!< <a href="../target/aarch32/VLDM.html#VLDMDB_T1">Decrement Before</a>
  AMED_AARCH32_ENCODING_VLDM_T1, //!< <a href="../target/aarch32/VLDM.html#VLDM_T1">Increment After</a>
  AMED_AARCH32_ENCODING_VLDMDB_T2, //!< <a href="../target/aarch32/VLDM.html#VLDMDB_T2">Decrement Before</a>
  AMED_AARCH32_ENCODING_VLDM_T2, //!< <a href="../target/aarch32/VLDM.html#VLDM_T2">Increment After</a>
  AMED_AARCH32_ENCODING_VLDR_A1_H, //!< <a href="../target/aarch32/VLDR_i.html#VLDR_A1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VLDR_A1_S, //!< <a href="../target/aarch32/VLDR_i.html#VLDR_A1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VLDR_A1_D, //!< <a href="../target/aarch32/VLDR_i.html#VLDR_A1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VLDR_T1_H, //!< <a href="../target/aarch32/VLDR_i.html#VLDR_T1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VLDR_T1_S, //!< <a href="../target/aarch32/VLDR_i.html#VLDR_T1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VLDR_T1_D, //!< <a href="../target/aarch32/VLDR_i.html#VLDR_T1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VLDR_l_A1_H, //!< <a href="../target/aarch32/VLDR_l.html#VLDR_l_A1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VLDR_l_A1_S, //!< <a href="../target/aarch32/VLDR_l.html#VLDR_l_A1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VLDR_l_A1_D, //!< <a href="../target/aarch32/VLDR_l.html#VLDR_l_A1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VLDR_l_T1_H, //!< <a href="../target/aarch32/VLDR_l.html#VLDR_l_T1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VLDR_l_T1_S, //!< <a href="../target/aarch32/VLDR_l.html#VLDR_l_T1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VLDR_l_T1_D, //!< <a href="../target/aarch32/VLDR_l.html#VLDR_l_T1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VMAX_f_A1_D, //!< <a href="../target/aarch32/VMAX_f.html#VMAX_f_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMAX_f_A1_Q, //!< <a href="../target/aarch32/VMAX_f.html#VMAX_f_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMAX_f_T1_D, //!< <a href="../target/aarch32/VMAX_f.html#VMAX_f_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMAX_f_T1_Q, //!< <a href="../target/aarch32/VMAX_f.html#VMAX_f_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMAX_i_A1_D, //!< <a href="../target/aarch32/VMAX_i.html#VMAX_i_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMAX_i_A1_Q, //!< <a href="../target/aarch32/VMAX_i.html#VMAX_i_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMAX_i_T1_D, //!< <a href="../target/aarch32/VMAX_i.html#VMAX_i_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMAX_i_T1_Q, //!< <a href="../target/aarch32/VMAX_i.html#VMAX_i_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMAXNM_A1_D, //!< <a href="../target/aarch32/VMAXNM.html#VMAXNM_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMAXNM_A1_Q, //!< <a href="../target/aarch32/VMAXNM.html#VMAXNM_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMAXNM_A2_H, //!< <a href="../target/aarch32/VMAXNM.html#VMAXNM_A2_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VMAXNM_A2_S, //!< <a href="../target/aarch32/VMAXNM.html#VMAXNM_A2_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VMAXNM_A2_D, //!< <a href="../target/aarch32/VMAXNM.html#VMAXNM_A2_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VMAXNM_T1_D, //!< <a href="../target/aarch32/VMAXNM.html#VMAXNM_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMAXNM_T1_Q, //!< <a href="../target/aarch32/VMAXNM.html#VMAXNM_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMAXNM_T2_H, //!< <a href="../target/aarch32/VMAXNM.html#VMAXNM_T2_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VMAXNM_T2_S, //!< <a href="../target/aarch32/VMAXNM.html#VMAXNM_T2_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VMAXNM_T2_D, //!< <a href="../target/aarch32/VMAXNM.html#VMAXNM_T2_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VMIN_f_A1_D, //!< <a href="../target/aarch32/VMIN_f.html#VMIN_f_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMIN_f_A1_Q, //!< <a href="../target/aarch32/VMIN_f.html#VMIN_f_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMIN_f_T1_D, //!< <a href="../target/aarch32/VMIN_f.html#VMIN_f_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMIN_f_T1_Q, //!< <a href="../target/aarch32/VMIN_f.html#VMIN_f_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMIN_i_A1_D, //!< <a href="../target/aarch32/VMIN_i.html#VMIN_i_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMIN_i_A1_Q, //!< <a href="../target/aarch32/VMIN_i.html#VMIN_i_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMIN_i_T1_D, //!< <a href="../target/aarch32/VMIN_i.html#VMIN_i_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMIN_i_T1_Q, //!< <a href="../target/aarch32/VMIN_i.html#VMIN_i_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMINNM_A1_D, //!< <a href="../target/aarch32/VMINNM.html#VMINNM_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMINNM_A1_Q, //!< <a href="../target/aarch32/VMINNM.html#VMINNM_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMINNM_A2_H, //!< <a href="../target/aarch32/VMINNM.html#VMINNM_A2_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VMINNM_A2_S, //!< <a href="../target/aarch32/VMINNM.html#VMINNM_A2_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VMINNM_A2_D, //!< <a href="../target/aarch32/VMINNM.html#VMINNM_A2_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VMINNM_T1_D, //!< <a href="../target/aarch32/VMINNM.html#VMINNM_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMINNM_T1_Q, //!< <a href="../target/aarch32/VMINNM.html#VMINNM_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMINNM_T2_H, //!< <a href="../target/aarch32/VMINNM.html#VMINNM_T2_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VMINNM_T2_S, //!< <a href="../target/aarch32/VMINNM.html#VMINNM_T2_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VMINNM_T2_D, //!< <a href="../target/aarch32/VMINNM.html#VMINNM_T2_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VMLA_f_A1_D, //!< <a href="../target/aarch32/VMLA_f.html#VMLA_f_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMLA_f_A1_Q, //!< <a href="../target/aarch32/VMLA_f.html#VMLA_f_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMLA_f_A2_H, //!< <a href="../target/aarch32/VMLA_f.html#VMLA_f_A2_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VMLA_f_A2_S, //!< <a href="../target/aarch32/VMLA_f.html#VMLA_f_A2_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VMLA_f_A2_D, //!< <a href="../target/aarch32/VMLA_f.html#VMLA_f_A2_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VMLA_f_T1_D, //!< <a href="../target/aarch32/VMLA_f.html#VMLA_f_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMLA_f_T1_Q, //!< <a href="../target/aarch32/VMLA_f.html#VMLA_f_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMLA_f_T2_H, //!< <a href="../target/aarch32/VMLA_f.html#VMLA_f_T2_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VMLA_f_T2_S, //!< <a href="../target/aarch32/VMLA_f.html#VMLA_f_T2_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VMLA_f_T2_D, //!< <a href="../target/aarch32/VMLA_f.html#VMLA_f_T2_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VMLA_i_A1_D, //!< <a href="../target/aarch32/VMLA_i.html#VMLA_i_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMLA_i_A1_Q, //!< <a href="../target/aarch32/VMLA_i.html#VMLA_i_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMLA_i_T1_D, //!< <a href="../target/aarch32/VMLA_i.html#VMLA_i_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMLA_i_T1_Q, //!< <a href="../target/aarch32/VMLA_i.html#VMLA_i_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMLA_s_A1_D, //!< <a href="../target/aarch32/VMLA_s.html#VMLA_s_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMLA_s_A1_Q, //!< <a href="../target/aarch32/VMLA_s.html#VMLA_s_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMLA_s_T1_D, //!< <a href="../target/aarch32/VMLA_s.html#VMLA_s_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMLA_s_T1_Q, //!< <a href="../target/aarch32/VMLA_s.html#VMLA_s_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMLAL_i_A1, //!< <a href="../target/aarch32/VMLAL_i.html#VMLAL_i_A1">A1</a>
  AMED_AARCH32_ENCODING_VMLAL_i_T1, //!< <a href="../target/aarch32/VMLAL_i.html#VMLAL_i_T1">T1</a>
  AMED_AARCH32_ENCODING_VMLAL_s_A1, //!< <a href="../target/aarch32/VMLAL_s.html#VMLAL_s_A1">A1</a>
  AMED_AARCH32_ENCODING_VMLAL_s_T1, //!< <a href="../target/aarch32/VMLAL_s.html#VMLAL_s_T1">T1</a>
  AMED_AARCH32_ENCODING_VMLS_f_A1_D, //!< <a href="../target/aarch32/VMLS_f.html#VMLS_f_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMLS_f_A1_Q, //!< <a href="../target/aarch32/VMLS_f.html#VMLS_f_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMLS_f_A2_H, //!< <a href="../target/aarch32/VMLS_f.html#VMLS_f_A2_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VMLS_f_A2_S, //!< <a href="../target/aarch32/VMLS_f.html#VMLS_f_A2_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VMLS_f_A2_D, //!< <a href="../target/aarch32/VMLS_f.html#VMLS_f_A2_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VMLS_f_T1_D, //!< <a href="../target/aarch32/VMLS_f.html#VMLS_f_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMLS_f_T1_Q, //!< <a href="../target/aarch32/VMLS_f.html#VMLS_f_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMLS_f_T2_H, //!< <a href="../target/aarch32/VMLS_f.html#VMLS_f_T2_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VMLS_f_T2_S, //!< <a href="../target/aarch32/VMLS_f.html#VMLS_f_T2_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VMLS_f_T2_D, //!< <a href="../target/aarch32/VMLS_f.html#VMLS_f_T2_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VMLS_i_A1_D, //!< <a href="../target/aarch32/VMLS_i.html#VMLS_i_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMLS_i_A1_Q, //!< <a href="../target/aarch32/VMLS_i.html#VMLS_i_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMLS_i_T1_D, //!< <a href="../target/aarch32/VMLS_i.html#VMLS_i_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMLS_i_T1_Q, //!< <a href="../target/aarch32/VMLS_i.html#VMLS_i_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMLS_s_A1_D, //!< <a href="../target/aarch32/VMLS_s.html#VMLS_s_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMLS_s_A1_Q, //!< <a href="../target/aarch32/VMLS_s.html#VMLS_s_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMLS_s_T1_D, //!< <a href="../target/aarch32/VMLS_s.html#VMLS_s_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMLS_s_T1_Q, //!< <a href="../target/aarch32/VMLS_s.html#VMLS_s_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMLSL_i_A1, //!< <a href="../target/aarch32/VMLSL_i.html#VMLSL_i_A1">A1</a>
  AMED_AARCH32_ENCODING_VMLSL_i_T1, //!< <a href="../target/aarch32/VMLSL_i.html#VMLSL_i_T1">T1</a>
  AMED_AARCH32_ENCODING_VMLSL_s_A1, //!< <a href="../target/aarch32/VMLSL_s.html#VMLSL_s_A1">A1</a>
  AMED_AARCH32_ENCODING_VMLSL_s_T1, //!< <a href="../target/aarch32/VMLSL_s.html#VMLSL_s_T1">T1</a>
  AMED_AARCH32_ENCODING_VMMLA_A1_Q, //!< <a href="../target/aarch32/VMMLA.html#VMMLA_A1_Q">A1</a>
  AMED_AARCH32_ENCODING_VMMLA_T1_Q, //!< <a href="../target/aarch32/VMMLA.html#VMMLA_T1_Q">T1</a>
  AMED_AARCH32_ENCODING_VMOV_tod_A1, //!< <a href="../target/aarch32/VMOV_d.html#VMOV_tod_A1">From general-purpose registers</a>
  AMED_AARCH32_ENCODING_VMOV_d_A1, //!< <a href="../target/aarch32/VMOV_d.html#VMOV_d_A1">To general-purpose registers</a>
  AMED_AARCH32_ENCODING_VMOV_tod_T1, //!< <a href="../target/aarch32/VMOV_d.html#VMOV_tod_T1">From general-purpose registers</a>
  AMED_AARCH32_ENCODING_VMOV_d_T1, //!< <a href="../target/aarch32/VMOV_d.html#VMOV_d_T1">To general-purpose registers</a>
  AMED_AARCH32_ENCODING_VMOV_toh_A1, //!< <a href="../target/aarch32/VMOV_h.html#VMOV_toh_A1">From general-purpose register</a>
  AMED_AARCH32_ENCODING_VMOV_h_A1, //!< <a href="../target/aarch32/VMOV_h.html#VMOV_h_A1">To general-purpose register</a>
  AMED_AARCH32_ENCODING_VMOV_toh_T1, //!< <a href="../target/aarch32/VMOV_h.html#VMOV_toh_T1">From general-purpose register</a>
  AMED_AARCH32_ENCODING_VMOV_h_T1, //!< <a href="../target/aarch32/VMOV_h.html#VMOV_h_T1">To general-purpose register</a>
  AMED_AARCH32_ENCODING_VMOV_i_A1_D, //!< <a href="../target/aarch32/VMOV_i.html#VMOV_i_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMOV_i_A1_Q, //!< <a href="../target/aarch32/VMOV_i.html#VMOV_i_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMOV_i_A2_H, //!< <a href="../target/aarch32/VMOV_i.html#VMOV_i_A2_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VMOV_i_A2_S, //!< <a href="../target/aarch32/VMOV_i.html#VMOV_i_A2_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VMOV_i_A2_D, //!< <a href="../target/aarch32/VMOV_i.html#VMOV_i_A2_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VMOV_i_A3_D, //!< <a href="../target/aarch32/VMOV_i.html#VMOV_i_A3_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMOV_i_A3_Q, //!< <a href="../target/aarch32/VMOV_i.html#VMOV_i_A3_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMOV_i_A4_D, //!< <a href="../target/aarch32/VMOV_i.html#VMOV_i_A4_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMOV_i_A4_Q, //!< <a href="../target/aarch32/VMOV_i.html#VMOV_i_A4_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMOV_i_A5_D, //!< <a href="../target/aarch32/VMOV_i.html#VMOV_i_A5_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMOV_i_A5_Q, //!< <a href="../target/aarch32/VMOV_i.html#VMOV_i_A5_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMOV_i_T1_D, //!< <a href="../target/aarch32/VMOV_i.html#VMOV_i_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMOV_i_T1_Q, //!< <a href="../target/aarch32/VMOV_i.html#VMOV_i_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMOV_i_T2_H, //!< <a href="../target/aarch32/VMOV_i.html#VMOV_i_T2_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VMOV_i_T2_S, //!< <a href="../target/aarch32/VMOV_i.html#VMOV_i_T2_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VMOV_i_T2_D, //!< <a href="../target/aarch32/VMOV_i.html#VMOV_i_T2_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VMOV_i_T3_D, //!< <a href="../target/aarch32/VMOV_i.html#VMOV_i_T3_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMOV_i_T3_Q, //!< <a href="../target/aarch32/VMOV_i.html#VMOV_i_T3_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMOV_i_T4_D, //!< <a href="../target/aarch32/VMOV_i.html#VMOV_i_T4_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMOV_i_T4_Q, //!< <a href="../target/aarch32/VMOV_i.html#VMOV_i_T4_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMOV_i_T5_D, //!< <a href="../target/aarch32/VMOV_i.html#VMOV_i_T5_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMOV_i_T5_Q, //!< <a href="../target/aarch32/VMOV_i.html#VMOV_i_T5_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMOV_r_A2_S, //!< <a href="../target/aarch32/VMOV_r.html#VMOV_r_A2_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VMOV_r_A2_D, //!< <a href="../target/aarch32/VMOV_r.html#VMOV_r_A2_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VMOV_r_T2_S, //!< <a href="../target/aarch32/VMOV_r.html#VMOV_r_T2_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VMOV_r_T2_D, //!< <a href="../target/aarch32/VMOV_r.html#VMOV_r_T2_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VMOV_rs_A1, //!< <a href="../target/aarch32/VMOV_rs.html#VMOV_rs_A1">A1</a>
  AMED_AARCH32_ENCODING_VMOV_rs_T1, //!< <a href="../target/aarch32/VMOV_rs.html#VMOV_rs_T1">T1</a>
  AMED_AARCH32_ENCODING_VMOV_tos_A1, //!< <a href="../target/aarch32/VMOV_s.html#VMOV_tos_A1">From general-purpose register</a>
  AMED_AARCH32_ENCODING_VMOV_s_A1, //!< <a href="../target/aarch32/VMOV_s.html#VMOV_s_A1">To general-purpose register</a>
  AMED_AARCH32_ENCODING_VMOV_tos_T1, //!< <a href="../target/aarch32/VMOV_s.html#VMOV_tos_T1">From general-purpose register</a>
  AMED_AARCH32_ENCODING_VMOV_s_T1, //!< <a href="../target/aarch32/VMOV_s.html#VMOV_s_T1">To general-purpose register</a>
  AMED_AARCH32_ENCODING_VMOV_sr_A1, //!< <a href="../target/aarch32/VMOV_sr.html#VMOV_sr_A1">A1</a>
  AMED_AARCH32_ENCODING_VMOV_sr_T1, //!< <a href="../target/aarch32/VMOV_sr.html#VMOV_sr_T1">T1</a>
  AMED_AARCH32_ENCODING_VMOV_toss_A1, //!< <a href="../target/aarch32/VMOV_ss.html#VMOV_toss_A1">From general-purpose registers</a>
  AMED_AARCH32_ENCODING_VMOV_ss_A1, //!< <a href="../target/aarch32/VMOV_ss.html#VMOV_ss_A1">To general-purpose registers</a>
  AMED_AARCH32_ENCODING_VMOV_toss_T1, //!< <a href="../target/aarch32/VMOV_ss.html#VMOV_toss_T1">From general-purpose registers</a>
  AMED_AARCH32_ENCODING_VMOV_ss_T1, //!< <a href="../target/aarch32/VMOV_ss.html#VMOV_ss_T1">To general-purpose registers</a>
  AMED_AARCH32_ENCODING_VMOVL_A1, //!< <a href="../target/aarch32/VMOVL.html#VMOVL_A1">A1</a>
  AMED_AARCH32_ENCODING_VMOVL_T1, //!< <a href="../target/aarch32/VMOVL.html#VMOVL_T1">T1</a>
  AMED_AARCH32_ENCODING_VMOVN_A1, //!< <a href="../target/aarch32/VMOVN.html#VMOVN_A1">A1</a>
  AMED_AARCH32_ENCODING_VMOVN_T1, //!< <a href="../target/aarch32/VMOVN.html#VMOVN_T1">T1</a>
  AMED_AARCH32_ENCODING_VMOVX_A1, //!< <a href="../target/aarch32/VMOVX.html#VMOVX_A1">A1</a>
  AMED_AARCH32_ENCODING_VMOVX_T1, //!< <a href="../target/aarch32/VMOVX.html#VMOVX_T1">T1</a>
  AMED_AARCH32_ENCODING_VMRS_A1_AS, //!< <a href="../target/aarch32/VMRS.html#VMRS_A1_AS">A1</a>
  AMED_AARCH32_ENCODING_VMRS_T1_AS, //!< <a href="../target/aarch32/VMRS.html#VMRS_T1_AS">T1</a>
  AMED_AARCH32_ENCODING_VMSR_A1_AS, //!< <a href="../target/aarch32/VMSR.html#VMSR_A1_AS">A1</a>
  AMED_AARCH32_ENCODING_VMSR_T1_AS, //!< <a href="../target/aarch32/VMSR.html#VMSR_T1_AS">T1</a>
  AMED_AARCH32_ENCODING_VMUL_f_A1_D, //!< <a href="../target/aarch32/VMUL_f.html#VMUL_f_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMUL_f_A1_Q, //!< <a href="../target/aarch32/VMUL_f.html#VMUL_f_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMUL_f_A2_H, //!< <a href="../target/aarch32/VMUL_f.html#VMUL_f_A2_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VMUL_f_A2_S, //!< <a href="../target/aarch32/VMUL_f.html#VMUL_f_A2_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VMUL_f_A2_D, //!< <a href="../target/aarch32/VMUL_f.html#VMUL_f_A2_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VMUL_f_T1_D, //!< <a href="../target/aarch32/VMUL_f.html#VMUL_f_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMUL_f_T1_Q, //!< <a href="../target/aarch32/VMUL_f.html#VMUL_f_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMUL_f_T2_H, //!< <a href="../target/aarch32/VMUL_f.html#VMUL_f_T2_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VMUL_f_T2_S, //!< <a href="../target/aarch32/VMUL_f.html#VMUL_f_T2_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VMUL_f_T2_D, //!< <a href="../target/aarch32/VMUL_f.html#VMUL_f_T2_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VMUL_i_A1_D, //!< <a href="../target/aarch32/VMUL_i.html#VMUL_i_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMUL_i_A1_Q, //!< <a href="../target/aarch32/VMUL_i.html#VMUL_i_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMUL_i_T1_D, //!< <a href="../target/aarch32/VMUL_i.html#VMUL_i_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMUL_i_T1_Q, //!< <a href="../target/aarch32/VMUL_i.html#VMUL_i_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMUL_s_A1_D, //!< <a href="../target/aarch32/VMUL_s.html#VMUL_s_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMUL_s_A1_Q, //!< <a href="../target/aarch32/VMUL_s.html#VMUL_s_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMUL_s_T1_D, //!< <a href="../target/aarch32/VMUL_s.html#VMUL_s_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMUL_s_T1_Q, //!< <a href="../target/aarch32/VMUL_s.html#VMUL_s_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMULL_i_A1, //!< <a href="../target/aarch32/VMULL_i.html#VMULL_i_A1">A1</a>
  AMED_AARCH32_ENCODING_VMULL_i_T1, //!< <a href="../target/aarch32/VMULL_i.html#VMULL_i_T1">T1</a>
  AMED_AARCH32_ENCODING_VMULL_s_A1, //!< <a href="../target/aarch32/VMULL_s.html#VMULL_s_A1">A1</a>
  AMED_AARCH32_ENCODING_VMULL_s_T1, //!< <a href="../target/aarch32/VMULL_s.html#VMULL_s_T1">T1</a>
  AMED_AARCH32_ENCODING_VMVN_i_A1_D, //!< <a href="../target/aarch32/VMVN_i.html#VMVN_i_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMVN_i_A1_Q, //!< <a href="../target/aarch32/VMVN_i.html#VMVN_i_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMVN_i_A2_D, //!< <a href="../target/aarch32/VMVN_i.html#VMVN_i_A2_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMVN_i_A2_Q, //!< <a href="../target/aarch32/VMVN_i.html#VMVN_i_A2_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMVN_i_A3_D, //!< <a href="../target/aarch32/VMVN_i.html#VMVN_i_A3_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMVN_i_A3_Q, //!< <a href="../target/aarch32/VMVN_i.html#VMVN_i_A3_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMVN_i_T1_D, //!< <a href="../target/aarch32/VMVN_i.html#VMVN_i_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMVN_i_T1_Q, //!< <a href="../target/aarch32/VMVN_i.html#VMVN_i_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMVN_i_T2_D, //!< <a href="../target/aarch32/VMVN_i.html#VMVN_i_T2_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMVN_i_T2_Q, //!< <a href="../target/aarch32/VMVN_i.html#VMVN_i_T2_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMVN_i_T3_D, //!< <a href="../target/aarch32/VMVN_i.html#VMVN_i_T3_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMVN_i_T3_Q, //!< <a href="../target/aarch32/VMVN_i.html#VMVN_i_T3_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMVN_r_A1_D, //!< <a href="../target/aarch32/VMVN_r.html#VMVN_r_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMVN_r_A1_Q, //!< <a href="../target/aarch32/VMVN_r.html#VMVN_r_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMVN_r_T1_D, //!< <a href="../target/aarch32/VMVN_r.html#VMVN_r_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMVN_r_T1_Q, //!< <a href="../target/aarch32/VMVN_r.html#VMVN_r_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VNEG_A1_D, //!< <a href="../target/aarch32/VNEG.html#VNEG_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VNEG_A1_Q, //!< <a href="../target/aarch32/VNEG.html#VNEG_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VNEG_A2_H, //!< <a href="../target/aarch32/VNEG.html#VNEG_A2_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VNEG_A2_S, //!< <a href="../target/aarch32/VNEG.html#VNEG_A2_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VNEG_A2_D, //!< <a href="../target/aarch32/VNEG.html#VNEG_A2_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VNEG_T1_D, //!< <a href="../target/aarch32/VNEG.html#VNEG_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VNEG_T1_Q, //!< <a href="../target/aarch32/VNEG.html#VNEG_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VNEG_T2_H, //!< <a href="../target/aarch32/VNEG.html#VNEG_T2_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VNEG_T2_S, //!< <a href="../target/aarch32/VNEG.html#VNEG_T2_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VNEG_T2_D, //!< <a href="../target/aarch32/VNEG.html#VNEG_T2_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VNMLA_A1_H, //!< <a href="../target/aarch32/VNMLA.html#VNMLA_A1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VNMLA_A1_S, //!< <a href="../target/aarch32/VNMLA.html#VNMLA_A1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VNMLA_A1_D, //!< <a href="../target/aarch32/VNMLA.html#VNMLA_A1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VNMLA_T1_H, //!< <a href="../target/aarch32/VNMLA.html#VNMLA_T1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VNMLA_T1_S, //!< <a href="../target/aarch32/VNMLA.html#VNMLA_T1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VNMLA_T1_D, //!< <a href="../target/aarch32/VNMLA.html#VNMLA_T1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VNMLS_A1_H, //!< <a href="../target/aarch32/VNMLS.html#VNMLS_A1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VNMLS_A1_S, //!< <a href="../target/aarch32/VNMLS.html#VNMLS_A1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VNMLS_A1_D, //!< <a href="../target/aarch32/VNMLS.html#VNMLS_A1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VNMLS_T1_H, //!< <a href="../target/aarch32/VNMLS.html#VNMLS_T1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VNMLS_T1_S, //!< <a href="../target/aarch32/VNMLS.html#VNMLS_T1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VNMLS_T1_D, //!< <a href="../target/aarch32/VNMLS.html#VNMLS_T1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VNMUL_A1_H, //!< <a href="../target/aarch32/VNMUL.html#VNMUL_A1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VNMUL_A1_S, //!< <a href="../target/aarch32/VNMUL.html#VNMUL_A1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VNMUL_A1_D, //!< <a href="../target/aarch32/VNMUL.html#VNMUL_A1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VNMUL_T1_H, //!< <a href="../target/aarch32/VNMUL.html#VNMUL_T1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VNMUL_T1_S, //!< <a href="../target/aarch32/VNMUL.html#VNMUL_T1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VNMUL_T1_D, //!< <a href="../target/aarch32/VNMUL.html#VNMUL_T1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VORN_r_A1_D, //!< <a href="../target/aarch32/VORN_r.html#VORN_r_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VORN_r_A1_Q, //!< <a href="../target/aarch32/VORN_r.html#VORN_r_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VORN_r_T1_D, //!< <a href="../target/aarch32/VORN_r.html#VORN_r_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VORN_r_T1_Q, //!< <a href="../target/aarch32/VORN_r.html#VORN_r_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VORR_i_A1_D, //!< <a href="../target/aarch32/VORR_i.html#VORR_i_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VORR_i_A1_Q, //!< <a href="../target/aarch32/VORR_i.html#VORR_i_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VORR_i_A2_D, //!< <a href="../target/aarch32/VORR_i.html#VORR_i_A2_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VORR_i_A2_Q, //!< <a href="../target/aarch32/VORR_i.html#VORR_i_A2_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VORR_i_T1_D, //!< <a href="../target/aarch32/VORR_i.html#VORR_i_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VORR_i_T1_Q, //!< <a href="../target/aarch32/VORR_i.html#VORR_i_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VORR_i_T2_D, //!< <a href="../target/aarch32/VORR_i.html#VORR_i_T2_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VORR_i_T2_Q, //!< <a href="../target/aarch32/VORR_i.html#VORR_i_T2_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VORR_r_A1_D, //!< <a href="../target/aarch32/VORR_r.html#VORR_r_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VORR_r_A1_Q, //!< <a href="../target/aarch32/VORR_r.html#VORR_r_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VORR_r_T1_D, //!< <a href="../target/aarch32/VORR_r.html#VORR_r_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VORR_r_T1_Q, //!< <a href="../target/aarch32/VORR_r.html#VORR_r_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VPADAL_A1_D, //!< <a href="../target/aarch32/VPADAL.html#VPADAL_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VPADAL_A1_Q, //!< <a href="../target/aarch32/VPADAL.html#VPADAL_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VPADAL_T1_D, //!< <a href="../target/aarch32/VPADAL.html#VPADAL_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VPADAL_T1_Q, //!< <a href="../target/aarch32/VPADAL.html#VPADAL_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VPADD_f_A1, //!< <a href="../target/aarch32/VPADD_f.html#VPADD_f_A1">A1</a>
  AMED_AARCH32_ENCODING_VPADD_f_T1, //!< <a href="../target/aarch32/VPADD_f.html#VPADD_f_T1">T1</a>
  AMED_AARCH32_ENCODING_VPADD_i_A1, //!< <a href="../target/aarch32/VPADD_i.html#VPADD_i_A1">A1</a>
  AMED_AARCH32_ENCODING_VPADD_i_T1, //!< <a href="../target/aarch32/VPADD_i.html#VPADD_i_T1">T1</a>
  AMED_AARCH32_ENCODING_VPADDL_A1_D, //!< <a href="../target/aarch32/VPADDL.html#VPADDL_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VPADDL_A1_Q, //!< <a href="../target/aarch32/VPADDL.html#VPADDL_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VPADDL_T1_D, //!< <a href="../target/aarch32/VPADDL.html#VPADDL_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VPADDL_T1_Q, //!< <a href="../target/aarch32/VPADDL.html#VPADDL_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VPMAX_f_A1, //!< <a href="../target/aarch32/VPMAX_f.html#VPMAX_f_A1">A1</a>
  AMED_AARCH32_ENCODING_VPMAX_f_T1, //!< <a href="../target/aarch32/VPMAX_f.html#VPMAX_f_T1">T1</a>
  AMED_AARCH32_ENCODING_VPMAX_i_A1, //!< <a href="../target/aarch32/VPMAX_i.html#VPMAX_i_A1">A1</a>
  AMED_AARCH32_ENCODING_VPMAX_i_T1, //!< <a href="../target/aarch32/VPMAX_i.html#VPMAX_i_T1">T1</a>
  AMED_AARCH32_ENCODING_VPMIN_f_A1, //!< <a href="../target/aarch32/VPMIN_f.html#VPMIN_f_A1">A1</a>
  AMED_AARCH32_ENCODING_VPMIN_f_T1, //!< <a href="../target/aarch32/VPMIN_f.html#VPMIN_f_T1">T1</a>
  AMED_AARCH32_ENCODING_VPMIN_i_A1, //!< <a href="../target/aarch32/VPMIN_i.html#VPMIN_i_A1">A1</a>
  AMED_AARCH32_ENCODING_VPMIN_i_T1, //!< <a href="../target/aarch32/VPMIN_i.html#VPMIN_i_T1">T1</a>
  AMED_AARCH32_ENCODING_VQABS_A1_D, //!< <a href="../target/aarch32/VQABS.html#VQABS_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQABS_A1_Q, //!< <a href="../target/aarch32/VQABS.html#VQABS_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQABS_T1_D, //!< <a href="../target/aarch32/VQABS.html#VQABS_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQABS_T1_Q, //!< <a href="../target/aarch32/VQABS.html#VQABS_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQADD_A1_D, //!< <a href="../target/aarch32/VQADD.html#VQADD_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQADD_A1_Q, //!< <a href="../target/aarch32/VQADD.html#VQADD_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQADD_T1_D, //!< <a href="../target/aarch32/VQADD.html#VQADD_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQADD_T1_Q, //!< <a href="../target/aarch32/VQADD.html#VQADD_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQDMLAL_A1, //!< <a href="../target/aarch32/VQDMLAL.html#VQDMLAL_A1">A1</a>
  AMED_AARCH32_ENCODING_VQDMLAL_A2, //!< <a href="../target/aarch32/VQDMLAL.html#VQDMLAL_A2">A2</a>
  AMED_AARCH32_ENCODING_VQDMLAL_T1, //!< <a href="../target/aarch32/VQDMLAL.html#VQDMLAL_T1">T1</a>
  AMED_AARCH32_ENCODING_VQDMLAL_T2, //!< <a href="../target/aarch32/VQDMLAL.html#VQDMLAL_T2">T2</a>
  AMED_AARCH32_ENCODING_VQDMLSL_A1, //!< <a href="../target/aarch32/VQDMLSL.html#VQDMLSL_A1">A1</a>
  AMED_AARCH32_ENCODING_VQDMLSL_A2, //!< <a href="../target/aarch32/VQDMLSL.html#VQDMLSL_A2">A2</a>
  AMED_AARCH32_ENCODING_VQDMLSL_T1, //!< <a href="../target/aarch32/VQDMLSL.html#VQDMLSL_T1">T1</a>
  AMED_AARCH32_ENCODING_VQDMLSL_T2, //!< <a href="../target/aarch32/VQDMLSL.html#VQDMLSL_T2">T2</a>
  AMED_AARCH32_ENCODING_VQDMULH_A1_D, //!< <a href="../target/aarch32/VQDMULH.html#VQDMULH_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQDMULH_A1_Q, //!< <a href="../target/aarch32/VQDMULH.html#VQDMULH_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQDMULH_A2_D, //!< <a href="../target/aarch32/VQDMULH.html#VQDMULH_A2_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQDMULH_A2_Q, //!< <a href="../target/aarch32/VQDMULH.html#VQDMULH_A2_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQDMULH_T1_D, //!< <a href="../target/aarch32/VQDMULH.html#VQDMULH_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQDMULH_T1_Q, //!< <a href="../target/aarch32/VQDMULH.html#VQDMULH_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQDMULH_T2_D, //!< <a href="../target/aarch32/VQDMULH.html#VQDMULH_T2_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQDMULH_T2_Q, //!< <a href="../target/aarch32/VQDMULH.html#VQDMULH_T2_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQDMULL_A1, //!< <a href="../target/aarch32/VQDMULL.html#VQDMULL_A1">A1</a>
  AMED_AARCH32_ENCODING_VQDMULL_A2, //!< <a href="../target/aarch32/VQDMULL.html#VQDMULL_A2">A2</a>
  AMED_AARCH32_ENCODING_VQDMULL_T1, //!< <a href="../target/aarch32/VQDMULL.html#VQDMULL_T1">T1</a>
  AMED_AARCH32_ENCODING_VQDMULL_T2, //!< <a href="../target/aarch32/VQDMULL.html#VQDMULL_T2">T2</a>
  AMED_AARCH32_ENCODING_VQMOVN_A1, //!< <a href="../target/aarch32/VQMOVN.html#VQMOVN_A1">Signed result</a>
  AMED_AARCH32_ENCODING_VQMOVUN_A1, //!< <a href="../target/aarch32/VQMOVN.html#VQMOVUN_A1">Unsigned result</a>
  AMED_AARCH32_ENCODING_VQMOVN_T1, //!< <a href="../target/aarch32/VQMOVN.html#VQMOVN_T1">Signed result</a>
  AMED_AARCH32_ENCODING_VQMOVUN_T1, //!< <a href="../target/aarch32/VQMOVN.html#VQMOVUN_T1">Unsigned result</a>
  AMED_AARCH32_ENCODING_VQNEG_A1_D, //!< <a href="../target/aarch32/VQNEG.html#VQNEG_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQNEG_A1_Q, //!< <a href="../target/aarch32/VQNEG.html#VQNEG_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQNEG_T1_D, //!< <a href="../target/aarch32/VQNEG.html#VQNEG_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQNEG_T1_Q, //!< <a href="../target/aarch32/VQNEG.html#VQNEG_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQRDMLAH_A1_D, //!< <a href="../target/aarch32/VQRDMLAH.html#VQRDMLAH_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQRDMLAH_A1_Q, //!< <a href="../target/aarch32/VQRDMLAH.html#VQRDMLAH_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQRDMLAH_A2_D, //!< <a href="../target/aarch32/VQRDMLAH.html#VQRDMLAH_A2_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQRDMLAH_A2_Q, //!< <a href="../target/aarch32/VQRDMLAH.html#VQRDMLAH_A2_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQRDMLAH_T1_D, //!< <a href="../target/aarch32/VQRDMLAH.html#VQRDMLAH_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQRDMLAH_T1_Q, //!< <a href="../target/aarch32/VQRDMLAH.html#VQRDMLAH_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQRDMLAH_T2_D, //!< <a href="../target/aarch32/VQRDMLAH.html#VQRDMLAH_T2_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQRDMLAH_T2_Q, //!< <a href="../target/aarch32/VQRDMLAH.html#VQRDMLAH_T2_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQRDMLSH_A1_D, //!< <a href="../target/aarch32/VQRDMLSH.html#VQRDMLSH_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQRDMLSH_A1_Q, //!< <a href="../target/aarch32/VQRDMLSH.html#VQRDMLSH_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQRDMLSH_A2_D, //!< <a href="../target/aarch32/VQRDMLSH.html#VQRDMLSH_A2_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQRDMLSH_A2_Q, //!< <a href="../target/aarch32/VQRDMLSH.html#VQRDMLSH_A2_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQRDMLSH_T1_D, //!< <a href="../target/aarch32/VQRDMLSH.html#VQRDMLSH_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQRDMLSH_T1_Q, //!< <a href="../target/aarch32/VQRDMLSH.html#VQRDMLSH_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQRDMLSH_T2_D, //!< <a href="../target/aarch32/VQRDMLSH.html#VQRDMLSH_T2_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQRDMLSH_T2_Q, //!< <a href="../target/aarch32/VQRDMLSH.html#VQRDMLSH_T2_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQRDMULH_A1_D, //!< <a href="../target/aarch32/VQRDMULH.html#VQRDMULH_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQRDMULH_A1_Q, //!< <a href="../target/aarch32/VQRDMULH.html#VQRDMULH_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQRDMULH_A2_D, //!< <a href="../target/aarch32/VQRDMULH.html#VQRDMULH_A2_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQRDMULH_A2_Q, //!< <a href="../target/aarch32/VQRDMULH.html#VQRDMULH_A2_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQRDMULH_T1_D, //!< <a href="../target/aarch32/VQRDMULH.html#VQRDMULH_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQRDMULH_T1_Q, //!< <a href="../target/aarch32/VQRDMULH.html#VQRDMULH_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQRDMULH_T2_D, //!< <a href="../target/aarch32/VQRDMULH.html#VQRDMULH_T2_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQRDMULH_T2_Q, //!< <a href="../target/aarch32/VQRDMULH.html#VQRDMULH_T2_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQRSHL_A1_D, //!< <a href="../target/aarch32/VQRSHL.html#VQRSHL_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQRSHL_A1_Q, //!< <a href="../target/aarch32/VQRSHL.html#VQRSHL_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQRSHL_T1_D, //!< <a href="../target/aarch32/VQRSHL.html#VQRSHL_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQRSHL_T1_Q, //!< <a href="../target/aarch32/VQRSHL.html#VQRSHL_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQRSHRN_A1, //!< <a href="../target/aarch32/VQRSHRN.html#VQRSHRN_A1">Signed result</a>
  AMED_AARCH32_ENCODING_VQRSHRUN_A1, //!< <a href="../target/aarch32/VQRSHRN.html#VQRSHRUN_A1">Unsigned result</a>
  AMED_AARCH32_ENCODING_VQRSHRN_T1, //!< <a href="../target/aarch32/VQRSHRN.html#VQRSHRN_T1">Signed result</a>
  AMED_AARCH32_ENCODING_VQRSHRUN_T1, //!< <a href="../target/aarch32/VQRSHRN.html#VQRSHRUN_T1">Unsigned result</a>
  AMED_AARCH32_ENCODING_VQSHL_i_A1_D, //!< <a href="../target/aarch32/VQSHL_i.html#VQSHL_i_A1_D">VQSHL,double,signed-result</a>
  AMED_AARCH32_ENCODING_VQSHL_i_A1_Q, //!< <a href="../target/aarch32/VQSHL_i.html#VQSHL_i_A1_Q">VQSHL,quad,signed-result</a>
  AMED_AARCH32_ENCODING_VQSHLU_i_A1_D, //!< <a href="../target/aarch32/VQSHL_i.html#VQSHLU_i_A1_D">VQSHLU,double,unsigned-result</a>
  AMED_AARCH32_ENCODING_VQSHLU_i_A1_Q, //!< <a href="../target/aarch32/VQSHL_i.html#VQSHLU_i_A1_Q">VQSHLU,quad,unsigned-result</a>
  AMED_AARCH32_ENCODING_VQSHL_i_T1_D, //!< <a href="../target/aarch32/VQSHL_i.html#VQSHL_i_T1_D">VQSHL,double,signed-result</a>
  AMED_AARCH32_ENCODING_VQSHL_i_T1_Q, //!< <a href="../target/aarch32/VQSHL_i.html#VQSHL_i_T1_Q">VQSHL,quad,signed-result</a>
  AMED_AARCH32_ENCODING_VQSHLU_i_T1_D, //!< <a href="../target/aarch32/VQSHL_i.html#VQSHLU_i_T1_D">VQSHLU,double,unsigned-result</a>
  AMED_AARCH32_ENCODING_VQSHLU_i_T1_Q, //!< <a href="../target/aarch32/VQSHL_i.html#VQSHLU_i_T1_Q">VQSHLU,quad,unsigned-result</a>
  AMED_AARCH32_ENCODING_VQSHL_r_A1_D, //!< <a href="../target/aarch32/VQSHL_r.html#VQSHL_r_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQSHL_r_A1_Q, //!< <a href="../target/aarch32/VQSHL_r.html#VQSHL_r_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQSHL_r_T1_D, //!< <a href="../target/aarch32/VQSHL_r.html#VQSHL_r_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQSHL_r_T1_Q, //!< <a href="../target/aarch32/VQSHL_r.html#VQSHL_r_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQSHRN_A1, //!< <a href="../target/aarch32/VQSHRN.html#VQSHRN_A1">Signed result</a>
  AMED_AARCH32_ENCODING_VQSHRUN_A1, //!< <a href="../target/aarch32/VQSHRN.html#VQSHRUN_A1">Unsigned result</a>
  AMED_AARCH32_ENCODING_VQSHRN_T1, //!< <a href="../target/aarch32/VQSHRN.html#VQSHRN_T1">Signed result</a>
  AMED_AARCH32_ENCODING_VQSHRUN_T1, //!< <a href="../target/aarch32/VQSHRN.html#VQSHRUN_T1">Unsigned result</a>
  AMED_AARCH32_ENCODING_VQSUB_A1_D, //!< <a href="../target/aarch32/VQSUB.html#VQSUB_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQSUB_A1_Q, //!< <a href="../target/aarch32/VQSUB.html#VQSUB_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQSUB_T1_D, //!< <a href="../target/aarch32/VQSUB.html#VQSUB_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VQSUB_T1_Q, //!< <a href="../target/aarch32/VQSUB.html#VQSUB_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRADDHN_A1, //!< <a href="../target/aarch32/VRADDHN.html#VRADDHN_A1">A1</a>
  AMED_AARCH32_ENCODING_VRADDHN_T1, //!< <a href="../target/aarch32/VRADDHN.html#VRADDHN_T1">T1</a>
  AMED_AARCH32_ENCODING_VRECPE_A1_D, //!< <a href="../target/aarch32/VRECPE.html#VRECPE_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRECPE_A1_Q, //!< <a href="../target/aarch32/VRECPE.html#VRECPE_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRECPE_T1_D, //!< <a href="../target/aarch32/VRECPE.html#VRECPE_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRECPE_T1_Q, //!< <a href="../target/aarch32/VRECPE.html#VRECPE_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRECPS_A1_D, //!< <a href="../target/aarch32/VRECPS.html#VRECPS_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRECPS_A1_Q, //!< <a href="../target/aarch32/VRECPS.html#VRECPS_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRECPS_T1_D, //!< <a href="../target/aarch32/VRECPS.html#VRECPS_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRECPS_T1_Q, //!< <a href="../target/aarch32/VRECPS.html#VRECPS_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VREV16_A1_D, //!< <a href="../target/aarch32/VREV16.html#VREV16_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VREV16_A1_Q, //!< <a href="../target/aarch32/VREV16.html#VREV16_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VREV16_T1_D, //!< <a href="../target/aarch32/VREV16.html#VREV16_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VREV16_T1_Q, //!< <a href="../target/aarch32/VREV16.html#VREV16_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VREV32_A1_D, //!< <a href="../target/aarch32/VREV32.html#VREV32_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VREV32_A1_Q, //!< <a href="../target/aarch32/VREV32.html#VREV32_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VREV32_T1_D, //!< <a href="../target/aarch32/VREV32.html#VREV32_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VREV32_T1_Q, //!< <a href="../target/aarch32/VREV32.html#VREV32_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VREV64_A1_D, //!< <a href="../target/aarch32/VREV64.html#VREV64_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VREV64_A1_Q, //!< <a href="../target/aarch32/VREV64.html#VREV64_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VREV64_T1_D, //!< <a href="../target/aarch32/VREV64.html#VREV64_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VREV64_T1_Q, //!< <a href="../target/aarch32/VREV64.html#VREV64_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRHADD_A1_D, //!< <a href="../target/aarch32/VRHADD.html#VRHADD_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRHADD_A1_Q, //!< <a href="../target/aarch32/VRHADD.html#VRHADD_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRHADD_T1_D, //!< <a href="../target/aarch32/VRHADD.html#VRHADD_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRHADD_T1_Q, //!< <a href="../target/aarch32/VRHADD.html#VRHADD_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRINTA_asimd_A1_D, //!< <a href="../target/aarch32/VRINTA_asimd.html#VRINTA_asimd_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRINTA_asimd_A1_Q, //!< <a href="../target/aarch32/VRINTA_asimd.html#VRINTA_asimd_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRINTA_asimd_T1_D, //!< <a href="../target/aarch32/VRINTA_asimd.html#VRINTA_asimd_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRINTA_asimd_T1_Q, //!< <a href="../target/aarch32/VRINTA_asimd.html#VRINTA_asimd_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRINTA_vfp_A1_H, //!< <a href="../target/aarch32/VRINTA_vfp.html#VRINTA_vfp_A1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTA_vfp_A1_S, //!< <a href="../target/aarch32/VRINTA_vfp.html#VRINTA_vfp_A1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTA_vfp_A1_D, //!< <a href="../target/aarch32/VRINTA_vfp.html#VRINTA_vfp_A1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTA_vfp_T1_H, //!< <a href="../target/aarch32/VRINTA_vfp.html#VRINTA_vfp_T1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTA_vfp_T1_S, //!< <a href="../target/aarch32/VRINTA_vfp.html#VRINTA_vfp_T1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTA_vfp_T1_D, //!< <a href="../target/aarch32/VRINTA_vfp.html#VRINTA_vfp_T1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTM_asimd_A1_D, //!< <a href="../target/aarch32/VRINTM_asimd.html#VRINTM_asimd_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRINTM_asimd_A1_Q, //!< <a href="../target/aarch32/VRINTM_asimd.html#VRINTM_asimd_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRINTM_asimd_T1_D, //!< <a href="../target/aarch32/VRINTM_asimd.html#VRINTM_asimd_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRINTM_asimd_T1_Q, //!< <a href="../target/aarch32/VRINTM_asimd.html#VRINTM_asimd_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRINTM_vfp_A1_H, //!< <a href="../target/aarch32/VRINTM_vfp.html#VRINTM_vfp_A1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTM_vfp_A1_S, //!< <a href="../target/aarch32/VRINTM_vfp.html#VRINTM_vfp_A1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTM_vfp_A1_D, //!< <a href="../target/aarch32/VRINTM_vfp.html#VRINTM_vfp_A1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTM_vfp_T1_H, //!< <a href="../target/aarch32/VRINTM_vfp.html#VRINTM_vfp_T1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTM_vfp_T1_S, //!< <a href="../target/aarch32/VRINTM_vfp.html#VRINTM_vfp_T1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTM_vfp_T1_D, //!< <a href="../target/aarch32/VRINTM_vfp.html#VRINTM_vfp_T1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTN_asimd_A1_D, //!< <a href="../target/aarch32/VRINTN_asimd.html#VRINTN_asimd_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRINTN_asimd_A1_Q, //!< <a href="../target/aarch32/VRINTN_asimd.html#VRINTN_asimd_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRINTN_asimd_T1_D, //!< <a href="../target/aarch32/VRINTN_asimd.html#VRINTN_asimd_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRINTN_asimd_T1_Q, //!< <a href="../target/aarch32/VRINTN_asimd.html#VRINTN_asimd_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRINTN_vfp_A1_H, //!< <a href="../target/aarch32/VRINTN_vfp.html#VRINTN_vfp_A1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTN_vfp_A1_S, //!< <a href="../target/aarch32/VRINTN_vfp.html#VRINTN_vfp_A1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTN_vfp_A1_D, //!< <a href="../target/aarch32/VRINTN_vfp.html#VRINTN_vfp_A1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTN_vfp_T1_H, //!< <a href="../target/aarch32/VRINTN_vfp.html#VRINTN_vfp_T1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTN_vfp_T1_S, //!< <a href="../target/aarch32/VRINTN_vfp.html#VRINTN_vfp_T1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTN_vfp_T1_D, //!< <a href="../target/aarch32/VRINTN_vfp.html#VRINTN_vfp_T1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTP_asimd_A1_D, //!< <a href="../target/aarch32/VRINTP_asimd.html#VRINTP_asimd_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRINTP_asimd_A1_Q, //!< <a href="../target/aarch32/VRINTP_asimd.html#VRINTP_asimd_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRINTP_asimd_T1_D, //!< <a href="../target/aarch32/VRINTP_asimd.html#VRINTP_asimd_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRINTP_asimd_T1_Q, //!< <a href="../target/aarch32/VRINTP_asimd.html#VRINTP_asimd_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRINTP_vfp_A1_H, //!< <a href="../target/aarch32/VRINTP_vfp.html#VRINTP_vfp_A1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTP_vfp_A1_S, //!< <a href="../target/aarch32/VRINTP_vfp.html#VRINTP_vfp_A1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTP_vfp_A1_D, //!< <a href="../target/aarch32/VRINTP_vfp.html#VRINTP_vfp_A1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTP_vfp_T1_H, //!< <a href="../target/aarch32/VRINTP_vfp.html#VRINTP_vfp_T1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTP_vfp_T1_S, //!< <a href="../target/aarch32/VRINTP_vfp.html#VRINTP_vfp_T1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTP_vfp_T1_D, //!< <a href="../target/aarch32/VRINTP_vfp.html#VRINTP_vfp_T1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTR_vfp_A1_H, //!< <a href="../target/aarch32/VRINTR_vfp.html#VRINTR_vfp_A1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTR_vfp_A1_S, //!< <a href="../target/aarch32/VRINTR_vfp.html#VRINTR_vfp_A1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTR_vfp_A1_D, //!< <a href="../target/aarch32/VRINTR_vfp.html#VRINTR_vfp_A1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTR_vfp_T1_H, //!< <a href="../target/aarch32/VRINTR_vfp.html#VRINTR_vfp_T1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTR_vfp_T1_S, //!< <a href="../target/aarch32/VRINTR_vfp.html#VRINTR_vfp_T1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTR_vfp_T1_D, //!< <a href="../target/aarch32/VRINTR_vfp.html#VRINTR_vfp_T1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTX_asimd_A1_D, //!< <a href="../target/aarch32/VRINTX_asimd.html#VRINTX_asimd_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRINTX_asimd_A1_Q, //!< <a href="../target/aarch32/VRINTX_asimd.html#VRINTX_asimd_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRINTX_asimd_T1_D, //!< <a href="../target/aarch32/VRINTX_asimd.html#VRINTX_asimd_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRINTX_asimd_T1_Q, //!< <a href="../target/aarch32/VRINTX_asimd.html#VRINTX_asimd_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRINTX_vfp_A1_H, //!< <a href="../target/aarch32/VRINTX_vfp.html#VRINTX_vfp_A1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTX_vfp_A1_S, //!< <a href="../target/aarch32/VRINTX_vfp.html#VRINTX_vfp_A1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTX_vfp_A1_D, //!< <a href="../target/aarch32/VRINTX_vfp.html#VRINTX_vfp_A1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTX_vfp_T1_H, //!< <a href="../target/aarch32/VRINTX_vfp.html#VRINTX_vfp_T1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTX_vfp_T1_S, //!< <a href="../target/aarch32/VRINTX_vfp.html#VRINTX_vfp_T1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTX_vfp_T1_D, //!< <a href="../target/aarch32/VRINTX_vfp.html#VRINTX_vfp_T1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTZ_asimd_A1_D, //!< <a href="../target/aarch32/VRINTZ_asimd.html#VRINTZ_asimd_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRINTZ_asimd_A1_Q, //!< <a href="../target/aarch32/VRINTZ_asimd.html#VRINTZ_asimd_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRINTZ_asimd_T1_D, //!< <a href="../target/aarch32/VRINTZ_asimd.html#VRINTZ_asimd_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRINTZ_asimd_T1_Q, //!< <a href="../target/aarch32/VRINTZ_asimd.html#VRINTZ_asimd_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRINTZ_vfp_A1_H, //!< <a href="../target/aarch32/VRINTZ_vfp.html#VRINTZ_vfp_A1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTZ_vfp_A1_S, //!< <a href="../target/aarch32/VRINTZ_vfp.html#VRINTZ_vfp_A1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTZ_vfp_A1_D, //!< <a href="../target/aarch32/VRINTZ_vfp.html#VRINTZ_vfp_A1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTZ_vfp_T1_H, //!< <a href="../target/aarch32/VRINTZ_vfp.html#VRINTZ_vfp_T1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTZ_vfp_T1_S, //!< <a href="../target/aarch32/VRINTZ_vfp.html#VRINTZ_vfp_T1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VRINTZ_vfp_T1_D, //!< <a href="../target/aarch32/VRINTZ_vfp.html#VRINTZ_vfp_T1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VRSHL_A1_D, //!< <a href="../target/aarch32/VRSHL.html#VRSHL_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRSHL_A1_Q, //!< <a href="../target/aarch32/VRSHL.html#VRSHL_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRSHL_T1_D, //!< <a href="../target/aarch32/VRSHL.html#VRSHL_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRSHL_T1_Q, //!< <a href="../target/aarch32/VRSHL.html#VRSHL_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRSHR_A1_D, //!< <a href="../target/aarch32/VRSHR.html#VRSHR_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRSHR_A1_Q, //!< <a href="../target/aarch32/VRSHR.html#VRSHR_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRSHR_T1_D, //!< <a href="../target/aarch32/VRSHR.html#VRSHR_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRSHR_T1_Q, //!< <a href="../target/aarch32/VRSHR.html#VRSHR_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRSHRN_A1, //!< <a href="../target/aarch32/VRSHRN.html#VRSHRN_A1">A1</a>
  AMED_AARCH32_ENCODING_VRSHRN_T1, //!< <a href="../target/aarch32/VRSHRN.html#VRSHRN_T1">T1</a>
  AMED_AARCH32_ENCODING_VRSQRTE_A1_D, //!< <a href="../target/aarch32/VRSQRTE.html#VRSQRTE_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRSQRTE_A1_Q, //!< <a href="../target/aarch32/VRSQRTE.html#VRSQRTE_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRSQRTE_T1_D, //!< <a href="../target/aarch32/VRSQRTE.html#VRSQRTE_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRSQRTE_T1_Q, //!< <a href="../target/aarch32/VRSQRTE.html#VRSQRTE_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRSQRTS_A1_D, //!< <a href="../target/aarch32/VRSQRTS.html#VRSQRTS_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRSQRTS_A1_Q, //!< <a href="../target/aarch32/VRSQRTS.html#VRSQRTS_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRSQRTS_T1_D, //!< <a href="../target/aarch32/VRSQRTS.html#VRSQRTS_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRSQRTS_T1_Q, //!< <a href="../target/aarch32/VRSQRTS.html#VRSQRTS_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRSRA_A1_Q, //!< <a href="../target/aarch32/VRSRA.html#VRSRA_A1_Q">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRSRA_A1_D, //!< <a href="../target/aarch32/VRSRA.html#VRSRA_A1_D">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRSRA_T1_D, //!< <a href="../target/aarch32/VRSRA.html#VRSRA_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRSRA_T1_Q, //!< <a href="../target/aarch32/VRSRA.html#VRSRA_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRSUBHN_A1, //!< <a href="../target/aarch32/VRSUBHN.html#VRSUBHN_A1">A1</a>
  AMED_AARCH32_ENCODING_VRSUBHN_T1, //!< <a href="../target/aarch32/VRSUBHN.html#VRSUBHN_T1">T1</a>
  AMED_AARCH32_ENCODING_VSDOT_A1_D, //!< <a href="../target/aarch32/VSDOT.html#VSDOT_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSDOT_A1_Q, //!< <a href="../target/aarch32/VSDOT.html#VSDOT_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSDOT_T1_D, //!< <a href="../target/aarch32/VSDOT.html#VSDOT_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSDOT_T1_Q, //!< <a href="../target/aarch32/VSDOT.html#VSDOT_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSDOT_s_A1_D, //!< <a href="../target/aarch32/VSDOT_s.html#VSDOT_s_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSDOT_s_A1_Q, //!< <a href="../target/aarch32/VSDOT_s.html#VSDOT_s_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSDOT_s_T1_D, //!< <a href="../target/aarch32/VSDOT_s.html#VSDOT_s_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSDOT_s_T1_Q, //!< <a href="../target/aarch32/VSDOT_s.html#VSDOT_s_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSELEQ_A1_D, //!< <a href="../target/aarch32/VSEL.html#VSELEQ_A1_D">VSELEQ,doubleprec</a>
  AMED_AARCH32_ENCODING_VSELEQ_A1_H, //!< <a href="../target/aarch32/VSEL.html#VSELEQ_A1_H">VSELEQ,halfprec</a>
  AMED_AARCH32_ENCODING_VSELEQ_A1_S, //!< <a href="../target/aarch32/VSEL.html#VSELEQ_A1_S">VSELEQ,singleprec</a>
  AMED_AARCH32_ENCODING_VSELGE_A1_D, //!< <a href="../target/aarch32/VSEL.html#VSELGE_A1_D">VSELGE,doubleprec</a>
  AMED_AARCH32_ENCODING_VSELGE_A1_H, //!< <a href="../target/aarch32/VSEL.html#VSELGE_A1_H">VSELGE,halfprec</a>
  AMED_AARCH32_ENCODING_VSELGE_A1_S, //!< <a href="../target/aarch32/VSEL.html#VSELGE_A1_S">VSELGE,singleprec</a>
  AMED_AARCH32_ENCODING_VSELGT_A1_D, //!< <a href="../target/aarch32/VSEL.html#VSELGT_A1_D">VSELGT,doubleprec</a>
  AMED_AARCH32_ENCODING_VSELGT_A1_H, //!< <a href="../target/aarch32/VSEL.html#VSELGT_A1_H">VSELGT,halfprec</a>
  AMED_AARCH32_ENCODING_VSELGT_A1_S, //!< <a href="../target/aarch32/VSEL.html#VSELGT_A1_S">VSELGT,singleprec</a>
  AMED_AARCH32_ENCODING_VSELVS_A1_D, //!< <a href="../target/aarch32/VSEL.html#VSELVS_A1_D">VSELVS,doubleprec</a>
  AMED_AARCH32_ENCODING_VSELVS_A1_H, //!< <a href="../target/aarch32/VSEL.html#VSELVS_A1_H">VSELVS,halfprec</a>
  AMED_AARCH32_ENCODING_VSELVS_A1_S, //!< <a href="../target/aarch32/VSEL.html#VSELVS_A1_S">VSELVS,singleprec</a>
  AMED_AARCH32_ENCODING_VSELEQ_T1_D, //!< <a href="../target/aarch32/VSEL.html#VSELEQ_T1_D">VSELEQ,doubleprec</a>
  AMED_AARCH32_ENCODING_VSELEQ_T1_H, //!< <a href="../target/aarch32/VSEL.html#VSELEQ_T1_H">VSELEQ,halfprec</a>
  AMED_AARCH32_ENCODING_VSELEQ_T1_S, //!< <a href="../target/aarch32/VSEL.html#VSELEQ_T1_S">VSELEQ,singleprec</a>
  AMED_AARCH32_ENCODING_VSELGE_T1_D, //!< <a href="../target/aarch32/VSEL.html#VSELGE_T1_D">VSELGE,doubleprec</a>
  AMED_AARCH32_ENCODING_VSELGE_T1_H, //!< <a href="../target/aarch32/VSEL.html#VSELGE_T1_H">VSELGE,halfprec</a>
  AMED_AARCH32_ENCODING_VSELGE_T1_S, //!< <a href="../target/aarch32/VSEL.html#VSELGE_T1_S">VSELGE,singleprec</a>
  AMED_AARCH32_ENCODING_VSELGT_T1_D, //!< <a href="../target/aarch32/VSEL.html#VSELGT_T1_D">VSELGT,doubleprec</a>
  AMED_AARCH32_ENCODING_VSELGT_T1_H, //!< <a href="../target/aarch32/VSEL.html#VSELGT_T1_H">VSELGT,halfprec</a>
  AMED_AARCH32_ENCODING_VSELGT_T1_S, //!< <a href="../target/aarch32/VSEL.html#VSELGT_T1_S">VSELGT,singleprec</a>
  AMED_AARCH32_ENCODING_VSELVS_T1_D, //!< <a href="../target/aarch32/VSEL.html#VSELVS_T1_D">VSELVS,doubleprec</a>
  AMED_AARCH32_ENCODING_VSELVS_T1_H, //!< <a href="../target/aarch32/VSEL.html#VSELVS_T1_H">VSELVS,halfprec</a>
  AMED_AARCH32_ENCODING_VSELVS_T1_S, //!< <a href="../target/aarch32/VSEL.html#VSELVS_T1_S">VSELVS,singleprec</a>
  AMED_AARCH32_ENCODING_VSHL_i_A1_D, //!< <a href="../target/aarch32/VSHL_i.html#VSHL_i_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSHL_i_A1_Q, //!< <a href="../target/aarch32/VSHL_i.html#VSHL_i_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSHL_i_T1_D, //!< <a href="../target/aarch32/VSHL_i.html#VSHL_i_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSHL_i_T1_Q, //!< <a href="../target/aarch32/VSHL_i.html#VSHL_i_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSHL_r_A1_D, //!< <a href="../target/aarch32/VSHL_r.html#VSHL_r_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSHL_r_A1_Q, //!< <a href="../target/aarch32/VSHL_r.html#VSHL_r_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSHL_r_T1_D, //!< <a href="../target/aarch32/VSHL_r.html#VSHL_r_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSHL_r_T1_Q, //!< <a href="../target/aarch32/VSHL_r.html#VSHL_r_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSHLL_A1, //!< <a href="../target/aarch32/VSHLL.html#VSHLL_A1">A1</a>
  AMED_AARCH32_ENCODING_VSHLL_A2, //!< <a href="../target/aarch32/VSHLL.html#VSHLL_A2">A2</a>
  AMED_AARCH32_ENCODING_VSHLL_T1, //!< <a href="../target/aarch32/VSHLL.html#VSHLL_T1">T1</a>
  AMED_AARCH32_ENCODING_VSHLL_T2, //!< <a href="../target/aarch32/VSHLL.html#VSHLL_T2">T2</a>
  AMED_AARCH32_ENCODING_VSHR_A1_D, //!< <a href="../target/aarch32/VSHR.html#VSHR_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSHR_A1_Q, //!< <a href="../target/aarch32/VSHR.html#VSHR_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSHR_T1_D, //!< <a href="../target/aarch32/VSHR.html#VSHR_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSHR_T1_Q, //!< <a href="../target/aarch32/VSHR.html#VSHR_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSHRN_A1, //!< <a href="../target/aarch32/VSHRN.html#VSHRN_A1">A1</a>
  AMED_AARCH32_ENCODING_VSHRN_T1, //!< <a href="../target/aarch32/VSHRN.html#VSHRN_T1">T1</a>
  AMED_AARCH32_ENCODING_VSLI_A1_D, //!< <a href="../target/aarch32/VSLI.html#VSLI_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSLI_A1_Q, //!< <a href="../target/aarch32/VSLI.html#VSLI_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSLI_T1_D, //!< <a href="../target/aarch32/VSLI.html#VSLI_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSLI_T1_Q, //!< <a href="../target/aarch32/VSLI.html#VSLI_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSMMLA_A1_Q, //!< <a href="../target/aarch32/VSMMLA.html#VSMMLA_A1_Q">A1</a>
  AMED_AARCH32_ENCODING_VSMMLA_T1_Q, //!< <a href="../target/aarch32/VSMMLA.html#VSMMLA_T1_Q">T1</a>
  AMED_AARCH32_ENCODING_VSQRT_A1_H, //!< <a href="../target/aarch32/VSQRT.html#VSQRT_A1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VSQRT_A1_S, //!< <a href="../target/aarch32/VSQRT.html#VSQRT_A1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VSQRT_A1_D, //!< <a href="../target/aarch32/VSQRT.html#VSQRT_A1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VSQRT_T1_H, //!< <a href="../target/aarch32/VSQRT.html#VSQRT_T1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VSQRT_T1_S, //!< <a href="../target/aarch32/VSQRT.html#VSQRT_T1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VSQRT_T1_D, //!< <a href="../target/aarch32/VSQRT.html#VSQRT_T1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VSRA_A1_D, //!< <a href="../target/aarch32/VSRA.html#VSRA_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSRA_A1_Q, //!< <a href="../target/aarch32/VSRA.html#VSRA_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSRA_T1_D, //!< <a href="../target/aarch32/VSRA.html#VSRA_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSRA_T1_Q, //!< <a href="../target/aarch32/VSRA.html#VSRA_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSRI_A1_D, //!< <a href="../target/aarch32/VSRI.html#VSRI_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSRI_A1_Q, //!< <a href="../target/aarch32/VSRI.html#VSRI_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSRI_T1_D, //!< <a href="../target/aarch32/VSRI.html#VSRI_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSRI_T1_Q, //!< <a href="../target/aarch32/VSRI.html#VSRI_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VST1_1_A1_nowb, //!< <a href="../target/aarch32/VST1_1.html#VST1_1_A1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST1_1_A1_posti, //!< <a href="../target/aarch32/VST1_1.html#VST1_1_A1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST1_1_A1_postr, //!< <a href="../target/aarch32/VST1_1.html#VST1_1_A1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST1_1_A2_nowb, //!< <a href="../target/aarch32/VST1_1.html#VST1_1_A2_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST1_1_A2_posti, //!< <a href="../target/aarch32/VST1_1.html#VST1_1_A2_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST1_1_A2_postr, //!< <a href="../target/aarch32/VST1_1.html#VST1_1_A2_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST1_1_A3_nowb, //!< <a href="../target/aarch32/VST1_1.html#VST1_1_A3_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST1_1_A3_posti, //!< <a href="../target/aarch32/VST1_1.html#VST1_1_A3_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST1_1_A3_postr, //!< <a href="../target/aarch32/VST1_1.html#VST1_1_A3_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST1_1_T1_nowb, //!< <a href="../target/aarch32/VST1_1.html#VST1_1_T1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST1_1_T1_posti, //!< <a href="../target/aarch32/VST1_1.html#VST1_1_T1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST1_1_T1_postr, //!< <a href="../target/aarch32/VST1_1.html#VST1_1_T1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST1_1_T2_nowb, //!< <a href="../target/aarch32/VST1_1.html#VST1_1_T2_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST1_1_T2_posti, //!< <a href="../target/aarch32/VST1_1.html#VST1_1_T2_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST1_1_T2_postr, //!< <a href="../target/aarch32/VST1_1.html#VST1_1_T2_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST1_1_T3_nowb, //!< <a href="../target/aarch32/VST1_1.html#VST1_1_T3_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST1_1_T3_posti, //!< <a href="../target/aarch32/VST1_1.html#VST1_1_T3_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST1_1_T3_postr, //!< <a href="../target/aarch32/VST1_1.html#VST1_1_T3_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST1_m_A1_nowb, //!< <a href="../target/aarch32/VST1_m.html#VST1_m_A1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST1_m_A1_posti, //!< <a href="../target/aarch32/VST1_m.html#VST1_m_A1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST1_m_A1_postr, //!< <a href="../target/aarch32/VST1_m.html#VST1_m_A1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST1_m_A2_nowb, //!< <a href="../target/aarch32/VST1_m.html#VST1_m_A2_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST1_m_A2_posti, //!< <a href="../target/aarch32/VST1_m.html#VST1_m_A2_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST1_m_A2_postr, //!< <a href="../target/aarch32/VST1_m.html#VST1_m_A2_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST1_m_A3_nowb, //!< <a href="../target/aarch32/VST1_m.html#VST1_m_A3_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST1_m_A3_posti, //!< <a href="../target/aarch32/VST1_m.html#VST1_m_A3_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST1_m_A3_postr, //!< <a href="../target/aarch32/VST1_m.html#VST1_m_A3_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST1_m_A4_nowb, //!< <a href="../target/aarch32/VST1_m.html#VST1_m_A4_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST1_m_A4_posti, //!< <a href="../target/aarch32/VST1_m.html#VST1_m_A4_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST1_m_A4_postr, //!< <a href="../target/aarch32/VST1_m.html#VST1_m_A4_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST1_m_T1_nowb, //!< <a href="../target/aarch32/VST1_m.html#VST1_m_T1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST1_m_T1_posti, //!< <a href="../target/aarch32/VST1_m.html#VST1_m_T1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST1_m_T1_postr, //!< <a href="../target/aarch32/VST1_m.html#VST1_m_T1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST1_m_T2_nowb, //!< <a href="../target/aarch32/VST1_m.html#VST1_m_T2_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST1_m_T2_posti, //!< <a href="../target/aarch32/VST1_m.html#VST1_m_T2_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST1_m_T2_postr, //!< <a href="../target/aarch32/VST1_m.html#VST1_m_T2_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST1_m_T3_nowb, //!< <a href="../target/aarch32/VST1_m.html#VST1_m_T3_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST1_m_T3_posti, //!< <a href="../target/aarch32/VST1_m.html#VST1_m_T3_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST1_m_T3_postr, //!< <a href="../target/aarch32/VST1_m.html#VST1_m_T3_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST1_m_T4_nowb, //!< <a href="../target/aarch32/VST1_m.html#VST1_m_T4_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST1_m_T4_posti, //!< <a href="../target/aarch32/VST1_m.html#VST1_m_T4_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST1_m_T4_postr, //!< <a href="../target/aarch32/VST1_m.html#VST1_m_T4_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST2_1_A1_nowb, //!< <a href="../target/aarch32/VST2_1.html#VST2_1_A1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST2_1_A1_posti, //!< <a href="../target/aarch32/VST2_1.html#VST2_1_A1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST2_1_A1_postr, //!< <a href="../target/aarch32/VST2_1.html#VST2_1_A1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST2_1_A2_nowb, //!< <a href="../target/aarch32/VST2_1.html#VST2_1_A2_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST2_1_A2_posti, //!< <a href="../target/aarch32/VST2_1.html#VST2_1_A2_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST2_1_A2_postr, //!< <a href="../target/aarch32/VST2_1.html#VST2_1_A2_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST2_1_A3_nowb, //!< <a href="../target/aarch32/VST2_1.html#VST2_1_A3_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST2_1_A3_posti, //!< <a href="../target/aarch32/VST2_1.html#VST2_1_A3_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST2_1_A3_postr, //!< <a href="../target/aarch32/VST2_1.html#VST2_1_A3_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST2_1_T1_nowb, //!< <a href="../target/aarch32/VST2_1.html#VST2_1_T1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST2_1_T1_posti, //!< <a href="../target/aarch32/VST2_1.html#VST2_1_T1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST2_1_T1_postr, //!< <a href="../target/aarch32/VST2_1.html#VST2_1_T1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST2_1_T2_nowb, //!< <a href="../target/aarch32/VST2_1.html#VST2_1_T2_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST2_1_T2_posti, //!< <a href="../target/aarch32/VST2_1.html#VST2_1_T2_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST2_1_T2_postr, //!< <a href="../target/aarch32/VST2_1.html#VST2_1_T2_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST2_1_T3_nowb, //!< <a href="../target/aarch32/VST2_1.html#VST2_1_T3_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST2_1_T3_posti, //!< <a href="../target/aarch32/VST2_1.html#VST2_1_T3_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST2_1_T3_postr, //!< <a href="../target/aarch32/VST2_1.html#VST2_1_T3_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST2_m_A1_nowb, //!< <a href="../target/aarch32/VST2_m.html#VST2_m_A1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST2_m_A1_posti, //!< <a href="../target/aarch32/VST2_m.html#VST2_m_A1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST2_m_A1_postr, //!< <a href="../target/aarch32/VST2_m.html#VST2_m_A1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST2_m_A2_nowb, //!< <a href="../target/aarch32/VST2_m.html#VST2_m_A2_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST2_m_A2_posti, //!< <a href="../target/aarch32/VST2_m.html#VST2_m_A2_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST2_m_A2_postr, //!< <a href="../target/aarch32/VST2_m.html#VST2_m_A2_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST2_m_T1_nowb, //!< <a href="../target/aarch32/VST2_m.html#VST2_m_T1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST2_m_T1_posti, //!< <a href="../target/aarch32/VST2_m.html#VST2_m_T1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST2_m_T1_postr, //!< <a href="../target/aarch32/VST2_m.html#VST2_m_T1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST2_m_T2_nowb, //!< <a href="../target/aarch32/VST2_m.html#VST2_m_T2_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST2_m_T2_posti, //!< <a href="../target/aarch32/VST2_m.html#VST2_m_T2_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST2_m_T2_postr, //!< <a href="../target/aarch32/VST2_m.html#VST2_m_T2_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST3_1_A1_nowb, //!< <a href="../target/aarch32/VST3_1.html#VST3_1_A1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST3_1_A1_posti, //!< <a href="../target/aarch32/VST3_1.html#VST3_1_A1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST3_1_A1_postr, //!< <a href="../target/aarch32/VST3_1.html#VST3_1_A1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST3_1_A2_nowb, //!< <a href="../target/aarch32/VST3_1.html#VST3_1_A2_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST3_1_A2_posti, //!< <a href="../target/aarch32/VST3_1.html#VST3_1_A2_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST3_1_A2_postr, //!< <a href="../target/aarch32/VST3_1.html#VST3_1_A2_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST3_1_A3_nowb, //!< <a href="../target/aarch32/VST3_1.html#VST3_1_A3_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST3_1_A3_posti, //!< <a href="../target/aarch32/VST3_1.html#VST3_1_A3_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST3_1_A3_postr, //!< <a href="../target/aarch32/VST3_1.html#VST3_1_A3_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST3_1_T1_nowb, //!< <a href="../target/aarch32/VST3_1.html#VST3_1_T1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST3_1_T1_posti, //!< <a href="../target/aarch32/VST3_1.html#VST3_1_T1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST3_1_T1_postr, //!< <a href="../target/aarch32/VST3_1.html#VST3_1_T1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST3_1_T2_nowb, //!< <a href="../target/aarch32/VST3_1.html#VST3_1_T2_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST3_1_T2_posti, //!< <a href="../target/aarch32/VST3_1.html#VST3_1_T2_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST3_1_T2_postr, //!< <a href="../target/aarch32/VST3_1.html#VST3_1_T2_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST3_1_T3_nowb, //!< <a href="../target/aarch32/VST3_1.html#VST3_1_T3_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST3_1_T3_posti, //!< <a href="../target/aarch32/VST3_1.html#VST3_1_T3_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST3_1_T3_postr, //!< <a href="../target/aarch32/VST3_1.html#VST3_1_T3_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST3_m_A1_nowb, //!< <a href="../target/aarch32/VST3_m.html#VST3_m_A1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST3_m_A1_posti, //!< <a href="../target/aarch32/VST3_m.html#VST3_m_A1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST3_m_A1_postr, //!< <a href="../target/aarch32/VST3_m.html#VST3_m_A1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST3_m_T1_nowb, //!< <a href="../target/aarch32/VST3_m.html#VST3_m_T1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST3_m_T1_posti, //!< <a href="../target/aarch32/VST3_m.html#VST3_m_T1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST3_m_T1_postr, //!< <a href="../target/aarch32/VST3_m.html#VST3_m_T1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST4_1_A1_nowb, //!< <a href="../target/aarch32/VST4_1.html#VST4_1_A1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST4_1_A1_posti, //!< <a href="../target/aarch32/VST4_1.html#VST4_1_A1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST4_1_A1_postr, //!< <a href="../target/aarch32/VST4_1.html#VST4_1_A1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST4_1_A2_nowb, //!< <a href="../target/aarch32/VST4_1.html#VST4_1_A2_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST4_1_A2_posti, //!< <a href="../target/aarch32/VST4_1.html#VST4_1_A2_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST4_1_A2_postr, //!< <a href="../target/aarch32/VST4_1.html#VST4_1_A2_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST4_1_A3_posti, //!< <a href="../target/aarch32/VST4_1.html#VST4_1_A3_posti">VST4_1_A3_posti</a>
  AMED_AARCH32_ENCODING_VST4_1_A3_postr, //!< <a href="../target/aarch32/VST4_1.html#VST4_1_A3_postr">Reg-offset</a>
  AMED_AARCH32_ENCODING_VST4_1_T1_nowb, //!< <a href="../target/aarch32/VST4_1.html#VST4_1_T1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST4_1_T1_posti, //!< <a href="../target/aarch32/VST4_1.html#VST4_1_T1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST4_1_T1_postr, //!< <a href="../target/aarch32/VST4_1.html#VST4_1_T1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST4_1_T2_nowb, //!< <a href="../target/aarch32/VST4_1.html#VST4_1_T2_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST4_1_T2_posti, //!< <a href="../target/aarch32/VST4_1.html#VST4_1_T2_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST4_1_T2_postr, //!< <a href="../target/aarch32/VST4_1.html#VST4_1_T2_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST4_1_T3_nowb, //!< <a href="../target/aarch32/VST4_1.html#VST4_1_T3_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST4_1_T3_postr, //!< <a href="../target/aarch32/VST4_1.html#VST4_1_T3_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST4_1_T3_posti, //!< <a href="../target/aarch32/VST4_1.html#VST4_1_T3_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST4_m_A1_nowb, //!< <a href="../target/aarch32/VST4_m.html#VST4_m_A1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST4_m_A1_posti, //!< <a href="../target/aarch32/VST4_m.html#VST4_m_A1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST4_m_A1_postr, //!< <a href="../target/aarch32/VST4_m.html#VST4_m_A1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST4_m_T1_nowb, //!< <a href="../target/aarch32/VST4_m.html#VST4_m_T1_nowb">Offset</a>
  AMED_AARCH32_ENCODING_VST4_m_T1_posti, //!< <a href="../target/aarch32/VST4_m.html#VST4_m_T1_posti">Post-indexed</a>
  AMED_AARCH32_ENCODING_VST4_m_T1_postr, //!< <a href="../target/aarch32/VST4_m.html#VST4_m_T1_postr">Post-indexed</a>
  AMED_AARCH32_ENCODING_VSTMDB_A1, //!< <a href="../target/aarch32/VSTM.html#VSTMDB_A1">Decrement Before</a>
  AMED_AARCH32_ENCODING_VSTM_A1, //!< <a href="../target/aarch32/VSTM.html#VSTM_A1">Increment After</a>
  AMED_AARCH32_ENCODING_VSTMDB_A2, //!< <a href="../target/aarch32/VSTM.html#VSTMDB_A2">Decrement Before</a>
  AMED_AARCH32_ENCODING_VSTM_A2, //!< <a href="../target/aarch32/VSTM.html#VSTM_A2">Increment After</a>
  AMED_AARCH32_ENCODING_VSTMDB_T1, //!< <a href="../target/aarch32/VSTM.html#VSTMDB_T1">Decrement Before</a>
  AMED_AARCH32_ENCODING_VSTM_T1, //!< <a href="../target/aarch32/VSTM.html#VSTM_T1">Increment After</a>
  AMED_AARCH32_ENCODING_VSTMDB_T2, //!< <a href="../target/aarch32/VSTM.html#VSTMDB_T2">Decrement Before</a>
  AMED_AARCH32_ENCODING_VSTM_T2, //!< <a href="../target/aarch32/VSTM.html#VSTM_T2">Increment After</a>
  AMED_AARCH32_ENCODING_VSTR_A1_H, //!< <a href="../target/aarch32/VSTR.html#VSTR_A1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VSTR_A1_S, //!< <a href="../target/aarch32/VSTR.html#VSTR_A1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VSTR_A1_D, //!< <a href="../target/aarch32/VSTR.html#VSTR_A1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VSTR_T1_H, //!< <a href="../target/aarch32/VSTR.html#VSTR_T1_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VSTR_T1_S, //!< <a href="../target/aarch32/VSTR.html#VSTR_T1_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VSTR_T1_D, //!< <a href="../target/aarch32/VSTR.html#VSTR_T1_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VSUB_f_A1_D, //!< <a href="../target/aarch32/VSUB_f.html#VSUB_f_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSUB_f_A1_Q, //!< <a href="../target/aarch32/VSUB_f.html#VSUB_f_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSUB_f_A2_H, //!< <a href="../target/aarch32/VSUB_f.html#VSUB_f_A2_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VSUB_f_A2_S, //!< <a href="../target/aarch32/VSUB_f.html#VSUB_f_A2_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VSUB_f_A2_D, //!< <a href="../target/aarch32/VSUB_f.html#VSUB_f_A2_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VSUB_f_T1_D, //!< <a href="../target/aarch32/VSUB_f.html#VSUB_f_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSUB_f_T1_Q, //!< <a href="../target/aarch32/VSUB_f.html#VSUB_f_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSUB_f_T2_H, //!< <a href="../target/aarch32/VSUB_f.html#VSUB_f_T2_H">Half-precision scalar</a>
  AMED_AARCH32_ENCODING_VSUB_f_T2_S, //!< <a href="../target/aarch32/VSUB_f.html#VSUB_f_T2_S">Single-precision scalar</a>
  AMED_AARCH32_ENCODING_VSUB_f_T2_D, //!< <a href="../target/aarch32/VSUB_f.html#VSUB_f_T2_D">Double-precision scalar</a>
  AMED_AARCH32_ENCODING_VSUB_i_A1_D, //!< <a href="../target/aarch32/VSUB_i.html#VSUB_i_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSUB_i_A1_Q, //!< <a href="../target/aarch32/VSUB_i.html#VSUB_i_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSUB_i_T1_D, //!< <a href="../target/aarch32/VSUB_i.html#VSUB_i_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSUB_i_T1_Q, //!< <a href="../target/aarch32/VSUB_i.html#VSUB_i_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSUBHN_A1, //!< <a href="../target/aarch32/VSUBHN.html#VSUBHN_A1">A1</a>
  AMED_AARCH32_ENCODING_VSUBHN_T1, //!< <a href="../target/aarch32/VSUBHN.html#VSUBHN_T1">T1</a>
  AMED_AARCH32_ENCODING_VSUBL_A1, //!< <a href="../target/aarch32/VSUBL.html#VSUBL_A1">A1</a>
  AMED_AARCH32_ENCODING_VSUBL_T1, //!< <a href="../target/aarch32/VSUBL.html#VSUBL_T1">T1</a>
  AMED_AARCH32_ENCODING_VSUBW_A1, //!< <a href="../target/aarch32/VSUBW.html#VSUBW_A1">A1</a>
  AMED_AARCH32_ENCODING_VSUBW_T1, //!< <a href="../target/aarch32/VSUBW.html#VSUBW_T1">T1</a>
  AMED_AARCH32_ENCODING_VSUDOT_s_A1_D, //!< <a href="../target/aarch32/VSUDOT_s.html#VSUDOT_s_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSUDOT_s_A1_Q, //!< <a href="../target/aarch32/VSUDOT_s.html#VSUDOT_s_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSUDOT_s_T1_D, //!< <a href="../target/aarch32/VSUDOT_s.html#VSUDOT_s_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSUDOT_s_T1_Q, //!< <a href="../target/aarch32/VSUDOT_s.html#VSUDOT_s_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSWP_A1_D, //!< <a href="../target/aarch32/VSWP.html#VSWP_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSWP_A1_Q, //!< <a href="../target/aarch32/VSWP.html#VSWP_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSWP_T1_D, //!< <a href="../target/aarch32/VSWP.html#VSWP_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSWP_T1_Q, //!< <a href="../target/aarch32/VSWP.html#VSWP_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VTBL_A1, //!< <a href="../target/aarch32/VTBL.html#VTBL_A1">VTBL</a>
  AMED_AARCH32_ENCODING_VTBX_A1, //!< <a href="../target/aarch32/VTBL.html#VTBX_A1">VTBX</a>
  AMED_AARCH32_ENCODING_VTBL_T1, //!< <a href="../target/aarch32/VTBL.html#VTBL_T1">VTBL</a>
  AMED_AARCH32_ENCODING_VTBX_T1, //!< <a href="../target/aarch32/VTBL.html#VTBX_T1">VTBX</a>
  AMED_AARCH32_ENCODING_VTRN_A1_D, //!< <a href="../target/aarch32/VTRN.html#VTRN_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VTRN_A1_Q, //!< <a href="../target/aarch32/VTRN.html#VTRN_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VTRN_T1_D, //!< <a href="../target/aarch32/VTRN.html#VTRN_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VTRN_T1_Q, //!< <a href="../target/aarch32/VTRN.html#VTRN_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VTST_A1_D, //!< <a href="../target/aarch32/VTST.html#VTST_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VTST_A1_Q, //!< <a href="../target/aarch32/VTST.html#VTST_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VTST_T1_D, //!< <a href="../target/aarch32/VTST.html#VTST_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VTST_T1_Q, //!< <a href="../target/aarch32/VTST.html#VTST_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VUDOT_A1_D, //!< <a href="../target/aarch32/VUDOT.html#VUDOT_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VUDOT_A1_Q, //!< <a href="../target/aarch32/VUDOT.html#VUDOT_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VUDOT_T1_D, //!< <a href="../target/aarch32/VUDOT.html#VUDOT_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VUDOT_T1_Q, //!< <a href="../target/aarch32/VUDOT.html#VUDOT_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VUDOT_s_A1_D, //!< <a href="../target/aarch32/VUDOT_s.html#VUDOT_s_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VUDOT_s_A1_Q, //!< <a href="../target/aarch32/VUDOT_s.html#VUDOT_s_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VUDOT_s_T1_D, //!< <a href="../target/aarch32/VUDOT_s.html#VUDOT_s_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VUDOT_s_T1_Q, //!< <a href="../target/aarch32/VUDOT_s.html#VUDOT_s_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VUMMLA_A1_Q, //!< <a href="../target/aarch32/VUMMLA.html#VUMMLA_A1_Q">A1</a>
  AMED_AARCH32_ENCODING_VUMMLA_T1_Q, //!< <a href="../target/aarch32/VUMMLA.html#VUMMLA_T1_Q">T1</a>
  AMED_AARCH32_ENCODING_VUSDOT_A1_D, //!< <a href="../target/aarch32/VUSDOT.html#VUSDOT_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VUSDOT_A1_Q, //!< <a href="../target/aarch32/VUSDOT.html#VUSDOT_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VUSDOT_T1_D, //!< <a href="../target/aarch32/VUSDOT.html#VUSDOT_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VUSDOT_T1_Q, //!< <a href="../target/aarch32/VUSDOT.html#VUSDOT_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VUSDOT_s_A1_D, //!< <a href="../target/aarch32/VUSDOT_s.html#VUSDOT_s_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VUSDOT_s_A1_Q, //!< <a href="../target/aarch32/VUSDOT_s.html#VUSDOT_s_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VUSDOT_s_T1_D, //!< <a href="../target/aarch32/VUSDOT_s.html#VUSDOT_s_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VUSDOT_s_T1_Q, //!< <a href="../target/aarch32/VUSDOT_s.html#VUSDOT_s_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VUSMMLA_A1_Q, //!< <a href="../target/aarch32/VUSMMLA.html#VUSMMLA_A1_Q">A1</a>
  AMED_AARCH32_ENCODING_VUSMMLA_T1_Q, //!< <a href="../target/aarch32/VUSMMLA.html#VUSMMLA_T1_Q">T1</a>
  AMED_AARCH32_ENCODING_VUZP_A1_D, //!< <a href="../target/aarch32/VUZP.html#VUZP_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VUZP_A1_Q, //!< <a href="../target/aarch32/VUZP.html#VUZP_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VUZP_T1_D, //!< <a href="../target/aarch32/VUZP.html#VUZP_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VUZP_T1_Q, //!< <a href="../target/aarch32/VUZP.html#VUZP_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VZIP_A1_D, //!< <a href="../target/aarch32/VZIP.html#VZIP_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VZIP_A1_Q, //!< <a href="../target/aarch32/VZIP.html#VZIP_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VZIP_T1_D, //!< <a href="../target/aarch32/VZIP.html#VZIP_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VZIP_T1_Q, //!< <a href="../target/aarch32/VZIP.html#VZIP_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VACLE_VACGE_A1_D, //!< <a href="../target/aarch32/VACLE_VACGE.html#VACLE_VACGE_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VACLE_VACGE_A1_Q, //!< <a href="../target/aarch32/VACLE_VACGE.html#VACLE_VACGE_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VACLE_VACGE_T1_D, //!< <a href="../target/aarch32/VACLE_VACGE.html#VACLE_VACGE_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VACLE_VACGE_T1_Q, //!< <a href="../target/aarch32/VACLE_VACGE.html#VACLE_VACGE_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VACLT_VACGT_A1_D, //!< <a href="../target/aarch32/VACLT_VACGT.html#VACLT_VACGT_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VACLT_VACGT_A1_Q, //!< <a href="../target/aarch32/VACLT_VACGT.html#VACLT_VACGT_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VACLT_VACGT_T1_D, //!< <a href="../target/aarch32/VACLT_VACGT.html#VACLT_VACGT_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VACLT_VACGT_T1_Q, //!< <a href="../target/aarch32/VACLT_VACGT.html#VACLT_VACGT_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VAND_VBIC_i_A1_D, //!< <a href="../target/aarch32/VAND_VBIC_i.html#VAND_VBIC_i_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VAND_VBIC_i_A1_Q, //!< <a href="../target/aarch32/VAND_VBIC_i.html#VAND_VBIC_i_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VAND_VBIC_i_A2_D, //!< <a href="../target/aarch32/VAND_VBIC_i.html#VAND_VBIC_i_A2_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VAND_VBIC_i_A2_Q, //!< <a href="../target/aarch32/VAND_VBIC_i.html#VAND_VBIC_i_A2_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VAND_VBIC_i_T1_D, //!< <a href="../target/aarch32/VAND_VBIC_i.html#VAND_VBIC_i_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VAND_VBIC_i_T1_Q, //!< <a href="../target/aarch32/VAND_VBIC_i.html#VAND_VBIC_i_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VAND_VBIC_i_T2_D, //!< <a href="../target/aarch32/VAND_VBIC_i.html#VAND_VBIC_i_T2_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VAND_VBIC_i_T2_Q, //!< <a href="../target/aarch32/VAND_VBIC_i.html#VAND_VBIC_i_T2_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCLE_VCGE_r_A1_D, //!< <a href="../target/aarch32/VCLE_VCGE_r.html#VCLE_VCGE_r_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCLE_VCGE_r_A1_Q, //!< <a href="../target/aarch32/VCLE_VCGE_r.html#VCLE_VCGE_r_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCLE_VCGE_r_A2_D, //!< <a href="../target/aarch32/VCLE_VCGE_r.html#VCLE_VCGE_r_A2_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCLE_VCGE_r_A2_Q, //!< <a href="../target/aarch32/VCLE_VCGE_r.html#VCLE_VCGE_r_A2_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCLE_VCGE_r_T1_D, //!< <a href="../target/aarch32/VCLE_VCGE_r.html#VCLE_VCGE_r_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCLE_VCGE_r_T1_Q, //!< <a href="../target/aarch32/VCLE_VCGE_r.html#VCLE_VCGE_r_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCLE_VCGE_r_T2_D, //!< <a href="../target/aarch32/VCLE_VCGE_r.html#VCLE_VCGE_r_T2_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCLE_VCGE_r_T2_Q, //!< <a href="../target/aarch32/VCLE_VCGE_r.html#VCLE_VCGE_r_T2_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCLT_VCGT_r_A1_D, //!< <a href="../target/aarch32/VCLT_VCGT_r.html#VCLT_VCGT_r_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCLT_VCGT_r_A1_Q, //!< <a href="../target/aarch32/VCLT_VCGT_r.html#VCLT_VCGT_r_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCLT_VCGT_r_A2_D, //!< <a href="../target/aarch32/VCLT_VCGT_r.html#VCLT_VCGT_r_A2_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCLT_VCGT_r_A2_Q, //!< <a href="../target/aarch32/VCLT_VCGT_r.html#VCLT_VCGT_r_A2_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCLT_VCGT_r_T1_D, //!< <a href="../target/aarch32/VCLT_VCGT_r.html#VCLT_VCGT_r_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCLT_VCGT_r_T1_Q, //!< <a href="../target/aarch32/VCLT_VCGT_r.html#VCLT_VCGT_r_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCLT_VCGT_r_T2_D, //!< <a href="../target/aarch32/VCLT_VCGT_r.html#VCLT_VCGT_r_T2_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VCLT_VCGT_r_T2_Q, //!< <a href="../target/aarch32/VCLT_VCGT_r.html#VCLT_VCGT_r_T2_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VEXT_VEXT_A1_D, //!< <a href="../target/aarch32/VEXT_VEXT.html#VEXT_VEXT_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VEXT_VEXT_A1_Q, //!< <a href="../target/aarch32/VEXT_VEXT.html#VEXT_VEXT_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VEXT_VEXT_T1_D, //!< <a href="../target/aarch32/VEXT_VEXT.html#VEXT_VEXT_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VEXT_VEXT_T1_Q, //!< <a href="../target/aarch32/VEXT_VEXT.html#VEXT_VEXT_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMOV_VORR_r_A1_D, //!< <a href="../target/aarch32/VMOV_VORR_r.html#VMOV_VORR_r_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMOV_VORR_r_A1_Q, //!< <a href="../target/aarch32/VMOV_VORR_r.html#VMOV_VORR_r_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMOV_VORR_r_T1_D, //!< <a href="../target/aarch32/VMOV_VORR_r.html#VMOV_VORR_r_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VMOV_VORR_r_T1_Q, //!< <a href="../target/aarch32/VMOV_VORR_r.html#VMOV_VORR_r_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VORN_VORR_i_A1_D, //!< <a href="../target/aarch32/VORN_VORR_i.html#VORN_VORR_i_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VORN_VORR_i_A1_Q, //!< <a href="../target/aarch32/VORN_VORR_i.html#VORN_VORR_i_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VORN_VORR_i_A2_D, //!< <a href="../target/aarch32/VORN_VORR_i.html#VORN_VORR_i_A2_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VORN_VORR_i_A2_Q, //!< <a href="../target/aarch32/VORN_VORR_i.html#VORN_VORR_i_A2_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VORN_VORR_i_T1_D, //!< <a href="../target/aarch32/VORN_VORR_i.html#VORN_VORR_i_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VORN_VORR_i_T1_Q, //!< <a href="../target/aarch32/VORN_VORR_i.html#VORN_VORR_i_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VORN_VORR_i_T2_D, //!< <a href="../target/aarch32/VORN_VORR_i.html#VORN_VORR_i_T2_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VORN_VORR_i_T2_Q, //!< <a href="../target/aarch32/VORN_VORR_i.html#VORN_VORR_i_T2_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VPOP_VLDM_A1, //!< <a href="../target/aarch32/VPOP_VLDM.html#VPOP_VLDM_A1">Increment After</a>
  AMED_AARCH32_ENCODING_VPOP_VLDM_A2, //!< <a href="../target/aarch32/VPOP_VLDM.html#VPOP_VLDM_A2">Increment After</a>
  AMED_AARCH32_ENCODING_VPOP_VLDM_T1, //!< <a href="../target/aarch32/VPOP_VLDM.html#VPOP_VLDM_T1">Increment After</a>
  AMED_AARCH32_ENCODING_VPOP_VLDM_T2, //!< <a href="../target/aarch32/VPOP_VLDM.html#VPOP_VLDM_T2">Increment After</a>
  AMED_AARCH32_ENCODING_VPUSH_VSTMDB_A1, //!< <a href="../target/aarch32/VPUSH_VSTM.html#VPUSH_VSTMDB_A1">Decrement Before</a>
  AMED_AARCH32_ENCODING_VPUSH_VSTMDB_A2, //!< <a href="../target/aarch32/VPUSH_VSTM.html#VPUSH_VSTMDB_A2">Decrement Before</a>
  AMED_AARCH32_ENCODING_VPUSH_VSTMDB_T1, //!< <a href="../target/aarch32/VPUSH_VSTM.html#VPUSH_VSTMDB_T1">Decrement Before</a>
  AMED_AARCH32_ENCODING_VPUSH_VSTMDB_T2, //!< <a href="../target/aarch32/VPUSH_VSTM.html#VPUSH_VSTMDB_T2">Decrement Before</a>
  AMED_AARCH32_ENCODING_VQRSHRN_VQMOVN_A1, //!< <a href="../target/aarch32/VQRSHRN_VQMOVN.html#VQRSHRN_VQMOVN_A1">Signed result</a>
  AMED_AARCH32_ENCODING_VQRSHRN_VQMOVN_T1, //!< <a href="../target/aarch32/VQRSHRN_VQMOVN.html#VQRSHRN_VQMOVN_T1">Signed result</a>
  AMED_AARCH32_ENCODING_VQRSHRUN_VQMOVUN_A1, //!< <a href="../target/aarch32/VQRSHRUN_VQMOVN.html#VQRSHRUN_VQMOVUN_A1">Unsigned result</a>
  AMED_AARCH32_ENCODING_VQRSHRUN_VQMOVUN_T1, //!< <a href="../target/aarch32/VQRSHRUN_VQMOVN.html#VQRSHRUN_VQMOVUN_T1">Unsigned result</a>
  AMED_AARCH32_ENCODING_VQSHRN_VQMOVN_A1, //!< <a href="../target/aarch32/VQSHRN_VQMOVN.html#VQSHRN_VQMOVN_A1">Signed result</a>
  AMED_AARCH32_ENCODING_VQSHRN_VQMOVN_T1, //!< <a href="../target/aarch32/VQSHRN_VQMOVN.html#VQSHRN_VQMOVN_T1">Signed result</a>
  AMED_AARCH32_ENCODING_VQSHRUN_VQMOVUN_A1, //!< <a href="../target/aarch32/VQSHRUN_VQMOVN.html#VQSHRUN_VQMOVUN_A1">Unsigned result</a>
  AMED_AARCH32_ENCODING_VQSHRUN_VQMOVUN_T1, //!< <a href="../target/aarch32/VQSHRUN_VQMOVN.html#VQSHRUN_VQMOVUN_T1">Unsigned result</a>
  AMED_AARCH32_ENCODING_VRSHR_VORR_r_A1_D, //!< <a href="../target/aarch32/VRSHR_VORR_r.html#VRSHR_VORR_r_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRSHR_VORR_r_A1_Q, //!< <a href="../target/aarch32/VRSHR_VORR_r.html#VRSHR_VORR_r_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRSHR_VORR_r_T1_D, //!< <a href="../target/aarch32/VRSHR_VORR_r.html#VRSHR_VORR_r_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRSHR_VORR_r_T1_Q, //!< <a href="../target/aarch32/VRSHR_VORR_r.html#VRSHR_VORR_r_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VRSHRN_VMOVN_A1, //!< <a href="../target/aarch32/VRSHRN_VMOVN.html#VRSHRN_VMOVN_A1">A1</a>
  AMED_AARCH32_ENCODING_VRSHRN_VMOVN_T1, //!< <a href="../target/aarch32/VRSHRN_VMOVN.html#VRSHRN_VMOVN_T1">T1</a>
  AMED_AARCH32_ENCODING_VSHR_VORR_r_A1_D, //!< <a href="../target/aarch32/VSHR_VORR_r.html#VSHR_VORR_r_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSHR_VORR_r_A1_Q, //!< <a href="../target/aarch32/VSHR_VORR_r.html#VSHR_VORR_r_A1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSHR_VORR_r_T1_D, //!< <a href="../target/aarch32/VSHR_VORR_r.html#VSHR_VORR_r_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSHR_VORR_r_T1_Q, //!< <a href="../target/aarch32/VSHR_VORR_r.html#VSHR_VORR_r_T1_Q">128-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VSHRN_VMOVN_A1, //!< <a href="../target/aarch32/VSHRN_VMOVN.html#VSHRN_VMOVN_A1">A1</a>
  AMED_AARCH32_ENCODING_VSHRN_VMOVN_T1, //!< <a href="../target/aarch32/VSHRN_VMOVN.html#VSHRN_VMOVN_T1">T1</a>
  AMED_AARCH32_ENCODING_VUZP_VTRN_A1_D, //!< <a href="../target/aarch32/VUZP_VTRN.html#VUZP_VTRN_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VUZP_VTRN_T1_D, //!< <a href="../target/aarch32/VUZP_VTRN.html#VUZP_VTRN_T1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VZIP_VTRN_A1_D, //!< <a href="../target/aarch32/VZIP_VTRN.html#VZIP_VTRN_A1_D">64-bit SIMD vector</a>
  AMED_AARCH32_ENCODING_VZIP_VTRN_T1_D, //!< <a href="../target/aarch32/VZIP_VTRN.html#VZIP_VTRN_T1_D">64-bit SIMD vector</a>
} amed_aarch32_encoding;

#define AMED_AARCH32_SYNC_OP_MAX_TEXT_LENGTH (5 + 1)

typedef enum _amed_aarch32_sync_op
{
  AMED_AARCH32_SYNC_OP_NONE,
  AMED_AARCH32_SYNC_OP_CSYNC,
} amed_aarch32_sync_op;

#define AMED_AARCH32_CCLASS_MAX_TEXT_LENGTH (18 + 1)

typedef enum _amed_aarch32_cclass
{
  AMED_AARCH32_CCLASS_NONE,
  AMED_AARCH32_CCLASS_invalid, //!< <a href="../target/aarch32/invalid.html#invalid">INVALID</a>
  AMED_AARCH32_CCLASS_ADC_i_a1, //!< <a href="../target/aarch32/ADC_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_ADC_i_t1, //!< <a href="../target/aarch32/ADC_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_ADC_r_a1, //!< <a href="../target/aarch32/ADC_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_ADC_r_t1, //!< <a href="../target/aarch32/ADC_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_ADC_r_t2, //!< <a href="../target/aarch32/ADC_r.html#t2">T2</a>
  AMED_AARCH32_CCLASS_ADC_rr_a1, //!< <a href="../target/aarch32/ADC_rr.html#a1">A1</a>
  AMED_AARCH32_CCLASS_ADD_i_a1, //!< <a href="../target/aarch32/ADD_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_ADD_i_t1, //!< <a href="../target/aarch32/ADD_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_ADD_i_t2, //!< <a href="../target/aarch32/ADD_i.html#t2">T2</a>
  AMED_AARCH32_CCLASS_ADD_i_t3, //!< <a href="../target/aarch32/ADD_i.html#t3">T3</a>
  AMED_AARCH32_CCLASS_ADD_i_t4, //!< <a href="../target/aarch32/ADD_i.html#t4">T4</a>
  AMED_AARCH32_CCLASS_ADD_r_a1, //!< <a href="../target/aarch32/ADD_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_ADD_r_t1, //!< <a href="../target/aarch32/ADD_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_ADD_r_t2, //!< <a href="../target/aarch32/ADD_r.html#t2">T2</a>
  AMED_AARCH32_CCLASS_ADD_r_t3, //!< <a href="../target/aarch32/ADD_r.html#t3">T3</a>
  AMED_AARCH32_CCLASS_ADD_rr_a1, //!< <a href="../target/aarch32/ADD_rr.html#a1">A1</a>
  AMED_AARCH32_CCLASS_ADD_SP_i_a1, //!< <a href="../target/aarch32/ADD_SP_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_ADD_SP_i_t1, //!< <a href="../target/aarch32/ADD_SP_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_ADD_SP_i_t2, //!< <a href="../target/aarch32/ADD_SP_i.html#t2">T2</a>
  AMED_AARCH32_CCLASS_ADD_SP_i_t3, //!< <a href="../target/aarch32/ADD_SP_i.html#t3">T3</a>
  AMED_AARCH32_CCLASS_ADD_SP_i_t4, //!< <a href="../target/aarch32/ADD_SP_i.html#t4">T4</a>
  AMED_AARCH32_CCLASS_ADD_SP_r_a1, //!< <a href="../target/aarch32/ADD_SP_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_ADD_SP_r_t1, //!< <a href="../target/aarch32/ADD_SP_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_ADD_SP_r_t2, //!< <a href="../target/aarch32/ADD_SP_r.html#t2">T2</a>
  AMED_AARCH32_CCLASS_ADD_SP_r_t3, //!< <a href="../target/aarch32/ADD_SP_r.html#t3">T3</a>
  AMED_AARCH32_CCLASS_ADR_a1, //!< <a href="../target/aarch32/ADR.html#a1">A1</a>
  AMED_AARCH32_CCLASS_ADR_a2, //!< <a href="../target/aarch32/ADR.html#a2">A2</a>
  AMED_AARCH32_CCLASS_ADR_t1, //!< <a href="../target/aarch32/ADR.html#t1">T1</a>
  AMED_AARCH32_CCLASS_ADR_t2, //!< <a href="../target/aarch32/ADR.html#t2">T2</a>
  AMED_AARCH32_CCLASS_ADR_t3, //!< <a href="../target/aarch32/ADR.html#t3">T3</a>
  AMED_AARCH32_CCLASS_AND_i_a1, //!< <a href="../target/aarch32/AND_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_AND_i_t1, //!< <a href="../target/aarch32/AND_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_AND_r_a1, //!< <a href="../target/aarch32/AND_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_AND_r_t1, //!< <a href="../target/aarch32/AND_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_AND_r_t2, //!< <a href="../target/aarch32/AND_r.html#t2">T2</a>
  AMED_AARCH32_CCLASS_AND_rr_a1, //!< <a href="../target/aarch32/AND_rr.html#a1">A1</a>
  AMED_AARCH32_CCLASS_B_a1, //!< <a href="../target/aarch32/B.html#a1">A1</a>
  AMED_AARCH32_CCLASS_B_t1, //!< <a href="../target/aarch32/B.html#t1">T1</a>
  AMED_AARCH32_CCLASS_B_t2, //!< <a href="../target/aarch32/B.html#t2">T2</a>
  AMED_AARCH32_CCLASS_B_t3, //!< <a href="../target/aarch32/B.html#t3">T3</a>
  AMED_AARCH32_CCLASS_B_t4, //!< <a href="../target/aarch32/B.html#t4">T4</a>
  AMED_AARCH32_CCLASS_BFC_a1, //!< <a href="../target/aarch32/BFC.html#a1">A1</a>
  AMED_AARCH32_CCLASS_BFC_t1, //!< <a href="../target/aarch32/BFC.html#t1">T1</a>
  AMED_AARCH32_CCLASS_BFI_a1, //!< <a href="../target/aarch32/BFI.html#a1">A1</a>
  AMED_AARCH32_CCLASS_BFI_t1, //!< <a href="../target/aarch32/BFI.html#t1">T1</a>
  AMED_AARCH32_CCLASS_BIC_i_a1, //!< <a href="../target/aarch32/BIC_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_BIC_i_t1, //!< <a href="../target/aarch32/BIC_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_BIC_r_a1, //!< <a href="../target/aarch32/BIC_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_BIC_r_t1, //!< <a href="../target/aarch32/BIC_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_BIC_r_t2, //!< <a href="../target/aarch32/BIC_r.html#t2">T2</a>
  AMED_AARCH32_CCLASS_BIC_rr_a1, //!< <a href="../target/aarch32/BIC_rr.html#a1">A1</a>
  AMED_AARCH32_CCLASS_BKPT_a1, //!< <a href="../target/aarch32/BKPT.html#a1">A1</a>
  AMED_AARCH32_CCLASS_BKPT_t1, //!< <a href="../target/aarch32/BKPT.html#t1">T1</a>
  AMED_AARCH32_CCLASS_BL_i_a1, //!< <a href="../target/aarch32/BL_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_BL_i_a2, //!< <a href="../target/aarch32/BL_i.html#a2">A2</a>
  AMED_AARCH32_CCLASS_BL_i_t1, //!< <a href="../target/aarch32/BL_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_BL_i_t2, //!< <a href="../target/aarch32/BL_i.html#t2">T2</a>
  AMED_AARCH32_CCLASS_BLX_r_a1, //!< <a href="../target/aarch32/BLX_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_BLX_r_t1, //!< <a href="../target/aarch32/BLX_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_BX_a1, //!< <a href="../target/aarch32/BX.html#a1">A1</a>
  AMED_AARCH32_CCLASS_BX_t1, //!< <a href="../target/aarch32/BX.html#t1">T1</a>
  AMED_AARCH32_CCLASS_BXJ_a1, //!< <a href="../target/aarch32/BXJ.html#a1">A1</a>
  AMED_AARCH32_CCLASS_BXJ_t1, //!< <a href="../target/aarch32/BXJ.html#t1">T1</a>
  AMED_AARCH32_CCLASS_CBNZ_t1, //!< <a href="../target/aarch32/CBNZ.html#t1">T1</a>
  AMED_AARCH32_CCLASS_CLREX_a1, //!< <a href="../target/aarch32/CLREX.html#a1">A1</a>
  AMED_AARCH32_CCLASS_CLREX_t1, //!< <a href="../target/aarch32/CLREX.html#t1">T1</a>
  AMED_AARCH32_CCLASS_CLZ_a1, //!< <a href="../target/aarch32/CLZ.html#a1">A1</a>
  AMED_AARCH32_CCLASS_CLZ_t1, //!< <a href="../target/aarch32/CLZ.html#t1">T1</a>
  AMED_AARCH32_CCLASS_CMN_i_a1, //!< <a href="../target/aarch32/CMN_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_CMN_i_t1, //!< <a href="../target/aarch32/CMN_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_CMN_r_a1, //!< <a href="../target/aarch32/CMN_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_CMN_r_t1, //!< <a href="../target/aarch32/CMN_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_CMN_r_t2, //!< <a href="../target/aarch32/CMN_r.html#t2">T2</a>
  AMED_AARCH32_CCLASS_CMN_rr_a1, //!< <a href="../target/aarch32/CMN_rr.html#a1">A1</a>
  AMED_AARCH32_CCLASS_CMP_i_a1, //!< <a href="../target/aarch32/CMP_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_CMP_i_t1, //!< <a href="../target/aarch32/CMP_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_CMP_i_t2, //!< <a href="../target/aarch32/CMP_i.html#t2">T2</a>
  AMED_AARCH32_CCLASS_CMP_r_a1, //!< <a href="../target/aarch32/CMP_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_CMP_r_t1, //!< <a href="../target/aarch32/CMP_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_CMP_r_t2, //!< <a href="../target/aarch32/CMP_r.html#t2">T2</a>
  AMED_AARCH32_CCLASS_CMP_r_t3, //!< <a href="../target/aarch32/CMP_r.html#t3">T3</a>
  AMED_AARCH32_CCLASS_CMP_rr_a1, //!< <a href="../target/aarch32/CMP_rr.html#a1">A1</a>
  AMED_AARCH32_CCLASS_CPS_a1, //!< <a href="../target/aarch32/CPS.html#a1">A1</a>
  AMED_AARCH32_CCLASS_CPS_t1, //!< <a href="../target/aarch32/CPS.html#t1">T1</a>
  AMED_AARCH32_CCLASS_CPS_t2, //!< <a href="../target/aarch32/CPS.html#t2">T2</a>
  AMED_AARCH32_CCLASS_CRC32_a1, //!< <a href="../target/aarch32/CRC32.html#a1">A1</a>
  AMED_AARCH32_CCLASS_CRC32_t1, //!< <a href="../target/aarch32/CRC32.html#t1">T1</a>
  AMED_AARCH32_CCLASS_CRC32C_a1, //!< <a href="../target/aarch32/CRC32C.html#a1">A1</a>
  AMED_AARCH32_CCLASS_CRC32C_t1, //!< <a href="../target/aarch32/CRC32C.html#t1">T1</a>
  AMED_AARCH32_CCLASS_CSDB_a1, //!< <a href="../target/aarch32/CSDB.html#a1">A1</a>
  AMED_AARCH32_CCLASS_CSDB_t1, //!< <a href="../target/aarch32/CSDB.html#t1">T1</a>
  AMED_AARCH32_CCLASS_DBG_a1, //!< <a href="../target/aarch32/DBG.html#a1">A1</a>
  AMED_AARCH32_CCLASS_DBG_t1, //!< <a href="../target/aarch32/DBG.html#t1">T1</a>
  AMED_AARCH32_CCLASS_DCPS1_t1, //!< <a href="../target/aarch32/DCPS1.html#t1">T1</a>
  AMED_AARCH32_CCLASS_DCPS2_t1, //!< <a href="../target/aarch32/DCPS2.html#t1">T1</a>
  AMED_AARCH32_CCLASS_DCPS3_t1, //!< <a href="../target/aarch32/DCPS3.html#t1">T1</a>
  AMED_AARCH32_CCLASS_DMB_a1, //!< <a href="../target/aarch32/DMB.html#a1">A1</a>
  AMED_AARCH32_CCLASS_DMB_t1, //!< <a href="../target/aarch32/DMB.html#t1">T1</a>
  AMED_AARCH32_CCLASS_DSB_a1, //!< <a href="../target/aarch32/DSB.html#a1">A1</a>
  AMED_AARCH32_CCLASS_DSB_t1, //!< <a href="../target/aarch32/DSB.html#t1">T1</a>
  AMED_AARCH32_CCLASS_EOR_i_a1, //!< <a href="../target/aarch32/EOR_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_EOR_i_t1, //!< <a href="../target/aarch32/EOR_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_EOR_r_a1, //!< <a href="../target/aarch32/EOR_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_EOR_r_t1, //!< <a href="../target/aarch32/EOR_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_EOR_r_t2, //!< <a href="../target/aarch32/EOR_r.html#t2">T2</a>
  AMED_AARCH32_CCLASS_EOR_rr_a1, //!< <a href="../target/aarch32/EOR_rr.html#a1">A1</a>
  AMED_AARCH32_CCLASS_ERET_a1, //!< <a href="../target/aarch32/ERET.html#a1">A1</a>
  AMED_AARCH32_CCLASS_ERET_t1, //!< <a href="../target/aarch32/ERET.html#t1">T1</a>
  AMED_AARCH32_CCLASS_ESB_a1, //!< <a href="../target/aarch32/ESB.html#a1">A1</a>
  AMED_AARCH32_CCLASS_ESB_t1, //!< <a href="../target/aarch32/ESB.html#t1">T1</a>
  AMED_AARCH32_CCLASS_HLT_a1, //!< <a href="../target/aarch32/HLT.html#a1">A1</a>
  AMED_AARCH32_CCLASS_HLT_t1, //!< <a href="../target/aarch32/HLT.html#t1">T1</a>
  AMED_AARCH32_CCLASS_HVC_a1, //!< <a href="../target/aarch32/HVC.html#a1">A1</a>
  AMED_AARCH32_CCLASS_HVC_t1, //!< <a href="../target/aarch32/HVC.html#t1">T1</a>
  AMED_AARCH32_CCLASS_ISB_a1, //!< <a href="../target/aarch32/ISB.html#a1">A1</a>
  AMED_AARCH32_CCLASS_ISB_t1, //!< <a href="../target/aarch32/ISB.html#t1">T1</a>
  AMED_AARCH32_CCLASS_IT_t1, //!< <a href="../target/aarch32/IT.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LDA_a1, //!< <a href="../target/aarch32/LDA.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDA_t1, //!< <a href="../target/aarch32/LDA.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LDAB_a1, //!< <a href="../target/aarch32/LDAB.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDAB_t1, //!< <a href="../target/aarch32/LDAB.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LDAEX_a1, //!< <a href="../target/aarch32/LDAEX.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDAEX_t1, //!< <a href="../target/aarch32/LDAEX.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LDAEXB_a1, //!< <a href="../target/aarch32/LDAEXB.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDAEXB_t1, //!< <a href="../target/aarch32/LDAEXB.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LDAEXD_a1, //!< <a href="../target/aarch32/LDAEXD.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDAEXD_t1, //!< <a href="../target/aarch32/LDAEXD.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LDAEXH_a1, //!< <a href="../target/aarch32/LDAEXH.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDAEXH_t1, //!< <a href="../target/aarch32/LDAEXH.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LDAH_a1, //!< <a href="../target/aarch32/LDAH.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDAH_t1, //!< <a href="../target/aarch32/LDAH.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LDC_i_a1, //!< <a href="../target/aarch32/LDC_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDC_i_t1, //!< <a href="../target/aarch32/LDC_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LDC_l_a1, //!< <a href="../target/aarch32/LDC_l.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDC_l_t1, //!< <a href="../target/aarch32/LDC_l.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LDM_a1, //!< <a href="../target/aarch32/LDM.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDM_t1, //!< <a href="../target/aarch32/LDM.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LDM_t2, //!< <a href="../target/aarch32/LDM.html#t2">T2</a>
  AMED_AARCH32_CCLASS_LDM_e_a1, //!< <a href="../target/aarch32/LDM_e.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDM_u_a1, //!< <a href="../target/aarch32/LDM_u.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDMDA_a1, //!< <a href="../target/aarch32/LDMDA.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDMDB_a1, //!< <a href="../target/aarch32/LDMDB.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDMDB_t1, //!< <a href="../target/aarch32/LDMDB.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LDMIB_a1, //!< <a href="../target/aarch32/LDMIB.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDR_i_a1, //!< <a href="../target/aarch32/LDR_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDR_i_t1, //!< <a href="../target/aarch32/LDR_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LDR_i_t2, //!< <a href="../target/aarch32/LDR_i.html#t2">T2</a>
  AMED_AARCH32_CCLASS_LDR_i_t3, //!< <a href="../target/aarch32/LDR_i.html#t3">T3</a>
  AMED_AARCH32_CCLASS_LDR_i_t4, //!< <a href="../target/aarch32/LDR_i.html#t4">T4</a>
  AMED_AARCH32_CCLASS_LDR_l_a1, //!< <a href="../target/aarch32/LDR_l.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDR_l_t1, //!< <a href="../target/aarch32/LDR_l.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LDR_l_t2, //!< <a href="../target/aarch32/LDR_l.html#t2">T2</a>
  AMED_AARCH32_CCLASS_LDR_r_a1, //!< <a href="../target/aarch32/LDR_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDR_r_t1, //!< <a href="../target/aarch32/LDR_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LDR_r_t2, //!< <a href="../target/aarch32/LDR_r.html#t2">T2</a>
  AMED_AARCH32_CCLASS_LDRB_i_a1, //!< <a href="../target/aarch32/LDRB_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDRB_i_t1, //!< <a href="../target/aarch32/LDRB_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LDRB_i_t2, //!< <a href="../target/aarch32/LDRB_i.html#t2">T2</a>
  AMED_AARCH32_CCLASS_LDRB_i_t3, //!< <a href="../target/aarch32/LDRB_i.html#t3">T3</a>
  AMED_AARCH32_CCLASS_LDRB_l_a1, //!< <a href="../target/aarch32/LDRB_l.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDRB_l_t1, //!< <a href="../target/aarch32/LDRB_l.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LDRB_r_a1, //!< <a href="../target/aarch32/LDRB_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDRB_r_t1, //!< <a href="../target/aarch32/LDRB_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LDRB_r_t2, //!< <a href="../target/aarch32/LDRB_r.html#t2">T2</a>
  AMED_AARCH32_CCLASS_LDRBT_a1, //!< <a href="../target/aarch32/LDRBT.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDRBT_a2, //!< <a href="../target/aarch32/LDRBT.html#a2">A2</a>
  AMED_AARCH32_CCLASS_LDRBT_t1, //!< <a href="../target/aarch32/LDRBT.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LDRD_i_a1, //!< <a href="../target/aarch32/LDRD_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDRD_i_t1, //!< <a href="../target/aarch32/LDRD_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LDRD_l_a1, //!< <a href="../target/aarch32/LDRD_l.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDRD_l_t1, //!< <a href="../target/aarch32/LDRD_l.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LDRD_r_a1, //!< <a href="../target/aarch32/LDRD_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDREX_a1, //!< <a href="../target/aarch32/LDREX.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDREX_t1, //!< <a href="../target/aarch32/LDREX.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LDREXB_a1, //!< <a href="../target/aarch32/LDREXB.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDREXB_t1, //!< <a href="../target/aarch32/LDREXB.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LDREXD_a1, //!< <a href="../target/aarch32/LDREXD.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDREXD_t1, //!< <a href="../target/aarch32/LDREXD.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LDREXH_a1, //!< <a href="../target/aarch32/LDREXH.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDREXH_t1, //!< <a href="../target/aarch32/LDREXH.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LDRH_i_a1, //!< <a href="../target/aarch32/LDRH_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDRH_i_t1, //!< <a href="../target/aarch32/LDRH_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LDRH_i_t2, //!< <a href="../target/aarch32/LDRH_i.html#t2">T2</a>
  AMED_AARCH32_CCLASS_LDRH_i_t3, //!< <a href="../target/aarch32/LDRH_i.html#t3">T3</a>
  AMED_AARCH32_CCLASS_LDRH_l_a1, //!< <a href="../target/aarch32/LDRH_l.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDRH_l_t1, //!< <a href="../target/aarch32/LDRH_l.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LDRH_r_a1, //!< <a href="../target/aarch32/LDRH_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDRH_r_t1, //!< <a href="../target/aarch32/LDRH_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LDRH_r_t2, //!< <a href="../target/aarch32/LDRH_r.html#t2">T2</a>
  AMED_AARCH32_CCLASS_LDRHT_a1, //!< <a href="../target/aarch32/LDRHT.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDRHT_a2, //!< <a href="../target/aarch32/LDRHT.html#a2">A2</a>
  AMED_AARCH32_CCLASS_LDRHT_t1, //!< <a href="../target/aarch32/LDRHT.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LDRSB_i_a1, //!< <a href="../target/aarch32/LDRSB_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDRSB_i_t1, //!< <a href="../target/aarch32/LDRSB_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LDRSB_i_t2, //!< <a href="../target/aarch32/LDRSB_i.html#t2">T2</a>
  AMED_AARCH32_CCLASS_LDRSB_l_a1, //!< <a href="../target/aarch32/LDRSB_l.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDRSB_l_t1, //!< <a href="../target/aarch32/LDRSB_l.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LDRSB_r_a1, //!< <a href="../target/aarch32/LDRSB_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDRSB_r_t1, //!< <a href="../target/aarch32/LDRSB_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LDRSB_r_t2, //!< <a href="../target/aarch32/LDRSB_r.html#t2">T2</a>
  AMED_AARCH32_CCLASS_LDRSBT_a1, //!< <a href="../target/aarch32/LDRSBT.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDRSBT_a2, //!< <a href="../target/aarch32/LDRSBT.html#a2">A2</a>
  AMED_AARCH32_CCLASS_LDRSBT_t1, //!< <a href="../target/aarch32/LDRSBT.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LDRSH_i_a1, //!< <a href="../target/aarch32/LDRSH_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDRSH_i_t1, //!< <a href="../target/aarch32/LDRSH_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LDRSH_i_t2, //!< <a href="../target/aarch32/LDRSH_i.html#t2">T2</a>
  AMED_AARCH32_CCLASS_LDRSH_l_a1, //!< <a href="../target/aarch32/LDRSH_l.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDRSH_l_t1, //!< <a href="../target/aarch32/LDRSH_l.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LDRSH_r_a1, //!< <a href="../target/aarch32/LDRSH_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDRSH_r_t1, //!< <a href="../target/aarch32/LDRSH_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LDRSH_r_t2, //!< <a href="../target/aarch32/LDRSH_r.html#t2">T2</a>
  AMED_AARCH32_CCLASS_LDRSHT_a1, //!< <a href="../target/aarch32/LDRSHT.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDRSHT_a2, //!< <a href="../target/aarch32/LDRSHT.html#a2">A2</a>
  AMED_AARCH32_CCLASS_LDRSHT_t1, //!< <a href="../target/aarch32/LDRSHT.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LDRT_a1, //!< <a href="../target/aarch32/LDRT.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LDRT_a2, //!< <a href="../target/aarch32/LDRT.html#a2">A2</a>
  AMED_AARCH32_CCLASS_LDRT_t1, //!< <a href="../target/aarch32/LDRT.html#t1">T1</a>
  AMED_AARCH32_CCLASS_MCR_a1, //!< <a href="../target/aarch32/MCR.html#a1">A1</a>
  AMED_AARCH32_CCLASS_MCR_t1, //!< <a href="../target/aarch32/MCR.html#t1">T1</a>
  AMED_AARCH32_CCLASS_MCRR_a1, //!< <a href="../target/aarch32/MCRR.html#a1">A1</a>
  AMED_AARCH32_CCLASS_MCRR_t1, //!< <a href="../target/aarch32/MCRR.html#t1">T1</a>
  AMED_AARCH32_CCLASS_MLA_a1, //!< <a href="../target/aarch32/MLA.html#a1">A1</a>
  AMED_AARCH32_CCLASS_MLA_t1, //!< <a href="../target/aarch32/MLA.html#t1">T1</a>
  AMED_AARCH32_CCLASS_MLS_a1, //!< <a href="../target/aarch32/MLS.html#a1">A1</a>
  AMED_AARCH32_CCLASS_MLS_t1, //!< <a href="../target/aarch32/MLS.html#t1">T1</a>
  AMED_AARCH32_CCLASS_MOV_i_a1, //!< <a href="../target/aarch32/MOV_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_MOV_i_a2, //!< <a href="../target/aarch32/MOV_i.html#a2">A2</a>
  AMED_AARCH32_CCLASS_MOV_i_t1, //!< <a href="../target/aarch32/MOV_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_MOV_i_t2, //!< <a href="../target/aarch32/MOV_i.html#t2">T2</a>
  AMED_AARCH32_CCLASS_MOV_i_t3, //!< <a href="../target/aarch32/MOV_i.html#t3">T3</a>
  AMED_AARCH32_CCLASS_MOV_r_a1, //!< <a href="../target/aarch32/MOV_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_MOV_r_t1, //!< <a href="../target/aarch32/MOV_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_MOV_r_t2, //!< <a href="../target/aarch32/MOV_r.html#t2">T2</a>
  AMED_AARCH32_CCLASS_MOV_r_t3, //!< <a href="../target/aarch32/MOV_r.html#t3">T3</a>
  AMED_AARCH32_CCLASS_MOV_rr_a1, //!< <a href="../target/aarch32/MOV_rr.html#a1">A1</a>
  AMED_AARCH32_CCLASS_MOV_rr_t1, //!< <a href="../target/aarch32/MOV_rr.html#t1">T1</a>
  AMED_AARCH32_CCLASS_MOV_rr_t2, //!< <a href="../target/aarch32/MOV_rr.html#t2">T2</a>
  AMED_AARCH32_CCLASS_MOVT_a1, //!< <a href="../target/aarch32/MOVT.html#a1">A1</a>
  AMED_AARCH32_CCLASS_MOVT_t1, //!< <a href="../target/aarch32/MOVT.html#t1">T1</a>
  AMED_AARCH32_CCLASS_MRC_a1, //!< <a href="../target/aarch32/MRC.html#a1">A1</a>
  AMED_AARCH32_CCLASS_MRC_t1, //!< <a href="../target/aarch32/MRC.html#t1">T1</a>
  AMED_AARCH32_CCLASS_MRRC_a1, //!< <a href="../target/aarch32/MRRC.html#a1">A1</a>
  AMED_AARCH32_CCLASS_MRRC_t1, //!< <a href="../target/aarch32/MRRC.html#t1">T1</a>
  AMED_AARCH32_CCLASS_MRS_a1, //!< <a href="../target/aarch32/MRS.html#a1">A1</a>
  AMED_AARCH32_CCLASS_MRS_t1, //!< <a href="../target/aarch32/MRS.html#t1">T1</a>
  AMED_AARCH32_CCLASS_MRS_br_a1, //!< <a href="../target/aarch32/MRS_br.html#a1">A1</a>
  AMED_AARCH32_CCLASS_MRS_br_t1, //!< <a href="../target/aarch32/MRS_br.html#t1">T1</a>
  AMED_AARCH32_CCLASS_MSR_br_a1, //!< <a href="../target/aarch32/MSR_br.html#a1">A1</a>
  AMED_AARCH32_CCLASS_MSR_br_t1, //!< <a href="../target/aarch32/MSR_br.html#t1">T1</a>
  AMED_AARCH32_CCLASS_MSR_i_a1, //!< <a href="../target/aarch32/MSR_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_MSR_r_a1, //!< <a href="../target/aarch32/MSR_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_MSR_r_t1, //!< <a href="../target/aarch32/MSR_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_MUL_a1, //!< <a href="../target/aarch32/MUL.html#a1">A1</a>
  AMED_AARCH32_CCLASS_MUL_t1, //!< <a href="../target/aarch32/MUL.html#t1">T1</a>
  AMED_AARCH32_CCLASS_MUL_t2, //!< <a href="../target/aarch32/MUL.html#t2">T2</a>
  AMED_AARCH32_CCLASS_MVN_i_a1, //!< <a href="../target/aarch32/MVN_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_MVN_i_t1, //!< <a href="../target/aarch32/MVN_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_MVN_r_a1, //!< <a href="../target/aarch32/MVN_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_MVN_r_t1, //!< <a href="../target/aarch32/MVN_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_MVN_r_t2, //!< <a href="../target/aarch32/MVN_r.html#t2">T2</a>
  AMED_AARCH32_CCLASS_MVN_rr_a1, //!< <a href="../target/aarch32/MVN_rr.html#a1">A1</a>
  AMED_AARCH32_CCLASS_NOP_a1, //!< <a href="../target/aarch32/NOP.html#a1">A1</a>
  AMED_AARCH32_CCLASS_NOP_t1, //!< <a href="../target/aarch32/NOP.html#t1">T1</a>
  AMED_AARCH32_CCLASS_NOP_t2, //!< <a href="../target/aarch32/NOP.html#t2">T2</a>
  AMED_AARCH32_CCLASS_ORN_i_t1, //!< <a href="../target/aarch32/ORN_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_ORN_r_t1, //!< <a href="../target/aarch32/ORN_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_ORR_i_a1, //!< <a href="../target/aarch32/ORR_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_ORR_i_t1, //!< <a href="../target/aarch32/ORR_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_ORR_r_a1, //!< <a href="../target/aarch32/ORR_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_ORR_r_t1, //!< <a href="../target/aarch32/ORR_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_ORR_r_t2, //!< <a href="../target/aarch32/ORR_r.html#t2">T2</a>
  AMED_AARCH32_CCLASS_ORR_rr_a1, //!< <a href="../target/aarch32/ORR_rr.html#a1">A1</a>
  AMED_AARCH32_CCLASS_PKH_a1, //!< <a href="../target/aarch32/PKH.html#a1">A1</a>
  AMED_AARCH32_CCLASS_PKH_t1, //!< <a href="../target/aarch32/PKH.html#t1">T1</a>
  AMED_AARCH32_CCLASS_PLD_i_a1, //!< <a href="../target/aarch32/PLD_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_PLD_i_t1, //!< <a href="../target/aarch32/PLD_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_PLD_i_t2, //!< <a href="../target/aarch32/PLD_i.html#t2">T2</a>
  AMED_AARCH32_CCLASS_PLD_l_a1, //!< <a href="../target/aarch32/PLD_l.html#a1">A1</a>
  AMED_AARCH32_CCLASS_PLD_l_t1, //!< <a href="../target/aarch32/PLD_l.html#t1">T1</a>
  AMED_AARCH32_CCLASS_PLD_r_a1, //!< <a href="../target/aarch32/PLD_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_PLD_r_t1, //!< <a href="../target/aarch32/PLD_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_PLI_i_a1, //!< <a href="../target/aarch32/PLI_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_PLI_i_t1, //!< <a href="../target/aarch32/PLI_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_PLI_i_t2, //!< <a href="../target/aarch32/PLI_i.html#t2">T2</a>
  AMED_AARCH32_CCLASS_PLI_i_t3, //!< <a href="../target/aarch32/PLI_i.html#t3">T3</a>
  AMED_AARCH32_CCLASS_PLI_r_a1, //!< <a href="../target/aarch32/PLI_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_PLI_r_t1, //!< <a href="../target/aarch32/PLI_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_POP_t1, //!< <a href="../target/aarch32/POP.html#t1">T1</a>
  AMED_AARCH32_CCLASS_PSSBB_a1, //!< <a href="../target/aarch32/PSSBB.html#a1">A1</a>
  AMED_AARCH32_CCLASS_PSSBB_t1, //!< <a href="../target/aarch32/PSSBB.html#t1">T1</a>
  AMED_AARCH32_CCLASS_PUSH_t1, //!< <a href="../target/aarch32/PUSH.html#t1">T1</a>
  AMED_AARCH32_CCLASS_QADD_a1, //!< <a href="../target/aarch32/QADD.html#a1">A1</a>
  AMED_AARCH32_CCLASS_QADD_t1, //!< <a href="../target/aarch32/QADD.html#t1">T1</a>
  AMED_AARCH32_CCLASS_QADD16_a1, //!< <a href="../target/aarch32/QADD16.html#a1">A1</a>
  AMED_AARCH32_CCLASS_QADD16_t1, //!< <a href="../target/aarch32/QADD16.html#t1">T1</a>
  AMED_AARCH32_CCLASS_QADD8_a1, //!< <a href="../target/aarch32/QADD8.html#a1">A1</a>
  AMED_AARCH32_CCLASS_QADD8_t1, //!< <a href="../target/aarch32/QADD8.html#t1">T1</a>
  AMED_AARCH32_CCLASS_QASX_a1, //!< <a href="../target/aarch32/QASX.html#a1">A1</a>
  AMED_AARCH32_CCLASS_QASX_t1, //!< <a href="../target/aarch32/QASX.html#t1">T1</a>
  AMED_AARCH32_CCLASS_QDADD_a1, //!< <a href="../target/aarch32/QDADD.html#a1">A1</a>
  AMED_AARCH32_CCLASS_QDADD_t1, //!< <a href="../target/aarch32/QDADD.html#t1">T1</a>
  AMED_AARCH32_CCLASS_QDSUB_a1, //!< <a href="../target/aarch32/QDSUB.html#a1">A1</a>
  AMED_AARCH32_CCLASS_QDSUB_t1, //!< <a href="../target/aarch32/QDSUB.html#t1">T1</a>
  AMED_AARCH32_CCLASS_QSAX_a1, //!< <a href="../target/aarch32/QSAX.html#a1">A1</a>
  AMED_AARCH32_CCLASS_QSAX_t1, //!< <a href="../target/aarch32/QSAX.html#t1">T1</a>
  AMED_AARCH32_CCLASS_QSUB_a1, //!< <a href="../target/aarch32/QSUB.html#a1">A1</a>
  AMED_AARCH32_CCLASS_QSUB_t1, //!< <a href="../target/aarch32/QSUB.html#t1">T1</a>
  AMED_AARCH32_CCLASS_QSUB16_a1, //!< <a href="../target/aarch32/QSUB16.html#a1">A1</a>
  AMED_AARCH32_CCLASS_QSUB16_t1, //!< <a href="../target/aarch32/QSUB16.html#t1">T1</a>
  AMED_AARCH32_CCLASS_QSUB8_a1, //!< <a href="../target/aarch32/QSUB8.html#a1">A1</a>
  AMED_AARCH32_CCLASS_QSUB8_t1, //!< <a href="../target/aarch32/QSUB8.html#t1">T1</a>
  AMED_AARCH32_CCLASS_RBIT_a1, //!< <a href="../target/aarch32/RBIT.html#a1">A1</a>
  AMED_AARCH32_CCLASS_RBIT_t1, //!< <a href="../target/aarch32/RBIT.html#t1">T1</a>
  AMED_AARCH32_CCLASS_REV_a1, //!< <a href="../target/aarch32/REV.html#a1">A1</a>
  AMED_AARCH32_CCLASS_REV_t1, //!< <a href="../target/aarch32/REV.html#t1">T1</a>
  AMED_AARCH32_CCLASS_REV_t2, //!< <a href="../target/aarch32/REV.html#t2">T2</a>
  AMED_AARCH32_CCLASS_REV16_a1, //!< <a href="../target/aarch32/REV16.html#a1">A1</a>
  AMED_AARCH32_CCLASS_REV16_t1, //!< <a href="../target/aarch32/REV16.html#t1">T1</a>
  AMED_AARCH32_CCLASS_REV16_t2, //!< <a href="../target/aarch32/REV16.html#t2">T2</a>
  AMED_AARCH32_CCLASS_REVSH_a1, //!< <a href="../target/aarch32/REVSH.html#a1">A1</a>
  AMED_AARCH32_CCLASS_REVSH_t1, //!< <a href="../target/aarch32/REVSH.html#t1">T1</a>
  AMED_AARCH32_CCLASS_REVSH_t2, //!< <a href="../target/aarch32/REVSH.html#t2">T2</a>
  AMED_AARCH32_CCLASS_RFE_a1, //!< <a href="../target/aarch32/RFE.html#a1">A1</a>
  AMED_AARCH32_CCLASS_RFE_t1, //!< <a href="../target/aarch32/RFE.html#t1">T1</a>
  AMED_AARCH32_CCLASS_RFE_t2, //!< <a href="../target/aarch32/RFE.html#t2">T2</a>
  AMED_AARCH32_CCLASS_RSB_i_a1, //!< <a href="../target/aarch32/RSB_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_RSB_i_t1, //!< <a href="../target/aarch32/RSB_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_RSB_i_t2, //!< <a href="../target/aarch32/RSB_i.html#t2">T2</a>
  AMED_AARCH32_CCLASS_RSB_r_a1, //!< <a href="../target/aarch32/RSB_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_RSB_r_t1, //!< <a href="../target/aarch32/RSB_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_RSB_rr_a1, //!< <a href="../target/aarch32/RSB_rr.html#a1">A1</a>
  AMED_AARCH32_CCLASS_RSC_i_a1, //!< <a href="../target/aarch32/RSC_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_RSC_r_a1, //!< <a href="../target/aarch32/RSC_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_RSC_rr_a1, //!< <a href="../target/aarch32/RSC_rr.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SADD16_a1, //!< <a href="../target/aarch32/SADD16.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SADD16_t1, //!< <a href="../target/aarch32/SADD16.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SADD8_a1, //!< <a href="../target/aarch32/SADD8.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SADD8_t1, //!< <a href="../target/aarch32/SADD8.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SASX_a1, //!< <a href="../target/aarch32/SASX.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SASX_t1, //!< <a href="../target/aarch32/SASX.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SB_a1, //!< <a href="../target/aarch32/SB.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SB_t1, //!< <a href="../target/aarch32/SB.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SBC_i_a1, //!< <a href="../target/aarch32/SBC_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SBC_i_t1, //!< <a href="../target/aarch32/SBC_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SBC_r_a1, //!< <a href="../target/aarch32/SBC_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SBC_r_t1, //!< <a href="../target/aarch32/SBC_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SBC_r_t2, //!< <a href="../target/aarch32/SBC_r.html#t2">T2</a>
  AMED_AARCH32_CCLASS_SBC_rr_a1, //!< <a href="../target/aarch32/SBC_rr.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SBFX_a1, //!< <a href="../target/aarch32/SBFX.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SBFX_t1, //!< <a href="../target/aarch32/SBFX.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SDIV_a1, //!< <a href="../target/aarch32/SDIV.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SDIV_t1, //!< <a href="../target/aarch32/SDIV.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SEL_a1, //!< <a href="../target/aarch32/SEL.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SEL_t1, //!< <a href="../target/aarch32/SEL.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SETEND_a1, //!< <a href="../target/aarch32/SETEND.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SETEND_t1, //!< <a href="../target/aarch32/SETEND.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SETPAN_a1, //!< <a href="../target/aarch32/SETPAN.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SETPAN_t1, //!< <a href="../target/aarch32/SETPAN.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SEV_a1, //!< <a href="../target/aarch32/SEV.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SEV_t1, //!< <a href="../target/aarch32/SEV.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SEV_t2, //!< <a href="../target/aarch32/SEV.html#t2">T2</a>
  AMED_AARCH32_CCLASS_SEVL_a1, //!< <a href="../target/aarch32/SEVL.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SEVL_t1, //!< <a href="../target/aarch32/SEVL.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SEVL_t2, //!< <a href="../target/aarch32/SEVL.html#t2">T2</a>
  AMED_AARCH32_CCLASS_SHADD16_a1, //!< <a href="../target/aarch32/SHADD16.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SHADD16_t1, //!< <a href="../target/aarch32/SHADD16.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SHADD8_a1, //!< <a href="../target/aarch32/SHADD8.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SHADD8_t1, //!< <a href="../target/aarch32/SHADD8.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SHASX_a1, //!< <a href="../target/aarch32/SHASX.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SHASX_t1, //!< <a href="../target/aarch32/SHASX.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SHSAX_a1, //!< <a href="../target/aarch32/SHSAX.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SHSAX_t1, //!< <a href="../target/aarch32/SHSAX.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SHSUB16_a1, //!< <a href="../target/aarch32/SHSUB16.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SHSUB16_t1, //!< <a href="../target/aarch32/SHSUB16.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SHSUB8_a1, //!< <a href="../target/aarch32/SHSUB8.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SHSUB8_t1, //!< <a href="../target/aarch32/SHSUB8.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SMC_a1, //!< <a href="../target/aarch32/SMC.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SMC_t1, //!< <a href="../target/aarch32/SMC.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SMLABB_a1, //!< <a href="../target/aarch32/SMLABB.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SMLABB_t1, //!< <a href="../target/aarch32/SMLABB.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SMLAD_a1, //!< <a href="../target/aarch32/SMLAD.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SMLAD_t1, //!< <a href="../target/aarch32/SMLAD.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SMLAL_a1, //!< <a href="../target/aarch32/SMLAL.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SMLAL_t1, //!< <a href="../target/aarch32/SMLAL.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SMLALBB_a1, //!< <a href="../target/aarch32/SMLALBB.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SMLALBB_t1, //!< <a href="../target/aarch32/SMLALBB.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SMLALD_a1, //!< <a href="../target/aarch32/SMLALD.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SMLALD_t1, //!< <a href="../target/aarch32/SMLALD.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SMLAWB_a1, //!< <a href="../target/aarch32/SMLAWB.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SMLAWB_t1, //!< <a href="../target/aarch32/SMLAWB.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SMLSD_a1, //!< <a href="../target/aarch32/SMLSD.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SMLSD_t1, //!< <a href="../target/aarch32/SMLSD.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SMLSLD_a1, //!< <a href="../target/aarch32/SMLSLD.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SMLSLD_t1, //!< <a href="../target/aarch32/SMLSLD.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SMMLA_a1, //!< <a href="../target/aarch32/SMMLA.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SMMLA_t1, //!< <a href="../target/aarch32/SMMLA.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SMMLS_a1, //!< <a href="../target/aarch32/SMMLS.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SMMLS_t1, //!< <a href="../target/aarch32/SMMLS.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SMMUL_a1, //!< <a href="../target/aarch32/SMMUL.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SMMUL_t1, //!< <a href="../target/aarch32/SMMUL.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SMUAD_a1, //!< <a href="../target/aarch32/SMUAD.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SMUAD_t1, //!< <a href="../target/aarch32/SMUAD.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SMULBB_a1, //!< <a href="../target/aarch32/SMULBB.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SMULBB_t1, //!< <a href="../target/aarch32/SMULBB.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SMULL_a1, //!< <a href="../target/aarch32/SMULL.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SMULL_t1, //!< <a href="../target/aarch32/SMULL.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SMULWB_a1, //!< <a href="../target/aarch32/SMULWB.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SMULWB_t1, //!< <a href="../target/aarch32/SMULWB.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SMUSD_a1, //!< <a href="../target/aarch32/SMUSD.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SMUSD_t1, //!< <a href="../target/aarch32/SMUSD.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SRS_a1, //!< <a href="../target/aarch32/SRS.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SRS_t1, //!< <a href="../target/aarch32/SRS.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SRS_t2, //!< <a href="../target/aarch32/SRS.html#t2">T2</a>
  AMED_AARCH32_CCLASS_SSAT_a1, //!< <a href="../target/aarch32/SSAT.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SSAT_t1, //!< <a href="../target/aarch32/SSAT.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SSAT16_a1, //!< <a href="../target/aarch32/SSAT16.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SSAT16_t1, //!< <a href="../target/aarch32/SSAT16.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SSAX_a1, //!< <a href="../target/aarch32/SSAX.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SSAX_t1, //!< <a href="../target/aarch32/SSAX.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SSBB_a1, //!< <a href="../target/aarch32/SSBB.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SSBB_t1, //!< <a href="../target/aarch32/SSBB.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SSUB16_a1, //!< <a href="../target/aarch32/SSUB16.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SSUB16_t1, //!< <a href="../target/aarch32/SSUB16.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SSUB8_a1, //!< <a href="../target/aarch32/SSUB8.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SSUB8_t1, //!< <a href="../target/aarch32/SSUB8.html#t1">T1</a>
  AMED_AARCH32_CCLASS_STC_a1, //!< <a href="../target/aarch32/STC.html#a1">A1</a>
  AMED_AARCH32_CCLASS_STC_t1, //!< <a href="../target/aarch32/STC.html#t1">T1</a>
  AMED_AARCH32_CCLASS_STL_a1, //!< <a href="../target/aarch32/STL.html#a1">A1</a>
  AMED_AARCH32_CCLASS_STL_t1, //!< <a href="../target/aarch32/STL.html#t1">T1</a>
  AMED_AARCH32_CCLASS_STLB_a1, //!< <a href="../target/aarch32/STLB.html#a1">A1</a>
  AMED_AARCH32_CCLASS_STLB_t1, //!< <a href="../target/aarch32/STLB.html#t1">T1</a>
  AMED_AARCH32_CCLASS_STLEX_a1, //!< <a href="../target/aarch32/STLEX.html#a1">A1</a>
  AMED_AARCH32_CCLASS_STLEX_t1, //!< <a href="../target/aarch32/STLEX.html#t1">T1</a>
  AMED_AARCH32_CCLASS_STLEXB_a1, //!< <a href="../target/aarch32/STLEXB.html#a1">A1</a>
  AMED_AARCH32_CCLASS_STLEXB_t1, //!< <a href="../target/aarch32/STLEXB.html#t1">T1</a>
  AMED_AARCH32_CCLASS_STLEXD_a1, //!< <a href="../target/aarch32/STLEXD.html#a1">A1</a>
  AMED_AARCH32_CCLASS_STLEXD_t1, //!< <a href="../target/aarch32/STLEXD.html#t1">T1</a>
  AMED_AARCH32_CCLASS_STLEXH_a1, //!< <a href="../target/aarch32/STLEXH.html#a1">A1</a>
  AMED_AARCH32_CCLASS_STLEXH_t1, //!< <a href="../target/aarch32/STLEXH.html#t1">T1</a>
  AMED_AARCH32_CCLASS_STLH_a1, //!< <a href="../target/aarch32/STLH.html#a1">A1</a>
  AMED_AARCH32_CCLASS_STLH_t1, //!< <a href="../target/aarch32/STLH.html#t1">T1</a>
  AMED_AARCH32_CCLASS_STM_a1, //!< <a href="../target/aarch32/STM.html#a1">A1</a>
  AMED_AARCH32_CCLASS_STM_t1, //!< <a href="../target/aarch32/STM.html#t1">T1</a>
  AMED_AARCH32_CCLASS_STM_t2, //!< <a href="../target/aarch32/STM.html#t2">T2</a>
  AMED_AARCH32_CCLASS_STM_u_a1, //!< <a href="../target/aarch32/STM_u.html#a1">A1</a>
  AMED_AARCH32_CCLASS_STMDA_a1, //!< <a href="../target/aarch32/STMDA.html#a1">A1</a>
  AMED_AARCH32_CCLASS_STMDB_a1, //!< <a href="../target/aarch32/STMDB.html#a1">A1</a>
  AMED_AARCH32_CCLASS_STMDB_t1, //!< <a href="../target/aarch32/STMDB.html#t1">T1</a>
  AMED_AARCH32_CCLASS_STMIB_a1, //!< <a href="../target/aarch32/STMIB.html#a1">A1</a>
  AMED_AARCH32_CCLASS_STR_i_a1, //!< <a href="../target/aarch32/STR_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_STR_i_t1, //!< <a href="../target/aarch32/STR_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_STR_i_t2, //!< <a href="../target/aarch32/STR_i.html#t2">T2</a>
  AMED_AARCH32_CCLASS_STR_i_t3, //!< <a href="../target/aarch32/STR_i.html#t3">T3</a>
  AMED_AARCH32_CCLASS_STR_i_t4, //!< <a href="../target/aarch32/STR_i.html#t4">T4</a>
  AMED_AARCH32_CCLASS_STR_r_a1, //!< <a href="../target/aarch32/STR_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_STR_r_t1, //!< <a href="../target/aarch32/STR_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_STR_r_t2, //!< <a href="../target/aarch32/STR_r.html#t2">T2</a>
  AMED_AARCH32_CCLASS_STRB_i_a1, //!< <a href="../target/aarch32/STRB_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_STRB_i_t1, //!< <a href="../target/aarch32/STRB_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_STRB_i_t2, //!< <a href="../target/aarch32/STRB_i.html#t2">T2</a>
  AMED_AARCH32_CCLASS_STRB_i_t3, //!< <a href="../target/aarch32/STRB_i.html#t3">T3</a>
  AMED_AARCH32_CCLASS_STRB_r_a1, //!< <a href="../target/aarch32/STRB_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_STRB_r_t1, //!< <a href="../target/aarch32/STRB_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_STRB_r_t2, //!< <a href="../target/aarch32/STRB_r.html#t2">T2</a>
  AMED_AARCH32_CCLASS_STRBT_a1, //!< <a href="../target/aarch32/STRBT.html#a1">A1</a>
  AMED_AARCH32_CCLASS_STRBT_a2, //!< <a href="../target/aarch32/STRBT.html#a2">A2</a>
  AMED_AARCH32_CCLASS_STRBT_t1, //!< <a href="../target/aarch32/STRBT.html#t1">T1</a>
  AMED_AARCH32_CCLASS_STRD_i_a1, //!< <a href="../target/aarch32/STRD_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_STRD_i_t1, //!< <a href="../target/aarch32/STRD_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_STRD_r_a1, //!< <a href="../target/aarch32/STRD_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_STREX_a1, //!< <a href="../target/aarch32/STREX.html#a1">A1</a>
  AMED_AARCH32_CCLASS_STREX_t1, //!< <a href="../target/aarch32/STREX.html#t1">T1</a>
  AMED_AARCH32_CCLASS_STREXB_a1, //!< <a href="../target/aarch32/STREXB.html#a1">A1</a>
  AMED_AARCH32_CCLASS_STREXB_t1, //!< <a href="../target/aarch32/STREXB.html#t1">T1</a>
  AMED_AARCH32_CCLASS_STREXD_a1, //!< <a href="../target/aarch32/STREXD.html#a1">A1</a>
  AMED_AARCH32_CCLASS_STREXD_t1, //!< <a href="../target/aarch32/STREXD.html#t1">T1</a>
  AMED_AARCH32_CCLASS_STREXH_a1, //!< <a href="../target/aarch32/STREXH.html#a1">A1</a>
  AMED_AARCH32_CCLASS_STREXH_t1, //!< <a href="../target/aarch32/STREXH.html#t1">T1</a>
  AMED_AARCH32_CCLASS_STRH_i_a1, //!< <a href="../target/aarch32/STRH_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_STRH_i_t1, //!< <a href="../target/aarch32/STRH_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_STRH_i_t2, //!< <a href="../target/aarch32/STRH_i.html#t2">T2</a>
  AMED_AARCH32_CCLASS_STRH_i_t3, //!< <a href="../target/aarch32/STRH_i.html#t3">T3</a>
  AMED_AARCH32_CCLASS_STRH_r_a1, //!< <a href="../target/aarch32/STRH_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_STRH_r_t1, //!< <a href="../target/aarch32/STRH_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_STRH_r_t2, //!< <a href="../target/aarch32/STRH_r.html#t2">T2</a>
  AMED_AARCH32_CCLASS_STRHT_a1, //!< <a href="../target/aarch32/STRHT.html#a1">A1</a>
  AMED_AARCH32_CCLASS_STRHT_a2, //!< <a href="../target/aarch32/STRHT.html#a2">A2</a>
  AMED_AARCH32_CCLASS_STRHT_t1, //!< <a href="../target/aarch32/STRHT.html#t1">T1</a>
  AMED_AARCH32_CCLASS_STRT_a1, //!< <a href="../target/aarch32/STRT.html#a1">A1</a>
  AMED_AARCH32_CCLASS_STRT_a2, //!< <a href="../target/aarch32/STRT.html#a2">A2</a>
  AMED_AARCH32_CCLASS_STRT_t1, //!< <a href="../target/aarch32/STRT.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SUB_i_a1, //!< <a href="../target/aarch32/SUB_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SUB_i_t1, //!< <a href="../target/aarch32/SUB_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SUB_i_t2, //!< <a href="../target/aarch32/SUB_i.html#t2">T2</a>
  AMED_AARCH32_CCLASS_SUB_i_t3, //!< <a href="../target/aarch32/SUB_i.html#t3">T3</a>
  AMED_AARCH32_CCLASS_SUB_i_t4, //!< <a href="../target/aarch32/SUB_i.html#t4">T4</a>
  AMED_AARCH32_CCLASS_SUB_i_t5, //!< <a href="../target/aarch32/SUB_i.html#t5">T5</a>
  AMED_AARCH32_CCLASS_SUB_r_a1, //!< <a href="../target/aarch32/SUB_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SUB_r_t1, //!< <a href="../target/aarch32/SUB_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SUB_r_t2, //!< <a href="../target/aarch32/SUB_r.html#t2">T2</a>
  AMED_AARCH32_CCLASS_SUB_rr_a1, //!< <a href="../target/aarch32/SUB_rr.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SUB_SP_i_a1, //!< <a href="../target/aarch32/SUB_SP_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SUB_SP_i_t1, //!< <a href="../target/aarch32/SUB_SP_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SUB_SP_i_t2, //!< <a href="../target/aarch32/SUB_SP_i.html#t2">T2</a>
  AMED_AARCH32_CCLASS_SUB_SP_i_t3, //!< <a href="../target/aarch32/SUB_SP_i.html#t3">T3</a>
  AMED_AARCH32_CCLASS_SUB_SP_r_a1, //!< <a href="../target/aarch32/SUB_SP_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SUB_SP_r_t1, //!< <a href="../target/aarch32/SUB_SP_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SVC_a1, //!< <a href="../target/aarch32/SVC.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SVC_t1, //!< <a href="../target/aarch32/SVC.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SXTAB_a1, //!< <a href="../target/aarch32/SXTAB.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SXTAB_t1, //!< <a href="../target/aarch32/SXTAB.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SXTAB16_a1, //!< <a href="../target/aarch32/SXTAB16.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SXTAB16_t1, //!< <a href="../target/aarch32/SXTAB16.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SXTAH_a1, //!< <a href="../target/aarch32/SXTAH.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SXTAH_t1, //!< <a href="../target/aarch32/SXTAH.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SXTB_a1, //!< <a href="../target/aarch32/SXTB.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SXTB_t1, //!< <a href="../target/aarch32/SXTB.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SXTB_t2, //!< <a href="../target/aarch32/SXTB.html#t2">T2</a>
  AMED_AARCH32_CCLASS_SXTB16_a1, //!< <a href="../target/aarch32/SXTB16.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SXTB16_t1, //!< <a href="../target/aarch32/SXTB16.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SXTH_a1, //!< <a href="../target/aarch32/SXTH.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SXTH_t1, //!< <a href="../target/aarch32/SXTH.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SXTH_t2, //!< <a href="../target/aarch32/SXTH.html#t2">T2</a>
  AMED_AARCH32_CCLASS_TBB_t1, //!< <a href="../target/aarch32/TBB.html#t1">T1</a>
  AMED_AARCH32_CCLASS_TEQ_i_a1, //!< <a href="../target/aarch32/TEQ_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_TEQ_i_t1, //!< <a href="../target/aarch32/TEQ_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_TEQ_r_a1, //!< <a href="../target/aarch32/TEQ_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_TEQ_r_t1, //!< <a href="../target/aarch32/TEQ_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_TEQ_rr_a1, //!< <a href="../target/aarch32/TEQ_rr.html#a1">A1</a>
  AMED_AARCH32_CCLASS_TSB_a1, //!< <a href="../target/aarch32/TSB.html#a1">A1</a>
  AMED_AARCH32_CCLASS_TSB_t1, //!< <a href="../target/aarch32/TSB.html#t1">T1</a>
  AMED_AARCH32_CCLASS_TST_i_a1, //!< <a href="../target/aarch32/TST_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_TST_i_t1, //!< <a href="../target/aarch32/TST_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_TST_r_a1, //!< <a href="../target/aarch32/TST_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_TST_r_t1, //!< <a href="../target/aarch32/TST_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_TST_r_t2, //!< <a href="../target/aarch32/TST_r.html#t2">T2</a>
  AMED_AARCH32_CCLASS_TST_rr_a1, //!< <a href="../target/aarch32/TST_rr.html#a1">A1</a>
  AMED_AARCH32_CCLASS_UADD16_a1, //!< <a href="../target/aarch32/UADD16.html#a1">A1</a>
  AMED_AARCH32_CCLASS_UADD16_t1, //!< <a href="../target/aarch32/UADD16.html#t1">T1</a>
  AMED_AARCH32_CCLASS_UADD8_a1, //!< <a href="../target/aarch32/UADD8.html#a1">A1</a>
  AMED_AARCH32_CCLASS_UADD8_t1, //!< <a href="../target/aarch32/UADD8.html#t1">T1</a>
  AMED_AARCH32_CCLASS_UASX_a1, //!< <a href="../target/aarch32/UASX.html#a1">A1</a>
  AMED_AARCH32_CCLASS_UASX_t1, //!< <a href="../target/aarch32/UASX.html#t1">T1</a>
  AMED_AARCH32_CCLASS_UBFX_a1, //!< <a href="../target/aarch32/UBFX.html#a1">A1</a>
  AMED_AARCH32_CCLASS_UBFX_t1, //!< <a href="../target/aarch32/UBFX.html#t1">T1</a>
  AMED_AARCH32_CCLASS_UDF_a1, //!< <a href="../target/aarch32/UDF.html#a1">A1</a>
  AMED_AARCH32_CCLASS_UDF_t1, //!< <a href="../target/aarch32/UDF.html#t1">T1</a>
  AMED_AARCH32_CCLASS_UDF_t2, //!< <a href="../target/aarch32/UDF.html#t2">T2</a>
  AMED_AARCH32_CCLASS_UDIV_a1, //!< <a href="../target/aarch32/UDIV.html#a1">A1</a>
  AMED_AARCH32_CCLASS_UDIV_t1, //!< <a href="../target/aarch32/UDIV.html#t1">T1</a>
  AMED_AARCH32_CCLASS_UHADD16_a1, //!< <a href="../target/aarch32/UHADD16.html#a1">A1</a>
  AMED_AARCH32_CCLASS_UHADD16_t1, //!< <a href="../target/aarch32/UHADD16.html#t1">T1</a>
  AMED_AARCH32_CCLASS_UHADD8_a1, //!< <a href="../target/aarch32/UHADD8.html#a1">A1</a>
  AMED_AARCH32_CCLASS_UHADD8_t1, //!< <a href="../target/aarch32/UHADD8.html#t1">T1</a>
  AMED_AARCH32_CCLASS_UHASX_a1, //!< <a href="../target/aarch32/UHASX.html#a1">A1</a>
  AMED_AARCH32_CCLASS_UHASX_t1, //!< <a href="../target/aarch32/UHASX.html#t1">T1</a>
  AMED_AARCH32_CCLASS_UHSAX_a1, //!< <a href="../target/aarch32/UHSAX.html#a1">A1</a>
  AMED_AARCH32_CCLASS_UHSAX_t1, //!< <a href="../target/aarch32/UHSAX.html#t1">T1</a>
  AMED_AARCH32_CCLASS_UHSUB16_a1, //!< <a href="../target/aarch32/UHSUB16.html#a1">A1</a>
  AMED_AARCH32_CCLASS_UHSUB16_t1, //!< <a href="../target/aarch32/UHSUB16.html#t1">T1</a>
  AMED_AARCH32_CCLASS_UHSUB8_a1, //!< <a href="../target/aarch32/UHSUB8.html#a1">A1</a>
  AMED_AARCH32_CCLASS_UHSUB8_t1, //!< <a href="../target/aarch32/UHSUB8.html#t1">T1</a>
  AMED_AARCH32_CCLASS_UMAAL_a1, //!< <a href="../target/aarch32/UMAAL.html#a1">A1</a>
  AMED_AARCH32_CCLASS_UMAAL_t1, //!< <a href="../target/aarch32/UMAAL.html#t1">T1</a>
  AMED_AARCH32_CCLASS_UMLAL_a1, //!< <a href="../target/aarch32/UMLAL.html#a1">A1</a>
  AMED_AARCH32_CCLASS_UMLAL_t1, //!< <a href="../target/aarch32/UMLAL.html#t1">T1</a>
  AMED_AARCH32_CCLASS_UMULL_a1, //!< <a href="../target/aarch32/UMULL.html#a1">A1</a>
  AMED_AARCH32_CCLASS_UMULL_t1, //!< <a href="../target/aarch32/UMULL.html#t1">T1</a>
  AMED_AARCH32_CCLASS_UQADD16_a1, //!< <a href="../target/aarch32/UQADD16.html#a1">A1</a>
  AMED_AARCH32_CCLASS_UQADD16_t1, //!< <a href="../target/aarch32/UQADD16.html#t1">T1</a>
  AMED_AARCH32_CCLASS_UQADD8_a1, //!< <a href="../target/aarch32/UQADD8.html#a1">A1</a>
  AMED_AARCH32_CCLASS_UQADD8_t1, //!< <a href="../target/aarch32/UQADD8.html#t1">T1</a>
  AMED_AARCH32_CCLASS_UQASX_a1, //!< <a href="../target/aarch32/UQASX.html#a1">A1</a>
  AMED_AARCH32_CCLASS_UQASX_t1, //!< <a href="../target/aarch32/UQASX.html#t1">T1</a>
  AMED_AARCH32_CCLASS_UQSAX_a1, //!< <a href="../target/aarch32/UQSAX.html#a1">A1</a>
  AMED_AARCH32_CCLASS_UQSAX_t1, //!< <a href="../target/aarch32/UQSAX.html#t1">T1</a>
  AMED_AARCH32_CCLASS_UQSUB16_a1, //!< <a href="../target/aarch32/UQSUB16.html#a1">A1</a>
  AMED_AARCH32_CCLASS_UQSUB16_t1, //!< <a href="../target/aarch32/UQSUB16.html#t1">T1</a>
  AMED_AARCH32_CCLASS_UQSUB8_a1, //!< <a href="../target/aarch32/UQSUB8.html#a1">A1</a>
  AMED_AARCH32_CCLASS_UQSUB8_t1, //!< <a href="../target/aarch32/UQSUB8.html#t1">T1</a>
  AMED_AARCH32_CCLASS_USAD8_a1, //!< <a href="../target/aarch32/USAD8.html#a1">A1</a>
  AMED_AARCH32_CCLASS_USAD8_t1, //!< <a href="../target/aarch32/USAD8.html#t1">T1</a>
  AMED_AARCH32_CCLASS_USADA8_a1, //!< <a href="../target/aarch32/USADA8.html#a1">A1</a>
  AMED_AARCH32_CCLASS_USADA8_t1, //!< <a href="../target/aarch32/USADA8.html#t1">T1</a>
  AMED_AARCH32_CCLASS_USAT_a1, //!< <a href="../target/aarch32/USAT.html#a1">A1</a>
  AMED_AARCH32_CCLASS_USAT_t1, //!< <a href="../target/aarch32/USAT.html#t1">T1</a>
  AMED_AARCH32_CCLASS_USAT16_a1, //!< <a href="../target/aarch32/USAT16.html#a1">A1</a>
  AMED_AARCH32_CCLASS_USAT16_t1, //!< <a href="../target/aarch32/USAT16.html#t1">T1</a>
  AMED_AARCH32_CCLASS_USAX_a1, //!< <a href="../target/aarch32/USAX.html#a1">A1</a>
  AMED_AARCH32_CCLASS_USAX_t1, //!< <a href="../target/aarch32/USAX.html#t1">T1</a>
  AMED_AARCH32_CCLASS_USUB16_a1, //!< <a href="../target/aarch32/USUB16.html#a1">A1</a>
  AMED_AARCH32_CCLASS_USUB16_t1, //!< <a href="../target/aarch32/USUB16.html#t1">T1</a>
  AMED_AARCH32_CCLASS_USUB8_a1, //!< <a href="../target/aarch32/USUB8.html#a1">A1</a>
  AMED_AARCH32_CCLASS_USUB8_t1, //!< <a href="../target/aarch32/USUB8.html#t1">T1</a>
  AMED_AARCH32_CCLASS_UXTAB_a1, //!< <a href="../target/aarch32/UXTAB.html#a1">A1</a>
  AMED_AARCH32_CCLASS_UXTAB_t1, //!< <a href="../target/aarch32/UXTAB.html#t1">T1</a>
  AMED_AARCH32_CCLASS_UXTAB16_a1, //!< <a href="../target/aarch32/UXTAB16.html#a1">A1</a>
  AMED_AARCH32_CCLASS_UXTAB16_t1, //!< <a href="../target/aarch32/UXTAB16.html#t1">T1</a>
  AMED_AARCH32_CCLASS_UXTAH_a1, //!< <a href="../target/aarch32/UXTAH.html#a1">A1</a>
  AMED_AARCH32_CCLASS_UXTAH_t1, //!< <a href="../target/aarch32/UXTAH.html#t1">T1</a>
  AMED_AARCH32_CCLASS_UXTB_a1, //!< <a href="../target/aarch32/UXTB.html#a1">A1</a>
  AMED_AARCH32_CCLASS_UXTB_t1, //!< <a href="../target/aarch32/UXTB.html#t1">T1</a>
  AMED_AARCH32_CCLASS_UXTB_t2, //!< <a href="../target/aarch32/UXTB.html#t2">T2</a>
  AMED_AARCH32_CCLASS_UXTB16_a1, //!< <a href="../target/aarch32/UXTB16.html#a1">A1</a>
  AMED_AARCH32_CCLASS_UXTB16_t1, //!< <a href="../target/aarch32/UXTB16.html#t1">T1</a>
  AMED_AARCH32_CCLASS_UXTH_a1, //!< <a href="../target/aarch32/UXTH.html#a1">A1</a>
  AMED_AARCH32_CCLASS_UXTH_t1, //!< <a href="../target/aarch32/UXTH.html#t1">T1</a>
  AMED_AARCH32_CCLASS_UXTH_t2, //!< <a href="../target/aarch32/UXTH.html#t2">T2</a>
  AMED_AARCH32_CCLASS_WFE_a1, //!< <a href="../target/aarch32/WFE.html#a1">A1</a>
  AMED_AARCH32_CCLASS_WFE_t1, //!< <a href="../target/aarch32/WFE.html#t1">T1</a>
  AMED_AARCH32_CCLASS_WFE_t2, //!< <a href="../target/aarch32/WFE.html#t2">T2</a>
  AMED_AARCH32_CCLASS_WFI_a1, //!< <a href="../target/aarch32/WFI.html#a1">A1</a>
  AMED_AARCH32_CCLASS_WFI_t1, //!< <a href="../target/aarch32/WFI.html#t1">T1</a>
  AMED_AARCH32_CCLASS_WFI_t2, //!< <a href="../target/aarch32/WFI.html#t2">T2</a>
  AMED_AARCH32_CCLASS_YIELD_a1, //!< <a href="../target/aarch32/YIELD.html#a1">A1</a>
  AMED_AARCH32_CCLASS_YIELD_t1, //!< <a href="../target/aarch32/YIELD.html#t1">T1</a>
  AMED_AARCH32_CCLASS_YIELD_t2, //!< <a href="../target/aarch32/YIELD.html#t2">T2</a>
  AMED_AARCH32_CCLASS_ADD_ADR_a1, //!< <a href="../target/aarch32/ADD_ADR.html#a1">A1</a>
  AMED_AARCH32_CCLASS_ADD_ADR_t1, //!< <a href="../target/aarch32/ADD_ADR.html#t1">T1</a>
  AMED_AARCH32_CCLASS_ADD_ADR_t3, //!< <a href="../target/aarch32/ADD_ADR.html#t3">T3</a>
  AMED_AARCH32_CCLASS_ASR_MOV_r_a1, //!< <a href="../target/aarch32/ASR_MOV_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_ASR_MOV_r_t2, //!< <a href="../target/aarch32/ASR_MOV_r.html#t2">T2</a>
  AMED_AARCH32_CCLASS_ASR_MOV_r_t3, //!< <a href="../target/aarch32/ASR_MOV_r.html#t3">T3</a>
  AMED_AARCH32_CCLASS_ASR_MOV_rr_a1, //!< <a href="../target/aarch32/ASR_MOV_rr.html#a1">A1</a>
  AMED_AARCH32_CCLASS_ASR_MOV_rr_t1, //!< <a href="../target/aarch32/ASR_MOV_rr.html#t1">T1</a>
  AMED_AARCH32_CCLASS_ASR_MOV_rr_t2, //!< <a href="../target/aarch32/ASR_MOV_rr.html#t2">T2</a>
  AMED_AARCH32_CCLASS_ASRS_MOV_r_a1, //!< <a href="../target/aarch32/ASRS_MOV_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_ASRS_MOV_r_t2, //!< <a href="../target/aarch32/ASRS_MOV_r.html#t2">T2</a>
  AMED_AARCH32_CCLASS_ASRS_MOV_r_t3, //!< <a href="../target/aarch32/ASRS_MOV_r.html#t3">T3</a>
  AMED_AARCH32_CCLASS_ASRS_MOV_rr_a1, //!< <a href="../target/aarch32/ASRS_MOV_rr.html#a1">A1</a>
  AMED_AARCH32_CCLASS_ASRS_MOV_rr_t1, //!< <a href="../target/aarch32/ASRS_MOV_rr.html#t1">T1</a>
  AMED_AARCH32_CCLASS_ASRS_MOV_rr_t2, //!< <a href="../target/aarch32/ASRS_MOV_rr.html#t2">T2</a>
  AMED_AARCH32_CCLASS_LSL_MOV_r_a1, //!< <a href="../target/aarch32/LSL_MOV_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LSL_MOV_r_t2, //!< <a href="../target/aarch32/LSL_MOV_r.html#t2">T2</a>
  AMED_AARCH32_CCLASS_LSL_MOV_r_t3, //!< <a href="../target/aarch32/LSL_MOV_r.html#t3">T3</a>
  AMED_AARCH32_CCLASS_LSL_MOV_rr_a1, //!< <a href="../target/aarch32/LSL_MOV_rr.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LSL_MOV_rr_t1, //!< <a href="../target/aarch32/LSL_MOV_rr.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LSL_MOV_rr_t2, //!< <a href="../target/aarch32/LSL_MOV_rr.html#t2">T2</a>
  AMED_AARCH32_CCLASS_LSLS_MOV_r_a1, //!< <a href="../target/aarch32/LSLS_MOV_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LSLS_MOV_r_t2, //!< <a href="../target/aarch32/LSLS_MOV_r.html#t2">T2</a>
  AMED_AARCH32_CCLASS_LSLS_MOV_r_t3, //!< <a href="../target/aarch32/LSLS_MOV_r.html#t3">T3</a>
  AMED_AARCH32_CCLASS_LSLS_MOV_rr_a1, //!< <a href="../target/aarch32/LSLS_MOV_rr.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LSLS_MOV_rr_t1, //!< <a href="../target/aarch32/LSLS_MOV_rr.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LSLS_MOV_rr_t2, //!< <a href="../target/aarch32/LSLS_MOV_rr.html#t2">T2</a>
  AMED_AARCH32_CCLASS_LSR_MOV_r_a1, //!< <a href="../target/aarch32/LSR_MOV_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LSR_MOV_r_t2, //!< <a href="../target/aarch32/LSR_MOV_r.html#t2">T2</a>
  AMED_AARCH32_CCLASS_LSR_MOV_r_t3, //!< <a href="../target/aarch32/LSR_MOV_r.html#t3">T3</a>
  AMED_AARCH32_CCLASS_LSR_MOV_rr_a1, //!< <a href="../target/aarch32/LSR_MOV_rr.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LSR_MOV_rr_t1, //!< <a href="../target/aarch32/LSR_MOV_rr.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LSR_MOV_rr_t2, //!< <a href="../target/aarch32/LSR_MOV_rr.html#t2">T2</a>
  AMED_AARCH32_CCLASS_LSRS_MOV_r_a1, //!< <a href="../target/aarch32/LSRS_MOV_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LSRS_MOV_r_t2, //!< <a href="../target/aarch32/LSRS_MOV_r.html#t2">T2</a>
  AMED_AARCH32_CCLASS_LSRS_MOV_r_t3, //!< <a href="../target/aarch32/LSRS_MOV_r.html#t3">T3</a>
  AMED_AARCH32_CCLASS_LSRS_MOV_rr_a1, //!< <a href="../target/aarch32/LSRS_MOV_rr.html#a1">A1</a>
  AMED_AARCH32_CCLASS_LSRS_MOV_rr_t1, //!< <a href="../target/aarch32/LSRS_MOV_rr.html#t1">T1</a>
  AMED_AARCH32_CCLASS_LSRS_MOV_rr_t2, //!< <a href="../target/aarch32/LSRS_MOV_rr.html#t2">T2</a>
  AMED_AARCH32_CCLASS_POP_LDM_a1, //!< <a href="../target/aarch32/POP_LDM.html#a1">A1</a>
  AMED_AARCH32_CCLASS_POP_LDM_t2, //!< <a href="../target/aarch32/POP_LDM.html#t2">T2</a>
  AMED_AARCH32_CCLASS_POP_LDR_i_a1, //!< <a href="../target/aarch32/POP_LDR_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_POP_LDR_i_t4, //!< <a href="../target/aarch32/POP_LDR_i.html#t4">T4</a>
  AMED_AARCH32_CCLASS_PUSH_STMDB_a1, //!< <a href="../target/aarch32/PUSH_STMDB.html#a1">A1</a>
  AMED_AARCH32_CCLASS_PUSH_STMDB_t1, //!< <a href="../target/aarch32/PUSH_STMDB.html#t1">T1</a>
  AMED_AARCH32_CCLASS_PUSH_STR_i_a1, //!< <a href="../target/aarch32/PUSH_STR_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_PUSH_STR_i_t4, //!< <a href="../target/aarch32/PUSH_STR_i.html#t4">T4</a>
  AMED_AARCH32_CCLASS_ROR_MOV_r_a1, //!< <a href="../target/aarch32/ROR_MOV_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_ROR_MOV_r_t3, //!< <a href="../target/aarch32/ROR_MOV_r.html#t3">T3</a>
  AMED_AARCH32_CCLASS_ROR_MOV_rr_a1, //!< <a href="../target/aarch32/ROR_MOV_rr.html#a1">A1</a>
  AMED_AARCH32_CCLASS_ROR_MOV_rr_t1, //!< <a href="../target/aarch32/ROR_MOV_rr.html#t1">T1</a>
  AMED_AARCH32_CCLASS_ROR_MOV_rr_t2, //!< <a href="../target/aarch32/ROR_MOV_rr.html#t2">T2</a>
  AMED_AARCH32_CCLASS_RORS_MOV_r_a1, //!< <a href="../target/aarch32/RORS_MOV_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_RORS_MOV_r_t3, //!< <a href="../target/aarch32/RORS_MOV_r.html#t3">T3</a>
  AMED_AARCH32_CCLASS_RORS_MOV_rr_a1, //!< <a href="../target/aarch32/RORS_MOV_rr.html#a1">A1</a>
  AMED_AARCH32_CCLASS_RORS_MOV_rr_t1, //!< <a href="../target/aarch32/RORS_MOV_rr.html#t1">T1</a>
  AMED_AARCH32_CCLASS_RORS_MOV_rr_t2, //!< <a href="../target/aarch32/RORS_MOV_rr.html#t2">T2</a>
  AMED_AARCH32_CCLASS_RRX_MOV_r_a1, //!< <a href="../target/aarch32/RRX_MOV_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_RRX_MOV_r_t3, //!< <a href="../target/aarch32/RRX_MOV_r.html#t3">T3</a>
  AMED_AARCH32_CCLASS_RRXS_MOV_r_a1, //!< <a href="../target/aarch32/RRXS_MOV_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_RRXS_MOV_r_t3, //!< <a href="../target/aarch32/RRXS_MOV_r.html#t3">T3</a>
  AMED_AARCH32_CCLASS_SUB_ADR_a2, //!< <a href="../target/aarch32/SUB_ADR.html#a2">A2</a>
  AMED_AARCH32_CCLASS_SUB_ADR_t2, //!< <a href="../target/aarch32/SUB_ADR.html#t2">T2</a>
  AMED_AARCH32_CCLASS_AESD_a1, //!< <a href="../target/aarch32/AESD.html#a1">A1</a>
  AMED_AARCH32_CCLASS_AESD_t1, //!< <a href="../target/aarch32/AESD.html#t1">T1</a>
  AMED_AARCH32_CCLASS_AESE_a1, //!< <a href="../target/aarch32/AESE.html#a1">A1</a>
  AMED_AARCH32_CCLASS_AESE_t1, //!< <a href="../target/aarch32/AESE.html#t1">T1</a>
  AMED_AARCH32_CCLASS_AESIMC_a1, //!< <a href="../target/aarch32/AESIMC.html#a1">A1</a>
  AMED_AARCH32_CCLASS_AESIMC_t1, //!< <a href="../target/aarch32/AESIMC.html#t1">T1</a>
  AMED_AARCH32_CCLASS_AESMC_a1, //!< <a href="../target/aarch32/AESMC.html#a1">A1</a>
  AMED_AARCH32_CCLASS_AESMC_t1, //!< <a href="../target/aarch32/AESMC.html#t1">T1</a>
  AMED_AARCH32_CCLASS_FLDMX_a1, //!< <a href="../target/aarch32/FLDMX.html#a1">A1</a>
  AMED_AARCH32_CCLASS_FLDMX_t1, //!< <a href="../target/aarch32/FLDMX.html#t1">T1</a>
  AMED_AARCH32_CCLASS_FSTMX_a1, //!< <a href="../target/aarch32/FSTMX.html#a1">A1</a>
  AMED_AARCH32_CCLASS_FSTMX_t1, //!< <a href="../target/aarch32/FSTMX.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SHA1C_a1, //!< <a href="../target/aarch32/SHA1C.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SHA1C_t1, //!< <a href="../target/aarch32/SHA1C.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SHA1H_a1, //!< <a href="../target/aarch32/SHA1H.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SHA1H_t1, //!< <a href="../target/aarch32/SHA1H.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SHA1M_a1, //!< <a href="../target/aarch32/SHA1M.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SHA1M_t1, //!< <a href="../target/aarch32/SHA1M.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SHA1P_a1, //!< <a href="../target/aarch32/SHA1P.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SHA1P_t1, //!< <a href="../target/aarch32/SHA1P.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SHA1SU0_a1, //!< <a href="../target/aarch32/SHA1SU0.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SHA1SU0_t1, //!< <a href="../target/aarch32/SHA1SU0.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SHA1SU1_a1, //!< <a href="../target/aarch32/SHA1SU1.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SHA1SU1_t1, //!< <a href="../target/aarch32/SHA1SU1.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SHA256H_a1, //!< <a href="../target/aarch32/SHA256H.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SHA256H_t1, //!< <a href="../target/aarch32/SHA256H.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SHA256H2_a1, //!< <a href="../target/aarch32/SHA256H2.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SHA256H2_t1, //!< <a href="../target/aarch32/SHA256H2.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SHA256SU0_a1, //!< <a href="../target/aarch32/SHA256SU0.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SHA256SU0_t1, //!< <a href="../target/aarch32/SHA256SU0.html#t1">T1</a>
  AMED_AARCH32_CCLASS_SHA256SU1_a1, //!< <a href="../target/aarch32/SHA256SU1.html#a1">A1</a>
  AMED_AARCH32_CCLASS_SHA256SU1_t1, //!< <a href="../target/aarch32/SHA256SU1.html#t1">T1</a>
  AMED_AARCH32_CCLASS_ST4_1_a3, //!< <a href="../target/aarch32/ST4_1.html#a3">A3</a>
  AMED_AARCH32_CCLASS_VABA_a1, //!< <a href="../target/aarch32/VABA.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VABA_t1, //!< <a href="../target/aarch32/VABA.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VABAL_a1, //!< <a href="../target/aarch32/VABAL.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VABAL_t1, //!< <a href="../target/aarch32/VABAL.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VABD_f_a1, //!< <a href="../target/aarch32/VABD_f.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VABD_f_t1, //!< <a href="../target/aarch32/VABD_f.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VABD_i_a1, //!< <a href="../target/aarch32/VABD_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VABD_i_t1, //!< <a href="../target/aarch32/VABD_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VABDL_i_a1, //!< <a href="../target/aarch32/VABDL_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VABDL_i_t1, //!< <a href="../target/aarch32/VABDL_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VABS_a1, //!< <a href="../target/aarch32/VABS.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VABS_a2, //!< <a href="../target/aarch32/VABS.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VABS_t1, //!< <a href="../target/aarch32/VABS.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VABS_t2, //!< <a href="../target/aarch32/VABS.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VACGE_a1, //!< <a href="../target/aarch32/VACGE.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VACGE_t1, //!< <a href="../target/aarch32/VACGE.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VACGT_a1, //!< <a href="../target/aarch32/VACGT.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VACGT_t1, //!< <a href="../target/aarch32/VACGT.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VADD_f_a1, //!< <a href="../target/aarch32/VADD_f.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VADD_f_a2, //!< <a href="../target/aarch32/VADD_f.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VADD_f_t1, //!< <a href="../target/aarch32/VADD_f.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VADD_f_t2, //!< <a href="../target/aarch32/VADD_f.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VADD_i_a1, //!< <a href="../target/aarch32/VADD_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VADD_i_t1, //!< <a href="../target/aarch32/VADD_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VADDHN_a1, //!< <a href="../target/aarch32/VADDHN.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VADDHN_t1, //!< <a href="../target/aarch32/VADDHN.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VADDL_a1, //!< <a href="../target/aarch32/VADDL.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VADDL_t1, //!< <a href="../target/aarch32/VADDL.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VADDW_a1, //!< <a href="../target/aarch32/VADDW.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VADDW_t1, //!< <a href="../target/aarch32/VADDW.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VAND_r_a1, //!< <a href="../target/aarch32/VAND_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VAND_r_t1, //!< <a href="../target/aarch32/VAND_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VBIC_i_a1, //!< <a href="../target/aarch32/VBIC_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VBIC_i_a2, //!< <a href="../target/aarch32/VBIC_i.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VBIC_i_t1, //!< <a href="../target/aarch32/VBIC_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VBIC_i_t2, //!< <a href="../target/aarch32/VBIC_i.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VBIC_r_a1, //!< <a href="../target/aarch32/VBIC_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VBIC_r_t1, //!< <a href="../target/aarch32/VBIC_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VBIF_a1, //!< <a href="../target/aarch32/VBIF.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VBIF_t1, //!< <a href="../target/aarch32/VBIF.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VBIT_a1, //!< <a href="../target/aarch32/VBIT.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VBIT_t1, //!< <a href="../target/aarch32/VBIT.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VBSL_a1, //!< <a href="../target/aarch32/VBSL.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VBSL_t1, //!< <a href="../target/aarch32/VBSL.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCADD_a1, //!< <a href="../target/aarch32/VCADD.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCADD_t1, //!< <a href="../target/aarch32/VCADD.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCEQ_i_a1, //!< <a href="../target/aarch32/VCEQ_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCEQ_i_t1, //!< <a href="../target/aarch32/VCEQ_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCEQ_r_a1, //!< <a href="../target/aarch32/VCEQ_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCEQ_r_a2, //!< <a href="../target/aarch32/VCEQ_r.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VCEQ_r_t1, //!< <a href="../target/aarch32/VCEQ_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCEQ_r_t2, //!< <a href="../target/aarch32/VCEQ_r.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VCGE_i_a1, //!< <a href="../target/aarch32/VCGE_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCGE_i_t1, //!< <a href="../target/aarch32/VCGE_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCGE_r_a1, //!< <a href="../target/aarch32/VCGE_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCGE_r_a2, //!< <a href="../target/aarch32/VCGE_r.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VCGE_r_t1, //!< <a href="../target/aarch32/VCGE_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCGE_r_t2, //!< <a href="../target/aarch32/VCGE_r.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VCGT_i_a1, //!< <a href="../target/aarch32/VCGT_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCGT_i_t1, //!< <a href="../target/aarch32/VCGT_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCGT_r_a1, //!< <a href="../target/aarch32/VCGT_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCGT_r_a2, //!< <a href="../target/aarch32/VCGT_r.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VCGT_r_t1, //!< <a href="../target/aarch32/VCGT_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCGT_r_t2, //!< <a href="../target/aarch32/VCGT_r.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VCLE_i_a1, //!< <a href="../target/aarch32/VCLE_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCLE_i_t1, //!< <a href="../target/aarch32/VCLE_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCLS_a1, //!< <a href="../target/aarch32/VCLS.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCLS_t1, //!< <a href="../target/aarch32/VCLS.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCLT_i_a1, //!< <a href="../target/aarch32/VCLT_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCLT_i_t1, //!< <a href="../target/aarch32/VCLT_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCLZ_a1, //!< <a href="../target/aarch32/VCLZ.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCLZ_t1, //!< <a href="../target/aarch32/VCLZ.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCMLA_a1, //!< <a href="../target/aarch32/VCMLA.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCMLA_t1, //!< <a href="../target/aarch32/VCMLA.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCMLA_s_a1, //!< <a href="../target/aarch32/VCMLA_s.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCMLA_s_t1, //!< <a href="../target/aarch32/VCMLA_s.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCMP_a1, //!< <a href="../target/aarch32/VCMP.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCMP_a2, //!< <a href="../target/aarch32/VCMP.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VCMP_t1, //!< <a href="../target/aarch32/VCMP.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCMP_t2, //!< <a href="../target/aarch32/VCMP.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VCMPE_a1, //!< <a href="../target/aarch32/VCMPE.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCMPE_a2, //!< <a href="../target/aarch32/VCMPE.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VCMPE_t1, //!< <a href="../target/aarch32/VCMPE.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCMPE_t2, //!< <a href="../target/aarch32/VCMPE.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VCNT_a1, //!< <a href="../target/aarch32/VCNT.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCNT_t1, //!< <a href="../target/aarch32/VCNT.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCVT_bfs_a1, //!< <a href="../target/aarch32/VCVT_bfs.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCVT_bfs_t1, //!< <a href="../target/aarch32/VCVT_bfs.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCVT_ds_a1, //!< <a href="../target/aarch32/VCVT_ds.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCVT_ds_t1, //!< <a href="../target/aarch32/VCVT_ds.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCVT_hs_a1, //!< <a href="../target/aarch32/VCVT_hs.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCVT_hs_t1, //!< <a href="../target/aarch32/VCVT_hs.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCVT_is_a1, //!< <a href="../target/aarch32/VCVT_is.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCVT_is_t1, //!< <a href="../target/aarch32/VCVT_is.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCVT_iv_a1, //!< <a href="../target/aarch32/VCVT_iv.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCVT_iv_t1, //!< <a href="../target/aarch32/VCVT_iv.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCVT_vi_a1, //!< <a href="../target/aarch32/VCVT_vi.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCVT_vi_t1, //!< <a href="../target/aarch32/VCVT_vi.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCVT_xs_a1, //!< <a href="../target/aarch32/VCVT_xs.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCVT_xs_t1, //!< <a href="../target/aarch32/VCVT_xs.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCVT_xv_a1, //!< <a href="../target/aarch32/VCVT_xv.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCVT_xv_t1, //!< <a href="../target/aarch32/VCVT_xv.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCVTA_asimd_a1, //!< <a href="../target/aarch32/VCVTA_asimd.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCVTA_asimd_t1, //!< <a href="../target/aarch32/VCVTA_asimd.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCVTA_vfp_a1, //!< <a href="../target/aarch32/VCVTA_vfp.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCVTA_vfp_t1, //!< <a href="../target/aarch32/VCVTA_vfp.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCVTB_a1, //!< <a href="../target/aarch32/VCVTB.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCVTB_t1, //!< <a href="../target/aarch32/VCVTB.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCVTB_bfs_a1, //!< <a href="../target/aarch32/VCVTB_bfs.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCVTB_bfs_t1, //!< <a href="../target/aarch32/VCVTB_bfs.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCVTM_asimd_a1, //!< <a href="../target/aarch32/VCVTM_asimd.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCVTM_asimd_t1, //!< <a href="../target/aarch32/VCVTM_asimd.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCVTM_vfp_a1, //!< <a href="../target/aarch32/VCVTM_vfp.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCVTM_vfp_t1, //!< <a href="../target/aarch32/VCVTM_vfp.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCVTN_asimd_a1, //!< <a href="../target/aarch32/VCVTN_asimd.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCVTN_asimd_t1, //!< <a href="../target/aarch32/VCVTN_asimd.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCVTN_vfp_a1, //!< <a href="../target/aarch32/VCVTN_vfp.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCVTN_vfp_t1, //!< <a href="../target/aarch32/VCVTN_vfp.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCVTP_asimd_a1, //!< <a href="../target/aarch32/VCVTP_asimd.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCVTP_asimd_t1, //!< <a href="../target/aarch32/VCVTP_asimd.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCVTP_vfp_a1, //!< <a href="../target/aarch32/VCVTP_vfp.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCVTP_vfp_t1, //!< <a href="../target/aarch32/VCVTP_vfp.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCVTR_iv_a1, //!< <a href="../target/aarch32/VCVTR_iv.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCVTR_iv_t1, //!< <a href="../target/aarch32/VCVTR_iv.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCVTT_a1, //!< <a href="../target/aarch32/VCVTT.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCVTT_t1, //!< <a href="../target/aarch32/VCVTT.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCVTT_bfs_a1, //!< <a href="../target/aarch32/VCVTT_bfs.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCVTT_bfs_t1, //!< <a href="../target/aarch32/VCVTT_bfs.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VDIV_a1, //!< <a href="../target/aarch32/VDIV.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VDIV_t1, //!< <a href="../target/aarch32/VDIV.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VDOT_a1, //!< <a href="../target/aarch32/VDOT.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VDOT_t1, //!< <a href="../target/aarch32/VDOT.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VDOT_s_a1, //!< <a href="../target/aarch32/VDOT_s.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VDOT_s_t1, //!< <a href="../target/aarch32/VDOT_s.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VDUP_r_a1, //!< <a href="../target/aarch32/VDUP_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VDUP_r_t1, //!< <a href="../target/aarch32/VDUP_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VDUP_s_a1, //!< <a href="../target/aarch32/VDUP_s.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VDUP_s_t1, //!< <a href="../target/aarch32/VDUP_s.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VEOR_a1, //!< <a href="../target/aarch32/VEOR.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VEOR_t1, //!< <a href="../target/aarch32/VEOR.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VEXT_a1, //!< <a href="../target/aarch32/VEXT.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VEXT_t1, //!< <a href="../target/aarch32/VEXT.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VFMA_a1, //!< <a href="../target/aarch32/VFMA.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VFMA_a2, //!< <a href="../target/aarch32/VFMA.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VFMA_t1, //!< <a href="../target/aarch32/VFMA.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VFMA_t2, //!< <a href="../target/aarch32/VFMA.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VFMA_bf_a1, //!< <a href="../target/aarch32/VFMA_bf.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VFMA_bf_t1, //!< <a href="../target/aarch32/VFMA_bf.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VFMA_bfs_a1, //!< <a href="../target/aarch32/VFMA_bfs.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VFMA_bfs_t1, //!< <a href="../target/aarch32/VFMA_bfs.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VFMAL_a1, //!< <a href="../target/aarch32/VFMAL.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VFMAL_t1, //!< <a href="../target/aarch32/VFMAL.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VFMAL_s_a1, //!< <a href="../target/aarch32/VFMAL_s.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VFMAL_s_t1, //!< <a href="../target/aarch32/VFMAL_s.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VFMS_a1, //!< <a href="../target/aarch32/VFMS.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VFMS_a2, //!< <a href="../target/aarch32/VFMS.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VFMS_t1, //!< <a href="../target/aarch32/VFMS.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VFMS_t2, //!< <a href="../target/aarch32/VFMS.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VFMSL_a1, //!< <a href="../target/aarch32/VFMSL.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VFMSL_t1, //!< <a href="../target/aarch32/VFMSL.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VFMSL_s_a1, //!< <a href="../target/aarch32/VFMSL_s.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VFMSL_s_t1, //!< <a href="../target/aarch32/VFMSL_s.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VFNMA_a1, //!< <a href="../target/aarch32/VFNMA.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VFNMA_t1, //!< <a href="../target/aarch32/VFNMA.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VFNMS_a1, //!< <a href="../target/aarch32/VFNMS.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VFNMS_t1, //!< <a href="../target/aarch32/VFNMS.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VHADD_a1, //!< <a href="../target/aarch32/VHADD.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VHADD_t1, //!< <a href="../target/aarch32/VHADD.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VHSUB_a1, //!< <a href="../target/aarch32/VHSUB.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VHSUB_t1, //!< <a href="../target/aarch32/VHSUB.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VINS_a1, //!< <a href="../target/aarch32/VINS.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VINS_t1, //!< <a href="../target/aarch32/VINS.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VJCVT_a1, //!< <a href="../target/aarch32/VJCVT.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VJCVT_t1, //!< <a href="../target/aarch32/VJCVT.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VLD1_1_a1, //!< <a href="../target/aarch32/VLD1_1.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VLD1_1_a2, //!< <a href="../target/aarch32/VLD1_1.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VLD1_1_a3, //!< <a href="../target/aarch32/VLD1_1.html#a3">A3</a>
  AMED_AARCH32_CCLASS_VLD1_1_t1, //!< <a href="../target/aarch32/VLD1_1.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VLD1_1_t2, //!< <a href="../target/aarch32/VLD1_1.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VLD1_1_t3, //!< <a href="../target/aarch32/VLD1_1.html#t3">T3</a>
  AMED_AARCH32_CCLASS_VLD1_a_a1, //!< <a href="../target/aarch32/VLD1_a.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VLD1_a_t1, //!< <a href="../target/aarch32/VLD1_a.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VLD1_m_a1, //!< <a href="../target/aarch32/VLD1_m.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VLD1_m_a2, //!< <a href="../target/aarch32/VLD1_m.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VLD1_m_a3, //!< <a href="../target/aarch32/VLD1_m.html#a3">A3</a>
  AMED_AARCH32_CCLASS_VLD1_m_a4, //!< <a href="../target/aarch32/VLD1_m.html#a4">A4</a>
  AMED_AARCH32_CCLASS_VLD1_m_t1, //!< <a href="../target/aarch32/VLD1_m.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VLD1_m_t2, //!< <a href="../target/aarch32/VLD1_m.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VLD1_m_t3, //!< <a href="../target/aarch32/VLD1_m.html#t3">T3</a>
  AMED_AARCH32_CCLASS_VLD1_m_t4, //!< <a href="../target/aarch32/VLD1_m.html#t4">T4</a>
  AMED_AARCH32_CCLASS_VLD2_1_a1, //!< <a href="../target/aarch32/VLD2_1.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VLD2_1_a2, //!< <a href="../target/aarch32/VLD2_1.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VLD2_1_a3, //!< <a href="../target/aarch32/VLD2_1.html#a3">A3</a>
  AMED_AARCH32_CCLASS_VLD2_1_t1, //!< <a href="../target/aarch32/VLD2_1.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VLD2_1_t2, //!< <a href="../target/aarch32/VLD2_1.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VLD2_1_t3, //!< <a href="../target/aarch32/VLD2_1.html#t3">T3</a>
  AMED_AARCH32_CCLASS_VLD2_a_a1, //!< <a href="../target/aarch32/VLD2_a.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VLD2_a_t1, //!< <a href="../target/aarch32/VLD2_a.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VLD2_m_a1, //!< <a href="../target/aarch32/VLD2_m.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VLD2_m_a2, //!< <a href="../target/aarch32/VLD2_m.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VLD2_m_t1, //!< <a href="../target/aarch32/VLD2_m.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VLD2_m_t2, //!< <a href="../target/aarch32/VLD2_m.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VLD3_1_a1, //!< <a href="../target/aarch32/VLD3_1.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VLD3_1_a2, //!< <a href="../target/aarch32/VLD3_1.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VLD3_1_a3, //!< <a href="../target/aarch32/VLD3_1.html#a3">A3</a>
  AMED_AARCH32_CCLASS_VLD3_1_t1, //!< <a href="../target/aarch32/VLD3_1.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VLD3_1_t2, //!< <a href="../target/aarch32/VLD3_1.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VLD3_1_t3, //!< <a href="../target/aarch32/VLD3_1.html#t3">T3</a>
  AMED_AARCH32_CCLASS_VLD3_a_a1, //!< <a href="../target/aarch32/VLD3_a.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VLD3_a_t1, //!< <a href="../target/aarch32/VLD3_a.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VLD3_m_a1, //!< <a href="../target/aarch32/VLD3_m.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VLD3_m_t1, //!< <a href="../target/aarch32/VLD3_m.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VLD4_1_a1, //!< <a href="../target/aarch32/VLD4_1.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VLD4_1_a2, //!< <a href="../target/aarch32/VLD4_1.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VLD4_1_a3, //!< <a href="../target/aarch32/VLD4_1.html#a3">A3</a>
  AMED_AARCH32_CCLASS_VLD4_1_t1, //!< <a href="../target/aarch32/VLD4_1.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VLD4_1_t2, //!< <a href="../target/aarch32/VLD4_1.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VLD4_1_t3, //!< <a href="../target/aarch32/VLD4_1.html#t3">T3</a>
  AMED_AARCH32_CCLASS_VLD4_a_a1, //!< <a href="../target/aarch32/VLD4_a.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VLD4_a_t1, //!< <a href="../target/aarch32/VLD4_a.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VLD4_m_a1, //!< <a href="../target/aarch32/VLD4_m.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VLD4_m_t1, //!< <a href="../target/aarch32/VLD4_m.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VLDM_a1, //!< <a href="../target/aarch32/VLDM.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VLDM_a2, //!< <a href="../target/aarch32/VLDM.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VLDM_t1, //!< <a href="../target/aarch32/VLDM.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VLDM_t2, //!< <a href="../target/aarch32/VLDM.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VLDR_i_a1, //!< <a href="../target/aarch32/VLDR_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VLDR_i_t1, //!< <a href="../target/aarch32/VLDR_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VLDR_l_a1, //!< <a href="../target/aarch32/VLDR_l.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VLDR_l_t1, //!< <a href="../target/aarch32/VLDR_l.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VMAX_f_a1, //!< <a href="../target/aarch32/VMAX_f.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VMAX_f_t1, //!< <a href="../target/aarch32/VMAX_f.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VMAX_i_a1, //!< <a href="../target/aarch32/VMAX_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VMAX_i_t1, //!< <a href="../target/aarch32/VMAX_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VMAXNM_a1, //!< <a href="../target/aarch32/VMAXNM.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VMAXNM_a2, //!< <a href="../target/aarch32/VMAXNM.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VMAXNM_t1, //!< <a href="../target/aarch32/VMAXNM.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VMAXNM_t2, //!< <a href="../target/aarch32/VMAXNM.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VMIN_f_a1, //!< <a href="../target/aarch32/VMIN_f.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VMIN_f_t1, //!< <a href="../target/aarch32/VMIN_f.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VMIN_i_a1, //!< <a href="../target/aarch32/VMIN_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VMIN_i_t1, //!< <a href="../target/aarch32/VMIN_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VMINNM_a1, //!< <a href="../target/aarch32/VMINNM.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VMINNM_a2, //!< <a href="../target/aarch32/VMINNM.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VMINNM_t1, //!< <a href="../target/aarch32/VMINNM.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VMINNM_t2, //!< <a href="../target/aarch32/VMINNM.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VMLA_f_a1, //!< <a href="../target/aarch32/VMLA_f.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VMLA_f_a2, //!< <a href="../target/aarch32/VMLA_f.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VMLA_f_t1, //!< <a href="../target/aarch32/VMLA_f.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VMLA_f_t2, //!< <a href="../target/aarch32/VMLA_f.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VMLA_i_a1, //!< <a href="../target/aarch32/VMLA_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VMLA_i_t1, //!< <a href="../target/aarch32/VMLA_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VMLA_s_a1, //!< <a href="../target/aarch32/VMLA_s.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VMLA_s_t1, //!< <a href="../target/aarch32/VMLA_s.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VMLAL_i_a1, //!< <a href="../target/aarch32/VMLAL_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VMLAL_i_t1, //!< <a href="../target/aarch32/VMLAL_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VMLAL_s_a1, //!< <a href="../target/aarch32/VMLAL_s.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VMLAL_s_t1, //!< <a href="../target/aarch32/VMLAL_s.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VMLS_f_a1, //!< <a href="../target/aarch32/VMLS_f.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VMLS_f_a2, //!< <a href="../target/aarch32/VMLS_f.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VMLS_f_t1, //!< <a href="../target/aarch32/VMLS_f.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VMLS_f_t2, //!< <a href="../target/aarch32/VMLS_f.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VMLS_i_a1, //!< <a href="../target/aarch32/VMLS_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VMLS_i_t1, //!< <a href="../target/aarch32/VMLS_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VMLS_s_a1, //!< <a href="../target/aarch32/VMLS_s.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VMLS_s_t1, //!< <a href="../target/aarch32/VMLS_s.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VMLSL_i_a1, //!< <a href="../target/aarch32/VMLSL_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VMLSL_i_t1, //!< <a href="../target/aarch32/VMLSL_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VMLSL_s_a1, //!< <a href="../target/aarch32/VMLSL_s.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VMLSL_s_t1, //!< <a href="../target/aarch32/VMLSL_s.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VMMLA_a1, //!< <a href="../target/aarch32/VMMLA.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VMMLA_t1, //!< <a href="../target/aarch32/VMMLA.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VMOV_d_a1, //!< <a href="../target/aarch32/VMOV_d.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VMOV_d_t1, //!< <a href="../target/aarch32/VMOV_d.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VMOV_h_a1, //!< <a href="../target/aarch32/VMOV_h.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VMOV_h_t1, //!< <a href="../target/aarch32/VMOV_h.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VMOV_i_a1, //!< <a href="../target/aarch32/VMOV_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VMOV_i_a2, //!< <a href="../target/aarch32/VMOV_i.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VMOV_i_a3, //!< <a href="../target/aarch32/VMOV_i.html#a3">A3</a>
  AMED_AARCH32_CCLASS_VMOV_i_a4, //!< <a href="../target/aarch32/VMOV_i.html#a4">A4</a>
  AMED_AARCH32_CCLASS_a5, //!< <a href="../target/aarch32/VMOV_i.html#a5">A5</a>
  AMED_AARCH32_CCLASS_VMOV_i_t1, //!< <a href="../target/aarch32/VMOV_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VMOV_i_t2, //!< <a href="../target/aarch32/VMOV_i.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VMOV_i_t3, //!< <a href="../target/aarch32/VMOV_i.html#t3">T3</a>
  AMED_AARCH32_CCLASS_VMOV_i_t4, //!< <a href="../target/aarch32/VMOV_i.html#t4">T4</a>
  AMED_AARCH32_CCLASS_VMOV_i_t5, //!< <a href="../target/aarch32/VMOV_i.html#t5">T5</a>
  AMED_AARCH32_CCLASS_VMOV_r_a2, //!< <a href="../target/aarch32/VMOV_r.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VMOV_r_t2, //!< <a href="../target/aarch32/VMOV_r.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VMOV_rs_a1, //!< <a href="../target/aarch32/VMOV_rs.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VMOV_rs_t1, //!< <a href="../target/aarch32/VMOV_rs.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VMOV_s_a1, //!< <a href="../target/aarch32/VMOV_s.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VMOV_s_t1, //!< <a href="../target/aarch32/VMOV_s.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VMOV_sr_a1, //!< <a href="../target/aarch32/VMOV_sr.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VMOV_sr_t1, //!< <a href="../target/aarch32/VMOV_sr.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VMOV_ss_a1, //!< <a href="../target/aarch32/VMOV_ss.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VMOV_ss_t1, //!< <a href="../target/aarch32/VMOV_ss.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VMOVL_a1, //!< <a href="../target/aarch32/VMOVL.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VMOVL_t1, //!< <a href="../target/aarch32/VMOVL.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VMOVN_a1, //!< <a href="../target/aarch32/VMOVN.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VMOVN_t1, //!< <a href="../target/aarch32/VMOVN.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VMOVX_a1, //!< <a href="../target/aarch32/VMOVX.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VMOVX_t1, //!< <a href="../target/aarch32/VMOVX.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VMRS_a1, //!< <a href="../target/aarch32/VMRS.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VMRS_t1, //!< <a href="../target/aarch32/VMRS.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VMSR_a1, //!< <a href="../target/aarch32/VMSR.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VMSR_t1, //!< <a href="../target/aarch32/VMSR.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VMUL_f_a1, //!< <a href="../target/aarch32/VMUL_f.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VMUL_f_a2, //!< <a href="../target/aarch32/VMUL_f.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VMUL_f_t1, //!< <a href="../target/aarch32/VMUL_f.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VMUL_f_t2, //!< <a href="../target/aarch32/VMUL_f.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VMUL_i_a1, //!< <a href="../target/aarch32/VMUL_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VMUL_i_t1, //!< <a href="../target/aarch32/VMUL_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VMUL_s_a1, //!< <a href="../target/aarch32/VMUL_s.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VMUL_s_t1, //!< <a href="../target/aarch32/VMUL_s.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VMULL_i_a1, //!< <a href="../target/aarch32/VMULL_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VMULL_i_t1, //!< <a href="../target/aarch32/VMULL_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VMULL_s_a1, //!< <a href="../target/aarch32/VMULL_s.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VMULL_s_t1, //!< <a href="../target/aarch32/VMULL_s.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VMVN_i_a1, //!< <a href="../target/aarch32/VMVN_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VMVN_i_a2, //!< <a href="../target/aarch32/VMVN_i.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VMVN_i_a3, //!< <a href="../target/aarch32/VMVN_i.html#a3">A3</a>
  AMED_AARCH32_CCLASS_VMVN_i_t1, //!< <a href="../target/aarch32/VMVN_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VMVN_i_t2, //!< <a href="../target/aarch32/VMVN_i.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VMVN_i_t3, //!< <a href="../target/aarch32/VMVN_i.html#t3">T3</a>
  AMED_AARCH32_CCLASS_VMVN_r_a1, //!< <a href="../target/aarch32/VMVN_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VMVN_r_t1, //!< <a href="../target/aarch32/VMVN_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VNEG_a1, //!< <a href="../target/aarch32/VNEG.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VNEG_a2, //!< <a href="../target/aarch32/VNEG.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VNEG_t1, //!< <a href="../target/aarch32/VNEG.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VNEG_t2, //!< <a href="../target/aarch32/VNEG.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VNMLA_a1, //!< <a href="../target/aarch32/VNMLA.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VNMLA_t1, //!< <a href="../target/aarch32/VNMLA.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VNMLS_a1, //!< <a href="../target/aarch32/VNMLS.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VNMLS_t1, //!< <a href="../target/aarch32/VNMLS.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VNMUL_a1, //!< <a href="../target/aarch32/VNMUL.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VNMUL_t1, //!< <a href="../target/aarch32/VNMUL.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VORN_r_a1, //!< <a href="../target/aarch32/VORN_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VORN_r_t1, //!< <a href="../target/aarch32/VORN_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VORR_i_a1, //!< <a href="../target/aarch32/VORR_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VORR_i_a2, //!< <a href="../target/aarch32/VORR_i.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VORR_i_t1, //!< <a href="../target/aarch32/VORR_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VORR_i_t2, //!< <a href="../target/aarch32/VORR_i.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VORR_r_a1, //!< <a href="../target/aarch32/VORR_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VORR_r_t1, //!< <a href="../target/aarch32/VORR_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VPADAL_a1, //!< <a href="../target/aarch32/VPADAL.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VPADAL_t1, //!< <a href="../target/aarch32/VPADAL.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VPADD_f_a1, //!< <a href="../target/aarch32/VPADD_f.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VPADD_f_t1, //!< <a href="../target/aarch32/VPADD_f.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VPADD_i_a1, //!< <a href="../target/aarch32/VPADD_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VPADD_i_t1, //!< <a href="../target/aarch32/VPADD_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VPADDL_a1, //!< <a href="../target/aarch32/VPADDL.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VPADDL_t1, //!< <a href="../target/aarch32/VPADDL.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VPMAX_f_a1, //!< <a href="../target/aarch32/VPMAX_f.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VPMAX_f_t1, //!< <a href="../target/aarch32/VPMAX_f.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VPMAX_i_a1, //!< <a href="../target/aarch32/VPMAX_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VPMAX_i_t1, //!< <a href="../target/aarch32/VPMAX_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VPMIN_f_a1, //!< <a href="../target/aarch32/VPMIN_f.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VPMIN_f_t1, //!< <a href="../target/aarch32/VPMIN_f.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VPMIN_i_a1, //!< <a href="../target/aarch32/VPMIN_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VPMIN_i_t1, //!< <a href="../target/aarch32/VPMIN_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VQABS_a1, //!< <a href="../target/aarch32/VQABS.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VQABS_t1, //!< <a href="../target/aarch32/VQABS.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VQADD_a1, //!< <a href="../target/aarch32/VQADD.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VQADD_t1, //!< <a href="../target/aarch32/VQADD.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VQDMLAL_a1, //!< <a href="../target/aarch32/VQDMLAL.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VQDMLAL_a2, //!< <a href="../target/aarch32/VQDMLAL.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VQDMLAL_t1, //!< <a href="../target/aarch32/VQDMLAL.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VQDMLAL_t2, //!< <a href="../target/aarch32/VQDMLAL.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VQDMLSL_a1, //!< <a href="../target/aarch32/VQDMLSL.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VQDMLSL_a2, //!< <a href="../target/aarch32/VQDMLSL.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VQDMLSL_t1, //!< <a href="../target/aarch32/VQDMLSL.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VQDMLSL_t2, //!< <a href="../target/aarch32/VQDMLSL.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VQDMULH_a1, //!< <a href="../target/aarch32/VQDMULH.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VQDMULH_a2, //!< <a href="../target/aarch32/VQDMULH.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VQDMULH_t1, //!< <a href="../target/aarch32/VQDMULH.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VQDMULH_t2, //!< <a href="../target/aarch32/VQDMULH.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VQDMULL_a1, //!< <a href="../target/aarch32/VQDMULL.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VQDMULL_a2, //!< <a href="../target/aarch32/VQDMULL.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VQDMULL_t1, //!< <a href="../target/aarch32/VQDMULL.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VQDMULL_t2, //!< <a href="../target/aarch32/VQDMULL.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VQMOVN_a1, //!< <a href="../target/aarch32/VQMOVN.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VQMOVN_t1, //!< <a href="../target/aarch32/VQMOVN.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VQNEG_a1, //!< <a href="../target/aarch32/VQNEG.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VQNEG_t1, //!< <a href="../target/aarch32/VQNEG.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VQRDMLAH_a1, //!< <a href="../target/aarch32/VQRDMLAH.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VQRDMLAH_a2, //!< <a href="../target/aarch32/VQRDMLAH.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VQRDMLAH_t1, //!< <a href="../target/aarch32/VQRDMLAH.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VQRDMLAH_t2, //!< <a href="../target/aarch32/VQRDMLAH.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VQRDMLSH_a1, //!< <a href="../target/aarch32/VQRDMLSH.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VQRDMLSH_a2, //!< <a href="../target/aarch32/VQRDMLSH.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VQRDMLSH_t1, //!< <a href="../target/aarch32/VQRDMLSH.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VQRDMLSH_t2, //!< <a href="../target/aarch32/VQRDMLSH.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VQRDMULH_a1, //!< <a href="../target/aarch32/VQRDMULH.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VQRDMULH_a2, //!< <a href="../target/aarch32/VQRDMULH.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VQRDMULH_t1, //!< <a href="../target/aarch32/VQRDMULH.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VQRDMULH_t2, //!< <a href="../target/aarch32/VQRDMULH.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VQRSHL_a1, //!< <a href="../target/aarch32/VQRSHL.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VQRSHL_t1, //!< <a href="../target/aarch32/VQRSHL.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VQRSHRN_a1, //!< <a href="../target/aarch32/VQRSHRN.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VQRSHRN_t1, //!< <a href="../target/aarch32/VQRSHRN.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VQSHL_i_a1, //!< <a href="../target/aarch32/VQSHL_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VQSHL_i_t1, //!< <a href="../target/aarch32/VQSHL_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VQSHL_r_a1, //!< <a href="../target/aarch32/VQSHL_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VQSHL_r_t1, //!< <a href="../target/aarch32/VQSHL_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VQSHRN_a1, //!< <a href="../target/aarch32/VQSHRN.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VQSHRN_t1, //!< <a href="../target/aarch32/VQSHRN.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VQSUB_a1, //!< <a href="../target/aarch32/VQSUB.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VQSUB_t1, //!< <a href="../target/aarch32/VQSUB.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VRADDHN_a1, //!< <a href="../target/aarch32/VRADDHN.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VRADDHN_t1, //!< <a href="../target/aarch32/VRADDHN.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VRECPE_a1, //!< <a href="../target/aarch32/VRECPE.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VRECPE_t1, //!< <a href="../target/aarch32/VRECPE.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VRECPS_a1, //!< <a href="../target/aarch32/VRECPS.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VRECPS_t1, //!< <a href="../target/aarch32/VRECPS.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VREV16_a1, //!< <a href="../target/aarch32/VREV16.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VREV16_t1, //!< <a href="../target/aarch32/VREV16.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VREV32_a1, //!< <a href="../target/aarch32/VREV32.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VREV32_t1, //!< <a href="../target/aarch32/VREV32.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VREV64_a1, //!< <a href="../target/aarch32/VREV64.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VREV64_t1, //!< <a href="../target/aarch32/VREV64.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VRHADD_a1, //!< <a href="../target/aarch32/VRHADD.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VRHADD_t1, //!< <a href="../target/aarch32/VRHADD.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VRINTA_asimd_a1, //!< <a href="../target/aarch32/VRINTA_asimd.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VRINTA_asimd_t1, //!< <a href="../target/aarch32/VRINTA_asimd.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VRINTA_vfp_a1, //!< <a href="../target/aarch32/VRINTA_vfp.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VRINTA_vfp_t1, //!< <a href="../target/aarch32/VRINTA_vfp.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VRINTM_asimd_a1, //!< <a href="../target/aarch32/VRINTM_asimd.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VRINTM_asimd_t1, //!< <a href="../target/aarch32/VRINTM_asimd.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VRINTM_vfp_a1, //!< <a href="../target/aarch32/VRINTM_vfp.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VRINTM_vfp_t1, //!< <a href="../target/aarch32/VRINTM_vfp.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VRINTN_asimd_a1, //!< <a href="../target/aarch32/VRINTN_asimd.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VRINTN_asimd_t1, //!< <a href="../target/aarch32/VRINTN_asimd.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VRINTN_vfp_a1, //!< <a href="../target/aarch32/VRINTN_vfp.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VRINTN_vfp_t1, //!< <a href="../target/aarch32/VRINTN_vfp.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VRINTP_asimd_a1, //!< <a href="../target/aarch32/VRINTP_asimd.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VRINTP_asimd_t1, //!< <a href="../target/aarch32/VRINTP_asimd.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VRINTP_vfp_a1, //!< <a href="../target/aarch32/VRINTP_vfp.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VRINTP_vfp_t1, //!< <a href="../target/aarch32/VRINTP_vfp.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VRINTR_vfp_a1, //!< <a href="../target/aarch32/VRINTR_vfp.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VRINTR_vfp_t1, //!< <a href="../target/aarch32/VRINTR_vfp.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VRINTX_asimd_a1, //!< <a href="../target/aarch32/VRINTX_asimd.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VRINTX_asimd_t1, //!< <a href="../target/aarch32/VRINTX_asimd.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VRINTX_vfp_a1, //!< <a href="../target/aarch32/VRINTX_vfp.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VRINTX_vfp_t1, //!< <a href="../target/aarch32/VRINTX_vfp.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VRINTZ_asimd_a1, //!< <a href="../target/aarch32/VRINTZ_asimd.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VRINTZ_asimd_t1, //!< <a href="../target/aarch32/VRINTZ_asimd.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VRINTZ_vfp_a1, //!< <a href="../target/aarch32/VRINTZ_vfp.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VRINTZ_vfp_t1, //!< <a href="../target/aarch32/VRINTZ_vfp.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VRSHL_a1, //!< <a href="../target/aarch32/VRSHL.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VRSHL_t1, //!< <a href="../target/aarch32/VRSHL.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VRSHR_a1, //!< <a href="../target/aarch32/VRSHR.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VRSHR_t1, //!< <a href="../target/aarch32/VRSHR.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VRSHRN_a1, //!< <a href="../target/aarch32/VRSHRN.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VRSHRN_t1, //!< <a href="../target/aarch32/VRSHRN.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VRSQRTE_a1, //!< <a href="../target/aarch32/VRSQRTE.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VRSQRTE_t1, //!< <a href="../target/aarch32/VRSQRTE.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VRSQRTS_a1, //!< <a href="../target/aarch32/VRSQRTS.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VRSQRTS_t1, //!< <a href="../target/aarch32/VRSQRTS.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VRSRA_a1, //!< <a href="../target/aarch32/VRSRA.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VRSRA_t1, //!< <a href="../target/aarch32/VRSRA.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VRSUBHN_a1, //!< <a href="../target/aarch32/VRSUBHN.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VRSUBHN_t1, //!< <a href="../target/aarch32/VRSUBHN.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VSDOT_a1, //!< <a href="../target/aarch32/VSDOT.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VSDOT_t1, //!< <a href="../target/aarch32/VSDOT.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VSDOT_s_a1, //!< <a href="../target/aarch32/VSDOT_s.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VSDOT_s_t1, //!< <a href="../target/aarch32/VSDOT_s.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VSEL_a1, //!< <a href="../target/aarch32/VSEL.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VSEL_t1, //!< <a href="../target/aarch32/VSEL.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VSHL_i_a1, //!< <a href="../target/aarch32/VSHL_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VSHL_i_t1, //!< <a href="../target/aarch32/VSHL_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VSHL_r_a1, //!< <a href="../target/aarch32/VSHL_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VSHL_r_t1, //!< <a href="../target/aarch32/VSHL_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VSHLL_a1, //!< <a href="../target/aarch32/VSHLL.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VSHLL_a2, //!< <a href="../target/aarch32/VSHLL.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VSHLL_t1, //!< <a href="../target/aarch32/VSHLL.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VSHLL_t2, //!< <a href="../target/aarch32/VSHLL.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VSHR_a1, //!< <a href="../target/aarch32/VSHR.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VSHR_t1, //!< <a href="../target/aarch32/VSHR.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VSHRN_a1, //!< <a href="../target/aarch32/VSHRN.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VSHRN_t1, //!< <a href="../target/aarch32/VSHRN.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VSLI_a1, //!< <a href="../target/aarch32/VSLI.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VSLI_t1, //!< <a href="../target/aarch32/VSLI.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VSMMLA_a1, //!< <a href="../target/aarch32/VSMMLA.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VSMMLA_t1, //!< <a href="../target/aarch32/VSMMLA.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VSQRT_a1, //!< <a href="../target/aarch32/VSQRT.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VSQRT_t1, //!< <a href="../target/aarch32/VSQRT.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VSRA_a1, //!< <a href="../target/aarch32/VSRA.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VSRA_t1, //!< <a href="../target/aarch32/VSRA.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VSRI_a1, //!< <a href="../target/aarch32/VSRI.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VSRI_t1, //!< <a href="../target/aarch32/VSRI.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VST1_1_a1, //!< <a href="../target/aarch32/VST1_1.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VST1_1_a2, //!< <a href="../target/aarch32/VST1_1.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VST1_1_a3, //!< <a href="../target/aarch32/VST1_1.html#a3">A3</a>
  AMED_AARCH32_CCLASS_VST1_1_t1, //!< <a href="../target/aarch32/VST1_1.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VST1_1_t2, //!< <a href="../target/aarch32/VST1_1.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VST1_1_t3, //!< <a href="../target/aarch32/VST1_1.html#t3">T3</a>
  AMED_AARCH32_CCLASS_VST1_m_a1, //!< <a href="../target/aarch32/VST1_m.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VST1_m_a2, //!< <a href="../target/aarch32/VST1_m.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VST1_m_a3, //!< <a href="../target/aarch32/VST1_m.html#a3">A3</a>
  AMED_AARCH32_CCLASS_VST1_m_a4, //!< <a href="../target/aarch32/VST1_m.html#a4">A4</a>
  AMED_AARCH32_CCLASS_VST1_m_t1, //!< <a href="../target/aarch32/VST1_m.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VST1_m_t2, //!< <a href="../target/aarch32/VST1_m.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VST1_m_t3, //!< <a href="../target/aarch32/VST1_m.html#t3">T3</a>
  AMED_AARCH32_CCLASS_VST1_m_t4, //!< <a href="../target/aarch32/VST1_m.html#t4">T4</a>
  AMED_AARCH32_CCLASS_VST2_1_a1, //!< <a href="../target/aarch32/VST2_1.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VST2_1_a2, //!< <a href="../target/aarch32/VST2_1.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VST2_1_a3, //!< <a href="../target/aarch32/VST2_1.html#a3">A3</a>
  AMED_AARCH32_CCLASS_VST2_1_t1, //!< <a href="../target/aarch32/VST2_1.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VST2_1_t2, //!< <a href="../target/aarch32/VST2_1.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VST2_1_t3, //!< <a href="../target/aarch32/VST2_1.html#t3">T3</a>
  AMED_AARCH32_CCLASS_VST2_m_a1, //!< <a href="../target/aarch32/VST2_m.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VST2_m_a2, //!< <a href="../target/aarch32/VST2_m.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VST2_m_t1, //!< <a href="../target/aarch32/VST2_m.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VST2_m_t2, //!< <a href="../target/aarch32/VST2_m.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VST3_1_a1, //!< <a href="../target/aarch32/VST3_1.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VST3_1_a2, //!< <a href="../target/aarch32/VST3_1.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VST3_1_a3, //!< <a href="../target/aarch32/VST3_1.html#a3">A3</a>
  AMED_AARCH32_CCLASS_VST3_1_t1, //!< <a href="../target/aarch32/VST3_1.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VST3_1_t2, //!< <a href="../target/aarch32/VST3_1.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VST3_1_t3, //!< <a href="../target/aarch32/VST3_1.html#t3">T3</a>
  AMED_AARCH32_CCLASS_VST3_m_a1, //!< <a href="../target/aarch32/VST3_m.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VST3_m_t1, //!< <a href="../target/aarch32/VST3_m.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VST4_1_a1, //!< <a href="../target/aarch32/VST4_1.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VST4_1_a2, //!< <a href="../target/aarch32/VST4_1.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VST4_1_a3, //!< <a href="../target/aarch32/VST4_1.html#a3">A3</a>
  AMED_AARCH32_CCLASS_VST4_1_t1, //!< <a href="../target/aarch32/VST4_1.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VST4_1_t2, //!< <a href="../target/aarch32/VST4_1.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VST4_1_t3, //!< <a href="../target/aarch32/VST4_1.html#t3">T3</a>
  AMED_AARCH32_CCLASS_VST4_m_a1, //!< <a href="../target/aarch32/VST4_m.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VST4_m_t1, //!< <a href="../target/aarch32/VST4_m.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VSTM_a1, //!< <a href="../target/aarch32/VSTM.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VSTM_a2, //!< <a href="../target/aarch32/VSTM.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VSTM_t1, //!< <a href="../target/aarch32/VSTM.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VSTM_t2, //!< <a href="../target/aarch32/VSTM.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VSTR_a1, //!< <a href="../target/aarch32/VSTR.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VSTR_t1, //!< <a href="../target/aarch32/VSTR.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VSUB_f_a1, //!< <a href="../target/aarch32/VSUB_f.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VSUB_f_a2, //!< <a href="../target/aarch32/VSUB_f.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VSUB_f_t1, //!< <a href="../target/aarch32/VSUB_f.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VSUB_f_t2, //!< <a href="../target/aarch32/VSUB_f.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VSUB_i_a1, //!< <a href="../target/aarch32/VSUB_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VSUB_i_t1, //!< <a href="../target/aarch32/VSUB_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VSUBHN_a1, //!< <a href="../target/aarch32/VSUBHN.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VSUBHN_t1, //!< <a href="../target/aarch32/VSUBHN.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VSUBL_a1, //!< <a href="../target/aarch32/VSUBL.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VSUBL_t1, //!< <a href="../target/aarch32/VSUBL.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VSUBW_a1, //!< <a href="../target/aarch32/VSUBW.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VSUBW_t1, //!< <a href="../target/aarch32/VSUBW.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VSUDOT_s_a1, //!< <a href="../target/aarch32/VSUDOT_s.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VSUDOT_s_t1, //!< <a href="../target/aarch32/VSUDOT_s.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VSWP_a1, //!< <a href="../target/aarch32/VSWP.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VSWP_t1, //!< <a href="../target/aarch32/VSWP.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VTBL_a1, //!< <a href="../target/aarch32/VTBL.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VTBL_t1, //!< <a href="../target/aarch32/VTBL.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VTRN_a1, //!< <a href="../target/aarch32/VTRN.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VTRN_t1, //!< <a href="../target/aarch32/VTRN.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VTST_a1, //!< <a href="../target/aarch32/VTST.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VTST_t1, //!< <a href="../target/aarch32/VTST.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VUDOT_a1, //!< <a href="../target/aarch32/VUDOT.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VUDOT_t1, //!< <a href="../target/aarch32/VUDOT.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VUDOT_s_a1, //!< <a href="../target/aarch32/VUDOT_s.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VUDOT_s_t1, //!< <a href="../target/aarch32/VUDOT_s.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VUMMLA_a1, //!< <a href="../target/aarch32/VUMMLA.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VUMMLA_t1, //!< <a href="../target/aarch32/VUMMLA.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VUSDOT_a1, //!< <a href="../target/aarch32/VUSDOT.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VUSDOT_t1, //!< <a href="../target/aarch32/VUSDOT.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VUSDOT_s_a1, //!< <a href="../target/aarch32/VUSDOT_s.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VUSDOT_s_t1, //!< <a href="../target/aarch32/VUSDOT_s.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VUSMMLA_a1, //!< <a href="../target/aarch32/VUSMMLA.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VUSMMLA_t1, //!< <a href="../target/aarch32/VUSMMLA.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VUZP_a1, //!< <a href="../target/aarch32/VUZP.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VUZP_t1, //!< <a href="../target/aarch32/VUZP.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VZIP_a1, //!< <a href="../target/aarch32/VZIP.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VZIP_t1, //!< <a href="../target/aarch32/VZIP.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VACLE_VACGE_a1, //!< <a href="../target/aarch32/VACLE_VACGE.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VACLE_VACGE_t1, //!< <a href="../target/aarch32/VACLE_VACGE.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VACLT_VACGT_a1, //!< <a href="../target/aarch32/VACLT_VACGT.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VACLT_VACGT_t1, //!< <a href="../target/aarch32/VACLT_VACGT.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VAND_VBIC_i_a1, //!< <a href="../target/aarch32/VAND_VBIC_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VAND_VBIC_i_a2, //!< <a href="../target/aarch32/VAND_VBIC_i.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VAND_VBIC_i_t1, //!< <a href="../target/aarch32/VAND_VBIC_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VAND_VBIC_i_t2, //!< <a href="../target/aarch32/VAND_VBIC_i.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VCLE_VCGE_r_a1, //!< <a href="../target/aarch32/VCLE_VCGE_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCLE_VCGE_r_a2, //!< <a href="../target/aarch32/VCLE_VCGE_r.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VCLE_VCGE_r_t1, //!< <a href="../target/aarch32/VCLE_VCGE_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCLE_VCGE_r_t2, //!< <a href="../target/aarch32/VCLE_VCGE_r.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VCLT_VCGT_r_a1, //!< <a href="../target/aarch32/VCLT_VCGT_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VCLT_VCGT_r_a2, //!< <a href="../target/aarch32/VCLT_VCGT_r.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VCLT_VCGT_r_t1, //!< <a href="../target/aarch32/VCLT_VCGT_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VCLT_VCGT_r_t2, //!< <a href="../target/aarch32/VCLT_VCGT_r.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VEXT_VEXT_a1, //!< <a href="../target/aarch32/VEXT_VEXT.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VEXT_VEXT_t1, //!< <a href="../target/aarch32/VEXT_VEXT.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VMOV_VORR_r_a1, //!< <a href="../target/aarch32/VMOV_VORR_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VMOV_VORR_r_t1, //!< <a href="../target/aarch32/VMOV_VORR_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VORN_VORR_i_a1, //!< <a href="../target/aarch32/VORN_VORR_i.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VORN_VORR_i_a2, //!< <a href="../target/aarch32/VORN_VORR_i.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VORN_VORR_i_t1, //!< <a href="../target/aarch32/VORN_VORR_i.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VORN_VORR_i_t2, //!< <a href="../target/aarch32/VORN_VORR_i.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VPOP_VLDM_a1, //!< <a href="../target/aarch32/VPOP_VLDM.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VPOP_VLDM_a2, //!< <a href="../target/aarch32/VPOP_VLDM.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VPOP_VLDM_t1, //!< <a href="../target/aarch32/VPOP_VLDM.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VPOP_VLDM_t2, //!< <a href="../target/aarch32/VPOP_VLDM.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VPUSH_VSTM_a1, //!< <a href="../target/aarch32/VPUSH_VSTM.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VPUSH_VSTM_a2, //!< <a href="../target/aarch32/VPUSH_VSTM.html#a2">A2</a>
  AMED_AARCH32_CCLASS_VPUSH_VSTM_t1, //!< <a href="../target/aarch32/VPUSH_VSTM.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VPUSH_VSTM_t2, //!< <a href="../target/aarch32/VPUSH_VSTM.html#t2">T2</a>
  AMED_AARCH32_CCLASS_VQRSHRN_VQMOVN_a1, //!< <a href="../target/aarch32/VQRSHRN_VQMOVN.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VQRSHRN_VQMOVN_t1, //!< <a href="../target/aarch32/VQRSHRN_VQMOVN.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VQRSHRUN_VQMOVN_a1, //!< <a href="../target/aarch32/VQRSHRUN_VQMOVN.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VQRSHRUN_VQMOVN_t1, //!< <a href="../target/aarch32/VQRSHRUN_VQMOVN.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VQSHRN_VQMOVN_a1, //!< <a href="../target/aarch32/VQSHRN_VQMOVN.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VQSHRN_VQMOVN_t1, //!< <a href="../target/aarch32/VQSHRN_VQMOVN.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VQSHRUN_VQMOVN_a1, //!< <a href="../target/aarch32/VQSHRUN_VQMOVN.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VQSHRUN_VQMOVN_t1, //!< <a href="../target/aarch32/VQSHRUN_VQMOVN.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VRSHR_VORR_r_a1, //!< <a href="../target/aarch32/VRSHR_VORR_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VRSHR_VORR_r_t1, //!< <a href="../target/aarch32/VRSHR_VORR_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VRSHRN_VMOVN_a1, //!< <a href="../target/aarch32/VRSHRN_VMOVN.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VRSHRN_VMOVN_t1, //!< <a href="../target/aarch32/VRSHRN_VMOVN.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VSHR_VORR_r_a1, //!< <a href="../target/aarch32/VSHR_VORR_r.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VSHR_VORR_r_t1, //!< <a href="../target/aarch32/VSHR_VORR_r.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VSHRN_VMOVN_a1, //!< <a href="../target/aarch32/VSHRN_VMOVN.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VSHRN_VMOVN_t1, //!< <a href="../target/aarch32/VSHRN_VMOVN.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VUZP_VTRN_a1, //!< <a href="../target/aarch32/VUZP_VTRN.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VUZP_VTRN_t1, //!< <a href="../target/aarch32/VUZP_VTRN.html#t1">T1</a>
  AMED_AARCH32_CCLASS_VZIP_VTRN_a1, //!< <a href="../target/aarch32/VZIP_VTRN.html#a1">A1</a>
  AMED_AARCH32_CCLASS_VZIP_VTRN_t1, //!< <a href="../target/aarch32/VZIP_VTRN.html#t1">T1</a>
} amed_aarch32_cclass;

#define AMED_AARCH32_EXTENSION_MAX_TEXT_LENGTH (23 + 1)

typedef enum _amed_aarch32_extension
{
  AMED_AARCH32_EXTENSION_NONE,
  AMED_AARCH32_EXTENSION_AES,
  AMED_AARCH32_EXTENSION_BF16,
  AMED_AARCH32_EXTENSION_BIT128PMULL,
  AMED_AARCH32_EXTENSION_CRC,
  AMED_AARCH32_EXTENSION_DOTP,
  AMED_AARCH32_EXTENSION_FCADD,
  AMED_AARCH32_EXTENSION_FJCVTZS,
  AMED_AARCH32_EXTENSION_FP16,
  AMED_AARCH32_EXTENSION_FP16MULNOROUNDINGTOFP32,
  AMED_AARCH32_EXTENSION_INT8MATMUL,
  AMED_AARCH32_EXTENSION_PAN,
  AMED_AARCH32_EXTENSION_QRDMLAH,
  AMED_AARCH32_EXTENSION_RAS,
  AMED_AARCH32_EXTENSION_SHA1,
  AMED_AARCH32_EXTENSION_SHA256,
} amed_aarch32_extension;

#define AMED_AARCH32_PAGE_MAX_TEXT_LENGTH (15 + 1)

typedef enum _amed_aarch32_page
{
  AMED_AARCH32_PAGE_NONE,
  AMED_AARCH32_PAGE_invalid, //!< invalid:invalid
  AMED_AARCH32_PAGE_ADC_i, //!< <a href="../target/aarch32/ADC_i.html">ADC, ADCS (immediate):Add with Carry (immediate)</a>
  AMED_AARCH32_PAGE_ADC_r, //!< <a href="../target/aarch32/ADC_r.html">ADC, ADCS (register):Add with Carry (register)</a>
  AMED_AARCH32_PAGE_ADC_rr, //!< <a href="../target/aarch32/ADC_rr.html">ADC, ADCS (register-shifted register):Add with Carry (register-shifted register)</a>
  AMED_AARCH32_PAGE_ADD_i, //!< <a href="../target/aarch32/ADD_i.html">ADD, ADDS (immediate):Add (immediate)</a>
  AMED_AARCH32_PAGE_ADD_r, //!< <a href="../target/aarch32/ADD_r.html">ADD, ADDS (register):Add (register)</a>
  AMED_AARCH32_PAGE_ADD_rr, //!< <a href="../target/aarch32/ADD_rr.html">ADD, ADDS (register-shifted register):Add (register-shifted register)</a>
  AMED_AARCH32_PAGE_ADD_SP_i, //!< <a href="../target/aarch32/ADD_SP_i.html">ADD, ADDS (SP plus immediate):Add to SP (immediate)</a>
  AMED_AARCH32_PAGE_ADD_SP_r, //!< <a href="../target/aarch32/ADD_SP_r.html">ADD, ADDS (SP plus register):Add to SP (register)</a>
  AMED_AARCH32_PAGE_ADR, //!< <a href="../target/aarch32/ADR.html">ADR:Form PC-relative address</a>
  AMED_AARCH32_PAGE_AND_i, //!< <a href="../target/aarch32/AND_i.html">AND, ANDS (immediate):Bitwise AND (immediate)</a>
  AMED_AARCH32_PAGE_AND_r, //!< <a href="../target/aarch32/AND_r.html">AND, ANDS (register):Bitwise AND (register)</a>
  AMED_AARCH32_PAGE_AND_rr, //!< <a href="../target/aarch32/AND_rr.html">AND, ANDS (register-shifted register):Bitwise AND (register-shifted register)</a>
  AMED_AARCH32_PAGE_B, //!< <a href="../target/aarch32/B.html">B:Branch</a>
  AMED_AARCH32_PAGE_BFC, //!< <a href="../target/aarch32/BFC.html">BFC:Bit Field Clear</a>
  AMED_AARCH32_PAGE_BFI, //!< <a href="../target/aarch32/BFI.html">BFI:Bit Field Insert</a>
  AMED_AARCH32_PAGE_BIC_i, //!< <a href="../target/aarch32/BIC_i.html">BIC, BICS (immediate):Bitwise Bit Clear (immediate)</a>
  AMED_AARCH32_PAGE_BIC_r, //!< <a href="../target/aarch32/BIC_r.html">BIC, BICS (register):Bitwise Bit Clear (register)</a>
  AMED_AARCH32_PAGE_BIC_rr, //!< <a href="../target/aarch32/BIC_rr.html">BIC, BICS (register-shifted register):Bitwise Bit Clear (register-shifted register)</a>
  AMED_AARCH32_PAGE_BKPT, //!< <a href="../target/aarch32/BKPT.html">BKPT:Breakpoint</a>
  AMED_AARCH32_PAGE_BL_i, //!< <a href="../target/aarch32/BL_i.html">BL, BLX (immediate):Branch with Link and optional Exchange (immediate)</a>
  AMED_AARCH32_PAGE_BLX_r, //!< <a href="../target/aarch32/BLX_r.html">BLX (register):Branch with Link and Exchange (register)</a>
  AMED_AARCH32_PAGE_BX, //!< <a href="../target/aarch32/BX.html">BX:Branch and Exchange</a>
  AMED_AARCH32_PAGE_BXJ, //!< <a href="../target/aarch32/BXJ.html">BXJ:Branch and Exchange, previously Branch and Exchange Jazelle</a>
  AMED_AARCH32_PAGE_CBNZ, //!< <a href="../target/aarch32/CBNZ.html">CBNZ, CBZ:Compare and Branch on Nonzero or Zero</a>
  AMED_AARCH32_PAGE_CLREX, //!< <a href="../target/aarch32/CLREX.html">CLREX:Clear-Exclusive</a>
  AMED_AARCH32_PAGE_CLZ, //!< <a href="../target/aarch32/CLZ.html">CLZ:Count Leading Zeros</a>
  AMED_AARCH32_PAGE_CMN_i, //!< <a href="../target/aarch32/CMN_i.html">CMN (immediate):Compare Negative (immediate)</a>
  AMED_AARCH32_PAGE_CMN_r, //!< <a href="../target/aarch32/CMN_r.html">CMN (register):Compare Negative (register)</a>
  AMED_AARCH32_PAGE_CMN_rr, //!< <a href="../target/aarch32/CMN_rr.html">CMN (register-shifted register):Compare Negative (register-shifted register)</a>
  AMED_AARCH32_PAGE_CMP_i, //!< <a href="../target/aarch32/CMP_i.html">CMP (immediate):Compare (immediate)</a>
  AMED_AARCH32_PAGE_CMP_r, //!< <a href="../target/aarch32/CMP_r.html">CMP (register):Compare (register)</a>
  AMED_AARCH32_PAGE_CMP_rr, //!< <a href="../target/aarch32/CMP_rr.html">CMP (register-shifted register):Compare (register-shifted register)</a>
  AMED_AARCH32_PAGE_CPS, //!< <a href="../target/aarch32/CPS.html">CPS, CPSID, CPSIE:Change PE State</a>
  AMED_AARCH32_PAGE_CRC32, //!< <a href="../target/aarch32/CRC32.html">CRC32:CRC32</a>
  AMED_AARCH32_PAGE_CRC32C, //!< <a href="../target/aarch32/CRC32C.html">CRC32C:CRC32C</a>
  AMED_AARCH32_PAGE_CSDB, //!< <a href="../target/aarch32/CSDB.html">CSDB:Consumption of Speculative Data Barrier</a>
  AMED_AARCH32_PAGE_DBG, //!< <a href="../target/aarch32/DBG.html">DBG:Debug hint</a>
  AMED_AARCH32_PAGE_DCPS1, //!< <a href="../target/aarch32/DCPS1.html">DCPS1:Debug Change PE State to EL1</a>
  AMED_AARCH32_PAGE_DCPS2, //!< <a href="../target/aarch32/DCPS2.html">DCPS2:Debug Change PE State to EL2</a>
  AMED_AARCH32_PAGE_DCPS3, //!< <a href="../target/aarch32/DCPS3.html">DCPS3:Debug Change PE State to EL3</a>
  AMED_AARCH32_PAGE_DMB, //!< <a href="../target/aarch32/DMB.html">DMB:Data Memory Barrier</a>
  AMED_AARCH32_PAGE_DSB, //!< <a href="../target/aarch32/DSB.html">DSB:Data Synchronization Barrier</a>
  AMED_AARCH32_PAGE_EOR_i, //!< <a href="../target/aarch32/EOR_i.html">EOR, EORS (immediate):Bitwise Exclusive OR (immediate)</a>
  AMED_AARCH32_PAGE_EOR_r, //!< <a href="../target/aarch32/EOR_r.html">EOR, EORS (register):Bitwise Exclusive OR (register)</a>
  AMED_AARCH32_PAGE_EOR_rr, //!< <a href="../target/aarch32/EOR_rr.html">EOR, EORS (register-shifted register):Bitwise Exclusive OR (register-shifted register)</a>
  AMED_AARCH32_PAGE_ERET, //!< <a href="../target/aarch32/ERET.html">ERET:Exception Return</a>
  AMED_AARCH32_PAGE_ESB, //!< <a href="../target/aarch32/ESB.html">ESB:Error Synchronization Barrier</a>
  AMED_AARCH32_PAGE_HLT, //!< <a href="../target/aarch32/HLT.html">HLT:Halting Breakpoint</a>
  AMED_AARCH32_PAGE_HVC, //!< <a href="../target/aarch32/HVC.html">HVC:Hypervisor Call</a>
  AMED_AARCH32_PAGE_ISB, //!< <a href="../target/aarch32/ISB.html">ISB:Instruction Synchronization Barrier</a>
  AMED_AARCH32_PAGE_IT, //!< <a href="../target/aarch32/IT.html">IT:If-Then</a>
  AMED_AARCH32_PAGE_LDA, //!< <a href="../target/aarch32/LDA.html">LDA:Load-Acquire Word</a>
  AMED_AARCH32_PAGE_LDAB, //!< <a href="../target/aarch32/LDAB.html">LDAB:Load-Acquire Byte</a>
  AMED_AARCH32_PAGE_LDAEX, //!< <a href="../target/aarch32/LDAEX.html">LDAEX:Load-Acquire Exclusive Word</a>
  AMED_AARCH32_PAGE_LDAEXB, //!< <a href="../target/aarch32/LDAEXB.html">LDAEXB:Load-Acquire Exclusive Byte</a>
  AMED_AARCH32_PAGE_LDAEXD, //!< <a href="../target/aarch32/LDAEXD.html">LDAEXD:Load-Acquire Exclusive Doubleword</a>
  AMED_AARCH32_PAGE_LDAEXH, //!< <a href="../target/aarch32/LDAEXH.html">LDAEXH:Load-Acquire Exclusive Halfword</a>
  AMED_AARCH32_PAGE_LDAH, //!< <a href="../target/aarch32/LDAH.html">LDAH:Load-Acquire Halfword</a>
  AMED_AARCH32_PAGE_LDC_i, //!< <a href="../target/aarch32/LDC_i.html">LDC (immediate):Load data to System register (immediate)</a>
  AMED_AARCH32_PAGE_LDC_l, //!< <a href="../target/aarch32/LDC_l.html">LDC (literal):Load data to System register (literal)</a>
  AMED_AARCH32_PAGE_LDM, //!< <a href="../target/aarch32/LDM.html">LDM, LDMIA, LDMFD:Load Multiple (Increment After, Full Descending)</a>
  AMED_AARCH32_PAGE_LDM_e, //!< <a href="../target/aarch32/LDM_e.html">LDM (exception return):Load Multiple (exception return)</a>
  AMED_AARCH32_PAGE_LDM_u, //!< <a href="../target/aarch32/LDM_u.html">LDM (User registers):Load Multiple (User registers)</a>
  AMED_AARCH32_PAGE_LDMDA, //!< <a href="../target/aarch32/LDMDA.html">LDMDA, LDMFA:Load Multiple Decrement After (Full Ascending)</a>
  AMED_AARCH32_PAGE_LDMDB, //!< <a href="../target/aarch32/LDMDB.html">LDMDB, LDMEA:Load Multiple Decrement Before (Empty Ascending)</a>
  AMED_AARCH32_PAGE_LDMIB, //!< <a href="../target/aarch32/LDMIB.html">LDMIB, LDMED:Load Multiple Increment Before (Empty Descending)</a>
  AMED_AARCH32_PAGE_LDR_i, //!< <a href="../target/aarch32/LDR_i.html">LDR (immediate):Load Register (immediate)</a>
  AMED_AARCH32_PAGE_LDR_l, //!< <a href="../target/aarch32/LDR_l.html">LDR (literal):Load Register (literal)</a>
  AMED_AARCH32_PAGE_LDR_r, //!< <a href="../target/aarch32/LDR_r.html">LDR (register):Load Register (register)</a>
  AMED_AARCH32_PAGE_LDRB_i, //!< <a href="../target/aarch32/LDRB_i.html">LDRB (immediate):Load Register Byte (immediate)</a>
  AMED_AARCH32_PAGE_LDRB_l, //!< <a href="../target/aarch32/LDRB_l.html">LDRB (literal):Load Register Byte (literal)</a>
  AMED_AARCH32_PAGE_LDRB_r, //!< <a href="../target/aarch32/LDRB_r.html">LDRB (register):Load Register Byte (register)</a>
  AMED_AARCH32_PAGE_LDRBT, //!< <a href="../target/aarch32/LDRBT.html">LDRBT:Load Register Byte Unprivileged</a>
  AMED_AARCH32_PAGE_LDRD_i, //!< <a href="../target/aarch32/LDRD_i.html">LDRD (immediate):Load Register Dual (immediate)</a>
  AMED_AARCH32_PAGE_LDRD_l, //!< <a href="../target/aarch32/LDRD_l.html">LDRD (literal):Load Register Dual (literal)</a>
  AMED_AARCH32_PAGE_LDRD_r, //!< <a href="../target/aarch32/LDRD_r.html">LDRD (register):Load Register Dual (register)</a>
  AMED_AARCH32_PAGE_LDREX, //!< <a href="../target/aarch32/LDREX.html">LDREX:Load Register Exclusive</a>
  AMED_AARCH32_PAGE_LDREXB, //!< <a href="../target/aarch32/LDREXB.html">LDREXB:Load Register Exclusive Byte</a>
  AMED_AARCH32_PAGE_LDREXD, //!< <a href="../target/aarch32/LDREXD.html">LDREXD:Load Register Exclusive Doubleword</a>
  AMED_AARCH32_PAGE_LDREXH, //!< <a href="../target/aarch32/LDREXH.html">LDREXH:Load Register Exclusive Halfword</a>
  AMED_AARCH32_PAGE_LDRH_i, //!< <a href="../target/aarch32/LDRH_i.html">LDRH (immediate):Load Register Halfword (immediate)</a>
  AMED_AARCH32_PAGE_LDRH_l, //!< <a href="../target/aarch32/LDRH_l.html">LDRH (literal):Load Register Halfword (literal)</a>
  AMED_AARCH32_PAGE_LDRH_r, //!< <a href="../target/aarch32/LDRH_r.html">LDRH (register):Load Register Halfword (register)</a>
  AMED_AARCH32_PAGE_LDRHT, //!< <a href="../target/aarch32/LDRHT.html">LDRHT:Load Register Halfword Unprivileged</a>
  AMED_AARCH32_PAGE_LDRSB_i, //!< <a href="../target/aarch32/LDRSB_i.html">LDRSB (immediate):Load Register Signed Byte (immediate)</a>
  AMED_AARCH32_PAGE_LDRSB_l, //!< <a href="../target/aarch32/LDRSB_l.html">LDRSB (literal):Load Register Signed Byte (literal)</a>
  AMED_AARCH32_PAGE_LDRSB_r, //!< <a href="../target/aarch32/LDRSB_r.html">LDRSB (register):Load Register Signed Byte (register)</a>
  AMED_AARCH32_PAGE_LDRSBT, //!< <a href="../target/aarch32/LDRSBT.html">LDRSBT:Load Register Signed Byte Unprivileged</a>
  AMED_AARCH32_PAGE_LDRSH_i, //!< <a href="../target/aarch32/LDRSH_i.html">LDRSH (immediate):Load Register Signed Halfword (immediate)</a>
  AMED_AARCH32_PAGE_LDRSH_l, //!< <a href="../target/aarch32/LDRSH_l.html">LDRSH (literal):Load Register Signed Halfword (literal)</a>
  AMED_AARCH32_PAGE_LDRSH_r, //!< <a href="../target/aarch32/LDRSH_r.html">LDRSH (register):Load Register Signed Halfword (register)</a>
  AMED_AARCH32_PAGE_LDRSHT, //!< <a href="../target/aarch32/LDRSHT.html">LDRSHT:Load Register Signed Halfword Unprivileged</a>
  AMED_AARCH32_PAGE_LDRT, //!< <a href="../target/aarch32/LDRT.html">LDRT:Load Register Unprivileged</a>
  AMED_AARCH32_PAGE_MCR, //!< <a href="../target/aarch32/MCR.html">MCR:Move to System register from general-purpose register or execute a System instruction</a>
  AMED_AARCH32_PAGE_MCRR, //!< <a href="../target/aarch32/MCRR.html">MCRR:Move to System register from two general-purpose registers</a>
  AMED_AARCH32_PAGE_MLA, //!< <a href="../target/aarch32/MLA.html">MLA, MLAS:Multiply Accumulate</a>
  AMED_AARCH32_PAGE_MLS, //!< <a href="../target/aarch32/MLS.html">MLS:Multiply and Subtract</a>
  AMED_AARCH32_PAGE_MOV_i, //!< <a href="../target/aarch32/MOV_i.html">MOV, MOVS (immediate):Move (immediate)</a>
  AMED_AARCH32_PAGE_MOV_r, //!< <a href="../target/aarch32/MOV_r.html">MOV, MOVS (register):Move (register)</a>
  AMED_AARCH32_PAGE_MOV_rr, //!< <a href="../target/aarch32/MOV_rr.html">MOV, MOVS (register-shifted register):Move (register-shifted register)</a>
  AMED_AARCH32_PAGE_MOVT, //!< <a href="../target/aarch32/MOVT.html">MOVT:Move Top</a>
  AMED_AARCH32_PAGE_MRC, //!< <a href="../target/aarch32/MRC.html">MRC:Move to general-purpose register from System register</a>
  AMED_AARCH32_PAGE_MRRC, //!< <a href="../target/aarch32/MRRC.html">MRRC:Move to two general-purpose registers from System register</a>
  AMED_AARCH32_PAGE_MRS, //!< <a href="../target/aarch32/MRS.html">MRS:Move Special register to general-purpose register</a>
  AMED_AARCH32_PAGE_MRS_br, //!< <a href="../target/aarch32/MRS_br.html">MRS (Banked register):Move Banked or Special register to general-purpose register</a>
  AMED_AARCH32_PAGE_MSR_br, //!< <a href="../target/aarch32/MSR_br.html">MSR (Banked register):Move general-purpose register to Banked or Special register</a>
  AMED_AARCH32_PAGE_MSR_i, //!< <a href="../target/aarch32/MSR_i.html">MSR (immediate):Move immediate value to Special register</a>
  AMED_AARCH32_PAGE_MSR_r, //!< <a href="../target/aarch32/MSR_r.html">MSR (register):Move general-purpose register to Special register</a>
  AMED_AARCH32_PAGE_MUL, //!< <a href="../target/aarch32/MUL.html">MUL, MULS:Multiply</a>
  AMED_AARCH32_PAGE_MVN_i, //!< <a href="../target/aarch32/MVN_i.html">MVN, MVNS (immediate):Bitwise NOT (immediate)</a>
  AMED_AARCH32_PAGE_MVN_r, //!< <a href="../target/aarch32/MVN_r.html">MVN, MVNS (register):Bitwise NOT (register)</a>
  AMED_AARCH32_PAGE_MVN_rr, //!< <a href="../target/aarch32/MVN_rr.html">MVN, MVNS (register-shifted register):Bitwise NOT (register-shifted register)</a>
  AMED_AARCH32_PAGE_NOP, //!< <a href="../target/aarch32/NOP.html">NOP:No Operation</a>
  AMED_AARCH32_PAGE_ORN_i, //!< <a href="../target/aarch32/ORN_i.html">ORN, ORNS (immediate):Bitwise OR NOT (immediate)</a>
  AMED_AARCH32_PAGE_ORN_r, //!< <a href="../target/aarch32/ORN_r.html">ORN, ORNS (register):Bitwise OR NOT (register)</a>
  AMED_AARCH32_PAGE_ORR_i, //!< <a href="../target/aarch32/ORR_i.html">ORR, ORRS (immediate):Bitwise OR (immediate)</a>
  AMED_AARCH32_PAGE_ORR_r, //!< <a href="../target/aarch32/ORR_r.html">ORR, ORRS (register):Bitwise OR (register)</a>
  AMED_AARCH32_PAGE_ORR_rr, //!< <a href="../target/aarch32/ORR_rr.html">ORR, ORRS (register-shifted register):Bitwise OR (register-shifted register)</a>
  AMED_AARCH32_PAGE_PKH, //!< <a href="../target/aarch32/PKH.html">PKHBT, PKHTB:Pack Halfword</a>
  AMED_AARCH32_PAGE_PLD_i, //!< <a href="../target/aarch32/PLD_i.html">PLD, PLDW (immediate):Preload Data (immediate)</a>
  AMED_AARCH32_PAGE_PLD_l, //!< <a href="../target/aarch32/PLD_l.html">PLD (literal):Preload Data (literal)</a>
  AMED_AARCH32_PAGE_PLD_r, //!< <a href="../target/aarch32/PLD_r.html">PLD, PLDW (register):Preload Data (register)</a>
  AMED_AARCH32_PAGE_PLI_i, //!< <a href="../target/aarch32/PLI_i.html">PLI (immediate, literal):Preload Instruction (immediate, literal)</a>
  AMED_AARCH32_PAGE_PLI_r, //!< <a href="../target/aarch32/PLI_r.html">PLI (register):Preload Instruction (register)</a>
  AMED_AARCH32_PAGE_POP, //!< <a href="../target/aarch32/POP.html">POP:Pop Multiple Registers from Stack</a>
  AMED_AARCH32_PAGE_PSSBB, //!< <a href="../target/aarch32/PSSBB.html">PSSBB:Physical Speculative Store Bypass Barrier</a>
  AMED_AARCH32_PAGE_PUSH, //!< <a href="../target/aarch32/PUSH.html">PUSH:Push Multiple Registers to Stack</a>
  AMED_AARCH32_PAGE_QADD, //!< <a href="../target/aarch32/QADD.html">QADD:Saturating Add</a>
  AMED_AARCH32_PAGE_QADD16, //!< <a href="../target/aarch32/QADD16.html">QADD16:Saturating Add 16</a>
  AMED_AARCH32_PAGE_QADD8, //!< <a href="../target/aarch32/QADD8.html">QADD8:Saturating Add 8</a>
  AMED_AARCH32_PAGE_QASX, //!< <a href="../target/aarch32/QASX.html">QASX:Saturating Add and Subtract with Exchange</a>
  AMED_AARCH32_PAGE_QDADD, //!< <a href="../target/aarch32/QDADD.html">QDADD:Saturating Double and Add</a>
  AMED_AARCH32_PAGE_QDSUB, //!< <a href="../target/aarch32/QDSUB.html">QDSUB:Saturating Double and Subtract</a>
  AMED_AARCH32_PAGE_QSAX, //!< <a href="../target/aarch32/QSAX.html">QSAX:Saturating Subtract and Add with Exchange</a>
  AMED_AARCH32_PAGE_QSUB, //!< <a href="../target/aarch32/QSUB.html">QSUB:Saturating Subtract</a>
  AMED_AARCH32_PAGE_QSUB16, //!< <a href="../target/aarch32/QSUB16.html">QSUB16:Saturating Subtract 16</a>
  AMED_AARCH32_PAGE_QSUB8, //!< <a href="../target/aarch32/QSUB8.html">QSUB8:Saturating Subtract 8</a>
  AMED_AARCH32_PAGE_RBIT, //!< <a href="../target/aarch32/RBIT.html">RBIT:Reverse Bits</a>
  AMED_AARCH32_PAGE_REV, //!< <a href="../target/aarch32/REV.html">REV:Byte-Reverse Word</a>
  AMED_AARCH32_PAGE_REV16, //!< <a href="../target/aarch32/REV16.html">REV16:Byte-Reverse Packed Halfword</a>
  AMED_AARCH32_PAGE_REVSH, //!< <a href="../target/aarch32/REVSH.html">REVSH:Byte-Reverse Signed Halfword</a>
  AMED_AARCH32_PAGE_RFE, //!< <a href="../target/aarch32/RFE.html">RFE, RFEDA, RFEDB, RFEIA, RFEIB:Return From Exception</a>
  AMED_AARCH32_PAGE_RSB_i, //!< <a href="../target/aarch32/RSB_i.html">RSB, RSBS (immediate):Reverse Subtract (immediate)</a>
  AMED_AARCH32_PAGE_RSB_r, //!< <a href="../target/aarch32/RSB_r.html">RSB, RSBS (register):Reverse Subtract (register)</a>
  AMED_AARCH32_PAGE_RSB_rr, //!< <a href="../target/aarch32/RSB_rr.html">RSB, RSBS (register-shifted register):Reverse Subtract (register-shifted register)</a>
  AMED_AARCH32_PAGE_RSC_i, //!< <a href="../target/aarch32/RSC_i.html">RSC, RSCS (immediate):Reverse Subtract with Carry (immediate)</a>
  AMED_AARCH32_PAGE_RSC_r, //!< <a href="../target/aarch32/RSC_r.html">RSC, RSCS (register):Reverse Subtract with Carry (register)</a>
  AMED_AARCH32_PAGE_RSC_rr, //!< <a href="../target/aarch32/RSC_rr.html">RSC, RSCS (register-shifted register):Reverse Subtract (register-shifted register)</a>
  AMED_AARCH32_PAGE_SADD16, //!< <a href="../target/aarch32/SADD16.html">SADD16:Signed Add 16</a>
  AMED_AARCH32_PAGE_SADD8, //!< <a href="../target/aarch32/SADD8.html">SADD8:Signed Add 8</a>
  AMED_AARCH32_PAGE_SASX, //!< <a href="../target/aarch32/SASX.html">SASX:Signed Add and Subtract with Exchange</a>
  AMED_AARCH32_PAGE_SB, //!< <a href="../target/aarch32/SB.html">SB:Speculation Barrier</a>
  AMED_AARCH32_PAGE_SBC_i, //!< <a href="../target/aarch32/SBC_i.html">SBC, SBCS (immediate):Subtract with Carry (immediate)</a>
  AMED_AARCH32_PAGE_SBC_r, //!< <a href="../target/aarch32/SBC_r.html">SBC, SBCS (register):Subtract with Carry (register)</a>
  AMED_AARCH32_PAGE_SBC_rr, //!< <a href="../target/aarch32/SBC_rr.html">SBC, SBCS (register-shifted register):Subtract with Carry (register-shifted register)</a>
  AMED_AARCH32_PAGE_SBFX, //!< <a href="../target/aarch32/SBFX.html">SBFX:Signed Bit Field Extract</a>
  AMED_AARCH32_PAGE_SDIV, //!< <a href="../target/aarch32/SDIV.html">SDIV:Signed Divide</a>
  AMED_AARCH32_PAGE_SEL, //!< <a href="../target/aarch32/SEL.html">SEL:Select Bytes</a>
  AMED_AARCH32_PAGE_SETEND, //!< <a href="../target/aarch32/SETEND.html">SETEND:Set Endianness</a>
  AMED_AARCH32_PAGE_SETPAN, //!< <a href="../target/aarch32/SETPAN.html">SETPAN:Set Privileged Access Never</a>
  AMED_AARCH32_PAGE_SEV, //!< <a href="../target/aarch32/SEV.html">SEV:Send Event</a>
  AMED_AARCH32_PAGE_SEVL, //!< <a href="../target/aarch32/SEVL.html">SEVL:Send Event Local</a>
  AMED_AARCH32_PAGE_SHADD16, //!< <a href="../target/aarch32/SHADD16.html">SHADD16:Signed Halving Add 16</a>
  AMED_AARCH32_PAGE_SHADD8, //!< <a href="../target/aarch32/SHADD8.html">SHADD8:Signed Halving Add 8</a>
  AMED_AARCH32_PAGE_SHASX, //!< <a href="../target/aarch32/SHASX.html">SHASX:Signed Halving Add and Subtract with Exchange</a>
  AMED_AARCH32_PAGE_SHSAX, //!< <a href="../target/aarch32/SHSAX.html">SHSAX:Signed Halving Subtract and Add with Exchange</a>
  AMED_AARCH32_PAGE_SHSUB16, //!< <a href="../target/aarch32/SHSUB16.html">SHSUB16:Signed Halving Subtract 16</a>
  AMED_AARCH32_PAGE_SHSUB8, //!< <a href="../target/aarch32/SHSUB8.html">SHSUB8:Signed Halving Subtract 8</a>
  AMED_AARCH32_PAGE_SMC, //!< <a href="../target/aarch32/SMC.html">SMC:Secure Monitor Call</a>
  AMED_AARCH32_PAGE_SMLABB, //!< <a href="../target/aarch32/SMLABB.html">SMLABB, SMLABT, SMLATB, SMLATT:Signed Multiply Accumulate (halfwords)</a>
  AMED_AARCH32_PAGE_SMLAD, //!< <a href="../target/aarch32/SMLAD.html">SMLAD, SMLADX:Signed Multiply Accumulate Dual</a>
  AMED_AARCH32_PAGE_SMLAL, //!< <a href="../target/aarch32/SMLAL.html">SMLAL, SMLALS:Signed Multiply Accumulate Long</a>
  AMED_AARCH32_PAGE_SMLALBB, //!< <a href="../target/aarch32/SMLALBB.html">SMLALBB, SMLALBT, SMLALTB, SMLALTT:Signed Multiply Accumulate Long (halfwords)</a>
  AMED_AARCH32_PAGE_SMLALD, //!< <a href="../target/aarch32/SMLALD.html">SMLALD, SMLALDX:Signed Multiply Accumulate Long Dual</a>
  AMED_AARCH32_PAGE_SMLAWB, //!< <a href="../target/aarch32/SMLAWB.html">SMLAWB, SMLAWT:Signed Multiply Accumulate (word by halfword)</a>
  AMED_AARCH32_PAGE_SMLSD, //!< <a href="../target/aarch32/SMLSD.html">SMLSD, SMLSDX:Signed Multiply Subtract Dual</a>
  AMED_AARCH32_PAGE_SMLSLD, //!< <a href="../target/aarch32/SMLSLD.html">SMLSLD, SMLSLDX:Signed Multiply Subtract Long Dual</a>
  AMED_AARCH32_PAGE_SMMLA, //!< <a href="../target/aarch32/SMMLA.html">SMMLA, SMMLAR:Signed Most Significant Word Multiply Accumulate</a>
  AMED_AARCH32_PAGE_SMMLS, //!< <a href="../target/aarch32/SMMLS.html">SMMLS, SMMLSR:Signed Most Significant Word Multiply Subtract</a>
  AMED_AARCH32_PAGE_SMMUL, //!< <a href="../target/aarch32/SMMUL.html">SMMUL, SMMULR:Signed Most Significant Word Multiply</a>
  AMED_AARCH32_PAGE_SMUAD, //!< <a href="../target/aarch32/SMUAD.html">SMUAD, SMUADX:Signed Dual Multiply Add</a>
  AMED_AARCH32_PAGE_SMULBB, //!< <a href="../target/aarch32/SMULBB.html">SMULBB, SMULBT, SMULTB, SMULTT:Signed Multiply (halfwords)</a>
  AMED_AARCH32_PAGE_SMULL, //!< <a href="../target/aarch32/SMULL.html">SMULL, SMULLS:Signed Multiply Long</a>
  AMED_AARCH32_PAGE_SMULWB, //!< <a href="../target/aarch32/SMULWB.html">SMULWB, SMULWT:Signed Multiply (word by halfword)</a>
  AMED_AARCH32_PAGE_SMUSD, //!< <a href="../target/aarch32/SMUSD.html">SMUSD, SMUSDX:Signed Multiply Subtract Dual</a>
  AMED_AARCH32_PAGE_SRS, //!< <a href="../target/aarch32/SRS.html">SRS, SRSDA, SRSDB, SRSIA, SRSIB:Store Return State</a>
  AMED_AARCH32_PAGE_SSAT, //!< <a href="../target/aarch32/SSAT.html">SSAT:Signed Saturate</a>
  AMED_AARCH32_PAGE_SSAT16, //!< <a href="../target/aarch32/SSAT16.html">SSAT16:Signed Saturate 16</a>
  AMED_AARCH32_PAGE_SSAX, //!< <a href="../target/aarch32/SSAX.html">SSAX:Signed Subtract and Add with Exchange</a>
  AMED_AARCH32_PAGE_SSBB, //!< <a href="../target/aarch32/SSBB.html">SSBB:Speculative Store Bypass Barrier</a>
  AMED_AARCH32_PAGE_SSUB16, //!< <a href="../target/aarch32/SSUB16.html">SSUB16:Signed Subtract 16</a>
  AMED_AARCH32_PAGE_SSUB8, //!< <a href="../target/aarch32/SSUB8.html">SSUB8:Signed Subtract 8</a>
  AMED_AARCH32_PAGE_STC, //!< <a href="../target/aarch32/STC.html">STC:Store data to System register</a>
  AMED_AARCH32_PAGE_STL, //!< <a href="../target/aarch32/STL.html">STL:Store-Release Word</a>
  AMED_AARCH32_PAGE_STLB, //!< <a href="../target/aarch32/STLB.html">STLB:Store-Release Byte</a>
  AMED_AARCH32_PAGE_STLEX, //!< <a href="../target/aarch32/STLEX.html">STLEX:Store-Release Exclusive Word</a>
  AMED_AARCH32_PAGE_STLEXB, //!< <a href="../target/aarch32/STLEXB.html">STLEXB:Store-Release Exclusive Byte</a>
  AMED_AARCH32_PAGE_STLEXD, //!< <a href="../target/aarch32/STLEXD.html">STLEXD:Store-Release Exclusive Doubleword</a>
  AMED_AARCH32_PAGE_STLEXH, //!< <a href="../target/aarch32/STLEXH.html">STLEXH:Store-Release Exclusive Halfword</a>
  AMED_AARCH32_PAGE_STLH, //!< <a href="../target/aarch32/STLH.html">STLH:Store-Release Halfword</a>
  AMED_AARCH32_PAGE_STM, //!< <a href="../target/aarch32/STM.html">STM, STMIA, STMEA:Store Multiple (Increment After, Empty Ascending)</a>
  AMED_AARCH32_PAGE_STM_u, //!< <a href="../target/aarch32/STM_u.html">STM (User registers):Store Multiple (User registers)</a>
  AMED_AARCH32_PAGE_STMDA, //!< <a href="../target/aarch32/STMDA.html">STMDA, STMED:Store Multiple Decrement After (Empty Descending)</a>
  AMED_AARCH32_PAGE_STMDB, //!< <a href="../target/aarch32/STMDB.html">STMDB, STMFD:Store Multiple Decrement Before (Full Descending)</a>
  AMED_AARCH32_PAGE_STMIB, //!< <a href="../target/aarch32/STMIB.html">STMIB, STMFA:Store Multiple Increment Before (Full Ascending)</a>
  AMED_AARCH32_PAGE_STR_i, //!< <a href="../target/aarch32/STR_i.html">STR (immediate):Store Register (immediate)</a>
  AMED_AARCH32_PAGE_STR_r, //!< <a href="../target/aarch32/STR_r.html">STR (register):Store Register (register)</a>
  AMED_AARCH32_PAGE_STRB_i, //!< <a href="../target/aarch32/STRB_i.html">STRB (immediate):Store Register Byte (immediate)</a>
  AMED_AARCH32_PAGE_STRB_r, //!< <a href="../target/aarch32/STRB_r.html">STRB (register):Store Register Byte (register)</a>
  AMED_AARCH32_PAGE_STRBT, //!< <a href="../target/aarch32/STRBT.html">STRBT:Store Register Byte Unprivileged</a>
  AMED_AARCH32_PAGE_STRD_i, //!< <a href="../target/aarch32/STRD_i.html">STRD (immediate):Store Register Dual (immediate)</a>
  AMED_AARCH32_PAGE_STRD_r, //!< <a href="../target/aarch32/STRD_r.html">STRD (register):Store Register Dual (register)</a>
  AMED_AARCH32_PAGE_STREX, //!< <a href="../target/aarch32/STREX.html">STREX:Store Register Exclusive</a>
  AMED_AARCH32_PAGE_STREXB, //!< <a href="../target/aarch32/STREXB.html">STREXB:Store Register Exclusive Byte</a>
  AMED_AARCH32_PAGE_STREXD, //!< <a href="../target/aarch32/STREXD.html">STREXD:Store Register Exclusive Doubleword</a>
  AMED_AARCH32_PAGE_STREXH, //!< <a href="../target/aarch32/STREXH.html">STREXH:Store Register Exclusive Halfword</a>
  AMED_AARCH32_PAGE_STRH_i, //!< <a href="../target/aarch32/STRH_i.html">STRH (immediate):Store Register Halfword (immediate)</a>
  AMED_AARCH32_PAGE_STRH_r, //!< <a href="../target/aarch32/STRH_r.html">STRH (register):Store Register Halfword (register)</a>
  AMED_AARCH32_PAGE_STRHT, //!< <a href="../target/aarch32/STRHT.html">STRHT:Store Register Halfword Unprivileged</a>
  AMED_AARCH32_PAGE_STRT, //!< <a href="../target/aarch32/STRT.html">STRT:Store Register Unprivileged</a>
  AMED_AARCH32_PAGE_SUB_i, //!< <a href="../target/aarch32/SUB_i.html">SUB, SUBS (immediate):Subtract (immediate)</a>
  AMED_AARCH32_PAGE_SUB_r, //!< <a href="../target/aarch32/SUB_r.html">SUB, SUBS (register):Subtract (register)</a>
  AMED_AARCH32_PAGE_SUB_rr, //!< <a href="../target/aarch32/SUB_rr.html">SUB, SUBS (register-shifted register):Subtract (register-shifted register)</a>
  AMED_AARCH32_PAGE_SUB_SP_i, //!< <a href="../target/aarch32/SUB_SP_i.html">SUB, SUBS (SP minus immediate):Subtract from SP (immediate)</a>
  AMED_AARCH32_PAGE_SUB_SP_r, //!< <a href="../target/aarch32/SUB_SP_r.html">SUB, SUBS (SP minus register):Subtract from SP (register)</a>
  AMED_AARCH32_PAGE_SVC, //!< <a href="../target/aarch32/SVC.html">SVC:Supervisor Call</a>
  AMED_AARCH32_PAGE_SXTAB, //!< <a href="../target/aarch32/SXTAB.html">SXTAB:Signed Extend and Add Byte</a>
  AMED_AARCH32_PAGE_SXTAB16, //!< <a href="../target/aarch32/SXTAB16.html">SXTAB16:Signed Extend and Add Byte 16</a>
  AMED_AARCH32_PAGE_SXTAH, //!< <a href="../target/aarch32/SXTAH.html">SXTAH:Signed Extend and Add Halfword</a>
  AMED_AARCH32_PAGE_SXTB, //!< <a href="../target/aarch32/SXTB.html">SXTB:Signed Extend Byte</a>
  AMED_AARCH32_PAGE_SXTB16, //!< <a href="../target/aarch32/SXTB16.html">SXTB16:Signed Extend Byte 16</a>
  AMED_AARCH32_PAGE_SXTH, //!< <a href="../target/aarch32/SXTH.html">SXTH:Signed Extend Halfword</a>
  AMED_AARCH32_PAGE_TBB, //!< <a href="../target/aarch32/TBB.html">TBB, TBH:Table Branch Byte or Halfword</a>
  AMED_AARCH32_PAGE_TEQ_i, //!< <a href="../target/aarch32/TEQ_i.html">TEQ (immediate):Test Equivalence (immediate)</a>
  AMED_AARCH32_PAGE_TEQ_r, //!< <a href="../target/aarch32/TEQ_r.html">TEQ (register):Test Equivalence (register)</a>
  AMED_AARCH32_PAGE_TEQ_rr, //!< <a href="../target/aarch32/TEQ_rr.html">TEQ (register-shifted register):Test Equivalence (register-shifted register)</a>
  AMED_AARCH32_PAGE_TSB, //!< <a href="../target/aarch32/TSB.html">TSB CSYNC:Trace Synchronization Barrier</a>
  AMED_AARCH32_PAGE_TST_i, //!< <a href="../target/aarch32/TST_i.html">TST (immediate):Test (immediate)</a>
  AMED_AARCH32_PAGE_TST_r, //!< <a href="../target/aarch32/TST_r.html">TST (register):Test (register)</a>
  AMED_AARCH32_PAGE_TST_rr, //!< <a href="../target/aarch32/TST_rr.html">TST (register-shifted register):Test (register-shifted register)</a>
  AMED_AARCH32_PAGE_UADD16, //!< <a href="../target/aarch32/UADD16.html">UADD16:Unsigned Add 16</a>
  AMED_AARCH32_PAGE_UADD8, //!< <a href="../target/aarch32/UADD8.html">UADD8:Unsigned Add 8</a>
  AMED_AARCH32_PAGE_UASX, //!< <a href="../target/aarch32/UASX.html">UASX:Unsigned Add and Subtract with Exchange</a>
  AMED_AARCH32_PAGE_UBFX, //!< <a href="../target/aarch32/UBFX.html">UBFX:Unsigned Bit Field Extract</a>
  AMED_AARCH32_PAGE_UDF, //!< <a href="../target/aarch32/UDF.html">UDF:Permanently Undefined</a>
  AMED_AARCH32_PAGE_UDIV, //!< <a href="../target/aarch32/UDIV.html">UDIV:Unsigned Divide</a>
  AMED_AARCH32_PAGE_UHADD16, //!< <a href="../target/aarch32/UHADD16.html">UHADD16:Unsigned Halving Add 16</a>
  AMED_AARCH32_PAGE_UHADD8, //!< <a href="../target/aarch32/UHADD8.html">UHADD8:Unsigned Halving Add 8</a>
  AMED_AARCH32_PAGE_UHASX, //!< <a href="../target/aarch32/UHASX.html">UHASX:Unsigned Halving Add and Subtract with Exchange</a>
  AMED_AARCH32_PAGE_UHSAX, //!< <a href="../target/aarch32/UHSAX.html">UHSAX:Unsigned Halving Subtract and Add with Exchange</a>
  AMED_AARCH32_PAGE_UHSUB16, //!< <a href="../target/aarch32/UHSUB16.html">UHSUB16:Unsigned Halving Subtract 16</a>
  AMED_AARCH32_PAGE_UHSUB8, //!< <a href="../target/aarch32/UHSUB8.html">UHSUB8:Unsigned Halving Subtract 8</a>
  AMED_AARCH32_PAGE_UMAAL, //!< <a href="../target/aarch32/UMAAL.html">UMAAL:Unsigned Multiply Accumulate Accumulate Long</a>
  AMED_AARCH32_PAGE_UMLAL, //!< <a href="../target/aarch32/UMLAL.html">UMLAL, UMLALS:Unsigned Multiply Accumulate Long</a>
  AMED_AARCH32_PAGE_UMULL, //!< <a href="../target/aarch32/UMULL.html">UMULL, UMULLS:Unsigned Multiply Long</a>
  AMED_AARCH32_PAGE_UQADD16, //!< <a href="../target/aarch32/UQADD16.html">UQADD16:Unsigned Saturating Add 16</a>
  AMED_AARCH32_PAGE_UQADD8, //!< <a href="../target/aarch32/UQADD8.html">UQADD8:Unsigned Saturating Add 8</a>
  AMED_AARCH32_PAGE_UQASX, //!< <a href="../target/aarch32/UQASX.html">UQASX:Unsigned Saturating Add and Subtract with Exchange</a>
  AMED_AARCH32_PAGE_UQSAX, //!< <a href="../target/aarch32/UQSAX.html">UQSAX:Unsigned Saturating Subtract and Add with Exchange</a>
  AMED_AARCH32_PAGE_UQSUB16, //!< <a href="../target/aarch32/UQSUB16.html">UQSUB16:Unsigned Saturating Subtract 16</a>
  AMED_AARCH32_PAGE_UQSUB8, //!< <a href="../target/aarch32/UQSUB8.html">UQSUB8:Unsigned Saturating Subtract 8</a>
  AMED_AARCH32_PAGE_USAD8, //!< <a href="../target/aarch32/USAD8.html">USAD8:Unsigned Sum of Absolute Differences</a>
  AMED_AARCH32_PAGE_USADA8, //!< <a href="../target/aarch32/USADA8.html">USADA8:Unsigned Sum of Absolute Differences and Accumulate</a>
  AMED_AARCH32_PAGE_USAT, //!< <a href="../target/aarch32/USAT.html">USAT:Unsigned Saturate</a>
  AMED_AARCH32_PAGE_USAT16, //!< <a href="../target/aarch32/USAT16.html">USAT16:Unsigned Saturate 16</a>
  AMED_AARCH32_PAGE_USAX, //!< <a href="../target/aarch32/USAX.html">USAX:Unsigned Subtract and Add with Exchange</a>
  AMED_AARCH32_PAGE_USUB16, //!< <a href="../target/aarch32/USUB16.html">USUB16:Unsigned Subtract 16</a>
  AMED_AARCH32_PAGE_USUB8, //!< <a href="../target/aarch32/USUB8.html">USUB8:Unsigned Subtract 8</a>
  AMED_AARCH32_PAGE_UXTAB, //!< <a href="../target/aarch32/UXTAB.html">UXTAB:Unsigned Extend and Add Byte</a>
  AMED_AARCH32_PAGE_UXTAB16, //!< <a href="../target/aarch32/UXTAB16.html">UXTAB16:Unsigned Extend and Add Byte 16</a>
  AMED_AARCH32_PAGE_UXTAH, //!< <a href="../target/aarch32/UXTAH.html">UXTAH:Unsigned Extend and Add Halfword</a>
  AMED_AARCH32_PAGE_UXTB, //!< <a href="../target/aarch32/UXTB.html">UXTB:Unsigned Extend Byte</a>
  AMED_AARCH32_PAGE_UXTB16, //!< <a href="../target/aarch32/UXTB16.html">UXTB16:Unsigned Extend Byte 16</a>
  AMED_AARCH32_PAGE_UXTH, //!< <a href="../target/aarch32/UXTH.html">UXTH:Unsigned Extend Halfword</a>
  AMED_AARCH32_PAGE_WFE, //!< <a href="../target/aarch32/WFE.html">WFE:Wait For Event</a>
  AMED_AARCH32_PAGE_WFI, //!< <a href="../target/aarch32/WFI.html">WFI:Wait For Interrupt</a>
  AMED_AARCH32_PAGE_YIELD, //!< <a href="../target/aarch32/YIELD.html">YIELD:Yield hint</a>
  AMED_AARCH32_PAGE_ADD_ADR, //!< <a href="../target/aarch32/ADD_ADR.html">ADD (immediate, to PC):Add to PC</a>
  AMED_AARCH32_PAGE_ASR_MOV_r, //!< <a href="../target/aarch32/ASR_MOV_r.html">ASR (immediate):Arithmetic Shift Right (immediate)</a>
  AMED_AARCH32_PAGE_ASR_MOV_rr, //!< <a href="../target/aarch32/ASR_MOV_rr.html">ASR (register):Arithmetic Shift Right (register)</a>
  AMED_AARCH32_PAGE_ASRS_MOV_r, //!< <a href="../target/aarch32/ASRS_MOV_r.html">ASRS (immediate):Arithmetic Shift Right, setting flags (immediate)</a>
  AMED_AARCH32_PAGE_ASRS_MOV_rr, //!< <a href="../target/aarch32/ASRS_MOV_rr.html">ASRS (register):Arithmetic Shift Right, setting flags (register)</a>
  AMED_AARCH32_PAGE_LSL_MOV_r, //!< <a href="../target/aarch32/LSL_MOV_r.html">LSL (immediate):Logical Shift Left (immediate)</a>
  AMED_AARCH32_PAGE_LSL_MOV_rr, //!< <a href="../target/aarch32/LSL_MOV_rr.html">LSL (register):Logical Shift Left (register)</a>
  AMED_AARCH32_PAGE_LSLS_MOV_r, //!< <a href="../target/aarch32/LSLS_MOV_r.html">LSLS (immediate):Logical Shift Left, setting flags (immediate)</a>
  AMED_AARCH32_PAGE_LSLS_MOV_rr, //!< <a href="../target/aarch32/LSLS_MOV_rr.html">LSLS (register):Logical Shift Left, setting flags (register)</a>
  AMED_AARCH32_PAGE_LSR_MOV_r, //!< <a href="../target/aarch32/LSR_MOV_r.html">LSR (immediate):Logical Shift Right (immediate)</a>
  AMED_AARCH32_PAGE_LSR_MOV_rr, //!< <a href="../target/aarch32/LSR_MOV_rr.html">LSR (register):Logical Shift Right (register)</a>
  AMED_AARCH32_PAGE_LSRS_MOV_r, //!< <a href="../target/aarch32/LSRS_MOV_r.html">LSRS (immediate):Logical Shift Right, setting flags (immediate)</a>
  AMED_AARCH32_PAGE_LSRS_MOV_rr, //!< <a href="../target/aarch32/LSRS_MOV_rr.html">LSRS (register):Logical Shift Right, setting flags (register)</a>
  AMED_AARCH32_PAGE_POP_LDM, //!< <a href="../target/aarch32/POP_LDM.html">POP (multiple registers):Pop Multiple Registers from Stack</a>
  AMED_AARCH32_PAGE_POP_LDR_i, //!< <a href="../target/aarch32/POP_LDR_i.html">POP (single register):Pop Single Register from Stack</a>
  AMED_AARCH32_PAGE_PUSH_STMDB, //!< <a href="../target/aarch32/PUSH_STMDB.html">PUSH (multiple registers):Push multiple registers to Stack</a>
  AMED_AARCH32_PAGE_PUSH_STR_i, //!< <a href="../target/aarch32/PUSH_STR_i.html">PUSH (single register):Push Single Register to Stack</a>
  AMED_AARCH32_PAGE_ROR_MOV_r, //!< <a href="../target/aarch32/ROR_MOV_r.html">ROR (immediate):Rotate Right (immediate)</a>
  AMED_AARCH32_PAGE_ROR_MOV_rr, //!< <a href="../target/aarch32/ROR_MOV_rr.html">ROR (register):Rotate Right (register)</a>
  AMED_AARCH32_PAGE_RORS_MOV_r, //!< <a href="../target/aarch32/RORS_MOV_r.html">RORS (immediate):Rotate Right, setting flags (immediate)</a>
  AMED_AARCH32_PAGE_RORS_MOV_rr, //!< <a href="../target/aarch32/RORS_MOV_rr.html">RORS (register):Rotate Right, setting flags (register)</a>
  AMED_AARCH32_PAGE_RRX_MOV_r, //!< <a href="../target/aarch32/RRX_MOV_r.html">RRX:Rotate Right with Extend</a>
  AMED_AARCH32_PAGE_RRXS_MOV_r, //!< <a href="../target/aarch32/RRXS_MOV_r.html">RRXS:Rotate Right with Extend, setting flags</a>
  AMED_AARCH32_PAGE_SUB_ADR, //!< <a href="../target/aarch32/SUB_ADR.html">SUB (immediate, from PC):Subtract from PC</a>
  AMED_AARCH32_PAGE_AESD, //!< <a href="../target/aarch32/AESD.html">AESD:AES single round decryption</a>
  AMED_AARCH32_PAGE_AESE, //!< <a href="../target/aarch32/AESE.html">AESE:AES single round encryption</a>
  AMED_AARCH32_PAGE_AESIMC, //!< <a href="../target/aarch32/AESIMC.html">AESIMC:AES inverse mix columns</a>
  AMED_AARCH32_PAGE_AESMC, //!< <a href="../target/aarch32/AESMC.html">AESMC:AES mix columns</a>
  AMED_AARCH32_PAGE_FLDMX, //!< <a href="../target/aarch32/FLDMX.html">FLDM*X (FLDMDBX, FLDMIAX):FLDM*X</a>
  AMED_AARCH32_PAGE_FSTMX, //!< <a href="../target/aarch32/FSTMX.html">FSTMDBX, FSTMIAX:FSTMX</a>
  AMED_AARCH32_PAGE_SHA1C, //!< <a href="../target/aarch32/SHA1C.html">SHA1C:SHA1 hash update (choose)</a>
  AMED_AARCH32_PAGE_SHA1H, //!< <a href="../target/aarch32/SHA1H.html">SHA1H:SHA1 fixed rotate</a>
  AMED_AARCH32_PAGE_SHA1M, //!< <a href="../target/aarch32/SHA1M.html">SHA1M:SHA1 hash update (majority)</a>
  AMED_AARCH32_PAGE_SHA1P, //!< <a href="../target/aarch32/SHA1P.html">SHA1P:SHA1 hash update (parity)</a>
  AMED_AARCH32_PAGE_SHA1SU0, //!< <a href="../target/aarch32/SHA1SU0.html">SHA1SU0:SHA1 schedule update 0</a>
  AMED_AARCH32_PAGE_SHA1SU1, //!< <a href="../target/aarch32/SHA1SU1.html">SHA1SU1:SHA1 schedule update 1</a>
  AMED_AARCH32_PAGE_SHA256H, //!< <a href="../target/aarch32/SHA256H.html">SHA256H:SHA256 hash update part 1</a>
  AMED_AARCH32_PAGE_SHA256H2, //!< <a href="../target/aarch32/SHA256H2.html">SHA256H2:SHA256 hash update part 2</a>
  AMED_AARCH32_PAGE_SHA256SU0, //!< <a href="../target/aarch32/SHA256SU0.html">SHA256SU0:SHA256 schedule update 0</a>
  AMED_AARCH32_PAGE_SHA256SU1, //!< <a href="../target/aarch32/SHA256SU1.html">SHA256SU1:SHA256 schedule update 1</a>
  AMED_AARCH32_PAGE_ST4_1, //!< <a href="../target/aarch32/ST4_1.html">VST4 (single 4-element structure from one lane):Store single 4-element structure from one lane of four registers</a>
  AMED_AARCH32_PAGE_VABA, //!< <a href="../target/aarch32/VABA.html">VABA:Vector Absolute Difference and Accumulate</a>
  AMED_AARCH32_PAGE_VABAL, //!< <a href="../target/aarch32/VABAL.html">VABAL:Vector Absolute Difference and Accumulate Long</a>
  AMED_AARCH32_PAGE_VABD_f, //!< <a href="../target/aarch32/VABD_f.html">VABD (floating-point):Vector Absolute Difference (floating-point)</a>
  AMED_AARCH32_PAGE_VABD_i, //!< <a href="../target/aarch32/VABD_i.html">VABD (integer):Vector Absolute Difference (integer)</a>
  AMED_AARCH32_PAGE_VABDL_i, //!< <a href="../target/aarch32/VABDL_i.html">VABDL (integer):Vector Absolute Difference Long (integer)</a>
  AMED_AARCH32_PAGE_VABS, //!< <a href="../target/aarch32/VABS.html">VABS:Vector Absolute</a>
  AMED_AARCH32_PAGE_VACGE, //!< <a href="../target/aarch32/VACGE.html">VACGE:Vector Absolute Compare Greater Than or Equal</a>
  AMED_AARCH32_PAGE_VACGT, //!< <a href="../target/aarch32/VACGT.html">VACGT:Vector Absolute Compare Greater Than</a>
  AMED_AARCH32_PAGE_VADD_f, //!< <a href="../target/aarch32/VADD_f.html">VADD (floating-point):Vector Add (floating-point)</a>
  AMED_AARCH32_PAGE_VADD_i, //!< <a href="../target/aarch32/VADD_i.html">VADD (integer):Vector Add (integer)</a>
  AMED_AARCH32_PAGE_VADDHN, //!< <a href="../target/aarch32/VADDHN.html">VADDHN:Vector Add and Narrow, returning High Half</a>
  AMED_AARCH32_PAGE_VADDL, //!< <a href="../target/aarch32/VADDL.html">VADDL:Vector Add Long</a>
  AMED_AARCH32_PAGE_VADDW, //!< <a href="../target/aarch32/VADDW.html">VADDW:Vector Add Wide</a>
  AMED_AARCH32_PAGE_VAND_r, //!< <a href="../target/aarch32/VAND_r.html">VAND (register):Vector Bitwise AND (register)</a>
  AMED_AARCH32_PAGE_VBIC_i, //!< <a href="../target/aarch32/VBIC_i.html">VBIC (immediate):Vector Bitwise Bit Clear (immediate)</a>
  AMED_AARCH32_PAGE_VBIC_r, //!< <a href="../target/aarch32/VBIC_r.html">VBIC (register):Vector Bitwise Bit Clear (register)</a>
  AMED_AARCH32_PAGE_VBIF, //!< <a href="../target/aarch32/VBIF.html">VBIF:Vector Bitwise Insert if False</a>
  AMED_AARCH32_PAGE_VBIT, //!< <a href="../target/aarch32/VBIT.html">VBIT:Vector Bitwise Insert if True</a>
  AMED_AARCH32_PAGE_VBSL, //!< <a href="../target/aarch32/VBSL.html">VBSL:Vector Bitwise Select</a>
  AMED_AARCH32_PAGE_VCADD, //!< <a href="../target/aarch32/VCADD.html">VCADD:Vector Complex Add</a>
  AMED_AARCH32_PAGE_VCEQ_i, //!< <a href="../target/aarch32/VCEQ_i.html">VCEQ (immediate #0):Vector Compare Equal to Zero</a>
  AMED_AARCH32_PAGE_VCEQ_r, //!< <a href="../target/aarch32/VCEQ_r.html">VCEQ (register):Vector Compare Equal</a>
  AMED_AARCH32_PAGE_VCGE_i, //!< <a href="../target/aarch32/VCGE_i.html">VCGE (immediate #0):Vector Compare Greater Than or Equal to Zero</a>
  AMED_AARCH32_PAGE_VCGE_r, //!< <a href="../target/aarch32/VCGE_r.html">VCGE (register):Vector Compare Greater Than or Equal</a>
  AMED_AARCH32_PAGE_VCGT_i, //!< <a href="../target/aarch32/VCGT_i.html">VCGT (immediate #0):Vector Compare Greater Than Zero</a>
  AMED_AARCH32_PAGE_VCGT_r, //!< <a href="../target/aarch32/VCGT_r.html">VCGT (register):Vector Compare Greater Than</a>
  AMED_AARCH32_PAGE_VCLE_i, //!< <a href="../target/aarch32/VCLE_i.html">VCLE (immediate #0):Vector Compare Less Than or Equal to Zero</a>
  AMED_AARCH32_PAGE_VCLS, //!< <a href="../target/aarch32/VCLS.html">VCLS:Vector Count Leading Sign Bits</a>
  AMED_AARCH32_PAGE_VCLT_i, //!< <a href="../target/aarch32/VCLT_i.html">VCLT (immediate #0):Vector Compare Less Than Zero</a>
  AMED_AARCH32_PAGE_VCLZ, //!< <a href="../target/aarch32/VCLZ.html">VCLZ:Vector Count Leading Zeros</a>
  AMED_AARCH32_PAGE_VCMLA, //!< <a href="../target/aarch32/VCMLA.html">VCMLA:Vector Complex Multiply Accumulate</a>
  AMED_AARCH32_PAGE_VCMLA_s, //!< <a href="../target/aarch32/VCMLA_s.html">VCMLA (by element):Vector Complex Multiply Accumulate (by element)</a>
  AMED_AARCH32_PAGE_VCMP, //!< <a href="../target/aarch32/VCMP.html">VCMP:Vector Compare</a>
  AMED_AARCH32_PAGE_VCMPE, //!< <a href="../target/aarch32/VCMPE.html">VCMPE:Vector Compare, raising Invalid Operation on NaN</a>
  AMED_AARCH32_PAGE_VCNT, //!< <a href="../target/aarch32/VCNT.html">VCNT:Vector Count Set Bits</a>
  AMED_AARCH32_PAGE_VCVT_bfs, //!< <a href="../target/aarch32/VCVT_bfs.html">VCVT (from single-precision to BFloat16, Advanced SIMD):Vector Convert from single-precision to BFloat16</a>
  AMED_AARCH32_PAGE_VCVT_ds, //!< <a href="../target/aarch32/VCVT_ds.html">VCVT (between double-precision and single-precision):Convert between double-precision and single-precision</a>
  AMED_AARCH32_PAGE_VCVT_hs, //!< <a href="../target/aarch32/VCVT_hs.html">VCVT (between half-precision and single-precision, Advanced SIMD):Vector Convert between half-precision and single-precision</a>
  AMED_AARCH32_PAGE_VCVT_is, //!< <a href="../target/aarch32/VCVT_is.html">VCVT (between floating-point and integer, Advanced SIMD):Vector Convert between floating-point and integer</a>
  AMED_AARCH32_PAGE_VCVT_iv, //!< <a href="../target/aarch32/VCVT_iv.html">VCVT (floating-point to integer, floating-point):Convert floating-point to integer with Round towards Zero</a>
  AMED_AARCH32_PAGE_VCVT_vi, //!< <a href="../target/aarch32/VCVT_vi.html">VCVT (integer to floating-point, floating-point):Convert integer to floating-point</a>
  AMED_AARCH32_PAGE_VCVT_xs, //!< <a href="../target/aarch32/VCVT_xs.html">VCVT (between floating-point and fixed-point, Advanced SIMD):Vector Convert between floating-point and fixed-point</a>
  AMED_AARCH32_PAGE_VCVT_xv, //!< <a href="../target/aarch32/VCVT_xv.html">VCVT (between floating-point and fixed-point, floating-point):Convert between floating-point and fixed-point</a>
  AMED_AARCH32_PAGE_VCVTA_asimd, //!< <a href="../target/aarch32/VCVTA_asimd.html">VCVTA (Advanced SIMD):Vector Convert floating-point to integer with Round to Nearest with Ties to Away</a>
  AMED_AARCH32_PAGE_VCVTA_vfp, //!< <a href="../target/aarch32/VCVTA_vfp.html">VCVTA (floating-point):Convert floating-point to integer with Round to Nearest with Ties to Away</a>
  AMED_AARCH32_PAGE_VCVTB, //!< <a href="../target/aarch32/VCVTB.html">VCVTB:Convert to or from a half-precision value in the bottom half of a single-precision register</a>
  AMED_AARCH32_PAGE_VCVTB_bfs, //!< <a href="../target/aarch32/VCVTB_bfs.html">VCVTB (BFloat16):Converts from a single-precision value to a BFloat16 value in the bottom half of a single-precision register</a>
  AMED_AARCH32_PAGE_VCVTM_asimd, //!< <a href="../target/aarch32/VCVTM_asimd.html">VCVTM (Advanced SIMD):Vector Convert floating-point to integer with Round towards -Infinity</a>
  AMED_AARCH32_PAGE_VCVTM_vfp, //!< <a href="../target/aarch32/VCVTM_vfp.html">VCVTM (floating-point):Convert floating-point to integer with Round towards -Infinity</a>
  AMED_AARCH32_PAGE_VCVTN_asimd, //!< <a href="../target/aarch32/VCVTN_asimd.html">VCVTN (Advanced SIMD):Vector Convert floating-point to integer with Round to Nearest</a>
  AMED_AARCH32_PAGE_VCVTN_vfp, //!< <a href="../target/aarch32/VCVTN_vfp.html">VCVTN (floating-point):Convert floating-point to integer with Round to Nearest</a>
  AMED_AARCH32_PAGE_VCVTP_asimd, //!< <a href="../target/aarch32/VCVTP_asimd.html">VCVTP (Advanced SIMD):Vector Convert floating-point to integer with Round towards +Infinity</a>
  AMED_AARCH32_PAGE_VCVTP_vfp, //!< <a href="../target/aarch32/VCVTP_vfp.html">VCVTP (floating-point):Convert floating-point to integer with Round towards +Infinity</a>
  AMED_AARCH32_PAGE_VCVTR_iv, //!< <a href="../target/aarch32/VCVTR_iv.html">VCVTR:Convert floating-point to integer</a>
  AMED_AARCH32_PAGE_VCVTT, //!< <a href="../target/aarch32/VCVTT.html">VCVTT:Convert to or from a half-precision value in the top half of a single-precision register</a>
  AMED_AARCH32_PAGE_VCVTT_bfs, //!< <a href="../target/aarch32/VCVTT_bfs.html">VCVTT (BFloat16):Converts from a single-precision value to a BFloat16 value in the top half of a single-precision register.</a>
  AMED_AARCH32_PAGE_VDIV, //!< <a href="../target/aarch32/VDIV.html">VDIV:Divide</a>
  AMED_AARCH32_PAGE_VDOT, //!< <a href="../target/aarch32/VDOT.html">VDOT (vector):BFloat16 floating-point (BF16) dot product (vector)</a>
  AMED_AARCH32_PAGE_VDOT_s, //!< <a href="../target/aarch32/VDOT_s.html">VDOT (by element):BFloat16 floating-point indexed dot product (vector, by element)</a>
  AMED_AARCH32_PAGE_VDUP_r, //!< <a href="../target/aarch32/VDUP_r.html">VDUP (general-purpose register):Duplicate general-purpose register to vector</a>
  AMED_AARCH32_PAGE_VDUP_s, //!< <a href="../target/aarch32/VDUP_s.html">VDUP (scalar):Duplicate vector element to vector</a>
  AMED_AARCH32_PAGE_VEOR, //!< <a href="../target/aarch32/VEOR.html">VEOR:Vector Bitwise Exclusive OR</a>
  AMED_AARCH32_PAGE_VEXT, //!< <a href="../target/aarch32/VEXT.html">VEXT (byte elements):Vector Extract</a>
  AMED_AARCH32_PAGE_VFMA, //!< <a href="../target/aarch32/VFMA.html">VFMA:Vector Fused Multiply Accumulate</a>
  AMED_AARCH32_PAGE_VFMA_bf, //!< <a href="../target/aarch32/VFMA_bf.html">VFMAB, VFMAT (BFloat16, vector):BFloat16 floating-point widening multiply-add long (vector)</a>
  AMED_AARCH32_PAGE_VFMA_bfs, //!< <a href="../target/aarch32/VFMA_bfs.html">VFMAB, VFMAT (BFloat16, by scalar):BFloat16 floating-point widening multiply-add long (by scalar)</a>
  AMED_AARCH32_PAGE_VFMAL, //!< <a href="../target/aarch32/VFMAL.html">VFMAL (vector):Vector Floating-point Multiply-Add Long to accumulator (vector)</a>
  AMED_AARCH32_PAGE_VFMAL_s, //!< <a href="../target/aarch32/VFMAL_s.html">VFMAL (by scalar):Vector Floating-point Multiply-Add Long to accumulator (by scalar)</a>
  AMED_AARCH32_PAGE_VFMS, //!< <a href="../target/aarch32/VFMS.html">VFMS:Vector Fused Multiply Subtract</a>
  AMED_AARCH32_PAGE_VFMSL, //!< <a href="../target/aarch32/VFMSL.html">VFMSL (vector):Vector Floating-point Multiply-Subtract Long from accumulator (vector)</a>
  AMED_AARCH32_PAGE_VFMSL_s, //!< <a href="../target/aarch32/VFMSL_s.html">VFMSL (by scalar):Vector Floating-point Multiply-Subtract Long from accumulator (by scalar)</a>
  AMED_AARCH32_PAGE_VFNMA, //!< <a href="../target/aarch32/VFNMA.html">VFNMA:Vector Fused Negate Multiply Accumulate</a>
  AMED_AARCH32_PAGE_VFNMS, //!< <a href="../target/aarch32/VFNMS.html">VFNMS:Vector Fused Negate Multiply Subtract</a>
  AMED_AARCH32_PAGE_VHADD, //!< <a href="../target/aarch32/VHADD.html">VHADD:Vector Halving Add</a>
  AMED_AARCH32_PAGE_VHSUB, //!< <a href="../target/aarch32/VHSUB.html">VHSUB:Vector Halving Subtract</a>
  AMED_AARCH32_PAGE_VINS, //!< <a href="../target/aarch32/VINS.html">VINS:Vector move Insertion</a>
  AMED_AARCH32_PAGE_VJCVT, //!< <a href="../target/aarch32/VJCVT.html">VJCVT:Javascript Convert to signed fixed-point, rounding toward Zero</a>
  AMED_AARCH32_PAGE_VLD1_1, //!< <a href="../target/aarch32/VLD1_1.html">VLD1 (single element to one lane):Load single 1-element structure to one lane of one register</a>
  AMED_AARCH32_PAGE_VLD1_a, //!< <a href="../target/aarch32/VLD1_a.html">VLD1 (single element to all lanes):Load single 1-element structure and replicate to all lanes of one register</a>
  AMED_AARCH32_PAGE_VLD1_m, //!< <a href="../target/aarch32/VLD1_m.html">VLD1 (multiple single elements):Load multiple single 1-element structures to one, two, three, or four registers</a>
  AMED_AARCH32_PAGE_VLD2_1, //!< <a href="../target/aarch32/VLD2_1.html">VLD2 (single 2-element structure to one lane):Load single 2-element structure to one lane of two registers</a>
  AMED_AARCH32_PAGE_VLD2_a, //!< <a href="../target/aarch32/VLD2_a.html">VLD2 (single 2-element structure to all lanes):Load single 2-element structure and replicate to all lanes of two registers</a>
  AMED_AARCH32_PAGE_VLD2_m, //!< <a href="../target/aarch32/VLD2_m.html">VLD2 (multiple 2-element structures):Load multiple 2-element structures to two or four registers</a>
  AMED_AARCH32_PAGE_VLD3_1, //!< <a href="../target/aarch32/VLD3_1.html">VLD3 (single 3-element structure to one lane):Load single 3-element structure to one lane of three registers</a>
  AMED_AARCH32_PAGE_VLD3_a, //!< <a href="../target/aarch32/VLD3_a.html">VLD3 (single 3-element structure to all lanes):Load single 3-element structure and replicate to all lanes of three registers</a>
  AMED_AARCH32_PAGE_VLD3_m, //!< <a href="../target/aarch32/VLD3_m.html">VLD3 (multiple 3-element structures):Load multiple 3-element structures to three registers</a>
  AMED_AARCH32_PAGE_VLD4_1, //!< <a href="../target/aarch32/VLD4_1.html">VLD4 (single 4-element structure to one lane):Load single 4-element structure to one lane of four registers</a>
  AMED_AARCH32_PAGE_VLD4_a, //!< <a href="../target/aarch32/VLD4_a.html">VLD4 (single 4-element structure to all lanes):Load single 4-element structure and replicate to all lanes of four registers</a>
  AMED_AARCH32_PAGE_VLD4_m, //!< <a href="../target/aarch32/VLD4_m.html">VLD4 (multiple 4-element structures):Load multiple 4-element structures to four registers</a>
  AMED_AARCH32_PAGE_VLDM, //!< <a href="../target/aarch32/VLDM.html">VLDM, VLDMDB, VLDMIA:Load Multiple SIMD&FP registers</a>
  AMED_AARCH32_PAGE_VLDR_i, //!< <a href="../target/aarch32/VLDR_i.html">VLDR (immediate):Load SIMD&FP register (immediate)</a>
  AMED_AARCH32_PAGE_VLDR_l, //!< <a href="../target/aarch32/VLDR_l.html">VLDR (literal):Load SIMD&FP register (literal)</a>
  AMED_AARCH32_PAGE_VMAX_f, //!< <a href="../target/aarch32/VMAX_f.html">VMAX (floating-point):Vector Maximum (floating-point)</a>
  AMED_AARCH32_PAGE_VMAX_i, //!< <a href="../target/aarch32/VMAX_i.html">VMAX (integer):Vector Maximum (integer)</a>
  AMED_AARCH32_PAGE_VMAXNM, //!< <a href="../target/aarch32/VMAXNM.html">VMAXNM:Floating-point Maximum Number</a>
  AMED_AARCH32_PAGE_VMIN_f, //!< <a href="../target/aarch32/VMIN_f.html">VMIN (floating-point):Vector Minimum (floating-point)</a>
  AMED_AARCH32_PAGE_VMIN_i, //!< <a href="../target/aarch32/VMIN_i.html">VMIN (integer):Vector Minimum (integer)</a>
  AMED_AARCH32_PAGE_VMINNM, //!< <a href="../target/aarch32/VMINNM.html">VMINNM:Floating-point Minimum Number</a>
  AMED_AARCH32_PAGE_VMLA_f, //!< <a href="../target/aarch32/VMLA_f.html">VMLA (floating-point):Vector Multiply Accumulate (floating-point)</a>
  AMED_AARCH32_PAGE_VMLA_i, //!< <a href="../target/aarch32/VMLA_i.html">VMLA (integer):Vector Multiply Accumulate (integer)</a>
  AMED_AARCH32_PAGE_VMLA_s, //!< <a href="../target/aarch32/VMLA_s.html">VMLA (by scalar):Vector Multiply Accumulate (by scalar)</a>
  AMED_AARCH32_PAGE_VMLAL_i, //!< <a href="../target/aarch32/VMLAL_i.html">VMLAL (integer):Vector Multiply Accumulate Long (integer)</a>
  AMED_AARCH32_PAGE_VMLAL_s, //!< <a href="../target/aarch32/VMLAL_s.html">VMLAL (by scalar):Vector Multiply Accumulate Long (by scalar)</a>
  AMED_AARCH32_PAGE_VMLS_f, //!< <a href="../target/aarch32/VMLS_f.html">VMLS (floating-point):Vector Multiply Subtract (floating-point)</a>
  AMED_AARCH32_PAGE_VMLS_i, //!< <a href="../target/aarch32/VMLS_i.html">VMLS (integer):Vector Multiply Subtract (integer)</a>
  AMED_AARCH32_PAGE_VMLS_s, //!< <a href="../target/aarch32/VMLS_s.html">VMLS (by scalar):Vector Multiply Subtract (by scalar)</a>
  AMED_AARCH32_PAGE_VMLSL_i, //!< <a href="../target/aarch32/VMLSL_i.html">VMLSL (integer):Vector Multiply Subtract Long (integer)</a>
  AMED_AARCH32_PAGE_VMLSL_s, //!< <a href="../target/aarch32/VMLSL_s.html">VMLSL (by scalar):Vector Multiply Subtract Long (by scalar)</a>
  AMED_AARCH32_PAGE_VMMLA, //!< <a href="../target/aarch32/VMMLA.html">VMMLA:BFloat16 floating-point matrix multiply-accumulate</a>
  AMED_AARCH32_PAGE_VMOV_d, //!< <a href="../target/aarch32/VMOV_d.html">VMOV (between two general-purpose registers and a doubleword floating-point register):Copy two general-purpose registers to or from a SIMD&FP register</a>
  AMED_AARCH32_PAGE_VMOV_h, //!< <a href="../target/aarch32/VMOV_h.html">VMOV (between general-purpose register and half-precision):Copy 16 bits of a general-purpose register to or from a 32-bit SIMD&FP register</a>
  AMED_AARCH32_PAGE_VMOV_i, //!< <a href="../target/aarch32/VMOV_i.html">VMOV (immediate):Copy immediate value to a SIMD&FP register</a>
  AMED_AARCH32_PAGE_VMOV_r, //!< <a href="../target/aarch32/VMOV_r.html">VMOV (register):Copy between FP registers</a>
  AMED_AARCH32_PAGE_VMOV_rs, //!< <a href="../target/aarch32/VMOV_rs.html">VMOV (general-purpose register to scalar):Copy a general-purpose register to a vector element</a>
  AMED_AARCH32_PAGE_VMOV_s, //!< <a href="../target/aarch32/VMOV_s.html">VMOV (between general-purpose register and single-precision):Copy a general-purpose register to or from a 32-bit SIMD&FP register</a>
  AMED_AARCH32_PAGE_VMOV_sr, //!< <a href="../target/aarch32/VMOV_sr.html">VMOV (scalar to general-purpose register):Copy a vector element to a general-purpose register with sign or zero extension</a>
  AMED_AARCH32_PAGE_VMOV_ss, //!< <a href="../target/aarch32/VMOV_ss.html">VMOV (between two general-purpose registers and two single-precision registers):Copy two general-purpose registers to a pair of 32-bit SIMD&FP registers</a>
  AMED_AARCH32_PAGE_VMOVL, //!< <a href="../target/aarch32/VMOVL.html">VMOVL:Vector Move Long</a>
  AMED_AARCH32_PAGE_VMOVN, //!< <a href="../target/aarch32/VMOVN.html">VMOVN:Vector Move and Narrow</a>
  AMED_AARCH32_PAGE_VMOVX, //!< <a href="../target/aarch32/VMOVX.html">VMOVX:Vector Move extraction</a>
  AMED_AARCH32_PAGE_VMRS, //!< <a href="../target/aarch32/VMRS.html">VMRS:Move SIMD&FP Special register to general-purpose register</a>
  AMED_AARCH32_PAGE_VMSR, //!< <a href="../target/aarch32/VMSR.html">VMSR:Move general-purpose register to SIMD&FP Special register</a>
  AMED_AARCH32_PAGE_VMUL_f, //!< <a href="../target/aarch32/VMUL_f.html">VMUL (floating-point):Vector Multiply (floating-point)</a>
  AMED_AARCH32_PAGE_VMUL_i, //!< <a href="../target/aarch32/VMUL_i.html">VMUL (integer and polynomial):Vector Multiply (integer and polynomial)</a>
  AMED_AARCH32_PAGE_VMUL_s, //!< <a href="../target/aarch32/VMUL_s.html">VMUL (by scalar):Vector Multiply (by scalar)</a>
  AMED_AARCH32_PAGE_VMULL_i, //!< <a href="../target/aarch32/VMULL_i.html">VMULL (integer and polynomial):Vector Multiply Long (integer and polynomial)</a>
  AMED_AARCH32_PAGE_VMULL_s, //!< <a href="../target/aarch32/VMULL_s.html">VMULL (by scalar):Vector Multiply Long (by scalar)</a>
  AMED_AARCH32_PAGE_VMVN_i, //!< <a href="../target/aarch32/VMVN_i.html">VMVN (immediate):Vector Bitwise NOT (immediate)</a>
  AMED_AARCH32_PAGE_VMVN_r, //!< <a href="../target/aarch32/VMVN_r.html">VMVN (register):Vector Bitwise NOT (register)</a>
  AMED_AARCH32_PAGE_VNEG, //!< <a href="../target/aarch32/VNEG.html">VNEG:Vector Negate</a>
  AMED_AARCH32_PAGE_VNMLA, //!< <a href="../target/aarch32/VNMLA.html">VNMLA:Vector Negate Multiply Accumulate</a>
  AMED_AARCH32_PAGE_VNMLS, //!< <a href="../target/aarch32/VNMLS.html">VNMLS:Vector Negate Multiply Subtract</a>
  AMED_AARCH32_PAGE_VNMUL, //!< <a href="../target/aarch32/VNMUL.html">VNMUL:Vector Negate Multiply</a>
  AMED_AARCH32_PAGE_VORN_r, //!< <a href="../target/aarch32/VORN_r.html">VORN (register):Vector bitwise OR NOT (register)</a>
  AMED_AARCH32_PAGE_VORR_i, //!< <a href="../target/aarch32/VORR_i.html">VORR (immediate):Vector Bitwise OR (immediate)</a>
  AMED_AARCH32_PAGE_VORR_r, //!< <a href="../target/aarch32/VORR_r.html">VORR (register):Vector bitwise OR (register)</a>
  AMED_AARCH32_PAGE_VPADAL, //!< <a href="../target/aarch32/VPADAL.html">VPADAL:Vector Pairwise Add and Accumulate Long</a>
  AMED_AARCH32_PAGE_VPADD_f, //!< <a href="../target/aarch32/VPADD_f.html">VPADD (floating-point):Vector Pairwise Add (floating-point)</a>
  AMED_AARCH32_PAGE_VPADD_i, //!< <a href="../target/aarch32/VPADD_i.html">VPADD (integer):Vector Pairwise Add (integer)</a>
  AMED_AARCH32_PAGE_VPADDL, //!< <a href="../target/aarch32/VPADDL.html">VPADDL:Vector Pairwise Add Long</a>
  AMED_AARCH32_PAGE_VPMAX_f, //!< <a href="../target/aarch32/VPMAX_f.html">VPMAX (floating-point):Vector Pairwise Maximum (floating-point)</a>
  AMED_AARCH32_PAGE_VPMAX_i, //!< <a href="../target/aarch32/VPMAX_i.html">VPMAX (integer):Vector Pairwise Maximum (integer)</a>
  AMED_AARCH32_PAGE_VPMIN_f, //!< <a href="../target/aarch32/VPMIN_f.html">VPMIN (floating-point):Vector Pairwise Minimum (floating-point)</a>
  AMED_AARCH32_PAGE_VPMIN_i, //!< <a href="../target/aarch32/VPMIN_i.html">VPMIN (integer):Vector Pairwise Minimum (integer)</a>
  AMED_AARCH32_PAGE_VQABS, //!< <a href="../target/aarch32/VQABS.html">VQABS:Vector Saturating Absolute</a>
  AMED_AARCH32_PAGE_VQADD, //!< <a href="../target/aarch32/VQADD.html">VQADD:Vector Saturating Add</a>
  AMED_AARCH32_PAGE_VQDMLAL, //!< <a href="../target/aarch32/VQDMLAL.html">VQDMLAL:Vector Saturating Doubling Multiply Accumulate Long</a>
  AMED_AARCH32_PAGE_VQDMLSL, //!< <a href="../target/aarch32/VQDMLSL.html">VQDMLSL:Vector Saturating Doubling Multiply Subtract Long</a>
  AMED_AARCH32_PAGE_VQDMULH, //!< <a href="../target/aarch32/VQDMULH.html">VQDMULH:Vector Saturating Doubling Multiply Returning High Half</a>
  AMED_AARCH32_PAGE_VQDMULL, //!< <a href="../target/aarch32/VQDMULL.html">VQDMULL:Vector Saturating Doubling Multiply Long</a>
  AMED_AARCH32_PAGE_VQMOVN, //!< <a href="../target/aarch32/VQMOVN.html">VQMOVN, VQMOVUN:Vector Saturating Move and Narrow</a>
  AMED_AARCH32_PAGE_VQNEG, //!< <a href="../target/aarch32/VQNEG.html">VQNEG:Vector Saturating Negate</a>
  AMED_AARCH32_PAGE_VQRDMLAH, //!< <a href="../target/aarch32/VQRDMLAH.html">VQRDMLAH:Vector Saturating Rounding Doubling Multiply Accumulate Returning High Half</a>
  AMED_AARCH32_PAGE_VQRDMLSH, //!< <a href="../target/aarch32/VQRDMLSH.html">VQRDMLSH:Vector Saturating Rounding Doubling Multiply Subtract Returning High Half</a>
  AMED_AARCH32_PAGE_VQRDMULH, //!< <a href="../target/aarch32/VQRDMULH.html">VQRDMULH:Vector Saturating Rounding Doubling Multiply Returning High Half</a>
  AMED_AARCH32_PAGE_VQRSHL, //!< <a href="../target/aarch32/VQRSHL.html">VQRSHL:Vector Saturating Rounding Shift Left</a>
  AMED_AARCH32_PAGE_VQRSHRN, //!< <a href="../target/aarch32/VQRSHRN.html">VQRSHRN, VQRSHRUN:Vector Saturating Rounding Shift Right, Narrow</a>
  AMED_AARCH32_PAGE_VQSHL_i, //!< <a href="../target/aarch32/VQSHL_i.html">VQSHL, VQSHLU (immediate):Vector Saturating Shift Left (immediate)</a>
  AMED_AARCH32_PAGE_VQSHL_r, //!< <a href="../target/aarch32/VQSHL_r.html">VQSHL (register):Vector Saturating Shift Left (register)</a>
  AMED_AARCH32_PAGE_VQSHRN, //!< <a href="../target/aarch32/VQSHRN.html">VQSHRN, VQSHRUN:Vector Saturating Shift Right, Narrow</a>
  AMED_AARCH32_PAGE_VQSUB, //!< <a href="../target/aarch32/VQSUB.html">VQSUB:Vector Saturating Subtract</a>
  AMED_AARCH32_PAGE_VRADDHN, //!< <a href="../target/aarch32/VRADDHN.html">VRADDHN:Vector Rounding Add and Narrow, returning High Half</a>
  AMED_AARCH32_PAGE_VRECPE, //!< <a href="../target/aarch32/VRECPE.html">VRECPE:Vector Reciprocal Estimate</a>
  AMED_AARCH32_PAGE_VRECPS, //!< <a href="../target/aarch32/VRECPS.html">VRECPS:Vector Reciprocal Step</a>
  AMED_AARCH32_PAGE_VREV16, //!< <a href="../target/aarch32/VREV16.html">VREV16:Vector Reverse in halfwords</a>
  AMED_AARCH32_PAGE_VREV32, //!< <a href="../target/aarch32/VREV32.html">VREV32:Vector Reverse in words</a>
  AMED_AARCH32_PAGE_VREV64, //!< <a href="../target/aarch32/VREV64.html">VREV64:Vector Reverse in doublewords</a>
  AMED_AARCH32_PAGE_VRHADD, //!< <a href="../target/aarch32/VRHADD.html">VRHADD:Vector Rounding Halving Add</a>
  AMED_AARCH32_PAGE_VRINTA_asimd, //!< <a href="../target/aarch32/VRINTA_asimd.html">VRINTA (Advanced SIMD):Vector Round floating-point to integer towards Nearest with Ties to Away</a>
  AMED_AARCH32_PAGE_VRINTA_vfp, //!< <a href="../target/aarch32/VRINTA_vfp.html">VRINTA (floating-point):Round floating-point to integer to Nearest with Ties to Away</a>
  AMED_AARCH32_PAGE_VRINTM_asimd, //!< <a href="../target/aarch32/VRINTM_asimd.html">VRINTM (Advanced SIMD):Vector Round floating-point to integer towards -Infinity</a>
  AMED_AARCH32_PAGE_VRINTM_vfp, //!< <a href="../target/aarch32/VRINTM_vfp.html">VRINTM (floating-point):Round floating-point to integer towards -Infinity</a>
  AMED_AARCH32_PAGE_VRINTN_asimd, //!< <a href="../target/aarch32/VRINTN_asimd.html">VRINTN (Advanced SIMD):Vector Round floating-point to integer to Nearest</a>
  AMED_AARCH32_PAGE_VRINTN_vfp, //!< <a href="../target/aarch32/VRINTN_vfp.html">VRINTN (floating-point):Round floating-point to integer to Nearest</a>
  AMED_AARCH32_PAGE_VRINTP_asimd, //!< <a href="../target/aarch32/VRINTP_asimd.html">VRINTP (Advanced SIMD):Vector Round floating-point to integer towards +Infinity</a>
  AMED_AARCH32_PAGE_VRINTP_vfp, //!< <a href="../target/aarch32/VRINTP_vfp.html">VRINTP (floating-point):Round floating-point to integer towards +Infinity</a>
  AMED_AARCH32_PAGE_VRINTR_vfp, //!< <a href="../target/aarch32/VRINTR_vfp.html">VRINTR:Round floating-point to integer</a>
  AMED_AARCH32_PAGE_VRINTX_asimd, //!< <a href="../target/aarch32/VRINTX_asimd.html">VRINTX (Advanced SIMD):Vector round floating-point to integer inexact</a>
  AMED_AARCH32_PAGE_VRINTX_vfp, //!< <a href="../target/aarch32/VRINTX_vfp.html">VRINTX (floating-point):Round floating-point to integer inexact</a>
  AMED_AARCH32_PAGE_VRINTZ_asimd, //!< <a href="../target/aarch32/VRINTZ_asimd.html">VRINTZ (Advanced SIMD):Vector round floating-point to integer towards Zero</a>
  AMED_AARCH32_PAGE_VRINTZ_vfp, //!< <a href="../target/aarch32/VRINTZ_vfp.html">VRINTZ (floating-point):Round floating-point to integer towards Zero</a>
  AMED_AARCH32_PAGE_VRSHL, //!< <a href="../target/aarch32/VRSHL.html">VRSHL:Vector Rounding Shift Left</a>
  AMED_AARCH32_PAGE_VRSHR, //!< <a href="../target/aarch32/VRSHR.html">VRSHR:Vector Rounding Shift Right</a>
  AMED_AARCH32_PAGE_VRSHRN, //!< <a href="../target/aarch32/VRSHRN.html">VRSHRN:Vector Rounding Shift Right and Narrow</a>
  AMED_AARCH32_PAGE_VRSQRTE, //!< <a href="../target/aarch32/VRSQRTE.html">VRSQRTE:Vector Reciprocal Square Root Estimate</a>
  AMED_AARCH32_PAGE_VRSQRTS, //!< <a href="../target/aarch32/VRSQRTS.html">VRSQRTS:Vector Reciprocal Square Root Step</a>
  AMED_AARCH32_PAGE_VRSRA, //!< <a href="../target/aarch32/VRSRA.html">VRSRA:Vector Rounding Shift Right and Accumulate</a>
  AMED_AARCH32_PAGE_VRSUBHN, //!< <a href="../target/aarch32/VRSUBHN.html">VRSUBHN:Vector Rounding Subtract and Narrow, returning High Half</a>
  AMED_AARCH32_PAGE_VSDOT, //!< <a href="../target/aarch32/VSDOT.html">VSDOT (vector):Dot Product vector form with signed integers.</a>
  AMED_AARCH32_PAGE_VSDOT_s, //!< <a href="../target/aarch32/VSDOT_s.html">VSDOT (by element):Dot Product index form with signed integers.</a>
  AMED_AARCH32_PAGE_VSEL, //!< <a href="../target/aarch32/VSEL.html">VSELEQ, VSELGE, VSELGT, VSELVS:Floating-point conditional select</a>
  AMED_AARCH32_PAGE_VSHL_i, //!< <a href="../target/aarch32/VSHL_i.html">VSHL (immediate):Vector Shift Left (immediate)</a>
  AMED_AARCH32_PAGE_VSHL_r, //!< <a href="../target/aarch32/VSHL_r.html">VSHL (register):Vector Shift Left (register)</a>
  AMED_AARCH32_PAGE_VSHLL, //!< <a href="../target/aarch32/VSHLL.html">VSHLL:Vector Shift Left Long</a>
  AMED_AARCH32_PAGE_VSHR, //!< <a href="../target/aarch32/VSHR.html">VSHR:Vector Shift Right</a>
  AMED_AARCH32_PAGE_VSHRN, //!< <a href="../target/aarch32/VSHRN.html">VSHRN:Vector Shift Right Narrow</a>
  AMED_AARCH32_PAGE_VSLI, //!< <a href="../target/aarch32/VSLI.html">VSLI:Vector Shift Left and Insert</a>
  AMED_AARCH32_PAGE_VSMMLA, //!< <a href="../target/aarch32/VSMMLA.html">VSMMLA:Widening 8-bit signed integer matrix multiply-accumulate into 2x2 matrix</a>
  AMED_AARCH32_PAGE_VSQRT, //!< <a href="../target/aarch32/VSQRT.html">VSQRT:Square Root</a>
  AMED_AARCH32_PAGE_VSRA, //!< <a href="../target/aarch32/VSRA.html">VSRA:Vector Shift Right and Accumulate</a>
  AMED_AARCH32_PAGE_VSRI, //!< <a href="../target/aarch32/VSRI.html">VSRI:Vector Shift Right and Insert</a>
  AMED_AARCH32_PAGE_VST1_1, //!< <a href="../target/aarch32/VST1_1.html">VST1 (single element from one lane):Store single element from one lane of one register</a>
  AMED_AARCH32_PAGE_VST1_m, //!< <a href="../target/aarch32/VST1_m.html">VST1 (multiple single elements):Store multiple single elements from one, two, three, or four registers</a>
  AMED_AARCH32_PAGE_VST2_1, //!< <a href="../target/aarch32/VST2_1.html">VST2 (single 2-element structure from one lane):Store single 2-element structure from one lane of two registers</a>
  AMED_AARCH32_PAGE_VST2_m, //!< <a href="../target/aarch32/VST2_m.html">VST2 (multiple 2-element structures):Store multiple 2-element structures from two or four registers</a>
  AMED_AARCH32_PAGE_VST3_1, //!< <a href="../target/aarch32/VST3_1.html">VST3 (single 3-element structure from one lane):Store single 3-element structure from one lane of three registers</a>
  AMED_AARCH32_PAGE_VST3_m, //!< <a href="../target/aarch32/VST3_m.html">VST3 (multiple 3-element structures):Store multiple 3-element structures from three registers</a>
  AMED_AARCH32_PAGE_VST4_1, //!< <a href="../target/aarch32/VST4_1.html">VST4 (single 4-element structure from one lane):Store single 4-element structure from one lane of four registers</a>
  AMED_AARCH32_PAGE_VST4_m, //!< <a href="../target/aarch32/VST4_m.html">VST4 (multiple 4-element structures):Store multiple 4-element structures from four registers</a>
  AMED_AARCH32_PAGE_VSTM, //!< <a href="../target/aarch32/VSTM.html">VSTM, VSTMDB, VSTMIA:Store multiple SIMD&FP registers</a>
  AMED_AARCH32_PAGE_VSTR, //!< <a href="../target/aarch32/VSTR.html">VSTR:Store SIMD&FP register</a>
  AMED_AARCH32_PAGE_VSUB_f, //!< <a href="../target/aarch32/VSUB_f.html">VSUB (floating-point):Vector Subtract (floating-point)</a>
  AMED_AARCH32_PAGE_VSUB_i, //!< <a href="../target/aarch32/VSUB_i.html">VSUB (integer):Vector Subtract (integer)</a>
  AMED_AARCH32_PAGE_VSUBHN, //!< <a href="../target/aarch32/VSUBHN.html">VSUBHN:Vector Subtract and Narrow, returning High Half</a>
  AMED_AARCH32_PAGE_VSUBL, //!< <a href="../target/aarch32/VSUBL.html">VSUBL:Vector Subtract Long</a>
  AMED_AARCH32_PAGE_VSUBW, //!< <a href="../target/aarch32/VSUBW.html">VSUBW:Vector Subtract Wide</a>
  AMED_AARCH32_PAGE_VSUDOT_s, //!< <a href="../target/aarch32/VSUDOT_s.html">VSUDOT (by element):Dot Product index form with signed and unsigned integers (by element)</a>
  AMED_AARCH32_PAGE_VSWP, //!< <a href="../target/aarch32/VSWP.html">VSWP:Vector Swap</a>
  AMED_AARCH32_PAGE_VTBL, //!< <a href="../target/aarch32/VTBL.html">VTBL, VTBX:Vector Table Lookup and Extension</a>
  AMED_AARCH32_PAGE_VTRN, //!< <a href="../target/aarch32/VTRN.html">VTRN:Vector Transpose</a>
  AMED_AARCH32_PAGE_VTST, //!< <a href="../target/aarch32/VTST.html">VTST:Vector Test Bits</a>
  AMED_AARCH32_PAGE_VUDOT, //!< <a href="../target/aarch32/VUDOT.html">VUDOT (vector):Dot Product vector form with unsigned integers.</a>
  AMED_AARCH32_PAGE_VUDOT_s, //!< <a href="../target/aarch32/VUDOT_s.html">VUDOT (by element):Dot Product index form with unsigned integers.</a>
  AMED_AARCH32_PAGE_VUMMLA, //!< <a href="../target/aarch32/VUMMLA.html">VUMMLA:Widening 8-bit unsigned integer matrix multiply-accumulate into 2x2 matrix</a>
  AMED_AARCH32_PAGE_VUSDOT, //!< <a href="../target/aarch32/VUSDOT.html">VUSDOT (vector):Dot Product vector form with mixed-sign integers</a>
  AMED_AARCH32_PAGE_VUSDOT_s, //!< <a href="../target/aarch32/VUSDOT_s.html">VUSDOT (by element):Dot Product index form with unsigned and signed integers (by element)</a>
  AMED_AARCH32_PAGE_VUSMMLA, //!< <a href="../target/aarch32/VUSMMLA.html">VUSMMLA:Widening 8-bit mixed integer matrix multiply-accumulate into 2x2 matrix</a>
  AMED_AARCH32_PAGE_VUZP, //!< <a href="../target/aarch32/VUZP.html">VUZP:Vector Unzip</a>
  AMED_AARCH32_PAGE_VZIP, //!< <a href="../target/aarch32/VZIP.html">VZIP:Vector Zip</a>
  AMED_AARCH32_PAGE_VACLE_VACGE, //!< <a href="../target/aarch32/VACLE_VACGE.html">VACLE:Vector Absolute Compare Less Than or Equal</a>
  AMED_AARCH32_PAGE_VACLT_VACGT, //!< <a href="../target/aarch32/VACLT_VACGT.html">VACLT:Vector Absolute Compare Less Than</a>
  AMED_AARCH32_PAGE_VAND_VBIC_i, //!< <a href="../target/aarch32/VAND_VBIC_i.html">VAND (immediate):Vector Bitwise AND (immediate)</a>
  AMED_AARCH32_PAGE_VCLE_VCGE_r, //!< <a href="../target/aarch32/VCLE_VCGE_r.html">VCLE (register):Vector Compare Less Than or Equal</a>
  AMED_AARCH32_PAGE_VCLT_VCGT_r, //!< <a href="../target/aarch32/VCLT_VCGT_r.html">VCLT (register):Vector Compare Less Than</a>
  AMED_AARCH32_PAGE_VEXT_VEXT, //!< <a href="../target/aarch32/VEXT_VEXT.html">VEXT (multibyte elements):Vector Extract</a>
  AMED_AARCH32_PAGE_VMOV_VORR_r, //!< <a href="../target/aarch32/VMOV_VORR_r.html">VMOV (register, SIMD):Copy between SIMD registers</a>
  AMED_AARCH32_PAGE_VORN_VORR_i, //!< <a href="../target/aarch32/VORN_VORR_i.html">VORN (immediate):Vector Bitwise OR NOT (immediate)</a>
  AMED_AARCH32_PAGE_VPOP_VLDM, //!< <a href="../target/aarch32/VPOP_VLDM.html">VPOP:Pop SIMD&FP registers from Stack</a>
  AMED_AARCH32_PAGE_VPUSH_VSTM, //!< <a href="../target/aarch32/VPUSH_VSTM.html">VPUSH:Push SIMD&FP registers to Stack</a>
  AMED_AARCH32_PAGE_VQRSHRN_VQMOVN, //!< <a href="../target/aarch32/VQRSHRN_VQMOVN.html">VQRSHRN (zero):Vector Saturating Rounding Shift Right, Narrow</a>
  AMED_AARCH32_PAGE_VQRSHRUN_VQMOVN, //!< <a href="../target/aarch32/VQRSHRUN_VQMOVN.html">VQRSHRUN (zero):Vector Saturating Rounding Shift Right, Narrow</a>
  AMED_AARCH32_PAGE_VQSHRN_VQMOVN, //!< <a href="../target/aarch32/VQSHRN_VQMOVN.html">VQSHRN (zero):Vector Saturating Shift Right, Narrow</a>
  AMED_AARCH32_PAGE_VQSHRUN_VQMOVN, //!< <a href="../target/aarch32/VQSHRUN_VQMOVN.html">VQSHRUN (zero):Vector Saturating Shift Right, Narrow</a>
  AMED_AARCH32_PAGE_VRSHR_VORR_r, //!< <a href="../target/aarch32/VRSHR_VORR_r.html">VRSHR (zero):Vector Rounding Shift Right</a>
  AMED_AARCH32_PAGE_VRSHRN_VMOVN, //!< <a href="../target/aarch32/VRSHRN_VMOVN.html">VRSHRN (zero):Vector Rounding Shift Right and Narrow</a>
  AMED_AARCH32_PAGE_VSHR_VORR_r, //!< <a href="../target/aarch32/VSHR_VORR_r.html">VSHR (zero):Vector Shift Right</a>
  AMED_AARCH32_PAGE_VSHRN_VMOVN, //!< <a href="../target/aarch32/VSHRN_VMOVN.html">VSHRN (zero):Vector Shift Right Narrow</a>
  AMED_AARCH32_PAGE_VUZP_VTRN, //!< <a href="../target/aarch32/VUZP_VTRN.html">VUZP (alias):Vector Unzip</a>
  AMED_AARCH32_PAGE_VZIP_VTRN, //!< <a href="../target/aarch32/VZIP_VTRN.html">VZIP (alias):Vector Zip</a>
} amed_aarch32_page;

#define AMED_AARCH32_REGISTER_MAX_TEXT_LENGTH (8 + 1)

typedef enum _amed_aarch32_register
{
  AMED_AARCH32_REGISTER_NONE,
  AMED_AARCH32_REGISTER_R0,
  AMED_AARCH32_REGISTER_R1,
  AMED_AARCH32_REGISTER_R2,
  AMED_AARCH32_REGISTER_R3,
  AMED_AARCH32_REGISTER_R4,
  AMED_AARCH32_REGISTER_R5,
  AMED_AARCH32_REGISTER_R6,
  AMED_AARCH32_REGISTER_R7,
  AMED_AARCH32_REGISTER_R8,
  AMED_AARCH32_REGISTER_R9,
  AMED_AARCH32_REGISTER_R10,
  AMED_AARCH32_REGISTER_R11,
  AMED_AARCH32_REGISTER_R12,
  AMED_AARCH32_REGISTER_SP,
  AMED_AARCH32_REGISTER_LR,
  AMED_AARCH32_REGISTER_PC,
  AMED_AARCH32_REGISTER_S0,
  AMED_AARCH32_REGISTER_S1,
  AMED_AARCH32_REGISTER_S2,
  AMED_AARCH32_REGISTER_S3,
  AMED_AARCH32_REGISTER_S4,
  AMED_AARCH32_REGISTER_S5,
  AMED_AARCH32_REGISTER_S6,
  AMED_AARCH32_REGISTER_S7,
  AMED_AARCH32_REGISTER_S8,
  AMED_AARCH32_REGISTER_S9,
  AMED_AARCH32_REGISTER_S10,
  AMED_AARCH32_REGISTER_S11,
  AMED_AARCH32_REGISTER_S12,
  AMED_AARCH32_REGISTER_S13,
  AMED_AARCH32_REGISTER_S14,
  AMED_AARCH32_REGISTER_S15,
  AMED_AARCH32_REGISTER_S16,
  AMED_AARCH32_REGISTER_S17,
  AMED_AARCH32_REGISTER_S18,
  AMED_AARCH32_REGISTER_S19,
  AMED_AARCH32_REGISTER_S20,
  AMED_AARCH32_REGISTER_S21,
  AMED_AARCH32_REGISTER_S22,
  AMED_AARCH32_REGISTER_S23,
  AMED_AARCH32_REGISTER_S24,
  AMED_AARCH32_REGISTER_S25,
  AMED_AARCH32_REGISTER_S26,
  AMED_AARCH32_REGISTER_S27,
  AMED_AARCH32_REGISTER_S28,
  AMED_AARCH32_REGISTER_S29,
  AMED_AARCH32_REGISTER_S30,
  AMED_AARCH32_REGISTER_S31,
  AMED_AARCH32_REGISTER_D0,
  AMED_AARCH32_REGISTER_D1,
  AMED_AARCH32_REGISTER_D2,
  AMED_AARCH32_REGISTER_D3,
  AMED_AARCH32_REGISTER_D4,
  AMED_AARCH32_REGISTER_D5,
  AMED_AARCH32_REGISTER_D6,
  AMED_AARCH32_REGISTER_D7,
  AMED_AARCH32_REGISTER_D8,
  AMED_AARCH32_REGISTER_D9,
  AMED_AARCH32_REGISTER_D10,
  AMED_AARCH32_REGISTER_D11,
  AMED_AARCH32_REGISTER_D12,
  AMED_AARCH32_REGISTER_D13,
  AMED_AARCH32_REGISTER_D14,
  AMED_AARCH32_REGISTER_D15,
  AMED_AARCH32_REGISTER_D16,
  AMED_AARCH32_REGISTER_D17,
  AMED_AARCH32_REGISTER_D18,
  AMED_AARCH32_REGISTER_D19,
  AMED_AARCH32_REGISTER_D20,
  AMED_AARCH32_REGISTER_D21,
  AMED_AARCH32_REGISTER_D22,
  AMED_AARCH32_REGISTER_D23,
  AMED_AARCH32_REGISTER_D24,
  AMED_AARCH32_REGISTER_D25,
  AMED_AARCH32_REGISTER_D26,
  AMED_AARCH32_REGISTER_D27,
  AMED_AARCH32_REGISTER_D28,
  AMED_AARCH32_REGISTER_D29,
  AMED_AARCH32_REGISTER_D30,
  AMED_AARCH32_REGISTER_D31,
  AMED_AARCH32_REGISTER_Q0,
  AMED_AARCH32_REGISTER_Q1,
  AMED_AARCH32_REGISTER_Q2,
  AMED_AARCH32_REGISTER_Q3,
  AMED_AARCH32_REGISTER_Q4,
  AMED_AARCH32_REGISTER_Q5,
  AMED_AARCH32_REGISTER_Q6,
  AMED_AARCH32_REGISTER_Q7,
  AMED_AARCH32_REGISTER_Q8,
  AMED_AARCH32_REGISTER_Q9,
  AMED_AARCH32_REGISTER_Q10,
  AMED_AARCH32_REGISTER_Q11,
  AMED_AARCH32_REGISTER_Q12,
  AMED_AARCH32_REGISTER_Q13,
  AMED_AARCH32_REGISTER_Q14,
  AMED_AARCH32_REGISTER_Q15,
  AMED_AARCH32_REGISTER_Q16,
  AMED_AARCH32_REGISTER_Q17,
  AMED_AARCH32_REGISTER_Q18,
  AMED_AARCH32_REGISTER_Q19,
  AMED_AARCH32_REGISTER_Q20,
  AMED_AARCH32_REGISTER_Q21,
  AMED_AARCH32_REGISTER_Q22,
  AMED_AARCH32_REGISTER_Q23,
  AMED_AARCH32_REGISTER_Q24,
  AMED_AARCH32_REGISTER_Q25,
  AMED_AARCH32_REGISTER_Q26,
  AMED_AARCH32_REGISTER_Q27,
  AMED_AARCH32_REGISTER_Q28,
  AMED_AARCH32_REGISTER_Q29,
  AMED_AARCH32_REGISTER_Q30,
  AMED_AARCH32_REGISTER_Q31,
  AMED_AARCH32_REGISTER_R8_usr,
  AMED_AARCH32_REGISTER_R9_usr,
  AMED_AARCH32_REGISTER_R10_usr,
  AMED_AARCH32_REGISTER_R11_usr,
  AMED_AARCH32_REGISTER_R12_usr,
  AMED_AARCH32_REGISTER_SP_usr,
  AMED_AARCH32_REGISTER_LR_usr,
  AMED_AARCH32_REGISTER_R8_fiq,
  AMED_AARCH32_REGISTER_R9_fiq,
  AMED_AARCH32_REGISTER_R10_fiq,
  AMED_AARCH32_REGISTER_R11_fiq,
  AMED_AARCH32_REGISTER_R12_fiq,
  AMED_AARCH32_REGISTER_SP_fiq,
  AMED_AARCH32_REGISTER_LR_fiq,
  AMED_AARCH32_REGISTER_LR_irq,
  AMED_AARCH32_REGISTER_SP_irq,
  AMED_AARCH32_REGISTER_LR_svc,
  AMED_AARCH32_REGISTER_SP_svc,
  AMED_AARCH32_REGISTER_LR_abt,
  AMED_AARCH32_REGISTER_SP_abt,
  AMED_AARCH32_REGISTER_LR_und,
  AMED_AARCH32_REGISTER_SP_und,
  AMED_AARCH32_REGISTER_LR_mon,
  AMED_AARCH32_REGISTER_SP_mon,
  AMED_AARCH32_REGISTER_ELR_hyp,
  AMED_AARCH32_REGISTER_SP_hyp,
  AMED_AARCH32_REGISTER_SPSR_fiq,
  AMED_AARCH32_REGISTER_SPSR_irq,
  AMED_AARCH32_REGISTER_SPSR_svc,
  AMED_AARCH32_REGISTER_SPSR_abt,
  AMED_AARCH32_REGISTER_SPSR_und,
  AMED_AARCH32_REGISTER_SPSR_mon,
  AMED_AARCH32_REGISTER_SPSR_hyp,
  AMED_AARCH32_REGISTER_CPSR,
  AMED_AARCH32_REGISTER_APSR,
  AMED_AARCH32_REGISTER_SPSR,
  AMED_AARCH32_REGISTER_FPSID,
  AMED_AARCH32_REGISTER_FPSCR,
  AMED_AARCH32_REGISTER_MVFR2,
  AMED_AARCH32_REGISTER_MVFR1,
  AMED_AARCH32_REGISTER_MVFR0,
  AMED_AARCH32_REGISTER_FPEXC,
} amed_aarch32_register;

#define AMED_AARCH32_EXCEPTION_MAX_TEXT_LENGTH (19 + 1)

typedef enum _amed_aarch32_exception
{
  AMED_AARCH32_EXCEPTION_SOFTWAREBREAKPOINT,
  AMED_AARCH32_EXCEPTION_HYPERVISORCALL,
  AMED_AARCH32_EXCEPTION_ALIGNMENT,
  AMED_AARCH32_EXCEPTION_DATAABORT,
  AMED_AARCH32_EXCEPTION_UNCATEGORIZED,
  AMED_AARCH32_EXCEPTION_MONITORCALL,
  AMED_AARCH32_EXCEPTION_SUPERVISORCALL,
  AMED_AARCH32_EXCEPTION_WFXTRAP,
  AMED_AARCH32_EXCEPTION_ADVSIMDFPACCESSTRAP,
  AMED_AARCH32_EXCEPTION_FP,
  AMED_AARCH32_EXCEPTION_CP14DTTRAP,
  AMED_AARCH32_EXCEPTION_CP14RRTTRAP,
  AMED_AARCH32_EXCEPTION_CP14RTTRAP,
  AMED_AARCH32_EXCEPTION_CP15RRTTRAP,
  AMED_AARCH32_EXCEPTION_CP15RTTRAP,
  AMED_AARCH32_EXCEPTION_FPIDTRAP,
} amed_aarch32_exception;

#define AMED_AARCH32_SYMBOL_MAX_TEXT_LENGTH (20 + 1)

typedef enum _amed_aarch32_symbol
{
  AMED_AARCH32_SYMBOL_NONE,
  AMED_AARCH32_SYMBOL_ADD,
  AMED_AARCH32_SYMBOL_CRm,
  AMED_AARCH32_SYMBOL_CRn,
  AMED_AARCH32_SYMBOL_INC,
  AMED_AARCH32_SYMBOL_aimm,
  AMED_AARCH32_SYMBOL_timm,
  AMED_AARCH32_SYMBOL_vfpimm,
  AMED_AARCH32_SYMBOL_advimm,
  AMED_AARCH32_SYMBOL_align,
  AMED_AARCH32_SYMBOL_amount,
  AMED_AARCH32_SYMBOL_banked_reg,
  AMED_AARCH32_SYMBOL_cond,
  AMED_AARCH32_SYMBOL_const,
  AMED_AARCH32_SYMBOL_coproc,
  AMED_AARCH32_SYMBOL_count,
  AMED_AARCH32_SYMBOL_endian_specifier,
  AMED_AARCH32_SYMBOL_iflags,
  AMED_AARCH32_SYMBOL_shift_left,
  AMED_AARCH32_SYMBOL_shift_right,
  AMED_AARCH32_SYMBOL_fbits_right,
  AMED_AARCH32_SYMBOL_imm,
  AMED_AARCH32_SYMBOL_imm12,
  AMED_AARCH32_SYMBOL_imm16,
  AMED_AARCH32_SYMBOL_imm3,
  AMED_AARCH32_SYMBOL_imm4,
  AMED_AARCH32_SYMBOL_imm7,
  AMED_AARCH32_SYMBOL_imm8,
  AMED_AARCH32_SYMBOL_label,
  AMED_AARCH32_SYMBOL_labelj,
  AMED_AARCH32_SYMBOL_nlabel,
  AMED_AARCH32_SYMBOL_plabel,
  AMED_AARCH32_SYMBOL_plabela,
  AMED_AARCH32_SYMBOL_nlabela,
  AMED_AARCH32_SYMBOL_lsb,
  AMED_AARCH32_SYMBOL_mode,
  AMED_AARCH32_SYMBOL_opc1,
  AMED_AARCH32_SYMBOL_opc2,
  AMED_AARCH32_SYMBOL_option,
  AMED_AARCH32_SYMBOL_registers,
  AMED_AARCH32_SYMBOL_registers_with_pc,
  AMED_AARCH32_SYMBOL_registers_without_pc,
  AMED_AARCH32_SYMBOL_rotate,
  AMED_AARCH32_SYMBOL_shift,
  AMED_AARCH32_SYMBOL_shifter,
  AMED_AARCH32_SYMBOL_single_register_list,
  AMED_AARCH32_SYMBOL_spec_reg,
  AMED_AARCH32_SYMBOL_type,
  AMED_AARCH32_SYMBOL_wback,
  AMED_AARCH32_SYMBOL_wback16,
  AMED_AARCH32_SYMBOL_width,
  AMED_AARCH32_SYMBOL_xyz,
  AMED_AARCH32_SYMBOL_GPR32,
  AMED_AARCH32_SYMBOL_SIMD32,
  AMED_AARCH32_SYMBOL_SIMD64,
  AMED_AARCH32_SYMBOL_SIMD128,
  AMED_AARCH32_SYMBOL_SYSREG,
  AMED_AARCH32_SYMBOL_Dd,
  AMED_AARCH32_SYMBOL_Ddm,
  AMED_AARCH32_SYMBOL_Dm,
  AMED_AARCH32_SYMBOL_Dn,
  AMED_AARCH32_SYMBOL_Qd,
  AMED_AARCH32_SYMBOL_Qm,
  AMED_AARCH32_SYMBOL_Qn,
  AMED_AARCH32_SYMBOL_Ra,
  AMED_AARCH32_SYMBOL_Rd,
  AMED_AARCH32_SYMBOL_RdHi,
  AMED_AARCH32_SYMBOL_RdLo,
  AMED_AARCH32_SYMBOL_Rdm,
  AMED_AARCH32_SYMBOL_Rdn,
  AMED_AARCH32_SYMBOL_Rm,
  AMED_AARCH32_SYMBOL_Rn,
  AMED_AARCH32_SYMBOL_Rs,
  AMED_AARCH32_SYMBOL_Rt,
  AMED_AARCH32_SYMBOL_Rt2,
  AMED_AARCH32_SYMBOL_Sd,
  AMED_AARCH32_SYMBOL_Sdm,
  AMED_AARCH32_SYMBOL_Sm,
  AMED_AARCH32_SYMBOL_Sm1,
  AMED_AARCH32_SYMBOL_Sn,
} amed_aarch32_symbol;

#define AMED_AARCH32_ICLASS_MAX_TEXT_LENGTH (20 + 1)

typedef enum _amed_aarch32_iclass
{
  AMED_AARCH32_ICLASS_NONE,
  AMED_AARCH32_ICLASS_invalid, //!< invalid
  AMED_AARCH32_ICLASS_addpcsp16, //!< Add PC/SP (immediate)
  AMED_AARCH32_ICLASS_addsub16_1l_imm, //!< Add, subtract, compare, move (one low register and immediate)
  AMED_AARCH32_ICLASS_addsub16_2h, //!< Add, subtract, compare, move (two high registers)
  AMED_AARCH32_ICLASS_addsub16_2l_imm, //!< Add, subtract (two low registers and immediate)
  AMED_AARCH32_ICLASS_addsub16_3l, //!< Add, subtract (three low registers)
  AMED_AARCH32_ICLASS_addsub_par, //!< Parallel add-subtract
  AMED_AARCH32_ICLASS_adjsp16, //!< Adjust SP (immediate)
  AMED_AARCH32_ICLASS_b, //!< Unconditional branch
  AMED_AARCH32_ICLASS_b16, //!< Unconditional branch
  AMED_AARCH32_ICLASS_b_imm, //!< Branch (immediate)
  AMED_AARCH32_ICLASS_barriers, //!< Barriers
  AMED_AARCH32_ICLASS_bcond, //!< Conditional branch
  AMED_AARCH32_ICLASS_bcond16, //!< Conditional branch
  AMED_AARCH32_ICLASS_bfi, //!< Bitfield Insert
  AMED_AARCH32_ICLASS_bfx, //!< Bitfield Extract
  AMED_AARCH32_ICLASS_bkpt16, //!< Software breakpoint
  AMED_AARCH32_ICLASS_bl, //!< Unconditional branch and link
  AMED_AARCH32_ICLASS_blx, //!< Unconditional branch and link exchange
  AMED_AARCH32_ICLASS_blx_reg, //!< Branch with Link and Exchange (register)
  AMED_AARCH32_ICLASS_bx16, //!< Branch and exchange
  AMED_AARCH32_ICLASS_bx_jaz, //!< Branch and Exchange Jazelle
  AMED_AARCH32_ICLASS_bx_reg, //!< Branch and Exchange (register)
  AMED_AARCH32_ICLASS_bxj_reg, //!< Branch and Exchange to Jazelle (register)
  AMED_AARCH32_ICLASS_cbznz16, //!< Compare and branch zero/non-zero
  AMED_AARCH32_ICLASS_clz, //!< Count Leading Zeros
  AMED_AARCH32_ICLASS_cp_ldst, //!< System register Load/Store
  AMED_AARCH32_ICLASS_cp_mov32, //!< System register 32-bit move
  AMED_AARCH32_ICLASS_cp_mov64, //!< System register 64-bit move
  AMED_AARCH32_ICLASS_cps, //!< Change Process State
  AMED_AARCH32_ICLASS_cps16, //!< Change Processor State
  AMED_AARCH32_ICLASS_crc32, //!< Cyclic Redundancy Check
  AMED_AARCH32_ICLASS_dcps, //!< DCPS
  AMED_AARCH32_ICLASS_dpint16_2l, //!< Data-processing (two low registers)
  AMED_AARCH32_ICLASS_dpint_2r, //!< Data-processing (two source registers)
  AMED_AARCH32_ICLASS_dpint_immm, //!< Data-processing (modified immediate)
  AMED_AARCH32_ICLASS_dpint_imms, //!< Data-processing (simple immediate)
  AMED_AARCH32_ICLASS_dpint_shiftr, //!< Data-processing (shifted register)
  AMED_AARCH32_ICLASS_eret, //!< Exception Return
  AMED_AARCH32_ICLASS_except, //!< Exception Generation
  AMED_AARCH32_ICLASS_except16, //!< Exception generation
  AMED_AARCH32_ICLASS_ext16, //!< Extend
  AMED_AARCH32_ICLASS_extend, //!< Extend and Add
  AMED_AARCH32_ICLASS_extendr, //!< Register extends
  AMED_AARCH32_ICLASS_hints, //!< Hints
  AMED_AARCH32_ICLASS_hints16, //!< Hints
  AMED_AARCH32_ICLASS_hlt16, //!< Halting breakpoint
  AMED_AARCH32_ICLASS_intdp1reg_imm, //!< Integer Test and Compare (one register and immediate)
  AMED_AARCH32_ICLASS_intdp2reg_imm, //!< Integer Data Processing (two register and immediate)
  AMED_AARCH32_ICLASS_intdp2reg_immsh, //!< Integer Test and Compare (two register, immediate shift)
  AMED_AARCH32_ICLASS_intdp2reg_regsh, //!< Integer Test and Compare (two register, register shift)
  AMED_AARCH32_ICLASS_intdp3reg_immsh, //!< Integer Data Processing (three register, immediate shift)
  AMED_AARCH32_ICLASS_intdp3reg_regsh, //!< Integer Data Processing (three register, register shift)
  AMED_AARCH32_ICLASS_intsat, //!< Integer Saturating Arithmetic
  AMED_AARCH32_ICLASS_it16, //!< If-Then
  AMED_AARCH32_ICLASS_ldastl, //!< Load-acquire / Store-release
  AMED_AARCH32_ICLASS_lddlit, //!< Load dual (literal)
  AMED_AARCH32_ICLASS_ldlit16, //!< Load literal
  AMED_AARCH32_ICLASS_ldlit_signed, //!< Load, signed (literal)
  AMED_AARCH32_ICLASS_ldlit_unsigned, //!< Load, unsigned (literal)
  AMED_AARCH32_ICLASS_ldst16_imm, //!< Load/store word/byte (immediate offset)
  AMED_AARCH32_ICLASS_ldst16_reg, //!< Load/store (register offset)
  AMED_AARCH32_ICLASS_ldst16_sp, //!< Load/store (SP-relative)
  AMED_AARCH32_ICLASS_ldst_excl, //!< Load/Store Exclusive and Load-Acquire/Store-Release
  AMED_AARCH32_ICLASS_ldst_signed_nimm, //!< Load/store, signed (negative immediate)
  AMED_AARCH32_ICLASS_ldst_signed_pimm, //!< Load/store, signed (positive immediate)
  AMED_AARCH32_ICLASS_ldst_signed_post, //!< Load/store, signed (immediate, post-indexed)
  AMED_AARCH32_ICLASS_ldst_signed_pre, //!< Load/store, signed (immediate, pre-indexed)
  AMED_AARCH32_ICLASS_ldst_signed_reg, //!< Load/store, signed (register offset)
  AMED_AARCH32_ICLASS_ldst_signed_unpriv, //!< Load/store, signed (unprivileged)
  AMED_AARCH32_ICLASS_ldst_unsigned_nimm, //!< Load/store, unsigned (negative immediate)
  AMED_AARCH32_ICLASS_ldst_unsigned_pimm, //!< Load/store, unsigned (positive immediate)
  AMED_AARCH32_ICLASS_ldst_unsigned_post, //!< Load/store, unsigned (immediate, post-indexed)
  AMED_AARCH32_ICLASS_ldst_unsigned_pre, //!< Load/store, unsigned (immediate, pre-indexed)
  AMED_AARCH32_ICLASS_ldst_unsigned_reg, //!< Load/store, unsigned (register offset)
  AMED_AARCH32_ICLASS_ldst_unsigned_unpriv, //!< Load/store, unsigned (unprivileged)
  AMED_AARCH32_ICLASS_ldstcp, //!< System register load/store
  AMED_AARCH32_ICLASS_ldstd_imm, //!< Load/store dual (immediate)
  AMED_AARCH32_ICLASS_ldstd_post, //!< Load/store dual (immediate, post-indexed)
  AMED_AARCH32_ICLASS_ldstd_pre, //!< Load/store dual (immediate, pre-indexed)
  AMED_AARCH32_ICLASS_ldstex, //!< Load/store exclusive
  AMED_AARCH32_ICLASS_ldstex_bhd, //!< Load/store exclusive byte/half/dual
  AMED_AARCH32_ICLASS_ldstexcept, //!< Exception Save/Restore
  AMED_AARCH32_ICLASS_ldsth16_imm, //!< Load/store halfword (immediate offset)
  AMED_AARCH32_ICLASS_ldstimm, //!< Load/Store Word, Unsigned Byte (immediate, literal)
  AMED_AARCH32_ICLASS_ldstm, //!< Load/Store Multiple
  AMED_AARCH32_ICLASS_ldstm16, //!< Load/store multiple
  AMED_AARCH32_ICLASS_ldstreg, //!< Load/Store Word, Unsigned Byte (register)
  AMED_AARCH32_ICLASS_ldstximm, //!< Load/Store Dual, Half, Signed Byte (immediate, literal)
  AMED_AARCH32_ICLASS_ldstxreg, //!< Load/Store Dual, Half, Signed Byte (register)
  AMED_AARCH32_ICLASS_lmul_div, //!< Long multiply and divide
  AMED_AARCH32_ICLASS_log2reg_imm, //!< Logical Arithmetic  (two register and immediate)
  AMED_AARCH32_ICLASS_logic3reg_immsh, //!< Logical Arithmetic (three register, immediate shift)
  AMED_AARCH32_ICLASS_logic3reg_regsh, //!< Logical Arithmetic (three register, register shift)
  AMED_AARCH32_ICLASS_movcpgp32, //!< System register 32-bit move
  AMED_AARCH32_ICLASS_movcpgp64, //!< System register 64-bit move
  AMED_AARCH32_ICLASS_movsr_hint_imm, //!< Move Special Register and Hints (immediate)
  AMED_AARCH32_ICLASS_movsr_reg, //!< Move special register (register)
  AMED_AARCH32_ICLASS_movw, //!< Move Halfword (immediate)
  AMED_AARCH32_ICLASS_mrs_bank, //!< MRS (banked)
  AMED_AARCH32_ICLASS_mrs_spec, //!< MRS (special)
  AMED_AARCH32_ICLASS_msr_bank, //!< MSR (banked)
  AMED_AARCH32_ICLASS_msr_spec, //!< MSR (special)
  AMED_AARCH32_ICLASS_mul_abd, //!< Multiply and absolute difference
  AMED_AARCH32_ICLASS_mul_half, //!< Halfword Multiply and Accumulate
  AMED_AARCH32_ICLASS_mul_word, //!< Multiply and Accumulate
  AMED_AARCH32_ICLASS_pack, //!< Pack Halfword
  AMED_AARCH32_ICLASS_parallel, //!< Parallel Arithmetic
  AMED_AARCH32_ICLASS_preload_imm, //!< Preload (immediate)
  AMED_AARCH32_ICLASS_preload_reg, //!< Preload (register)
  AMED_AARCH32_ICLASS_pushpop16, //!< Push and Pop
  AMED_AARCH32_ICLASS_rev16, //!< Reverse bytes
  AMED_AARCH32_ICLASS_reverse, //!< Reverse Bit/Byte
  AMED_AARCH32_ICLASS_sat16, //!< Saturate 16-bit
  AMED_AARCH32_ICLASS_sat32, //!< Saturate 32-bit
  AMED_AARCH32_ICLASS_sat_bit, //!< Saturate, Bitfield
  AMED_AARCH32_ICLASS_selbytes, //!< Select Bytes
  AMED_AARCH32_ICLASS_setpan, //!< SETPAN
  AMED_AARCH32_ICLASS_setpan16, //!< SETPAN
  AMED_AARCH32_ICLASS_shift16_imm, //!< Shift (immediate)
  AMED_AARCH32_ICLASS_shiftr, //!< Register shifts
  AMED_AARCH32_ICLASS_smul_div, //!< Signed multiply, Divide
  AMED_AARCH32_ICLASS_svc, //!< Supervisor Call
  AMED_AARCH32_ICLASS_system, //!< Miscellaneous system
  AMED_AARCH32_ICLASS_tblbr, //!< Table branch
  AMED_AARCH32_ICLASS_udf, //!< Permanently UNDEFINED
  AMED_AARCH32_ICLASS_usad, //!< Unsigned Sum of Absolute Differences
  AMED_AARCH32_ICLASS_asimldall, //!< Advanced SIMD load single structure to all lanes
  AMED_AARCH32_ICLASS_asimldstms, //!< Advanced SIMD load/store multiple structures
  AMED_AARCH32_ICLASS_asimldstss, //!< Advanced SIMD load/store single structure to one lane
  AMED_AARCH32_ICLASS_fp_2r, //!< Floating-point data-processing (two registers)
  AMED_AARCH32_ICLASS_fp_3r, //!< Floating-point data-processing (three registers)
  AMED_AARCH32_ICLASS_fp_csel, //!< Floating-point conditional select
  AMED_AARCH32_ICLASS_fp_extins, //!< Floating-point extraction and insertion
  AMED_AARCH32_ICLASS_fp_minmax, //!< Floating-point minNum/maxNum
  AMED_AARCH32_ICLASS_fp_mov32, //!< Floating-point 32-bit move
  AMED_AARCH32_ICLASS_fp_movi, //!< Floating-point move immediate
  AMED_AARCH32_ICLASS_fp_msr, //!< Floating-point move special register
  AMED_AARCH32_ICLASS_fp_toint, //!< Floating-point directed convert to integer
  AMED_AARCH32_ICLASS_fpcsel, //!< Floating-point conditional select
  AMED_AARCH32_ICLASS_fpcvtrnd, //!< Floating-point directed convert to integer
  AMED_AARCH32_ICLASS_fpdp2reg, //!< Floating-point data-processing (two registers)
  AMED_AARCH32_ICLASS_fpdp3reg, //!< Floating-point data-processing (three registers)
  AMED_AARCH32_ICLASS_fpextins, //!< Floating-point extraction and insertion
  AMED_AARCH32_ICLASS_fpimm, //!< Floating-point move immediate
  AMED_AARCH32_ICLASS_fpminmaxnm, //!< Floating-point minNum/maxNum
  AMED_AARCH32_ICLASS_ldstsimdfp, //!< Advanced SIMD and floating-point load/store
  AMED_AARCH32_ICLASS_ldstv_ms, //!< Advanced SIMD load/store multiple structures
  AMED_AARCH32_ICLASS_ldstv_ssone, //!< Advanced SIMD load/store single structure to one lane
  AMED_AARCH32_ICLASS_ldv_ssall, //!< Advanced SIMD load single structure to all lanes
  AMED_AARCH32_ICLASS_movfpgp16, //!< Floating-point 16-bit move
  AMED_AARCH32_ICLASS_movfpgp32, //!< Floating-point 32-bit move
  AMED_AARCH32_ICLASS_movfpsr, //!< Floating-point move special register
  AMED_AARCH32_ICLASS_movsimdfpgp64, //!< Advanced SIMD and floating-point 64-bit move
  AMED_AARCH32_ICLASS_movsimdgp, //!< Advanced SIMD 8/16/32-bit element move/duplicate
  AMED_AARCH32_ICLASS_p_cpaf, //!< System register access, Advanced SIMD, and floating-point
  AMED_AARCH32_ICLASS_simd1reg_imm, //!< Advanced SIMD one register and modified immediate
  AMED_AARCH32_ICLASS_simd2reg_dup, //!< Advanced SIMD duplicate (scalar)
  AMED_AARCH32_ICLASS_simd2reg_misc, //!< Advanced SIMD two registers misc
  AMED_AARCH32_ICLASS_simd2reg_scalar, //!< Advanced SIMD two registers and a scalar
  AMED_AARCH32_ICLASS_simd2reg_scalarext, //!< Advanced SIMD two registers and a scalar extension
  AMED_AARCH32_ICLASS_simd2reg_shift, //!< Advanced SIMD two registers and shift amount
  AMED_AARCH32_ICLASS_simd3reg_diff, //!< Advanced SIMD three registers of different lengths
  AMED_AARCH32_ICLASS_simd3reg_ext, //!< Advanced SIMD vector extract
  AMED_AARCH32_ICLASS_simd3reg_same, //!< Advanced SIMD three registers of the same length
  AMED_AARCH32_ICLASS_simd3reg_sameext, //!< Advanced SIMD three registers of the same length extension
  AMED_AARCH32_ICLASS_simd3reg_tbl, //!< Advanced SIMD table permute
  AMED_AARCH32_ICLASS_simd_1r_imm, //!< Advanced SIMD one register and modified immediate
  AMED_AARCH32_ICLASS_simd_2r_misc, //!< Advanced SIMD two registers misc
  AMED_AARCH32_ICLASS_simd_2r_sc, //!< Advanced SIMD two registers and a scalar
  AMED_AARCH32_ICLASS_simd_2r_scext, //!< Advanced SIMD two registers and a scalar extension
  AMED_AARCH32_ICLASS_simd_2r_shift, //!< Advanced SIMD two registers and shift amount
  AMED_AARCH32_ICLASS_simd_3diff, //!< Advanced SIMD three registers of different lengths
  AMED_AARCH32_ICLASS_simd_3same, //!< Advanced SIMD three registers of the same length
  AMED_AARCH32_ICLASS_simd_3sameext, //!< Advanced SIMD three registers of the same length extension
  AMED_AARCH32_ICLASS_simd_dup_el, //!< Advanced SIMD 8/16/32-bit element move/duplicate
  AMED_AARCH32_ICLASS_simd_dup_sc, //!< Advanced SIMD duplicate (scalar)
  AMED_AARCH32_ICLASS_simd_ext, //!< Advanced SIMD vector extract
  AMED_AARCH32_ICLASS_simd_tbl, //!< Advanced SIMD table permute
  AMED_AARCH32_ICLASS_simdfp_ldst, //!< Advanced SIMD and floating-point load/store
  AMED_AARCH32_ICLASS_simdfp_mov64, //!< Advanced SIMD and floating-point 64-bit move
} amed_aarch32_iclass;

#define AMED_AARCH32_IT_OP_MAX_TEXT_LENGTH (4 + 1)

typedef enum _amed_aarch32_it_op
{
  AMED_AARCH32_IT_OP_NONE,
  AMED_AARCH32_IT_OP_TTT,
  AMED_AARCH32_IT_OP_TT,
  AMED_AARCH32_IT_OP_TTE,
  AMED_AARCH32_IT_OP_T,
  AMED_AARCH32_IT_OP_TET,
  AMED_AARCH32_IT_OP_TE,
  AMED_AARCH32_IT_OP_TEE,
  AMED_AARCH32_IT_OP_ETT,
  AMED_AARCH32_IT_OP_ET,
  AMED_AARCH32_IT_OP_ETE,
  AMED_AARCH32_IT_OP_E,
  AMED_AARCH32_IT_OP_EET,
  AMED_AARCH32_IT_OP_EE,
  AMED_AARCH32_IT_OP_EEE,
} amed_aarch32_it_op;

#define AMED_AARCH32_GROUP_MAX_TEXT_LENGTH (14 + 1)

typedef enum _amed_aarch32_group
{
  AMED_AARCH32_GROUP_NONE,
  AMED_AARCH32_GROUP_invalid, //!< invalid
  AMED_AARCH32_GROUP_bcrtrl, //!< Branches and miscellaneous control
  AMED_AARCH32_GROUP_brblk, //!< Branch, branch with link, and block data transfer
  AMED_AARCH32_GROUP_brc, //!< Conditional branch, and Supervisor Call
  AMED_AARCH32_GROUP_dp, //!< Data-processing and miscellaneous instructions
  AMED_AARCH32_GROUP_dpimm, //!< Data-processing immediate
  AMED_AARCH32_GROUP_dpmisc, //!< Miscellaneous
  AMED_AARCH32_GROUP_dpregis, //!< Data-processing register (immediate shift)
  AMED_AARCH32_GROUP_dpregrs, //!< Data-processing register (register shift)
  AMED_AARCH32_GROUP_dstd, //!< Load/store dual, load/store exclusive, load-acquire/store-release, and table branch
  AMED_AARCH32_GROUP_imm, //!< Data-processing (plain binary immediate)
  AMED_AARCH32_GROUP_ldst, //!< Load/store single
  AMED_AARCH32_GROUP_media, //!< Media instructions
  AMED_AARCH32_GROUP_misc16, //!< Miscellaneous 16-bit instructions
  AMED_AARCH32_GROUP_mul, //!< Multiply, multiply accumulate, and absolute difference
  AMED_AARCH32_GROUP_n, //!< 16-bit
  AMED_AARCH32_GROUP_reg, //!< Data-processing (register)
  AMED_AARCH32_GROUP_sftdpi, //!< Shift (immediate), add, subtract, move, and compare
  AMED_AARCH32_GROUP_spcd, //!< Special data instructions and branch and exchange
  AMED_AARCH32_GROUP_svcall, //!< Supervisor call
  AMED_AARCH32_GROUP_sync, //!< Synchronization primitives and Load-Acquire/Store-Release
  AMED_AARCH32_GROUP_sysldst_mov64, //!< System register load/store and 64-bit move
  AMED_AARCH32_GROUP_uncond_as, //!< Unconditional instructions
  AMED_AARCH32_GROUP_uncondhints, //!< Memory hints and barriers
  AMED_AARCH32_GROUP_uncondmisc, //!< Miscellaneous
  AMED_AARCH32_GROUP_w, //!< 32-bit
  AMED_AARCH32_GROUP_xldst, //!< Extra load/store
  AMED_AARCH32_GROUP_a_simd_12reg, //!< Advanced SIMD shifts and immediate generation
  AMED_AARCH32_GROUP_a_simd_mulreg, //!< Advanced SIMD two registers, or three registers of different lengths
  AMED_AARCH32_GROUP_advsimddp, //!< Advanced SIMD data-processing
  AMED_AARCH32_GROUP_advsimdls, //!< Advanced SIMD element or structure load/store
  AMED_AARCH32_GROUP_cops_as, //!< System register access, Advanced SIMD, floating-point, and Supervisor call
  AMED_AARCH32_GROUP_cpaf, //!< System register access, Advanced SIMD, and floating-point
  AMED_AARCH32_GROUP_fpdp, //!< Floating-point data-processing
  AMED_AARCH32_GROUP_fpsimd_mov32, //!< Advanced SIMD and floating-point 32-bit move
  AMED_AARCH32_GROUP_simddp, //!< Advanced SIMD data-processing
  AMED_AARCH32_GROUP_simdldst_mov64, //!< Advanced SIMD load/store and 64-bit move
  AMED_AARCH32_GROUP_t_simd_12reg, //!< Advanced SIMD shifts and immediate generation
  AMED_AARCH32_GROUP_t_simd_mulreg, //!< Advanced SIMD two registers, or three registers of different lengths
  AMED_AARCH32_GROUP_vldst, //!< Advanced SIMD element or structure load/store
} amed_aarch32_group;

#define AMED_AARCH32_NODE_TYPE_MAX_TEXT_LENGTH (8 + 1)

typedef enum _amed_aarch32_node_type
{
  AMED_AARCH32_NODE_TYPE_NONE,
  AMED_AARCH32_NODE_TYPE_ADD,
  AMED_AARCH32_NODE_TYPE_ALIGN,
  AMED_AARCH32_NODE_TYPE_SZ,
  AMED_AARCH32_NODE_TYPE_COUNT,
  AMED_AARCH32_NODE_TYPE_INC,
  AMED_AARCH32_NODE_TYPE_IDX,
  AMED_AARCH32_NODE_TYPE_WBACK,
  AMED_AARCH32_NODE_TYPE_SHIFTER,
  AMED_AARCH32_NODE_TYPE_EXTEND,
  AMED_AARCH32_NODE_TYPE_SHIFT,
  AMED_AARCH32_NODE_TYPE_XYZ,
  AMED_AARCH32_NODE_TYPE_COND,
  AMED_AARCH32_NODE_TYPE_ENDIAN,
  AMED_AARCH32_NODE_TYPE_SYNC_OP,
  AMED_AARCH32_NODE_TYPE_BARRIER,
  AMED_AARCH32_NODE_TYPE_IFLAGS,
  AMED_AARCH32_NODE_TYPE_BASE,
  AMED_AARCH32_NODE_TYPE_VBASE,
  AMED_AARCH32_NODE_TYPE_EBASE,
  AMED_AARCH32_NODE_TYPE_REG,
  AMED_AARCH32_NODE_TYPE_WREG,
  AMED_AARCH32_NODE_TYPE_VREG,
  AMED_AARCH32_NODE_TYPE_EREG,
  AMED_AARCH32_NODE_TYPE_RS,
  AMED_AARCH32_NODE_TYPE_REGOFF,
  AMED_AARCH32_NODE_TYPE_REGOFFSH,
  AMED_AARCH32_NODE_TYPE_REGSH,
  AMED_AARCH32_NODE_TYPE_GLIST,
  AMED_AARCH32_NODE_TYPE_SLIST,
  AMED_AARCH32_NODE_TYPE_FSLIST,
  AMED_AARCH32_NODE_TYPE_FDLIST,
  AMED_AARCH32_NODE_TYPE_VLIST,
  AMED_AARCH32_NODE_TYPE_ELIST,
  AMED_AARCH32_NODE_TYPE_AMOUNT,
  AMED_AARCH32_NODE_TYPE_FPIMM,
  AMED_AARCH32_NODE_TYPE_IMM,
  AMED_AARCH32_NODE_TYPE_IMMOFF,
  AMED_AARCH32_NODE_TYPE_IMMOFFSH,
  AMED_AARCH32_NODE_TYPE_LABEL,
  AMED_AARCH32_NODE_TYPE_ADDR,
  AMED_AARCH32_NODE_TYPE_LM,
  AMED_AARCH32_NODE_TYPE_MEM,
  AMED_AARCH32_NODE_TYPE_CSPACE,
  AMED_AARCH32_NODE_TYPE_PSPACE,
  AMED_AARCH32_NODE_TYPE_BNKDREG,
  AMED_AARCH32_NODE_TYPE_SPECREG,
} amed_aarch32_node_type;

#define AMED_AARCH32_MNEMONIC_MAX_TEXT_LENGTH (9 + 1)

typedef enum _amed_aarch32_mnemonic
{
  AMED_AARCH32_MNEMONIC_NONE,
  AMED_AARCH32_MNEMONIC_INVALID,
  AMED_AARCH32_MNEMONIC_ADC,
  AMED_AARCH32_MNEMONIC_ADCS,
  AMED_AARCH32_MNEMONIC_ADD,
  AMED_AARCH32_MNEMONIC_ADDS,
  AMED_AARCH32_MNEMONIC_ADDW,
  AMED_AARCH32_MNEMONIC_ADR,
  AMED_AARCH32_MNEMONIC_AND,
  AMED_AARCH32_MNEMONIC_ANDS,
  AMED_AARCH32_MNEMONIC_B,
  AMED_AARCH32_MNEMONIC_BFC,
  AMED_AARCH32_MNEMONIC_BFI,
  AMED_AARCH32_MNEMONIC_BIC,
  AMED_AARCH32_MNEMONIC_BICS,
  AMED_AARCH32_MNEMONIC_BKPT,
  AMED_AARCH32_MNEMONIC_BL,
  AMED_AARCH32_MNEMONIC_BLX,
  AMED_AARCH32_MNEMONIC_BX,
  AMED_AARCH32_MNEMONIC_BXJ,
  AMED_AARCH32_MNEMONIC_CBNZ,
  AMED_AARCH32_MNEMONIC_CBZ,
  AMED_AARCH32_MNEMONIC_CLREX,
  AMED_AARCH32_MNEMONIC_CLZ,
  AMED_AARCH32_MNEMONIC_CMN,
  AMED_AARCH32_MNEMONIC_CMP,
  AMED_AARCH32_MNEMONIC_CPS,
  AMED_AARCH32_MNEMONIC_CPSID,
  AMED_AARCH32_MNEMONIC_CPSIE,
  AMED_AARCH32_MNEMONIC_CRC32B,
  AMED_AARCH32_MNEMONIC_CRC32H,
  AMED_AARCH32_MNEMONIC_CRC32W,
  AMED_AARCH32_MNEMONIC_CRC32CB,
  AMED_AARCH32_MNEMONIC_CRC32CH,
  AMED_AARCH32_MNEMONIC_CRC32CW,
  AMED_AARCH32_MNEMONIC_CSDB,
  AMED_AARCH32_MNEMONIC_DBG,
  AMED_AARCH32_MNEMONIC_DCPS1,
  AMED_AARCH32_MNEMONIC_DCPS2,
  AMED_AARCH32_MNEMONIC_DCPS3,
  AMED_AARCH32_MNEMONIC_DMB,
  AMED_AARCH32_MNEMONIC_DSB,
  AMED_AARCH32_MNEMONIC_EOR,
  AMED_AARCH32_MNEMONIC_EORS,
  AMED_AARCH32_MNEMONIC_ERET,
  AMED_AARCH32_MNEMONIC_ESB,
  AMED_AARCH32_MNEMONIC_HLT,
  AMED_AARCH32_MNEMONIC_HVC,
  AMED_AARCH32_MNEMONIC_ISB,
  AMED_AARCH32_MNEMONIC_IT,
  AMED_AARCH32_MNEMONIC_LDA,
  AMED_AARCH32_MNEMONIC_LDAB,
  AMED_AARCH32_MNEMONIC_LDAEX,
  AMED_AARCH32_MNEMONIC_LDAEXB,
  AMED_AARCH32_MNEMONIC_LDAEXD,
  AMED_AARCH32_MNEMONIC_LDAEXH,
  AMED_AARCH32_MNEMONIC_LDAH,
  AMED_AARCH32_MNEMONIC_LDC,
  AMED_AARCH32_MNEMONIC_LDM,
  AMED_AARCH32_MNEMONIC_LDMFD,
  AMED_AARCH32_MNEMONIC_LDMIA,
  AMED_AARCH32_MNEMONIC_LDMDA,
  AMED_AARCH32_MNEMONIC_LDMFA,
  AMED_AARCH32_MNEMONIC_LDMDB,
  AMED_AARCH32_MNEMONIC_LDMEA,
  AMED_AARCH32_MNEMONIC_LDMIB,
  AMED_AARCH32_MNEMONIC_LDMED,
  AMED_AARCH32_MNEMONIC_LDR,
  AMED_AARCH32_MNEMONIC_LDRB,
  AMED_AARCH32_MNEMONIC_LDRBT,
  AMED_AARCH32_MNEMONIC_LDRD,
  AMED_AARCH32_MNEMONIC_LDREX,
  AMED_AARCH32_MNEMONIC_LDREXB,
  AMED_AARCH32_MNEMONIC_LDREXD,
  AMED_AARCH32_MNEMONIC_LDREXH,
  AMED_AARCH32_MNEMONIC_LDRH,
  AMED_AARCH32_MNEMONIC_LDRHT,
  AMED_AARCH32_MNEMONIC_LDRSB,
  AMED_AARCH32_MNEMONIC_LDRSBT,
  AMED_AARCH32_MNEMONIC_LDRSH,
  AMED_AARCH32_MNEMONIC_LDRSHT,
  AMED_AARCH32_MNEMONIC_LDRT,
  AMED_AARCH32_MNEMONIC_MCR,
  AMED_AARCH32_MNEMONIC_MCRR,
  AMED_AARCH32_MNEMONIC_MLAS,
  AMED_AARCH32_MNEMONIC_MLA,
  AMED_AARCH32_MNEMONIC_MLS,
  AMED_AARCH32_MNEMONIC_MOV,
  AMED_AARCH32_MNEMONIC_MOVS,
  AMED_AARCH32_MNEMONIC_MOVW,
  AMED_AARCH32_MNEMONIC_MOVT,
  AMED_AARCH32_MNEMONIC_MRC,
  AMED_AARCH32_MNEMONIC_MRRC,
  AMED_AARCH32_MNEMONIC_MRS,
  AMED_AARCH32_MNEMONIC_MSR,
  AMED_AARCH32_MNEMONIC_MULS,
  AMED_AARCH32_MNEMONIC_MUL,
  AMED_AARCH32_MNEMONIC_MVN,
  AMED_AARCH32_MNEMONIC_MVNS,
  AMED_AARCH32_MNEMONIC_NOP,
  AMED_AARCH32_MNEMONIC_ORNS,
  AMED_AARCH32_MNEMONIC_ORN,
  AMED_AARCH32_MNEMONIC_ORR,
  AMED_AARCH32_MNEMONIC_ORRS,
  AMED_AARCH32_MNEMONIC_PKHBT,
  AMED_AARCH32_MNEMONIC_PKHTB,
  AMED_AARCH32_MNEMONIC_PLD,
  AMED_AARCH32_MNEMONIC_PLDW,
  AMED_AARCH32_MNEMONIC_PLI,
  AMED_AARCH32_MNEMONIC_POP,
  AMED_AARCH32_MNEMONIC_PSSBB,
  AMED_AARCH32_MNEMONIC_PUSH,
  AMED_AARCH32_MNEMONIC_STMDB,
  AMED_AARCH32_MNEMONIC_QADD,
  AMED_AARCH32_MNEMONIC_QADD16,
  AMED_AARCH32_MNEMONIC_QADD8,
  AMED_AARCH32_MNEMONIC_QASX,
  AMED_AARCH32_MNEMONIC_QDADD,
  AMED_AARCH32_MNEMONIC_QDSUB,
  AMED_AARCH32_MNEMONIC_QSAX,
  AMED_AARCH32_MNEMONIC_QSUB,
  AMED_AARCH32_MNEMONIC_QSUB16,
  AMED_AARCH32_MNEMONIC_QSUB8,
  AMED_AARCH32_MNEMONIC_RBIT,
  AMED_AARCH32_MNEMONIC_REV,
  AMED_AARCH32_MNEMONIC_REV16,
  AMED_AARCH32_MNEMONIC_REVSH,
  AMED_AARCH32_MNEMONIC_RFEDA,
  AMED_AARCH32_MNEMONIC_RFEDB,
  AMED_AARCH32_MNEMONIC_RFEIA,
  AMED_AARCH32_MNEMONIC_RFEIB,
  AMED_AARCH32_MNEMONIC_RSB,
  AMED_AARCH32_MNEMONIC_RSBS,
  AMED_AARCH32_MNEMONIC_RSC,
  AMED_AARCH32_MNEMONIC_RSCS,
  AMED_AARCH32_MNEMONIC_SADD16,
  AMED_AARCH32_MNEMONIC_SADD8,
  AMED_AARCH32_MNEMONIC_SASX,
  AMED_AARCH32_MNEMONIC_SB,
  AMED_AARCH32_MNEMONIC_SBC,
  AMED_AARCH32_MNEMONIC_SBCS,
  AMED_AARCH32_MNEMONIC_SBFX,
  AMED_AARCH32_MNEMONIC_SDIV,
  AMED_AARCH32_MNEMONIC_SEL,
  AMED_AARCH32_MNEMONIC_SETEND,
  AMED_AARCH32_MNEMONIC_SETPAN,
  AMED_AARCH32_MNEMONIC_SEV,
  AMED_AARCH32_MNEMONIC_SEVL,
  AMED_AARCH32_MNEMONIC_SHADD16,
  AMED_AARCH32_MNEMONIC_SHADD8,
  AMED_AARCH32_MNEMONIC_SHASX,
  AMED_AARCH32_MNEMONIC_SHSAX,
  AMED_AARCH32_MNEMONIC_SHSUB16,
  AMED_AARCH32_MNEMONIC_SHSUB8,
  AMED_AARCH32_MNEMONIC_SMC,
  AMED_AARCH32_MNEMONIC_SMLABB,
  AMED_AARCH32_MNEMONIC_SMLABT,
  AMED_AARCH32_MNEMONIC_SMLATB,
  AMED_AARCH32_MNEMONIC_SMLATT,
  AMED_AARCH32_MNEMONIC_SMLAD,
  AMED_AARCH32_MNEMONIC_SMLADX,
  AMED_AARCH32_MNEMONIC_SMLALS,
  AMED_AARCH32_MNEMONIC_SMLAL,
  AMED_AARCH32_MNEMONIC_SMLALBB,
  AMED_AARCH32_MNEMONIC_SMLALBT,
  AMED_AARCH32_MNEMONIC_SMLALTB,
  AMED_AARCH32_MNEMONIC_SMLALTT,
  AMED_AARCH32_MNEMONIC_SMLALD,
  AMED_AARCH32_MNEMONIC_SMLALDX,
  AMED_AARCH32_MNEMONIC_SMLAWB,
  AMED_AARCH32_MNEMONIC_SMLAWT,
  AMED_AARCH32_MNEMONIC_SMLSD,
  AMED_AARCH32_MNEMONIC_SMLSDX,
  AMED_AARCH32_MNEMONIC_SMLSLD,
  AMED_AARCH32_MNEMONIC_SMLSLDX,
  AMED_AARCH32_MNEMONIC_SMMLA,
  AMED_AARCH32_MNEMONIC_SMMLAR,
  AMED_AARCH32_MNEMONIC_SMMLS,
  AMED_AARCH32_MNEMONIC_SMMLSR,
  AMED_AARCH32_MNEMONIC_SMMUL,
  AMED_AARCH32_MNEMONIC_SMMULR,
  AMED_AARCH32_MNEMONIC_SMUAD,
  AMED_AARCH32_MNEMONIC_SMUADX,
  AMED_AARCH32_MNEMONIC_SMULBB,
  AMED_AARCH32_MNEMONIC_SMULBT,
  AMED_AARCH32_MNEMONIC_SMULTB,
  AMED_AARCH32_MNEMONIC_SMULTT,
  AMED_AARCH32_MNEMONIC_SMULLS,
  AMED_AARCH32_MNEMONIC_SMULL,
  AMED_AARCH32_MNEMONIC_SMULWB,
  AMED_AARCH32_MNEMONIC_SMULWT,
  AMED_AARCH32_MNEMONIC_SMUSD,
  AMED_AARCH32_MNEMONIC_SMUSDX,
  AMED_AARCH32_MNEMONIC_SRSDA,
  AMED_AARCH32_MNEMONIC_SRSDB,
  AMED_AARCH32_MNEMONIC_SRSIA,
  AMED_AARCH32_MNEMONIC_SRSIB,
  AMED_AARCH32_MNEMONIC_SSAT,
  AMED_AARCH32_MNEMONIC_SSAT16,
  AMED_AARCH32_MNEMONIC_SSAX,
  AMED_AARCH32_MNEMONIC_SSBB,
  AMED_AARCH32_MNEMONIC_SSUB16,
  AMED_AARCH32_MNEMONIC_SSUB8,
  AMED_AARCH32_MNEMONIC_STC,
  AMED_AARCH32_MNEMONIC_STL,
  AMED_AARCH32_MNEMONIC_STLB,
  AMED_AARCH32_MNEMONIC_STLEX,
  AMED_AARCH32_MNEMONIC_STLEXB,
  AMED_AARCH32_MNEMONIC_STLEXD,
  AMED_AARCH32_MNEMONIC_STLEXH,
  AMED_AARCH32_MNEMONIC_STLH,
  AMED_AARCH32_MNEMONIC_STM,
  AMED_AARCH32_MNEMONIC_STMEA,
  AMED_AARCH32_MNEMONIC_STMIA,
  AMED_AARCH32_MNEMONIC_STMDA,
  AMED_AARCH32_MNEMONIC_STMED,
  AMED_AARCH32_MNEMONIC_STMFD,
  AMED_AARCH32_MNEMONIC_STMIB,
  AMED_AARCH32_MNEMONIC_STMFA,
  AMED_AARCH32_MNEMONIC_STR,
  AMED_AARCH32_MNEMONIC_STRB,
  AMED_AARCH32_MNEMONIC_STRBT,
  AMED_AARCH32_MNEMONIC_STRD,
  AMED_AARCH32_MNEMONIC_STREX,
  AMED_AARCH32_MNEMONIC_STREXB,
  AMED_AARCH32_MNEMONIC_STREXD,
  AMED_AARCH32_MNEMONIC_STREXH,
  AMED_AARCH32_MNEMONIC_STRH,
  AMED_AARCH32_MNEMONIC_STRHT,
  AMED_AARCH32_MNEMONIC_STRT,
  AMED_AARCH32_MNEMONIC_SUB,
  AMED_AARCH32_MNEMONIC_SUBS,
  AMED_AARCH32_MNEMONIC_SUBW,
  AMED_AARCH32_MNEMONIC_SVC,
  AMED_AARCH32_MNEMONIC_SXTAB,
  AMED_AARCH32_MNEMONIC_SXTAB16,
  AMED_AARCH32_MNEMONIC_SXTAH,
  AMED_AARCH32_MNEMONIC_SXTB,
  AMED_AARCH32_MNEMONIC_SXTB16,
  AMED_AARCH32_MNEMONIC_SXTH,
  AMED_AARCH32_MNEMONIC_TBB,
  AMED_AARCH32_MNEMONIC_TBH,
  AMED_AARCH32_MNEMONIC_TEQ,
  AMED_AARCH32_MNEMONIC_TSB,
  AMED_AARCH32_MNEMONIC_TST,
  AMED_AARCH32_MNEMONIC_UADD16,
  AMED_AARCH32_MNEMONIC_UADD8,
  AMED_AARCH32_MNEMONIC_UASX,
  AMED_AARCH32_MNEMONIC_UBFX,
  AMED_AARCH32_MNEMONIC_UDF,
  AMED_AARCH32_MNEMONIC_UDIV,
  AMED_AARCH32_MNEMONIC_UHADD16,
  AMED_AARCH32_MNEMONIC_UHADD8,
  AMED_AARCH32_MNEMONIC_UHASX,
  AMED_AARCH32_MNEMONIC_UHSAX,
  AMED_AARCH32_MNEMONIC_UHSUB16,
  AMED_AARCH32_MNEMONIC_UHSUB8,
  AMED_AARCH32_MNEMONIC_UMAAL,
  AMED_AARCH32_MNEMONIC_UMLALS,
  AMED_AARCH32_MNEMONIC_UMLAL,
  AMED_AARCH32_MNEMONIC_UMULLS,
  AMED_AARCH32_MNEMONIC_UMULL,
  AMED_AARCH32_MNEMONIC_UQADD16,
  AMED_AARCH32_MNEMONIC_UQADD8,
  AMED_AARCH32_MNEMONIC_UQASX,
  AMED_AARCH32_MNEMONIC_UQSAX,
  AMED_AARCH32_MNEMONIC_UQSUB16,
  AMED_AARCH32_MNEMONIC_UQSUB8,
  AMED_AARCH32_MNEMONIC_USAD8,
  AMED_AARCH32_MNEMONIC_USADA8,
  AMED_AARCH32_MNEMONIC_USAT,
  AMED_AARCH32_MNEMONIC_USAT16,
  AMED_AARCH32_MNEMONIC_USAX,
  AMED_AARCH32_MNEMONIC_USUB16,
  AMED_AARCH32_MNEMONIC_USUB8,
  AMED_AARCH32_MNEMONIC_UXTAB,
  AMED_AARCH32_MNEMONIC_UXTAB16,
  AMED_AARCH32_MNEMONIC_UXTAH,
  AMED_AARCH32_MNEMONIC_UXTB,
  AMED_AARCH32_MNEMONIC_UXTB16,
  AMED_AARCH32_MNEMONIC_UXTH,
  AMED_AARCH32_MNEMONIC_WFE,
  AMED_AARCH32_MNEMONIC_WFI,
  AMED_AARCH32_MNEMONIC_YIELD,
  AMED_AARCH32_MNEMONIC_ASR,
  AMED_AARCH32_MNEMONIC_ASRS,
  AMED_AARCH32_MNEMONIC_LSL,
  AMED_AARCH32_MNEMONIC_LSLS,
  AMED_AARCH32_MNEMONIC_LSR,
  AMED_AARCH32_MNEMONIC_LSRS,
  AMED_AARCH32_MNEMONIC_ROR,
  AMED_AARCH32_MNEMONIC_RORS,
  AMED_AARCH32_MNEMONIC_RRX,
  AMED_AARCH32_MNEMONIC_RRXS,
  AMED_AARCH32_MNEMONIC_AESD,
  AMED_AARCH32_MNEMONIC_AESE,
  AMED_AARCH32_MNEMONIC_AESIMC,
  AMED_AARCH32_MNEMONIC_AESMC,
  AMED_AARCH32_MNEMONIC_FLDMDBX,
  AMED_AARCH32_MNEMONIC_FLDMIAX,
  AMED_AARCH32_MNEMONIC_FSTMDBX,
  AMED_AARCH32_MNEMONIC_FSTMIAX,
  AMED_AARCH32_MNEMONIC_SHA1C,
  AMED_AARCH32_MNEMONIC_SHA1H,
  AMED_AARCH32_MNEMONIC_SHA1M,
  AMED_AARCH32_MNEMONIC_SHA1P,
  AMED_AARCH32_MNEMONIC_SHA1SU0,
  AMED_AARCH32_MNEMONIC_SHA1SU1,
  AMED_AARCH32_MNEMONIC_SHA256H,
  AMED_AARCH32_MNEMONIC_SHA256H2,
  AMED_AARCH32_MNEMONIC_SHA256SU0,
  AMED_AARCH32_MNEMONIC_SHA256SU1,
  AMED_AARCH32_MNEMONIC_VST4,
  AMED_AARCH32_MNEMONIC_VABA,
  AMED_AARCH32_MNEMONIC_VABAL,
  AMED_AARCH32_MNEMONIC_VABD,
  AMED_AARCH32_MNEMONIC_VABDL,
  AMED_AARCH32_MNEMONIC_VABS,
  AMED_AARCH32_MNEMONIC_VACGE,
  AMED_AARCH32_MNEMONIC_VACGT,
  AMED_AARCH32_MNEMONIC_VADD,
  AMED_AARCH32_MNEMONIC_VADDHN,
  AMED_AARCH32_MNEMONIC_VADDL,
  AMED_AARCH32_MNEMONIC_VADDW,
  AMED_AARCH32_MNEMONIC_VAND,
  AMED_AARCH32_MNEMONIC_VBIC,
  AMED_AARCH32_MNEMONIC_VBIF,
  AMED_AARCH32_MNEMONIC_VBIT,
  AMED_AARCH32_MNEMONIC_VBSL,
  AMED_AARCH32_MNEMONIC_VCADD,
  AMED_AARCH32_MNEMONIC_VCEQ,
  AMED_AARCH32_MNEMONIC_VCGE,
  AMED_AARCH32_MNEMONIC_VCGT,
  AMED_AARCH32_MNEMONIC_VCLE,
  AMED_AARCH32_MNEMONIC_VCLS,
  AMED_AARCH32_MNEMONIC_VCLT,
  AMED_AARCH32_MNEMONIC_VCLZ,
  AMED_AARCH32_MNEMONIC_VCMLA,
  AMED_AARCH32_MNEMONIC_VCMP,
  AMED_AARCH32_MNEMONIC_VCMPE,
  AMED_AARCH32_MNEMONIC_VCNT,
  AMED_AARCH32_MNEMONIC_VCVT,
  AMED_AARCH32_MNEMONIC_VCVTA,
  AMED_AARCH32_MNEMONIC_VCVTB,
  AMED_AARCH32_MNEMONIC_VCVTM,
  AMED_AARCH32_MNEMONIC_VCVTN,
  AMED_AARCH32_MNEMONIC_VCVTP,
  AMED_AARCH32_MNEMONIC_VCVTR,
  AMED_AARCH32_MNEMONIC_VCVTT,
  AMED_AARCH32_MNEMONIC_VDIV,
  AMED_AARCH32_MNEMONIC_VDOT,
  AMED_AARCH32_MNEMONIC_VDUP,
  AMED_AARCH32_MNEMONIC_VEOR,
  AMED_AARCH32_MNEMONIC_VEXT,
  AMED_AARCH32_MNEMONIC_VFMA,
  AMED_AARCH32_MNEMONIC_VFMAB,
  AMED_AARCH32_MNEMONIC_VFMAT,
  AMED_AARCH32_MNEMONIC_VFMAL,
  AMED_AARCH32_MNEMONIC_VFMS,
  AMED_AARCH32_MNEMONIC_VFMSL,
  AMED_AARCH32_MNEMONIC_VFNMA,
  AMED_AARCH32_MNEMONIC_VFNMS,
  AMED_AARCH32_MNEMONIC_VHADD,
  AMED_AARCH32_MNEMONIC_VHSUB,
  AMED_AARCH32_MNEMONIC_VINS,
  AMED_AARCH32_MNEMONIC_VJCVT,
  AMED_AARCH32_MNEMONIC_VLD1,
  AMED_AARCH32_MNEMONIC_VLD2,
  AMED_AARCH32_MNEMONIC_VLD3,
  AMED_AARCH32_MNEMONIC_VLD4,
  AMED_AARCH32_MNEMONIC_VLDMDB,
  AMED_AARCH32_MNEMONIC_VLDM,
  AMED_AARCH32_MNEMONIC_VLDMIA,
  AMED_AARCH32_MNEMONIC_VLDR,
  AMED_AARCH32_MNEMONIC_VMAX,
  AMED_AARCH32_MNEMONIC_VMAXNM,
  AMED_AARCH32_MNEMONIC_VMIN,
  AMED_AARCH32_MNEMONIC_VMINNM,
  AMED_AARCH32_MNEMONIC_VMLA,
  AMED_AARCH32_MNEMONIC_VMLAL,
  AMED_AARCH32_MNEMONIC_VMLS,
  AMED_AARCH32_MNEMONIC_VMLSL,
  AMED_AARCH32_MNEMONIC_VMMLA,
  AMED_AARCH32_MNEMONIC_VMOV,
  AMED_AARCH32_MNEMONIC_VMOVL,
  AMED_AARCH32_MNEMONIC_VMOVN,
  AMED_AARCH32_MNEMONIC_VMOVX,
  AMED_AARCH32_MNEMONIC_VMRS,
  AMED_AARCH32_MNEMONIC_VMSR,
  AMED_AARCH32_MNEMONIC_VMUL,
  AMED_AARCH32_MNEMONIC_VMULL,
  AMED_AARCH32_MNEMONIC_VMVN,
  AMED_AARCH32_MNEMONIC_VNEG,
  AMED_AARCH32_MNEMONIC_VNMLA,
  AMED_AARCH32_MNEMONIC_VNMLS,
  AMED_AARCH32_MNEMONIC_VNMUL,
  AMED_AARCH32_MNEMONIC_VORN,
  AMED_AARCH32_MNEMONIC_VORR,
  AMED_AARCH32_MNEMONIC_VPADAL,
  AMED_AARCH32_MNEMONIC_VPADD,
  AMED_AARCH32_MNEMONIC_VPADDL,
  AMED_AARCH32_MNEMONIC_VPMAX,
  AMED_AARCH32_MNEMONIC_VPMIN,
  AMED_AARCH32_MNEMONIC_VQABS,
  AMED_AARCH32_MNEMONIC_VQADD,
  AMED_AARCH32_MNEMONIC_VQDMLAL,
  AMED_AARCH32_MNEMONIC_VQDMLSL,
  AMED_AARCH32_MNEMONIC_VQDMULH,
  AMED_AARCH32_MNEMONIC_VQDMULL,
  AMED_AARCH32_MNEMONIC_VQMOVN,
  AMED_AARCH32_MNEMONIC_VQMOVUN,
  AMED_AARCH32_MNEMONIC_VQNEG,
  AMED_AARCH32_MNEMONIC_VQRDMLAH,
  AMED_AARCH32_MNEMONIC_VQRDMLSH,
  AMED_AARCH32_MNEMONIC_VQRDMULH,
  AMED_AARCH32_MNEMONIC_VQRSHL,
  AMED_AARCH32_MNEMONIC_VQRSHRN,
  AMED_AARCH32_MNEMONIC_VQRSHRUN,
  AMED_AARCH32_MNEMONIC_VQSHL,
  AMED_AARCH32_MNEMONIC_VQSHLU,
  AMED_AARCH32_MNEMONIC_VQSHRN,
  AMED_AARCH32_MNEMONIC_VQSHRUN,
  AMED_AARCH32_MNEMONIC_VQSUB,
  AMED_AARCH32_MNEMONIC_VRADDHN,
  AMED_AARCH32_MNEMONIC_VRECPE,
  AMED_AARCH32_MNEMONIC_VRECPS,
  AMED_AARCH32_MNEMONIC_VREV16,
  AMED_AARCH32_MNEMONIC_VREV32,
  AMED_AARCH32_MNEMONIC_VREV64,
  AMED_AARCH32_MNEMONIC_VRHADD,
  AMED_AARCH32_MNEMONIC_VRINTA,
  AMED_AARCH32_MNEMONIC_VRINTM,
  AMED_AARCH32_MNEMONIC_VRINTN,
  AMED_AARCH32_MNEMONIC_VRINTP,
  AMED_AARCH32_MNEMONIC_VRINTR,
  AMED_AARCH32_MNEMONIC_VRINTX,
  AMED_AARCH32_MNEMONIC_VRINTZ,
  AMED_AARCH32_MNEMONIC_VRSHL,
  AMED_AARCH32_MNEMONIC_VRSHR,
  AMED_AARCH32_MNEMONIC_VRSHRN,
  AMED_AARCH32_MNEMONIC_VRSQRTE,
  AMED_AARCH32_MNEMONIC_VRSQRTS,
  AMED_AARCH32_MNEMONIC_VRSRA,
  AMED_AARCH32_MNEMONIC_VRSUBHN,
  AMED_AARCH32_MNEMONIC_VSDOT,
  AMED_AARCH32_MNEMONIC_VSELEQ,
  AMED_AARCH32_MNEMONIC_VSELGE,
  AMED_AARCH32_MNEMONIC_VSELGT,
  AMED_AARCH32_MNEMONIC_VSELVS,
  AMED_AARCH32_MNEMONIC_VSHL,
  AMED_AARCH32_MNEMONIC_VSHLL,
  AMED_AARCH32_MNEMONIC_VSHR,
  AMED_AARCH32_MNEMONIC_VSHRN,
  AMED_AARCH32_MNEMONIC_VSLI,
  AMED_AARCH32_MNEMONIC_VSMMLA,
  AMED_AARCH32_MNEMONIC_VSQRT,
  AMED_AARCH32_MNEMONIC_VSRA,
  AMED_AARCH32_MNEMONIC_VSRI,
  AMED_AARCH32_MNEMONIC_VST1,
  AMED_AARCH32_MNEMONIC_VST2,
  AMED_AARCH32_MNEMONIC_VST3,
  AMED_AARCH32_MNEMONIC_VSTMDB,
  AMED_AARCH32_MNEMONIC_VSTM,
  AMED_AARCH32_MNEMONIC_VSTMIA,
  AMED_AARCH32_MNEMONIC_VSTR,
  AMED_AARCH32_MNEMONIC_VSUB,
  AMED_AARCH32_MNEMONIC_VSUBHN,
  AMED_AARCH32_MNEMONIC_VSUBL,
  AMED_AARCH32_MNEMONIC_VSUBW,
  AMED_AARCH32_MNEMONIC_VSUDOT,
  AMED_AARCH32_MNEMONIC_VSWP,
  AMED_AARCH32_MNEMONIC_VTBL,
  AMED_AARCH32_MNEMONIC_VTBX,
  AMED_AARCH32_MNEMONIC_VTRN,
  AMED_AARCH32_MNEMONIC_VTST,
  AMED_AARCH32_MNEMONIC_VUDOT,
  AMED_AARCH32_MNEMONIC_VUMMLA,
  AMED_AARCH32_MNEMONIC_VUSDOT,
  AMED_AARCH32_MNEMONIC_VUSMMLA,
  AMED_AARCH32_MNEMONIC_VUZP,
  AMED_AARCH32_MNEMONIC_VZIP,
  AMED_AARCH32_MNEMONIC_VACLE,
  AMED_AARCH32_MNEMONIC_VACLT,
  AMED_AARCH32_MNEMONIC_VPOP,
  AMED_AARCH32_MNEMONIC_VPUSH,
} amed_aarch32_mnemonic;

#define AMED_AARCH32_IFORM_MAX_TEXT_LENGTH (11 + 1)

typedef enum _amed_aarch32_iform
{
  AMED_AARCH32_IFORM_NONE,
  AMED_AARCH32_IFORM_INVALID,
  AMED_AARCH32_IFORM_ADCri,
  AMED_AARCH32_IFORM_ADCSri,
  AMED_AARCH32_IFORM_ADCr,
  AMED_AARCH32_IFORM_ADCSr,
  AMED_AARCH32_IFORM_ADDri,
  AMED_AARCH32_IFORM_ADDSri,
  AMED_AARCH32_IFORM_ADDWri,
  AMED_AARCH32_IFORM_ADDr,
  AMED_AARCH32_IFORM_ADDSr,
  AMED_AARCH32_IFORM_ADDi,
  AMED_AARCH32_IFORM_ADRr,
  AMED_AARCH32_IFORM_ANDri,
  AMED_AARCH32_IFORM_ANDSri,
  AMED_AARCH32_IFORM_ANDr,
  AMED_AARCH32_IFORM_ANDSr,
  AMED_AARCH32_IFORM_B,
  AMED_AARCH32_IFORM_BFCri,
  AMED_AARCH32_IFORM_BFIri,
  AMED_AARCH32_IFORM_BICri,
  AMED_AARCH32_IFORM_BICSri,
  AMED_AARCH32_IFORM_BICr,
  AMED_AARCH32_IFORM_BICSr,
  AMED_AARCH32_IFORM_BKPTi,
  AMED_AARCH32_IFORM_BL,
  AMED_AARCH32_IFORM_BLX,
  AMED_AARCH32_IFORM_BLXr,
  AMED_AARCH32_IFORM_BXr,
  AMED_AARCH32_IFORM_BXJr,
  AMED_AARCH32_IFORM_CBNZr,
  AMED_AARCH32_IFORM_CBZr,
  AMED_AARCH32_IFORM_CLREX,
  AMED_AARCH32_IFORM_CLZr,
  AMED_AARCH32_IFORM_CMNri,
  AMED_AARCH32_IFORM_CMNr,
  AMED_AARCH32_IFORM_CMPri,
  AMED_AARCH32_IFORM_CMPr,
  AMED_AARCH32_IFORM_CPSi,
  AMED_AARCH32_IFORM_CPSID,
  AMED_AARCH32_IFORM_CPSIDi,
  AMED_AARCH32_IFORM_CPSIE,
  AMED_AARCH32_IFORM_CPSIEi,
  AMED_AARCH32_IFORM_CRC32Br,
  AMED_AARCH32_IFORM_CRC32Hr,
  AMED_AARCH32_IFORM_CRC32Wr,
  AMED_AARCH32_IFORM_CRC32CBr,
  AMED_AARCH32_IFORM_CRC32CHr,
  AMED_AARCH32_IFORM_CRC32CWr,
  AMED_AARCH32_IFORM_CSDB,
  AMED_AARCH32_IFORM_DBGi,
  AMED_AARCH32_IFORM_DCPS1,
  AMED_AARCH32_IFORM_DCPS2,
  AMED_AARCH32_IFORM_DCPS3,
  AMED_AARCH32_IFORM_DMB,
  AMED_AARCH32_IFORM_DSB,
  AMED_AARCH32_IFORM_EORri,
  AMED_AARCH32_IFORM_EORSri,
  AMED_AARCH32_IFORM_EORr,
  AMED_AARCH32_IFORM_EORSr,
  AMED_AARCH32_IFORM_ERET,
  AMED_AARCH32_IFORM_ESB,
  AMED_AARCH32_IFORM_HLTi,
  AMED_AARCH32_IFORM_HVCi,
  AMED_AARCH32_IFORM_ISB,
  AMED_AARCH32_IFORM_IT,
  AMED_AARCH32_IFORM_LDArm,
  AMED_AARCH32_IFORM_LDABrm,
  AMED_AARCH32_IFORM_LDAEXrm,
  AMED_AARCH32_IFORM_LDAEXBrm,
  AMED_AARCH32_IFORM_LDAEXDrm,
  AMED_AARCH32_IFORM_LDAEXHrm,
  AMED_AARCH32_IFORM_LDAHrm,
  AMED_AARCH32_IFORM_LDCm,
  AMED_AARCH32_IFORM_LDC,
  AMED_AARCH32_IFORM_LDMrl,
  AMED_AARCH32_IFORM_LDMFDrl,
  AMED_AARCH32_IFORM_LDMIArl,
  AMED_AARCH32_IFORM_LDMDArl,
  AMED_AARCH32_IFORM_LDMFArl,
  AMED_AARCH32_IFORM_LDMDBrl,
  AMED_AARCH32_IFORM_LDMEArl,
  AMED_AARCH32_IFORM_LDMIBrl,
  AMED_AARCH32_IFORM_LDMEDrl,
  AMED_AARCH32_IFORM_LDRrm,
  AMED_AARCH32_IFORM_LDRr,
  AMED_AARCH32_IFORM_LDRBrm,
  AMED_AARCH32_IFORM_LDRBr,
  AMED_AARCH32_IFORM_LDRBTrm,
  AMED_AARCH32_IFORM_LDRDrm,
  AMED_AARCH32_IFORM_LDRDr,
  AMED_AARCH32_IFORM_LDREXrm,
  AMED_AARCH32_IFORM_LDREXBrm,
  AMED_AARCH32_IFORM_LDREXDrm,
  AMED_AARCH32_IFORM_LDREXHrm,
  AMED_AARCH32_IFORM_LDRHrm,
  AMED_AARCH32_IFORM_LDRHr,
  AMED_AARCH32_IFORM_LDRHTrm,
  AMED_AARCH32_IFORM_LDRSBrm,
  AMED_AARCH32_IFORM_LDRSBr,
  AMED_AARCH32_IFORM_LDRSBTrm,
  AMED_AARCH32_IFORM_LDRSHrm,
  AMED_AARCH32_IFORM_LDRSHr,
  AMED_AARCH32_IFORM_LDRSHTrm,
  AMED_AARCH32_IFORM_LDRTrm,
  AMED_AARCH32_IFORM_MCRir,
  AMED_AARCH32_IFORM_MCRRir,
  AMED_AARCH32_IFORM_MLASr,
  AMED_AARCH32_IFORM_MLAr,
  AMED_AARCH32_IFORM_MLSr,
  AMED_AARCH32_IFORM_MOVri,
  AMED_AARCH32_IFORM_MOVSri,
  AMED_AARCH32_IFORM_MOVWri,
  AMED_AARCH32_IFORM_MOVr,
  AMED_AARCH32_IFORM_MOVSr,
  AMED_AARCH32_IFORM_MOVTri,
  AMED_AARCH32_IFORM_MRCir,
  AMED_AARCH32_IFORM_MRRCir,
  AMED_AARCH32_IFORM_MRSr,
  AMED_AARCH32_IFORM_MSRr,
  AMED_AARCH32_IFORM_MSRi,
  AMED_AARCH32_IFORM_MULSr,
  AMED_AARCH32_IFORM_MULr,
  AMED_AARCH32_IFORM_MVNri,
  AMED_AARCH32_IFORM_MVNSri,
  AMED_AARCH32_IFORM_MVNr,
  AMED_AARCH32_IFORM_MVNSr,
  AMED_AARCH32_IFORM_NOP,
  AMED_AARCH32_IFORM_ORNSri,
  AMED_AARCH32_IFORM_ORNri,
  AMED_AARCH32_IFORM_ORNr,
  AMED_AARCH32_IFORM_ORNSr,
  AMED_AARCH32_IFORM_ORRri,
  AMED_AARCH32_IFORM_ORRSri,
  AMED_AARCH32_IFORM_ORRr,
  AMED_AARCH32_IFORM_ORRSr,
  AMED_AARCH32_IFORM_PKHBTr,
  AMED_AARCH32_IFORM_PKHTBr,
  AMED_AARCH32_IFORM_PLDm,
  AMED_AARCH32_IFORM_PLDWm,
  AMED_AARCH32_IFORM_PLD,
  AMED_AARCH32_IFORM_PLI,
  AMED_AARCH32_IFORM_PLIm,
  AMED_AARCH32_IFORM_POPl,
  AMED_AARCH32_IFORM_LDMl,
  AMED_AARCH32_IFORM_PSSBB,
  AMED_AARCH32_IFORM_PUSHl,
  AMED_AARCH32_IFORM_STMDBl,
  AMED_AARCH32_IFORM_QADDr,
  AMED_AARCH32_IFORM_QADD16r,
  AMED_AARCH32_IFORM_QADD8r,
  AMED_AARCH32_IFORM_QASXr,
  AMED_AARCH32_IFORM_QDADDr,
  AMED_AARCH32_IFORM_QDSUBr,
  AMED_AARCH32_IFORM_QSAXr,
  AMED_AARCH32_IFORM_QSUBr,
  AMED_AARCH32_IFORM_QSUB16r,
  AMED_AARCH32_IFORM_QSUB8r,
  AMED_AARCH32_IFORM_RBITr,
  AMED_AARCH32_IFORM_REVr,
  AMED_AARCH32_IFORM_REV16r,
  AMED_AARCH32_IFORM_REVSHr,
  AMED_AARCH32_IFORM_RFEDAr,
  AMED_AARCH32_IFORM_RFEDBr,
  AMED_AARCH32_IFORM_RFEIAr,
  AMED_AARCH32_IFORM_RFEIBr,
  AMED_AARCH32_IFORM_RSBri,
  AMED_AARCH32_IFORM_RSBSri,
  AMED_AARCH32_IFORM_RSBr,
  AMED_AARCH32_IFORM_RSBSr,
  AMED_AARCH32_IFORM_RSCri,
  AMED_AARCH32_IFORM_RSCSri,
  AMED_AARCH32_IFORM_RSCr,
  AMED_AARCH32_IFORM_RSCSr,
  AMED_AARCH32_IFORM_SADD16r,
  AMED_AARCH32_IFORM_SADD8r,
  AMED_AARCH32_IFORM_SASXr,
  AMED_AARCH32_IFORM_SB,
  AMED_AARCH32_IFORM_SBCri,
  AMED_AARCH32_IFORM_SBCSri,
  AMED_AARCH32_IFORM_SBCr,
  AMED_AARCH32_IFORM_SBCSr,
  AMED_AARCH32_IFORM_SBFXri,
  AMED_AARCH32_IFORM_SDIVr,
  AMED_AARCH32_IFORM_SELr,
  AMED_AARCH32_IFORM_SETEND,
  AMED_AARCH32_IFORM_SETPANi,
  AMED_AARCH32_IFORM_SEV,
  AMED_AARCH32_IFORM_SEVL,
  AMED_AARCH32_IFORM_SHADD16r,
  AMED_AARCH32_IFORM_SHADD8r,
  AMED_AARCH32_IFORM_SHASXr,
  AMED_AARCH32_IFORM_SHSAXr,
  AMED_AARCH32_IFORM_SHSUB16r,
  AMED_AARCH32_IFORM_SHSUB8r,
  AMED_AARCH32_IFORM_SMCi,
  AMED_AARCH32_IFORM_SMLABBr,
  AMED_AARCH32_IFORM_SMLABTr,
  AMED_AARCH32_IFORM_SMLATBr,
  AMED_AARCH32_IFORM_SMLATTr,
  AMED_AARCH32_IFORM_SMLADr,
  AMED_AARCH32_IFORM_SMLADXr,
  AMED_AARCH32_IFORM_SMLALSr,
  AMED_AARCH32_IFORM_SMLALr,
  AMED_AARCH32_IFORM_SMLALBBr,
  AMED_AARCH32_IFORM_SMLALBTr,
  AMED_AARCH32_IFORM_SMLALTBr,
  AMED_AARCH32_IFORM_SMLALTTr,
  AMED_AARCH32_IFORM_SMLALDr,
  AMED_AARCH32_IFORM_SMLALDXr,
  AMED_AARCH32_IFORM_SMLAWBr,
  AMED_AARCH32_IFORM_SMLAWTr,
  AMED_AARCH32_IFORM_SMLSDr,
  AMED_AARCH32_IFORM_SMLSDXr,
  AMED_AARCH32_IFORM_SMLSLDr,
  AMED_AARCH32_IFORM_SMLSLDXr,
  AMED_AARCH32_IFORM_SMMLAr,
  AMED_AARCH32_IFORM_SMMLARr,
  AMED_AARCH32_IFORM_SMMLSr,
  AMED_AARCH32_IFORM_SMMLSRr,
  AMED_AARCH32_IFORM_SMMULr,
  AMED_AARCH32_IFORM_SMMULRr,
  AMED_AARCH32_IFORM_SMUADr,
  AMED_AARCH32_IFORM_SMUADXr,
  AMED_AARCH32_IFORM_SMULBBr,
  AMED_AARCH32_IFORM_SMULBTr,
  AMED_AARCH32_IFORM_SMULTBr,
  AMED_AARCH32_IFORM_SMULTTr,
  AMED_AARCH32_IFORM_SMULLSr,
  AMED_AARCH32_IFORM_SMULLr,
  AMED_AARCH32_IFORM_SMULWBr,
  AMED_AARCH32_IFORM_SMULWTr,
  AMED_AARCH32_IFORM_SMUSDr,
  AMED_AARCH32_IFORM_SMUSDXr,
  AMED_AARCH32_IFORM_SRSDAi,
  AMED_AARCH32_IFORM_SRSDBi,
  AMED_AARCH32_IFORM_SRSIAi,
  AMED_AARCH32_IFORM_SRSIBi,
  AMED_AARCH32_IFORM_SSATri,
  AMED_AARCH32_IFORM_SSAT16ri,
  AMED_AARCH32_IFORM_SSAXr,
  AMED_AARCH32_IFORM_SSBB,
  AMED_AARCH32_IFORM_SSUB16r,
  AMED_AARCH32_IFORM_SSUB8r,
  AMED_AARCH32_IFORM_STCm,
  AMED_AARCH32_IFORM_STLrm,
  AMED_AARCH32_IFORM_STLBrm,
  AMED_AARCH32_IFORM_STLEXrm,
  AMED_AARCH32_IFORM_STLEXBrm,
  AMED_AARCH32_IFORM_STLEXDrm,
  AMED_AARCH32_IFORM_STLEXHrm,
  AMED_AARCH32_IFORM_STLHrm,
  AMED_AARCH32_IFORM_STMrl,
  AMED_AARCH32_IFORM_STMEArl,
  AMED_AARCH32_IFORM_STMIArl,
  AMED_AARCH32_IFORM_STMDArl,
  AMED_AARCH32_IFORM_STMEDrl,
  AMED_AARCH32_IFORM_STMDBrl,
  AMED_AARCH32_IFORM_STMFDrl,
  AMED_AARCH32_IFORM_STMIBrl,
  AMED_AARCH32_IFORM_STMFArl,
  AMED_AARCH32_IFORM_STRrm,
  AMED_AARCH32_IFORM_STRBrm,
  AMED_AARCH32_IFORM_STRBTrm,
  AMED_AARCH32_IFORM_STRDrm,
  AMED_AARCH32_IFORM_STREXrm,
  AMED_AARCH32_IFORM_STREXBrm,
  AMED_AARCH32_IFORM_STREXDrm,
  AMED_AARCH32_IFORM_STREXHrm,
  AMED_AARCH32_IFORM_STRHrm,
  AMED_AARCH32_IFORM_STRHTrm,
  AMED_AARCH32_IFORM_STRTrm,
  AMED_AARCH32_IFORM_SUBri,
  AMED_AARCH32_IFORM_SUBSri,
  AMED_AARCH32_IFORM_SUBWri,
  AMED_AARCH32_IFORM_SUBSi,
  AMED_AARCH32_IFORM_SUBr,
  AMED_AARCH32_IFORM_SUBSr,
  AMED_AARCH32_IFORM_SUBi,
  AMED_AARCH32_IFORM_SVCi,
  AMED_AARCH32_IFORM_SXTABr,
  AMED_AARCH32_IFORM_SXTAB16r,
  AMED_AARCH32_IFORM_SXTAHr,
  AMED_AARCH32_IFORM_SXTBr,
  AMED_AARCH32_IFORM_SXTB16r,
  AMED_AARCH32_IFORM_SXTHr,
  AMED_AARCH32_IFORM_TBBm,
  AMED_AARCH32_IFORM_TBHm,
  AMED_AARCH32_IFORM_TEQri,
  AMED_AARCH32_IFORM_TEQr,
  AMED_AARCH32_IFORM_TSB,
  AMED_AARCH32_IFORM_TSTri,
  AMED_AARCH32_IFORM_TSTr,
  AMED_AARCH32_IFORM_UADD16r,
  AMED_AARCH32_IFORM_UADD8r,
  AMED_AARCH32_IFORM_UASXr,
  AMED_AARCH32_IFORM_UBFXri,
  AMED_AARCH32_IFORM_UDFi,
  AMED_AARCH32_IFORM_UDIVr,
  AMED_AARCH32_IFORM_UHADD16r,
  AMED_AARCH32_IFORM_UHADD8r,
  AMED_AARCH32_IFORM_UHASXr,
  AMED_AARCH32_IFORM_UHSAXr,
  AMED_AARCH32_IFORM_UHSUB16r,
  AMED_AARCH32_IFORM_UHSUB8r,
  AMED_AARCH32_IFORM_UMAALr,
  AMED_AARCH32_IFORM_UMLALSr,
  AMED_AARCH32_IFORM_UMLALr,
  AMED_AARCH32_IFORM_UMULLSr,
  AMED_AARCH32_IFORM_UMULLr,
  AMED_AARCH32_IFORM_UQADD16r,
  AMED_AARCH32_IFORM_UQADD8r,
  AMED_AARCH32_IFORM_UQASXr,
  AMED_AARCH32_IFORM_UQSAXr,
  AMED_AARCH32_IFORM_UQSUB16r,
  AMED_AARCH32_IFORM_UQSUB8r,
  AMED_AARCH32_IFORM_USAD8r,
  AMED_AARCH32_IFORM_USADA8r,
  AMED_AARCH32_IFORM_USATri,
  AMED_AARCH32_IFORM_USAT16ri,
  AMED_AARCH32_IFORM_USAXr,
  AMED_AARCH32_IFORM_USUB16r,
  AMED_AARCH32_IFORM_USUB8r,
  AMED_AARCH32_IFORM_UXTABr,
  AMED_AARCH32_IFORM_UXTAB16r,
  AMED_AARCH32_IFORM_UXTAHr,
  AMED_AARCH32_IFORM_UXTBr,
  AMED_AARCH32_IFORM_UXTB16r,
  AMED_AARCH32_IFORM_UXTHr,
  AMED_AARCH32_IFORM_WFE,
  AMED_AARCH32_IFORM_WFI,
  AMED_AARCH32_IFORM_YIELD,
  AMED_AARCH32_IFORM_ASRri,
  AMED_AARCH32_IFORM_ASRr,
  AMED_AARCH32_IFORM_ASRSri,
  AMED_AARCH32_IFORM_ASRSr,
  AMED_AARCH32_IFORM_LSLri,
  AMED_AARCH32_IFORM_LSLr,
  AMED_AARCH32_IFORM_LSLSri,
  AMED_AARCH32_IFORM_LSLSr,
  AMED_AARCH32_IFORM_LSRri,
  AMED_AARCH32_IFORM_LSRr,
  AMED_AARCH32_IFORM_LSRSri,
  AMED_AARCH32_IFORM_LSRSr,
  AMED_AARCH32_IFORM_RORri,
  AMED_AARCH32_IFORM_RORr,
  AMED_AARCH32_IFORM_RORSri,
  AMED_AARCH32_IFORM_RORSr,
  AMED_AARCH32_IFORM_RRXr,
  AMED_AARCH32_IFORM_RRXSr,
  AMED_AARCH32_IFORM_AESDq,
  AMED_AARCH32_IFORM_AESEq,
  AMED_AARCH32_IFORM_AESIMCq,
  AMED_AARCH32_IFORM_AESMCq,
  AMED_AARCH32_IFORM_FLDMDBXrl,
  AMED_AARCH32_IFORM_FLDMIAXrl,
  AMED_AARCH32_IFORM_FSTMDBXrl,
  AMED_AARCH32_IFORM_FSTMIAXrl,
  AMED_AARCH32_IFORM_SHA1Cq,
  AMED_AARCH32_IFORM_SHA1Hq,
  AMED_AARCH32_IFORM_SHA1Mq,
  AMED_AARCH32_IFORM_SHA1Pq,
  AMED_AARCH32_IFORM_SHA1SU0q,
  AMED_AARCH32_IFORM_SHA1SU1q,
  AMED_AARCH32_IFORM_SHA256Hq,
  AMED_AARCH32_IFORM_SHA256H2q,
  AMED_AARCH32_IFORM_SHA256SU0q,
  AMED_AARCH32_IFORM_SHA256SU1q,
  AMED_AARCH32_IFORM_VST4lm,
  AMED_AARCH32_IFORM_VABAd,
  AMED_AARCH32_IFORM_VABAq,
  AMED_AARCH32_IFORM_VABALqd,
  AMED_AARCH32_IFORM_VABDd,
  AMED_AARCH32_IFORM_VABDq,
  AMED_AARCH32_IFORM_VABDLqd,
  AMED_AARCH32_IFORM_VABSd,
  AMED_AARCH32_IFORM_VABSq,
  AMED_AARCH32_IFORM_VABSs,
  AMED_AARCH32_IFORM_VACGEd,
  AMED_AARCH32_IFORM_VACGEq,
  AMED_AARCH32_IFORM_VACGTd,
  AMED_AARCH32_IFORM_VACGTq,
  AMED_AARCH32_IFORM_VADDd,
  AMED_AARCH32_IFORM_VADDq,
  AMED_AARCH32_IFORM_VADDs,
  AMED_AARCH32_IFORM_VADDHNdq,
  AMED_AARCH32_IFORM_VADDLqd,
  AMED_AARCH32_IFORM_VADDWqd,
  AMED_AARCH32_IFORM_VANDd,
  AMED_AARCH32_IFORM_VANDq,
  AMED_AARCH32_IFORM_VBICdi,
  AMED_AARCH32_IFORM_VBICqi,
  AMED_AARCH32_IFORM_VBICd,
  AMED_AARCH32_IFORM_VBICq,
  AMED_AARCH32_IFORM_VBIFd,
  AMED_AARCH32_IFORM_VBIFq,
  AMED_AARCH32_IFORM_VBITd,
  AMED_AARCH32_IFORM_VBITq,
  AMED_AARCH32_IFORM_VBSLd,
  AMED_AARCH32_IFORM_VBSLq,
  AMED_AARCH32_IFORM_VCADDdi,
  AMED_AARCH32_IFORM_VCADDqi,
  AMED_AARCH32_IFORM_VCEQdi,
  AMED_AARCH32_IFORM_VCEQqi,
  AMED_AARCH32_IFORM_VCEQd,
  AMED_AARCH32_IFORM_VCEQq,
  AMED_AARCH32_IFORM_VCGEdi,
  AMED_AARCH32_IFORM_VCGEqi,
  AMED_AARCH32_IFORM_VCGEd,
  AMED_AARCH32_IFORM_VCGEq,
  AMED_AARCH32_IFORM_VCGTdi,
  AMED_AARCH32_IFORM_VCGTqi,
  AMED_AARCH32_IFORM_VCGTd,
  AMED_AARCH32_IFORM_VCGTq,
  AMED_AARCH32_IFORM_VCLEdi,
  AMED_AARCH32_IFORM_VCLEqi,
  AMED_AARCH32_IFORM_VCLSd,
  AMED_AARCH32_IFORM_VCLSq,
  AMED_AARCH32_IFORM_VCLTdi,
  AMED_AARCH32_IFORM_VCLTqi,
  AMED_AARCH32_IFORM_VCLZd,
  AMED_AARCH32_IFORM_VCLZq,
  AMED_AARCH32_IFORM_VCMLAdi,
  AMED_AARCH32_IFORM_VCMLAqi,
  AMED_AARCH32_IFORM_VCMLAqdi,
  AMED_AARCH32_IFORM_VCMPs,
  AMED_AARCH32_IFORM_VCMPd,
  AMED_AARCH32_IFORM_VCMPsi,
  AMED_AARCH32_IFORM_VCMPdi,
  AMED_AARCH32_IFORM_VCMPEs,
  AMED_AARCH32_IFORM_VCMPEd,
  AMED_AARCH32_IFORM_VCMPEsi,
  AMED_AARCH32_IFORM_VCMPEdi,
  AMED_AARCH32_IFORM_VCNTd,
  AMED_AARCH32_IFORM_VCNTq,
  AMED_AARCH32_IFORM_VCVTdq,
  AMED_AARCH32_IFORM_VCVTds,
  AMED_AARCH32_IFORM_VCVTsd,
  AMED_AARCH32_IFORM_VCVTqd,
  AMED_AARCH32_IFORM_VCVTd,
  AMED_AARCH32_IFORM_VCVTq,
  AMED_AARCH32_IFORM_VCVTs,
  AMED_AARCH32_IFORM_VCVTdi,
  AMED_AARCH32_IFORM_VCVTqi,
  AMED_AARCH32_IFORM_VCVTsi,
  AMED_AARCH32_IFORM_VCVTAd,
  AMED_AARCH32_IFORM_VCVTAq,
  AMED_AARCH32_IFORM_VCVTAs,
  AMED_AARCH32_IFORM_VCVTAsd,
  AMED_AARCH32_IFORM_VCVTBs,
  AMED_AARCH32_IFORM_VCVTBds,
  AMED_AARCH32_IFORM_VCVTBsd,
  AMED_AARCH32_IFORM_VCVTMd,
  AMED_AARCH32_IFORM_VCVTMq,
  AMED_AARCH32_IFORM_VCVTMs,
  AMED_AARCH32_IFORM_VCVTMsd,
  AMED_AARCH32_IFORM_VCVTNd,
  AMED_AARCH32_IFORM_VCVTNq,
  AMED_AARCH32_IFORM_VCVTNs,
  AMED_AARCH32_IFORM_VCVTNsd,
  AMED_AARCH32_IFORM_VCVTPd,
  AMED_AARCH32_IFORM_VCVTPq,
  AMED_AARCH32_IFORM_VCVTPs,
  AMED_AARCH32_IFORM_VCVTPsd,
  AMED_AARCH32_IFORM_VCVTRs,
  AMED_AARCH32_IFORM_VCVTRsd,
  AMED_AARCH32_IFORM_VCVTTs,
  AMED_AARCH32_IFORM_VCVTTds,
  AMED_AARCH32_IFORM_VCVTTsd,
  AMED_AARCH32_IFORM_VDIVs,
  AMED_AARCH32_IFORM_VDIVd,
  AMED_AARCH32_IFORM_VDOTd,
  AMED_AARCH32_IFORM_VDOTq,
  AMED_AARCH32_IFORM_VDOTqd,
  AMED_AARCH32_IFORM_VDUPqr,
  AMED_AARCH32_IFORM_VDUPdr,
  AMED_AARCH32_IFORM_VDUPd,
  AMED_AARCH32_IFORM_VDUPqd,
  AMED_AARCH32_IFORM_VEORd,
  AMED_AARCH32_IFORM_VEORq,
  AMED_AARCH32_IFORM_VEXTdi,
  AMED_AARCH32_IFORM_VEXTqi,
  AMED_AARCH32_IFORM_VFMAd,
  AMED_AARCH32_IFORM_VFMAq,
  AMED_AARCH32_IFORM_VFMAs,
  AMED_AARCH32_IFORM_VFMABq,
  AMED_AARCH32_IFORM_VFMATq,
  AMED_AARCH32_IFORM_VFMABqd,
  AMED_AARCH32_IFORM_VFMATqd,
  AMED_AARCH32_IFORM_VFMALds,
  AMED_AARCH32_IFORM_VFMALqd,
  AMED_AARCH32_IFORM_VFMSd,
  AMED_AARCH32_IFORM_VFMSq,
  AMED_AARCH32_IFORM_VFMSs,
  AMED_AARCH32_IFORM_VFMSLds,
  AMED_AARCH32_IFORM_VFMSLqd,
  AMED_AARCH32_IFORM_VFNMAs,
  AMED_AARCH32_IFORM_VFNMAd,
  AMED_AARCH32_IFORM_VFNMSs,
  AMED_AARCH32_IFORM_VFNMSd,
  AMED_AARCH32_IFORM_VHADDd,
  AMED_AARCH32_IFORM_VHADDq,
  AMED_AARCH32_IFORM_VHSUBd,
  AMED_AARCH32_IFORM_VHSUBq,
  AMED_AARCH32_IFORM_VINSs,
  AMED_AARCH32_IFORM_VJCVTsd,
  AMED_AARCH32_IFORM_VLD1lm,
  AMED_AARCH32_IFORM_VLD2lm,
  AMED_AARCH32_IFORM_VLD3lm,
  AMED_AARCH32_IFORM_VLD4lm,
  AMED_AARCH32_IFORM_VLDMDBrl,
  AMED_AARCH32_IFORM_VLDMrl,
  AMED_AARCH32_IFORM_VLDMIArl,
  AMED_AARCH32_IFORM_VLDRsm,
  AMED_AARCH32_IFORM_VLDRdm,
  AMED_AARCH32_IFORM_VLDRs,
  AMED_AARCH32_IFORM_VLDRd,
  AMED_AARCH32_IFORM_VMAXd,
  AMED_AARCH32_IFORM_VMAXq,
  AMED_AARCH32_IFORM_VMAXNMd,
  AMED_AARCH32_IFORM_VMAXNMq,
  AMED_AARCH32_IFORM_VMAXNMs,
  AMED_AARCH32_IFORM_VMINd,
  AMED_AARCH32_IFORM_VMINq,
  AMED_AARCH32_IFORM_VMINNMd,
  AMED_AARCH32_IFORM_VMINNMq,
  AMED_AARCH32_IFORM_VMINNMs,
  AMED_AARCH32_IFORM_VMLAd,
  AMED_AARCH32_IFORM_VMLAq,
  AMED_AARCH32_IFORM_VMLAs,
  AMED_AARCH32_IFORM_VMLAqd,
  AMED_AARCH32_IFORM_VMLALqd,
  AMED_AARCH32_IFORM_VMLSd,
  AMED_AARCH32_IFORM_VMLSq,
  AMED_AARCH32_IFORM_VMLSs,
  AMED_AARCH32_IFORM_VMLSqd,
  AMED_AARCH32_IFORM_VMLSLqd,
  AMED_AARCH32_IFORM_VMMLAq,
  AMED_AARCH32_IFORM_VMOVdr,
  AMED_AARCH32_IFORM_VMOVrd,
  AMED_AARCH32_IFORM_VMOVsr,
  AMED_AARCH32_IFORM_VMOVrs,
  AMED_AARCH32_IFORM_VMOVdi,
  AMED_AARCH32_IFORM_VMOVqi,
  AMED_AARCH32_IFORM_VMOVsi,
  AMED_AARCH32_IFORM_VMOVs,
  AMED_AARCH32_IFORM_VMOVd,
  AMED_AARCH32_IFORM_VMOVLqd,
  AMED_AARCH32_IFORM_VMOVNdq,
  AMED_AARCH32_IFORM_VMOVXs,
  AMED_AARCH32_IFORM_VMRSr,
  AMED_AARCH32_IFORM_VMSRr,
  AMED_AARCH32_IFORM_VMULd,
  AMED_AARCH32_IFORM_VMULq,
  AMED_AARCH32_IFORM_VMULs,
  AMED_AARCH32_IFORM_VMULqd,
  AMED_AARCH32_IFORM_VMULLqd,
  AMED_AARCH32_IFORM_VMVNdi,
  AMED_AARCH32_IFORM_VMVNqi,
  AMED_AARCH32_IFORM_VMVNd,
  AMED_AARCH32_IFORM_VMVNq,
  AMED_AARCH32_IFORM_VNEGd,
  AMED_AARCH32_IFORM_VNEGq,
  AMED_AARCH32_IFORM_VNEGs,
  AMED_AARCH32_IFORM_VNMLAs,
  AMED_AARCH32_IFORM_VNMLAd,
  AMED_AARCH32_IFORM_VNMLSs,
  AMED_AARCH32_IFORM_VNMLSd,
  AMED_AARCH32_IFORM_VNMULs,
  AMED_AARCH32_IFORM_VNMULd,
  AMED_AARCH32_IFORM_VORNd,
  AMED_AARCH32_IFORM_VORNq,
  AMED_AARCH32_IFORM_VORRdi,
  AMED_AARCH32_IFORM_VORRqi,
  AMED_AARCH32_IFORM_VORRd,
  AMED_AARCH32_IFORM_VORRq,
  AMED_AARCH32_IFORM_VPADALd,
  AMED_AARCH32_IFORM_VPADALq,
  AMED_AARCH32_IFORM_VPADDd,
  AMED_AARCH32_IFORM_VPADDLd,
  AMED_AARCH32_IFORM_VPADDLq,
  AMED_AARCH32_IFORM_VPMAXd,
  AMED_AARCH32_IFORM_VPMINd,
  AMED_AARCH32_IFORM_VQABSd,
  AMED_AARCH32_IFORM_VQABSq,
  AMED_AARCH32_IFORM_VQADDd,
  AMED_AARCH32_IFORM_VQADDq,
  AMED_AARCH32_IFORM_VQDMLALqd,
  AMED_AARCH32_IFORM_VQDMLSLqd,
  AMED_AARCH32_IFORM_VQDMULHd,
  AMED_AARCH32_IFORM_VQDMULHq,
  AMED_AARCH32_IFORM_VQDMULHqd,
  AMED_AARCH32_IFORM_VQDMULLqd,
  AMED_AARCH32_IFORM_VQMOVNdq,
  AMED_AARCH32_IFORM_VQMOVUNdq,
  AMED_AARCH32_IFORM_VQNEGd,
  AMED_AARCH32_IFORM_VQNEGq,
  AMED_AARCH32_IFORM_VQRDMLAHd,
  AMED_AARCH32_IFORM_VQRDMLAHq,
  AMED_AARCH32_IFORM_VQRDMLAHqd,
  AMED_AARCH32_IFORM_VQRDMLSHd,
  AMED_AARCH32_IFORM_VQRDMLSHq,
  AMED_AARCH32_IFORM_VQRDMLSHqd,
  AMED_AARCH32_IFORM_VQRDMULHd,
  AMED_AARCH32_IFORM_VQRDMULHq,
  AMED_AARCH32_IFORM_VQRDMULHqd,
  AMED_AARCH32_IFORM_VQRSHLd,
  AMED_AARCH32_IFORM_VQRSHLq,
  AMED_AARCH32_IFORM_VQRSHRNdqi,
  AMED_AARCH32_IFORM_VQRSHRUNdqi,
  AMED_AARCH32_IFORM_VQSHLdi,
  AMED_AARCH32_IFORM_VQSHLqi,
  AMED_AARCH32_IFORM_VQSHLUdi,
  AMED_AARCH32_IFORM_VQSHLUqi,
  AMED_AARCH32_IFORM_VQSHLd,
  AMED_AARCH32_IFORM_VQSHLq,
  AMED_AARCH32_IFORM_VQSHRNdqi,
  AMED_AARCH32_IFORM_VQSHRUNdqi,
  AMED_AARCH32_IFORM_VQSUBd,
  AMED_AARCH32_IFORM_VQSUBq,
  AMED_AARCH32_IFORM_VRADDHNdq,
  AMED_AARCH32_IFORM_VRECPEd,
  AMED_AARCH32_IFORM_VRECPEq,
  AMED_AARCH32_IFORM_VRECPSd,
  AMED_AARCH32_IFORM_VRECPSq,
  AMED_AARCH32_IFORM_VREV16d,
  AMED_AARCH32_IFORM_VREV16q,
  AMED_AARCH32_IFORM_VREV32d,
  AMED_AARCH32_IFORM_VREV32q,
  AMED_AARCH32_IFORM_VREV64d,
  AMED_AARCH32_IFORM_VREV64q,
  AMED_AARCH32_IFORM_VRHADDd,
  AMED_AARCH32_IFORM_VRHADDq,
  AMED_AARCH32_IFORM_VRINTAd,
  AMED_AARCH32_IFORM_VRINTAq,
  AMED_AARCH32_IFORM_VRINTAs,
  AMED_AARCH32_IFORM_VRINTMd,
  AMED_AARCH32_IFORM_VRINTMq,
  AMED_AARCH32_IFORM_VRINTMs,
  AMED_AARCH32_IFORM_VRINTNd,
  AMED_AARCH32_IFORM_VRINTNq,
  AMED_AARCH32_IFORM_VRINTNs,
  AMED_AARCH32_IFORM_VRINTPd,
  AMED_AARCH32_IFORM_VRINTPq,
  AMED_AARCH32_IFORM_VRINTPs,
  AMED_AARCH32_IFORM_VRINTRs,
  AMED_AARCH32_IFORM_VRINTRd,
  AMED_AARCH32_IFORM_VRINTXd,
  AMED_AARCH32_IFORM_VRINTXq,
  AMED_AARCH32_IFORM_VRINTXs,
  AMED_AARCH32_IFORM_VRINTZd,
  AMED_AARCH32_IFORM_VRINTZq,
  AMED_AARCH32_IFORM_VRINTZs,
  AMED_AARCH32_IFORM_VRSHLd,
  AMED_AARCH32_IFORM_VRSHLq,
  AMED_AARCH32_IFORM_VRSHRdi,
  AMED_AARCH32_IFORM_VRSHRqi,
  AMED_AARCH32_IFORM_VRSHRNdqi,
  AMED_AARCH32_IFORM_VRSQRTEd,
  AMED_AARCH32_IFORM_VRSQRTEq,
  AMED_AARCH32_IFORM_VRSQRTSd,
  AMED_AARCH32_IFORM_VRSQRTSq,
  AMED_AARCH32_IFORM_VRSRAdi,
  AMED_AARCH32_IFORM_VRSRAqi,
  AMED_AARCH32_IFORM_VRSUBHNdq,
  AMED_AARCH32_IFORM_VSDOTd,
  AMED_AARCH32_IFORM_VSDOTq,
  AMED_AARCH32_IFORM_VSDOTqd,
  AMED_AARCH32_IFORM_VSELEQd,
  AMED_AARCH32_IFORM_VSELEQs,
  AMED_AARCH32_IFORM_VSELGEd,
  AMED_AARCH32_IFORM_VSELGEs,
  AMED_AARCH32_IFORM_VSELGTd,
  AMED_AARCH32_IFORM_VSELGTs,
  AMED_AARCH32_IFORM_VSELVSd,
  AMED_AARCH32_IFORM_VSELVSs,
  AMED_AARCH32_IFORM_VSHLdi,
  AMED_AARCH32_IFORM_VSHLqi,
  AMED_AARCH32_IFORM_VSHLd,
  AMED_AARCH32_IFORM_VSHLq,
  AMED_AARCH32_IFORM_VSHLLqdi,
  AMED_AARCH32_IFORM_VSHRdi,
  AMED_AARCH32_IFORM_VSHRqi,
  AMED_AARCH32_IFORM_VSHRNdqi,
  AMED_AARCH32_IFORM_VSLIdi,
  AMED_AARCH32_IFORM_VSLIqi,
  AMED_AARCH32_IFORM_VSMMLAq,
  AMED_AARCH32_IFORM_VSQRTs,
  AMED_AARCH32_IFORM_VSQRTd,
  AMED_AARCH32_IFORM_VSRAdi,
  AMED_AARCH32_IFORM_VSRAqi,
  AMED_AARCH32_IFORM_VSRIdi,
  AMED_AARCH32_IFORM_VSRIqi,
  AMED_AARCH32_IFORM_VST1lm,
  AMED_AARCH32_IFORM_VST2lm,
  AMED_AARCH32_IFORM_VST3lm,
  AMED_AARCH32_IFORM_VSTMDBrl,
  AMED_AARCH32_IFORM_VSTMrl,
  AMED_AARCH32_IFORM_VSTMIArl,
  AMED_AARCH32_IFORM_VSTRsm,
  AMED_AARCH32_IFORM_VSTRdm,
  AMED_AARCH32_IFORM_VSUBd,
  AMED_AARCH32_IFORM_VSUBq,
  AMED_AARCH32_IFORM_VSUBs,
  AMED_AARCH32_IFORM_VSUBHNdq,
  AMED_AARCH32_IFORM_VSUBLqd,
  AMED_AARCH32_IFORM_VSUBWqd,
  AMED_AARCH32_IFORM_VSUDOTd,
  AMED_AARCH32_IFORM_VSUDOTqd,
  AMED_AARCH32_IFORM_VSWPd,
  AMED_AARCH32_IFORM_VSWPq,
  AMED_AARCH32_IFORM_VTBLdl,
  AMED_AARCH32_IFORM_VTBXdl,
  AMED_AARCH32_IFORM_VTRNd,
  AMED_AARCH32_IFORM_VTRNq,
  AMED_AARCH32_IFORM_VTSTd,
  AMED_AARCH32_IFORM_VTSTq,
  AMED_AARCH32_IFORM_VUDOTd,
  AMED_AARCH32_IFORM_VUDOTq,
  AMED_AARCH32_IFORM_VUDOTqd,
  AMED_AARCH32_IFORM_VUMMLAq,
  AMED_AARCH32_IFORM_VUSDOTd,
  AMED_AARCH32_IFORM_VUSDOTq,
  AMED_AARCH32_IFORM_VUSDOTqd,
  AMED_AARCH32_IFORM_VUSMMLAq,
  AMED_AARCH32_IFORM_VUZPd,
  AMED_AARCH32_IFORM_VUZPq,
  AMED_AARCH32_IFORM_VZIPd,
  AMED_AARCH32_IFORM_VZIPq,
  AMED_AARCH32_IFORM_VACLEd,
  AMED_AARCH32_IFORM_VACLEq,
  AMED_AARCH32_IFORM_VACLTd,
  AMED_AARCH32_IFORM_VACLTq,
  AMED_AARCH32_IFORM_VANDdi,
  AMED_AARCH32_IFORM_VANDqi,
  AMED_AARCH32_IFORM_VCLEd,
  AMED_AARCH32_IFORM_VCLEq,
  AMED_AARCH32_IFORM_VCLTd,
  AMED_AARCH32_IFORM_VCLTq,
  AMED_AARCH32_IFORM_VMOVq,
  AMED_AARCH32_IFORM_VORNdi,
  AMED_AARCH32_IFORM_VORNqi,
  AMED_AARCH32_IFORM_VPOPl,
  AMED_AARCH32_IFORM_VPUSHl,
} amed_aarch32_iform;

