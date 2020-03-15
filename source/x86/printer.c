/*BEGIN_HEADER
*
* Copyright (C) 2020 Mahdi Safsafi.
*
* https://github.com/MahdiSafsafi/AMED
*
* See licence file 'LICENCE' for use and distribution rights.
*
*END_HEADER*/

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h> 
#include <stdlib.h>
#include <ctype.h>
#include <assert.h>
#include "amed.h"
#include "amed/strings.h"
#include "amed/x86.h"
#include "amed/x86/strings.h"

typedef const char* (*printer_function)(uint32_t);

#define LAZYPRINT(x, y) *x = y; x++;

typedef struct _x86_printer
{
	char* pc;
	amed_insn* insn;
	amed_formatter* formatter;
	amed_context* context;
}x86_printer;

static inline bool print_reg_value(x86_printer* pprinter, uint16_t value)
{
	const char* str = amed_x86_register_to_string(value);
	pprinter->pc += sprintf_s(pprinter->pc, AMED_X86_REGISTER_MAX_TEXT_LENGTH, "%s", str);
	return true;
}

static bool print_reg_swizzle(x86_printer* pprinter, amed_argument* pargument)
{
	static const char table[4] = { 'A','B','C','D' };
	LAZYPRINT(pprinter->pc, '{');
	for (int i = 3; i >= 0; i--)
	{
		uint8_t value = pargument->reg.selectors[i];
		if (value > 3) return false;
		LAZYPRINT(pprinter->pc, table[value]);
	}
	LAZYPRINT(pprinter->pc, '}');
	return true;
}

static bool print_arg_reg(x86_printer* pprinter, amed_argument* pargument)
{
	const char* str = amed_x86_register_to_string(pargument->reg.value);
	pprinter->pc += sprintf_s(pprinter->pc, AMED_X86_REGISTER_MAX_TEXT_LENGTH, "%s", str);
	if (pargument->zeroing)
	{
		pprinter->pc += sprintf_s(pprinter->pc, 4, "{%s}", "Z");
	}
	else if (pargument->merging)
	{
		pprinter->pc += sprintf_s(pprinter->pc, 4, "{%s}", "M");
	}
	else if (pargument->printer.print_index)
	{
		print_reg_swizzle(pprinter, pargument);
	}
	return true;
}

static bool print_size(x86_printer* pprinter, int size)
{
	char* str = NULL;
	switch (size)
	{
	default: return false;
	case 8:
		str = "BYTE";
		break;
	case 16:
		str = "WORD";
		break;
	case 32:
		str = "DWORD";
		break;
	case 64:
		str = "QWORD";
		break;
	case 128:
		str = "OWORD";
		break;
	case 256:
		str = "YWORD";
		break;
	case 512:
		str = "ZWORD";
		break;
	}
	pprinter->pc += sprintf_s(pprinter->pc, 10, "%s", str);
	return true;
}

static bool print_imm_value(x86_printer* pprinter, int64_t value, amed_datatype datatype)
{
	switch (datatype)
	{
		/* signed datatype */
	case AMED_DATATYPE_S8:
	case AMED_DATATYPE_S16:
	case AMED_DATATYPE_S32:
	case AMED_DATATYPE_S64:
		if (value < 0)
		{
			LAZYPRINT(pprinter->pc, '-');
			value = -value;
		}
		break;
	}

	switch (datatype)
	{
	case AMED_DATATYPE_S8:
	case AMED_DATATYPE_U8:
	case AMED_DATATYPE_I8:
		pprinter->pc += sprintf_s(pprinter->pc, 4, "%u", (uint8_t)value);
		break;
	case AMED_DATATYPE_S16:
	case AMED_DATATYPE_U16:
	case AMED_DATATYPE_I16:
		pprinter->pc += sprintf_s(pprinter->pc, 8, "0x%04x", (int16_t)value);
		break;
	case AMED_DATATYPE_S32:
	case AMED_DATATYPE_U32:
	case AMED_DATATYPE_I32:
		pprinter->pc += sprintf_s(pprinter->pc, 12, "0x%08x", (int32_t)value);
		break;
	case AMED_DATATYPE_S64:
	case AMED_DATATYPE_U64:
	case AMED_DATATYPE_I64:
	default:
		pprinter->pc += sprintf_s(pprinter->pc, 20, "0x%016llx", value);
		break;
	}
	return true;
}

static inline bool print_broadcasting(x86_printer* pprinter, amed_argument* pargument)
{
	pprinter->pc += sprintf_s(pprinter->pc, 10, "{%dto%d}",
		pargument->mem.broadcasting.from,
		pargument->mem.broadcasting.to
	);
	return true;
}

static bool print_arg_mem(x86_printer* pprinter, amed_argument* pargument)
{
	int64_t disp = pargument->mem.immoff.value.s64;
	bool print_sign = false;

	if (pargument->printer.print_size && print_size(pprinter, pargument->size))
	{
		LAZYPRINT(pprinter->pc, ' ');
	}
	if (pargument->printer.print_segment && pargument->mem.segment)
	{
		print_reg_value(pprinter, pargument->mem.segment);
		LAZYPRINT(pprinter->pc, ':');
	}

	LAZYPRINT(pprinter->pc, '[');
	if (pargument->mem.base)
	{
		print_sign = true;
		print_reg_value(pprinter, pargument->mem.base);
	}
	if (pargument->mem.regoff != AMED_X86_REGISTER_NONE)
	{
		if (print_sign++)
		{
			LAZYPRINT(pprinter->pc, '+');
		}
		print_reg_value(pprinter, pargument->mem.regoff);
		if (pargument->printer.print_shifter)
		{
			LAZYPRINT(pprinter->pc, '*');
			pprinter->pc += sprintf_s(pprinter->pc, 2, "%d", pargument->shifter.amount);
		}
	}
	if (pargument->mem.immoff.datatype)
	{
		if (print_sign && disp >= 0)
		{
			LAZYPRINT(pprinter->pc, '+');
		}
		print_imm_value(pprinter, disp, pargument->mem.immoff.datatype);
	}
	LAZYPRINT(pprinter->pc, ']');

	if (pargument->mem.vdatatype)
	{
		pprinter->pc += sprintf_s(pprinter->pc, 10, "{%s}", amed_datatype_to_string(pargument->datatype));
	}
	else if (pargument->printer.print_broadcasting && pargument->mem.broadcasting.from)
	{
		print_broadcasting(pprinter, pargument);
	}
	return true;
}

static inline bool print_arg_imm(x86_printer* pprinter, amed_argument* pargument)
{
	return print_imm_value(pprinter, pargument->imm.i64, pargument->datatype);
}

static inline bool print_arg_ptr(x86_printer* pprinter, amed_argument* pargument)
{
	pprinter->pc += sprintf_s(pprinter->pc, 16, "%04x:%04x",
		pargument->x86.ptr.segment, pargument->x86.ptr.offset.value.s32);
	return true;
}

static bool print_rounding(x86_printer* pprinter, amed_rounding_type value)
{
	static const char* table[5] = { "??", "RN","RD","RU","RZ" };
	if (value > AMED_ROUNDING_TYPE_ZERO) return false;
	const char* str = table[value];
	LAZYPRINT(pprinter->pc, '{');
	pprinter->pc += sprintf_s(pprinter->pc, 4, "%s", str);
	if (pprinter->insn->is_suppressing_all_exceptions)	pprinter->pc += sprintf_s(pprinter->pc, 8, "-%s", "SAE");
	LAZYPRINT(pprinter->pc, '}');
	return true;
}

static inline bool print_sae(x86_printer* pprinter, bool value)
{
	if (value) pprinter->pc += sprintf_s(pprinter->pc, 6, "{%s}", "SAE");
	return true;
}

static inline bool print_evh(x86_printer* pprinter, bool value)
{
	if (value) pprinter->pc += sprintf_s(pprinter->pc, 6, "{%s}", "EH");
	return true;
}

bool print_prefixes(x86_printer* pprinter)
{
	static const char* prefixes[] =
	{
		NULL,
		"REP",
		"REPZ",
		"REPNZ",
		"XACQUIRE",
		"XRELEASE",
		"BND",
	};
	const char* str = prefixes[pprinter->insn->x86.prefix_functionality];
	if (str)                        pprinter->pc += sprintf_s(pprinter->pc, 12, "%s ", str);
	if (pprinter->insn->is_atomic)	pprinter->pc += sprintf_s(pprinter->pc, 8, "%s", "LOCK ");
	return true;
}

static bool print_arg_enum(x86_printer* pprinter, amed_argument* pargument,
	printer_function func, int max_size)
{
	if (pargument->is_representable)
	{
		const char* txt = func(pargument->token);
		pprinter->pc += sprintf_s(pprinter->pc, max_size, "%s", txt);
	}
	else
	{
		print_arg_imm(pprinter, pargument);
	}
	return true;
}

int amed_x86_print_insn(char* buffer, amed_context* pcontext, amed_insn* pinsn, amed_formatter* pformatter)
{
	assert(buffer && "buffer is null.");
	assert(pinsn && "insn is null.");
	assert(pformatter && "formatter is null.");

	x86_printer printer =
	{
		.pc = buffer,
		.insn = pinsn,
		.context = pcontext,
		.formatter = pformatter
	};
	print_prefixes(&printer);
	const char* str = amed_x86_mnemonic_to_string(pinsn->mnemonic);
	printer.pc += sprintf_s(printer.pc, AMED_X86_MNEMONIC_MAX_TEXT_LENGTH, "%s", str);

	int count = pinsn->argument_count;
	if (!count) goto end;

	LAZYPRINT(printer.pc, pformatter->use_tab_after_mnem ? '\t' : ' ');
	for (int i = 0; i < count; i++)
	{
		amed_argument* pargument = &pinsn->arguments[i];
		if (pargument->is_suppressed) continue;
		if (i)
		{
			LAZYPRINT(printer.pc, ',');
			LAZYPRINT(printer.pc, pformatter->use_tab_between_arguments ? '\t' : ' ');
		}
		switch (pargument->type)
		{
		case AMED_ARGUMENT_TYPE_REGISTER:
			print_arg_reg(&printer, pargument);
			break;

		case AMED_ARGUMENT_TYPE_MEMORY:
		case AMED_ARGUMENT_TYPE_ADDRESS:
			print_arg_mem(&printer, pargument);
			break;

		case AMED_ARGUMENT_TYPE_IMMEDIATE:
			print_arg_imm(&printer, pargument);
			break;

		case AMED_ARGUMENT_TYPE_PTR:
			print_arg_ptr(&printer, pargument);
			break;

		case AMED_ARGUMENT_TYPE_ROUNDING:
			print_rounding(&printer, pargument->token);
			break;
		case AMED_ARGUMENT_TYPE_SAE:
			print_sae(&printer, pargument->token);
			break;
		case AMED_ARGUMENT_TYPE_EVH:
			print_evh(&printer, pargument->token);
			break;

		case AMED_ARGUMENT_TYPE_CONDITION:
			print_arg_enum(&printer, pargument, &amed_x86_comparison_predicate_to_string, AMED_X86_COMPARISON_PREDICATE_MAX_TEXT_LENGTH);
			break;

		}
	}
end:
	*printer.pc = '\0';
	if (pformatter->lower_case) for (; *buffer; ++buffer) *buffer = tolower(*buffer);
	return  (int32_t)(printer.pc - buffer);
}