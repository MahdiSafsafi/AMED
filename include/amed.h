/*BEGIN_HEADER
*
* Copyright (C) 2020 Mahdi Safsafi.
*
* https://github.com/MahdiSafsafi/AMED
*
* See licence file 'LICENCE' for use and distribution rights.
*
*END_HEADER*/

/*!
	@file amed.h
	@brief AMED core.
*/

#ifndef __AMED_HEADER
#define __AMED_HEADER

/* IMPROVE-ME: some features can not be mixed with others
	=> represent them as a single bit and save some bits.
	e.g: MPX && AMD. */
#define AMED_X86_FEATURE_AMD (1 << 25)
#define AMED_X86_FEATURE_KNC (1 << 26)
#define AMED_X86_FEATURE_MPX (1 << 27)
#define AMED_X86_FEATURE_BMI (1 << 28)
#define AMED_X86_FEATURE_CLDEMOTE (1 << 29)
#define AMED_X86_FEATURE_CET (1 << 30)

#define AMED_X86_FEATURE_MASK (AMED_X86_FEATURE_AMD|AMED_X86_FEATURE_KNC|AMED_X86_FEATURE_MPX | \
							  AMED_X86_FEATURE_BMI|AMED_X86_FEATURE_CLDEMOTE|AMED_X86_FEATURE_CET)

typedef enum _amed_architecture
{
	AMED_ARCHITECTURE_NONE,
	AMED_ARCHITECTURE_X86,
	AMED_ARCHITECTURE_AARCH32,
	AMED_ARCHITECTURE_AARCH64,
}amed_architecture;

#include "amed/shared/enums.inc"

typedef struct _amed_iflag
{
	union
	{
		struct
		{
			bool unchanged : 1;
			bool tested : 1;
			bool modified : 1;
			bool cleared : 1;
			bool set : 1;
			bool conditionally_modified : 1;
			bool conditionally_tested : 1;
		};
		uint8_t attributes;
	};
}amed_iflag;

typedef struct _amed_x86_iflags
{
	amed_iflag af;
	amed_iflag cf;
	amed_iflag of;
	amed_iflag pf;
	amed_iflag sf;
	amed_iflag zf;
	amed_iflag df;
	amed_iflag _if;
	amed_iflag iopl;
	amed_iflag vif;
	amed_iflag ac;
	amed_iflag nt;
	amed_iflag rf;
	amed_iflag tf;
	amed_iflag vm;
	amed_iflag id;
	amed_iflag vip;
	amed_iflag c0;
	amed_iflag c1;
	amed_iflag c2;
	amed_iflag c3;
}amed_x86_iflags;

typedef struct _amed_aarch32_pstate
{
	amed_iflag n;
	amed_iflag z;
	amed_iflag c;
	amed_iflag v;
	amed_iflag q;
	amed_iflag t;
	amed_iflag a;
	amed_iflag f;
	amed_iflag i;
	amed_iflag e;
	amed_iflag m;
	amed_iflag el;
	amed_iflag pan;
	amed_iflag sp;
	amed_iflag uao;
	amed_iflag nrw;
	amed_iflag ge;
	amed_iflag it;
	amed_iflag ss;
}amed_aarch32_pstate;

typedef struct _amed_aarch64_pstate
{	
	amed_iflag n;
	amed_iflag z;
	amed_iflag c;
	amed_iflag v;
	amed_iflag a;
	amed_iflag d;
	amed_iflag f;
	amed_iflag i;
	amed_iflag el;
	amed_iflag dit;
	amed_iflag pan;
	amed_iflag sp;
	amed_iflag ssbs;
	amed_iflag tco;
	amed_iflag uao;
}amed_aarch64_pstate;

typedef struct _amed_x86_modrm
{
	union
	{
		struct
		{
			uint8_t rm : 3;
			uint8_t reg : 3;
			uint8_t mod : 2;
		};
		uint8_t value;
	};
}amed_x86_modrm;

typedef struct _amed_x86_sib
{
	union
	{
		struct
		{
			uint8_t base : 3;
			uint8_t index : 3;
			uint8_t scale : 2;
		};
		uint8_t value;
	};
}amed_x86_sib;

typedef struct _amed_x86_prefix_rex
{
	union
	{
		struct
		{
			bool b : 1; //!< Extension of the ModR/M r/m field, SIB base field, or Opcode reg field.
			bool x : 1; //!< Extension of the SIB index field.
			bool r : 1; //!< Extension of the ModR/M reg field.
			bool w : 1; //!< Operand size.
			uint8_t code : 4; //!< rex opcode.
		};
		uint8_t value; //!< rex prefix value.
	};
}amed_x86_prefix_rex;

typedef struct _amed_x86_prefix_vex2
{
	union
	{
		uint8_t bytes[2];
		struct
		{
			uint8_t byte0;
			union
			{
				struct
				{
					uint8_t pp : 2;
					bool l : 1;
					uint8_t vvvv : 4;
					bool r : 1;
				};
				uint8_t byte1;
			};
		};
	};
}amed_x86_prefix_vex2;

typedef struct _amed_x86_prefix_vex3
{
	union
	{
		uint8_t bytes[3];
		struct
		{
			uint8_t byte0;
			union
			{
				struct
				{
					uint8_t mmmmm : 5;
					bool b : 1;
					bool x : 1;
					bool r : 1;
				};
				uint8_t byte1;
			};
			union
			{
				struct
				{
					uint8_t pp : 2;
					bool l : 1;
					uint8_t vvvv : 4;
					bool w : 1;
				};
				uint8_t byte2;
			};
		};
	};
}amed_x86_prefix_vex3;

typedef struct _amed_x86_prefix_evex
{
	union
	{
		uint8_t bytes[4];
		struct
		{
			uint8_t byte0;
			union
			{
				struct
				{
					uint8_t mm : 2;        //!< EVEX.mm field.
					uint8_t reserved0 : 2; //!< must be zero.
					bool rp : 1;           //!< EVEX.R' field.
					bool b : 1;            //!< EVEX.B field.
					bool x : 1;            //!< EVEX.X field.
					bool r : 1;            //!< EVEX.R field.
				};
				uint8_t byte1;
			};
			union
			{
				struct
				{
					uint8_t pp : 2;     //!< EVEX.pp field.
					bool reserved1 : 1; //!< must be set.
					uint8_t vvvv : 4;   //!< EVEX.vvvv field.
					bool w : 1;         //!< EVEX.W field.

				};
				uint8_t byte2;
			};
			union
			{
				struct
				{
					uint8_t aaa : 3; //!< EVEX.aaa field.
					bool vp : 1;     //!< EVEX.V' field.
					bool bp : 1;     //!< EVEX.b field.
					uint8_t ll : 2;  //!< EVEX.LL field.
					bool z : 1;      //!< EVEX.z field.

				};
				uint8_t byte3;
			};
		};
	};
}amed_x86_prefix_evex;

typedef struct _amed_x86_prefix_mvex
{
	union
	{
		uint8_t bytes[4];
		struct
		{
			uint8_t byte0;
			union
			{
				struct
				{
					uint8_t mmmm : 4;   //!< MVEX.mm field.
					bool rp : 1;        //!< MVEX.R' field.
					bool b : 1;         //!< MVEX.B field.
					bool x : 1;         //!< MVEX.X field.
					bool r : 1;         //!< MVEX.R field.
				};
				uint8_t byte1;
			};
			union
			{
				struct
				{
					uint8_t pp : 2;      //!< MVEX.pp field.
					bool reserved0 : 1;  //!< must be zero.
					uint8_t vvvv : 4;    //!< MVEX.vvvv field.
					bool w : 1;          //!< MVEX.W field.
				};
				uint8_t byte2;
			};
			union
			{
				struct
				{
					uint8_t aaa : 3; //!< MVEX.kkk/aaa field.
					bool vp : 1;     //!< MVEX.V' field.
					uint8_t sss : 3; //!< MVEX.SSS field.
					bool e : 1;      //!< MVEX.E field.
				};
				uint8_t byte3;
			};
		};
	};
}amed_x86_prefix_mvex;

typedef struct _amed_x86_prefix_xop
{
	union
	{
		uint8_t bytes[2];
		struct
		{
			uint8_t byte0;
			union
			{
				struct
				{
					uint8_t mmmmm : 5;
					bool b : 1;
					bool x : 1;
					bool r : 1;
				};
				uint8_t byte1;
			};
			union
			{
				struct
				{
					uint8_t pp : 2;
					bool l : 1;
					uint8_t vvvv : 4;
					bool w : 1;
				};
				uint8_t byte2;
			};
		};
	};
}amed_x86_prefix_xop;

typedef enum _amed_x86_bytecode_type
{
	AMED_X86_BYTECODE_TYPE_NONE,
	AMED_X86_BYTECODE_TYPE_OPCODE,
	AMED_X86_BYTECODE_TYPE_MAP,
	AMED_X86_BYTECODE_TYPE_MODRM,
	AMED_X86_BYTECODE_TYPE_SIB,
	AMED_X86_BYTECODE_TYPE_DISP,
	AMED_X86_BYTECODE_TYPE_ABS_SEG,
	AMED_X86_BYTECODE_TYPE_IMM,
	AMED_X86_BYTECODE_TYPE_PREFIX,
	AMED_X86_BYTECODE_TYPE_REX,
	AMED_X86_BYTECODE_TYPE_XOP,
	AMED_X86_BYTECODE_TYPE_VEX2,
	AMED_X86_BYTECODE_TYPE_VEX3,
	AMED_X86_BYTECODE_TYPE_EVEX,
	AMED_X86_BYTECODE_TYPE_MVEX,
}amed_x86_bytecode_type;

typedef struct _amed_x86_bytecode
{
	uint8_t type;   //!< bytecode type.
	uint8_t length; //!< bytecode length in bytes.
	union
	{
		amed_x86_prefix_rex rex;
		amed_x86_prefix_evex evex;
		amed_x86_prefix_mvex mvex;
		amed_x86_prefix_xop xop;
		amed_x86_prefix_vex2 vex2;
		amed_x86_prefix_vex3 vex3;
		amed_x86_modrm modrm;
		amed_x86_sib sib;
		uint8_t byte;
		uint16_t word;
		uint32_t dword;
		uint64_t qword;
		uint8_t bytes[8];
	};
}amed_x86_bytecode;

#define AMED_X86_MAX_BYTECODE_COUNT 15

typedef enum _amed_x86_prefix_functionality
{
	AMED_X86_PREFIX_FUNCTIONALITY_NONE,
	AMED_X86_PREFIX_FUNCTIONALITY_REP,
	AMED_X86_PREFIX_FUNCTIONALITY_REPZ,
	AMED_X86_PREFIX_FUNCTIONALITY_REPNZ,
	AMED_X86_PREFIX_FUNCTIONALITY_XACQUIRE,
	AMED_X86_PREFIX_FUNCTIONALITY_XRELEASE,
	AMED_X86_PREFIX_FUNCTIONALITY_BND,
}amed_x86_prefix_functionality;

typedef struct _amed_x86_specific
{
	amed_x86_bytecode bytecodes[AMED_X86_MAX_BYTECODE_COUNT];
	uint8_t bytecode_count;
	amed_x86_iflags iflags;
	amed_x86_prefix_functionality prefix_functionality;
}amed_x86_specific;

/* ========================================================================================= */

typedef struct _amed_formatter
{
	bool use_tab_after_mnem : 1;
	bool use_tab_between_arguments : 1;
	bool lower_case : 1;
}amed_formatter;

typedef enum _amed_rounding_type
{
	AMED_ROUNDING_TYPE_NONE,    //!< No rounding.
	AMED_ROUNDING_TYPE_NEAREST, //!< Round to nearest(even).
	AMED_ROUNDING_TYPE_DOWN,    //!< Round down (toward -∞).
	AMED_ROUNDING_TYPE_UP,      //!< Round up (toward +∞)
	AMED_ROUNDING_TYPE_ZERO,    //!< Round toward zero(Truncate).
}amed_rounding_type;

typedef enum _amed_machine_mode
{
	AMED_MACHINE_MODE_NONE,
	AMED_MACHINE_MODE_16,
	AMED_MACHINE_MODE_64,
	AMED_MACHINE_MODE_32,
	AMED_MACHINE_MODE_THUMB,
}amed_machine_mode;

typedef enum _amed_argument_type
{
	AMED_ARGUMENT_TYPE_NONE,
	AMED_ARGUMENT_TYPE_REGISTER,
	AMED_ARGUMENT_TYPE_SYSREG_ENCODING,
	AMED_ARGUMENT_TYPE_MEMORY,
	AMED_ARGUMENT_TYPE_ADDRESS,
	AMED_ARGUMENT_TYPE_PTR,
	AMED_ARGUMENT_TYPE_IMMEDIATE,
	AMED_ARGUMENT_TYPE_LABEL,
	AMED_ARGUMENT_TYPE_LIST,
	AMED_ARGUMENT_TYPE_ENDIAN,
	AMED_ARGUMENT_TYPE_AIF,
	AMED_ARGUMENT_TYPE_CONDITION,
	AMED_ARGUMENT_TYPE_CSPACE,
	AMED_ARGUMENT_TYPE_PSPACE,
	AMED_ARGUMENT_TYPE_BARRIER,
	AMED_ARGUMENT_TYPE_PATTERN,
	AMED_ARGUMENT_TYPE_AT_OP,
	AMED_ARGUMENT_TYPE_DC_OP,
	AMED_ARGUMENT_TYPE_IC_OP,
	AMED_ARGUMENT_TYPE_TLBI_OP,
	AMED_ARGUMENT_TYPE_PRF_OP,
	AMED_ARGUMENT_TYPE_SYNC_OP,
	AMED_ARGUMENT_TYPE_CTX_OP,
	AMED_ARGUMENT_TYPE_BTI_OP,
	AMED_ARGUMENT_TYPE_PSTATEFIELD,
	AMED_ARGUMENT_TYPE_SAE,
	AMED_ARGUMENT_TYPE_EVH,
	AMED_ARGUMENT_TYPE_ROUNDING,
} amed_argument_type;

typedef struct _amed_immediate_value
{
	union
	{
		/*
			basically all immediates have a datatype other than ix.
			so we use [i8,i16,i32,i64] only when there is no information about the immediate.
			in that case, printer must print them in hex.
		*/

		/* as byte. */
		__int8          i8;
		unsigned __int8 u8;
		signed   __int8 s8;

		/* as short. */
		short int i16;
		unsigned short int u16;
		signed short int s16;

		/* as int32 . */
		int i32;
		unsigned int u32;
		signed int s32;

		/* as int64 */
		long long int i64;
		unsigned long long int u64;
		signed long long int s64;

		/* as floating-point */
		float f32;
		double f64;
	};
}amed_immediate_value;

typedef struct _amed_argument_shifter
{
	uint8_t type;
	union
	{
		struct
		{
			bool is_visible : 1;
			bool has_amount : 1;
			bool has_register : 1;
		};
		uint8_t attributes;
	};
	union
	{
		uint16_t amount;
		uint16_t reg;
	};
}amed_argument_shifter;

typedef struct _amed_argument_register
{
	uint16_t value; //!< register value.
	union
	{
		/*! for some mvex instruction. */
		uint8_t selectors[4];
		/*! for aarch32|aarch64 instruction. */
		uint32_t index;
	};
} amed_argument_register;

typedef struct _amed_argument_immediate
{
	uint8_t datatype;  //!< immediate datatype.
	amed_immediate_value value;
}amed_argument_immediate;

typedef struct _amed_argument_list
{
	uint16_t registers[32]; //!< list of registers.
	uint8_t count;          //!< register count.
	uint8_t index;          //!< register index. valid only if operand.has_index=true.
}amed_argument_list;

typedef struct _amed_argument_memory
{
	union
	{
		uint8_t vdatatype;          //!< virtual datatype.
		uint8_t post_load_datatype; //!< the virtual datatype after  a load-op.
		uint8_t pre_store_datatype; //!< the virtual datatype before a store-op.
	};

	struct
	{
		uint8_t from;
		uint8_t to;
	}broadcasting;

	uint16_t address_size;
	uint16_t alignement;              //!< memory alignement in bits.
	uint16_t segment;                 //!< segment register. valid only for x86.
	uint16_t base;                    //!< base register.
	uint16_t regoff;                  //!< register offset.
	amed_argument_immediate  immoff;  //!< immediate offset.
}amed_argument_memory;


/* aarch(32|64).system_register */

typedef struct _amed_aarch64_sysreg_encoding
{
	uint8_t op0, op1, op2;
	uint8_t cn, cm;
}amed_aarch64_sysreg_encoding;

/* aarch32.iflags (a,i,f) */
typedef struct _amed_aarch32_aif
{
	union
	{
		struct
		{
			bool f : 1; //!< iflags.f field.
			bool i : 1; //!< iflags.i field.
			bool a : 1; //!< iflags.a field.
		};
		bool not_empty;
		uint8_t value;
	};
}_amed_aarch32_aif;

typedef struct _amed_aarch64_argument
{
	union 
	{
		amed_aarch64_sysreg_encoding sysreg_encoding;
	};
}amed_aarch64_argument;

typedef struct _amed_aarch32_argument
{
	union
	{
		_amed_aarch32_aif aif;
	};
}amed_aarch32_argument;

typedef struct _amed_x86_ptr
{
	uint16_t segment;
	amed_argument_immediate offset;
}amed_x86_ptr;


typedef struct _amed_x86_argument
{
	union
	{
		amed_x86_ptr ptr;
	};
}amed_x86_argument;

typedef struct _amed_argument
{
	uint8_t type;                  //!< argument type.
	uint8_t datatype;              //!< argument datatype.
	uint8_t number_of_elements;    //!< number of element for reg/mem/list.
	uint16_t size;                 //!< argument size in bits.
	union
	{
		struct
		{
			bool is_suppressed : 1;       //!< if true, printer should ignore the argument.
			bool is_vector : 1;           //!< true if operand is a vector: use number_of_elements instead.
			bool is_representable : 1;    //!< if true, printer should choose an enum-string rather than immediate.
			bool read : 1;                //!< instruction reads  the operand.
			bool write : 1;               //!< instruction writes the operand.
			bool conditional_reading : 1; //!< instruction reads  the operand conditionally.
			bool conditional_writing : 1; //!< instruction writes the operand conditionally.
			bool has_shifter : 1;         //!< shifter present/absent.
			bool write_back : 1;          //!< instruction writes-back the operand.
			/* registers :*/
			bool zeroing : 1;         //!< instruction clears the destination element if its not in the predicate pattern.
			bool merging : 1;         //!< instruction merges the source with the destination element if its not in the predicate pattern.
			bool has_index : 1;       //!< register/list has an index to choose an element.
			/* memory : */
			bool is_adding : 1;       //!< only for aarch32: true if regoff/immoff is added to the base.
			bool is_post_indexed : 1; //!< if true, addressing-mode=post-indexed : the address generated later replaces the base register.
			bool is_pre_indexed : 1;  //!< if true, addressing-mode=pre-indexed  : the address generated is used immediately.
			
		};
		uint32_t attributes;
	};

	union 
	{
		struct
		{
			bool print_datatype : 1;     //!< printer shoud print datatype.
			bool print_shifter : 1;      //!< printer shoud print shifter.
			bool print_index : 1;        //!< printer shoud print register-index.
			bool print_segment : 1;      //!< printer shoud print memory-segment.
			bool print_broadcasting : 1; //!< printer shoud print memory-broadcasting.
			bool print_size : 1;         //!< printer shoud print memory-size.
			bool print_amount_as_vl : 1; //!< for portability reason, printer shoud print amount as vl.
		};
		uint16_t attributes;
	}printer;

	union
	{
		amed_argument_list list;
		amed_argument_memory mem;
		amed_argument_register reg;
		amed_immediate_value imm;
		amed_aarch64_argument aarch64;
		amed_aarch32_argument aarch32;
		amed_x86_argument x86;
		struct
		{
			amed_immediate_value reserved;
			uint32_t token; //!< enum name.
		};
	};

	amed_argument_shifter shifter; //!< shifter for register/immediate/immediate-offset/register-offset.
} amed_argument;

typedef struct _amed_aarch32_specific
{
	uint8_t condition;          //!< conditional execution for the instruction.
	amed_aarch32_pstate pstate; //!< pstate flags.
	uint8_t it_op;              //!< it op: TTT, TT, TEE,...
	uint8_t it_insn_count;      //!< it instruction count.
	struct 
	{
		union
		{
			bool show_qualifier : 1; //!< if true, printer must show instruction qualifier.
		};
		uint16_t attributes;
	};
}amed_aarch32_specific;

typedef struct _amed_aarch64_specific
{
	uint8_t condition;          //!< conditional execution for the instruction. 
	amed_aarch64_pstate pstate; //!< pstate flags.
}amed_aarch64_specific;

/* shared stuff between aarch32/aarch64 
   this struct fall on amed_aarch32_specific/amed_aarch64_specific:
   instead of writing if(insn.(aarch32|aach64).pstate.n.blabla), you write:
   if(insn.arm.nzcv.n.blabla).

   !!!!!!!!!!!!!!!!!!!! keep sync with amed_aarch32_specific/amed_aarch64_specific !!!!!!!!!!!!!!!!!!!!
*/
typedef struct _amed_arm_specific
{
	uint8_t condition;          //!< conditional execution for the instruction. 
	struct 
	{
		amed_iflag n;
		amed_iflag z;
		amed_iflag c;
		amed_iflag v;
	} nzcv;   //!< pstate flags.
}amed_arm_specific;


typedef struct _amed_insn 
{
	uint16_t iform;    //!< instruction form id.
	uint16_t mnemonic; //!< instruction mnemonic.
	uint16_t page;     //!< instruction doc-page id.
	uint16_t iclass;   //!< instruction doc-iclass id.
	uint16_t cclass;   //!< instruction doc-cclass id.
	uint16_t encoding; //!< instruction doc-encoding id.
	uint8_t arch_variant;  //!< architecture variant.
	uint8_t length;        //!< instruction length in bytes.

	union
	{
		struct 
		{
			bool is_undefined : 1;     //!< instruction is undefined.
			bool is_deprecated : 1;    //!< instruction is deprecated and should not be used anymore.
			/*!
				@brief
			     if an instruction is unpredictable, it means that it may:
				 - be undefined.
				 - executes as NOP.
				 - executes partially and ignoring some functionality.
			*/
			bool is_unpredictable : 1; 
			/*! 
			     @brief an ugly instruction means that there is something wrong about the instruction 
			     but its not strong enough to mark the instruction as unpredictable or undefined.
				 e.g:
				 - shifting with invalid range.
				 - using more than one segment override prefix.
				 - ...
			*/

			bool is_ugly : 1; 
			bool is_alias : 1;         //!< instruction is an alias to another instruction.
			bool is_vector : 1;        //!< instruction operates on a vector register.
			bool is_predicated : 1;    //!< instruction uses the governing predicate register to operate.
			bool is_atomic : 1;        //!< instruction load/store atomically.
			bool is_acquiring : 1;     //!< instruction loads  with acquire semantic.
			bool is_releasing : 1;     //!< instruction stores with release semantic.
			bool is_suppressing_all_exceptions : 1; // instruction suppresses all fp-exceptions.
			/*!
				@brief
				A constructive instruction is an instruction where the destination register is defined independently
				of the source registers. Therefore, the original contents of the source registers are not modified by
				the execution of the instruction.
			*/
			bool is_constructive : 1;
			/*!
				@bried
				A destructive instruction is an instruction where one of the source registers also acts as the
				destination register. Therefore, the contents of the source register, when the instruction begins
				execution, are replaced by the result of the instruction when the instruction completes execution.
			*/
			bool is_destructive : 1;
			bool may_branch : 1;     //!< instruction may branch.
			bool may_load : 1;       //!< instruction may read from memory.
			bool may_store : 1;      //!< instruction may write to memory.
			bool is_running_conditionally : 1; //!< instruction runs conditionally.
		};
		uint32_t attributes;
	};
	uint8_t categories[4];          //!< instruction categories. see amed_category.
	int8_t argument_count;          //!< number of operands.
	amed_argument arguments[8];     //!< instruction operands.

	union
	{
		uint8_t exceptions[4];        //!< list of exceptions that may be thrown by the execution of the instruction. 
		uint32_t  may_raise_exception; //!< instruction may raise exception.
	};
	union
	{
		uint8_t extensions[4];   //!< list of extensions that are required to execute the instruction.
		uint32_t has_extensions;
	};
	union
	{
		amed_x86_specific x86;         //!< properties specific for x86.
		amed_arm_specific arm;         //!< an easy hack to access shared stuff between aarch32/aarch64.
		amed_aarch32_specific aarch32; //!< properties specific for aarch32.
		amed_aarch64_specific aarch64; //!< properties specific for aarch64.
	};
}amed_insn;

typedef struct _amed_it_block
{
	uint8_t count; //!< number of instructions inside the it-block.
	uint8_t index; //!< current index.
	union 
	{
		struct
		{
			bool is_in : 1;  //!<  instruction inside it-block.
			bool is_out : 1; //!< instruction outside it-block. 
		};
		uint16_t attributes;
	};
	uint8_t conditions[4]; //!< conditional execution for all instruction in it-block.
}amed_it_block;

typedef struct _amed_context
{
	amed_architecture architecture;
	amed_machine_mode machine_mode;  //!< machine mode.
	uint8_t* address;                //!< address at at which amed will decode. 
	uint32_t features;             //!< machine features.
	int32_t length;                //!< length of bytes amed can read.
	uint16_t vector_size;          //!< vector length for SVE in bits.
	union 
	{
		struct
		{
			bool decode_aliases : 1;
		};
		uint32_t attributes;
	};
	union 
	{
		struct
		{
			amed_it_block itblock;
		}aarch32;
	};
}amed_context;

#endif