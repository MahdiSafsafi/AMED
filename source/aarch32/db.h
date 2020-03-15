/*BEGIN_HEADER
*
* Copyright (C) 2020 Mahdi Safsafi.
*
* https://github.com/MahdiSafsafi/AMED
*
* See licence file 'LICENCE' for use and distribution rights.
*
*END_HEADER*/

typedef amed_aarch32_pstate amed_db_pstate;
/* fixme: typos*/
#define AMED_ARM_PSPACE_p14 AMED_ARM_PSPACE_P14
#define AMED_ARM_PSPACE_p15 AMED_ARM_PSPACE_P15

#define AMED_ARM_CONDITION_UNCOND 0
#define AMED_ARM_CONDITION_COND 1
#define AMED_ARM_CONDITION_UNP_COND 2
#define AMED_ARM_CONDITION_NO_NV 3
#define AMED_ARM_CONDITION_NO_NV_UNP_COND 4
#define AMED_ARM_CONDITION_MUST_AL 5
#define AMED_ARM_CONDITION_MUST_NV 6
#define AMED_ARM_CONDITION_MUST_COND 7


#define MK_ALPHAINDEX(x)     0
#define MK_ISAFORM(x)        0
#define MK_ISA(x)            0

#define MK_CATEGORY(x)       AMED_CATEGORY_##x
#define MK_EXCEPTION(x)      AMED_AARCH32_EXCEPTION_##x
#define MK_EXTENSION(x)      AMED_AARCH32_EXTENSION_##x

#define MK_ARCH_VARIANT(x)   AMED_ARM_ARCH_VARIANT_##x

/* tags*/
#define MK_ICLASS(x)         AMED_AARCH32_ICLASS_##x
#define MK_GROUP(x)          AMED_AARCH32_GROUP_##x
#define MK_CCLASS(x)         AMED_AARCH32_CCLASS_##x
#define MK_XCLASS(x)         AMED_AARCH32_XCLASS_##x
#define MK_PAGE(x)           AMED_AARCH32_PAGE_##x

#define MK_ALIASOF(x)        AMED_AARCH32_ENCODING_##x

#define MK_DEFAULT_TO(x)     0

#define MK_IFORM(x)     AMED_AARCH32_IFORM_##x

#define MK_MNEM(x)      AMED_AARCH32_MNEM_##x
#define MK_COND(x)		AMED_ARM_CONDITION_##x
#define MK_TYPE(x)		AMED_AARCH32_NODE_TYPE_##x

#define MK_SYMBOL(x)	AMED_AARCH32_SYMBOL_##x
#define MK_SHIFT(x)	    AMED_SHIFT_##x
#define MK_EXTEND(x)	MK_SHIFT(x)

#define MK_REG(x)       AMED_AARCH32_REGISTER_##x
#define MK_BASE(x)      MK_REG(x)
#define MK_BNKDREG(x)   MK_REG(x)
#define MK_SPECREG(x)   MK_REG(x)

#define MK_MEMACC(x)    AMED_MEM_ACCESS_##x
#define MK_LDACC(x)     MK_MEMACC(x)
#define MK_STACC(x)     MK_MEMACC(x)

#define MK_SYNC_OP(x)   AMED_AARCH32_SYNC_OP_##x

#define MK_DATATYPE(x)  AMED_DATATYPE_##x

#define MK_CSPACE(x) AMED_ARM_CSPACE_##x
#define MK_PSPACE(x) AMED_ARM_PSPACE_##x

#define MK_BARRIER(x) AMED_ARM_BARRIER_##x
#define MK_SIGNPOS(x) 1
#define MK_ENDIAN(x)  AMED_ENDIAN_##x

/*
	those must be negative because we need to fix them.
*/
#define SIZE_VL   -1
#define SIZE_PL   -2
#define AMOUNT_VL -1

#define MK_AMOUNT(x) AMOUNT_##x

#define AMED_AARCH64_SYSTEM_REGISTER_SPACE_p14 AMED_AARCH32_SYSTEM_REGISTER_SPACE_P14
#define AMED_AARCH64_SYSTEM_REGISTER_SPACE_p15 AMED_AARCH32_SYSTEM_REGISTER_SPACE_P15

#define MK_SIZE(x) SIZE_##x

/*================================================== NODES ====================================================*/

/* base node : generally for terminal node. */
typedef struct _amed_db_any
{
	uint8_t type;
	uint8_t symbol;
	uint8_t datatype;
	union
	{
		struct
		{
			bool optional : 1;
			bool has_encodedin : 1;
			bool has_table : 1;
			bool read : 1;
			bool write : 1;
			bool dt_required : 1;
			union
			{
				/* target specific attributes */
				struct
				{
					bool pair : 1;
					bool even : 1;
					bool dpc : 1;
					bool upc : 1;
					bool nopc : 1;
					bool nosp : 1;
					bool iwb : 1;
					bool erb : 1;
				};
				struct
				{
					bool signpos : 1;
				};
			};

		};
		uint32_t attributes;
	};
	union
	{
		struct
		{
			uint32_t encodedin;
			void* table;
		};
		float fpvalue;
		int32_t value;
	};
	int32_t default_to;

	union
	{
		int32_t scale;
		int32_t arg0;
	};
}amed_db_any;

/* simple/terminal nodes */

typedef amed_db_any amed_db_extend;
typedef amed_db_any amed_db_shift;
typedef amed_db_any amed_db_barrier;
typedef amed_db_any amed_db_sync_op;
typedef amed_db_any amed_db_cond;
typedef amed_db_any amed_db_count;
typedef amed_db_any amed_db_sysreg;
typedef amed_db_any amed_db_pspace;
typedef amed_db_any amed_db_cspace;
typedef amed_db_any amed_db_idx;
typedef amed_db_any amed_db_rs;
typedef amed_db_any amed_db_wback;
typedef amed_db_any amed_db_inc;
typedef amed_db_any amed_db_align;
typedef amed_db_any amed_db_iflags;
typedef amed_db_any amed_db_add;
typedef amed_db_any amed_db_xyz;
typedef amed_db_any amed_db_sz;
typedef amed_db_any amed_db_specreg;
typedef amed_db_any amed_db_bnkdreg;
typedef amed_db_any amed_db_endian;

/* simple immediate */
typedef amed_db_any amed_db_imm, amed_db_amount, amed_db_immoff, 
		amed_db_label, amed_db_addr, amed_db_fpimm;

/* simple register */
typedef amed_db_any amed_db_reg, amed_db_base, amed_db_regoff, amed_db_vreg, amed_db_vbase;

/* general (multiple|single) list*/
typedef amed_db_any  amed_db_glist, amed_db_slist;

/* complex list for vector/fp-simd */
typedef struct _amed_db_list
{
	uint8_t type;
	union 
	{
		struct
		{
			bool empty_index : 1;
		};
	};
	union
	{
		void* base;
		void* vbase;
		void* ebase;
	};
	void* count;
	void* inc;
}amed_db_list, amed_db_elist, amed_db_vlist, amed_db_fslist, amed_db_fdlist;

/* scalar register = register + index */
typedef struct _amed_db_ereg
{
	uint8_t type;
	void* reg;
	void* idx;
}amed_db_ereg, amed_db_ebase;

/* register + wback */
typedef struct _amed_db_wreg
{
	uint8_t type;
	void* reg;
	void* wback;
}amed_db_wreg;

typedef struct _amed_db_size
{
	uint16_t size;
	uint16_t esize;
}amed_db_size;

/* memory && literal */
typedef struct _amed_db_mem
{
	uint8_t type;
	uint8_t datatype;
	union
	{
		struct
		{
			bool read : 1;
			bool write : 1;
			bool post_indexed : 1;
			bool pre_indexed : 1;
		};
	};

	void* base;
	void* align;
	void* add;

	union
	{
		void* regoff;
		void* regoffsh;
		void* immoff;
		void* immoffsh;
	};

	void* size;
	uint8_t ldacc;
	uint8_t stacc;
}amed_db_mem, amed_db_lm;

/* shifter node = shift (reg|amount) */
typedef struct _amed_db_shifter
{
	uint8_t type;
	uint8_t symbol;
	union
	{
		struct
		{
			bool optional : 1;
			bool has_encodedin : 1;
		};
		uint8_t attributes;
	};
	union
	{
		struct
		{
			uint32_t encodedin;
			void* table;
		};
		struct
		{
			union
			{
				void* shift;
				void* extend;
			};
			union
			{
				void* amount;
				void* rs;
			};
		};
	};
	uint16_t default_to;
}amed_db_shifter;

/* shifted operand (either register or immediate) */
typedef struct _amed_db_opsh
{
	uint8_t type;
	union
	{
		struct
		{
			bool optional : 1;
		};
		uint8_t attributes;
	};
	union
	{
		void* imm;
		void* reg;
	};
	void* shifter;
}amed_db_opsh;

typedef amed_db_opsh amed_db_immsh, amed_db_immoffsh;
typedef amed_db_opsh amed_db_regsh, amed_db_regoffsh;


/*================================================ encoding ================================================*/

typedef struct {
	uint32_t opcode;
	uint32_t mask;
	uint16_t iclass;
	uint16_t cclass;
	uint16_t first_template;
	uint8_t template_count;

	union {
		uint16_t aliascond;
		uint16_t aliases;
	};
	union {
		struct
		{
			bool alias : 1;
			bool has_alias : 1;
			bool is_doubling : 1;
			bool is_rounding : 1;
			bool is_saturating : 1;
			bool is_halving : 1;
			bool predicated : 1;
			bool takes_movprfx : 1;
			bool takes_pred_movprfx : 1;
			uint8_t categories[4];
			uint8_t exceptions[4];
			uint8_t iflags;
			union
			{
				/* unused */
				bool alphaindex : 1;
				bool isa : 1;
				bool isaform : 1;
				bool page : 1;
				bool instr_class : 1;
				bool group : 1;
				bool shape : 1;
				bool arch_variant : 1;
				bool aliasof : 1;
				bool uses_dit : 1;
				bool invalid : 1;
			};
		};
	};
}amed_db_encoding;

/*================================================ class ================================================*/

typedef struct
{
	uint8_t page;
	uint8_t xclass;
	uint32_t exceptions;

}amed_db_class;

/*================================================ template ================================================*/

typedef struct
{
	uint16_t iform;
	uint16_t arguments;
	uint16_t bitdiffs;
	union
	{
		struct
		{
			bool showqlf : 1;
			bool asmonly : 1;
			bool fit : 1;
			bool may_load : 1;
			bool may_store : 1;
			bool init : 1;
			bool outit : 1;
			uint8_t cond : 3;
			uint8_t arch_variant : 4;
		};
	};
	uint8_t extensions[4];

}amed_db_template;

/*================================================ bitdiffs ================================================*/

typedef struct
{
	uint32_t opcode;
	uint32_t mask;
}amed_db_bitdiff;

typedef struct {
	uint32_t mask;
	uint8_t size;
}amed_db_encodedin;

typedef struct _amed_db_reginfo
{
	uint8_t datatype;
	uint8_t symbol;
	uint8_t encoding;
	union 
	{
		struct
		{
			bool is_first : 1;
			bool is_last : 1;
			bool is_even : 1;
		};
		uint8_t attributes;
	};
	uint16_t reg;
	uint16_t size;
	
}amed_db_reginfo;

typedef struct _amed_db_tv
{
	union 
	{
		struct 
		{
			bool alias : 1;
			bool hasalias : 1;
			bool undefined : 1;
			bool unpredictable : 1;
			bool is_representable : 1;
			union
			{
				bool omitted : 1;
				bool absent : 1;
			};
			bool has_table : 1;
		};
	};
	union 
	{
		int value;
		long int value64;
		int cond;
		int bnkdreg;
		int specreg;
		int pspace;
		int endian;
		int option;
		int barrier;
		int shift;
		int extend;
		float fpvalue;
		void* table;
	};
	int encoding;
} amed_db_tv;

typedef struct {
	uint8_t count;
	void* items;
} amed_db_table;
