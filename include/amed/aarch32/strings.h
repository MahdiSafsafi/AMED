/*BEGIN_HEADER
*
* Copyright (C) 2020 Mahdi Safsafi.
*
* https://github.com/MahdiSafsafi/AMED
*
* See licence file 'LICENCE' for use and distribution rights.
*
*END_HEADER*/


#ifndef __AMED_AARCH32_STRINGS_HEADER
#define __AMED_AARCH32_STRINGS_HEADER


#ifdef __cplusplus
extern "C" {  
#endif

const char* amed_aarch32_it_op_to_string(uint32_t value);
const char* amed_aarch32_mnemonic_to_string(uint32_t value);
const char* amed_aarch32_sync_op_to_string(uint32_t value);
const char* amed_aarch32_system_register_space_to_string(uint32_t value);
const char* amed_aarch32_register_to_string(uint32_t value);


#ifdef __cplusplus
}
#endif

#endif // ! __AMED_AARCH32_STRINGS_HEADER