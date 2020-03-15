use strict;
use warnings;

TEST('fcomp st0, qword [ecx]', [0xdc,0x19], 'MODE32');

TEST('fistp dword [ebp+8], st0', [0xdb,0x5d,0x08], 'MODE32');

TEST('fld st0, qword [ecx]', [0xdd,0x01], 'MODE32');

TEST('fstp qword [ecx], st0', [0xdd,0x19], 'MODE32');

