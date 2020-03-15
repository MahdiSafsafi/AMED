

/* =============================== AARCH32 example ===============================
   simple example showing how to spot all conditional instructions
   that may modifie nzcv.z flag. */

#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "amed.h"
#include "amed/decoder.h"
#include "amed/printer.h"

/* aarch32-mode-arm */
static const uint8_t opcodes[] =
{
	0xff,0x08,0x77,0xe3,    // cmn	    r7, #16711680
    0x2a,0x01,0x77,0xe3,    // cmn	    r7, #-2147483638
	0x0f,0x14,0xa2,0xe2,    // adc	    r1, r2, #251658240    
	0x0f,0x1c,0xb2,0xe2,    // adcs	    r1, r2, #3840     
	0x0f,0x1c,0xb2,0x02,    // adcseq	r1, r2, #3840     
	0x0f,0x1c,0xa2,0x02,    // adceq	r1, r2, #3840     
	0xff,0x78,0x98,0xe2,    // adds	    r7, r8, #16711680 
	0x02,0x21,0x03,0xe2,    // and      r2, r3, #-2147483648 
	0x02,0xd1,0x0d,0xe2,    // and      sp, sp, #-2147483648 
	0x02,0xf1,0x0f,0xe2,    // and      pc, pc, #-2147483648 
	0x9f,0x3f,0xd4,0xe1,    // ldrexb	r3, [r4]        
    0x9f,0x2f,0xf5,0xe1,    // ldrexh	r2, [r5]        
    0x9f,0x1f,0x97,0xe1,    // ldrex	r1, [r7]        
	0x03,0x20,0xb0,0x01,    // movseq	r2, r3
	0x9f,0x6f,0xb8,0xe1,    // ldrexd	r6, r7, [r8]    
    0xb0,0x80,0x7b,0x80,    // ldrhthi  r8, [r11], #-0  
    0xb0,0x80,0xfb,0x80,    // ldrhthi  r8, [r11], #0   
	0x96,0x07,0x15,0xd0,	// mulsle	r5, r6, r7
    0x13,0xf4,0x02,0xe7,    // smuad	r2, r3, r4          
    0x32,0xf1,0x03,0xe7,    // smuadx	r3, r2, r1          
    0x13,0xf4,0x02,0xb7,    // smuadlt	r2, r3, r4      
    0x32,0xf1,0x03,0xa7,    // smuadxge r3, r2, r1  
	0x96,0x07,0x05,0xc0,	// mulgt	r5, r6, r7
	
	/* neon */
	0xb1,0x00,0x50,0xf3,    // vqadd.u16	d16, d16, d17
    0xb1,0x00,0x70,0xf3,    // vqadd.u64	d16, d16, d17
    0x4a,0xc8,0x0c,0xf2,    // vadd.i8	    q6, q6, q5   
    0xc6,0x28,0x72,0xf2,    // vadd.i64		q9, q9, q3   
    0x01,0xe1,0x9e,0xf2,    // vaddw.s16	q7, q7, d1   
    0x82,0x01,0xe0,0xf2,    // vaddw.s32	q8, q8, d2   
	/* dot-product: */
	0x12,0x0d,0x21,0xfc,    // vudot.u8  d0, d1, d2      
    0x02,0x0d,0x21,0xfc,    // vsdot.s8  d0, d1, d2      
    0x58,0x0d,0x22,0xfc,    // vudot.u8  q0, q1, q4      
    0x48,0x0d,0x22,0xfc,    // vsdot.s8  q0, q1, q4      
    0x12,0x0d,0x21,0xfe,    // vudot.u8  d0, d1, d2[0]   
    0x22,0x0d,0x21,0xfe,    // vsdot.s8  d0, d1, d2[1]   
    0x54,0x0d,0x22,0xfe,    // vudot.u8  q0, q1, d4[0]   
    0x64,0x0d,0x22,0xfe,    // vsdot.s8  q0, q1, d4[1]   
};

int main()
{
	amed_insn insn = { 0 };
	amed_context context = { 0 };
	amed_formatter formatter = { 0 };
	char* buffer = (char*)malloc(256);
	printf("instructions that modifie nzcv.z flags are:\n");
	context.architecture = AMED_ARCHITECTURE_AARCH32;
	context.machine_mode = AMED_MACHINE_MODE_32;
	context.address = (char*)&opcodes[0];
	context.length = sizeof(opcodes);

	while (amed_decode_insn(&context, &insn))
	{
		amed_print_insn(buffer, &context, &insn, &formatter);

		context.address += insn.length;
		context.length -= insn.length;
		if(insn.is_running_conditionally && (insn.arm.nzcv.z.modified || insn.arm.nzcv.z.conditionally_modified))
		{
			printf("%s\n", buffer);
		}
	}
	free(buffer);

	return 0;
}