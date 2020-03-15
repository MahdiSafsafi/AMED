/*BEGIN_HEADER
*
* Copyright (C) 2020 Mahdi Safsafi.
*
* https://github.com/MahdiSafsafi/AMED
*
* See licence file 'LICENCE' for use and distribution rights.
*
*END_HEADER*/

#include <assert.h>
#include <stdbool.h>
#include <stdint.h>
#include "amed.h"
#include "amed/x86.h"

#include "sed.h"
#include "include/lookup-x86.inc"
#include "../../source/utils/datatype.h"

#define MAP_IDX_NONE 0
#define MAP_IDX_0F   (256*1)
#define MAP_IDX_0F0F (256*2)
#define MAP_IDX_0F38 (256*3)
#define MAP_IDX_0F3A (256*4)
#define MAP_IDX_XOP8 (256*5)
#define MAP_IDX_XOP9 (256*6)
#define MAP_IDX_XOPA (256*7)


#define PREFIX_F2 1
#define PREFIX_F3 2

#define ENCODING_NONE  0
#define ENCODING_VEX   1
#define ENCODING_EVEX  2
#define ENCODING_MVEX  3
#define ENCODING_XOP   4

static const uint8_t vosz2immenc[] =
{
	/* 0 */ AMED_X86_ENCODEDIN_IW,
	/* 1 */ AMED_X86_ENCODEDIN_ID,
	/* 2 */ AMED_X86_ENCODEDIN_IQ,
};

static const uint8_t zosz2immenc[] =
{
	/* 0 */ AMED_X86_ENCODEDIN_IW,
	/* 1 */ AMED_X86_ENCODEDIN_ID,
	/* 2 */ AMED_X86_ENCODEDIN_ID,
};

static const uint8_t vosz2gpr[] =
{
	/* 0 */ AMED_X86_SYMBOL_GPR16,
	/* 1 */ AMED_X86_SYMBOL_GPR32,
	/* 2 */ AMED_X86_SYMBOL_GPR64,
};

static const uint8_t yosz2gpr[] =
{
	/* 0 */ AMED_X86_SYMBOL_GPR32,
	/* 1 */ AMED_X86_SYMBOL_GPR32,
	/* 2 */ AMED_X86_SYMBOL_GPR64,
};

static const uint8_t zosz2gpr[] =
{
	/* 0 */ AMED_X86_SYMBOL_GPR16,
	/* 1 */ AMED_X86_SYMBOL_GPR32,
	/* 2 */ AMED_X86_SYMBOL_GPR32,
};

static const uint16_t r8rex[] =
{
	AMED_X86_REGISTER_AL, AMED_X86_REGISTER_CL, AMED_X86_REGISTER_DL, AMED_X86_REGISTER_BL,
	AMED_X86_REGISTER_SPL, AMED_X86_REGISTER_BPL, AMED_X86_REGISTER_SIL, AMED_X86_REGISTER_DIL,
	AMED_X86_REGISTER_R8B, AMED_X86_REGISTER_R9B, AMED_X86_REGISTER_R10B, AMED_X86_REGISTER_R11B,
	AMED_X86_REGISTER_R12B, AMED_X86_REGISTER_R13B, AMED_X86_REGISTER_R14B, AMED_X86_REGISTER_R15B,
};

static const amed_db_reg index_n = { .has_encodedin = true, .symbol = AMED_X86_SYMBOL_GPRa, .encodedin = AMED_X86_ENCODEDIN_SIB_INDEX };
static const amed_db_reg index_x = { .has_encodedin = true, .symbol = AMED_X86_SYMBOL_XMMREG, .encodedin = AMED_X86_ENCODEDIN_SIB_INDEX };
static const amed_db_reg index_y = { .has_encodedin = true, .symbol = AMED_X86_SYMBOL_YMMREG, .encodedin = AMED_X86_ENCODEDIN_SIB_INDEX };
static const amed_db_reg index_z = { .has_encodedin = true, .symbol = AMED_X86_SYMBOL_ZMMREG, .encodedin = AMED_X86_ENCODEDIN_SIB_INDEX };
static const amed_db_reg base_s = { .has_encodedin = true,.symbol = AMED_X86_SYMBOL_GPRa, .encodedin = AMED_X86_ENCODEDIN_SIB_BASE };
static const amed_db_reg base_r = { .has_encodedin = true, .symbol = AMED_X86_SYMBOL_GPRa, .encodedin = AMED_X86_ENCODEDIN_RM };

static const uint8_t ll2roundin[] =
{
	/* 0b00 */	AMED_ROUNDING_TYPE_NEAREST,
	/* 0b01 */	AMED_ROUNDING_TYPE_DOWN,
	/* 0b10 */	AMED_ROUNDING_TYPE_UP,
	/* 0b11 */	AMED_ROUNDING_TYPE_ZERO
};

/*
	x86 diagram with normalized field's value.
*/
typedef struct _x86_diagram
{
	union
	{
		/*
			keep sync with generator !
		*/
		struct
		{
			bool modreg : 1;
			uint8_t reg : 3;
			bool cr : 1;
			uint8_t rm : 3;
			uint8_t len : 2;
			bool yosz : 1;
			bool zosz : 1;
			bool f2 : 1;
			bool f3 : 1;
			bool p66 : 1;
			/*
				fb depends on enc:
					- *VEX: fb = bp.
					- NONE: fb = b.
			*/
			bool fb : 1;
			uint8_t enc : 3;
			bool e : 1;
			uint8_t asz : 2;
			bool yasz : 1;
			bool long_mode : 1;
			bool w : 1;
			uint8_t features : 7;
		};
		uint32_t hashcode;
	};
	int32_t disp;
	uint8_t aaa;
	uint8_t vvvv;
	uint8_t scale;
	uint8_t base;
	uint8_t index;
	uint8_t is4;
	uint8_t mod;
	uint8_t osz;
	uint8_t vl;
	uint8_t ll;
	uint8_t sss;
	uint8_t opcode;
	union
	{
		struct
		{
			bool has_modrm : 1;
			bool has_sib : 1;
			bool has_disp : 1;
			bool has_is4 : 1;
			bool has_rex : 1;
			bool r : 1;
			bool x : 1;
			bool b : 1;
			bool rp : 1;
			bool vp : 1;
			bool bp : 1;
			bool z : 1;
			bool f0 : 1;
		};
		uint32_t attributes;
	};
}x86_diagram;

typedef struct _x86_internal
{
	amed_context* context;
	amed_insn* insn;
	const amed_db_encoding* encoding;
	const amed_db_template* ptemplate;
	amed_argument* vreg;
	amed_argument* vmem;
	amed_argument* src_reg;
	x86_diagram diagram;
	uint8_t* address;
	uint32_t opcode;
	uint8_t pc;
	uint8_t nb;
	uint8_t  vfpc; // vector forbidden prefix count.
	uint16_t mapidx;
	uint16_t segment;
	uint8_t last_f_prefix; // f2/f3 prefix.
	uint16_t base_ip;
	uint8_t disp_datatype;

	union
	{
		struct
		{
			bool has_base : 1;
			bool has_index : 1;
			bool uses_compressed_disp : 1;
		};
		uint32_t attributes;
	};

}x86_internal;


static inline uint16_t get_real_size(int16_t vsize, uint8_t scale)
{
	return  vsize >= 0 ? vsize : amed_x86_widths_array[-vsize].widths[scale];
}

static inline uint16_t get_default_base_segment(uint16_t base)
{
	switch (base)
	{
	case AMED_X86_REGISTER_BP:
	case AMED_X86_REGISTER_BPL:
	case AMED_X86_REGISTER_EBP:
	case AMED_X86_REGISTER_RBP:
	case AMED_X86_REGISTER_SP:
	case AMED_X86_REGISTER_SPL:
	case AMED_X86_REGISTER_ESP:
	case AMED_X86_REGISTER_RSP:
		/* stack segment. */
		return AMED_X86_REGISTER_SS;

	case AMED_X86_REGISTER_IP:
	case AMED_X86_REGISTER_EIP:
	case AMED_X86_REGISTER_RIP:
		/* relative to instruction pointer => code segment. */
		return AMED_X86_REGISTER_CS;

	default:
		/* for all other case => default to data segment. */
		return AMED_X86_REGISTER_DS;
	}
}

static inline const amed_db_reg* get_node_index(uint8_t symbol)
{
	switch (symbol)
	{
	case AMED_X86_SYMBOL_VMX:
		return &index_x;
	case AMED_X86_SYMBOL_VMY:
		return  &index_y;
	case AMED_X86_SYMBOL_VMZ:
		return  &index_z;
	default:
		return  &index_n;
	}
}

static inline bool add_bytecode(x86_internal* pinternal, uint8_t* buffer,
	amed_x86_bytecode_type type, uint8_t length)
{
	if (pinternal->insn->x86.bytecode_count >= AMED_X86_MAX_BYTECODE_COUNT) return false;
	int j = pinternal->insn->x86.bytecode_count++;
	switch (length)
	{
	case 1:
		pinternal->insn->x86.bytecodes[j].byte = buffer[0];
		break;
	case 2:
		pinternal->insn->x86.bytecodes[j].word = *(uint16_t*)buffer;
		break;
	case 4:
		pinternal->insn->x86.bytecodes[j].dword = *(uint32_t*)buffer;
		break;
	case 8:
		pinternal->insn->x86.bytecodes[j].qword = *(uint64_t*)buffer;
		break;
	default:
		for (int i = 0; i < length; i++)
		{
			pinternal->insn->x86.bytecodes[j].bytes[i] = buffer[i];
		}
		break;
	}
	pinternal->insn->x86.bytecodes[j].type = type;
	pinternal->insn->x86.bytecodes[j].length = length;
	return true;
}

static inline bool peek_byte(x86_internal* pinternal, uint8_t* byte)
{
	/* peek one byte. */
	if (pinternal->pc + 1 > pinternal->nb) return false;
	*byte = pinternal->address[pinternal->pc];
	return true;
}

static inline bool peek_bytes(x86_internal* pinternal, uint8_t* buffer, uint8_t length)
{
	/* peek multiple bytes. */
	uint8_t pc = pinternal->pc;
	if (pc + length > pinternal->nb) return false;
	switch (length)
	{
	case 1:
		*buffer = pinternal->address[pc];
		break;

	case 2:
		*(uint16_t*)buffer = *(uint16_t*)&pinternal->address[pc];
		break;

	case 4:
		*(uint32_t*)buffer = *(uint32_t*)&pinternal->address[pc];
		break;

	case 8:
		*(uint64_t*)buffer = *(uint64_t*)&pinternal->address[pc];
		break;

	default:
		for (int i = 0; i < length; i++)
		{
			*buffer++ = pinternal->address[pc + i];
		}
	}
	return true;
}

static inline bool advance_byte(x86_internal* pinternal)
{
	pinternal->pc++;
	return true;
}

static inline bool set_pp_field(x86_internal* pinternal, uint8_t value)
{
	switch (value)
	{
	case 0:
		/* none */
		break;
	case 1:
		/* p66 */
		pinternal->diagram.p66 = true;
		break;
	case 2:
		/* f3 */
		pinternal->diagram.f3 = true;
		break;
	case 3:
		/* f2 */
		pinternal->diagram.f2 = true;
		break;
	}
	return true;
}

static inline bool set_ll_field(x86_internal* pinternal, uint8_t value)
{
	switch (value)
	{
	case 0:
		/* VL128 */
		pinternal->diagram.vl = 0;
		break;
	case 1:
		/* VL256 */
		pinternal->diagram.vl = 1;
		break;
	case 2:
	case 3:
		/* VL512 */
		pinternal->diagram.vl = 2;
		break;
	default: return false;
	}
	pinternal->diagram.ll = value;
	return true;
}

static inline bool set_mmmmm_field(x86_internal* pinternal, uint8_t value)
{
	switch (value)
	{
	default:
		/* unkown map (reserved) */
		return false;
	case 1:
		/* 0f */
		pinternal->mapidx = MAP_IDX_0F;
		break;
	case 2:
		/* 0f38 */
		pinternal->mapidx = MAP_IDX_0F38;
		break;
	case 3:
		/* 0f3a */
		pinternal->mapidx = MAP_IDX_0F3A;
		break;
	}
	return true;
}

static inline bool set_w_field(x86_internal* pinternal, bool value)
{
	pinternal->diagram.w = value;
	if (value)pinternal->diagram.osz = 2;
	return true;
}

static bool decode_rex(x86_internal* pinternal)
{
	if (!pinternal->diagram.long_mode)
	{
		/* not valid here. */
		return false;
	}
	amed_x86_prefix_rex rex;
	if (!peek_byte(pinternal, (uint8_t*)&rex)) return false;
	advance_byte(pinternal);
	pinternal->diagram.fb = pinternal->diagram.b = rex.b;
	pinternal->diagram.r = rex.r;
	pinternal->diagram.x = rex.x;
	pinternal->diagram.has_rex = true;
	pinternal->vfpc++;
	set_w_field(pinternal, rex.w);
	add_bytecode(pinternal, (uint8_t*)&rex, AMED_X86_BYTECODE_TYPE_REX, sizeof(rex));
	return true;
}

static bool decode_vex2(x86_internal* pinternal)
{
	amed_x86_prefix_vex2 vex2;
	if (!peek_bytes(pinternal, (uint8_t*)&vex2, sizeof(vex2))) return false;

	if (!pinternal->diagram.long_mode)
	{
		/* VEX Byte 1, bit [7] contains a bit analogous to a bit inverted REX.R.
		In protected and compatibility modes the bit
		must be set to ‘1’ otherwise the instruction is LES or LDS. */
		if (!vex2.r) return false;
	}
	set_mmmmm_field(pinternal, 1);
	set_pp_field(pinternal, vex2.pp);
	set_ll_field(pinternal, vex2.l);
	pinternal->diagram.enc = ENCODING_VEX;
	pinternal->diagram.has_rex = true;
	pinternal->diagram.r = !vex2.r;
	pinternal->diagram.vvvv = 0x0f & ~vex2.vvvv;

	pinternal->pc += sizeof(vex2);
	add_bytecode(pinternal, (uint8_t*)&vex2, AMED_X86_BYTECODE_TYPE_VEX2, sizeof(vex2));
	return true;
}

static bool decode_vex3(x86_internal* pinternal)
{
	amed_x86_prefix_vex3 vex3;
	if (!peek_bytes(pinternal, (uint8_t*)&vex3, sizeof(vex3))) return false;

	if (!pinternal->diagram.long_mode)
	{
		/* REX.R, REX.X and REX.B are inverted ! */
		if (!(vex3.r & vex3.x & vex3.b)) return false;
	}
	if (!set_mmmmm_field(pinternal, vex3.mmmmm)) return false;
	set_w_field(pinternal, vex3.w);
	set_pp_field(pinternal, vex3.pp);
	set_ll_field(pinternal, vex3.l);
	pinternal->diagram.enc = ENCODING_VEX;
	pinternal->diagram.has_rex = true;
	pinternal->diagram.r = !vex3.r;
	pinternal->diagram.x = !vex3.x;
	pinternal->diagram.b = !vex3.b;
	pinternal->diagram.w = vex3.w;
	pinternal->diagram.vvvv = 0x0f & ~vex3.vvvv;

	pinternal->pc += sizeof(vex3);
	add_bytecode(pinternal, (uint8_t*)&vex3, AMED_X86_BYTECODE_TYPE_VEX3, sizeof(vex3));
	return true;
}

static bool decode_xop(x86_internal* pinternal)
{
	amed_x86_prefix_xop xop;
	if (!peek_bytes(pinternal, (uint8_t*)&xop, sizeof(xop))) return false;

	if (!pinternal->diagram.long_mode)
	{
		/* REX.R, REX.X and REX.B are inverted ! */
		if (!(xop.r & xop.x & xop.b)) return false;
	}

	switch (xop.mmmmm)
	{
	default:
		return false;
	case 8:
		pinternal->mapidx = MAP_IDX_XOP8;
		break;
	case 9:
		pinternal->mapidx = MAP_IDX_XOP9;
		break;
	case 10:
		pinternal->mapidx = MAP_IDX_XOPA;
		break;
	}
	pinternal->diagram.enc = ENCODING_XOP;
	pinternal->diagram.has_rex = true;
	pinternal->diagram.r = !xop.r;
	pinternal->diagram.x = !xop.x;
	pinternal->diagram.b = !xop.b;
	pinternal->diagram.vvvv = 0x0f & ~xop.vvvv;
	set_w_field(pinternal, xop.w);
	set_ll_field(pinternal, xop.l);

	pinternal->pc += sizeof(xop);
	add_bytecode(pinternal, (uint8_t*)&xop, AMED_X86_BYTECODE_TYPE_VEX3, sizeof(xop));
	return true;
}

static bool decode_mevex(x86_internal* pinternal)
{
	/* decode mvex/evex prefix */
	union
	{
		amed_x86_prefix_evex evex;
		amed_x86_prefix_mvex mvex;
	} vp;

	uint8_t encoding = ENCODING_EVEX;

	if (!peek_bytes(pinternal, (uint8_t*)&vp, sizeof(vp))) return false;

	if (vp.evex.reserved0 || !vp.evex.reserved1)
	{
		if (pinternal->diagram.long_mode)
		{
			encoding = ENCODING_MVEX;
		}
		else
		{
			return false;
		}
	}

	switch (encoding)
	{
	case ENCODING_MVEX:
		if (!pinternal->diagram.long_mode)
		{
			if (!(vp.mvex.r & vp.mvex.x & vp.mvex.b)) 	return false;
		}
		switch (vp.mvex.mmmm)
		{
		case 0:
		case 1:
			pinternal->mapidx = MAP_IDX_0F;
			break;
		case 2:
			pinternal->mapidx = MAP_IDX_0F38;
			break;
		case 3:
			pinternal->mapidx = MAP_IDX_0F3A;
			break;
		default:
			/* reserved */
			return false;
		}
		set_pp_field(pinternal, vp.mvex.pp);
		set_w_field(pinternal, vp.mvex.w);
		pinternal->diagram.has_rex = true;
		pinternal->diagram.r = !vp.mvex.r;
		pinternal->diagram.x = !vp.mvex.x;
		pinternal->diagram.b = !vp.mvex.b;
		pinternal->diagram.rp = !vp.mvex.rp;
		pinternal->diagram.vp = !vp.mvex.vp;
		pinternal->diagram.e = vp.mvex.e;
		pinternal->diagram.aaa = vp.mvex.aaa;
		pinternal->diagram.vvvv = (~vp.mvex.vvvv) & 0x0f;
		pinternal->diagram.z = false;
		pinternal->diagram.sss = vp.mvex.sss;
		add_bytecode(pinternal, (uint8_t*)&vp.mvex, AMED_X86_BYTECODE_TYPE_MVEX, sizeof(vp.mvex));

		break;

	case ENCODING_EVEX:
		if (!pinternal->diagram.long_mode)
		{
			if (!(vp.evex.r & vp.evex.x & vp.evex.b)) 	return false;
		}
		if (!set_mmmmm_field(pinternal, vp.evex.mm)) return false;
		set_pp_field(pinternal, vp.evex.pp);
		set_w_field(pinternal, vp.evex.w);
		set_ll_field(pinternal, vp.evex.ll);
		pinternal->diagram.has_rex = true;
		pinternal->diagram.r = !vp.evex.r;
		pinternal->diagram.x = !vp.evex.x;
		pinternal->diagram.b = !vp.evex.b;
		pinternal->diagram.rp = !vp.evex.rp;
		pinternal->diagram.vp = !vp.evex.vp;
		pinternal->diagram.bp = pinternal->diagram.fb = vp.evex.bp;
		pinternal->diagram.aaa = vp.evex.aaa;
		pinternal->diagram.vvvv = 0x0f & ~vp.evex.vvvv;
		pinternal->diagram.z = vp.evex.z;
		add_bytecode(pinternal, (uint8_t*)&vp.evex, AMED_X86_BYTECODE_TYPE_EVEX, sizeof(vp.evex));
		break;
	}
	pinternal->pc += sizeof(vp);
	pinternal->diagram.enc = encoding;
	return true;
}

static uint8_t get_evex_disp8_n(x86_internal* pinternal)
{
	const uint8_t tuple = pinternal->ptemplate->tuple;
	static const uint8_t fv_n[2][2][3] = { { {16, 32, 64}, {4, 4, 4} }, { {16, 32, 64}, {8, 8, 8} } };
	static const uint8_t hv_n[2][3] = { {8, 16, 32}, {4, 4, 4} };
	static const uint8_t fvm_n[3] = { 16, 32, 64 };
	static const uint8_t hvm_n[3] = { 8, 16, 32 };
	static const uint8_t qvm_n[3] = { 4, 8, 16 };
	static const uint8_t ovm_n[3] = { 2, 4, 8 };
	static const uint8_t dup_n[3] = { 8, 32, 64 };

	x86_diagram* pdiagram = &pinternal->diagram;
	switch (tuple)
	{
	case AMED_X86_TUPLE_FV:
		return fv_n[pdiagram->w][pdiagram->bp][pdiagram->vl];
	case AMED_X86_TUPLE_HV:
		return hv_n[pdiagram->b][pdiagram->vl];

		/* 	--- T1S ---
			T1S8 and T1S16 are just a variant of T1S
			just to make decoding much easy.
		*/
	case AMED_X86_TUPLE_T1S8:
		return 1;
	case AMED_X86_TUPLE_T1S16:
		return 2;
	case AMED_X86_TUPLE_T1S:
		return pdiagram->w ? 8 : 4;

		/* T1F */
	case AMED_X86_TUPLE_T1F32:
		return 4;
	case AMED_X86_TUPLE_T1F64:
		return 8;

	case AMED_X86_TUPLE_T2:
		return pdiagram->w ? 16 : 8;
	case AMED_X86_TUPLE_T4:
		return pdiagram->w ? 32 : 16;
	case AMED_X86_TUPLE_T8:
		return 32;

	case AMED_X86_TUPLE_FVM:
		return  fvm_n[pdiagram->vl];
	case AMED_X86_TUPLE_HVM:
		return hvm_n[pdiagram->vl];
	case AMED_X86_TUPLE_QVM:
		return qvm_n[pdiagram->vl];
	case AMED_X86_TUPLE_OVM:
		return ovm_n[pdiagram->vl];
	case AMED_X86_TUPLE_M128:
		return 16;

	case AMED_X86_TUPLE_DUP:
		/* MOVDDUP */
		return dup_n[pdiagram->vl];
	default:return 1;
	}
}

static bool decode_disp(x86_internal* pinternal, uint8_t length)
{
	if (pinternal->pc + length > pinternal->nb) return false;
	/* raw-displacement && effective-displacement. */
	int disp = 0, edisp = 0;
	int8_t* p = (int8_t*)&pinternal->address[pinternal->pc];
	bool uses_compressed_disp = false;

	switch (length)
	{
	case 1:
		edisp = disp = *p;
		pinternal->disp_datatype = AMED_DATATYPE_S8;
		if (disp)
		{
			switch (pinternal->diagram.enc)
			{
			default:break;
			case ENCODING_EVEX:
				edisp *= get_evex_disp8_n(pinternal);
				/* fall throught */
			case ENCODING_MVEX:
				/*	at this point we don't have much information
					about the memory(broadcasting, esize,...)
					so we skip this until we see the whole picture. */
				pinternal->uses_compressed_disp = true;
				pinternal->disp_datatype = AMED_DATATYPE_S16;
				break;
			}
		}
		break;
	case 2:
		edisp = disp = *(int16_t*)p;
		pinternal->disp_datatype = AMED_DATATYPE_S16;
		break;
	case 4:
		edisp = disp = *(int*)p;
		pinternal->disp_datatype = AMED_DATATYPE_S32;
		break;
	default: return false;
	}
	pinternal->diagram.disp = edisp;
	pinternal->diagram.has_disp = true;

	pinternal->pc += length;
	add_bytecode(pinternal, (uint8_t*)&disp, AMED_X86_BYTECODE_TYPE_DISP, length);
	return true;
}

static bool decode_sib(x86_internal* pinternal)
{
	amed_x86_sib sib;
	if (!peek_byte(pinternal, (uint8_t*)&sib)) return false;
	advance_byte(pinternal);
	pinternal->diagram.index = sib.index;
	pinternal->diagram.base = sib.base;
	pinternal->diagram.scale = 1 << sib.scale;
	pinternal->diagram.has_sib = true;
	pinternal->has_index = (ENCODING_NONE != pinternal->diagram.enc) || !(pinternal->diagram.x == 0 && sib.index == 4);

	add_bytecode(pinternal, (uint8_t*)&sib, AMED_X86_BYTECODE_TYPE_SIB, sizeof(sib));
	uint8_t disp_length = 0;
	if (5 == sib.base)
	{
		switch (pinternal->diagram.mod)
		{
		case 0:
			disp_length = 4;
			pinternal->has_base = false;
			break;
		case 1:
			disp_length = 1;
			break;
		case 2:
			disp_length = 4;
			break;
		}
	}
	if (disp_length && !decode_disp(pinternal, disp_length)) return false;
	return true;
}

static bool decode_modrm(x86_internal* pinternal)
{
	static const uint16_t ip[] =
	{
		AMED_X86_REGISTER_IP,
		AMED_X86_REGISTER_EIP,
		AMED_X86_REGISTER_RIP
	};
	amed_x86_modrm modrm;
	uint8_t mod, reg, rm;
	modrm.mod = mod = pinternal->diagram.mod;
	modrm.reg = reg = pinternal->diagram.reg;
	modrm.rm = rm = pinternal->diagram.rm;
	advance_byte(pinternal);
	add_bytecode(pinternal, (uint8_t*)&modrm, AMED_X86_BYTECODE_TYPE_MODRM, sizeof(modrm));

	uint8_t disp_size = 0;
	bool has_sib = false;
	pinternal->has_base = true;
	pinternal->base_ip = AMED_X86_REGISTER_NONE;
	pinternal->disp_datatype = AMED_DATATYPE_NONE;
	pinternal->diagram.disp = 0;

	switch (mod)
	{
	case 0:
		if (4 == rm)
		{
			/* sib */
			has_sib = true;
		}
		else if (5 == rm)
		{
			/* rip */
			disp_size = 4;
			pinternal->has_base = pinternal->diagram.long_mode && pinternal->diagram.asz;
			pinternal->base_ip = pinternal->has_base ? ip[pinternal->diagram.asz] : AMED_X86_REGISTER_NONE;
		}
		break;
	case 1:
		has_sib = 4 == rm;
		disp_size = 1;
		break;
	case 2:
		has_sib = 4 == rm;
		disp_size = 4;
		break;
	}

	if (has_sib && !decode_sib(pinternal)) return false;
	if (disp_size && !decode_disp(pinternal, disp_size)) return false;
	pinternal->diagram.has_modrm = true;
	return true;
}

static uint8_t get_is4_value(x86_internal* pinternal)
{
	if (!pinternal->diagram.has_is4)
	{
		if (!peek_byte(pinternal, &pinternal->diagram.is4))
		{
			/* fixme. */
			return 0;
		}
		advance_byte(pinternal);
		add_bytecode(pinternal, (uint8_t*)&pinternal->diagram.is4, AMED_X86_BYTECODE_TYPE_IMM, 1);
		pinternal->diagram.has_is4 = true;
	}
	return pinternal->diagram.is4;
}

static uint16_t decode_node_register_value(x86_internal* pinternal, const amed_db_reg* pnode)
{
	if (!pnode->has_encodedin) return pnode->value;

	uint8_t asz = pinternal->diagram.asz;
	uint8_t osz = pinternal->diagram.osz;
	uint32_t idx = 0, symbol = pnode->symbol;
	uint32_t extension = 0, extension2 = 0;
	bool has_rex = pinternal->diagram.has_rex;

	switch (pnode->encodedin)
	{
	case AMED_X86_ENCODEDIN_OPCODE:
		idx = 0x7 & (pinternal->diagram.opcode);
		extension = (pinternal->diagram.b << 3);
		break;
	case AMED_X86_ENCODEDIN_REG:
		idx = (pinternal->diagram.reg);
		extension = (pinternal->diagram.r << 3);
		extension2 = (pinternal->diagram.rp << 4);
		break;
	case AMED_X86_ENCODEDIN_RM:
		idx = pinternal->diagram.rm;
		extension = (pinternal->diagram.b << 3);
		extension2 = (pinternal->diagram.x << 4);
		break;
	case AMED_X86_ENCODEDIN_SIB_BASE:
		idx = pinternal->diagram.base;
		extension = (pinternal->diagram.b << 3);
		break;
	case AMED_X86_ENCODEDIN_SIB_INDEX:
		idx = pinternal->diagram.index;
		extension = (pinternal->diagram.x << 3);
		extension2 = (pinternal->diagram.vp << 4);
		break;
	case AMED_X86_ENCODEDIN_AAA:
		idx = pinternal->diagram.aaa;
		break;
	case AMED_X86_ENCODEDIN_VVVV:
		idx = pinternal->diagram.vvvv;
		extension = (pinternal->diagram.vp << 4);
		break;
	case AMED_X86_ENCODEDIN_IS4:
		idx = get_is4_value(pinternal) >> 4;
		break;
	}

	if (!pinternal->diagram.long_mode)
	{
		/* can't have an extension. */
		extension = extension2 = 0;
	}

reenter:
	switch (symbol)
	{
	case AMED_X86_SYMBOL_NONE:
		return pnode->value;

	case AMED_X86_SYMBOL_AXa:
	case AMED_X86_SYMBOL_CXa:
	case AMED_X86_SYMBOL_DXa:
	case AMED_X86_SYMBOL_BXa:
	case AMED_X86_SYMBOL_SPa:
	case AMED_X86_SYMBOL_BPa:
	case AMED_X86_SYMBOL_SIa:
	case AMED_X86_SYMBOL_DIa:
	case AMED_X86_SYMBOL_IPa:
		/* scaled by asz.
		   we use symbol as a base to determinate register index. */
		idx = symbol - AMED_X86_SYMBOL_AXa;
		symbol = vosz2gpr[asz];
		goto reenter;

	case AMED_X86_SYMBOL_AXv:
	case AMED_X86_SYMBOL_CXv:
	case AMED_X86_SYMBOL_DXv:
	case AMED_X86_SYMBOL_BXv:
	case AMED_X86_SYMBOL_SPv:
	case AMED_X86_SYMBOL_BPv:
	case AMED_X86_SYMBOL_SIv:
	case AMED_X86_SYMBOL_DIv:
	case AMED_X86_SYMBOL_IPv:
		/* scaled by osz. */
		idx = symbol - AMED_X86_SYMBOL_AXv;
		symbol = vosz2gpr[osz];
		goto reenter;

	case AMED_X86_SYMBOL_GPRa:
		symbol = vosz2gpr[asz];
		goto reenter;

	case AMED_X86_SYMBOL_GPRv:
		symbol = vosz2gpr[osz];
		goto reenter;

	case AMED_X86_SYMBOL_GPRy:
		symbol = yosz2gpr[osz];
		goto reenter;

	case AMED_X86_SYMBOL_GPRz:
		symbol = zosz2gpr[osz];
		goto reenter;

	case AMED_X86_SYMBOL_GPR8:
		return has_rex ? r8rex[idx | extension] : AMED_X86_REGISTER_AL + idx;

	case AMED_X86_SYMBOL_GPR16:
		return AMED_X86_REGISTER_AX + (idx | extension);

	case AMED_X86_SYMBOL_GPR32:
		return AMED_X86_REGISTER_EAX + (idx | extension);

	case AMED_X86_SYMBOL_GPR64:
		return AMED_X86_REGISTER_RAX + (idx | extension);

	case AMED_X86_SYMBOL_SEGREG:
		/* check if its not reserved encoding. */
		if (idx > 5) return AMED_X86_REGISTER_NONE;
		return AMED_X86_REGISTER_ES + idx;

	case AMED_X86_SYMBOL_FPREG:
		return AMED_X86_REGISTER_ST0 + idx;

	case AMED_X86_SYMBOL_MMXREG:
		return AMED_X86_REGISTER_MM0 + idx;

	case AMED_X86_SYMBOL_DREG:
		return AMED_X86_REGISTER_DR0 + (idx | extension);

	case AMED_X86_SYMBOL_CREG:
		return AMED_X86_REGISTER_CR0 + (idx | extension);

	case AMED_X86_SYMBOL_MASKREG:
		return AMED_X86_REGISTER_K0 + idx;

	case AMED_X86_SYMBOL_XMMREG:
		return AMED_X86_REGISTER_XMM0 + (idx | extension | extension2);

	case AMED_X86_SYMBOL_YMMREG:
		return AMED_X86_REGISTER_YMM0 + (idx | extension | extension2);

	case AMED_X86_SYMBOL_ZMMREG:
		return AMED_X86_REGISTER_ZMM0 + (idx | extension | extension2);

	case AMED_X86_SYMBOL_BNDREG:
		return AMED_X86_REGISTER_BND0 + idx;
	}
	return true;
}

static bool decode_arg_reg(x86_internal* pinternal,
	amed_argument* pargument, amed_db_reg* pnode)
{
	pargument->type = AMED_ARGUMENT_TYPE_REGISTER;
	pargument->reg.value = decode_node_register_value(pinternal, pnode);
	pargument->size = amed_x86_reginfo_array[pargument->reg.value].size;
	pargument->datatype = get_normalized_datatype(pargument->datatype, pargument->size);
	pargument->number_of_elements = 1;

	pargument->is_suppressed = pnode->suppressed;
	pargument->read = pnode->read;
	pargument->write = pnode->write;
	pargument->conditional_reading = pnode->conditional_reading;
	pargument->conditional_writing = pnode->conditional_writing;
	if (pnode->read) pinternal->src_reg = pargument;
	return true;
}

/*
	decode implied broadcasting.
*/
static inline bool decode_node_sbcst(x86_internal* pinternal,
	amed_argument* pargument, amed_db_sbcst* pnode)
{
	amed_argument* vmem = pinternal->vmem;
	if (!vmem)
	{
		return true;
	}
	vmem->printer.print_broadcasting = false;
	vmem->mem.broadcasting.from = pnode->from;
	vmem->mem.broadcasting.to = pnode->to;
	return true;
}

static inline bool decode_node_bcst(x86_internal* pinternal,
	amed_argument* pargument, amed_db_bcst* pnode)
{
	amed_argument* vreg = pinternal->vreg;
	amed_argument* vmem = pinternal->vmem;
	if (!vmem)
	{
		/* db-error */
		return false;
	}

	/* optional broadcasting. */
	if (pinternal->diagram.bp)
	{
		/* enabled */
		vmem->size = get_datatype_size(vmem->datatype);
		vmem->printer.print_broadcasting = true;
		vmem->mem.broadcasting.to = vmem->number_of_elements;
		vmem->mem.broadcasting.from = vmem->number_of_elements = 1;
	}

	return true;
}

static bool decode_node_swz_reg(x86_internal* pinternal,
	amed_argument* pargument, amed_db_swz* pnode)
{
#define SELECTORS(a,b,c,d) ( (a) | (b << 8 ) | (c << 16) | (d << 24) )
#define a 0
#define b 1
#define c 2
#define d 3
	static const uint32_t table[] =
	{
		SELECTORS(a, b, c, d),
		SELECTORS(b, a, d, c),
		SELECTORS(c, d, a, b),
		SELECTORS(b, c, a, d),
		SELECTORS(a, a, a, a),
		SELECTORS(b, b, b, b),
		SELECTORS(c, c, c, c),
		SELECTORS(d, d, d, d),
	};
	amed_argument* vreg = pinternal->vreg;
	if (!vreg)
	{
		/* dberror*/
		return true;
	}
	vreg->reg.index = table[pinternal->diagram.sss];
	vreg->has_index = true;
	/* useless to print !*/
	vreg->printer.print_index = pinternal->diagram.sss != 0;
	return true;

#undef SELECTORS
#undef a 
#undef b 
#undef c 
#undef d
}

static bool decode_node_swz_mem(x86_internal* pinternal,
	amed_argument* pargument, amed_db_swz* pnode)
{
	assert(pnode->table);
	amed_argument* vmem = pinternal->vmem;
	amed_db_swizzle_tv* ptv = (amed_db_swizzle_tv*)pnode->table;
	if (!vmem)
	{
		return true;
	}

	ptv += pinternal->diagram.sss;
	if (ptv->reserved)
	{
		/* reserved value */
		pinternal->insn->is_undefined = true;
		return true;
	}
	else
	{
		vmem->datatype = ptv->mdt;
		vmem->mem.vdatatype = ptv->converting ? ptv->vdt : AMED_DATATYPE_NONE;
		int16_t esize = get_datatype_size(vmem->datatype);
		int16_t size = vmem->size ? vmem->size : esize * ptv->nelem;
		vmem->size = size;
		if (!esize)
		{
			return false;
		}
		vmem->number_of_elements = size / esize;
		if (pinternal->uses_compressed_disp)
		{
			/* compressed displacement */
			int16_t disp8n = pinternal->ptemplate->egran ? esize : size;
			disp8n /= 8;
			vmem->mem.immoff.datatype = AMED_DATATYPE_S16;
			vmem->mem.immoff.value.s64 *= disp8n;
		}
		if (ptv->broadcasting)
		{
			int16_t vesize = get_datatype_size(ptv->vdt);
			if (!vesize)
			{
				return false;
			}
			vmem->printer.print_broadcasting = true;
			vmem->mem.broadcasting.from = vmem->number_of_elements;
			vmem->mem.broadcasting.to = 512 / vesize;
		}
		else if (ptv->converting)
		{
			if (ptv->vdt == ptv->mdt)
			{
				/* error: invalid combinaison. */
			}
			else
			{
				vmem->mem.vdatatype = ptv->vdt;
			}
		}
	}
	return true;
}

static inline bool decode_node_swz(x86_internal* pinternal,
	amed_argument* pargument, amed_db_swz* pnode)
{
	switch (pnode->swizzle)
	{
	case AMED_X86_SWIZZLE_R_I32:
	case AMED_X86_SWIZZLE_R_I64:
		return decode_node_swz_reg(pinternal, pargument, pnode);
	default:
		return decode_node_swz_mem(pinternal, pargument, pnode);
	}
}

static bool decode_arg_mem(x86_internal* pinternal,
	amed_argument* pargument, amed_db_mem* pnode)
{
	static const uint16_t asztable[3] = { 16,32,64 };
	/* default value: */
	pargument->mem.vdatatype = AMED_DATATYPE_NONE;
	pargument->mem.broadcasting.from = pargument->mem.broadcasting.to = 0;
	pargument->mem.address_size = asztable[pinternal->diagram.asz];
	if (!pnode->has_encodedin)
	{
		/* implicit memory. */
		pargument->mem.segment = pnode->seg ? decode_node_register_value(pinternal, (amed_db_reg*)pnode->seg) : AMED_X86_REGISTER_NONE;
		pargument->mem.base = pnode->base ? decode_node_register_value(pinternal, (amed_db_reg*)pnode->base) : AMED_X86_REGISTER_NONE;
		pargument->mem.regoff = AMED_X86_REGISTER_NONE;
		pargument->mem.immoff.datatype = AMED_DATATYPE_NONE;
		pargument->mem.immoff.value.u64 = 0;
	}
	else
	{
		pargument->mem.segment = AMED_X86_REGISTER_NONE;
		if (pinternal->diagram.has_sib)
		{
			pargument->mem.base = pinternal->has_base ?
				decode_node_register_value(pinternal, (amed_db_reg*)&base_s) : AMED_X86_REGISTER_NONE;
			pargument->mem.regoff = pinternal->has_index ?
				decode_node_register_value(pinternal, get_node_index(pnode->symbol)) : AMED_X86_REGISTER_NONE;
			pargument->shifter.type = AMED_SHIFT_MUL;
			pargument->shifter.amount = pinternal->diagram.scale;
			pargument->printer.print_shifter = pinternal->diagram.scale > 1;
		}
		else
		{
			pargument->mem.base = pinternal->has_base ?
				pinternal->base_ip ? pinternal->base_ip :
				decode_node_register_value(pinternal, (amed_db_reg*)&base_r) : AMED_X86_REGISTER_NONE;
			pargument->mem.regoff = AMED_X86_REGISTER_NONE;
		}

		pargument->mem.immoff.datatype = pinternal->disp_datatype;
		pargument->mem.immoff.value.s64 = pinternal->diagram.disp;
	}
	uint16_t defaut_seg = get_default_base_segment(pargument->mem.base);
	if (!pargument->mem.segment)
		pargument->mem.segment = pinternal->segment ? pinternal->segment : defaut_seg;

	/* we print memory segment only if its not the defaut. */
	pargument->printer.print_segment = defaut_seg != pargument->mem.segment;
	pargument->printer.print_size = true;

	pargument->type = AMED_ARGUMENT_TYPE_MEMORY;
	pargument->size = get_real_size(pnode->size, pinternal->diagram.osz);

	pargument->mem.alignement = pinternal->encoding->requires_alignment ? pargument->size : 0;
	pargument->datatype = get_normalized_datatype(pnode->datatype, pargument->size);
	uint16_t dtsz = get_datatype_size(pargument->datatype);
	pargument->number_of_elements = (pargument->size && dtsz) ? pargument->size / dtsz : 0;

	pargument->is_suppressed = pnode->suppressed;
	pargument->read = pnode->read;
	pargument->write = pnode->write;
	pargument->conditional_reading = pnode->conditional_reading;
	pargument->conditional_writing = pnode->conditional_writing;

	pinternal->insn->may_load |= pnode->read | pnode->conditional_reading;
	pinternal->insn->may_store |= pnode->write | pnode->conditional_writing;

	pinternal->vmem = pargument;
	return true;
}

static bool decode_arg_address(x86_internal* pinternal,
	amed_argument* pargument, amed_db_mem* pnode)
{
	/* e.g: lea eax, [eax + edx] */
	if (!decode_arg_mem(pinternal, pargument, pnode)) return false;
	pargument->printer.print_size = false;
	pargument->size = 0;
	pargument->number_of_elements = 0;
	pargument->datatype = AMED_DATATYPE_NONE;
	pargument->type = AMED_ARGUMENT_TYPE_ADDRESS;
	return true;
}

static bool decode_arg_mib(x86_internal* pinternal,
	amed_argument* pargument, amed_db_mem* pnode)
{
	/* e.g: bndmk bnd0, [rax + 15] */
	if (!decode_arg_mem(pinternal, pargument, pnode)) return false;
	pargument->printer.print_size = false;
	pargument->size = 0;
	pargument->number_of_elements = 0;
	pargument->datatype = AMED_DATATYPE_NONE;
	pargument->type = AMED_ARGUMENT_TYPE_ADDRESS;
	return true;
}

static bool decode_arg_imm(x86_internal* pinternal, amed_argument* pargument, amed_db_imm* pnode)
{
	uint16_t encodedin = pnode->encodedin;
	uint16_t size = pargument->size = get_real_size(pnode->size, pinternal->diagram.osz);
	pargument->type = AMED_ARGUMENT_TYPE_IMMEDIATE;
	pargument->datatype = get_normalized_datatype(pnode->datatype, pargument->size);
	pargument->imm.i64 = 0;
	bool is_signed = false;
	uint8_t nbytes = size / 8;
	if (!pnode->has_encodedin)
	{
		pargument->imm.u16 = pnode->value;
	}
	else
	{
		is_signed = is_datatype_signed(pargument->datatype);
		switch (encodedin)
		{
		case AMED_X86_ENCODEDIN_IS4:
			/* ------ special case ------
			   is4 is shared between reg/imm. */
			pargument->imm.i8 = 0x0f & get_is4_value(pinternal);
			break;
		default:
			if (!peek_bytes(pinternal, (uint8_t*)&pargument->imm.i64, nbytes))return false;
			pinternal->pc += nbytes;
			add_bytecode(pinternal, (uint8_t*)&pargument->imm.i64, AMED_X86_BYTECODE_TYPE_IMM, nbytes);
			break;
		}
	}
	/* sign-extend
	 so we let lazy developpers use any kind of datatype. */
	if (is_signed && pargument->imm.i64 & (1LL << (size - 1)))
		pargument->imm.i64 |= ((uint64_t)-1LL) << (size - 1);

	return true;
}


static bool decode_arg_imm_shift(x86_internal* pinternal, amed_argument* pargument, amed_db_imm* pnode)
{
	if (!decode_arg_imm(pinternal, pargument, pnode))return false;
	if (!pinternal->insn->is_ugly && pinternal->src_reg)
	{
		uint16_t esize = get_datatype_size(pinternal->src_reg->datatype);
		uint16_t shift = pargument->imm.u16;

		if (AMED_X86_SYMBOL_SHL == pnode->symbol)
		{
			/* shift left */
			pinternal->insn->is_ugly = !(pargument->imm.u16 >= 0 && pargument->imm.u16 <= esize - 1);
		}
		else if (AMED_X86_SYMBOL_SHR == pnode->symbol)
		{
			/* shift right */
			pinternal->insn->is_ugly = !(pargument->imm.u16 >= 1 && pargument->imm.u16 <= esize);
		}
	}
	return true;
}

static bool decode_arg_imm_rotate(x86_internal* pinternal, amed_argument* pargument, amed_db_imm* pnode)
{
	if (!decode_arg_imm(pinternal, pargument, pnode))return false;
	if (!pinternal->insn->is_ugly && pinternal->src_reg)
	{
		uint16_t esize = get_datatype_size(pinternal->src_reg->datatype);
		uint16_t shift = pargument->imm.u16;
		pinternal->insn->is_ugly = !(pargument->imm.u16 >= 0 && pargument->imm.u16 <= esize - 1);
	}
	return true;
}

static inline bool decode_node_sae(x86_internal* pinternal, amed_argument* pargument, amed_db_sae* pnode)
{
	/* suppress all exceptions. */
	pargument->type = AMED_ARGUMENT_TYPE_SAE;
	pargument->token = pinternal->insn->is_suppressing_all_exceptions = pinternal->diagram.bp;
	pargument->is_representable = true;
	pargument->is_suppressed = !pinternal->diagram.bp;
	return true;
}

static inline bool decode_node_evh(x86_internal* pinternal,
	amed_argument* pargument, amed_db_evh* pnode)
{
	pargument->type = AMED_ARGUMENT_TYPE_EVH;
	pargument->token = pinternal->diagram.e;
	pargument->is_suppressed = !pinternal->diagram.e;
	pargument->is_representable = true;
	return true;
}

static bool decode_node_rc(x86_internal* pinternal,
	amed_argument* pargument, amed_db_rc* pnode)
{
	amed_rounding_type rounding = AMED_ROUNDING_TYPE_NONE;
	bool sae = false;
	pargument->imm.i64 = 0;
	switch (pnode->encodedin)
	{
	case AMED_X86_ENCODEDIN_VPREFIX:
		if (ENCODING_EVEX == pinternal->diagram.enc)
		{
			if (pinternal->diagram.bp)
			{
				rounding = ll2roundin[pinternal->diagram.ll];
				pargument->imm.u8 = pinternal->diagram.ll;
				sae = true;
			}
			else
			{
				pargument->is_suppressed = true;
			}
		}
		else if (ENCODING_MVEX == pinternal->diagram.enc)
		{
			pargument->imm.u8 = pinternal->diagram.sss;
			rounding = ll2roundin[3 & pinternal->diagram.sss];
			sae = 4 & pinternal->diagram.sss ? true : false;
		}
		else
		{
			/* why we are here ? */
		}
	}

	pargument->type = AMED_ARGUMENT_TYPE_ROUNDING;
	pargument->datatype = AMED_DATATYPE_U8;
	pargument->token = rounding;
	pargument->is_representable = rounding;
	pinternal->insn->is_suppressing_all_exceptions = sae;
	return true;
}

static bool decode_arg_preg(x86_internal* pinternal,
	amed_argument* pargument, amed_db_preg* pnode)
{
	if (!decode_arg_reg(pinternal, pargument, pnode))return false;
	if (AMED_X86_REGISTER_K0 == pargument->reg.value)
	{
		/* can't use zeroing/merging */
		pargument->is_suppressed = true;
	}
	else
	{
		if (pnode->zeroing && pinternal->diagram.z)
		{
			pargument->zeroing = true;
		}
		else
		{
			pargument->merging = true;
		}
		pinternal->insn->is_predicated = true;
	}
	return true;
}

static bool decode_arg_vreg(x86_internal* pinternal,
	amed_argument* pargument, amed_db_vreg* pnode)
{
	if (!decode_arg_reg(pinternal, pargument, pnode))return false;
	uint16_t dtsz = get_datatype_size(pargument->datatype);
	uint16_t size = pargument->size;
	pargument->number_of_elements = size && dtsz ? size / dtsz : 1;
	pinternal->vreg = pargument;
	pinternal->insn->is_vector = true;
	return true;
}

static bool decode_arg_cc(x86_internal* pinternal, amed_argument* pargument, amed_db_cc* pnode)
{
	if (!decode_arg_imm(pinternal, pargument, (amed_db_imm*)pnode)) return false;
	if (pargument->imm.u8 <= 0x1f)
	{
		pargument->token = pargument->imm.u8 + AMED_X86_COMPARISON_PREDICATE_EQ_OQ;
	}
	else
	{
		pargument->is_representable = false;
	}
	pargument->type = AMED_ARGUMENT_TYPE_CONDITION;
	return true;
}

static inline bool decode_arg_rel(x86_internal* pinternal, amed_argument* pargument, amed_db_imm* pnode)
{
	if (!decode_arg_imm(pinternal, pargument, pnode)) return false;
	pargument->type = AMED_ARGUMENT_TYPE_LABEL;
	return true;
}

static bool decode_arg_moffs(x86_internal* pinternal, amed_argument* pargument, amed_db_imm* pnode)
{
	/* e.g: mov eax, dword [0x00abcdef] */
	int64_t offset = 0;
	uint8_t offset_dt = AMED_DATATYPE_NONE;
	uint16_t size = get_real_size(pnode->size, pinternal->diagram.osz);
	uint8_t dt = pnode->datatype ? pnode->datatype : AMED_DATATYPE_SX;
	dt = get_normalized_datatype(dt, size);
	uint16_t adsize = 0;
	uint8_t nbytes = 0;
	switch (pinternal->diagram.asz)
	{
	case 0:
		/* 16-bit */
		if (pinternal->pc + 2 > pinternal->nb)return false;
		offset = *(int16_t*)&pinternal->address[pinternal->pc];
		offset_dt = AMED_DATATYPE_S16;
		adsize = 16;
		nbytes = 2;
		break;
	case 1:
		/* 32-bit */
		if (pinternal->pc + 4 > pinternal->nb)return false;
		offset = *(int32_t*)&pinternal->address[pinternal->pc];
		offset_dt = AMED_DATATYPE_S32;
		adsize = 32;
		nbytes = 4;
		break;
	case 2:
		/* 64-bit */
		if (pinternal->pc + 8 > pinternal->nb)return false;
		offset = *(int64_t*)&pinternal->address[pinternal->pc];
		offset_dt = AMED_DATATYPE_S64;
		adsize = 64;
		nbytes = 8;
		break;
	default: return false;
	}

	add_bytecode(pinternal, (uint8_t*)&offset, AMED_X86_BYTECODE_TYPE_DISP, nbytes);
	pinternal->pc += nbytes;

	pargument->type = AMED_ARGUMENT_TYPE_MEMORY;
	pargument->size = size;
	pargument->number_of_elements = 1;
	pargument->datatype = dt;
	pargument->mem.immoff.datatype = offset_dt;
	pargument->mem.immoff.value.s64 = offset;
	pargument->mem.address_size = adsize;
	pargument->mem.regoff = AMED_X86_REGISTER_NONE;
	pargument->mem.broadcasting.from = pargument->mem.broadcasting.to = 0;
	pargument->mem.alignement = 0;
	pargument->mem.segment = pinternal->segment ? pinternal->segment : AMED_X86_REGISTER_DS;
	pargument->read = pnode->read;
	pargument->write = pnode->write;
	pargument->printer.print_size = pargument->printer.print_segment = true;

	pinternal->insn->may_load |= pnode->read;
	pinternal->insn->may_store |= pnode->write;
	return true;
}

static bool decode_arg_ptr(x86_internal* pinternal, amed_argument* pargument, amed_db_imm* pnode)
{
	/* e.g: jmp seg:offset */
	int16_t seg = 0;
	int32_t offset = 0;
	uint8_t nbytes = 0;
	if (pinternal->pc + 2 > pinternal->nb)return false;
	seg = *(int16_t*)&pinternal->address[pinternal->pc];
	add_bytecode(pinternal, (uint8_t*)&seg, AMED_X86_BYTECODE_TYPE_ABS_SEG, 2);
	pinternal->pc += 2;

	switch (pinternal->diagram.osz)
	{
	case 0:
		/* 16-bit */
		if (pinternal->pc + 2 > pinternal->nb)return false;
		offset = *(int16_t*)&pinternal->address[pinternal->pc];
		nbytes = 2;
		pargument->x86.ptr.offset.datatype = AMED_DATATYPE_S16;
		break;
	case 1:
		/* 32-bit */
		if (pinternal->pc + 4 > pinternal->nb)return false;
		offset = *(int32_t*)&pinternal->address[pinternal->pc];
		nbytes = 4;
		pargument->x86.ptr.offset.datatype = AMED_DATATYPE_S32;
		break;
	default: return false;
	}
	add_bytecode(pinternal, (uint8_t*)&offset, AMED_X86_BYTECODE_TYPE_DISP, nbytes);
	pinternal->pc += nbytes;
	pargument->x86.ptr.offset.value.s64 = offset;
	pargument->x86.ptr.segment = seg;
	pargument->type = AMED_ARGUMENT_TYPE_PTR;
	return true;
}

static bool decode_node(x86_internal* pinternal, amed_argument* pargument, void* pnode)
{
	pargument->type = AMED_ARGUMENT_TYPE_NONE;
	pargument->attributes = 0;
	pargument->is_representable = true;
	pargument->printer.attributes = 0;

	uint8_t nttype = *(uint8_t*)pnode;
	switch (nttype)
	{
	case AMED_X86_NODE_TYPE_REG:
		return decode_arg_reg(pinternal, pargument, (amed_db_reg*)pnode);
	case AMED_X86_NODE_TYPE_VREG:
		return decode_arg_vreg(pinternal, pargument, (amed_db_reg*)pnode);
	case AMED_X86_NODE_TYPE_PREG:
		return decode_arg_preg(pinternal, pargument, (amed_db_reg*)pnode);

	case AMED_X86_NODE_TYPE_MEM:
		return decode_arg_mem(pinternal, pargument, (amed_db_mem*)pnode);

	case AMED_X86_NODE_TYPE_AGEN:
		return decode_arg_address(pinternal, pargument, (amed_db_mem*)pnode);

	case AMED_X86_NODE_TYPE_MIB:
		return decode_arg_mib(pinternal, pargument, (amed_db_mem*)pnode);

	case AMED_X86_NODE_TYPE_IMM:
		return decode_arg_imm(pinternal, pargument, (amed_db_imm*)pnode);

	case AMED_X86_NODE_TYPE_REL:
		return decode_arg_rel(pinternal, pargument, (amed_db_imm*)pnode);

	case AMED_X86_NODE_TYPE_MOFFS:
		return decode_arg_moffs(pinternal, pargument, (amed_db_imm*)pnode);

	case AMED_X86_NODE_TYPE_PTR:
		return decode_arg_ptr(pinternal, pargument, (amed_db_imm*)pnode);

	case AMED_X86_NODE_TYPE_SHIFT:
		return decode_arg_imm_shift(pinternal, pargument, (amed_db_imm*)pnode);
	case AMED_X86_NODE_TYPE_ROTATE:
		return decode_arg_imm_rotate(pinternal, pargument, (amed_db_imm*)pnode);

	case AMED_X86_NODE_TYPE_RNDC:
	case AMED_X86_NODE_TYPE_ORDER:
	case AMED_X86_NODE_TYPE_FEXCPC:
	case AMED_X86_NODE_TYPE_FPCT:
	case AMED_X86_NODE_TYPE_SIGNC:
	case AMED_X86_NODE_TYPE_CTL:
		return decode_arg_imm(pinternal, pargument, (amed_db_imm*)pnode);

	case AMED_X86_NODE_TYPE_CC:
		return decode_arg_cc(pinternal, pargument, (amed_db_cc*)pnode);

	case AMED_X86_NODE_TYPE_SAE:
		return decode_node_sae(pinternal, pargument, (amed_db_sae*)pnode);
	case AMED_X86_NODE_TYPE_EVH:
		return decode_node_evh(pinternal, pargument, (amed_db_evh*)pnode);
	case AMED_X86_NODE_TYPE_RC:
		return decode_node_rc(pinternal, pargument, (amed_db_rc*)pnode);
	case AMED_X86_NODE_TYPE_BCST:
		return decode_node_bcst(pinternal, pargument, (amed_db_bcst*)pnode);
	case AMED_X86_NODE_TYPE_SBCST:
		return decode_node_sbcst(pinternal, pargument, (amed_db_sbcst*)pnode);
	case AMED_X86_NODE_TYPE_SWZ:
		return decode_node_swz(pinternal, pargument, (amed_db_swz*)pnode);
	}
	return true;
}

static bool decode_nodes(x86_internal* pinternal)
{
	uint16_t sequence = pinternal->ptemplate->arguments;
	void** ppnode = (void**)&amed_x86_arguments_array[sequence];
	int8_t i = 0;
	while (*ppnode)
	{
		amed_argument* pargument = &pinternal->insn->arguments[i];
		if (!decode_node(pinternal, pargument, *ppnode)) return false;
		if (pargument->type)i++;
		ppnode++;
	}
	pinternal->insn->argument_count = i;
	return true;
}

static bool decode_template(x86_internal* pinternal, const amed_db_template* ptemplate)
{
	const amed_db_encoding* pencoding = pinternal->encoding;
	pinternal->ptemplate = ptemplate;
	pinternal->insn->mnemonic = amed_x86_iform2mnem_array[pinternal->insn->iform = ptemplate->iform];
	pinternal->insn->is_atomic = ptemplate->lock && pinternal->diagram.f0;
	pinternal->insn->x86.prefix_functionality = AMED_X86_PREFIX_FUNCTIONALITY_NONE;
	switch (pinternal->last_f_prefix)
	{
	case 0:
	default:
		break;
	case PREFIX_F2:
		if (ptemplate->bound)
		{
			pinternal->insn->x86.prefix_functionality = AMED_X86_PREFIX_FUNCTIONALITY_BND;
		}
		else if (ptemplate->xacquire)
		{
			pinternal->insn->is_acquiring = true;
			pinternal->insn->x86.prefix_functionality = AMED_X86_PREFIX_FUNCTIONALITY_XACQUIRE;
		}
		else if (ptemplate->repnz)
		{
			pinternal->insn->x86.prefix_functionality = AMED_X86_PREFIX_FUNCTIONALITY_REPNZ;
		}
		break;
	case PREFIX_F3:
		if (ptemplate->xrelease)
		{
			pinternal->insn->is_releasing = true;
			pinternal->insn->x86.prefix_functionality = AMED_X86_PREFIX_FUNCTIONALITY_XRELEASE;
		}
		else if (ptemplate->repz)
		{
			pinternal->insn->x86.prefix_functionality = AMED_X86_PREFIX_FUNCTIONALITY_REPZ;
		}
		else if (ptemplate->rep)
		{
			pinternal->insn->x86.prefix_functionality = AMED_X86_PREFIX_FUNCTIONALITY_REP;
		}
		break;
	}

	if (!decode_nodes(pinternal)) return false;

	pinternal->insn->page = pinternal->encoding->page;
	pinternal->insn->encoding = (int16_t)(pinternal->encoding - &amed_x86_encodings_array[0]);
	pinternal->insn->arch_variant = pinternal->encoding->isa;

	pinternal->insn->x86.iflags = amed_x86_iflags_array[pinternal->encoding->iflags];

	*(uint32_t*)&pinternal->insn->categories[0] = *(uint32_t*)&pinternal->encoding->categories[0];
	*(uint32_t*)&pinternal->insn->exceptions[0] = *(uint32_t*)&pinternal->encoding->exceptions[0];
	pinternal->insn->extensions[0] = pinternal->encoding->extensions[0];
	pinternal->insn->extensions[1] = AMED_X86_EXTENSION_NONE;
	pinternal->insn->may_branch |= AMED_CATEGORY_BRANCH == pinternal->insn->categories[1];
	pinternal->insn->is_constructive |= pinternal->diagram.has_modrm && !pinternal->insn->is_destructive;
	if (!pinternal->insn->is_unpredictable)
	{
		const amed_db_bitdiff* pdiff = &amed_x86_bitdiffs_array[pinternal->ptemplate->bitdiffs];
		pinternal->insn->is_unpredictable = (pinternal->diagram.hashcode & pdiff->mask & ~AMED_X86_FEATURE_MASK) != pdiff->opcode;
	}
	return true;
}

static bool decode_map(x86_internal* pinternal)
{
	pinternal->mapidx = MAP_IDX_0F;
	advance_byte(pinternal); // skip 0x0f.
	uint8_t op;
	uint16_t buffer;
	if (peek_byte(pinternal, (uint8_t*)&op))
	{
		switch (op)
		{
		case 0x0f:
			/* 0f0f */
			pinternal->mapidx = MAP_IDX_0F0F;
			advance_byte(pinternal);
			buffer = 0x0f0f;
			add_bytecode(pinternal, (uint8_t*)&buffer, AMED_X86_BYTECODE_TYPE_MAP, 2);
			return true;
		case 0x38:
			/* 0f38 */
			pinternal->mapidx = MAP_IDX_0F38;
			advance_byte(pinternal);
			buffer = 0x0f38;
			add_bytecode(pinternal, (uint8_t*)&buffer, AMED_X86_BYTECODE_TYPE_MAP, 2);
			return true;
		case 0x3a:
			/* 0f3a */
			pinternal->mapidx = MAP_IDX_0F3A;
			advance_byte(pinternal);
			buffer = 0x0f3a;
			add_bytecode(pinternal, (uint8_t*)&buffer, AMED_X86_BYTECODE_TYPE_MAP, 2);
			return true;
		}
	}
	buffer = 0x0f;
	add_bytecode(pinternal, (uint8_t*)&buffer, AMED_X86_BYTECODE_TYPE_MAP, 1);
	return true;
}

static bool set_modrm_field(x86_internal* pinternal, uint8_t modrm)
{
	pinternal->diagram.mod = (modrm >> 6) & 0x3;
	pinternal->diagram.reg = (modrm >> 3) & 0x07;
	pinternal->diagram.rm = modrm & 0x07;
	pinternal->diagram.modreg = 3 == pinternal->diagram.mod;
	pinternal->diagram.cr = pinternal->diagram.reg ? true : false;
	return true;
}

static bool add_segment(x86_internal* pinternal, uint16_t segment)
{
	uint8_t op;
	peek_byte(pinternal, &op);
	advance_byte(pinternal);
	add_bytecode(pinternal, (uint8_t*)&op, AMED_X86_BYTECODE_TYPE_PREFIX, 1);
	if (pinternal->segment)pinternal->insn->is_ugly = true;
	pinternal->segment = segment;
	return true;
}

static bool decode_entry(x86_internal* pinternal)
{
	/* initialization */
	x86_diagram* pdiagram = &pinternal->diagram;
	pinternal->vfpc = 0;
	pinternal->mapidx = 0;
	pinternal->segment = 0;
	pinternal->last_f_prefix = 0;
	pinternal->attributes = 0;
	pinternal->vreg = pinternal->src_reg = pinternal->vmem = NULL;

	pdiagram->attributes = 0;
	pdiagram->hashcode = pinternal->context->features;

	uint32_t dfopsize, dfadsize;
	uint8_t op = 0, modrm = 0;

	switch (pinternal->context->machine_mode)
	{
	case AMED_MACHINE_MODE_16:
		dfadsize = dfopsize = 0;
		break;
	case AMED_MACHINE_MODE_32:
		dfadsize = dfopsize = 1;
		break;
	case AMED_MACHINE_MODE_64:
		pdiagram->long_mode = true;
		dfadsize = 2;
		dfopsize = 1;
		break;
	default: return false;
	}
	pdiagram->asz = dfadsize;
	pdiagram->osz = dfopsize;

reenter:
	if (!peek_byte(pinternal, &op))	goto no_more_data;
	switch (op)
	{
	case 0x40:
	case 0x41:
	case 0x42:
	case 0x43:
	case 0x44:
	case 0x45:
	case 0x46:
	case 0x47:
	case 0x48:
	case 0x49:
	case 0x4a:
	case 0x4b:
	case 0x4c:
	case 0x4d:
	case 0x4e:
	case 0x4f:
		if (decode_rex(pinternal)) goto reenter;
		/* inc|dec instruction */
		break;

	case 0x0f:
		/* map */
		decode_map(pinternal);
		break;

	case 0x8f:
		/* xop prefix */
		decode_xop(pinternal);
		break;

	case 0x62:
		/* EVEX|MVEX prefix */
		decode_mevex(pinternal);
		break;

	case 0x26:
		/* ES segment override prefix (use with any branch instruction is reserved).*/
		add_segment(pinternal, AMED_X86_REGISTER_ES);
		goto reenter;

	case 0x2E:
		/* CS segment override prefix (use with any branch instruction is reserved).*/
		add_segment(pinternal, AMED_X86_REGISTER_CS);
		goto reenter;

	case 0x36:
		/* SS segment override prefix (use with any branch instruction is reserved).*/
		add_segment(pinternal, AMED_X86_REGISTER_SS);
		goto reenter;

	case 0x3E:
		/* DS segment override prefix (use with any branch instruction is reserved).*/
		add_segment(pinternal, AMED_X86_REGISTER_DS);
		goto reenter;

	case 0x64:
		/* FS segment override prefix (use with any branch instruction is reserved).*/
		add_segment(pinternal, AMED_X86_REGISTER_FS);
		goto reenter;

	case 0x65:
		/* GS segment override prefix (use with any branch instruction is reserved).*/
		add_segment(pinternal, AMED_X86_REGISTER_GS);
		goto reenter;

	case 0x66:
		/* operand size override */
		pinternal->vfpc++;
		pdiagram->p66 = true;
		pdiagram->osz = dfopsize >> 1;
		advance_byte(pinternal);
		add_bytecode(pinternal, (uint8_t*)&op, AMED_X86_BYTECODE_TYPE_PREFIX, 1);
		goto reenter;

	case 0x67:
		/* address size override */
		pdiagram->asz = dfadsize >> 1;
		advance_byte(pinternal);
		add_bytecode(pinternal, (uint8_t*)&op, AMED_X86_BYTECODE_TYPE_PREFIX, 1);
		goto reenter;

	case 0xc4:
		/* vex3 */
		decode_vex3(pinternal);
		break;

	case 0xc5:
		/* vex2 */
		decode_vex2(pinternal);
		break;

	case 0xf0:
		pinternal->vfpc++;
		pdiagram->f0 = true;
		advance_byte(pinternal);
		add_bytecode(pinternal, (uint8_t*)&op, AMED_X86_BYTECODE_TYPE_PREFIX, 1);
		goto reenter;

	case 0xf2:
		pinternal->vfpc++;
		pinternal->last_f_prefix = PREFIX_F2;
		pdiagram->f2 = true;
		advance_byte(pinternal);
		add_bytecode(pinternal, (uint8_t*)&op, AMED_X86_BYTECODE_TYPE_PREFIX, 1);
		goto reenter;

	case 0xf3:
		pinternal->vfpc++;
		pinternal->last_f_prefix = PREFIX_F3;
		pdiagram->f3 = true;
		advance_byte(pinternal);
		add_bytecode(pinternal, (uint8_t*)&op, AMED_X86_BYTECODE_TYPE_PREFIX, 1);
		goto reenter;
	}

no_more_data:

	if (MAP_IDX_0F0F == pinternal->mapidx)
	{
		/* 3dnow uses 0x0f as a primary opcode (op1) && ib as a seconday opcode (op2):
			map=0x0f op1=0x0f modrm op2=ib */
		if (!peek_byte(pinternal, &modrm)) return false;
		set_modrm_field(pinternal, modrm);
		if (!decode_modrm(pinternal)) return false;
		if (!peek_byte(pinternal, &op)) return false;
		advance_byte(pinternal);   // skip opcode.
	}
	else
	{
		if (!peek_byte(pinternal, &op)) return false;
		advance_byte(pinternal);   // skip opcode.

		/* lets pretend that entry has a modrm. */
		peek_byte(pinternal, &modrm);
		set_modrm_field(pinternal, modrm);
	}

	add_bytecode(pinternal, (uint8_t*)&op, AMED_X86_BYTECODE_TYPE_OPCODE, 1);
	pdiagram->opcode = op;
	unsigned int index = pinternal->mapidx + op;

	switch (pdiagram->asz)
	{
	case 0:
		break;
	case 1:
	case 2:
		pdiagram->yasz = true;
	}

	if (ENCODING_NONE == pinternal->diagram.enc)
	{
		/* we use osz as a hashcode for legacy instructions. */
		if (pdiagram->w) pdiagram->osz = 2;
		switch (pdiagram->osz)
		{
		case 0:
			pdiagram->zosz = true;
			break;
		case 1:
			pdiagram->zosz = true;
			/* fall throught */
		case 2:
			pdiagram->yosz = true;
		}
		pdiagram->len = pdiagram->osz;
	}
	else
	{
		pdiagram->len = pdiagram->vl;

		/* any use of REX, F0, F2, F3, 66 with EVEX/MVEX/VEX/XOP will UD! */
		pinternal->insn->is_undefined |= pinternal->vfpc != 0;
	}

	index = x86_lookup(index, pinternal->diagram.hashcode);
	unsigned int iencoding = index >> 16,
		itemplate = index & 0xffff;

	pinternal->insn->is_undefined |= 0 == iencoding;

	const amed_db_encoding* pencoding = &amed_x86_encodings_array[iencoding];
	const amed_db_template* ptemplate = &amed_x86_templates_array[itemplate];
	pinternal->encoding = pencoding;
	pinternal->ptemplate = ptemplate;

	if (pdiagram->long_mode && 2 != pdiagram->osz)
	{
		if (ptemplate->f64)
		{
			/* instruction force 64 size. */
			pinternal->diagram.osz = 2;
		}
		else if (ptemplate->d64)
		{
			/* default opsize wasn't 32 */
			pinternal->diagram.osz = pdiagram->p66 ? 1 : 2;
		}
	}

	if (pencoding->has_modrm)
	{
		if (MAP_IDX_0F0F != pinternal->mapidx)
		{
			/* decode real modrm */
			decode_modrm(pinternal);
		}
	}
	else
	{
		/* we didn't advance => we just set all fields to zero. */
		pdiagram->mod = pdiagram->reg = pdiagram->rm = 0;
	}

	decode_template(pinternal, ptemplate);
	return true;
}

bool amed_x86_decode_insn(amed_context* pcontext, amed_insn* pinsn)
{
	if (!pcontext->length) return false;
	pinsn->attributes = 0;
	x86_internal istruct;
	istruct.nb = pcontext->length;
	istruct.pc = 0;
	istruct.context = pcontext;
	istruct.insn = pinsn;
	istruct.address = pcontext->address;
	bool ok = decode_entry(&istruct);
	pinsn->length = istruct.pc;
	return ok;
}