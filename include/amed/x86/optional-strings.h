/*BEGIN_HEADER
*
* Copyright (C) 2020 Mahdi Safsafi.
*
* https://github.com/MahdiSafsafi/AMED
*
* See licence file 'LICENCE' for use and distribution rights.
*
*END_HEADER*/

#ifndef __AMED_X86_OPT_STRINGS_HEADER
#define __AMED_X86_OPT_STRINGS_HEADER


#ifdef __cplusplus
extern "C" {  
#endif

const char* amed_x86_extension_to_string(uint32_t value)   ;
const char* amed_x86_exception_to_string(uint32_t value)   ;
const char* amed_x86_group_to_string(uint32_t value)       ;
const char* amed_x86_iform_to_string(uint32_t value)       ;
const char* amed_x86_iclass_to_string(uint32_t value)      ;
const char* amed_x86_encoding_to_string(uint32_t value)    ;
const char* amed_x86_isa_to_string(uint32_t value)         ;
const char* amed_x86_page_to_string(uint32_t value)        ;


#ifdef __cplusplus
} 
#endif

#endif // ! __AMED_X86_OPT_STRINGS_HEADER