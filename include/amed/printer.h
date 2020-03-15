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
	@file amed/printer.h
	@brief AMED instruction printer.
*/


#ifndef  __AMED_PRINTER_HEADER
#define __AMED_PRINTER_HEADER


#ifdef __cplusplus
extern "C" {  
#endif

/*!
	@brief   print instruction.
	@param   buffer     a pointer to a buffer that receives characters. 
	@param   pcontext   a pointer to `amed_context` struct.
	@param   pinsn      a pointer to `amed_insn` struct.
	@param   pformatter a pointer to `amed_formatter` struct. This control how printer should print instruction.
	@return  returns the number of bytes used for the buffer.
*/
int amed_print_insn(char* buffer, amed_context* pcontext, amed_insn* pinsn,
    amed_formatter* pformatter);


#ifdef __cplusplus
} 
#endif

#endif // ! __AMED_PRINTER_HEADER