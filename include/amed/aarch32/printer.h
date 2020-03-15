/*BEGIN_HEADER
*
* Copyright (C) 2020 Mahdi Safsafi.
*
* https://github.com/MahdiSafsafi/AMED
*
* See licence file 'LICENCE' for use and distribution rights.
*
*END_HEADER*/

#ifndef __AMED_AARCH32_PRINTER_HEADER
#define __AMED_AARCH32_PRINTER_HEADER


#ifdef __cplusplus
extern "C" {  
#endif

int amed_aarch32_print_insn(char* buffer, amed_context* pcontext, amed_insn* pinsn, amed_formatter* pformatter);


#ifdef __cplusplus
}
#endif

#endif // ! __AMED_AARCH32_PRINTER_HEADER