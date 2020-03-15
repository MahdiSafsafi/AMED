/*BEGIN_HEADER
*
* Copyright (C) 2020 Mahdi Safsafi.
*
* https://github.com/MahdiSafsafi/AMED
*
* See licence file 'LICENCE' for use and distribution rights.
*
*END_HEADER*/

/*! 
	@file amed/decoder.h
	@brief AMED instruction decoder.
*/

#ifndef  __AMED_DECODER_HEADER
#define __AMED_DECODER_HEADER

#ifdef __cplusplus
extern "C" {  
#endif

/*!
	@brief   decode instruction.
	@param   pcontext a pointer to `amed_context` struct.
	@param   pinsn    a pointer to `amed_insn` struct.
	@return  returns true if succeed.
*/
bool amed_decode_insn(amed_context* pcontext, amed_insn* pinsn);

#ifdef __cplusplus
} 
#endif

#endif // !__AMED_DECODER_HEADER


