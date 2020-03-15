/*BEGIN_HEADER
*
* Copyright (C) 2020 Mahdi Safsafi.
*
* https://github.com/MahdiSafsafi/AMED
*
* See licence file 'LICENCE' for use and distribution rights.
*
*END_HEADER*/

typedef amed_aarch64_pstate amed_db_pstate;

#define AMED_ARM_CONDITION_COND 1

#define MK_ALPHAINDEX(x)     0
#define MK_ISAFORM(x)        0
#define MK_ISA(x)            0

#define MK_CATEGORY(x)       AMED_CATEGORY_##x
#define MK_ARCH_VARIANT(x)   0

#define DS_32 1
#define DS_64 2

/* tags*/
#define MK_ICLASS(x)         AMED_AARCH64_ICLASS_##x
#define MK_GROUP(x)          AMED_AARCH64_GROUP_##x
#define MK_CCLASS(x)         AMED_AARCH64_CCLASS_##x
#define MK_XCLASS(x)         AMED_AARCH64_XCLASS_##x
#define MK_PAGE(x)           AMED_AARCH64_PAGE_##x

#define MK_ALIASOF(x)        AMED_AARCH64_ENCODING_##x

#define MK_EXCEPTION(x)      AMED_AARCH64_EXCEPTION_##x
#define MK_EXTENSION(x)      AMED_AARCH64_EXTENSION_##x
#define MK_DEFAULT_TO(x)     0

#define MK_IFORM(x)     AMED_AARCH64_IFORM_##x

#define MK_MNEM(x)      AMED_AARCH64_MNEM_##x
#define MK_COND(x)		AMED_ARM_CONDITION_##x
#define MK_TYPE(x)		AMED_AARCH64_NODE_TYPE_##x

#define MK_SYMBOL(x)	AMED_AARCH64_SYMBOL_##x
#define MK_SHIFT(x)	    AMED_SHIFT_##x
#define MK_EXTEND(x)	MK_SHIFT(x)
#define MK_REG(x)       AMED_AARCH64_REGISTER_##x
#define MK_BASE(x)      MK_REG(x)
#define MK_MEMACC(x)    AMED_MEM_ACCESS_##x
#define MK_LDACC(x)     MK_MEMACC(x)
#define MK_STACC(x)     MK_MEMACC(x)

#define MK_SYNC_OP(x)   AMED_AARCH64_SYNC_OP_##x
#define MK_AT_OP(x)     AMED_AARCH64_AT_OP_##x
#define MK_DC_OP(x)     AMED_AARCH64_DC_OP_##x
#define MK_IC_OP(x)     AMED_AARCH64_IC_OP_##x
#define MK_TLBI_OP(x)   AMED_AARCH64_TLBI_OP_##x
#define MK_CTX_OP(x)    AMED_AARCH64_CTX_OP_##x
#define MK_PRF_OP(x)    AMED_AARCH64_PRF_OP_##x
#define MK_PATTERN(x)   AMED_AARCH64_PATTERN_##x
#define MK_BTI_OP(x)    AMED_AARCH64_BTI_OP_##x
#define MK_PSTATEFIELD(x) AMED_AARCH64_PSTATEFIELD_##x

#define MK_DATATYPE(x) AMED_DATATYPE_##x

#define MK_VDT(x) AMED_AARCH64_VDT_##x
#define MK_VDS(x) MK_VDT(x)

#define MK_DATASIZE(x) x

#define AMED_AARCH64_COND_cnd 1

#define MK_SIGNPOS(x) 1
/*
	those must be negative because we need to fix them.
*/
#define SIZE_VL   -1
#define SIZE_PL   -2
#define AMOUNT_VL -1

#define MK_AMOUNT(x) AMOUNT_##x


#define MK_SIZE(x) 0


/*================================================== NODE ====================================================*/

/* base node */
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
			bool read : 1;
			bool write : 1;
			bool has_encodedin : 1;
			union 
			{
				/* target specific attributes */
				struct 
				{
					bool sp : 1;
					bool nozr : 1;
					bool pair : 1;
					bool even : 1;
					bool zeroing : 1;
					bool merging : 1;
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
		int16_t value16;
	};
	int32_t default_to;

	union 
	{
		uint32_t scale;
		uint32_t arg0;
	};
}amed_db_any;

typedef amed_db_any amed_db_imm, amed_db_amount, amed_db_immoff, amed_db_pattern,
		amed_db_label, amed_db_addr, amed_db_fpimm;

typedef amed_db_any amed_db_reg, amed_db_base, amed_db_preg, amed_db_regoff;

typedef struct _amed_db_list
{
	uint8_t type;
	union 
	{
		void* base;
		void* vbase;
		void* ebase;
	};
	void* count;
}amed_db_list, amed_db_elist,amed_db_vlist;

typedef struct _amed_db_ereg
{
	uint8_t type;
	void* reg;
	union
	{
		uint8_t vds;
		uint8_t vdt;
	};
	void* idx;
}amed_db_ereg, amed_db_vreg, amed_db_vbase, amed_db_ebase, amed_db_vregoff;


typedef amed_db_any amed_db_extend;
typedef amed_db_any amed_db_shift;
typedef amed_db_any amed_db_at_op;
typedef amed_db_any amed_db_barrier;
typedef amed_db_any amed_db_bti_op;
typedef amed_db_any amed_db_ctx_op;
typedef amed_db_any amed_db_dc_op;
typedef amed_db_any amed_db_ic_op;
typedef amed_db_any amed_db_prd;
typedef amed_db_any amed_db_prf_op;
typedef amed_db_any amed_db_pstatefield;
typedef amed_db_any amed_db_tlbi_op;
typedef amed_db_any amed_db_sync_op;
typedef amed_db_any amed_db_cond, amed_db_invcond;
typedef amed_db_any amed_db_count;
typedef amed_db_any amed_db_vds;
typedef amed_db_any amed_db_vdt;
typedef amed_db_any amed_db_sysreg;
typedef amed_db_any amed_db_cspace;
typedef amed_db_any amed_db_idx;

typedef struct _amed_db_size
{
	uint16_t size;
	uint16_t esize;
}amed_db_size;

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
	union 
	{
		void* base;
		void* vbase;
	};
	union 
	{
		void* regoff;
		void* vregoff;
		void* regoffsh;
		void* vregoffsh;
		void* immoff;
		void* immoffsh;
	};
	void* size;
	uint8_t ldacc;
	uint8_t stacc;
}amed_db_mem;

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
			};
		};
	};
	uint16_t default_to;
}amed_db_shifter;

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
		void* vreg;
		void* pattern;
	};
	void* shifter;
}amed_db_opsh;

typedef amed_db_opsh amed_db_immsh, amed_db_patternsh, amed_db_immoffsh;
typedef amed_db_opsh amed_db_regsh, amed_db_regoffsh, amed_db_vregsh, amed_db_vregoffsh;

/*================================================ table value ================================================*/

typedef struct {
	union {
		struct {
			bool alias : 1;
			bool hasalias : 1;
			bool undefined : 1;
			bool unpredictable : 1;
			union {
				bool omitted : 1;
				bool absent : 1;
			};
			bool has_table : 1;
			bool is_representable : 1;
		};
	};
	union {
		int value;
		long int value64;
		int cond;
		int at_op;
		int dc_op;
		int ic_op;
		int tlbi_op;
		int prf_op;
		int pspace;
		int shift;
		int extend;
		int pattern;
		int prd;
		int pstatefield;
		int bti_op;
		float fpvalue;
		void* table;
	};
	int amount;
	int encoding;
} amed_db_tv;

typedef struct {
	uint8_t count;
	void* items;
} amed_db_table;

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
			bool broadcast : 1;
			uint32_t datasize : 2;
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
			int it : 2;
			int cond : 3;
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

typedef struct 
{
	uint32_t mask;
	uint8_t size;
}amed_db_encodedin;


typedef struct 
{
	union
	{
		uint8_t kind;
		uint8_t symbol;
	};
	uint8_t size;
	uint8_t datatype;
	uint8_t encoding;
	struct {
		bool is_even : 1;
		bool is_first : 1;
		bool is_last : 1;
		uint8_t reg : 1;
	};
}amed_db_reginfo;