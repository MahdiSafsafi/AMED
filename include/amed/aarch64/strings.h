/*BEGIN_HEADER
*
* Copyright (C) 2020 Mahdi Safsafi.
*
* https://github.com/MahdiSafsafi/AMED
*
* See licence file 'LICENCE' for use and distribution rights.
*
*END_HEADER*/

#ifndef __AMED_AARCH64_STRINGS_HEADER
#define __AMED_AARCH64_STRINGS_HEADER


#ifdef __cplusplus
extern "C" {  
#endif

const char* amed_aarch64_mnemonic_to_string(uint32_t value);
const char* amed_aarch64_register_to_string(uint32_t value);
const char* amed_aarch64_ic_op_to_string(uint32_t value);
const char* amed_aarch64_dc_op_to_string(uint32_t value);
const char* amed_aarch64_at_op_to_string(uint32_t value);
const char* amed_aarch64_tlbi_op_to_string(uint32_t value);
const char* amed_aarch64_sync_op_to_string(uint32_t value);
const char* amed_aarch64_pattern_to_string(uint32_t value);
const char* amed_aarch64_prf_op_to_string(uint32_t value);
const char* amed_aarch64_ctx_op_to_string(uint32_t value);
const char* amed_aarch64_pstatefield_to_string(uint32_t value);
const char* amed_aarch64_bti_op_to_string(uint32_t value);


#ifdef __cplusplus
}
#endif

#endif // ! __AMED_AARCH64_STRINGS_HEADER