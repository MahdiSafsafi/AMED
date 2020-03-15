
/* =============================== AARCH64 example ===============================
   simple example showing how to spot all instructions
   that may modifie W3|X3 register. */

#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "amed.h"
#include "amed/aarch64.h"
#include "amed/decoder.h"
#include "amed/printer.h"

static const uint8_t opcodes[] =
{
	0x7f,0x60,0x2d,0xab,  // cmn      x3,  x13, uxtx      
    0xa3,0xe0,0x29,0x8b,  // add      x3,  x5,  x9, sxtx   
    0x5f,0xc0,0x23,0xcb,  // sub      sp,  x2,  w3, sxtw   
    0xa3,0xe0,0x29,0xcb,  // sub      x3,  x5,  x9, sxtx   
    0xa3,0xfc,0x59,0x9e,  // fcvtzu   x3,  d5,  #1         
    0xe3,0x03,0x20,0x1e,  // fcvtns   w3,  s31            
    0x7f,0xe0,0x25,0x6b,  // cmp      w3,  w5,  sxtx     
	0x61,0x10,0x07,0x9b,  // madd     x1,  x3,  x7,  x4        
    0x7f,0x00,0x05,0x8b,  // add      xzr, x3,  x5           
    0x20,0xd1,0x5f,0xba,  // ccmn     x9,  xzr, #0,  le        
    0x6f,0xc0,0x40,0xba,  // ccmn     x3,  x0,  #15, gt        
    0xe7,0x13,0x45,0xba,  // ccmn     xzr, x5,  #7,  ne        
};

int main()
{
	amed_insn insn = { 0 };
	amed_context context = { 0 };
	amed_formatter formatter = { 0 };
	char* buffer = (char*)malloc(256);
	printf("instructions that modifie W3|X3 register are:\n");
	context.architecture = AMED_ARCHITECTURE_AARCH64;
	context.machine_mode = AMED_MACHINE_MODE_64;
	context.address = (char*)&opcodes[0];
	context.length = sizeof(opcodes);

	while (amed_decode_insn(&context, &insn))
	{
		
		context.address += insn.length;
		context.length -= insn.length;
		if(insn.is_constructive || insn.is_destructive)
		{
			bool found = false;
			for(int i=0; i< insn.argument_count; i++)
			{
				amed_argument* pargument = &insn.arguments[i];
				if (AMED_ARGUMENT_TYPE_REGISTER == pargument->type && pargument->write)
				{
					if (AMED_AARCH64_REGISTER_W3 == pargument->reg.value || AMED_AARCH64_REGISTER_X3 == pargument->reg.value)
					{
						found = true;
						break;
					}
				}
			}
			if (found)
			{
				amed_print_insn(buffer, &context, &insn, &formatter);
				printf("%s\n", buffer);
			}
		}
	}
	free(buffer);

	return 0;
}