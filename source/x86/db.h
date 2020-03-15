/*BEGIN_HEADER
*
* Copyright (C) 2020 Mahdi Safsafi.
*
* https://github.com/MahdiSafsafi/AMED
*
* See licence file 'LICENCE' for use and distribution rights.
*
*END_HEADER*/


typedef amed_x86_iflags amed_db_iflags;


#define AMED_CPL_RING0 1
/* vector length */
#define RVL128 0
#define RVL256 1
#define RVL512 2
#define MK_RVL(x) x

#define MK_PAGE(x)      AMED_X86_PAGE_##x
#define MK_IFORM(x)     AMED_X86_IFORM_##x
#define MK_ISA(x)       AMED_X86_ISA_##x
#define MK_EXCEPTION(x) AMED_X86_EXCEPTION_##x
#define MK_EXTENSION(x) AMED_X86_EXTENSION_##x
#define MK_CATEGORY(x)  AMED_CATEGORY_##x
#define MK_CPL(x)       AMED_CPL_##x

/* datatype */
#define MK_DT(x)       AMED_DATATYPE_##x
#define MK_MDT(x)      MK_DT(x)
#define MK_VDT(x)      MK_DT(x)
#define MK_DATATYPE(x) MK_DT(x)

#define MK_SWIZZLE(x)  AMED_X86_SWIZZLE_##x
#define MK_TUPLE(x)    AMED_X86_TUPLE_##x


#define MK_SYMBOL(x)   AMED_X86_SYMBOL_##x
#define MK_KIND(x)     MK_SYMBOL(x)


#define MK_TYPE(x) AMED_X86_NODE_TYPE_##x
#define MK_REG(x)  AMED_X86_REGISTER_##x
#define MK_VREG(x) MK_REG(x)
#define MK_SEG(x)  MK_REG(x)
#define MK_BASE(x) MK_REG(x)

#define MK_ENCODEDIN(x) AMED_X86_ENCODEDIN_##x


typedef struct _amed_db_width
{
	union 
	{
		struct
		{
			uint16_t width16, width32, width64;
		};
		uint16_t widths[3];
	};
}amed_db_width;

typedef struct _amed_db_bitdiff
{
	uint32_t opcode, mask;
}amed_db_bitdiff;

typedef struct _amed_db_any
{
	uint8_t type;
	uint8_t datatype;
	uint8_t symbol;	
	int16_t size; // if signed => vsize !
	union
	{
		struct
		{
			bool read : 1;
			bool write : 1;
			bool suppressed : 1;
			bool has_encodedin : 1;
		};
		uint16_t attributes;
	};
	union
	{
		uint16_t encodedin;
		uint16_t value;
	};
}amed_db_any;

typedef struct _amed_db_reg
{
	uint8_t type;
	uint8_t datatype;
	uint8_t symbol;
	
	union
	{
		struct
		{
			bool read : 1;
			bool write : 1;
			bool conditional_reading : 1;
			bool conditional_writing : 1;
			bool suppressed : 1;
			bool supress_all_exception : 1;
			bool zeroing : 1;
			bool has_encodedin : 1;
			bool aszscaling : 1;
		};
		uint16_t attributes;
	};
	union
	{
		uint16_t encodedin;
		uint16_t value;
	};
}amed_db_reg;

typedef struct _amed_db_mem
{
	uint8_t type;
	uint8_t datatype;
	uint8_t symbol;
	int16_t size; // if signed => vsize.
	union
	{
		struct
		{
			bool read : 1;
			bool write : 1;
			bool conditional_reading : 1;
			bool conditional_writing : 1;
			bool suppressed : 1;
			bool has_encodedin : 1;
		};
		uint16_t attributes;
	};
	union
	{
		struct
		{
			amed_db_reg*  seg;
			amed_db_reg* base;
		};
		uint16_t encodedin;
	};
}amed_db_mem;

typedef struct _amed_db_sbcst
{
	uint8_t type;
	uint8_t symbol;
	uint8_t from;
	uint8_t to;
	union
	{
		struct
		{
			bool suppressed : 1;
		};
		uint16_t attributes;
	};
}amed_db_sbcst;

typedef struct _amed_db_swz
{
	uint8_t type;
	uint8_t dt;
	uint8_t encodedin;
	uint8_t swizzle;
	union
	{
		struct
		{
			bool suppressed : 1;
			bool has_encodedin : 1;
		};
	};
	void* table;
}amed_db_swz;

typedef struct _amed_db_reginfo
{
	uint8_t kind;
	uint8_t datatype;
	uint16_t size;
}amed_db_reginfo;

typedef amed_db_any amed_db_imm   	;
typedef amed_db_any amed_db_ptr   	;
typedef amed_db_any amed_db_moffs 	;
typedef amed_db_any amed_db_rel   	;
typedef amed_db_any amed_db_rndc  	;
typedef amed_db_any amed_db_order 	;
typedef amed_db_any amed_db_cc  	;
typedef amed_db_any amed_db_fexcpc	;
typedef amed_db_any amed_db_fpct  	;
typedef amed_db_any amed_db_signc 	;
typedef amed_db_any amed_db_ctl   	;
typedef amed_db_any amed_db_rotate  ;
typedef amed_db_any amed_db_shift   ;

typedef amed_db_any amed_db_evh     ;
typedef amed_db_any amed_db_bcst    ;
typedef amed_db_any amed_db_rc      ;
typedef amed_db_any amed_db_sae     ;


/* register */
typedef amed_db_reg amed_db_vreg;
typedef amed_db_reg amed_db_base;
typedef amed_db_reg amed_db_seg ;
typedef amed_db_reg amed_db_preg;

/* memory */
typedef amed_db_mem amed_db_agen;
typedef amed_db_mem amed_db_mib;

typedef struct _amed_db_encoding
{

	uint8_t iflags;
	uint8_t isa;
	uint16_t page;
	uint8_t categories[4];
	uint8_t exceptions[4];
	uint8_t extensions[1];
	
	union
	{
		struct
		{
			bool has_modrm : 1;
			bool deprecated : 1;
			bool requires_alignment : 1;
			bool cpl : 1;
			uint8_t rvl : 2;
			union 
			{
				/* unused */
				uint16_t first_template: 1;
				uint16_t template_count : 1;
			};
		};
		uint16_t attributes;
	};
	
}amed_db_encoding;

typedef struct _amed_db_template
{
	uint16_t iform;
	uint16_t bitdiffs;
	uint16_t arguments;
	union
	{
		struct
		{
			bool lock : 1;
			bool hle : 1;
			bool xacquire : 1;
			bool xrelease : 1;
			bool bound : 1;
			bool rep : 1;
			bool repnz : 1;
			bool repz : 1;
			bool bhint : 1;
			bool egran : 1;
			bool f64 : 1;
			bool d64 : 1;
			uint8_t rvl : 2;
			uint8_t tuple : 5;
		};
		uint32_t attributes;
	};
} amed_db_template;


typedef struct _amed_db_swizzle_tv
{
	uint8_t nelem;
	uint8_t mdt;
	uint8_t vdt;
	union 
	{
		struct
		{
			bool reserved : 1;
			bool converting : 1;
			bool broadcasting : 1;
		};
		uint8_t attributes;
	};
}amed_db_swizzle_tv;

typedef enum _amed_x86_tuple
{
	AMED_X86_TUPLE_NONE,
	AMED_X86_TUPLE_DUP,
	AMED_X86_TUPLE_FV,
	AMED_X86_TUPLE_FVM,
	AMED_X86_TUPLE_HV,
	AMED_X86_TUPLE_HVM,
	AMED_X86_TUPLE_M128,
	AMED_X86_TUPLE_OVM,
	AMED_X86_TUPLE_QVM,
	AMED_X86_TUPLE_T1F32,
	AMED_X86_TUPLE_T1F64,
	AMED_X86_TUPLE_T1S8,
	AMED_X86_TUPLE_T1S16,
	AMED_X86_TUPLE_T1S,
	AMED_X86_TUPLE_T2,
	AMED_X86_TUPLE_T4,
	AMED_X86_TUPLE_T8,
}amed_x86_tuple;

typedef enum _amed_x86_swizzle
{
	AMED_X86_SWIZZLE_NONE,
	AMED_X86_SWIZZLE_D_F32,
	AMED_X86_SWIZZLE_D_F64,
	AMED_X86_SWIZZLE_D_I32,
	AMED_X86_SWIZZLE_D_I64,
	AMED_X86_SWIZZLE_N_F32,
	AMED_X86_SWIZZLE_N_I32,
	AMED_X86_SWIZZLE_N_I64,
	AMED_X86_SWIZZLE_R_I32,
	AMED_X86_SWIZZLE_R_I64,
	AMED_X86_SWIZZLE_SU_F32,
	AMED_X86_SWIZZLE_SU_F64,
	AMED_X86_SWIZZLE_SU_I32,
	AMED_X86_SWIZZLE_SU_I64,
	AMED_X86_SWIZZLE_U_F32,
	AMED_X86_SWIZZLE_U_F64,
	AMED_X86_SWIZZLE_U_I32,
	AMED_X86_SWIZZLE_U_I64,
}amed_x86_swizzle;

typedef enum _amed_x86_node_type
{
	AMED_X86_NODE_TYPE_NONE,
	/* register */
	AMED_X86_NODE_TYPE_REG,
	AMED_X86_NODE_TYPE_VREG,
	AMED_X86_NODE_TYPE_PREG,
	AMED_X86_NODE_TYPE_BASE,
	AMED_X86_NODE_TYPE_SEG,

	/* memory */
	AMED_X86_NODE_TYPE_MEM,
	AMED_X86_NODE_TYPE_AGEN,
	AMED_X86_NODE_TYPE_MIB,
	/* immediate */
	AMED_X86_NODE_TYPE_IMM,
	AMED_X86_NODE_TYPE_PTR,
	AMED_X86_NODE_TYPE_REL,
	AMED_X86_NODE_TYPE_MOFFS,
	AMED_X86_NODE_TYPE_RNDC,
	AMED_X86_NODE_TYPE_ORDER,
	AMED_X86_NODE_TYPE_CC,
	AMED_X86_NODE_TYPE_FEXCPC,
	AMED_X86_NODE_TYPE_FPCT,
	AMED_X86_NODE_TYPE_SIGNC,
	AMED_X86_NODE_TYPE_CTL,
	AMED_X86_NODE_TYPE_SHIFT,
	AMED_X86_NODE_TYPE_ROTATE,


	AMED_X86_NODE_TYPE_BCST,
	AMED_X86_NODE_TYPE_SBCST,
	AMED_X86_NODE_TYPE_SWZ,
	AMED_X86_NODE_TYPE_SWZCV,
	AMED_X86_NODE_TYPE_SWZUP,
	AMED_X86_NODE_TYPE_RC,
	AMED_X86_NODE_TYPE_SAE,
	AMED_X86_NODE_TYPE_EVH,
}amed_x86_node_type;

typedef enum _amed_x86_symbol
{
	AMED_X86_SYMBOL_NONE,
	/* register::adz::v */
	AMED_X86_SYMBOL_AXa,
	AMED_X86_SYMBOL_CXa,
	AMED_X86_SYMBOL_DXa,
	AMED_X86_SYMBOL_BXa,
	AMED_X86_SYMBOL_SPa,
	AMED_X86_SYMBOL_BPa,
	AMED_X86_SYMBOL_SIa, 
	AMED_X86_SYMBOL_DIa,
	AMED_X86_SYMBOL_IPa,
	/* register::osz::v */
	AMED_X86_SYMBOL_AXv,
	AMED_X86_SYMBOL_CXv,
	AMED_X86_SYMBOL_DXv,
	AMED_X86_SYMBOL_BXv,
	AMED_X86_SYMBOL_SPv,
	AMED_X86_SYMBOL_BPv,
	AMED_X86_SYMBOL_SIv,
	AMED_X86_SYMBOL_DIv,
	AMED_X86_SYMBOL_IPv,

	AMED_X86_SYMBOL_GPRa,
	AMED_X86_SYMBOL_GPRv,
	AMED_X86_SYMBOL_GPRy,
	AMED_X86_SYMBOL_GPRz,

	AMED_X86_SYMBOL_GPR8,
	AMED_X86_SYMBOL_GPR16,
	AMED_X86_SYMBOL_GPR32,
	AMED_X86_SYMBOL_GPR64,
	AMED_X86_SYMBOL_SEGREG,
	AMED_X86_SYMBOL_FPREG,
	AMED_X86_SYMBOL_MMXREG,
	AMED_X86_SYMBOL_DREG,
	AMED_X86_SYMBOL_CREG,
	AMED_X86_SYMBOL_MASKREG,
	AMED_X86_SYMBOL_XMMREG,
	AMED_X86_SYMBOL_YMMREG,
	AMED_X86_SYMBOL_ZMMREG,
	AMED_X86_SYMBOL_BNDREG,
	AMED_X86_SYMBOL_TBLREG,
	AMED_X86_SYMBOL_SYSREG16,
	AMED_X86_SYMBOL_SYSREG32,
	AMED_X86_SYMBOL_SYSREG64,


	AMED_X86_SYMBOL_MEM,
	AMED_X86_SYMBOL_VMX,
	AMED_X86_SYMBOL_VMY,
	AMED_X86_SYMBOL_VMZ,
	AMED_X86_SYMBOL_AGEN,
	AMED_X86_SYMBOL_MIB,

	AMED_X86_SYMBOL_SIMM,
	AMED_X86_SYMBOL_UIMM,
	AMED_X86_SYMBOL_MOFFS,
	AMED_X86_SYMBOL_PTR,
	AMED_X86_SYMBOL_REL,

	AMED_X86_SYMBOL_BCST,
	AMED_X86_SYMBOL_SAE,
	AMED_X86_SYMBOL_RC,
	AMED_X86_SYMBOL_EVH,

	AMED_X86_SYMBOL_CC3,
	AMED_X86_SYMBOL_CC5,
	AMED_X86_SYMBOL_CTL,
	AMED_X86_SYMBOL_FEXCPC,
	AMED_X86_SYMBOL_FPCT,
	AMED_X86_SYMBOL_INDEX,
	AMED_X86_SYMBOL_ORDER,
	AMED_X86_SYMBOL_RNDC2,
	AMED_X86_SYMBOL_RNDC3,
	AMED_X86_SYMBOL_ROL,
	AMED_X86_SYMBOL_ROR,
	AMED_X86_SYMBOL_SHL,
	AMED_X86_SYMBOL_SHR,
	AMED_X86_SYMBOL_SIGNC,

}amed_x86_symbol;

typedef enum _amed_x86_encodedin
{
	AMED_X86_ENCODEDIN_NONE,
	AMED_X86_ENCODEDIN_VIRTUAL,
	AMED_X86_ENCODEDIN_VPREFIX,
	AMED_X86_ENCODEDIN_OSZ,
	AMED_X86_ENCODEDIN_SSS,
	AMED_X86_ENCODEDIN_ASZ,
	AMED_X86_ENCODEDIN_REG,
	AMED_X86_ENCODEDIN_RM,
	AMED_X86_ENCODEDIN_AAA,
	AMED_X86_ENCODEDIN_VVVV,
	AMED_X86_ENCODEDIN_SIB_BASE,
	AMED_X86_ENCODEDIN_SIB_INDEX,
	AMED_X86_ENCODEDIN_OPCODE,
	AMED_X86_ENCODEDIN_IS4,
	AMED_X86_ENCODEDIN_IZ,
	AMED_X86_ENCODEDIN_IV,
	AMED_X86_ENCODEDIN_IB,
	AMED_X86_ENCODEDIN_IW,
	AMED_X86_ENCODEDIN_ID,
	AMED_X86_ENCODEDIN_IQ,
	AMED_X86_ENCODEDIN_IDPP,
	AMED_X86_ENCODEDIN_BP,
}amed_x86_encodedin;
