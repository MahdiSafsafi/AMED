use strict;
use warnings;

TEST('cmovb eax, ecx', [0x0f,0x42,0xc1     ], 'MODE32');
TEST('cmovb rdx, rax', [0x48,0x0f,0x42,0xd0], 'MODE64');

TEST('cmovl r15d, dword [rax]', [0x44,0x0f,0x4c,0x38], 'MODE64');

