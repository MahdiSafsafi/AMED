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
#include "sed.h"
#include "include/lookup-a32.inc"
#include "include/lookup-t32.inc"
#include "include/lookup-t16.inc"
#include "../utils/binary.h"
#include "../utils/datatype.h"
#include "../armimm.h"

typedef struct
{
	amed_context* context;
	amed_insn* insn;
	const amed_db_encoding* encoding;
	const amed_db_template* ptemplate;
	uint32_t opcode;
	uint32_t lsb;
	uint16_t dst_reg;
	union
	{
		struct
		{
			bool is_arm : 1;
			bool has_reg : 1;
		};
		uint32_t attributes;
	};
}aarch32_internal;

/* forward declaration for aliascond */
static inline bool is_insn_in_it_block(aarch32_internal* pinternal);

/* symbols for aliascond */
#define Never false
#define Unconditionally true
#define BitCount get_bit_count
#define InITBlock is_insn_in_it_block(pinternal)

#include "include/aliasconds.inc"

#define DEFINITION_VALUE 1
#define DEFINITION_ENCODEDIN 2
#define DEFINITION_TABLE 3

static uint32_t decode_a32_imm(uint32_t imm12)
{
#ifdef AGGRESSIVE_OPTIMIZATION
	return a32_imm_table[imm12 & 0xfff];
#else 
	/*
	   unrotated_value = ZeroExtend(imm12<7:0>, 32);
	   (imm32, carry_out) = Shift_C(unrotated_value, SRType_ROR, 2*UInt(imm12<11:8>), carry_in);
	*/
	uint32_t unrotated_value = imm12 & 0xff;
	uint32_t amount = ((imm12 & 0xf00) >> 8) * 2;
	return ror(unrotated_value, amount);
#endif
}

static uint32_t decode_t32_imm(uint32_t imm12)
{
#ifdef AGGRESSIVE_OPTIMIZATION
	return t32_imm_table[imm12 & 0xfff];
#else 
	uint32_t imm32 = 0;
	uint32_t imm8 = imm12 & 0xff;
	if (!(imm12 & 0xc00))
	{
		switch ((imm12 & 0x300) >> 8)
		{
		case 0:
			//   imm32 = ZeroExtend(imm12<7:0>, 32);
			imm32 = imm8;
			break;
		case 1:
			//   imm32 = '00000000' : imm12<7:0> : '00000000' : imm12<7:0>;
			imm32 = imm8 | (imm8 << 16);
			break;
		case 2:
			//   imm32 = imm12<7:0> : '00000000' : imm12<7:0> : '00000000';
			imm32 = (imm8 << 8) | (imm8 << 24);
			break;
		case 3:
			//   imm32 = imm12<7:0> : imm12<7:0> : imm12<7:0> : imm12<7:0>;
			imm32 = (imm8) | (imm8 << 8) | (imm8 << 16) | (imm8 << 24);
			break;
		}
	}
	else
	{
		// unrotated_value = ZeroExtend('1':imm12<6:0>, 32);
		// (imm32, carry_out) = ROR_C(unrotated_value, UInt(imm12<11:7>));
		imm32 = (imm12 & 0x7F) | (1 << 7);
		imm8 = (imm12 & 0xF80) >> 7;
		imm32 = ror(imm32, imm8);
	}
	return imm32;
#endif
}

static int32_t read_encodedin_value(uint32_t opcode, uint32_t ref, uint32_t* pvalue)
{
	uint32_t result = 0;
	const amed_db_encodedin* pencodedin = (amed_db_encodedin*)&amed_aarch32_encodedins_array[ref];
	int gsize = 0;
	for (int i = 0;; i++)
	{
		uint32_t mask = pencodedin->mask;
		uint32_t size = pencodedin->size;
		if (!size) break;
		gsize += size;
		uint32_t value = get_masked_value(opcode, mask);
		result <<= size;
		result |= value;
		pencodedin++;
	}
	*pvalue = result;
	return gsize;
}

static bool lookup_tv(amed_db_table* ptable, uint32_t encoding, amed_db_tv** pptv)
{
	/* given a table, search for a particular item by its encoding value. */
	/*
		TODO: improve me using binary search.
	*/
	amed_db_tv* ptv = (amed_db_tv*)ptable->items;
	for (int i = 0; i < ptable->count; i++)
	{
		/* a table that call another table. */
		if (ptv->has_table)
			return lookup_tv(ptv->table, encoding, pptv);
		if (ptv->encoding == encoding)
		{
			*pptv = ptv;
			return true;
		}
		ptv++;
	}
	return false;
}

static int decode_any(aarch32_internal* pinternal, amed_db_any* pnode,
	uint32_t* pvalue, amed_db_tv** pptv, uint32_t* psize)
{
	if (pnode->has_encodedin)
	{
		amed_db_tv* ptv;
		uint32_t raw = 0;
		uint32_t size = read_encodedin_value(pinternal->opcode, pnode->encodedin, &raw);
		if (psize) *psize = size;
		if (pnode->table)
		{
			if (!lookup_tv(pnode->table, raw, &ptv)) return 0;
			*pvalue = ptv->value;
			if (pptv) *pptv = ptv;
			return DEFINITION_TABLE;
		}
		else
		{
			*pvalue = raw;
			return DEFINITION_ENCODEDIN;
		}
	}
	else
	{
		*pvalue = pnode->value;
		return DEFINITION_VALUE;
	}
	return 0;
}

static inline bool is_insn_in_it_block(aarch32_internal* pinternal)
{
	return pinternal->context->aarch32.itblock.is_in;
}

static amed_aarch32_register decode_register_value(uint32_t raw, amed_aarch32_symbol symbol)
{
	switch (symbol)
	{
	default:
		return AMED_AARCH32_REGISTER_NONE;
	case AMED_AARCH32_SYMBOL_GPR32:
		return AMED_AARCH32_REGISTER_R0 + raw;
	case AMED_AARCH32_SYMBOL_SIMD32:
		return AMED_AARCH32_REGISTER_S0 + raw;
	case AMED_AARCH32_SYMBOL_SIMD64:
		return AMED_AARCH32_REGISTER_D0 + raw;
	case AMED_AARCH32_SYMBOL_SIMD128:
		return AMED_AARCH32_REGISTER_Q0 + (raw >> 1);
	}
}

static bool decode_arg_reg(aarch32_internal* pinternal, amed_argument* pargument,
	amed_db_reg* pnode)
{
	amed_aarch32_register value = AMED_AARCH32_REGISTER_NONE;
	const amed_db_reginfo* pinfo = NULL;

	if (pnode->has_encodedin)
	{
		uint32_t raw = 0;
		read_encodedin_value(pinternal->opcode, pnode->encodedin, &raw);
		value = decode_register_value(raw, pnode->symbol);
		pinfo = &amed_aarch32_reginfo_array[value];
		if (pnode->pair)
		{
			/* pair register = previous register + 1 */
			if (pinfo->is_last)
			{
				/* not the same kind as the previous !
				   so we just decode it as the previous and we mark the instruction as unpredictable. */
				pinternal->insn->is_unpredictable = true;
			}
			else
			{
				pinfo = &amed_aarch32_reginfo_array[++value]; // next|current.
			}
		}

		if (pnode->even && !pinfo->is_even)
		{
			// probably the next register is pair.
			pinternal->insn->is_unpredictable = true;
		}
	}
	else
	{
		pinfo = &amed_aarch32_reginfo_array[value = pnode->value];
	}
	if (!pinfo) return false;

	uint16_t size = pinfo->size;
	amed_datatype dt = pnode->datatype ? pnode->datatype : pinfo->datatype;

	pargument->reg.value = value;
	pargument->printer.print_datatype = pnode->dt_required;
	pargument->read = pnode->read;
	pargument->write = pnode->write;
	pargument->datatype = dt;
	pargument->size = size;
	pargument->number_of_elements = 1;
	pargument->type = AMED_ARGUMENT_TYPE_REGISTER;

	switch (value)
	{
	case AMED_AARCH32_REGISTER_PC:
		if (pnode->nopc) return false;
		pinternal->insn->is_deprecated |= pnode->dpc;
		pinternal->insn->is_unpredictable |= pnode->upc;
		if (pnode->iwb || pnode->erb)
		{
			// interworking branch.
			pinternal->insn->may_branch = true;
		}
		else if (pnode->write)
		{
			// writing to pc => branch !
			pinternal->insn->may_branch = pinternal->insn->is_unpredictable = true;
		}
		break;
	case AMED_AARCH32_REGISTER_SP:
		if (pnode->nosp) return false;
		break;
	}
	if (pargument->write) pinternal->dst_reg = pargument->reg.value;
	if (pargument->read && pinternal->dst_reg == pargument->reg.value) pinternal->insn->is_destructive = true;

	return true;
}

static bool decode_arg_vreg(aarch32_internal* pinternal, amed_argument* pargument,
	amed_db_vreg* pnode)
{
	if (!decode_arg_reg(pinternal, pargument, pnode)) return false;
	pargument->is_vector = true;
	pinternal->insn->is_vector = true;
	return true;
}

static bool decode_arg_ereg(aarch32_internal* pinternal, amed_argument* pargument,
	amed_db_ereg* pnode)
{
	if (!decode_arg_reg(pinternal, pargument, (amed_db_reg*)pnode->reg)) return false;
	if (!decode_any(pinternal, (amed_db_any*)pnode->idx, &pargument->reg.index, NULL, NULL)) return false;
	pargument->has_index = true;
	return true;
}

static bool decode_arg_wreg(aarch32_internal* pinternal, amed_argument* pargument,
	amed_db_wreg* pnode)
{
	if (!decode_arg_reg(pinternal, pargument, (amed_db_reg*)pnode->reg)) return false;
	amed_db_any* node_wback = (amed_db_any*)pnode->wback;

	if (node_wback->has_encodedin)
	{
		uint32_t raw = 0;
		read_encodedin_value(pinternal->opcode, node_wback->encodedin, &raw);
		if (node_wback->symbol == AMED_AARCH32_SYMBOL_wback16)
		{
			uint32_t index = pargument->reg.value - AMED_AARCH32_REGISTER_R0;
			/* this is thumb 16 ... there is no much field, so wback is not encoded in W field.
			  wback is possible only if the register is not in the list. */
			pargument->write_back = raw & (1 << index) ? false : true;
		}
		else
		{
			pargument->write_back = raw != 0;
		}
	}
	else
	{
		pargument->write_back = node_wback->value != 0;
	}

	if (pargument->write_back && pargument->reg.value == AMED_AARCH32_REGISTER_PC)
	{
		pinternal->insn->may_branch = pinternal->insn->is_unpredictable = true;
	}
	return true;
}

static bool decode_arg_shifter(aarch32_internal* pinternal, amed_argument* pargument,
	amed_db_shifter* pnode)
{
	/* standard shifter
	   ----------------
	   improve db: add table for standard shifter.
	*/
	static const amed_shift std_shift[] =
	{
		/* 0 */ AMED_SHIFT_LSL,
		/* 1 */ AMED_SHIFT_LSR,
		/* 2 */ AMED_SHIFT_ASR,
		/* 3 */ AMED_SHIFT_ROR // also could be RRX !
	};

	uint32_t shift = 0;
	pargument->shifter.attributes = 0;

	int definition = decode_any(pinternal, pnode->shift, &shift, NULL, NULL);
	if (!definition) return false;
	if (DEFINITION_ENCODEDIN == definition) shift = std_shift[shift];
	if (pnode->amount)
	{
		if (AMED_AARCH32_NODE_TYPE_RS == ((amed_db_any*)pnode->amount)->type)
		{
			uint32_t rs = 0;
			read_encodedin_value(pinternal->opcode, ((amed_db_any*)pnode->rs)->encodedin, &rs);
			pargument->shifter.has_register = true;
			pargument->shifter.reg = AMED_AARCH32_REGISTER_R0 + rs;
		}
		else
		{
			uint32_t amount = 0;
			pargument->shifter.has_amount = true;
			definition = decode_any(pinternal, (amed_db_amount*)pnode->amount, &amount, NULL, NULL);
			if (DEFINITION_ENCODEDIN == definition && !amount)
			{
				switch (shift)
				{
				case AMED_SHIFT_ASR:
				case AMED_SHIFT_LSR:
					/* value 32 can't be encoded in imm5 => it's encoded as 0 ! */
					amount = 32;
					break;
				case AMED_SHIFT_ROR:
					shift = AMED_SHIFT_RRX;
					pargument->shifter.has_amount = false;
					break;
				}
			}
			pargument->shifter.amount = amount;
		}
	}
	pargument->shifter.type = shift;
	pargument->has_shifter = true;
	pargument->printer.print_shifter = !(shift == AMED_SHIFT_LSL && !pargument->shifter.amount);
	return true;
}

static bool decode_arg_regsh(aarch32_internal* pinternal, amed_argument* pargument,
	amed_db_regsh* pnode)
{
	if (!decode_arg_reg(pinternal, pargument, (amed_db_reg*)pnode->reg)) return false;
	if (!decode_arg_shifter(pinternal, pargument, (amed_db_shifter*)pnode->shifter)) return false;
	return true;
}

static uint32_t decode_imm_width(aarch32_internal* pinternal, uint32_t value)
{
	switch (pinternal->insn->mnemonic)
	{
	case AMED_AARCH32_MNEMONIC_UBFX:
	case AMED_AARCH32_MNEMONIC_SBFX:
		return value + 1;
	case AMED_AARCH32_MNEMONIC_BFC:
	case AMED_AARCH32_MNEMONIC_BFI:
		// msb = <lsb>+<width>-1
		return  value + 1 - pinternal->lsb;
	default:return value;
	}
}

static inline uint32_t decode_imm_lsb(aarch32_internal* pinternal, uint32_t value)
{
	pinternal->lsb = value;
	return value;
}

static bool decode_arg_imm(aarch32_internal* pinternal, amed_argument* pargument,
	amed_db_imm* pnode)
{
	bool ok = true;
	amed_datatype dt = pnode->datatype;
	uint32_t value = 0;
	pargument->imm.i64 = 0;
	pargument->type = AMED_ARGUMENT_TYPE_IMMEDIATE;
	uint32_t nb = 0;
	int definition = decode_any(pinternal, pnode, &value, NULL, &nb);
	if (DEFINITION_ENCODEDIN != definition)
	{
		pargument->imm.i32 = value;
		pargument->datatype = dt;
		return true;
	}

	switch (pnode->symbol)
	{
	case AMED_AARCH32_SYMBOL_width:
		dt = AMED_DATATYPE_U8;
		pargument->imm.i32 = decode_imm_width(pinternal, value);
		break;

	case AMED_AARCH32_SYMBOL_lsb:
		dt = AMED_DATATYPE_U8;
		pargument->imm.i32 = decode_imm_lsb(pinternal, value);
		break;

	case AMED_AARCH32_SYMBOL_aimm:
		/* modified immediate constants in A32 instructions */
		dt = AMED_DATATYPE_I32;
		pargument->imm.i32 = decode_a32_imm(value);
		break;

	case AMED_AARCH32_SYMBOL_timm:
		/* modified immediate constants in T32 instructions */
		dt = AMED_DATATYPE_I32;
		pargument->imm.i32 = decode_t32_imm(value);
		break;

	case AMED_AARCH32_SYMBOL_vfpimm:
		/* modified immediate constants in fp instructions */
		ok = decode_vfp_imm(value, &pargument->imm.f64);
		break;

	case AMED_AARCH32_SYMBOL_advimm:
		/* modified immediate constants in advsimd instructions */

		/* DB:FIXME:
			this doesn't influence the decoder but, MOV instruction can use F32 !!!
			change IMM node to FPIMM for MOV instruction that use F32.
		*/
		ok = decode_advsimd_imm(value, &pargument->imm.i64, &dt);
		break;

	case AMED_AARCH32_SYMBOL_shift_left:
		pargument->imm.i32 = value - pnode->arg0;;
		break;

	case AMED_AARCH32_SYMBOL_fbits_right:
	case AMED_AARCH32_SYMBOL_shift_right:
		pargument->imm.i32 = pnode->arg0 - value;
		break;

	default:
		pargument->imm.i32 = value;
		if (pnode->signpos)
		{
			pargument->imm.s64 = sign_extend64(value, nb - 1);
			pargument->datatype = AMED_DATATYPE_S32;
		}
		if (pnode->scale) pargument->imm.s64 *= pnode->scale;
	}

	pargument->datatype = dt;
	return ok;
}

static bool decode_arg_label(aarch32_internal* pinternal, amed_argument* pargument,
	amed_db_label* pnode)
{
	pargument->type = AMED_ARGUMENT_TYPE_LABEL;
	pargument->datatype = AMED_DATATYPE_U32;
	pargument->imm.s64 = 0;
	uint32_t value = 0;
	int nb = read_encodedin_value(pinternal->opcode, pnode->encodedin, &value);
	uint32_t s = value >> (nb - 1);
	uint32_t i1, i2;

	uint32_t scale = pnode->scale ? pnode->scale : 1;
	switch (pnode->symbol)
	{
	case AMED_AARCH32_SYMBOL_plabel:
		/* positive label */
		pargument->imm.u32 = value * scale;
		pargument->datatype = AMED_DATATYPE_U32;
		break;

	case AMED_AARCH32_SYMBOL_nlabel:
		/* negative label */
		pargument->imm.u32 = value * scale;
		pargument->imm.s64 = -pargument->imm.s64;
		pargument->datatype = AMED_DATATYPE_S32;
		break;

	case AMED_AARCH32_SYMBOL_plabela:
		/* positive label a32 */
		pargument->imm.u32 = decode_a32_imm(value);
		pargument->datatype = AMED_DATATYPE_U32;
		break;

	case AMED_AARCH32_SYMBOL_nlabela:
		/* negative label a32 */
		pargument->imm.u32 = decode_a32_imm(value);
		pargument->imm.s64 = -pargument->imm.s64;
		pargument->datatype = AMED_DATATYPE_S32;
		break;

	case AMED_AARCH32_SYMBOL_labelj:
		/*
		I1 = NOT(J1 EOR S);
		I2 = NOT(J2 EOR S);
		imm32 = SignExtend(S:I1:I2:imm10H:imm10L:'00', 32);
		*/
		i1 = (value >> (nb - 2)) & 1;
		i2 = (value >> (nb - 3)) & 1;
		i1 = !(i1 ^ s);
		i2 = !(i2 ^ s);
		value &= ~(3 << (nb - 3));
		value |= (i1 >> (nb - 2)) | (i2 >> (nb - 3));
		pargument->imm.i32 = value;
		/* fall through */
	case AMED_AARCH32_SYMBOL_label:
		pargument->imm.u32 = value;
		if (pnode->signpos)
		{
			pargument->imm.s64 = sign_extend64(value, nb - 1);
			pargument->datatype = AMED_DATATYPE_S32;
		}
		pargument->imm.s64 *= scale;
		break;
	default: return false;
	}
	return true;
}

static bool decode_arg_immsh(aarch32_internal* pinternal, amed_argument* pargument,
	amed_db_immsh* pnode)
{
	if (!decode_arg_imm(pinternal, pargument, (amed_db_imm*)pnode->imm)) return false;
	if (!decode_arg_shifter(pinternal, pargument, (amed_db_shifter*)pnode->shifter)) return false;
	return true;
}

static bool decode_anynymous_immreg(aarch32_internal* pinternal, amed_argument* pargument,
	void* pnode)
{
	switch (*(uint8_t*)pnode)
	{
	case AMED_AARCH32_NODE_TYPE_BASE:
	case AMED_AARCH32_NODE_TYPE_REGOFF:
		return decode_arg_reg(pinternal, pargument, (amed_db_reg*)pnode);
	case AMED_AARCH32_NODE_TYPE_VBASE:
		return decode_arg_vreg(pinternal, pargument, (amed_db_vreg*)pnode);
	case AMED_AARCH32_NODE_TYPE_EBASE:
		return decode_arg_ereg(pinternal, pargument, (amed_db_ereg*)pnode);
	case AMED_AARCH32_NODE_TYPE_REGOFFSH:
		return decode_arg_regsh(pinternal, pargument, (amed_db_regsh*)pnode);
	case AMED_AARCH32_NODE_TYPE_IMMOFF:
		return decode_arg_imm(pinternal, pargument, (amed_db_imm*)pnode);
	case AMED_AARCH32_NODE_TYPE_IMMOFFSH:
		return decode_arg_immsh(pinternal, pargument, (amed_db_immsh*)pnode);
	default: return false;
	}
}

static bool decode_mem_access(aarch32_internal* pinternal, uint8_t access)
{
	switch (access)
	{
	case AMED_MEM_ACCESS_NONE:
	case AMED_MEM_ACCESS_UNPRIVILEGED:
		break;

	case AMED_MEM_ACCESS_ACQUIRE:
		pinternal->insn->is_acquiring = true;
		break;

	case AMED_MEM_ACCESS_RELEASE:
		pinternal->insn->is_releasing = true;
		break;

	case AMED_MEM_ACCESS_LORELEASE:
		pinternal->insn->is_releasing = true;
		break;

	case AMED_MEM_ACCESS_LOACQUIRE:
		pinternal->insn->is_acquiring = true;
		break;

	case AMED_MEM_ACCESS_ATOMIC:
		pinternal->insn->is_atomic = true;
		break;

	case AMED_MEM_ACCESS_ATOMIC_RELEASE:
		pinternal->insn->is_releasing = pinternal->insn->is_atomic = true;
		break;

	case AMED_MEM_ACCESS_ATOMIC_ACQUIRE:
		pinternal->insn->is_acquiring = pinternal->insn->is_atomic = true;
		break;
	}
	return true;
}

static bool decode_arg_mem(aarch32_internal* pinternal, amed_argument* pargument,
	amed_db_mem* pnode)
{
	uint32_t align = 0, add = 1, size = pnode->size ? ((amed_db_size*)pnode->size)->size : 0;

	pargument->mem.regoff = AMED_AARCH32_REGISTER_NONE;
	pargument->mem.immoff.datatype = AMED_DATATYPE_NONE;
	pargument->mem.immoff.value.i64 = 0;
	pargument->mem.broadcasting.from = pargument->mem.broadcasting.to = 0;

	/* memory base */
	if (!decode_anynymous_immreg(pinternal, pargument, pnode->base)) return false;
	pargument->mem.base = pargument->reg.value;

	/* memory offset */
	if (pnode->regoff)
	{
		if (pnode->add && !decode_any(pinternal, (amed_db_add*)pnode->add, &add, NULL, NULL)) return false;
		if (!decode_anynymous_immreg(pinternal, pargument, pnode->regoff)) return false;
		if (AMED_ARGUMENT_TYPE_IMMEDIATE == pargument->type)
		{
			pargument->mem.immoff.datatype = pargument->datatype;
			pargument->mem.immoff.value.i64 = pargument->imm.i64;
		}
		else
		{
			pargument->mem.regoff = pargument->reg.value;
		}
	}

	if (pnode->align && !decode_any(pinternal, (amed_db_any*)pnode->align, &align, NULL, NULL)) return false;

	pargument->type = AMED_ARGUMENT_TYPE_MEMORY;
	pargument->size = size;
	pargument->read = pnode->read;
	pargument->write = pnode->write;
	pargument->write_back = pnode->pre_indexed | pnode->post_indexed;
	pargument->is_post_indexed = pnode->post_indexed;
	pargument->is_pre_indexed = pnode->pre_indexed;
	pargument->is_adding = 1 == add;

	pargument->mem.alignement = align;
	pargument->mem.address_size = 32;

	pinternal->insn->may_load |= pargument->read;
	pinternal->insn->may_store |= pargument->write;
	if (pnode->ldacc) decode_mem_access(pinternal, pnode->ldacc);
	if (pnode->stacc) decode_mem_access(pinternal, pnode->stacc);
	return true;
}

static bool decode_arg_enum(aarch32_internal* pinternal, amed_argument* pargument,
	amed_db_any* pnode)
{
	uint8_t type = AMED_ARGUMENT_TYPE_NONE;
	uint32_t value = 0;
	amed_db_tv* ptv = NULL;
	bool is_representable = false;
	pargument->imm.u64 = 0;
	pargument->datatype = AMED_DATATYPE_U8;

	switch (pnode->type)
	{
	case AMED_AARCH32_NODE_TYPE_CSPACE: type = AMED_ARGUMENT_TYPE_CSPACE; break;
	case AMED_AARCH32_NODE_TYPE_PSPACE:type = AMED_ARGUMENT_TYPE_PSPACE; break;
	case AMED_AARCH32_NODE_TYPE_COND:type = AMED_ARGUMENT_TYPE_CONDITION; break;
	case AMED_AARCH32_NODE_TYPE_ENDIAN:type = AMED_ARGUMENT_TYPE_ENDIAN; break;
	case AMED_AARCH32_NODE_TYPE_SYNC_OP:type = AMED_ARGUMENT_TYPE_SYNC_OP; break;
	case AMED_AARCH32_NODE_TYPE_BARRIER:type = AMED_ARGUMENT_TYPE_BARRIER; break;
	case AMED_AARCH32_NODE_TYPE_BNKDREG:type = AMED_ARGUMENT_TYPE_REGISTER; break;
	case AMED_AARCH32_NODE_TYPE_SPECREG:type = AMED_ARGUMENT_TYPE_REGISTER; break;

	default: return false;
	}
	if (pnode->has_encodedin)
	{
		read_encodedin_value(pinternal->opcode, pnode->encodedin, &value);
		pargument->imm.u32 = value;
		if (pnode->table)
		{
			if (lookup_tv(pnode->table, value, &ptv))
			{
				is_representable = ptv->is_representable;
				value = ptv->value;
			}
		}
		else
		{
			switch (type)
			{
			case AMED_ARGUMENT_TYPE_CONDITION:
			case AMED_ARGUMENT_TYPE_CSPACE:
			case AMED_ARGUMENT_TYPE_PSPACE:
				value++;
				is_representable = true;
				break;
			default:is_representable = false;
			}
		}
	}
	else
	{
		value = pnode->value;
		is_representable = true;
	}
	pargument->is_representable = is_representable;
	pargument->type = type;
	pargument->token = value;
	pargument->read = true;
	return true;
}

static bool decode_arg_iflags(aarch32_internal* pinternal, amed_argument* pargument,
	amed_db_iflags* pnode)
{
	uint32_t raw = 0;
	if (!decode_any(pinternal, pnode, &raw, NULL, NULL)) return false;
	pargument->type = AMED_ARGUMENT_TYPE_AIF;
	pargument->read = true;
	pargument->aarch32.aif.value = raw;
	if (!raw)
	{
		pargument->is_representable = false;
		pinternal->insn->is_unpredictable = true;
	}
	return true;
}

static bool decode_arg_slist(aarch32_internal* pinternal, amed_argument* pargument,
	amed_db_slist* pnode)
{
	/* decode single list */

	if (pnode->has_encodedin)
	{
		uint32_t raw = 0;
		read_encodedin_value(pinternal->opcode, pnode->encodedin, &raw);
		pargument->list.registers[0] = AMED_AARCH32_REGISTER_R0 + raw;
	}
	else
	{
		pargument->list.registers[0] = pnode->value;
	}
	pargument->list.registers[1] = AMED_AARCH32_REGISTER_NONE;
	pargument->list.count = 1;
	pargument->read = pnode->read;
	pargument->write = pnode->write;
	pargument->datatype = pnode->datatype ? pnode->datatype : AMED_DATATYPE_I32;
	pargument->number_of_elements = 1;
	pargument->type = AMED_ARGUMENT_TYPE_LIST;

	pinternal->insn->may_branch |= (pargument->write && pargument->list.registers[0] == AMED_AARCH32_REGISTER_PC);
	return true;
}

static bool decode_arg_glist(aarch32_internal* pinternal, amed_argument* pargument,
	amed_db_glist* pnode) {
	assert(pnode->encodedin && "node does not have encodedin.");

	uint32_t raw = 0;
	read_encodedin_value(pinternal->opcode, pnode->encodedin, &raw);
	bool pc_in_list = raw & 0x8000;
	int n = 0, i = 0;
	while (raw)
	{
		if (1 & raw) pargument->list.registers[n++] = i + AMED_AARCH32_REGISTER_R0;
		raw >>= 1;
		i++;
	}

	pargument->type = AMED_ARGUMENT_TYPE_LIST;
	pargument->datatype = pnode->datatype ? pnode->datatype : AMED_DATATYPE_I32;
	pargument->number_of_elements = 1;

	pargument->read = pnode->read;
	pargument->write = pnode->write;

	pargument->list.count = n;

	pinternal->insn->may_branch |= pc_in_list && pargument->write;
	return true;
}

static bool decode_arg_fslist(aarch32_internal* pinternal, amed_argument* pargument,
	amed_db_fslist* pnode)
{
	assert(pnode->base && "list does not have base node.");
	assert(pnode->count && "list does not have count node.");

	
	if (!decode_arg_reg(pinternal, pargument, (amed_db_reg*)pnode->base)) return false;
	amed_aarch32_register base = pargument->reg.value;

	int i = 0, count = 0;
	if (!decode_any(pinternal, (amed_db_count*)pnode->count, &count, NULL, NULL))return false;

	if (!count)
	{
		pinternal->insn->is_unpredictable = true;
	}
	else
	{
		while (i != count)
		{
			if (base == AMED_AARCH32_REGISTER_D0)
			{
				pinternal->insn->is_unpredictable = true;
				break;
			}
			pargument->list.registers[i++] = base++;
		}
	}
	pargument->number_of_elements = 1;
	pargument->type = AMED_ARGUMENT_TYPE_LIST;
	pargument->list.count = i;
	return true;
}

static bool decode_arg_fdlist(aarch32_internal* pinternal, amed_argument* pargument,
	amed_db_fdlist* pnode)
{

	assert(pnode->base && "list does not have base node.");
	assert(pnode->count && "list does not have count node.");

	if (!decode_arg_reg(pinternal, pargument, (amed_db_reg*)pnode->base)) return false;
	amed_aarch32_register base = pargument->reg.value;

	int i = 0, count = 0;
	if (!decode_any(pinternal, (amed_db_count*)pnode->count, &count, NULL, NULL)) return false;
	/* count for fdlist is encoded as twice. */
	count /= 2;

	if (!count)
	{
		pinternal->insn->is_unpredictable = true;
	}
	else
	{
		while (i != count)
		{
			if (base == AMED_AARCH32_REGISTER_Q0)
			{
				pinternal->insn->is_unpredictable = true;
				break;
			}
			pargument->list.registers[i++] = base++;
		}
	}
	pargument->type = AMED_ARGUMENT_TYPE_LIST;
	pargument->number_of_elements = 1;
	pargument->list.count = i;
	return true;
}

static bool decode_arg_vlist(aarch32_internal* pinternal, amed_argument* pargument,
	amed_db_vlist* pnode)
{

	assert(pnode->base && "list does not have base node.");
	assert(pnode->count && "list does not have count node.");
	assert(pnode->inc && "list does not have inc node.");


	int inc = 1, count = 0;
	if (!decode_anynymous_immreg(pinternal, pargument, pnode->base)) return false;
	if (!decode_any(pinternal, (amed_db_count*)pnode->count, &count, NULL, NULL)) return false;
	if (!decode_any(pinternal, (amed_db_inc*)pnode->inc, &inc, NULL, NULL)) return false;

	amed_aarch32_register base = pargument->reg.value;
	pargument->list.index = pargument->reg.index;

	int i = 0, j = 0;

	while (i != count)
	{
		amed_aarch32_register reg = base + j;
		if (reg >= AMED_AARCH32_REGISTER_Q16)
		{
			pinternal->insn->is_unpredictable = true;
			break;
		}
		pargument->list.registers[i] = reg;
		j += inc;
		i++;
	}

	pargument->type = AMED_ARGUMENT_TYPE_LIST;
	pargument->list.count = i;
	return true;
}

static bool decode_arg_sysreg(aarch32_internal* pinternal, amed_argument* pargument,
	amed_db_sysreg* pnode)
{
	if (!decode_arg_enum(pinternal, pargument, (amed_db_any*)pnode)) return false;
	if (pargument->is_representable)
	{
		pargument->type = AMED_ARGUMENT_TYPE_REGISTER;
		pargument->reg.value = pargument->token;
	}
	pargument->read = pnode->read;
	pargument->write = pnode->write;
	return true;
}

static bool decode_node(aarch32_internal* pinternal, amed_argument* pargument,
	void* pnode)
{
	pargument->attributes = 0;
	pargument->printer.attributes = 0;
	pargument->is_representable = true;
	pargument->type = AMED_ARGUMENT_TYPE_NONE;

	switch (*(uint8_t*)pnode)
	{
	case AMED_AARCH32_NODE_TYPE_SZ:
	case AMED_AARCH32_NODE_TYPE_XYZ:
		return true;

	case AMED_AARCH32_NODE_TYPE_CSPACE:
	case AMED_AARCH32_NODE_TYPE_PSPACE:
	case AMED_AARCH32_NODE_TYPE_COND:
	case AMED_AARCH32_NODE_TYPE_ENDIAN:
	case AMED_AARCH32_NODE_TYPE_SYNC_OP:
	case AMED_AARCH32_NODE_TYPE_BARRIER:
		return decode_arg_enum(pinternal, pargument, (amed_db_any*)pnode);

	case AMED_AARCH32_NODE_TYPE_BNKDREG:
	case AMED_AARCH32_NODE_TYPE_SPECREG:
		return decode_arg_sysreg(pinternal, pargument, (amed_db_sysreg*)pnode);

	case AMED_AARCH32_NODE_TYPE_REG:
		return decode_arg_reg(pinternal, pargument, (amed_db_reg*)pnode);

	case AMED_AARCH32_NODE_TYPE_VREG:
		return decode_arg_vreg(pinternal, pargument, (amed_db_vreg*)pnode);

	case AMED_AARCH32_NODE_TYPE_EREG:
		return decode_arg_ereg(pinternal, pargument, (amed_db_ereg*)pnode);

	case AMED_AARCH32_NODE_TYPE_WREG:
		return decode_arg_wreg(pinternal, pargument, (amed_db_wreg*)pnode);

	case AMED_AARCH32_NODE_TYPE_REGSH:
		return decode_arg_regsh(pinternal, pargument, (amed_db_regsh*)pnode);

	case AMED_AARCH32_NODE_TYPE_GLIST:
		return decode_arg_glist(pinternal, pargument, (amed_db_glist*)pnode);

	case AMED_AARCH32_NODE_TYPE_SLIST:
		return decode_arg_slist(pinternal, pargument, (amed_db_slist*)pnode);

	case AMED_AARCH32_NODE_TYPE_FSLIST:
		return decode_arg_fslist(pinternal, pargument, (amed_db_fslist*)pnode);

	case AMED_AARCH32_NODE_TYPE_FDLIST:
		return decode_arg_fdlist(pinternal, pargument, (amed_db_fdlist*)pnode);

	case AMED_AARCH32_NODE_TYPE_VLIST:
	case AMED_AARCH32_NODE_TYPE_ELIST:
		return decode_arg_vlist(pinternal, pargument, (amed_db_vlist*)pnode);

	case AMED_AARCH32_NODE_TYPE_IMM:
		return decode_arg_imm(pinternal, pargument, (amed_db_imm*)pnode);

	case AMED_AARCH32_NODE_TYPE_FPIMM:
		return decode_arg_imm(pinternal, pargument, (amed_db_imm*)pnode);

	case AMED_AARCH32_NODE_TYPE_LABEL:
	case AMED_AARCH32_NODE_TYPE_ADDR:
		return decode_arg_label(pinternal, pargument, (amed_db_label*)pnode);

	case AMED_AARCH32_NODE_TYPE_LM:
	case AMED_AARCH32_NODE_TYPE_MEM:
		return decode_arg_mem(pinternal, pargument, (amed_db_mem*)pnode);

	case AMED_AARCH32_NODE_TYPE_IFLAGS:
		return decode_arg_iflags(pinternal, pargument, (amed_db_iflags*)pnode);

	}
	return false;
}

static bool decode_nodes(aarch32_internal* pinternal)
{
	int sequence = pinternal->ptemplate->arguments;
	void** ppnode = (void**)&amed_aarch32_arguments_array[sequence];
	int i = 0;

	while (*ppnode)
	{
		/* we keep decoding until there is no node. */
		amed_argument* pargument = &pinternal->insn->arguments[i];
		bool status = decode_node(pinternal, pargument, *ppnode);
		if (!status)
		{
			return false;
		}
		i++;
		ppnode++;
	}
	pinternal->insn->argument_count = i;
	pinternal->insn->arguments[i].type = AMED_ARGUMENT_TYPE_NONE;
	return true;
}

uint8_t get_it_op_from_mask(uint32_t mask)
{
	switch (mask)
	{
	default: return AMED_AARCH32_IT_OP_NONE;
	case 0x00: return AMED_AARCH32_IT_OP_NONE;
	case 0x01: return AMED_AARCH32_IT_OP_TTT;
	case 0x02: return AMED_AARCH32_IT_OP_TT;
	case 0x03: return AMED_AARCH32_IT_OP_TTE;
	case 0x04: return AMED_AARCH32_IT_OP_T;
	case 0x05: return AMED_AARCH32_IT_OP_TET;
	case 0x06: return AMED_AARCH32_IT_OP_TE;
	case 0x07: return AMED_AARCH32_IT_OP_TEE;
	case 0x08: return AMED_AARCH32_IT_OP_NONE;
	case 0x09: return AMED_AARCH32_IT_OP_ETT;
	case 0x0a: return AMED_AARCH32_IT_OP_ET;
	case 0x0b: return AMED_AARCH32_IT_OP_ETE;
	case 0x0c: return AMED_AARCH32_IT_OP_E;
	case 0x0d: return AMED_AARCH32_IT_OP_EET;
	case 0x0e: return AMED_AARCH32_IT_OP_EE;
	case 0x0f: return AMED_AARCH32_IT_OP_EEE;
	}
}

static bool decode_it(aarch32_internal* pinternal)
{
	amed_it_block* pit = &pinternal->context->aarch32.itblock;
	const mask = pinternal->opcode & 0x0f;
	amed_arm_condition first = pinternal->insn->arguments[0].token;
	amed_arm_condition second = AMED_ARM_CONDITION_AL;
	amed_arm_condition third = AMED_ARM_CONDITION_AL;
	amed_arm_condition fourth = AMED_ARM_CONDITION_AL;
	amed_arm_condition inverted = first ^ 1;
	int count = 0;
	/* TODO: optimize me using switch */
	if (8 == mask)
	{
		// mask=1000 => only first instruction.
		count = 1;
	}
	else if (4 == (mask & 7))
	{
		// mask=x100 => first + second.
		count = 2;
		second = mask & 8 ? inverted : first;
	}
	else if (2 == (mask & 3))
	{
		// mask=xx10 => first + second + third.
		count = 3;
		second = mask & 8 ? inverted : first;
		third = mask & 4 ? inverted : first;
	}
	else if (1 & mask)
	{
		// mask=xxx1 => first + second + third + fourth.
		count = 4;
		second = mask & 8 ? inverted : first;
		third = mask & 4 ? inverted : first;
		fourth = mask & 2 ? inverted : first;
	}
	if (pit->is_in)
	{
		/* it inside an it .*/
		pinternal->insn->aarch32.condition = AMED_ARM_CONDITION_NONE;
		pinternal->insn->is_unpredictable = true;
	}
	else
	{
		pinternal->insn->aarch32.condition = AMED_ARM_CONDITION_AL;
	}

	pit->is_in = true;
	pit->index = 0;
	pit->count = count;
	pit->conditions[0] = first;
	pit->conditions[1] = second;
	pit->conditions[2] = third;
	pit->conditions[3] = fourth;
	pinternal->insn->aarch32.it_op = get_it_op_from_mask(mask);
	pinternal->insn->aarch32.it_insn_count = count;
	return true;
}

static bool decode_conditional_execution(aarch32_internal* pinternal, amed_arm_condition condition)
{
	uint32_t status = pinternal->ptemplate->cond;
	bool ok = true;
	switch (status)
	{
	case AMED_ARM_CONDITION_COND:
		break;
	case AMED_ARM_CONDITION_UNCOND:
		/* only for arm instructions */
		condition = AMED_ARM_CONDITION_AL;
		break;
	case AMED_ARM_CONDITION_MUST_AL:
		ok = AMED_ARM_CONDITION_AL == condition;
		break;
	case AMED_ARM_CONDITION_MUST_COND:
		ok = AMED_ARM_CONDITION_AL != condition;
		break;
	case AMED_ARM_CONDITION_MUST_NV:
		ok = AMED_ARM_CONDITION_NV == condition;
		condition = ok ? AMED_ARM_CONDITION_AL : condition;
		break;
	case AMED_ARM_CONDITION_UNP_COND:
		pinternal->insn->is_unpredictable |= condition < AMED_ARM_CONDITION_AL;
		break;
	case AMED_ARM_CONDITION_NO_NV_UNP_COND:
		pinternal->insn->is_unpredictable |= condition < AMED_ARM_CONDITION_AL;
		/* fall throught */
	case AMED_ARM_CONDITION_NO_NV:
		ok = AMED_ARM_CONDITION_NV != condition;
		break;

	}
	pinternal->insn->aarch32.condition = condition;
	pinternal->insn->is_undefined |= !ok;
	pinternal->insn->is_running_conditionally = condition < AMED_ARM_CONDITION_AL;
	return true;
}

static inline bool decode_thumb_conditional_execution(aarch32_internal* pinternal)
{
	return decode_conditional_execution(pinternal, pinternal->context->aarch32.itblock.is_in ?
		pinternal->context->aarch32.itblock.conditions[pinternal->context->aarch32.itblock.index] : AMED_ARM_CONDITION_AL);
}

static inline bool decode_arm_conditional_execution(aarch32_internal* pinternal)
{
	// assume that instruction has cond field.
	uint32_t value = (pinternal->opcode & 0xf0000000) >> 28;
	return	decode_conditional_execution(pinternal, value + AMED_ARM_CONDITION_EQ);
}

static bool decode_template(aarch32_internal* pinternal, const amed_db_template* ptemplate)
{
	const uint32_t opcode = pinternal->opcode;
	pinternal->ptemplate = ptemplate;
	if (ptemplate->bitdiffs)
	{
		const amed_db_bitdiff* bitdiff = &amed_aarch32_bitdiffs_array[ptemplate->bitdiffs];
		if ((opcode & bitdiff->mask) != bitdiff->opcode)
		{
			return false;
		}
	}
	if (ptemplate->fit)
	{
		if (ptemplate->init && !is_insn_in_it_block(pinternal))
		{
			return false;
		}
		else if (ptemplate->outit && is_insn_in_it_block(pinternal))
		{
			return false;
		}
	}

	pinternal->insn->mnemonic = amed_aarch32_iform2mnem_array[pinternal->insn->iform = ptemplate->iform];
	bool ok = decode_nodes(pinternal);
	if (!ok) return false;

	if (pinternal->is_arm)
	{
		decode_arm_conditional_execution(pinternal);
	}
	else if (AMED_AARCH32_IFORM_IT == ptemplate->iform)
	{
		decode_it(pinternal);
	}
	else
	{
		decode_thumb_conditional_execution(pinternal);
	}

	pinternal->insn->page = pinternal->encoding->page;
	pinternal->insn->iclass = pinternal->encoding->iclass;
	pinternal->insn->cclass = pinternal->encoding->cclass;
	pinternal->insn->encoding = (int16_t)(pinternal->encoding - &amed_aarch32_encodings_array[0]);

	pinternal->insn->aarch32.pstate = amed_aarch32_iflags_array[pinternal->encoding->iflags];

	*(uint32_t*)&pinternal->insn->categories[0] = *(uint32_t*)&pinternal->encoding->categories[0];
	*(uint32_t*)&pinternal->insn->exceptions[0] = *(uint32_t*)&pinternal->encoding->exceptions[0];
	*(uint32_t*)&pinternal->insn->extensions[0] = *(uint32_t*)&pinternal->ptemplate->extensions[0];

	pinternal->insn->arch_variant = pinternal->ptemplate->arch_variant;

	pinternal->insn->may_branch |= AMED_CATEGORY_BRANCH == pinternal->insn->categories[1];
	pinternal->insn->is_constructive |= pinternal->has_reg && !pinternal->insn->is_destructive;
	pinternal->insn->aarch32.show_qualifier = ptemplate->showqlf;
	return true;
}

static bool decode_encoding(aarch32_internal* pinternal, const amed_db_encoding* pencoding)
{
	pinternal->encoding = (amed_db_encoding*)pencoding;

	const uint32_t opcode = pinternal->opcode;

	if ((opcode & pencoding->mask) != pencoding->opcode)
	{
		pinternal->insn->is_undefined = true;
		return false;
	}
	const int last_template = pencoding->first_template + pencoding->template_count;
	for (int i = pencoding->first_template; i < last_template; i++)
	{
		amed_db_template* ptemplate = (amed_db_template*)&amed_aarch32_templates_array[i];
		if (ptemplate->asmonly) continue;

		if (decode_template(pinternal, ptemplate))
		{
			return true;
		}
	}
	return false;
}

static bool decode_alias(aarch32_internal* pinternal, const amed_db_encoding* pencoding)
{
	uint16_t* pindex = (uint16_t*)&amed_aarch32_aliases_array[pencoding->aliases];
	while (*pindex)
	{
		/* we visit all possible alias and we accept the first one that meets the condition. */
		const amed_db_encoding* palias = &amed_aarch32_encodings_array[*pindex];
		if (((pinternal->opcode & palias->mask) == palias->opcode)
			&& is_alias_condition_ok(pinternal, palias->aliascond))
		{
			return decode_encoding(pinternal, palias);
		}
		pindex++;
	}
	return false;
}

static bool inline is_thumb16(uint32_t opcode)
{
	const uint32_t op0 = (opcode & 0xe000) >> 13;
	const uint32_t op1 = (opcode & 0x1800) >> 11;
	return (op0 != 7) || (op0 == 7 && !op1);
}

bool amed_aarch32_decode_insn(amed_context* pcontext, amed_insn* pinsn)
{
	if (!pcontext->length) return false;
	uint32_t opcode = 0, encoding_index = 0;
	aarch32_internal istruct;
	istruct.attributes = 0;
	pinsn->attributes = 0;
	pinsn->length = 4;
	switch (pcontext->machine_mode)
	{
	case AMED_MACHINE_MODE_32:
		/* arm */
		if (pcontext->length < sizeof(uint32_t)) return false;
		opcode = *(uint32_t*)pcontext->address;
		encoding_index = aarch32_lookup_a32(opcode);
		istruct.is_arm = true;
		break;
	case AMED_MACHINE_MODE_THUMB:
		if (pcontext->length < sizeof(uint16_t)) return false;
		istruct.is_arm = false;
		opcode = *(uint16_t*)pcontext->address;
		if (is_thumb16(opcode))
		{
			encoding_index = aarch32_lookup_t16(opcode);
			pinsn->length = 2;
		}
		else
		{
			if (pcontext->length < sizeof(uint32_t)) return false;
			opcode = *(uint32_t*)pcontext->address;
			opcode = (opcode << 16) | (opcode >> 16);
			encoding_index = aarch32_lookup_t32(opcode);
		}
		break;
	default: return false;
	}

	istruct.context = pcontext;
	istruct.insn = pinsn;
	istruct.opcode = opcode;

	const amed_db_encoding* pencoding = &amed_aarch32_encodings_array[encoding_index];

	bool ok = decode_encoding(&istruct, pencoding);
	if (ok)
	{
		if (pcontext->decode_aliases && pencoding->has_alias && !(pinsn->is_undefined || pinsn->is_unpredictable))
		{
			if (decode_alias(&istruct, pencoding))
			{
				pinsn->is_alias = true;
			}
		}
	}
	return ok;
}