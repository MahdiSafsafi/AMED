/*BEGIN_HEADER
*
* Copyright (C) 2020 Mahdi Safsafi.
*
* https://github.com/MahdiSafsafi/AMED
*
* See licence file 'LICENCE' for use and distribution rights.
*
*END_HEADER*/

#ifndef __AMED_AARCH32_OPT_STRINGS_HEADER
#define __AMED_AARCH32_OPT_STRINGS_HEADER

#ifdef __cplusplus
extern "C" {  
#endif

const char* amed_aarch32_symbol_to_string(uint32_t value);
const char* amed_aarch32_encoding_to_string(uint32_t value);
const char* amed_aarch32_iform_to_string(uint32_t value);
const char* amed_aarch32_group_to_string(uint32_t value);
const char* amed_aarch32_node_type_to_string(uint32_t value);
const char* amed_aarch32_exception_to_string(uint32_t value);
const char* amed_aarch32_page_to_string(uint32_t value);
const char* amed_aarch32_iclass_to_string(uint32_t value);
const char* amed_aarch32_cclass_to_string(uint32_t value);
const char* amed_aarch32_extension_to_string(uint32_t value);



#ifdef __cplusplus
}
#endif

#endif // ! __AMED_AARCH32_OPT_STRINGS_HEADER