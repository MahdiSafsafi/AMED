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
#include <assert.h>
#include <ctype.h>
#include "amed.h"
#include "amed/strings.h"
#include "amed/aarch32.h"
#include "amed/aarch32/strings.h"
#include "../utils/datatype.h"


#define LAZYPRINT(x, y) *x = y; x++;

typedef const char* (*printer_function)(uint32_t);

typedef struct _aarch32_printer
{
	char* pc;
	amed_insn* insn;
	amed_formatter* formatter;
}aarch32_printer;


static bool print_index(aarch32_printer* pprinter, uint8_t index)
{
	LAZYPRINT(pprinter->pc, '[');
	pprinter->pc += sprintf_s(pprinter->pc, 4, "%d", index);
	LAZYPRINT(pprinter->pc, ']');
	return true;
}

static bool print_shifter(aarch32_printer* pprinter, amed_argument_shifter* pargument)
{
	LAZYPRINT(pprinter->pc, ',');
	LAZYPRINT(pprinter->pc, ' ');
	const char* sshift = amed_shift_to_string(pargument->type);
	pprinter->pc += sprintf_s(pprinter->pc, AMED_SHIFT_MAX_TEXT_LENGTH, "%s", sshift);
	if (pargument->has_amount)
	{
		pprinter->pc += sprintf_s(pprinter->pc, 10, " #%d", pargument->amount);
	}
	else if (pargument->has_register)
	{
		const char* txt = amed_aarch32_register_to_string(pargument->reg);
		pprinter->pc += sprintf_s(pprinter->pc, AMED_AARCH32_REGISTER_MAX_TEXT_LENGTH, " %s", txt);
	}
	return true;
}

static bool print_datatype(aarch32_printer* pprinter, amed_argument* pargument)
{
	const char* txt = amed_datatype_to_string(pargument->datatype);
	pprinter->pc += sprintf_s(pprinter->pc, 2 + AMED_DATATYPE_MAX_TEXT_LENGTH, ".%s", txt);
	return true;
}

static bool print_arg_reg(aarch32_printer* pprinter, amed_argument* pargument)
{
	const char* txt = amed_aarch32_register_to_string(pargument->reg.value);
	pprinter->pc += sprintf_s(pprinter->pc, AMED_AARCH32_REGISTER_MAX_TEXT_LENGTH, "%s", txt);

	if (pargument->has_index)
	{
		print_index(pprinter, pargument->reg.index);
	}
	else if (pargument->printer.print_shifter)
	{
		print_shifter(pprinter, &pargument->shifter);
	}
	else if (pargument->write_back)
	{
		LAZYPRINT(pprinter->pc, '!');
	}
	return true;
}

static bool print_imm(aarch32_printer* pprinter, amed_immediate_value value,
	amed_datatype datatype)
{
	int64_t imm = value.i64;
	switch (datatype)
	{
	case AMED_DATATYPE_F16:
	case AMED_DATATYPE_F32:
	case AMED_DATATYPE_F64:
		pprinter->pc += sprintf_s(pprinter->pc, 18 + 1, "%f", value.f64);
		return true;
	case AMED_DATATYPE_S8:
	case AMED_DATATYPE_S16:
	case AMED_DATATYPE_S32:
	case AMED_DATATYPE_S64:
		if (imm < 0)
		{
			LAZYPRINT(pprinter->pc, '-');
			imm = -imm;
		}
	}

	switch (datatype)
	{
	case AMED_DATATYPE_S8:
	case AMED_DATATYPE_U8:
	case AMED_DATATYPE_I8:
		pprinter->pc += sprintf_s(pprinter->pc, 8, "%u", (uint8_t)imm);
		break;
	case AMED_DATATYPE_S16:
	case AMED_DATATYPE_U16:
	case AMED_DATATYPE_I16:
		pprinter->pc += sprintf_s(pprinter->pc, 8, "%u", (uint16_t)imm);
		break;
	case AMED_DATATYPE_S32:
	case AMED_DATATYPE_U32:
	case AMED_DATATYPE_I32:
		pprinter->pc += sprintf_s(pprinter->pc, 16, "0x%08x", (uint32_t)imm);
		break;
	case AMED_DATATYPE_S64:
	case AMED_DATATYPE_U64:
	case AMED_DATATYPE_I64:
	default:
		pprinter->pc += sprintf_s(pprinter->pc, 32, "0x%016llx", imm);
		break;
	}
	return true;
}

static bool print_arg_imm(aarch32_printer* pprinter, amed_argument* pargument)
{
	LAZYPRINT(pprinter->pc, '#');
	print_imm(pprinter, pargument->imm, pargument->datatype);
	if (pargument->printer.print_shifter) print_shifter(pprinter, &pargument->shifter);
	return true;
}

static bool print_mem_reg(aarch32_printer* pprinter, uint16_t reg)
{
	const char* sreg = amed_aarch32_register_to_string(reg);
	pprinter->pc += sprintf_s(pprinter->pc, AMED_AARCH32_REGISTER_MAX_TEXT_LENGTH, "%s", sreg);
	return true;
}

static bool print_mem_offset(aarch32_printer* pprinter, amed_argument* pargument)
{
	if (pargument->mem.regoff)
	{
		LAZYPRINT(pprinter->pc, ',');
		LAZYPRINT(pprinter->pc, ' ');
		if (!pargument->is_adding)
		{
			LAZYPRINT(pprinter->pc, '-');
		}
		print_mem_reg(pprinter, pargument->mem.regoff);
	}
	else if (pargument->mem.immoff.value.i64)
	{
		LAZYPRINT(pprinter->pc, ',');
		LAZYPRINT(pprinter->pc, ' ');
		LAZYPRINT(pprinter->pc, '#');
		if (!pargument->is_adding)
		{
			LAZYPRINT(pprinter->pc, '-');
		}
		print_imm(pprinter, pargument->mem.immoff.value, pargument->mem.immoff.datatype);
	}
	else
	{
		return true;
	}
	if (pargument->printer.print_shifter) print_shifter(pprinter, &pargument->shifter);
	return true;
}

static bool print_arg_mem(aarch32_printer* pprinter, amed_argument* pargument)
{
	LAZYPRINT(pprinter->pc, '[');
	print_mem_reg(pprinter, pargument->mem.base);
	if (pargument->is_post_indexed)
	{
		LAZYPRINT(pprinter->pc, ']');
		print_mem_offset(pprinter, pargument);
	}
	else
	{
		print_mem_offset(pprinter, pargument);
		LAZYPRINT(pprinter->pc, ']');
		if (pargument->is_pre_indexed)
		{
			LAZYPRINT(pprinter->pc, '!');
		}
	}
	return true;
}

static bool print_arg_list(aarch32_printer* pprinter, amed_argument* pargument)
{
	LAZYPRINT(pprinter->pc, '{');
	int count = pargument->list.count;
	for (int i = 0; i < count; i++)
	{
		const char* str = amed_aarch32_register_to_string(pargument->list.registers[i]);
		pprinter->pc += sprintf_s(pprinter->pc, AMED_AARCH32_REGISTER_MAX_TEXT_LENGTH, "%s", str);
		if (i != count - 1)
		{
			LAZYPRINT(pprinter->pc, ',');
			LAZYPRINT(pprinter->pc, ' ');
		}
	}
	LAZYPRINT(pprinter->pc, '}');
	if (pargument->has_index) print_index(pprinter, pargument->list.index);
	return true;
}

static bool print_arg_enum(aarch32_printer* pprinter, amed_argument* pargument,
	printer_function func, int max_size)
{
	if (pargument->is_representable)
	{
		const char* txt = func(pargument->token);
		pprinter->pc += sprintf_s(pprinter->pc, max_size, "%s", txt);
		return true;
	}
	else
	{
		return print_arg_imm(pprinter, pargument);
	}
}

static bool print_arg_aif(aarch32_printer* pprinter, amed_argument* pargument)
{
	if (pargument->aarch32.aif.not_empty)
	{
		if (pargument->aarch32.aif.a)
		{
			LAZYPRINT(pprinter->pc, 'A');
		}
		if (pargument->aarch32.aif.i)
		{
			LAZYPRINT(pprinter->pc, 'I');
		}
		if (pargument->aarch32.aif.f)
		{
			LAZYPRINT(pprinter->pc, 'F');
		}
	}
	else
	{
		pprinter->pc += sprintf_s(pprinter->pc, 4, "#%d", 0);
	}
	return true;
}

bool print_datatypes(aarch32_printer* pprinter)
{
	uint8_t datatypes[4] = { AMED_DATATYPE_NONE };
	int item_count = sizeof(datatypes) / sizeof(uint8_t);
	for (int i = 0; i < pprinter->insn->argument_count; i++)
	{
		amed_argument* pargument = &pprinter->insn->arguments[i];
		if (pargument->datatype && pargument->printer.print_datatype)
		{
			int j;
			for (j = 0; j < item_count; j++)
			{
				if (datatypes[j] == pargument->datatype)
				{
					break;
				}
				else if (AMED_DATATYPE_NONE == datatypes[j])
				{
					datatypes[j] = pargument->datatype;
					break;
				}
			}
		}
	}
	for (int i = 0; i < item_count; i++)
	{
		if (datatypes[i])
		{
			const char* str = amed_datatype_to_string(datatypes[i]);
			pprinter->pc += sprintf_s(pprinter->pc, AMED_DATATYPE_MAX_TEXT_LENGTH + 4, ".%s", str);
		}
		else
		{
			break;
		}
	}
	return true;
}

int amed_aarch32_print_insn(char* buffer, amed_context* pcontext, amed_insn* pinsn, amed_formatter* pformatter)
{

	aarch32_printer printer =
	{ 
		.pc = buffer,
		.formatter = pformatter,
		.insn = pinsn
	};

	const char* txt = amed_aarch32_mnemonic_to_string(pinsn->mnemonic);
	printer.pc += sprintf_s(printer.pc, AMED_AARCH32_MNEMONIC_MAX_TEXT_LENGTH, "%s", txt);
	if (AMED_AARCH32_MNEMONIC_IT == pinsn->mnemonic)
	{
		/* print it op */
		const char* txt = amed_aarch32_it_op_to_string(pinsn->aarch32.it_op);
		printer.pc += sprintf_s(printer.pc, AMED_AARCH32_IT_OP_MAX_TEXT_LENGTH, "%s", txt);
	}
	else if (pinsn->aarch32.condition && AMED_ARM_CONDITION_AL != pinsn->aarch32.condition)
	{
		/* print condition */
		const char* txt = amed_arm_condition_to_string(pinsn->aarch32.condition);
		printer.pc += sprintf_s(printer.pc, AMED_ARM_CONDITION_MAX_TEXT_LENGTH, "%s", txt);
	}
	if (AMED_MACHINE_MODE_THUMB == pcontext->machine_mode)
	{
		/* print qualifier */
		if (4 == pinsn->length && pinsn->aarch32.show_qualifier)
		{
			printer.pc += sprintf_s(printer.pc, 4, ".%s", "W");
		}
	}

	/* print datatypes */
	print_datatypes(&printer);

	if (pformatter->use_tab_after_mnem)
	{
		LAZYPRINT(printer.pc, '\t');
	}
	else
	{
		LAZYPRINT(printer.pc, ' ');
	}
	for (int i = 0; i < pinsn->argument_count; i++)
	{
		amed_argument* pargument = &pinsn->arguments[i];
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
		case AMED_ARGUMENT_TYPE_IMMEDIATE:
		case AMED_ARGUMENT_TYPE_LABEL:
			print_arg_imm(&printer, pargument);
			break;
		case AMED_ARGUMENT_TYPE_MEMORY:
			print_arg_mem(&printer, pargument);
			break;
		case AMED_ARGUMENT_TYPE_LIST:
			print_arg_list(&printer, pargument);
			break;
		case AMED_ARGUMENT_TYPE_AIF:
			print_arg_aif(&printer, pargument);
			break;

		case AMED_ARGUMENT_TYPE_CSPACE:
			print_arg_enum(&printer, pargument, &amed_arm_cspace_to_string, AMED_ARM_CSPACE_MAX_TEXT_LENGTH);
			break;

		case AMED_ARGUMENT_TYPE_PSPACE:
			print_arg_enum(&printer, pargument, &amed_arm_pspace_to_string, AMED_ARM_PSPACE_MAX_TEXT_LENGTH);
			break;

		case AMED_ARGUMENT_TYPE_SYNC_OP:
			print_arg_enum(&printer, pargument, &amed_aarch32_sync_op_to_string, AMED_AARCH32_SYNC_OP_MAX_TEXT_LENGTH);
			break;

		case AMED_ARGUMENT_TYPE_BARRIER:
			print_arg_enum(&printer, pargument, &amed_arm_barrier_to_string, AMED_ARM_BARRIER_MAX_TEXT_LENGTH);
			break;

		case AMED_ARGUMENT_TYPE_CONDITION:
			print_arg_enum(&printer, pargument, &amed_arm_condition_to_string, AMED_ARM_CONDITION_MAX_TEXT_LENGTH);
			break;

		case AMED_ARGUMENT_TYPE_ENDIAN:
			print_arg_enum(&printer, pargument, &amed_endian_to_string, AMED_ENDIAN_MAX_TEXT_LENGTH);
			break;

		}
	}
	*printer.pc = '\0';
	if(pformatter->lower_case) for (; *buffer; ++buffer) *buffer = tolower(*buffer);
	return (int32_t)( printer.pc - buffer);
}