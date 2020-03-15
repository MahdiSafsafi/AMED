/*BEGIN_HEADER
*
* Copyright (C) 2020 Mahdi Safsafi.
*
* https://github.com/MahdiSafsafi/AMED
*
* See licence file 'LICENCE' for use and distribution rights.
*
*END_HEADER*/

#ifndef __AMED_X86_DECODER_HEADER
#define __AMED_X86_DECODER_HEADER


#ifdef __cplusplus
extern "C" {  
#endif

bool amed_x86_decode_insn(amed_context* pcontext,amed_insn* pinsn);


#ifdef __cplusplus
}
#endif

#endif // ! __AMED_X86_DECODER_HEADER