/*BEGIN_HEADER
*
* Copyright (C) 2020 Mahdi Safsafi.
*
* https://github.com/MahdiSafsafi/AMED
*
* See licence file 'LICENCE' for use and distribution rights.
*
*END_HEADER*/


#ifndef __AMED_STRINGS_HEADER
#define __AMED_STRINGS_HEADER

#ifdef __cplusplus
extern "C" {  
#endif

const char* amed_shift_to_string(uint32_t value);
const char* amed_endian_to_string(uint32_t value);
const char* amed_datatype_to_string(uint32_t value);
const char* amed_arm_pspace_to_string(uint32_t value);
const char* amed_arm_cspace_to_string(uint32_t value);
const char* amed_arm_barrier_to_string(uint32_t value);
const char* amed_arm_condition_to_string(uint32_t value);


#ifdef __cplusplus
}  
#endif

#endif __AMED_STRINGS_HEADER