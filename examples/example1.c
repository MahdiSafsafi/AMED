

/*===================================== ANY =====================================
 simple example showing how to use different architectures with same code-base */
 
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
	/* SVE: */
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
	/* initialize formatter */
	amed_formatter formatter = { 0 };
	formatter.lower_case = true;

	amed_insn insn;
	
	/* allocate buffer for formatter */
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
					   un|conditional branch */
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
	/* initialize context */
	amed_context context = { 0 };

	puts("================================== AARCH32.THUMB ==================================");
	context.architecture = AMED_ARCHITECTURE_AARCH32;
	context.machine_mode = AMED_MACHINE_MODE_THUMB;
	context.length = sizeof(aarch32_thumb_opcodes);
	context.address = (uint8_t*)&aarch32_thumb_opcodes[0];
	decode(&context);

	puts("=================================== AARCH32.ARM ===================================");
	context.architecture = AMED_ARCHITECTURE_AARCH32;
	context.machine_mode = AMED_MACHINE_MODE_32;
	context.length = sizeof(aarch32_opcodes);
	context.address = (uint8_t*)&aarch32_opcodes[0];
	decode(&context);

	puts("===================================== AARCH64 =====================================");
	context.architecture = AMED_ARCHITECTURE_AARCH64;
	context.machine_mode = AMED_MACHINE_MODE_64;
	context.vector_size = 512; // SVE register size.
	context.length = sizeof(aarch64_opcodes);
	context.address = (uint8_t*)&aarch64_opcodes[0];
	decode(&context);

	puts("======================================= X86 =======================================");
	context.architecture = AMED_ARCHITECTURE_X86;
	context.machine_mode = AMED_MACHINE_MODE_64;
	context.length = sizeof(x86_opcodes_long);
	context.address = (uint8_t*)&x86_opcodes_long[0];
	decode(&context);

	return 0;
}