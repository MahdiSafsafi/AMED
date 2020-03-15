/*BEGIN_HEADER
*
* Copyright (C) 2020 Mahdi Safsafi.
*
* https://github.com/MahdiSafsafi/AMED
*
* See licence file 'LICENCE' for use and distribution rights.
*
*END_HEADER*/


#include <stdint.h>
#include <stdbool.h>
#include <assert.h>
#include "amed.h"

typedef int (*printer_method)(char*, amed_context*, amed_insn*, amed_formatter*);

#ifdef AMED_X86
#include "amed/x86.h"
#include "amed/x86/printer.h"
#define X86_PRINTER_METHOD &amed_x86_print_insn
#else
#define X86_PRINTER_METHOD NULL
#endif // AMED_X86

#ifdef AMED_AARCH32
#include "amed/aarch32.h"
#include "amed/aarch32/printer.h"
#define AARCH32_PRINTER_METHOD &amed_aarch32_print_insn
#else
#define AARCH32_PRINTER_METHOD NULL
#endif // AMED_AARCH32


#ifdef AMED_AARCH64
#include "amed/aarch64.h"
#include "amed/aarch64/printer.h"
#define AARCH64_PRINTER_METHOD &amed_aarch64_print_insn
#else
#define AARCH64_PRINTER_METHOD NULL
#endif // AMED_AARCH64


static const printer_method printer_methods[] =
{
	NULL,
	X86_PRINTER_METHOD,
	AARCH32_PRINTER_METHOD,
	AARCH64_PRINTER_METHOD
};

int amed_print_insn(char* buffer, amed_context* pcontext, amed_insn* pinsn, amed_formatter* pformatter)
{
	assert(pcontext && "context is null.");
	assert(pinsn && "insn is null.");
	printer_method method = printer_methods[pcontext->architecture];
	if (!method)return false;
	return method(buffer, pcontext, pinsn, pformatter);
}
