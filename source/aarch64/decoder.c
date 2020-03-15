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
#include "include/lookup-a64.inc"
#include "../utils/binary.h"
#include "../utils/datatype.h"
#include "../armimm.h"

typedef struct _aarch64_internal
{
	amed_insn* insn;
	amed_context* context;
	const amed_db_encoding* encoding;
	const amed_db_template* ptemplate;
	uint32_t opcode;
	uint32_t datasize;
	uint32_t lsb;
	uint16_t dst_reg;
	union
	{
		struct
		{
			bool has_reg : 1;
		};
		uint32_t attributes;
	};
}aarch64_internal;


/*-------------------------------------------- ALIAS RUNTIME --------------------------------------------------*/

// we need this function for SVEMoveMaskPreferred function.
static bool decode_logimm(uint32_t n_immr_imms, uint32_t datasize, int64_t* pimm);


#define Unconditionally true
#define Never false
#define UInt(x) (x)
#define IsZero(x) (x == 0)
#define BitCount(x) get_bit_count(x)

/* SysOp */
#define	Sys_SYS       0
#define	Sys_AT        1
#define	Sys_DC        2
#define	Sys_IC        3
#define	Sys_TLBI      4

#include "sysop.inc"

static bool  MoveWidePreferred(bool sf, bool n, uint32_t imms, uint32_t immr)
{
	/*
		Return TRUE if a bitmask immediate encoding would generate an immediate
		value that could also be represented by a single MOVZ or MOVN instruction.
		Used as a condition for the preferred MOV<-ORR alias.
	*/
	int s = imms;
	int r = immr;
	int width = 32;
	// element size must equal total immediate size
	if (sf) {
		if (!n) return false;
		width = 64;
	}
	else {
		// sf=0 => datasize=32 
		if (n || (imms & 0x20)) return false;
	}
	// for MOVZ must contain no more than 16 ones
	if (imms < 16) {
		// ones must not span halfword boundary when rotated
		return (-r % 16) <= (15 - s);
	}
	// for MOVN must contain no more than 16 zeros
	if (s >= width - 15) {
		// zeros must not span halfword boundary when rotated
		return (r % 16) <= (s - (width - 15));
	}
	return false;
}

static bool  BFXPreferred(bool sf, bool uns, uint32_t imms, uint32_t immr)
{
	/*
		Return TRUE if UBFX or SBFX is the preferred disassembly of a
		UBFM or SBFM bitfield instruction. Must exclude more specific
		aliases UBFIZ, SBFIZ, UXT[BH], SXT[BHW], LSL, LSR and ASR.
	*/
	// must not match UBFIZ/SBFIX alias
	if (imms < immr) return false;

	// must not match LSR/ASR/LSL alias (imms == 31 or 63)
	if (((imms & 0x1F) == 0x1F) && ((imms & (1 << 5)) == (sf << 5))) return false;

	// must not match UXTx/SXTx alias
	if (!immr) {
		if (sf) {
			// must not match 64-bit SXT[BHW]
			if (uns) {
				switch (imms)
				{
				case 7:
				case 15:
				case 31:
					return false;
				default:
					break;
				}
			}
		}
		else {
			// must not match 32-bit UXT[BH] or SXT[BH]
			if ((imms == 7) || (imms == 15)) return false;
		}

	}
	// must be UBFX/SBFX alias
	return true;
}

static bool  SVEMoveMaskPreferred(uint32_t imm13)
{
	/*
		Return FALSE if a bitmask immediate encoding would generate an immediate
		value that could also be represented by a single DUP instruction.
		Used as a condition for the preferred MOV<-DUPM alias.
	*/
	union {
		char bytes[8];
		int16_t halfs[4];
		int32_t words[2];
		int64_t imm64;
	} limm = { 0 };
	bool result = decode_logimm(imm13, 0, &limm.imm64);
	if (!result) return false;
	/* Check for 8 bit immediates*/
	if (limm.bytes[0]) {
		// Check for 'ffffffffffffffxy' or '00000000000000xy'
		if (
			((limm.imm64 & 0xFFFFFFFFFFFFFF00) == 0x0000000000000000) ||
			((limm.imm64 & 0xFFFFFFFFFFFFFF00) == 0xFFFFFFFFFFFFFF00)
			)
		{
			return false;
		}
		// Check for 'ffffffxyffffffxy' or '000000xy000000xy'
		if (
			(limm.words[0] == limm.words[1]) &&
			(((limm.words[0] & 0xFFFFFF00) == 0x00000000) ||
			((limm.words[0] & 0xFFFFFF00) == 0xFFFFFF00))
			)
		{
			return false;
		}
		// Check for 'ffxyffxyffxyffxy' or '00xy00xy00xy00xy'
		if (
			(limm.words[0] == limm.words[1]) && (limm.halfs[0] == limm.halfs[1]) &&
			(((limm.halfs[0] & 0xFF00) == 0x0000) ||
			((limm.halfs[0] & 0xFF00) == 0xFF00))

			)
		{
			return false;
		}
		// Check for 'xyxyxyxyxyxyxyxy'
		if (
			(limm.words[0] == limm.words[1]) && (limm.halfs[0] == limm.halfs[1]) &&
			(limm.bytes[0] == limm.bytes[1])
			)
		{
			return false;
		}
	}
	else /* Check for 16 bit immediates */
	{
		// Check for 'ffffffffffffxy00' or '000000000000xy00'
		if (
			((limm.imm64 & 0xFFFFFFFFFFFF0000) == 0x0000000000000000) ||
			((limm.imm64 & 0xFFFFFFFFFFFF0000) == 0xFFFFFFFFFFFF0000)
			)
		{
			return false;
		}
		// Check for 'ffffxy00ffffxy00' or '0000xy000000xy00'
		if (
			(limm.words[0] == limm.words[1]) &&
			(((limm.words[0] & 0xFFFFFF00) == 0x00000000) ||
			((limm.words[0] & 0xFFFFFF00) == 0xFFFFFF00))
			)
		{
			return false;
		}
		// Check for 'xy00xy00xy00xy00'
		if (
			(limm.words[0] == limm.words[1]) &&
			(limm.halfs[0] == limm.halfs[1])
			)
		{
			return false;
		}
	}
	return true;
}

#include "include/aliasconds.inc"

/* no longer needed. */
#undef Unconditionally 
#undef Never 
#undef UInt
#undef IsZero
#undef BitCount 

#undef	Sys_SYS       
#undef	Sys_AT        
#undef	Sys_DC        
#undef	Sys_IC        
#undef	Sys_TLBI      

/*---------------------------------------------------------------------------------------------------------------------------*/


#define DEFINITION_VALUE 1
#define DEFINITION_ENCODEDIN 2
#define DEFINITION_TABLE 3


static bool decode_logimm(uint32_t n_imms_immr, uint32_t datasize, int64_t* pimm)
{
	/*
		The Logical (immediate) instructions accept a bitmask immediate value that is a 32-bit pattern or a 64-bit pattern
		viewed as a vector of identical elements of size e = 2, 4, 8, 16, 32 or, 64 bits. Each element contains the same
		sub-pattern, that is a single run of 1 to (e - 1) nonzero bits from bit 0 followed by zero bits, then rotated by 0 to (e -
		1) bits. This mechanism can generate 5334 unique 64-bit patterns as 2667 pairs of pattern and their bitwise inverse.
	*/

	/* nsr = N:imms:immr. */
	int n = (n_imms_immr >> 12) & 0x01;
	int s = (n_imms_immr >> 06) & 0x3F;
	int r = n_imms_immr & 0x3F;
	int ds = n == 1 ? 64 : 32;
	if (!datasize) datasize = ds;
	/* initialize vector lanes. */
	struct {
		union {
			int8_t  b[8];
			int16_t h[4];
			int32_t w[2];
			int64_t d[1];
			int64_t data;
		};
	} limm = { 0 };

	/* determine element size. */
	int len = get_hi_bit_pos((n << 6) | ((~s) & 0x3F));
	if (len < 1) return 0; /* UNDEFINED */
	int esize = 1 << len;
	uint64_t emask = replicate64(1, len);

	/* fix imms,immr for our element. */
	s &= emask;
	r &= emask;

	/* calculate element immediate value */
	uint64_t eimm = replicate64(1, s + 1);
	eimm = ror64(eimm, r, esize);

	/* replicate eimm to all elements */
	int32_t number = datasize / esize;
	switch (esize)
	{
	case 2:
	case 4:
	{
		/* too small to be represented as lanes. */
		for (int i = 0; i < number; i++) {
			limm.data |= (eimm << (i * esize));
		}
		break;
	}
	case 8:
	{
		/* as byte */
		for (int i = 0; i < number; i++) {
			limm.b[i] = (int8_t)eimm;
		}
		break;
	}
	case 16:
	{
		/* as half */
		for (int i = 0; i < number; i++) {
			limm.h[i] = (int16_t)eimm;
		}
		break;
	}
	case 32:
	{
		/* as word */
		for (int i = 0; i < number; i++) {
			limm.w[i] = (int32_t)eimm;
		}
		break;
	}
	case 64:
	{
		/* as dword */
		for (int i = 0; i < number; i++) {
			limm.d[i] = eimm;
		}
		break;
	}
	default:
		/* error */
		return 0;
	}
	/* final immediate */
	*pimm = limm.data;
	return 1;
}

/* =========================================================================================== */

static int32_t read_encodedin_value(uint32_t opcode, uint32_t ref, uint32_t* pvalue)
{
	uint32_t result = 0;
	const amed_db_encodedin* pencodedin = (amed_db_encodedin*)&amed_aarch64_encodedins_array[ref];
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


static bool get_register_size(aarch64_internal* pinternal, amed_aarch64_register value,
	int* size)
{
	/*
		SVE register does not have a fixed size !
		it vary between cpu manufacturers.
	*/
	const	amed_db_reginfo* pinfo = &amed_aarch64_reginfo_array[value];
	if (pinfo->size)
	{
		/* not SVE register. */
		*size = pinfo->size;
		return true;
	}
	else
	{
		amed_context* pcontext = pinternal->context;
		switch (pinfo->kind)
		{
		default:return false;
			/* SVE register. */
		case AMED_AARCH64_SYMBOL_SVEREG: *size = pcontext->vector_size; break;
		case AMED_AARCH64_SYMBOL_PRDREG: *size = pcontext->vector_size / 8; break;
		}
	}
	return true;
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

static amed_aarch64_register decode_register_value(uint32_t raw, amed_aarch64_symbol symbol)
{
	switch (symbol)
	{
	default:
		return AMED_AARCH64_REGISTER_NONE;
	case AMED_AARCH64_SYMBOL_GPR32:
		return AMED_AARCH64_REGISTER_W0 + (raw & 0x1f);
	case AMED_AARCH64_SYMBOL_GPR64:
		return AMED_AARCH64_REGISTER_X0 + (raw & 0x1f);
	case AMED_AARCH64_SYMBOL_SIMD8:
		return AMED_AARCH64_REGISTER_B0 + raw;
	case AMED_AARCH64_SYMBOL_SIMD16:
		return AMED_AARCH64_REGISTER_H0 + raw;
	case AMED_AARCH64_SYMBOL_SIMD32:
		return AMED_AARCH64_REGISTER_S0 + raw;
	case AMED_AARCH64_SYMBOL_SIMD64:
		return AMED_AARCH64_REGISTER_D0 + raw;
	case AMED_AARCH64_SYMBOL_SIMD128:
		return AMED_AARCH64_REGISTER_Q0 + raw;
	case AMED_AARCH64_SYMBOL_VECREG:
		return AMED_AARCH64_REGISTER_V0 + raw;
	case AMED_AARCH64_SYMBOL_SVEREG:
		return AMED_AARCH64_REGISTER_Z0 + raw;
	case AMED_AARCH64_SYMBOL_PRDREG:
		return AMED_AARCH64_REGISTER_P0 + raw;
	}
}

static inline int get_number_of_elements_from_vdt(amed_aarch64_vdt value)
{
	switch (value)
	{
	default: return 0;
	case AMED_AARCH64_VDT_16B:return 16;
	case AMED_AARCH64_VDT_1D: return 1;
	case AMED_AARCH64_VDT_1Q: return 1;
	case AMED_AARCH64_VDT_2D: return 2;
	case AMED_AARCH64_VDT_2H: return 2;
	case AMED_AARCH64_VDT_2S: return 2;
	case AMED_AARCH64_VDT_4B: return 4;
	case AMED_AARCH64_VDT_4H: return 4;
	case AMED_AARCH64_VDT_4S: return 4;
	case AMED_AARCH64_VDT_8B: return 8;
	case AMED_AARCH64_VDT_8H: return 8;
	case AMED_AARCH64_VDT_B:  return 1;
	case AMED_AARCH64_VDT_D:  return 1;
	case AMED_AARCH64_VDT_H:  return 1;
	case AMED_AARCH64_VDT_Q:  return 1;
	case AMED_AARCH64_VDT_S:  return 1;
	}
}

static inline int get_element_size_from_vdt(amed_aarch64_vdt value)
{
	switch (value)
	{
	default: return 0;
	case AMED_AARCH64_VDT_16B:return 8;
	case AMED_AARCH64_VDT_1D: return 64;
	case AMED_AARCH64_VDT_1Q: return 128;
	case AMED_AARCH64_VDT_2D: return 64;
	case AMED_AARCH64_VDT_2H: return 16;
	case AMED_AARCH64_VDT_2S: return 32;
	case AMED_AARCH64_VDT_4B: return 8;
	case AMED_AARCH64_VDT_4H: return 16;
	case AMED_AARCH64_VDT_4S: return 32;
	case AMED_AARCH64_VDT_8B: return 8;
	case AMED_AARCH64_VDT_8H: return 16;
	case AMED_AARCH64_VDT_B:  return 8;
	case AMED_AARCH64_VDT_D:  return 64;
	case AMED_AARCH64_VDT_H:  return 16;
	case AMED_AARCH64_VDT_Q:  return 128;
	case AMED_AARCH64_VDT_S:  return 32;
	}
}

static int decode_any(aarch64_internal* pinternal, amed_db_any* pnode,
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

static bool decode_arg_reg(aarch64_internal* pinternal, amed_argument* pargument,
	amed_db_reg* pnode)
{
	amed_aarch64_register value;

	if (pnode->has_encodedin)
	{
		uint32_t raw = 0;
		read_encodedin_value(pinternal->opcode, pnode->encodedin, &raw);
		value = decode_register_value(raw, pnode->symbol);
		const amed_db_reginfo* pinfo = &amed_aarch64_reginfo_array[value];
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
				++value; // next|current.
			}
		}
		else if (pnode->even && !pinfo->is_even)
		{
			// probably the next register is pair.
			pinternal->insn->is_unpredictable = true;
		}
		if (pnode->sp && raw == 31) value++;
	}
	else
	{
		value = pnode->value;
	}

	int size = 0;
	get_register_size(pinternal, value, &size);
	pargument->type = AMED_ARGUMENT_TYPE_REGISTER;
	pargument->size = size;
	pargument->number_of_elements = 1;
	pargument->datatype = pnode->datatype;
	pargument->read = pnode->read;
	pargument->write = pnode->write;
	pargument->reg.value = value;
	pinternal->has_reg = true;
	if (pargument->write) pinternal->dst_reg = pargument->reg.value;
	if (pargument->read && pinternal->dst_reg == pargument->reg.value) pinternal->insn->is_destructive = true;
	return true;
}

static bool decode_arg_shifter(aarch64_internal* pinternal, amed_argument* pargument,
	amed_db_shifter* pnode)
{
	pargument->has_shifter = true;
	pargument->shifter.amount = 0;
	pargument->shifter.attributes = 0;
	pargument->printer.print_shifter = true;
	if (pnode->has_encodedin)
	{
		amed_db_tv* ptv = NULL;
		uint32_t raw = 0;
		read_encodedin_value(pinternal->opcode, pnode->encodedin, &raw);
		if (!lookup_tv(pnode->table, raw, &ptv)) return false;
		pargument->shifter.type = ptv->shift;
		pargument->shifter.amount = ptv->amount;
		pargument->shifter.has_amount = true;
		return true;
	}
	else
	{
		amed_db_tv* ptv = NULL;
		uint32_t shift = 0;
		if (!decode_any(pinternal, (amed_db_any*)pnode->shift, &shift, &ptv, NULL)) return false;
		pargument->shifter.type = shift;

		if (pnode->amount)
		{
			/* has_amount = 1 */
			amed_db_amount* node_amount = (amed_db_any*)pnode->amount;
			amed_db_tv* ptv2 = NULL;
			int32_t amount = 0;
			if (!decode_any(pinternal, node_amount, &amount, &ptv2, NULL)) return false;
			if (node_amount->scale) amount *= node_amount->scale;
			if (AMOUNT_VL == amount) 
			{
				pargument->shifter.amount = pinternal->context->vector_size;
				pargument->printer.print_amount_as_vl = true;
			}
			else if (AMED_SHIFT_MUL == shift) amount++;			
			pargument->shifter.amount = amount;
			pargument->shifter.has_amount = true;
		}
	}
	if (!pargument->shifter.amount && pargument->shifter.type >= AMED_SHIFT_SXTB && pargument->shifter.type <= AMED_SHIFT_UXTX)
	{
		pargument->shifter.has_amount = false;
	}
	pargument->printer.print_shifter = !(pargument->shifter.type == AMED_SHIFT_LSL && pargument->shifter.amount == 0);
	return true;
}

static bool decode_arg_regsh(aarch64_internal* pinternal, amed_argument* pargument,
	amed_db_regsh* pnode)
{
	if (!decode_arg_reg(pinternal, pargument, (amed_db_reg*)pnode->reg)) return false;
	if (!decode_arg_shifter(pinternal, pargument, (amed_db_shifter*)pnode->shifter)) return false;
	return true;
}

static bool decode_arg_vreg(aarch64_internal* pinternal, amed_argument* pargument,
	amed_db_vreg* pnode)
{
	if (!decode_arg_reg(pinternal, pargument, (amed_db_reg*)pnode->reg)) return false;
	const amed_db_reginfo* pinfo = &amed_aarch64_reginfo_array[pargument->reg.value];
	int esize;
	switch (pinfo->symbol)
	{
	case AMED_AARCH64_SYMBOL_SVEREG:
		esize = get_element_size_from_vdt(pnode->vdt);
		if (esize) pargument->number_of_elements = pargument->size / esize;
		break;
	case AMED_AARCH64_SYMBOL_VECREG:
		pargument->number_of_elements = get_number_of_elements_from_vdt(pnode->vdt);
		break;
	}
	pargument->is_vector = true;
	pargument->printer.print_datatype = true;
	pinternal->insn->is_vector = true;
	return true;
}

static bool decode_arg_vregsh(aarch64_internal* pinternal, amed_argument* pargument,
	amed_db_vregsh* pnode)
{
	if (!decode_arg_vreg(pinternal, pargument, (amed_db_vreg*)pnode->reg)) return false;
	if (!decode_arg_shifter(pinternal, pargument, (amed_db_shifter*)pnode->shifter)) return false;
	return true;
}

static bool decode_arg_ereg(aarch64_internal* pinternal, amed_argument* pargument,
	amed_db_ereg* pnode)
{
	if (!decode_arg_reg(pinternal, pargument, (amed_db_reg*)pnode->reg)) return false;
	if (!decode_any(pinternal, (amed_db_any*)pnode->idx, &pargument->reg.index, NULL, NULL)) return false;
	pargument->has_index = true;
	pargument->printer.print_datatype = true;
	return true;
}

static bool decode_arg_preg(aarch64_internal* pinternal, amed_argument* pargument,
	amed_db_preg* pnode)
{
	if (!decode_arg_reg(pinternal, pargument, pnode)) return false;
	pargument->zeroing = pnode->zeroing;
	pargument->merging = pnode->merging;
	pinternal->insn->is_predicated = true;
	return true;
}

static bool decode_wide_imm_alias(uint32_t value, uint32_t datasize, bool inverted, uint64_t* imm)
{
	// encodedin = hw:imm16
	/*
	   e.g : MOVZ <Wd>, #<imm16>, LSL #<shift> => MOV <Wd>, #<imm>
	*/
	bool ok = true;
	uint32_t hw = (0x30000 & value) >> 16;
	uint64_t imm16 = 0xffff & value;
	switch (hw)
	{
	case 0:
	case 1:
		hw *= 16;
		break;
	case 2:
	case 3:
		if (32 == datasize)
		{
			ok = false;
			hw = 16;
			break;
		}
		hw *= 16;
	}

	*imm = imm16 << hw;
	if (inverted)
	{
		/*
			e.g: MOVN <Wd>, #<imm16>, LSL #<shift>  => MOV <Wd>, #<imm>
		*/
		*imm = ~*imm;
	}
	return ok;
}

static bool decode_imm_width(aarch64_internal* pinternal, uint32_t value,
	uint32_t datasize, uint32_t* imm)
{
	uint16_t mnemonic = pinternal->insn->mnemonic;
	switch (mnemonic)
	{
	case AMED_AARCH64_MNEMONIC_SBFIZ:
	case AMED_AARCH64_MNEMONIC_UBFIZ:
	case AMED_AARCH64_MNEMONIC_BFC:
	case AMED_AARCH64_MNEMONIC_BFI:

		/*
			SBFIZ <Xd>, <Xn>, #<lsb>, #<width>
			is equivalent to
			SBFM <Xd>, <Xn>, #(-<lsb> MOD 64), #(<width>-1)
		*/
		*imm = value + 1;
		break;
	case AMED_AARCH64_MNEMONIC_SBFX:
	case AMED_AARCH64_MNEMONIC_UBFX:
	case AMED_AARCH64_MNEMONIC_BFXIL:
		/*
			SBFX <Wd>, <Wn>, #<lsb>, #<width>
			is equivalent to
			SBFM <Wd>, <Wn>, #<lsb>, #(<lsb>+<width>-1)
		*/
		*imm = value + 1 - pinternal->lsb;
		break;
	default:
		*imm = value;
	}
	return true;
}

static bool decode_imm_lsb(aarch64_internal* pinternal, uint32_t value,
	uint32_t datasize, uint32_t* imm)
{
	uint16_t mnemonic = pinternal->insn->mnemonic;
	switch (mnemonic)
	{
	case AMED_AARCH64_MNEMONIC_SBFIZ:
	case AMED_AARCH64_MNEMONIC_UBFIZ:
	case AMED_AARCH64_MNEMONIC_BFC:
	case AMED_AARCH64_MNEMONIC_BFI:

		/*
			SBFIZ <Xd>, <Xn>, #<lsb>, #<width>
			is equivalent to
			SBFM <Xd>, <Xn>, #(-<lsb> MOD 64), #(<width>-1)
		*/
		*imm = (datasize - value) & (datasize - 1);
		;
		break;
	case AMED_AARCH64_MNEMONIC_SBFX:
	case AMED_AARCH64_MNEMONIC_UBFX:
	case AMED_AARCH64_MNEMONIC_BFXIL:
	default:
		/*
			SBFX <Wd>, <Wn>, #<lsb>, #<width>
			is equivalent to
			SBFM <Wd>, <Wn>, #<lsb>, #(<lsb>+<width>-1)
		*/
		*imm = value;
		break;
	}
	pinternal->lsb = *imm;
	return true;
}

static bool decode_arg_imm(aarch64_internal* pinternal, amed_argument* pargument,
	amed_db_imm* pnode)
{
	uint32_t nb = 0;
	uint32_t value = 0;
	int definition = decode_any(pinternal, pnode, &value, NULL, &nb);
	pargument->type = AMED_ARGUMENT_TYPE_IMMEDIATE;
	pargument->imm.i64 = 0;
	pargument->datatype = pnode->datatype;
	pargument->read = true;
	if (definition != DEFINITION_ENCODEDIN)
	{
		pargument->imm.i32 = value;
		return true;
	}

	bool ok = false;
	switch (pnode->symbol)
	{
	case AMED_AARCH64_SYMBOL_WideImmInverted:
		ok = decode_wide_imm_alias(value, pinternal->datasize, true, &pargument->imm.i64);
		break;

	case AMED_AARCH64_SYMBOL_WideImmAlias:
		ok = decode_wide_imm_alias(value, pinternal->datasize, false, &pargument->imm.i64);
		break;

	case AMED_AARCH64_SYMBOL_advimm:
	{
		/* Advanced SIMD modified immediate */
		amed_datatype dt = pnode->datatype;
		ok = decode_advsimd_imm(value, &pargument->imm.i64, &dt);
		pargument->datatype = dt;
		break;
	}
	case AMED_AARCH64_SYMBOL_vfpimm:
		/* floating point modified immediate */
		ok = decode_vfp_imm(value, &pargument->imm.f64);
		break;

	case AMED_AARCH64_SYMBOL_aimm:
		/* bit mask immediate */
		ok = decode_logimm(value, pinternal->datasize, &pargument->imm.i64);
		break;

	case AMED_AARCH64_SYMBOL_shift_left:
		pargument->imm.i32 = value - pnode->arg0;
		break;

	case AMED_AARCH64_SYMBOL_fbits_right:
	case AMED_AARCH64_SYMBOL_shift_right:
		pargument->imm.i32 = pnode->arg0 - value;
		break;

	case AMED_AARCH64_SYMBOL_lsb:
		decode_imm_lsb(pinternal, value, pinternal->datasize, &pargument->imm.i32);
		break;

	case AMED_AARCH64_SYMBOL_width:
		decode_imm_width(pinternal, value, pinternal->datasize, &pargument->imm.i32);
		break;

	default:
		pargument->imm.u32 = value;
		if (pnode->signpos)
		{
			pargument->imm.i64 = sign_extend64(value, nb - 1);
		}
		if (pnode->scale) pargument->imm.i64 *= pnode->scale;
	}
	return true;
}

static bool decode_arg_immsh(aarch64_internal* pinternal, amed_argument* pargument,
	amed_db_immsh* pnode)
{
	if (!decode_arg_imm(pinternal, pargument, (amed_db_imm*)pnode->imm)) return false;
	if (!decode_arg_shifter(pinternal, pargument, (amed_db_shifter*)pnode->shifter)) return false;
	return true;
}

static bool decode_arg_fpimm(aarch64_internal* pinternal, amed_argument* pargument,
	amed_db_fpimm* pnode)
{
	if (!decode_arg_imm(pinternal, pargument, pnode))return false;
	return true;
}

static bool decode_arg_label(aarch64_internal* pinternal, amed_argument* pargument,
	amed_db_imm* pnode)
{
	if (!decode_arg_imm(pinternal, pargument, pnode))return false;
	pargument->type = AMED_ARGUMENT_TYPE_LABEL;
	return true;
}

static bool decode_anynymous_immreg(aarch64_internal* pinternal, amed_argument* pargument,
	void* pnode)
{
	switch (*(uint8_t*)pnode)
	{
	case AMED_AARCH64_NODE_TYPE_BASE:
	case AMED_AARCH64_NODE_TYPE_REGOFF:
		return decode_arg_reg(pinternal, pargument, (amed_db_reg*)pnode);
	case AMED_AARCH64_NODE_TYPE_EBASE:
		return decode_arg_ereg(pinternal, pargument, (amed_db_ereg*)pnode);
	case AMED_AARCH64_NODE_TYPE_VBASE:
	case AMED_AARCH64_NODE_TYPE_VREGOFF:
		return decode_arg_vreg(pinternal, pargument, (amed_db_vreg*)pnode);
	case AMED_AARCH64_NODE_TYPE_REGOFFSH:
		return decode_arg_regsh(pinternal, pargument, (amed_db_regsh*)pnode);
	case AMED_AARCH64_NODE_TYPE_VREGOFFSH:
		return decode_arg_vregsh(pinternal, pargument, (amed_db_vregsh*)pnode);
	case AMED_AARCH64_NODE_TYPE_IMMOFF:
		return decode_arg_imm(pinternal, pargument, (amed_db_imm*)pnode);
	case AMED_AARCH64_NODE_TYPE_IMMOFFSH:
		return decode_arg_immsh(pinternal, pargument, (amed_db_immsh*)pnode);
	default: return false;
	}
}

static bool decode_mem_size(aarch64_internal* pinternal, amed_db_size* pnode, int16_t* out)
{
	/*
	decode size for SVE instruction.
	*/

	if (SIZE_VL == pnode->size)
	{
		/* VL */
		*out = pinternal->context->vector_size;
	}
	else if (SIZE_PL == pnode->size)
	{
		/* PL */
		*out = pinternal->context->vector_size / 8;
	}
	else if (pnode->esize)
	{
		/* size = number of element x size */
		*out = pnode->size * (pinternal->context->vector_size / pnode->esize);
	}
	else
	{
		*out = pnode->size;
	}
	return true;
}

static bool decode_arg_mem(aarch64_internal* pinternal, amed_argument* pargument,
	amed_db_mem* pnode)
{
	amed_argument arg;
	arg.attributes = 0;
	arg.printer.attributes = 0;
	arg.shifter.type = 0;
	
	pargument->mem.regoff = AMED_AARCH64_REGISTER_NONE;
	pargument->mem.immoff.datatype = AMED_DATATYPE_NONE;
	pargument->mem.immoff.value.i64 = 0;

	if (!decode_anynymous_immreg(pinternal, &arg, pnode->base)) return false;
	pargument->mem.base = arg.reg.value;
	pargument->mem.address_size = arg.size;
	if (pnode->regoff)
	{
		if (!decode_anynymous_immreg(pinternal, &arg, pnode->regoff)) return false;
		if (AMED_ARGUMENT_TYPE_IMMEDIATE == arg.type)
		{
			/* db-fixme: db gives wron datatype for memory.immoffset */
			pargument->mem.immoff.datatype = arg.datatype;
			pargument->mem.immoff.value.i64 = arg.imm.i64;
		}
		else
		{
			pargument->mem.regoff = arg.reg.value;
		}
		if (arg.shifter.type)
		{
			pargument->shifter = arg.shifter;
			pargument->printer.print_amount_as_vl = arg.printer.print_amount_as_vl;
			pargument->printer.print_shifter = arg.printer.print_shifter;
		}
	}
	int16_t size = 0;
	if (pnode->size) decode_mem_size(pinternal, (amed_db_size*)pnode->size, &size);
	int16_t esize = get_datatype_size(pnode->datatype);

	pargument->type = AMED_ARGUMENT_TYPE_MEMORY;
	pargument->size = size;
	pargument->datatype = pnode->datatype;
	pargument->number_of_elements = size && esize ? size / esize : 1;
	pargument->read = pnode->read;
	pargument->write = pnode->write;
	pargument->is_post_indexed = pnode->post_indexed;
	pargument->is_pre_indexed = pnode->pre_indexed;

	if (pargument->read) pinternal->insn->may_load = true;
	if (pargument->write) pinternal->insn->may_store = true;

	return true;
}

static amed_arm_barrier decode_arm_barrier(uint32_t value)
{
	switch (value)
	{
	default: return AMED_ARM_BARRIER_NONE;
	case 15:
		// Full system is the required shareability domain, reads and writes are the required access types, both before and after the barrier instruction. This option is referred to as the full system barrier. Encoded as CRm = 0b1111.
		return AMED_ARM_BARRIER_SY;
	case 14:
		// Full system is the required shareability domain, writes are the required access type, both before and after the barrier instruction. Encoded as CRm = 0b1110.
		return AMED_ARM_BARRIER_ST;
	case 13:
		// Full system is the required shareability domain, reads are the required access type before the barrier instruction, and reads and writes are the required access types after the barrier instruction. Encoded as CRm = 0b1101.
		return AMED_ARM_BARRIER_LD;
	case 11:
		// Inner Shareable is the required shareability domain, reads and writes are the required access types, both before and after the barrier instruction. Encoded as CRm = 0b1011.
		return AMED_ARM_BARRIER_ISH;
	case 10:
		// Inner Shareable is the required shareability domain, writes are the required access type, both before and after the barrier instruction. Encoded as CRm = 0b1010.
		return AMED_ARM_BARRIER_ISHST;
	case 9:
		// Inner Shareable is the required shareability domain, reads are the required access type before the barrier instruction, and reads and writes are the required access types after the barrier instruction. Encoded as CRm = 0b1001.
		return AMED_ARM_BARRIER_ISHLD;
	case 7:
		// Non-shareable is the required shareability domain, reads and writes are the required access, both before and after the barrier instruction. Encoded as CRm = 0b0111.
		return AMED_ARM_BARRIER_NSH;
	case 6:
		// Non-shareable is the required shareability domain, writes are the required access type, both before and after the barrier instruction. Encoded as CRm = 0b0110.
		return AMED_ARM_BARRIER_NSHST;
	case 5:
		// Non-shareable is the required shareability domain, reads are the required access type before the barrier instruction, and reads and writes are the required access types after the barrier instruction. Encoded as CRm = 0b0101.
		return AMED_ARM_BARRIER_NSHLD;
	case 3:
		// Outer Shareable is the required shareability domain, reads and writes are the required access types, both before and after the barrier instruction. Encoded as CRm = 0b0011.
		return AMED_ARM_BARRIER_OSH;
	case 2:
		// Outer Shareable is the required shareability domain, writes are the required access type, both before and after the barrier instruction. Encoded as CRm = 0b0010.
		return AMED_ARM_BARRIER_OSHST;
	case 1:
		// Outer Shareable is the required shareability domain, reads are the required access type before the barrier instruction, and reads and writes are the required access types after the barrier instruction. Encoded as CRm = 0b0001.
		return AMED_ARM_BARRIER_OSHLD;
	}
}

static amed_aarch64_prf_op decode_prf_op(uint32_t value)
{
	switch (value)
	{
	default: return AMED_AARCH64_PRF_OP_NONE;
	case 0x00: return AMED_AARCH64_PRF_OP_PLDL1KEEP;
	case 0x01: return AMED_AARCH64_PRF_OP_PLDL1STRM;
	case 0x02: return AMED_AARCH64_PRF_OP_PLDL2KEEP;
	case 0x03: return AMED_AARCH64_PRF_OP_PLDL2STRM;
	case 0x04: return AMED_AARCH64_PRF_OP_PLDL3KEEP;
	case 0x05: return AMED_AARCH64_PRF_OP_PLDL3STRM;
	case 0x08: return AMED_AARCH64_PRF_OP_PLIL1KEEP;
	case 0x09: return AMED_AARCH64_PRF_OP_PLIL1STRM;
	case 0x0a: return AMED_AARCH64_PRF_OP_PLIL2KEEP;
	case 0x0b: return AMED_AARCH64_PRF_OP_PLIL2STRM;
	case 0x0c: return AMED_AARCH64_PRF_OP_PLIL3KEEP;
	case 0x0d: return AMED_AARCH64_PRF_OP_PLIL3STRM;
	case 0x10: return AMED_AARCH64_PRF_OP_PSTL1KEEP;
	case 0x11: return AMED_AARCH64_PRF_OP_PSTL1STRM;
	case 0x12: return AMED_AARCH64_PRF_OP_PSTL2KEEP;
	case 0x13: return AMED_AARCH64_PRF_OP_PSTL2STRM;
	case 0x14: return AMED_AARCH64_PRF_OP_PSTL3KEEP;
	case 0x15: return AMED_AARCH64_PRF_OP_PSTL3STRM;
	}
}

static bool decode_arg_enum(aarch64_internal* pinternal, amed_argument* pargument,
	amed_db_any* pnode)
{
	amed_db_tv* ptv = NULL;
	uint32_t value = 0;
	uint32_t token = 0;
	bool is_representable = false;
	uint8_t type = AMED_ARGUMENT_TYPE_NONE;
	pargument->datatype = AMED_DATATYPE_U8;
	pargument->imm.i64 = 0;

	switch (pnode->type)
	{
	case AMED_AARCH64_NODE_TYPE_AT_OP: type = AMED_ARGUMENT_TYPE_AT_OP; break;
	case AMED_AARCH64_NODE_TYPE_DC_OP: type = AMED_ARGUMENT_TYPE_DC_OP; break;
	case AMED_AARCH64_NODE_TYPE_IC_OP: type = AMED_ARGUMENT_TYPE_IC_OP; break;
	case AMED_AARCH64_NODE_TYPE_TLBI_OP: type = AMED_ARGUMENT_TYPE_TLBI_OP; break;
	case AMED_AARCH64_NODE_TYPE_SYNC_OP: type = AMED_ARGUMENT_TYPE_SYNC_OP; break;
	case AMED_AARCH64_NODE_TYPE_CTX_OP:	type = AMED_ARGUMENT_TYPE_CTX_OP; break;
	case AMED_AARCH64_NODE_TYPE_PRF_OP: type = AMED_ARGUMENT_TYPE_PRF_OP; break;
	case AMED_AARCH64_NODE_TYPE_BTI_OP: type = AMED_ARGUMENT_TYPE_BTI_OP; break;
	case AMED_AARCH64_NODE_TYPE_PSTATEFIELD: type = AMED_ARGUMENT_TYPE_PSTATEFIELD; break;
	case AMED_AARCH64_NODE_TYPE_BARRIER: type = AMED_ARGUMENT_TYPE_BARRIER; break;
	case AMED_AARCH64_NODE_TYPE_INVCOND:
	case AMED_AARCH64_NODE_TYPE_COND: type = AMED_ARGUMENT_TYPE_CONDITION; break;
	case AMED_AARCH64_NODE_TYPE_CSPACE: type = AMED_ARGUMENT_TYPE_CSPACE; break;
	case AMED_AARCH64_NODE_TYPE_PATTERN: type = AMED_ARGUMENT_TYPE_PATTERN; break;
	}
	if (pnode->has_encodedin)
	{
		read_encodedin_value(pinternal->opcode, pnode->encodedin, &value);
		pargument->imm.u32 = value;
		if (pnode->table)
		{
			if (!lookup_tv(pnode->table, value, &ptv)) return false;
			is_representable = ptv->is_representable;
			value = ptv->value;
		}
		else
		{
			switch (type)
			{
			case AMED_ARGUMENT_TYPE_CSPACE:
			case AMED_ARGUMENT_TYPE_PSPACE:
			case AMED_ARGUMENT_TYPE_CONDITION:
				is_representable = value <= 0x0f;
				if (is_representable)	value++; // skip NONE_ENUM.
				break;
			case AMED_ARGUMENT_TYPE_PRF_OP:
				token = decode_prf_op(value);
				if (token)
				{
					is_representable = true;
					value = token;
				}
				break;
			case AMED_ARGUMENT_TYPE_BARRIER:
				token = decode_arm_barrier(value);
				if (token)
				{
					is_representable = true;
					value = token;
				}
				break;
			}
		}
	}
	else
	{
		is_representable = true;
		value = pnode->value;
	}
	pargument->type = type;
	pargument->token = value;
	pargument->read = true;
	pargument->is_representable = is_representable;
	return true;
}

static bool decode_arg_invcond(aarch64_internal* pinternal, amed_argument* pargument,
	amed_db_invcond* pnode)
{
	uint32_t value = 0;
	read_encodedin_value(pinternal->opcode, pnode->encodedin, &value);
	value ^= 1;
	pargument->token = value + AMED_ARM_CONDITION_EQ;
	pargument->type = AMED_ARGUMENT_TYPE_CONDITION;
	pargument->is_representable = true;
	pargument->read = true;
	return true;
}

static bool decode_arg_patternsh(aarch64_internal* pinternal, amed_argument* pargument,
	amed_db_patternsh* pnode)
{
	if (!decode_arg_enum(pinternal, pargument, (amed_db_any*)pnode->pattern)) return false;
	if (!decode_arg_shifter(pinternal, pargument, (amed_db_shifter*)pnode->shifter)) return false;
	return true;
}

static bool decode_arg_vlist(aarch64_internal* pinternal, amed_argument* pargument,
	amed_db_vlist* pnode)
{
	/*
		decode list (vlist && elist).
	*/

	if (!decode_anynymous_immreg(pinternal, pargument, pnode->base))return false;

	uint16_t count = ((amed_db_any*)pnode->count)->value16;
	uint16_t base = pargument->reg.value;
	uint16_t first = AMED_AARCH64_REGISTER_NONE;
	uint16_t last = AMED_AARCH64_REGISTER_NONE;
	const amed_db_reginfo* pinfo = &amed_aarch64_reginfo_array[base];

	/* determinate register boundary */
	switch (pinfo->kind)
	{
	default:return false;
	case AMED_AARCH64_SYMBOL_VECREG:
		first = AMED_AARCH64_REGISTER_V0;
		last = AMED_AARCH64_REGISTER_V31;
		break;
	case AMED_AARCH64_SYMBOL_SVEREG:
		first = AMED_AARCH64_REGISTER_Z0;
		last = AMED_AARCH64_REGISTER_Z31;
		break;
	}

	/* clone base info */
	pargument->list.index = pargument->reg.index;

	/* fill registers */

	for (int i = 0; i < count; i++)
	{
		pargument->list.registers[i] = base++;
		if (base == 1 + last)
		{
			base = first;
		}
	}

	pargument->type = AMED_ARGUMENT_TYPE_LIST;
	pargument->list.count = (uint8_t)count;
	return true;
}

static bool decode_arg_elist(aarch64_internal* pinternal, amed_argument* pargument,
	amed_db_elist* pnode)
{
	if (!decode_arg_vlist(pinternal, pargument, pnode)) return false;
	pargument->is_vector = false;
	return true;
}

static bool decode_arg_sysreg(aarch64_internal* pinternal, amed_argument* pargument,
	amed_db_sysreg* pnode)
{
	/*
		decode system register.
		eg: MSR (<systemreg>|S<op0>_<op1>_<Cn>_<Cm>_<op2>), <Xt>
	*/
	/*
		TODO: add support for named register.
	*/
	const opcode = pinternal->opcode;
	uint32_t o0 = opcode & (1 << 19) ? 3 : 2,
		op1 = (opcode & 0x70000) >> 16,
		CRn = (opcode & 0xF000) >> 12,
		CRm = (opcode & 0xF00) >> 8,
		op2 = (opcode & 0xE0) >> 5;
	pargument->aarch64.sysreg_encoding.op0 = o0;
	pargument->aarch64.sysreg_encoding.op1 = op1;
	pargument->aarch64.sysreg_encoding.op2 = op2;
	pargument->aarch64.sysreg_encoding.cm = AMED_ARM_CSPACE_C0 + CRm;
	pargument->aarch64.sysreg_encoding.cn = AMED_ARM_CSPACE_C0 + CRn;
	pargument->read = pnode->read;
	pargument->write = pnode->write;
	pargument->type = AMED_ARGUMENT_TYPE_SYSREG_ENCODING;
	return true;
}

static bool decode_node(aarch64_internal* pinternal, amed_argument* pargument,
	void* pnode)
{
	pargument->shifter.type = AMED_SHIFT_NONE;
	pargument->attributes = 0;
	pargument->printer.attributes = 0;
	pargument->is_representable = true;

	switch (*(uint8_t*)pnode)
	{
	case AMED_AARCH64_NODE_TYPE_AT_OP:
	case AMED_AARCH64_NODE_TYPE_DC_OP:
	case AMED_AARCH64_NODE_TYPE_IC_OP:
	case AMED_AARCH64_NODE_TYPE_TLBI_OP:
	case AMED_AARCH64_NODE_TYPE_SYNC_OP:
	case AMED_AARCH64_NODE_TYPE_CTX_OP:
	case AMED_AARCH64_NODE_TYPE_PRF_OP:
	case AMED_AARCH64_NODE_TYPE_BTI_OP:
	case AMED_AARCH64_NODE_TYPE_PSTATEFIELD:
	case AMED_AARCH64_NODE_TYPE_BARRIER:
	case AMED_AARCH64_NODE_TYPE_COND:
	case AMED_AARCH64_NODE_TYPE_CSPACE:
	case AMED_AARCH64_NODE_TYPE_PATTERN:
		return decode_arg_enum(pinternal, pargument, (amed_db_any*)pnode);

	case AMED_AARCH64_NODE_TYPE_INVCOND:
		return decode_arg_invcond(pinternal, pargument, (amed_db_cond*)pnode);

	case AMED_AARCH64_NODE_TYPE_SYSREG:
		return decode_arg_sysreg(pinternal, pargument, (amed_db_sysreg*)pnode);

	case AMED_AARCH64_NODE_TYPE_REG:
		return decode_arg_reg(pinternal, pargument, (amed_db_reg*)pnode);
	case AMED_AARCH64_NODE_TYPE_REGSH:
		return decode_arg_regsh(pinternal, pargument, (amed_db_regsh*)pnode);
	case AMED_AARCH64_NODE_TYPE_VREG:
		return decode_arg_vreg(pinternal, pargument, (amed_db_vreg*)pnode);
	case AMED_AARCH64_NODE_TYPE_EREG:
		return decode_arg_ereg(pinternal, pargument, (amed_db_ereg*)pnode);
	case AMED_AARCH64_NODE_TYPE_PREG:
		return decode_arg_preg(pinternal, pargument, (amed_db_preg*)pnode);

	case AMED_AARCH64_NODE_TYPE_VLIST:
		return decode_arg_vlist(pinternal, pargument, (amed_db_vlist*)pnode);
	case AMED_AARCH64_NODE_TYPE_ELIST:
		return decode_arg_elist(pinternal, pargument, (amed_db_elist*)pnode);

	case AMED_AARCH64_NODE_TYPE_PATTERNSH:
		return decode_arg_patternsh(pinternal, pargument, (amed_db_patternsh*)pnode);

	case AMED_AARCH64_NODE_TYPE_FPIMM:
		return decode_arg_fpimm(pinternal, pargument, (amed_db_fpimm*)pnode);
	case AMED_AARCH64_NODE_TYPE_IMM:
		return decode_arg_imm(pinternal, pargument, (amed_db_imm*)pnode);
	case AMED_AARCH64_NODE_TYPE_IMMSH:
		return decode_arg_immsh(pinternal, pargument, (amed_db_immsh*)pnode);

	case AMED_AARCH64_NODE_TYPE_LABEL:
	case AMED_AARCH64_NODE_TYPE_ADDR:
		return decode_arg_label(pinternal, pargument, (amed_db_label*)pnode);

	case AMED_AARCH64_NODE_TYPE_MEM:
		return decode_arg_mem(pinternal, pargument, (amed_db_mem*)pnode);

	case AMED_AARCH64_NODE_TYPE_SZ:

	default: return false;
	}
}

static bool decode_nodes(aarch64_internal* pinternal)
{
	int sequence = pinternal->ptemplate->arguments;
	void** ppnode = (void**)&amed_aarch64_arguments_array[sequence];
	int i = 0;

	while (*ppnode)
	{
		/* we keep decoding until there is no node. */
		amed_argument* pargument = &pinternal->insn->arguments[i++];
		bool status = decode_node(pinternal, pargument, *ppnode);
		if (!status)
		{
			return false;
		}
		ppnode++;
	}
	pinternal->insn->argument_count = i;
	pinternal->insn->arguments[i].type = AMED_ARGUMENT_TYPE_NONE;
	return true;
}

static inline bool decode_condition(aarch64_internal* pinternal)
{
	if (AMED_ARM_CONDITION_COND == pinternal->ptemplate->cond)
	{
		uint32_t cond =( 0x0f & pinternal->opcode)+ AMED_ARM_CONDITION_EQ;
		pinternal->insn->aarch64.condition = cond ;
		pinternal->insn->is_running_conditionally = cond < AMED_ARM_CONDITION_AL;
	}
	else
	{
		pinternal->insn->aarch64.condition = AMED_ARM_CONDITION_AL;
	}
	return true;
}

static bool decode_template(aarch64_internal* pinternal, const amed_db_template* ptemplate)
{
	pinternal->ptemplate = ptemplate;
	if (ptemplate->bitdiffs)
	{
		/* check bitdiffs */
		const amed_db_bitdiff* bitdiff = &amed_aarch64_bitdiffs_array[ptemplate->bitdiffs];
		if ((pinternal->opcode & bitdiff->mask) != bitdiff->opcode)
		{
			return false;
		}
	}
	decode_condition(pinternal);
	pinternal->insn->mnemonic = amed_aarch64_iform2mnem_array[pinternal->insn->iform = ptemplate->iform];
	bool ok = decode_nodes(pinternal);
	if (!ok) return false;

	pinternal->insn->page = pinternal->encoding->page;
	pinternal->insn->iclass = pinternal->encoding->iclass;
	pinternal->insn->cclass = pinternal->encoding->cclass;
	pinternal->insn->encoding = (int16_t)(pinternal->encoding - &amed_aarch64_encodings_array[0]);

	pinternal->insn->aarch64.pstate = amed_aarch64_iflags_array[pinternal->encoding->iflags];

	*(uint32_t*)&pinternal->insn->categories[0] = *(uint32_t*)&pinternal->encoding->categories[0];
	*(uint32_t*)&pinternal->insn->exceptions[0] = *(uint32_t*)&pinternal->encoding->exceptions[0];
	*(uint32_t*)&pinternal->insn->extensions[0] = *(uint32_t*)&pinternal->ptemplate->extensions[0];

	pinternal->insn->arch_variant = pinternal->ptemplate->arch_variant;

	pinternal->insn->may_branch |= AMED_CATEGORY_BRANCH == pinternal->insn->categories[1];
	pinternal->insn->is_constructive |= pinternal->has_reg && !pinternal->insn->is_destructive;

	return true;
}

static bool decode_encoding(aarch64_internal* pinternal, const amed_db_encoding* pencoding)
{
	pinternal->encoding = pencoding;
	pinternal->datasize = pencoding->datasize << 5;
	const uint32_t opcode = pinternal->opcode;
	/* check opcode */
	if ((opcode & pencoding->mask) != pencoding->opcode)
	{
		pinternal->insn->is_undefined = true;
		return false;
	}
	/* lookup template */
	const int last_template = pencoding->first_template + pencoding->template_count;
	for (int i = pencoding->first_template; i < last_template; i++)
	{
		const amed_db_template* ptemplate = &amed_aarch64_templates_array[i];
		if (ptemplate->asmonly) continue;

		if (decode_template(pinternal, ptemplate))
		{
			return true;
		}
	}
	return true;
}

static bool decode_alias(aarch64_internal* pinternal, const amed_db_encoding* pencoding)
{
	uint16_t* pindex = (uint16_t*)&amed_aarch64_aliases_array[pencoding->aliases];
	while (*pindex)
	{
		/* we visit all possible alias and we accept the first one that meets the condition. */
		const amed_db_encoding* palias = &amed_aarch64_encodings_array[*pindex];
		if (((pinternal->opcode & palias->mask) == palias->opcode)
			&& is_alias_condition_ok(pinternal, palias->aliascond))
		{
			return decode_encoding(pinternal, palias);
		}
		pindex++;
	}
	return false;
}

bool amed_aarch64_decode_insn(amed_context* pcontext, amed_insn* pinsn)
{
	if (!pcontext->length) return false;
	uint32_t opcode = *(uint32_t*)pcontext->address;
	pinsn->attributes = 0;
	aarch64_internal istruct =
	{
		.opcode = opcode,
		.insn = pinsn,
		.context = pcontext,
	};
	pinsn->length = 4;

	uint32_t encoding_index = aarch64_lookup_a64(opcode);

	const amed_db_encoding* pencoding = &amed_aarch64_encodings_array[encoding_index];

	bool ok = decode_encoding(&istruct, pencoding);
	if (ok)
	{
		if ( pcontext->decode_aliases && pencoding->has_alias && !(pinsn->is_undefined || pinsn->is_unpredictable))
		{
			if (decode_alias(&istruct, pencoding))
			{
				pinsn->is_alias = true;
			}
		}
	}
	return ok;
}