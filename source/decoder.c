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

typedef bool (*decoder_method)(amed_context*, amed_insn*);

#ifdef AMED_X86
#include "amed/x86.h"
#include "amed/x86/decoder.h"
#define X86_DECODER_METHOD &amed_x86_decode_insn
#else
#define X86_DECODER_METHOD NULL
#endif // AMED_X86

#ifdef AMED_AARCH32
#include "amed/aarch32.h"
#include "amed/aarch32/decoder.h"
#define AARCH32_DECODER_METHOD &amed_aarch32_decode_insn
#else
#define AARCH32_DECODER_METHOD NULL
#endif // AMED_AARCH32


#ifdef AMED_AARCH64
#include "amed/aarch64.h"
#include "amed/aarch64/decoder.h"
#define AARCH64_DECODER_METHOD &amed_aarch64_decode_insn
#else
#define AARCH64_DECODER_METHOD NULL
#endif // AMED_AARCH64


static const decoder_method decoder_methods[] = 
{
	NULL,
	X86_DECODER_METHOD,
	AARCH32_DECODER_METHOD,
	AARCH64_DECODER_METHOD
};

bool amed_decode_insn(amed_context* pcontext, amed_insn* pinsn)
{
	assert(pcontext && "context is null.");
	assert(pinsn && "insn is null.");
	decoder_method method = decoder_methods[pcontext->architecture];
	if (!method)return false;
	return method(pcontext, pinsn);
}