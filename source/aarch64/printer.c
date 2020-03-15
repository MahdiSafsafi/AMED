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
#include "amed/aarch64.h"
#include "amed/aarch64/strings.h"
#include "../utils/datatype.h"

#define LAZYPRINT(x, y) *x = y; x++;

typedef const char* (*printer_function)(uint32_t);

typedef struct _aarch64_printer
{
	char* pc;
	amed_insn* insn;
	amed_formatter* formatter;
	amed_context* context;
}aarch64_printer;

static bool print_lane(aarch64_printer* pprinter,
	uint8_t number_of_elements, amed_datatype datatype)
{
	int esize = get_datatype_size(datatype);
	char sz;
	switch (esize)
	{
	case 8: sz = 'B'; break;
	case 16: sz = 'H'; break;
	case 32: sz = 'S'; break;
	case 64: sz = 'D'; break;
	case 128: sz = 'Q'; break;
	default: return false;
	}
	LAZYPRINT(pprinter->pc, '.');
	if (number_of_elements > 1) pprinter->pc += sprintf_s(pprinter->pc, 3, "%d", number_of_elements);
	LAZYPRINT(pprinter->pc, sz);
	return true;
}


static bool print_index(aarch64_printer* pprinter, uint8_t index)
{
	LAZYPRINT(pprinter->pc, '[');
	pprinter->pc += sprintf_s(pprinter->pc, 3, "%d", index);
	LAZYPRINT(pprinter->pc, ']');
	return true;
}

static bool print_prd(aarch64_printer* pprinter, bool zeroing)
{
	LAZYPRINT(pprinter->pc, '/');
	pprinter->pc += sprintf_s(pprinter->pc, 3, "%s", zeroing ? "Z" : "M");
	return true;
}

static bool print_shifter(aarch64_printer* pprinter, amed_argument* pargument)
{
	LAZYPRINT(pprinter->pc, ',');
	LAZYPRINT(pprinter->pc, ' ');
	const char* sshift = amed_shift_to_string(pargument->shifter.type);
	pprinter->pc += sprintf_s(pprinter->pc, AMED_SHIFT_MAX_TEXT_LENGTH, "%s", sshift);
	if (pargument->shifter.has_amount)
	{
		if (pargument->printer.print_amount_as_vl)
			pprinter->pc += sprintf_s(pprinter->pc, 10, " %s", "VL");
		else
		pprinter->pc += sprintf_s(pprinter->pc, 10, " #%d", pargument->shifter.amount);
	}
	return true;
}

static bool print_arg_reg(aarch64_printer* pprinter, amed_argument* pargument)
{
	const char* txt = amed_aarch64_register_to_string(pargument->reg.value);
	pprinter->pc += sprintf_s(pprinter->pc, AMED_AARCH64_REGISTER_MAX_TEXT_LENGTH, "%s", txt);
	if (pargument->zeroing)
	{
		print_prd(pprinter, true);
	}
	else if (pargument->merging)
	{
		print_prd(pprinter, false);
	}
	else if (pargument->is_vector)
	{
		print_lane(pprinter, pargument->number_of_elements, pargument->datatype);
	}
	else if (pargument->has_index)
	{
		print_lane(pprinter, pargument->number_of_elements, pargument->datatype);
		print_index(pprinter, pargument->reg.index);
	}
	else if (pargument->shifter.type)
	{
		print_shifter(pprinter, pargument);
	}
	return true;
}

static bool print_imm(aarch64_printer* pprinter, amed_immediate_value value,
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

static bool print_arg_imm(aarch64_printer* pprinter, amed_argument* pargument)
{
	LAZYPRINT(pprinter->pc, '#');
	print_imm(pprinter, pargument->imm, pargument->datatype);
	if (pargument->shifter.type) print_shifter(pprinter, pargument);
	return true;
}

static bool print_mem_reg(aarch64_printer* pprinter, uint16_t reg, uint16_t address_size)
{
	const char* str = amed_aarch64_register_to_string(reg);
	pprinter->pc += sprintf_s(pprinter->pc, AMED_AARCH64_REGISTER_MAX_TEXT_LENGTH, "%s", str);
	if (reg >= AMED_AARCH64_REGISTER_Z0 && reg <= AMED_AARCH64_REGISTER_Z31)
	{
		LAZYPRINT(pprinter->pc, '.');
		LAZYPRINT(pprinter->pc, address_size == 32 ? 'S' : 'D');
	}
	return true;
}

static bool print_mem_offset(aarch64_printer* pprinter, amed_argument* pargument)
{
	if (pargument->mem.regoff)
	{
		LAZYPRINT(pprinter->pc, ',');
		LAZYPRINT(pprinter->pc, ' ');
		print_mem_reg(pprinter, pargument->mem.regoff, pargument->mem.address_size);
	}
	else if (pargument->mem.immoff.value.i64)
	{
		LAZYPRINT(pprinter->pc, ',');
		LAZYPRINT(pprinter->pc, ' ');
		LAZYPRINT(pprinter->pc, '#');
		print_imm(pprinter, pargument->mem.immoff.value, pargument->mem.immoff.datatype);
	}
	else
	{
		return true;
	}
	if (pargument->shifter.type) print_shifter(pprinter, pargument);
	return true;
}

static bool print_arg_mem(aarch64_printer* pprinter, amed_argument* pargument)
{
	LAZYPRINT(pprinter->pc, '[');
	print_mem_reg(pprinter, pargument->mem.base, pargument->mem.address_size);
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

static bool print_arg_list(aarch64_printer* pprinter, amed_argument* pargument)
{
	int count = pargument->list.count;
	LAZYPRINT(pprinter->pc, '{');
	LAZYPRINT(pprinter->pc, ' ');
	for (int i = 0; i < count; i++)
	{
		const char* str = amed_aarch64_register_to_string(pargument->list.registers[i]);
		pprinter->pc += sprintf_s(pprinter->pc, AMED_AARCH64_REGISTER_MAX_TEXT_LENGTH, "%s", str);
		print_lane(pprinter, pargument->number_of_elements, pargument->datatype);
		if (i != count - 1)
		{
			LAZYPRINT(pprinter->pc, ',');
			LAZYPRINT(pprinter->pc, ' ');
		}
	}
	LAZYPRINT(pprinter->pc, ' ');
	LAZYPRINT(pprinter->pc, '}');
	if (pargument->has_index)
	{
		print_index(pprinter, pargument->list.index);
	}
	return true;
}

static bool print_arg_enum(aarch64_printer* pprinter, amed_argument* pargument,
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
	if (pargument->has_shifter && pargument->printer.print_shifter) print_shifter(pprinter, pargument);
	return true;
}

static bool print_sysreg_encoding(aarch64_printer* pprinter, amed_argument* pargument)
{
	pprinter->pc += sprintf_s(pprinter->pc, 20, "S%d_%d_C%d_C%d_%d", 
		pargument->aarch64.sysreg_encoding.op0,
		pargument->aarch64.sysreg_encoding.op1,
		pargument->aarch64.sysreg_encoding.cn-1,
		pargument->aarch64.sysreg_encoding.cm-1,
		pargument->aarch64.sysreg_encoding.op2
		);
	return true;
}

int amed_aarch64_print_insn(char* buffer,amed_context*pcontext, amed_insn* pinsn, amed_formatter* pformatter)
{

	aarch64_printer printer =
	{
		.pc = buffer,
		.formatter = pformatter,
		.insn = pinsn,
		.context = pcontext,
	};
	const char* str = amed_aarch64_mnemonic_to_string(pinsn->mnemonic);
	printer.pc += sprintf_s(printer.pc, AMED_AARCH64_MNEMONIC_MAX_TEXT_LENGTH, "%s", str);
	if (pinsn->aarch64.condition && AMED_ARM_CONDITION_AL != pinsn->aarch64.condition)
	{
		const char* str = amed_arm_condition_to_string(pinsn->aarch64.condition);
		printer.pc += sprintf_s(printer.pc, 4+AMED_ARM_CONDITION_MAX_TEXT_LENGTH, ".%s", str);
	}
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
		case AMED_ARGUMENT_TYPE_SYSREG_ENCODING:
			print_sysreg_encoding(&printer, pargument);
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

		case AMED_ARGUMENT_TYPE_PATTERN:
			print_arg_enum(&printer, pargument, &amed_aarch64_pattern_to_string, AMED_AARCH64_PATTERN_MAX_TEXT_LENGTH);
			break;
		case AMED_ARGUMENT_TYPE_AT_OP:
			print_arg_enum(&printer, pargument, &amed_aarch64_at_op_to_string, AMED_AARCH64_AT_OP_MAX_TEXT_LENGTH);
			break;
		case AMED_ARGUMENT_TYPE_DC_OP:
			print_arg_enum(&printer, pargument, &amed_aarch64_dc_op_to_string, AMED_AARCH64_DC_OP_MAX_TEXT_LENGTH);
			break;
		case AMED_ARGUMENT_TYPE_IC_OP:
			print_arg_enum(&printer, pargument, &amed_aarch64_ic_op_to_string, AMED_AARCH64_IC_OP_MAX_TEXT_LENGTH);
			break;
		case AMED_ARGUMENT_TYPE_TLBI_OP:
			print_arg_enum(&printer, pargument, &amed_aarch64_tlbi_op_to_string, AMED_AARCH64_TLBI_OP_MAX_TEXT_LENGTH);
			break;
		case AMED_ARGUMENT_TYPE_SYNC_OP:
			print_arg_enum(&printer, pargument, &amed_aarch64_sync_op_to_string, AMED_AARCH64_SYNC_OP_MAX_TEXT_LENGTH);
			break;
		case AMED_ARGUMENT_TYPE_BTI_OP:
			print_arg_enum(&printer, pargument, &amed_aarch64_bti_op_to_string, AMED_AARCH64_BTI_OP_MAX_TEXT_LENGTH);
			break;
		case AMED_ARGUMENT_TYPE_PRF_OP:
			print_arg_enum(&printer, pargument, &amed_aarch64_prf_op_to_string, AMED_AARCH64_PRF_OP_MAX_TEXT_LENGTH);
			break;
		case AMED_ARGUMENT_TYPE_CTX_OP:
			print_arg_enum(&printer, pargument, &amed_aarch64_ctx_op_to_string, AMED_AARCH64_CTX_OP_MAX_TEXT_LENGTH);
			break;

		case AMED_ARGUMENT_TYPE_CSPACE:
			print_arg_enum(&printer, pargument, &amed_arm_cspace_to_string, AMED_ARM_CSPACE_MAX_TEXT_LENGTH);
			break;

		case AMED_ARGUMENT_TYPE_PSPACE:
			print_arg_enum(&printer, pargument, &amed_arm_pspace_to_string, AMED_ARM_PSPACE_MAX_TEXT_LENGTH);
			break;

		case AMED_ARGUMENT_TYPE_BARRIER:
			print_arg_enum(&printer, pargument, &amed_arm_barrier_to_string, AMED_ARM_BARRIER_MAX_TEXT_LENGTH);
			break;

		case AMED_ARGUMENT_TYPE_CONDITION:
			print_arg_enum(&printer, pargument, &amed_arm_condition_to_string, AMED_ARM_CONDITION_MAX_TEXT_LENGTH);
			break;

		}
	}
	*printer.pc = '\0';
	if (pformatter->lower_case) for (; *buffer; ++buffer) *buffer = tolower(*buffer);

	return (int32_t)(printer.pc - buffer);
}