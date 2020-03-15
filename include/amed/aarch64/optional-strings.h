/*BEGIN_HEADER
*
* Copyright (C) 2020 Mahdi Safsafi.
*
* https://github.com/MahdiSafsafi/AMED
*
* See licence file 'LICENCE' for use and distribution rights.
*
*END_HEADER*/

#ifndef __AMED_AARCH64_OPT_STRINGS_HEADER
#define __AMED_AARCH64_OPT_STRINGS_HEADER

#ifdef __cplusplus
extern "C" {  
#endif

const char* amed_aarch64_symbol_to_string(uint32_t value);
const char* amed_aarch64_encoding_to_string(uint32_t value);
const char* amed_aarch64_iform_to_string(uint32_t value);
const char* amed_aarch64_group_to_string(uint32_t value);
const char* amed_aarch64_node_type_to_string(uint32_t value);
const char* amed_aarch64_exception_to_string(uint32_t value);
const char* amed_aarch64_page_to_string(uint32_t value);
const char* amed_aarch64_iclass_to_string(uint32_t value);
const char* amed_aarch64_cclass_to_string(uint32_t value);
const char* amed_aarch64_extension_to_string(uint32_t value);

#ifdef __cplusplus
}
#endif

#endif // ! __AMED_AARCH64_OPT_STRINGS_HEADER