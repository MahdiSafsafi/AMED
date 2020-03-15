
# Features:
- Supports popular architectures: AArch32, AArch64 and X86.
- For each supported architecture, AMED supports all its extensions: 
  - x86: fpu, mmx, sse, fma, avx, avx512, knc(xeon)...
  - aarch32: all ARMv8+ extensions.
  - aarch64: all ARMv8+ extensions and SVE.
- Extremly fast : instead of table-driven decoding, AMED uses code-driven decoding and works at the bit level. This makes AMED:
  - decodes instructions much and much faster than any available decoder.
  - scales perfectly with compiler optimization/cpu performance.
- Very lightweight : With the encoding/templates(variants) representation, AMED is able to represent a very large amount of data without  consuming much space.
- For each supported architecture, AMED provides a bunch of information about the instruction:
  - memory/register access.
  - memory size (even for aarch32/aarch64).
  - affected flags.
  - ...
- For all supported architectures, AMED provides target-independent information for many fields (this makes multi-architecture decoding/analyze very easy).
```C
if(insn.is_running_conditionally|insn.is_undefined|insn.is_unpredictable|insn.is_deprecated){
  // skip, we don't optimize them.
  continue;
}
if(insn.may_load || insn.may_store)
{
  /* load/store instructions */
  if(insn.is_atomic)
  {
    // do-something
  }
}else if(insn.may_branch)
{
  /* branch instructions */ 
}
```
- Designed for high performance : AMED is not only fast, infact, it allows tools that correctly use AMED to significantly improve  analyze-performance:
```C
/*
  say, you want to get memory access (read/write) for each decoded instruction.
  using traditional decoder, requires, for each decoded instruction, to iterate through all its arguments and spot the memory operand.
  this can lead to a performance penalty since not all instructions use memory !
  with AMED, you simply check if the instruction is a load/store instruction and then get the memory operand:
*/
  if(insn.may_load || insn.may_store){
    // get memory access.
  }
```
- For each decoded instruction, AMED provides tags for the documentation (PAGE, CCLASS, ENCODING):
  - PAGE: the name of doc-page where the instruction was listed.
  - CCLASS/ENCODING: to select an encoding from the page.
  This is very useful to handle a specific behaviour listed in the documentation(if there are many forms of the instruction).
- Full doxygen documentation for the instructions: for each instruction, there is an html page that describes the instruction. Note that AMD, and many of XEON instructions are not supported (do not have an html page). 
- AMED is thread-safe.
- AMED is structured and easy to use: instead of representing information like it appears in the syntax, AMED decodes it to a useful struct. e.g:
```C
// many available decoder, decodes broadcasting as an enum:
swith(argument.broadcasting)
{
  case BCST_1TO8:
  // handle BCST_1TO8.
  break;
  case BCST_1TO16:
    // handle BCST_1TO16.
  break;
  //... all other case.
}
// AMED version:
for(int i=argument.broadcasting.from; i< argument.broadcasting.to; i++)
{
  // do-something.
} 
```
- AMED also supports instruction-aliases, and decodes them when certain conditions are met. You can enable/disable this feature using context.decode_aliases field:
e.g:
```
aarch64:
'AT <at_op>, <Xt>' is an alias to 'SYS #<op1>, C7, <Cm>, #<op2>, <Xt>' when 'SysOp(op1,0b0111,CRm,op2) == Sys_AT'
AMED will decode the instruction as AT only if (context.decode_aliases is true and the expression 'SysOp(op1,0b0111,CRm,op2) == Sys_AT' evaluates to true). otherwise it decodes it as SYS.
```

# Example:
```C
#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "amed.h"
#include "amed/decoder.h"
#include "amed/printer.h"

/* aarch32-mode-arm */
static const uint8_t aarch32_opcodes[] =
{
	0x03,0x20,0x32,0x00, // eorseq r2, r2, r3
	0x06,0x20,0xd2,0x03, // bicseq r2, r2, #6
	0x01,0x00,0x00,0xea, // b   #4
	0xb0,0x60,0x28,0xe0, // strht r6, [r8], -r0
	0x00,0x00,0x00,0xfb, // blx #2
	0x6e,0xf0,0xa0,0xe1, // rrx pc, lr
};

/* aarch32-mode-thumb */
static const uint8_t aarch32_thumb_opcodes[] =
{
	/* T16: */
	0x74,0x41, // adcs	r4, r6
	0xff,0xaa, // add	r2, sp, #1020
	0x6b,0x15, // asrs	r3, r5, #21 
	0x61,0xb6, // cpsie f  
	0xff,0xcb, // ldm	r3, {r0, r1, r2, r3, r4, r5, r6, r7}
	/* T32: */
	0xd6,0xe8,0x8f,0x5f,  // ldab r5, [r6]
	0x41,0xeb,0x33,0x10,  // adc.w r0, r1, r3, ror #4
	0xbf,0xf3,0x5a,0x8f,  // dmb	ishst   
	0xbd,0xe8,0xf0,0x8f,  // pop.w	{r4, r5, r6, r7, r8, r9, r10, r11, pc}
};

/* aarch64 */
static const uint8_t aarch64_opcodes[] =
{
	0x00,0xb8,0x20,0x4e, // abs.16b v0, v0
	0x20,0x00,0xa0,0xd2, // mov x0, #65536
	0x40,0x00,0x80,0x12, // mov w0, #-3
	0x0f,0x00,0x00,0x54, // b.nv #0
	0xd5,0xe6,0x01,0xf2, // ands x21, x22, #0x9999999999999999
	0x01,0x79,0x08,0xd5, // at s1e1rp, x1
	0xa7,0xf0,0x9f,0x38, // ldursb x7, [x5, #-1]
	// sve:
	0x25,0x6e,0x30,0xe5, // st2w    { z5.s, z6.s }, p3, [x17, x16, lsl #2]
	0x20,0x20,0x9f,0xe5, // stnt1d  { z0.d }, p0, [z1.d]
	0xff,0x17,0x28,0x45, // shrnt   z31.b, z31.h, #8
	0x55,0x55,0x55,0xc4, // ld1b    { z21.d }, p5 / z,[x10, z21.d, sxtw]
	0xff,0xbf,0x2f,0xa4, // ld1b    { z31.h }, p7/z, [sp, # - 1, mul vl]
	0xc4,0x3c,0xd0,0x04, // movprfx	z4.d, p7 / z, z6.d
	0xa0,0xeb,0x80,0x05, // and     z0.s, z0.s, #0xfffffff9
	0xa0,0xef,0x83,0x05, // and     z0.d, z0.d, #0xfffffffffffffff9
	0xb7,0x0d,0x00,0x04, // add     z23.b, p3/m, z23.b, z13.b
	0x00,0xe0,0x30,0x04, // incb    x0, all, mul #16
	0x00,0xa0,0x68,0x05, // (mov|cpy)  z0.h, p0/m, w0
};

/* x86-mode64 */
static const uint8_t x86_opcodes_long[] =
{
	0x49,0x8d,0x04,0xc9, // lea rax, [r9+rcx*8]
	0x48,0x8b,0x47,0x08, // mov rax, qword ptr ds : [rdi + 0x8]
	0xf0,0xff,0x08,      // lock dec dword[rax]
	0x62,0x61,0x95,0x50,0x58,0xb2,0xf8,0xfb,0xff,0xff,      // vaddpd zmm30, zmm29, qword[rdx - 0x408]{1to8}
	0x62,0xf1,0x8d,0x50,0xc2,0xaa,0xf8,0xfb,0xff,0xff,0x14, // vcmppd k5, zmm30, qword [rdx-0x408]{1to8}, neq_us
};

void decode(amed_context* pcontext)
{
	amed_formatter formatter = { 0 };
	formatter.lower_case = true;

	amed_insn insn;
	char* buffer = (char*)malloc(256);
	while (amed_decode_insn(pcontext, &insn))
	{
		pcontext->address += insn.length;
		pcontext->length -= insn.length;
		/* print disasm */
		puts("-----------------------------");
		amed_print_insn(buffer, pcontext, &insn, &formatter);
		printf("%s\n", buffer);

		/* analyse: */

		if (insn.is_undefined)
		{
			/* undefined instruction */
			puts("instruction is undefined.");
			continue;
		}
		if (insn.is_deprecated)
		{
			puts("instruction is deprecated.");
		}
		if (insn.is_predicated)
		{
			puts("instruction operates on data conditionally.");
		}
		/* load/store instruction */
		if (insn.may_load || insn.may_store)
		{
			if (insn.is_atomic) puts("instruction operates atomically.");
			if (insn.is_acquiring) puts("instruction loads with acquire semantic.");
			if (insn.is_releasing) puts("instruction stores with release semantic.");

			for (int i = 0; i < insn.argument_count; i++)
			{
				amed_argument* pargument = &insn.arguments[i];
				if (AMED_ARGUMENT_TYPE_MEMORY == pargument->type)
				{
					if (pargument->read)  printf("instruction loads %d bits from memory.\n", pargument->size);
					if (pargument->write) printf("instruction stores %d bits to memory.\n", pargument->size);
					if (pargument->mem.broadcasting.from) printf("instruction broadcast %d element.\n", pargument->mem.broadcasting.to - pargument->mem.broadcasting.from + 1);
				}
			}
		}
		else if (insn.may_branch)
		{
			/* all branch instructions */

			if (insn.is_unpredictable)
			{
				/* unpredictable instruction:
					- may raise exception.
					- may execute as nop.
					- may execute partially and ignoring some functionality.
					- ...
				*/
				printf("instruction is unpredictable and it MAY branch.\n");
				continue;
			}
			else
			{
				if (AMED_CATEGORY_BRANCH == insn.categories[1])
				{
					/* explicit branch:
					   un/conditional branch */
					puts(AMED_CATEGORY_CONDITIONALLY == insn.categories[2] ?
						"instruction branch conditionally." :
						"instruction branch unconditionally."
					);
				}
				else
				{
					puts("interworking branch.");
				}
			}
		}
	}
	free(buffer);
}

int main()
{
	amed_context context = { 0 };

	puts("================================== AARCH32.THUMB ==================================");
	context.architecture = AMED_ARCHITECTURE_AARCH32;

	/* THUMB */
	context.machine_mode = AMED_MACHINE_MODE_THUMB;
	context.length = sizeof(aarch32_thumb_opcodes);
	context.address = (uint8_t*)&aarch32_thumb_opcodes[0];
	decode(&context);

	puts("================================== AARCH32.ARM ==================================");
	/* ARM */
	context.machine_mode = AMED_MACHINE_MODE_32;
	context.length = sizeof(aarch32_opcodes);
	context.address = (uint8_t*)&aarch32_opcodes[0];
	decode(&context);

	puts("================================== AARCH64 ==================================");
	context.architecture = AMED_ARCHITECTURE_AARCH64;
	context.machine_mode = AMED_MACHINE_MODE_64;
	context.vector_size = 512;
	context.length = sizeof(aarch64_opcodes);
	context.address = (uint8_t*)&aarch64_opcodes[0];
	decode(&context);

	puts("================================== X86 ==================================");
	context.architecture = AMED_ARCHITECTURE_X86;
	context.machine_mode = AMED_MACHINE_MODE_64;
	context.length = sizeof(x86_opcodes_long);
	context.address = (uint8_t*)&x86_opcodes_long[0];
	decode(&context);

	return 0;
}
```

# Build:
```sh
mkdir build
cd build
cmake ..
```
# Generating Documentation:
```sh
doxygen doxyfile
```

# Status:
AMED is in a BETA phase ! the hard thing is done ! but still there is a lot to do :
- improving documentation.
- write more examples.
- adding common wrapper for all functions: e.g: add amed_page_to_string function that covers amed_x86_page_to_string, amed_aarch64_page_to_string, amed_aarch32_page_to_string functions.
- ...

# Database:
We use our database called [opcodesDB](https://github.com/MahdiSafsafi/opcodesDB). This is not included here, and not required for build. You may found it useful.

# Credits:
Special thanks to:
- Binutils: Each time I found my self confused about how to decode a particular iclass for the aarch64. I refer to Binutils.  
- Capstone: I inspired and improved many things about the architecture/design of the AMED core.
- eyapp/yapp: this helped me writing the c-expression parser much easy. 
- felixcloutier.com: for providing pretty html documentation for x86 target.
- JSON::XS: the fastest JSON serialising/deserialising for Perl. this save me a lot of time!
- LLVM: for providing tests.
- Sandpile.org: for providing technical x86 resources information.
- XED: I merged thier x86-database with mine.
- Zydis: I compared my x86-database with thier. This allowed to improve many definitions.
