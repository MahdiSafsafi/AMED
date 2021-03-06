use strict;
use warnings;
TEST('vextractps eax, xmm29, 171                    ', [0x62,0x63,0xfd,0x08,0x17,0xe8,0xab                         ], 'MODE64');
TEST('vextractps eax, xmm29, 123                    ', [0x62,0x63,0xfd,0x08,0x17,0xe8,0x7b                         ], 'MODE64');
TEST('vextractps r8d, xmm29, 123                    ', [0x62,0x43,0xfd,0x08,0x17,0xe8,0x7b                         ], 'MODE64');
TEST('vextractps dword [rcx], xmm29, 123            ', [0x62,0x63,0x7d,0x08,0x17,0x29,0x7b                         ], 'MODE64');
TEST('vextractps dword [rax+r14*8+0x123], xmm29, 123', [0x62,0x23,0x7d,0x08,0x17,0xac,0xf0,0x23,0x01,0x00,0x00,0x7b], 'MODE64');
TEST('vextractps dword [rdx+0x1fc], xmm29, 123      ', [0x62,0x63,0x7d,0x08,0x17,0x6a,0x7f,0x7b                    ], 'MODE64');
TEST('vextractps dword [rdx+0x200], xmm29, 123      ', [0x62,0x63,0x7d,0x08,0x17,0xaa,0x00,0x02,0x00,0x00,0x7b     ], 'MODE64');
TEST('vextractps dword [rdx-0x200], xmm29, 123      ', [0x62,0x63,0x7d,0x08,0x17,0x6a,0x80,0x7b                    ], 'MODE64');
TEST('vextractps dword [rdx-0x204], xmm29, 123      ', [0x62,0x63,0x7d,0x08,0x17,0xaa,0xfc,0xfd,0xff,0xff,0x7b     ], 'MODE64');

TEST('vinsertps xmm30, xmm29, xmm28, 171                  ', [0x62,0x03,0x15,0x00,0x21,0xf4,0xab                         ], 'MODE64');
TEST('vinsertps xmm30, xmm29, xmm28, 123                  ', [0x62,0x03,0x15,0x00,0x21,0xf4,0x7b                         ], 'MODE64');
TEST('vinsertps xmm30, xmm29, dword [rcx], 123            ', [0x62,0x63,0x15,0x00,0x21,0x31,0x7b                         ], 'MODE64');
TEST('vinsertps xmm30, xmm29, dword [rax+r14*8+0x123], 123', [0x62,0x23,0x15,0x00,0x21,0xb4,0xf0,0x23,0x01,0x00,0x00,0x7b], 'MODE64');
TEST('vinsertps xmm30, xmm29, dword [rdx+0x1fc], 123      ', [0x62,0x63,0x15,0x00,0x21,0x72,0x7f,0x7b                    ], 'MODE64');
TEST('vinsertps xmm30, xmm29, dword [rdx+0x200], 123      ', [0x62,0x63,0x15,0x00,0x21,0xb2,0x00,0x02,0x00,0x00,0x7b     ], 'MODE64');
TEST('vinsertps xmm30, xmm29, dword [rdx-0x200], 123      ', [0x62,0x63,0x15,0x00,0x21,0x72,0x80,0x7b                    ], 'MODE64');
TEST('vinsertps xmm30, xmm29, dword [rdx-0x204], 123      ', [0x62,0x63,0x15,0x00,0x21,0xb2,0xfc,0xfd,0xff,0xff,0x7b     ], 'MODE64');

TEST('vmovd xmm30, eax                    ', [0x62,0x61,0x7d,0x08,0x6e,0xf0                         ], 'MODE64');
TEST('vmovd xmm30, ebp                    ', [0x62,0x61,0x7d,0x08,0x6e,0xf5                         ], 'MODE64');
TEST('vmovd xmm30, r13d                   ', [0x62,0x41,0x7d,0x08,0x6e,0xf5                         ], 'MODE64');
TEST('vmovd xmm30, dword [rcx]            ', [0x62,0x61,0x7d,0x08,0x6e,0x31                         ], 'MODE64');
TEST('vmovd xmm30, dword [rax+r14*8+0x123]', [0x62,0x21,0x7d,0x08,0x6e,0xb4,0xf0,0x23,0x01,0x00,0x00], 'MODE64');
TEST('vmovd xmm30, dword [rdx+0x1fc]      ', [0x62,0x61,0x7d,0x08,0x6e,0x72,0x7f                    ], 'MODE64');
TEST('vmovd xmm30, dword [rdx+0x200]      ', [0x62,0x61,0x7d,0x08,0x6e,0xb2,0x00,0x02,0x00,0x00     ], 'MODE64');
TEST('vmovd xmm30, dword [rdx-0x200]      ', [0x62,0x61,0x7d,0x08,0x6e,0x72,0x80                    ], 'MODE64');
TEST('vmovd xmm30, dword [rdx-0x204]      ', [0x62,0x61,0x7d,0x08,0x6e,0xb2,0xfc,0xfd,0xff,0xff     ], 'MODE64');
TEST('vmovd dword [rcx], xmm30            ', [0x62,0x61,0x7d,0x08,0x7e,0x31                         ], 'MODE64');
TEST('vmovd dword [rax+r14*8+0x123], xmm30', [0x62,0x21,0x7d,0x08,0x7e,0xb4,0xf0,0x23,0x01,0x00,0x00], 'MODE64');
TEST('vmovd dword [rdx+0x1fc], xmm30      ', [0x62,0x61,0x7d,0x08,0x7e,0x72,0x7f                    ], 'MODE64');
TEST('vmovd dword [rdx+0x200], xmm30      ', [0x62,0x61,0x7d,0x08,0x7e,0xb2,0x00,0x02,0x00,0x00     ], 'MODE64');
TEST('vmovd dword [rdx-0x200], xmm30      ', [0x62,0x61,0x7d,0x08,0x7e,0x72,0x80                    ], 'MODE64');
TEST('vmovd dword [rdx-0x204], xmm30      ', [0x62,0x61,0x7d,0x08,0x7e,0xb2,0xfc,0xfd,0xff,0xff     ], 'MODE64');

TEST('vmovhlps xmm30, xmm29, xmm28', [0x62,0x01,0x14,0x00,0x12,0xf4], 'MODE64');

TEST('vmovhpd xmm29, xmm30, qword [rcx]            ', [0x62,0x61,0x8d,0x00,0x16,0x29                         ], 'MODE64');
TEST('vmovhpd xmm29, xmm30, qword [rax+r14*8+0x123]', [0x62,0x21,0x8d,0x00,0x16,0xac,0xf0,0x23,0x01,0x00,0x00], 'MODE64');
TEST('vmovhpd xmm29, xmm30, qword [rdx+0x3f8]      ', [0x62,0x61,0x8d,0x00,0x16,0x6a,0x7f                    ], 'MODE64');
TEST('vmovhpd xmm29, xmm30, qword [rdx+0x400]      ', [0x62,0x61,0x8d,0x00,0x16,0xaa,0x00,0x04,0x00,0x00     ], 'MODE64');
TEST('vmovhpd xmm29, xmm30, qword [rdx-0x400]      ', [0x62,0x61,0x8d,0x00,0x16,0x6a,0x80                    ], 'MODE64');
TEST('vmovhpd xmm29, xmm30, qword [rdx-0x408]      ', [0x62,0x61,0x8d,0x00,0x16,0xaa,0xf8,0xfb,0xff,0xff     ], 'MODE64');
TEST('vmovhpd qword [rcx], xmm30                   ', [0x62,0x61,0xfd,0x08,0x17,0x31                         ], 'MODE64');
TEST('vmovhpd qword [rax+r14*8+0x123], xmm30       ', [0x62,0x21,0xfd,0x08,0x17,0xb4,0xf0,0x23,0x01,0x00,0x00], 'MODE64');
TEST('vmovhpd qword [rdx+0x3f8], xmm30             ', [0x62,0x61,0xfd,0x08,0x17,0x72,0x7f                    ], 'MODE64');
TEST('vmovhpd qword [rdx+0x400], xmm30             ', [0x62,0x61,0xfd,0x08,0x17,0xb2,0x00,0x04,0x00,0x00     ], 'MODE64');
TEST('vmovhpd qword [rdx-0x400], xmm30             ', [0x62,0x61,0xfd,0x08,0x17,0x72,0x80                    ], 'MODE64');
TEST('vmovhpd qword [rdx-0x408], xmm30             ', [0x62,0x61,0xfd,0x08,0x17,0xb2,0xf8,0xfb,0xff,0xff     ], 'MODE64');

TEST('vmovhps xmm29, xmm30, qword [rcx]            ', [0x62,0x61,0x0c,0x00,0x16,0x29                         ], 'MODE64');
TEST('vmovhps xmm29, xmm30, qword [rax+r14*8+0x123]', [0x62,0x21,0x0c,0x00,0x16,0xac,0xf0,0x23,0x01,0x00,0x00], 'MODE64');
TEST('vmovhps xmm29, xmm30, qword [rdx+0x3f8]      ', [0x62,0x61,0x0c,0x00,0x16,0x6a,0x7f                    ], 'MODE64');
TEST('vmovhps xmm29, xmm30, qword [rdx+0x400]      ', [0x62,0x61,0x0c,0x00,0x16,0xaa,0x00,0x04,0x00,0x00     ], 'MODE64');
TEST('vmovhps xmm29, xmm30, qword [rdx-0x400]      ', [0x62,0x61,0x0c,0x00,0x16,0x6a,0x80                    ], 'MODE64');
TEST('vmovhps xmm29, xmm30, qword [rdx-0x408]      ', [0x62,0x61,0x0c,0x00,0x16,0xaa,0xf8,0xfb,0xff,0xff     ], 'MODE64');
TEST('vmovhps qword [rcx], xmm30                   ', [0x62,0x61,0x7c,0x08,0x17,0x31                         ], 'MODE64');
TEST('vmovhps qword [rax+r14*8+0x123], xmm30       ', [0x62,0x21,0x7c,0x08,0x17,0xb4,0xf0,0x23,0x01,0x00,0x00], 'MODE64');
TEST('vmovhps qword [rdx+0x3f8], xmm30             ', [0x62,0x61,0x7c,0x08,0x17,0x72,0x7f                    ], 'MODE64');
TEST('vmovhps qword [rdx+0x400], xmm30             ', [0x62,0x61,0x7c,0x08,0x17,0xb2,0x00,0x04,0x00,0x00     ], 'MODE64');
TEST('vmovhps qword [rdx-0x400], xmm30             ', [0x62,0x61,0x7c,0x08,0x17,0x72,0x80                    ], 'MODE64');
TEST('vmovhps qword [rdx-0x408], xmm30             ', [0x62,0x61,0x7c,0x08,0x17,0xb2,0xf8,0xfb,0xff,0xff     ], 'MODE64');

TEST('vmovlhps xmm30, xmm29, xmm28', [0x62,0x01,0x14,0x00,0x16,0xf4], 'MODE64');

TEST('vmovlpd xmm29, xmm30, qword [rcx]            ', [0x62,0x61,0x8d,0x00,0x12,0x29                         ], 'MODE64');
TEST('vmovlpd xmm29, xmm30, qword [rax+r14*8+0x123]', [0x62,0x21,0x8d,0x00,0x12,0xac,0xf0,0x23,0x01,0x00,0x00], 'MODE64');
TEST('vmovlpd xmm29, xmm30, qword [rdx+0x3f8]      ', [0x62,0x61,0x8d,0x00,0x12,0x6a,0x7f                    ], 'MODE64');
TEST('vmovlpd xmm29, xmm30, qword [rdx+0x400]      ', [0x62,0x61,0x8d,0x00,0x12,0xaa,0x00,0x04,0x00,0x00     ], 'MODE64');
TEST('vmovlpd xmm29, xmm30, qword [rdx-0x400]      ', [0x62,0x61,0x8d,0x00,0x12,0x6a,0x80                    ], 'MODE64');
TEST('vmovlpd xmm29, xmm30, qword [rdx-0x408]      ', [0x62,0x61,0x8d,0x00,0x12,0xaa,0xf8,0xfb,0xff,0xff     ], 'MODE64');
TEST('vmovlpd qword [rcx], xmm30                   ', [0x62,0x61,0xfd,0x08,0x13,0x31                         ], 'MODE64');
TEST('vmovlpd qword [rax+r14*8+0x123], xmm30       ', [0x62,0x21,0xfd,0x08,0x13,0xb4,0xf0,0x23,0x01,0x00,0x00], 'MODE64');
TEST('vmovlpd qword [rdx+0x3f8], xmm30             ', [0x62,0x61,0xfd,0x08,0x13,0x72,0x7f                    ], 'MODE64');
TEST('vmovlpd qword [rdx+0x400], xmm30             ', [0x62,0x61,0xfd,0x08,0x13,0xb2,0x00,0x04,0x00,0x00     ], 'MODE64');
TEST('vmovlpd qword [rdx-0x400], xmm30             ', [0x62,0x61,0xfd,0x08,0x13,0x72,0x80                    ], 'MODE64');
TEST('vmovlpd qword [rdx-0x408], xmm30             ', [0x62,0x61,0xfd,0x08,0x13,0xb2,0xf8,0xfb,0xff,0xff     ], 'MODE64');

TEST('vmovlps xmm29, xmm30, qword [rcx]            ', [0x62,0x61,0x0c,0x00,0x12,0x29                         ], 'MODE64');
TEST('vmovlps xmm29, xmm30, qword [rax+r14*8+0x123]', [0x62,0x21,0x0c,0x00,0x12,0xac,0xf0,0x23,0x01,0x00,0x00], 'MODE64');
TEST('vmovlps xmm29, xmm30, qword [rdx+0x3f8]      ', [0x62,0x61,0x0c,0x00,0x12,0x6a,0x7f                    ], 'MODE64');
TEST('vmovlps xmm29, xmm30, qword [rdx+0x400]      ', [0x62,0x61,0x0c,0x00,0x12,0xaa,0x00,0x04,0x00,0x00     ], 'MODE64');
TEST('vmovlps xmm29, xmm30, qword [rdx-0x400]      ', [0x62,0x61,0x0c,0x00,0x12,0x6a,0x80                    ], 'MODE64');
TEST('vmovlps xmm29, xmm30, qword [rdx-0x408]      ', [0x62,0x61,0x0c,0x00,0x12,0xaa,0xf8,0xfb,0xff,0xff     ], 'MODE64');
TEST('vmovlps qword [rcx], xmm30                   ', [0x62,0x61,0x7c,0x08,0x13,0x31                         ], 'MODE64');
TEST('vmovlps qword [rax+r14*8+0x123], xmm30       ', [0x62,0x21,0x7c,0x08,0x13,0xb4,0xf0,0x23,0x01,0x00,0x00], 'MODE64');
TEST('vmovlps qword [rdx+0x3f8], xmm30             ', [0x62,0x61,0x7c,0x08,0x13,0x72,0x7f                    ], 'MODE64');
TEST('vmovlps qword [rdx+0x400], xmm30             ', [0x62,0x61,0x7c,0x08,0x13,0xb2,0x00,0x04,0x00,0x00     ], 'MODE64');
TEST('vmovlps qword [rdx-0x400], xmm30             ', [0x62,0x61,0x7c,0x08,0x13,0x72,0x80                    ], 'MODE64');
TEST('vmovlps qword [rdx-0x408], xmm30             ', [0x62,0x61,0x7c,0x08,0x13,0xb2,0xf8,0xfb,0xff,0xff     ], 'MODE64');

TEST('vmovq xmm30, rax                    ', [0x62,0x61,0xfd,0x08,0x6e,0xf0                         ], 'MODE64');
TEST('vmovq xmm30, r8                     ', [0x62,0x41,0xfd,0x08,0x6e,0xf0                         ], 'MODE64');
TEST('vmovq xmm30, qword [rcx]            ', [0x62,0x61,0xfd,0x08,0x6e,0x31                         ], 'MODE64');
TEST('vmovq xmm30, qword [rax+r14*8+0x123]', [0x62,0x21,0xfd,0x08,0x6e,0xb4,0xf0,0x23,0x01,0x00,0x00], 'MODE64');
TEST('vmovq xmm30, qword [rdx+0x3f8]      ', [0x62,0x61,0xfd,0x08,0x6e,0x72,0x7f                    ], 'MODE64');
TEST('vmovq xmm30, qword [rdx+0x400]      ', [0x62,0x61,0xfd,0x08,0x6e,0xb2,0x00,0x04,0x00,0x00     ], 'MODE64');
TEST('vmovq xmm30, qword [rdx-0x400]      ', [0x62,0x61,0xfd,0x08,0x6e,0x72,0x80                    ], 'MODE64');
TEST('vmovq xmm30, qword [rdx-0x408]      ', [0x62,0x61,0xfd,0x08,0x6e,0xb2,0xf8,0xfb,0xff,0xff     ], 'MODE64');
TEST('vmovq qword [rcx], xmm30            ', [0x62,0x61,0xfd,0x08,0x7e,0x31                         ], 'MODE64');
TEST('vmovq qword [rax+r14*8+0x123], xmm30', [0x62,0x21,0xfd,0x08,0x7e,0xb4,0xf0,0x23,0x01,0x00,0x00], 'MODE64');
TEST('vmovq qword [rdx+0x3f8], xmm30      ', [0x62,0x61,0xfd,0x08,0x7e,0x72,0x7f                    ], 'MODE64');
TEST('vmovq qword [rdx+0x400], xmm30      ', [0x62,0x61,0xfd,0x08,0x7e,0xb2,0x00,0x04,0x00,0x00     ], 'MODE64');
TEST('vmovq qword [rdx-0x400], xmm30      ', [0x62,0x61,0xfd,0x08,0x7e,0x72,0x80                    ], 'MODE64');
TEST('vmovq qword [rdx-0x408], xmm30      ', [0x62,0x61,0xfd,0x08,0x7e,0xb2,0xf8,0xfb,0xff,0xff     ], 'MODE64');
TEST('vmovq xmm30, xmm29                  ', [0x62,0x01,0xfe,0x08,0x7e,0xf5                         ], 'MODE64');
TEST('vmovq qword [rcx], xmm29            ', [0x62,0x61,0xfd,0x08,0x7e,0x29                         ], 'MODE64');
TEST('vmovq qword [rax+r14*8+0x123], xmm29', [0x62,0x21,0xfd,0x08,0x7e,0xac,0xf0,0x23,0x01,0x00,0x00], 'MODE64');
TEST('vmovq qword [rdx+0x3f8], xmm29      ', [0x62,0x61,0xfd,0x08,0x7e,0x6a,0x7f                    ], 'MODE64');
TEST('vmovq qword [rdx+0x400], xmm29      ', [0x62,0x61,0xfd,0x08,0x7e,0xaa,0x00,0x04,0x00,0x00     ], 'MODE64');
TEST('vmovq qword [rdx-0x400], xmm29      ', [0x62,0x61,0xfd,0x08,0x7e,0x6a,0x80                    ], 'MODE64');
TEST('vmovq qword [rdx-0x408], xmm29      ', [0x62,0x61,0xfd,0x08,0x7e,0xaa,0xf8,0xfb,0xff,0xff     ], 'MODE64');

