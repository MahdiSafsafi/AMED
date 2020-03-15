/*BEGIN_HEADER
*
* Copyright (C) 2020 Mahdi Safsafi.
*
* https://github.com/MahdiSafsafi/AMED
*
* See licence file 'LICENCE' for use and distribution rights.
*
*END_HEADER*/


/*===----------------------------------------------------------------------===*\
|*                                                                            *|
|*                Automatically generated file, do not edit!                  *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

const void* amed_x86_arguments_array[] = 
{
  /* 0    */ NULL, // VMSAVE
  /* 1    */ &reg0, &reg1, NULL, // AAS REG:SUPP:rw=AL REG:SUPP:rw=AH
  /* 4    */ &imm0, &reg0, &reg1, NULL, // AAD IMM:u8=$uimm8 REG:SUPP:rw=AL REG:SUPP:rw=AH
  /* 8    */ &imm0, &reg0, &reg2, NULL, // AAM IMM:u8=$uimm8 REG:SUPP:rw=AL REG:SUPP:w=AH
  /* 12   */ &reg3, &imm1, NULL, // SUB REG:rw=AL       IMM:s8=$simm8
  /* 15   */ &reg4, &reg5, NULL, // XOR REG:rw=$GPR8m   REG:r=$GPR8r
  /* 18   */ &mem0, &reg5, NULL, // XOR MEM:rw:u8=$mem8 REG:r=$GPR8r
  /* 21   */ &reg4, &imm1, NULL, // SUB REG:rw=$GPR8m   IMM:s8=$simm8
  /* 24   */ &mem0, &imm1, NULL, // SUB MEM:rw:u8=$mem8 IMM:s8=$simm8
  /* 27   */ &reg6, &reg7, NULL, // XOR REG:rw=$GPRvm   REG:r=$GPRvr
  /* 30   */ &mem1, &reg7, NULL, // XOR MEM:rw:sx=$memv REG:r=$GPRvr
  /* 33   */ &reg6, &imm1, NULL, // XOR REG:rw=$GPRvm   IMM:s8=$simm8
  /* 36   */ &mem1, &imm1, NULL, // XOR MEM:rw:sx=$memv IMM:s8=$simm8
  /* 39   */ &reg6, &imm2, NULL, // XOR REG:rw=$GPRvm   IMM:sx=$simmz
  /* 42   */ &mem1, &imm2, NULL, // XOR MEM:rw:sx=$memv IMM:sx=$simmz
  /* 45   */ &reg8, &reg9, NULL, // XOR REG:rw=$GPR8r   REG:r=$GPR8m
  /* 48   */ &reg8, &mem2, NULL, // XOR REG:rw=$GPR8r   MEM:r:u8=$mem8
  /* 51   */ &reg10, &reg11, NULL, // XOR REG:rw=$GPRvr   REG:r=$GPRvm
  /* 54   */ &reg10, &mem3, NULL, // XOR REG:rw=$GPRvr   MEM:r:sx=$memv
  /* 57   */ &reg12, &imm2, NULL, // XOR REG:rw=$AXv     IMM:sx=$simmz
  /* 60   */ &reg13, &reg14, NULL, // TZCNTI REG:rw:s32=$GPR32r REG:r:s32=$GPR32m
  /* 63   */ &reg15, &reg16, NULL, // TZCNTI REG:rw:s64=$GPR64r REG:r:s64=$GPR64m
  /* 66   */ &reg13, &mem4, NULL, // ADOX REG:rw:s32=$GPR32r MEM:r:s32=$mem32
  /* 69   */ &reg15, &mem5, NULL, // ADOX REG:rw:s64=$GPR64r MEM:r:s64=$mem64
  /* 72   */ &reg4, &imm0, NULL, // XOR REG:rw=$GPR8m   IMM:u8=$uimm8
  /* 75   */ &vreg0, &vreg1, NULL, // PXOR VREG:rw:s32=$XMMr VREG:r:s32=$XMMm
  /* 78   */ &vreg0, &mem6, NULL, // PXOR VREG:rw:s32=$XMMr MEM:r:s32=$mem128
  /* 81   */ &vreg2, &vreg1, NULL, // VMOVDQU   VREG:w:s32=$XMMr  VREG:r:s32=$XMMm
  /* 84   */ &vreg2, &mem6, NULL, // VMOVNTDQA VREG:w:s32=$XMMr MEM:r:s32=$mem128
  /* 87   */ &vreg2, &vreg1, &imm0, NULL, // VAESKEYGENASSIST VREG:w:s32=$XMMr VREG:r:s32=$XMMm  IMM:u8=$uimm8
  /* 91   */ &vreg2, &mem6, &imm0, NULL, // VAESKEYGENASSIST VREG:w:s32=$XMMr MEM:r:s32=$mem128 IMM:u8=$uimm8
  /* 95   */ &mem0, &imm0, NULL, // XOR MEM:rw:u8=$mem8 IMM:u8=$uimm8
  /* 98   */ &reg17, &reg18, &reg14, NULL, // PEXT REG:w:s32=$GPR32r REG:r:s32=$GPR32n REG:r:s32=$GPR32m
  /* 102  */ &reg19, &reg20, &reg16, NULL, // PEXT REG:w:s64=$GPR64r REG:r:s64=$GPR64n REG:r:s64=$GPR64m
  /* 106  */ &reg17, &reg18, &mem4, NULL, // PEXT REG:w:s32=$GPR32r REG:r:s32=$GPR32n MEM:r:s32=$mem32
  /* 110  */ &reg19, &reg20, &mem5, NULL, // PEXT REG:w:s64=$GPR64r REG:r:s64=$GPR64n MEM:r:s64=$mem64
  /* 114  */ &reg21, &reg22, NULL, // ARPL REG:rw=$GPR16m    REG:r=$GPR16r
  /* 117  */ &mem7, &reg22, NULL, // ARPL MEM:rw:s16=$mem16 REG:r=$GPR16r
  /* 120  */ &reg17, &reg14, &reg18, NULL, // SHRX REG:w:s32=$GPR32r REG:r:s32=$GPR32m REG:r:s32=$GPR32n
  /* 124  */ &reg19, &reg16, &reg20, NULL, // SHRX REG:w:s64=$GPR64r REG:r:s64=$GPR64m REG:r:s64=$GPR64n
  /* 128  */ &reg17, &mem4, &reg18, NULL, // SHRX REG:w:s32=$GPR32r MEM:r:s32=$mem32  REG:r:s32=$GPR32n
  /* 132  */ &reg19, &mem5, &reg20, NULL, // SHRX REG:w:s64=$GPR64r MEM:r:s64=$mem64  REG:r:s64=$GPR64n
  /* 136  */ &reg23, &reg14, NULL, // TZMSK REG:w:s32=$GPR32n REG:r:s32=$GPR32m
  /* 139  */ &reg24, &reg16, NULL, // BLSR REG:w:s64=$GPR64n REG:r:s64=$GPR64m
  /* 142  */ &reg23, &mem4, NULL, // TZMSK REG:w:s32=$GPR32n MEM:r:s32=$mem32
  /* 145  */ &reg24, &mem5, NULL, // BLSR REG:w:s64=$GPR64n MEM:r:s64=$mem64
  /* 148  */ &reg7, &mem8, NULL, // BOUND REG:r=$GPRvr MEM:r:s16=$mem32
  /* 151  */ &reg7, &mem9, NULL, // BOUND REG:r=$GPRvr MEM:r:s32=$mem64
  /* 154  */ &reg25, &reg11, NULL, // LAR REG:cw=$GPRvr REG:r=$GPRvm
  /* 157  */ &reg25, &mem3, NULL, // CMOVZ   REG:cw=$GPRvr MEM:r:sx=$memv
  /* 160  */ &reg26, NULL, // INC REG:rw=$GPRvo
  /* 162  */ &reg11, &reg7, NULL, // TEST REG:r=$GPRvm   REG:r=$GPRvr
  /* 165  */ &mem3, &reg7, NULL, // TEST MEM:r:sx=$memv REG:r=$GPRvr
  /* 168  */ &reg11, &imm0, NULL, // BT REG:r=$GPRvm   IMM:u8=$uimm8
  /* 171  */ &mem3, &imm0, NULL, // BT MEM:r:sx=$memv IMM:u8=$uimm8
  /* 174  */ &reg6, &imm0, NULL, // BTS REG:rw=$GPRvm   IMM:u8=$uimm8
  /* 177  */ &mem1, &imm0, NULL, // BTS MEM:rw:sx=$memv IMM:u8=$uimm8
  /* 180  */ &ptr0, &reg27, &reg28, &mem10, NULL, // CALL PTR:r=$ptrdpp  REG:SUPP:w=EIP   REG:SUPP:rw=$SPa MEM:SUPP:w:sx={BASE:r=$SPa SZ=SZ_F}
  /* 185  */ &mem11, &reg29, &reg28, &mem10, NULL, // CALL MEM:r=$memdpr  REG:SUPP:w=$IPa  REG:SUPP:rw=$SPa MEM:SUPP:w:sx={BASE:r=$SPa SZ=SZ_F}
  /* 190  */ &reg11, &reg30, &reg28, &mem12, NULL, // CALL REG:r=$GPRvm   REG:SUPP:rw=$IPa REG:SUPP:rw=$SPa MEM:SUPP:w:sx={BASE:r=$SPa SZ=SZ_V}
  /* 195  */ &mem3, &reg30, &reg28, &mem12, NULL, // CALL MEM:r:sx=$memv REG:SUPP:rw=$IPa REG:SUPP:rw=$SPa MEM:SUPP:w:sx={BASE:r=$SPa SZ=SZ_V}
  /* 200  */ &rel0, &reg31, &reg28, &mem12, NULL, // CALL REL:s32=$rel32 REG:SUPP:rw=RIP  REG:SUPP:rw=$SPa MEM:SUPP:w:sx={BASE:r=$SPa SZ=SZ_V}
  /* 205  */ &rel1, &reg31, &reg28, &mem12, NULL, // CALL REL:sx=$relz   REG:SUPP:rw=RIP  REG:SUPP:rw=$SPa MEM:SUPP:w:sx={BASE:r=$SPa SZ=SZ_V}
  /* 210  */ &rel1, &reg32, &reg28, &mem12, NULL, // CALL REL:sx=$relz   REG:SUPP:rw=EIP  REG:SUPP:rw=$SPa MEM:SUPP:w:sx={BASE:r=$SPa SZ=SZ_V}
  /* 215  */ &reg33, &reg34, NULL, // CBW  REG:SUPP:w=AX  REG:SUPP:r=AL
  /* 218  */ &reg35, &reg36, NULL, // CDQE REG:SUPP:w=RAX REG:SUPP:r=EAX
  /* 221  */ &reg37, &reg38, NULL, // CWDE REG:SUPP:w=EAX REG:SUPP:r=AX
  /* 224  */ &reg39, &imm1, NULL, // TEST REG:r=AL       IMM:s8=$simm8
  /* 227  */ &reg9, &reg5, NULL, // TEST REG:r=$GPR8m   REG:r=$GPR8r
  /* 230  */ &mem2, &reg5, NULL, // TEST MEM:r:u8=$mem8 REG:r=$GPR8r
  /* 233  */ &reg9, &imm1, NULL, // TEST REG:r=$GPR8m   IMM:s8=$simm8
  /* 236  */ &mem2, &imm1, NULL, // TEST MEM:r:u8=$mem8 IMM:s8=$simm8
  /* 239  */ &reg11, &imm1, NULL, // CMP REG:r=$GPRvm   IMM:s8=$simm8
  /* 242  */ &mem3, &imm1, NULL, // CMP MEM:r:sx=$memv IMM:s8=$simm8
  /* 245  */ &reg11, &imm2, NULL, // TEST REG:r=$GPRvm   IMM:sx=$simmz
  /* 248  */ &mem3, &imm2, NULL, // TEST MEM:r:sx=$memv IMM:sx=$simmz
  /* 251  */ &reg5, &reg9, NULL, // CMP REG:r=$GPR8r   REG:r=$GPR8m
  /* 254  */ &reg5, &mem2, NULL, // CMP REG:r=$GPR8r   MEM:r:u8=$mem8
  /* 257  */ &reg7, &reg11, NULL, // CMP REG:r=$GPRvr   REG:r=$GPRvm
  /* 260  */ &reg7, &mem3, NULL, // CMP REG:r=$GPRvr   MEM:r:sx=$memv
  /* 263  */ &reg40, &imm2, NULL, // TEST REG:r=$AXv     IMM:sx=$simmz
  /* 266  */ &mem13, &mem14, NULL, // CMPSB MEM:SUPP:r:u8={SEG:r=DS BASE:r=$SIa SZ=8}    MEM:SUPP:r:u8={SEG:r=ES BASE:r=$DIa SZ=8}
  /* 269  */ &mem15, &mem16, &reg41, NULL, // CMPSB MEM:SUPP:cr:u8={SEG:r=DS BASE:r=$SIa SZ=8}   MEM:SUPP:cr:u8={SEG:r=ES BASE:r=$DIa SZ=8}   REG:SUPP:rcw=$CXa
  /* 273  */ &mem17, &mem18, NULL, // CMPSD MEM:SUPP:r:s32={SEG:r=DS BASE:r=$SIa SZ=32}  MEM:SUPP:r:s32={SEG:r=ES BASE:r=$DIa SZ=32}
  /* 276  */ &mem19, &mem20, &reg41, NULL, // CMPSD MEM:SUPP:cr:s32={SEG:r=DS BASE:r=$SIa SZ=32} MEM:SUPP:cr:s32={SEG:r=ES BASE:r=$DIa SZ=32} REG:SUPP:rcw=$CXa
  /* 280  */ &mem21, &mem22, NULL, // CMPSQ MEM:SUPP:r:s64={SEG:r=DS BASE:r=$SIa SZ=64}  MEM:SUPP:r:s64={SEG:r=ES BASE:r=$DIa SZ=64}
  /* 283  */ &mem23, &mem24, &reg41, NULL, // CMPSQ MEM:SUPP:cr:s64={SEG:r=DS BASE:r=$SIa SZ=64} MEM:SUPP:cr:s64={SEG:r=ES BASE:r=$DIa SZ=64} REG:SUPP:rcw=$CXa
  /* 287  */ &mem25, &mem26, NULL, // CMPSW MEM:SUPP:r:s16={SEG:r=DS BASE:r=$SIa SZ=16}  MEM:SUPP:r:s16={SEG:r=ES BASE:r=$DIa SZ=16}
  /* 290  */ &mem27, &mem28, &reg41, NULL, // CMPSW MEM:SUPP:cr:s16={SEG:r=DS BASE:r=$SIa SZ=16} MEM:SUPP:cr:s16={SEG:r=ES BASE:r=$DIa SZ=16} REG:SUPP:rcw=$CXa
  /* 294  */ &reg42, &reg5, &reg43, NULL, // CMPXCHG REG:rcw=$GPR8m   REG:r=$GPR8r REG:SUPP:rcw=AL
  /* 298  */ &mem29, &reg5, &reg43, NULL, // CMPXCHG MEM:rcw:u8=$mem8 REG:r=$GPR8r REG:SUPP:rcw=AL
  /* 302  */ &reg44, &reg7, &reg45, NULL, // CMPXCHG REG:rcw=$GPRvm   REG:r=$GPRvr REG:SUPP:rcw=$AXv
  /* 306  */ &mem30, &reg7, &reg45, NULL, // CMPXCHG MEM:rcw:sx=$memv REG:r=$GPRvr REG:SUPP:rcw=$AXv
  /* 310  */ &mem31, &reg46, &reg47, &reg48, &reg49, NULL, // CMPXCHG16B MEM:rcw:s32=$mem128 REG:SUPP:rcw=RDX REG:SUPP:rcw=RAX REG:SUPP:r=RCX REG:SUPP:r=RBX
  /* 316  */ &mem32, &reg50, &reg51, &reg52, &reg53, NULL, // CMPXCHG8B  MEM:rcw:s64=$mem64  REG:SUPP:rcw=EDX REG:SUPP:rcw=EAX REG:SUPP:r=ECX REG:SUPP:r=EBX
  /* 322  */ &reg54, &reg55, &reg56, &reg57, NULL, // CPUID REG:SUPP:rw=EAX REG:SUPP:w=EBX REG:SUPP:crw=ECX REG:SUPP:w=EDX
  /* 327  */ &reg57, &reg36, NULL, // CDQ REG:SUPP:w=EDX REG:SUPP:r=EAX
  /* 330  */ &reg58, &reg59, NULL, // CQO REG:SUPP:w=RDX REG:SUPP:r=RAX
  /* 333  */ &reg60, &reg38, NULL, // CWD REG:SUPP:w=DX  REG:SUPP:r=AX
  /* 336  */ &reg0, NULL, // DAS REG:SUPP:rw=AL
  /* 338  */ &reg4, NULL, // NOT REG:rw=$GPR8m
  /* 340  */ &mem0, NULL, // NOT MEM:rw:u8=$mem8
  /* 342  */ &reg6, NULL, // NOT REG:rw=$GPRvm
  /* 344  */ &mem1, NULL, // NOT MEM:rw:sx=$memv
  /* 346  */ &reg9, &reg61, NULL, // IDIV REG:r=$GPR8m   REG:SUPP:rw=AX
  /* 349  */ &mem2, &reg61, NULL, // IDIV MEM:r:u8=$mem8 REG:SUPP:rw=AX
  /* 352  */ &reg11, &reg62, &reg63, NULL, // IDIV REG:r=$GPRvm   REG:SUPP:rw=$AXv REG:SUPP:rw=$DXv
  /* 356  */ &mem3, &reg62, &reg63, NULL, // IDIV MEM:r:sx=$memv REG:SUPP:rw=$AXv REG:SUPP:rw=$DXv
  /* 360  */ &imm3, &imm0, &reg64, &reg28, &mem12, NULL, // ENTER IMM:s16=$simm16 IMM:u8=$uimm8 REG:SUPP:rw=$BPv REG:SUPP:rw=$SPa MEM:SUPP:w:sx={BASE:r=$SPa SZ=SZ_V}
  /* 366  */ &reg9, &reg34, &reg33, NULL, // MUL REG:r=$GPR8m   REG:SUPP:r=AL    REG:SUPP:w=AX
  /* 370  */ &mem2, &reg34, &reg33, NULL, // MUL MEM:r:u8=$mem8 REG:SUPP:r=AL    REG:SUPP:w=AX
  /* 374  */ &reg11, &reg62, &reg65, NULL, // MUL REG:r=$GPRvm   REG:SUPP:rw=$AXv REG:SUPP:w=$DXv
  /* 378  */ &mem3, &reg62, &reg65, NULL, // MUL MEM:r:sx=$memv REG:SUPP:rw=$AXv REG:SUPP:w=$DXv
  /* 382  */ &reg66, &reg11, &imm1, NULL, // IMUL REG:w=$GPRvr   REG:r=$GPRvm     IMM:s8=$simm8
  /* 386  */ &reg66, &mem3, &imm1, NULL, // IMUL REG:w=$GPRvr   MEM:r:sx=$memv   IMM:s8=$simm8
  /* 390  */ &reg66, &reg11, &imm2, NULL, // IMUL REG:w=$GPRvr   REG:r=$GPRvm     IMM:sx=$simmz
  /* 394  */ &reg66, &mem3, &imm2, NULL, // IMUL REG:w=$GPRvr   MEM:r:sx=$memv   IMM:sx=$simmz
  /* 398  */ &reg67, &imm0, NULL, // IN REG:w=AL  IMM:u8=$uimm8
  /* 401  */ &reg67, &reg68, NULL, // IN REG:w=AL  REG:r=DX
  /* 404  */ &reg69, &reg68, NULL, // IN REG:w=AX  REG:r=DX
  /* 407  */ &reg70, &reg68, NULL, // IN REG:w=EAX REG:r=DX
  /* 410  */ &reg69, &imm0, NULL, // IN REG:w=AX  IMM:u8=$uimm8
  /* 413  */ &reg70, &imm0, NULL, // IN REG:w=EAX IMM:u8=$uimm8
  /* 416  */ &mem33, &reg71, NULL, // INSB MEM:SUPP:w:u8={SEG:r=ES BASE:r=$DIa SZ=8}    REG:SUPP:r=DX
  /* 419  */ &mem34, &reg71, &reg41, NULL, // INSB MEM:SUPP:cw:u8={SEG:r=ES BASE:r=$DIa SZ=8}   REG:SUPP:r=DX REG:SUPP:rcw=$CXa
  /* 423  */ &mem35, &reg71, NULL, // INSD MEM:SUPP:w:s32={SEG:r=ES BASE:r=$DIa SZ=32}  REG:SUPP:r=DX
  /* 426  */ &mem36, &reg71, &reg41, NULL, // INSD MEM:SUPP:cw:s32={SEG:r=ES BASE:r=$DIa SZ=32} REG:SUPP:r=DX REG:SUPP:rcw=$CXa
  /* 430  */ &mem37, &reg71, NULL, // INSW MEM:SUPP:w:s16={SEG:r=ES BASE:r=$DIa SZ=16}  REG:SUPP:r=DX
  /* 433  */ &mem38, &reg71, &reg41, NULL, // INSW MEM:SUPP:cw:s16={SEG:r=ES BASE:r=$DIa SZ=16} REG:SUPP:r=DX REG:SUPP:rcw=$CXa
  /* 437  */ &imm0, &reg29, NULL, // INT  IMM:u8=$uimm8   REG:SUPP:w=$IPa
  /* 440  */ &reg29, NULL, // RSM REG:SUPP:w=$IPa
  /* 442  */ &reg27, NULL, // INTO REG:SUPP:w=EIP
  /* 444  */ &mem2, NULL, // PREFETCHWT1 MEM:r:u8=$mem8
  /* 446  */ &reg29, &reg28, &mem39, NULL, // IRETD REG:SUPP:w=$IPa REG:SUPP:rw=$SPa MEM:SUPP:r:sx={BASE:r=$SPa SZ=SZ_RST}
  /* 450  */ &reg72, &reg28, &mem39, NULL, // IRETQ REG:SUPP:w=RIP  REG:SUPP:rw=$SPa MEM:SUPP:r:sx={BASE:r=$SPa SZ=SZ_RST}
  /* 454  */ &ptr0, &reg27, NULL, // JMP PTR:r=$ptrdpp  REG:SUPP:w=EIP
  /* 457  */ &mem11, &reg29, NULL, // JMP MEM:r=$memdpr  REG:SUPP:w=$IPa
  /* 460  */ &reg11, &reg29, NULL, // JMP REG:r=$GPRvm   REG:SUPP:w=$IPa
  /* 463  */ &mem3, &reg29, NULL, // JMP MEM:r:sx=$memv REG:SUPP:w=$IPa
  /* 466  */ &rel2, &reg31, NULL, // JZ    REL:s8=$rel8   REG:SUPP:rw=RIP
  /* 469  */ &rel2, &reg32, NULL, // JZ    REL:s8=$rel8   REG:SUPP:rw=EIP
  /* 472  */ &rel0, &reg31, NULL, // JZ    REL:s32=$rel32 REG:SUPP:rw=RIP
  /* 475  */ &rel1, &reg31, NULL, // JZ    REL:sx=$relz   REG:SUPP:rw=RIP
  /* 478  */ &rel1, &reg32, NULL, // JZ    REL:sx=$relz   REG:SUPP:rw=EIP
  /* 481  */ &rel2, &reg73, &reg74, NULL, // JCXZ  REL:s8=$rel8   REG:SUPP:r=CX   REG:SUPP:rw=IP
  /* 485  */ &rel2, &reg52, &reg31, NULL, // JECXZ REL:s8=$rel8   REG:SUPP:r=ECX  REG:SUPP:rw=RIP
  /* 489  */ &rel2, &reg52, &reg32, NULL, // JECXZ REL:s8=$rel8   REG:SUPP:r=ECX  REG:SUPP:rw=EIP
  /* 493  */ &rel2, &reg48, &reg31, NULL, // JRCXZ REL:s8=$rel8   REG:SUPP:r=RCX  REG:SUPP:rw=RIP
  /* 497  */ &reg2, NULL, // LAHF REG:SUPP:w=AH
  /* 499  */ &reg25, &mem40, NULL, // LAR REG:cw=$GPRvr MEM:r:s16=$mem16
  /* 502  */ &reg66, &agen0, NULL, // LEA REG:w=$GPRvr AGEN:r=$agen
  /* 505  */ &mem41, &reg64, &reg75, NULL, // LEAVE MEM:SUPP:r:sx={SEG:r=SS BASE:r=$BPa SZ=SZ_V} REG:SUPP:rw=$BPv REG:SUPP:rw=$SPv
  /* 509  */ &reg76, &reg77, NULL, // LLDT REG:r=$GPR16m    REG:SUPP:w=LDTR
  /* 512  */ &mem40, &reg77, NULL, // LLDT MEM:r:s16=$mem16 REG:SUPP:w=LDTR
  /* 515  */ &reg76, &reg78, NULL, // LMSW REG:r=$GPR16m    REG:SUPP:w=CR0
  /* 518  */ &mem40, &reg78, NULL, // LMSW MEM:r:s16=$mem16 REG:SUPP:w=CR0
  /* 521  */ &reg79, &mem13, NULL, // LODSB REG:SUPP:w=AL   MEM:SUPP:r:u8={SEG:r=DS BASE:r=$SIa SZ=8}
  /* 524  */ &reg80, &mem15, &reg41, NULL, // LODSB REG:SUPP:cw=AL  MEM:SUPP:cr:u8={SEG:r=DS BASE:r=$SIa SZ=8}   REG:SUPP:rcw=$CXa
  /* 528  */ &reg37, &mem17, NULL, // LODSD REG:SUPP:w=EAX  MEM:SUPP:r:s32={SEG:r=DS BASE:r=$SIa SZ=32}
  /* 531  */ &reg81, &mem19, &reg41, NULL, // LODSD REG:SUPP:cw=EAX MEM:SUPP:cr:s32={SEG:r=DS BASE:r=$SIa SZ=32} REG:SUPP:rcw=$CXa
  /* 535  */ &reg35, &mem21, NULL, // LODSQ REG:SUPP:w=RAX  MEM:SUPP:r:s64={SEG:r=DS BASE:r=$SIa SZ=64}
  /* 538  */ &reg82, &mem23, &reg41, NULL, // LODSQ REG:SUPP:cw=RAX MEM:SUPP:cr:s64={SEG:r=DS BASE:r=$SIa SZ=64} REG:SUPP:rcw=$CXa
  /* 542  */ &reg33, &mem25, NULL, // LODSW REG:SUPP:w=AX   MEM:SUPP:r:s16={SEG:r=DS BASE:r=$SIa SZ=16}
  /* 545  */ &reg83, &mem27, &reg41, NULL, // LODSW REG:SUPP:cw=AX  MEM:SUPP:cr:s16={SEG:r=DS BASE:r=$SIa SZ=16} REG:SUPP:rcw=$CXa
  /* 549  */ &rel2, &reg84, &reg30, NULL, // LOOPNE REL:s8=$rel8 REG:SUPP:rw=$CXa REG:SUPP:rw=$IPa
  /* 553  */ &reg10, &reg85, NULL, // LSL REG:rw=$GPRvr REG:r=$GPRzm
  /* 556  */ &reg10, &mem40, NULL, // LSL REG:rw=$GPRvr MEM:r:s16=$mem16
  /* 559  */ &reg76, &reg86, NULL, // LTR REG:r=$GPR16m    REG:SUPP:w=TR
  /* 562  */ &mem40, &reg86, NULL, // LTR MEM:r:s16=$mem16 REG:SUPP:w=TR
  /* 565  */ &reg87, &reg88, NULL, // POPCNT REG:w:sx=$GPRvr REG:r:sx=$GPRvm
  /* 568  */ &reg87, &mem3, NULL, // POPCNT REG:w:sx=$GPRvr MEM:r:sx=$memv
  /* 571  */ &mem42, &reg89, NULL, // LGDT MEM:r=$mem80  REG:SUPP:w=GDTR
  /* 574  */ &mem43, &reg89, NULL, // LGDT MEM:r=$memppr REG:SUPP:w=GDTR
  /* 577  */ &mem42, &reg90, NULL, // LIDT MEM:r=$mem80  REG:SUPP:w=IDTR
  /* 580  */ &mem43, &reg90, NULL, // LIDT MEM:r=$memppr REG:SUPP:w=IDTR
  /* 583  */ &reg91, &mem44, &reg92, NULL, // LDS REG:w=$GPRzr MEM:r=$memdpp REG:SUPP:w=DS
  /* 587  */ &reg91, &mem44, &reg93, NULL, // LES REG:w=$GPRzr MEM:r=$memdpp REG:SUPP:w=ES
  /* 591  */ &reg66, &mem11, &reg94, NULL, // LFS REG:w=$GPRvr MEM:r=$memdpr REG:SUPP:w=FS
  /* 595  */ &reg66, &mem11, &reg95, NULL, // LGS REG:w=$GPRvr MEM:r=$memdpr REG:SUPP:w=GS
  /* 599  */ &reg66, &mem11, &reg96, NULL, // LSS REG:w=$GPRvr MEM:r=$memdpr REG:SUPP:w=SS
  /* 603  */ &reg67, &moffs0, NULL, // MOV REG:w=AL           MOFFS:r:s8=$moffs8
  /* 606  */ &reg97, &reg5, NULL, // MOV REG:w=$GPR8m       REG:r=$GPR8r
  /* 609  */ &mem45, &reg5, NULL, // MOV MEM:w:u8=$mem8     REG:r=$GPR8r
  /* 612  */ &reg97, &imm0, NULL, // MOV REG:w=$GPR8m       IMM:u8=$uimm8
  /* 615  */ &mem45, &imm0, NULL, // MOV MEM:w:u8=$mem8     IMM:u8=$uimm8
  /* 618  */ &reg98, &reg7, NULL, // MOV REG:w=$GPRvm       REG:r=$GPRvr
  /* 621  */ &mem46, &reg7, NULL, // MOVBE MEM:w:sx=$memv REG:r=$GPRvr
  /* 624  */ &reg98, &imm2, NULL, // MOV REG:w=$GPRvm       IMM:sx=$simmz
  /* 627  */ &mem46, &imm2, NULL, // MOV MEM:w:sx=$memv     IMM:sx=$simmz
  /* 630  */ &reg98, &reg99, NULL, // MOV REG:w=$GPRvm       REG:r=$SRr
  /* 633  */ &mem47, &reg99, NULL, // MOV MEM:w:s16=$mem16   REG:r=$SRr
  /* 636  */ &reg100, &imm0, NULL, // MOV REG:w=$GPR8o       IMM:u8=$uimm8
  /* 639  */ &reg101, &imm4, NULL, // MOV REG:w=$GPRvo       IMM:sx=$simmv
  /* 642  */ &reg102, &reg9, NULL, // MOV REG:w=$GPR8r       REG:r=$GPR8m
  /* 645  */ &reg102, &mem2, NULL, // MOV REG:w=$GPR8r       MEM:r:u8=$mem8
  /* 648  */ &reg66, &reg11, NULL, // TZCNT REG:w=$GPRvr REG:r=$GPRvm
  /* 651  */ &reg66, &mem3, NULL, // TZCNT REG:w=$GPRvr MEM:r:sx=$memv
  /* 654  */ &reg103, &reg76, NULL, // MOV REG:w=$SRr         REG:r=$GPR16m
  /* 657  */ &reg103, &mem40, NULL, // MOV REG:w=$SRr         MEM:r:s16=$mem16
  /* 660  */ &moffs1, &reg39, NULL, // MOV MOFFS:w:s8=$moffs8 REG:r=AL
  /* 663  */ &moffs2, &reg40, NULL, // MOV MOFFS:w:sx=$moffsv REG:r=$AXv
  /* 666  */ &reg104, &moffs3, NULL, // MOV REG:w=$AXv         MOFFS:r:sx=$moffsv
  /* 669  */ &reg105, &mem48, &mem49, NULL, // MOVDIR64B REG:r=$GPRar MEM:r:u32=$mem512 MEM:SUPP:w:s32={BASE:r=$GPRar SZ=512}
  /* 673  */ &reg105, &mem48, &mem50, NULL, // MOVDIR64B REG:r=$GPRar MEM:r:u32=$mem512 MEM:SUPP:w:s32={SEG:r=ES BASE:r=$GPRar SZ=512}
  /* 677  */ &mem51, &reg106, NULL, // WRUSSD MEM:w:u32=$mem32 REG:r:u32=$GPR32r
  /* 680  */ &mem52, &reg107, NULL, // WRUSSQ MEM:w:u64=$mem64 REG:r:u64=$GPR64r
  /* 683  */ &mem33, &mem13, NULL, // MOVSB MEM:SUPP:w:u8={SEG:r=ES BASE:r=$DIa SZ=8}    MEM:SUPP:r:u8={SEG:r=DS BASE:r=$SIa SZ=8}
  /* 686  */ &mem34, &mem15, &reg41, NULL, // MOVSB MEM:SUPP:cw:u8={SEG:r=ES BASE:r=$DIa SZ=8}   MEM:SUPP:cr:u8={SEG:r=DS BASE:r=$SIa SZ=8}   REG:SUPP:rcw=$CXa
  /* 690  */ &mem35, &mem17, NULL, // MOVSD MEM:SUPP:w:s32={SEG:r=ES BASE:r=$DIa SZ=32}  MEM:SUPP:r:s32={SEG:r=DS BASE:r=$SIa SZ=32}
  /* 693  */ &mem36, &mem19, &reg41, NULL, // MOVSD MEM:SUPP:cw:s32={SEG:r=ES BASE:r=$DIa SZ=32} MEM:SUPP:cr:s32={SEG:r=DS BASE:r=$SIa SZ=32} REG:SUPP:rcw=$CXa
  /* 697  */ &mem53, &mem21, NULL, // MOVSQ MEM:SUPP:w:s64={SEG:r=ES BASE:r=$DIa SZ=64}  MEM:SUPP:r:s64={SEG:r=DS BASE:r=$SIa SZ=64}
  /* 700  */ &mem54, &mem23, &reg41, NULL, // MOVSQ MEM:SUPP:cw:s64={SEG:r=ES BASE:r=$DIa SZ=64} MEM:SUPP:cr:s64={SEG:r=DS BASE:r=$SIa SZ=64} REG:SUPP:rcw=$CXa
  /* 704  */ &mem37, &mem25, NULL, // MOVSW MEM:SUPP:w:s16={SEG:r=ES BASE:r=$DIa SZ=16}  MEM:SUPP:r:s16={SEG:r=DS BASE:r=$SIa SZ=16}
  /* 707  */ &mem38, &mem27, &reg41, NULL, // MOVSW MEM:SUPP:cw:s16={SEG:r=ES BASE:r=$DIa SZ=16} MEM:SUPP:cr:s16={SEG:r=DS BASE:r=$SIa SZ=16} REG:SUPP:rcw=$CXa
  /* 711  */ &reg66, &reg85, NULL, // MOVSXD REG:w=$GPRvr REG:r=$GPRzm
  /* 714  */ &reg66, &mem4, NULL, // MOVSXD REG:w=$GPRvr MEM:r:s32=$mem32
  /* 717  */ &reg66, &reg9, NULL, // MOVZX REG:w=$GPRvr REG:r=$GPR8m
  /* 720  */ &reg66, &mem2, NULL, // MOVZX REG:w=$GPRvr MEM:r:u8=$mem8
  /* 723  */ &reg66, &reg76, NULL, // MOVZX REG:w=$GPRvr REG:r=$GPR16m
  /* 726  */ &reg66, &mem40, NULL, // MOVZX REG:w=$GPRvr MEM:r:s16=$mem16
  /* 729  */ &reg108, &reg109, NULL, // MOV REG:w=$GPR64m REG:r=$CRr
  /* 732  */ &reg110, &reg109, NULL, // MOV REG:w=$GPR32m REG:r=$CRr
  /* 735  */ &reg111, &reg112, NULL, // MOV REG:w=$CRr    REG:r=$GPR64m
  /* 738  */ &reg111, &reg113, NULL, // MOV REG:w=$CRr    REG:r=$GPR32m
  /* 741  */ &reg108, &reg114, NULL, // MOV REG:w=$GPR64m REG:r=$DRr
  /* 744  */ &reg110, &reg114, NULL, // MOV REG:w=$GPR32m REG:r=$DRr
  /* 747  */ &reg115, &reg112, NULL, // MOV REG:w=$DRr    REG:r=$GPR64m
  /* 750  */ &reg115, &reg113, NULL, // MOV REG:w=$DRr    REG:r=$GPR32m
  /* 753  */ &reg17, &reg23, &reg14, &reg116, NULL, // MULX REG:w:s32=$GPR32r REG:w:s32=$GPR32n REG:r:s32=$GPR32m REG:SUPP:r=EDX
  /* 758  */ &reg19, &reg24, &reg16, &reg117, NULL, // MULX REG:w:s64=$GPR64r REG:w:s64=$GPR64n REG:r:s64=$GPR64m REG:SUPP:r=RDX
  /* 763  */ &reg17, &reg23, &mem4, &reg116, NULL, // MULX REG:w:s32=$GPR32r REG:w:s32=$GPR32n MEM:r:s32=$mem32  REG:SUPP:r=EDX
  /* 768  */ &reg19, &reg24, &mem5, &reg117, NULL, // MULX REG:w:s64=$GPR64r REG:w:s64=$GPR64n MEM:r:s64=$mem64  REG:SUPP:r=RDX
  /* 773  */ &reg11, NULL, // NOP REG:r=$GPRvm
  /* 775  */ &reg11, &mem3, NULL, // NOP REG:r=$GPRvm   MEM:r:sx=$memv
  /* 778  */ &mem3, NULL, // NOP MEM:r:sx=$memv
  /* 780  */ &reg3, &imm0, NULL, // XOR REG:rw=AL       IMM:u8=$uimm8
  /* 783  */ &imm0, &reg39, NULL, // OUT IMM:u8=$uimm8 REG:r=AL
  /* 786  */ &imm0, &reg118, NULL, // OUT IMM:u8=$uimm8 REG:r=AX
  /* 789  */ &imm0, &reg119, NULL, // OUT IMM:u8=$uimm8 REG:r=EAX
  /* 792  */ &reg68, &reg118, NULL, // OUT REG:r=DX      REG:r=AX
  /* 795  */ &reg68, &reg119, NULL, // OUT REG:r=DX      REG:r=EAX
  /* 798  */ &reg68, &reg39, NULL, // OUT REG:r=DX      REG:r=AL
  /* 801  */ &reg71, &mem13, NULL, // OUTSB REG:SUPP:r=DX MEM:SUPP:r:u8={SEG:r=DS BASE:r=$SIa SZ=8}
  /* 804  */ &reg71, &mem15, &reg41, NULL, // OUTSB REG:SUPP:r=DX MEM:SUPP:cr:u8={SEG:r=DS BASE:r=$SIa SZ=8}   REG:SUPP:rcw=$CXa
  /* 808  */ &reg71, &mem17, NULL, // OUTSD REG:SUPP:r=DX MEM:SUPP:r:s32={SEG:r=DS BASE:r=$SIa SZ=32}
  /* 811  */ &reg71, &mem19, &reg41, NULL, // OUTSD REG:SUPP:r=DX MEM:SUPP:cr:s32={SEG:r=DS BASE:r=$SIa SZ=32} REG:SUPP:rcw=$CXa
  /* 815  */ &reg71, &mem25, NULL, // OUTSW REG:SUPP:r=DX MEM:SUPP:r:s16={SEG:r=DS BASE:r=$SIa SZ=16}
  /* 818  */ &reg71, &mem27, &reg41, NULL, // OUTSW REG:SUPP:r=DX MEM:SUPP:cr:s16={SEG:r=DS BASE:r=$SIa SZ=16} REG:SUPP:rcw=$CXa
  /* 822  */ &vreg0, &vreg1, &imm0, NULL, // PBLENDW VREG:rw:s32=$XMMr VREG:r:s32=$XMMm  IMM:u8=$uimm8
  /* 826  */ &vreg0, &mem6, &imm0, NULL, // PBLENDW VREG:rw:s32=$XMMr MEM:r:s32=$mem128 IMM:u8=$uimm8
  /* 830  */ &vreg3, &vreg4, &vreg5, &imm0, NULL, // VPCLMULQDQ VREG:w:u128=$YMMr VREG:r:u64=$YMMn VREG:r:u64=$YMMm  IMM:u8=$uimm8
  /* 835  */ &vreg3, &vreg4, &mem55, &imm0, NULL, // VPCLMULQDQ VREG:w:u128=$YMMr VREG:r:u64=$YMMn MEM:r:u64=$mem256 IMM:u8=$uimm8
  /* 840  */ &reg120, &reg121, &reg122, &reg123, NULL, // PCONFIG REG:SUPP:rw:u32=EAX REG:SUPP:crw:u32=EBX REG:SUPP:crw:u32=ECX REG:SUPP:crw:u32=EDX
  /* 845  */ &reg98, &reg28, &mem56, NULL, // POP REG:w=$GPRvm   REG:SUPP:rw=$SPa MEM:SUPP:r:sx={BASE:r=$SPa SZ=SZ_V}
  /* 849  */ &mem46, &reg28, &mem56, NULL, // POP MEM:w:sx=$memv REG:SUPP:rw=$SPa MEM:SUPP:r:sx={BASE:r=$SPa SZ=SZ_V}
  /* 853  */ &reg101, &reg28, &mem56, NULL, // POP REG:w=$GPRvo   REG:SUPP:rw=$SPa MEM:SUPP:r:sx={BASE:r=$SPa SZ=SZ_V}
  /* 857  */ &reg124, &reg28, &mem56, NULL, // POP REG:w=ES       REG:SUPP:rw=$SPa MEM:SUPP:r:sx={BASE:r=$SPa SZ=SZ_V}
  /* 861  */ &reg125, &reg28, &mem56, NULL, // POP REG:w=SS       REG:SUPP:rw=$SPa MEM:SUPP:r:sx={BASE:r=$SPa SZ=SZ_V}
  /* 865  */ &reg126, &reg28, &mem56, NULL, // POP REG:w=DS       REG:SUPP:rw=$SPa MEM:SUPP:r:sx={BASE:r=$SPa SZ=SZ_V}
  /* 869  */ &reg127, &reg28, &mem56, NULL, // POP REG:w=FS       REG:SUPP:rw=$SPa MEM:SUPP:r:sx={BASE:r=$SPa SZ=SZ_V}
  /* 873  */ &reg128, &reg28, &mem56, NULL, // POP REG:w=GS       REG:SUPP:rw=$SPa MEM:SUPP:r:sx={BASE:r=$SPa SZ=SZ_V}
  /* 877  */ &reg33, &reg129, &reg60, &reg130, &reg131, &reg132, &reg133, &reg28, &mem57, NULL, // POPA  REG:SUPP:w=AX  REG:SUPP:w=CX  REG:SUPP:w=DX  REG:SUPP:w=BX  REG:SUPP:w=BP  REG:SUPP:w=SI  REG:SUPP:w=DI  REG:SUPP:rw=$SPa MEM:SUPP:r:sx={BASE:r=$SPa SZ=SZ_X}
  /* 887  */ &reg37, &reg134, &reg57, &reg55, &reg135, &reg136, &reg137, &reg28, &mem57, NULL, // POPAD REG:SUPP:w=EAX REG:SUPP:w=ECX REG:SUPP:w=EDX REG:SUPP:w=EBX REG:SUPP:w=EBP REG:SUPP:w=ESI REG:SUPP:w=EDI REG:SUPP:rw=$SPa MEM:SUPP:r:sx={BASE:r=$SPa SZ=SZ_X}
  /* 897  */ &reg28, &mem58, NULL, // POPF  REG:SUPP:rw=$SPa MEM:SUPP:r:s16={BASE:r=$SPa SZ=16}
  /* 900  */ &reg28, &mem59, NULL, // POPFD REG:SUPP:rw=$SPa MEM:SUPP:r:s32={BASE:r=$SPa SZ=32}
  /* 903  */ &reg28, &mem60, NULL, // POPFQ REG:SUPP:rw=$SPa MEM:SUPP:r:s64={BASE:r=$SPa SZ=64}
  /* 906  */ &reg11, &reg28, &mem12, NULL, // PUSH REG:r=$GPRvm   REG:SUPP:rw=$SPa MEM:SUPP:w:sx={BASE:r=$SPa SZ=SZ_V}
  /* 910  */ &mem3, &reg28, &mem12, NULL, // PUSH MEM:r:sx=$memv REG:SUPP:rw=$SPa MEM:SUPP:w:sx={BASE:r=$SPa SZ=SZ_V}
  /* 914  */ &reg138, &reg28, &mem12, NULL, // PUSH REG:r=$GPRvo   REG:SUPP:rw=$SPa MEM:SUPP:w:sx={BASE:r=$SPa SZ=SZ_V}
  /* 918  */ &imm1, &reg28, &mem12, NULL, // PUSH IMM:s8=$simm8  REG:SUPP:rw=$SPa MEM:SUPP:w:sx={BASE:r=$SPa SZ=SZ_V}
  /* 922  */ &imm2, &reg28, &mem12, NULL, // PUSH IMM:sx=$simmz  REG:SUPP:rw=$SPa MEM:SUPP:w:sx={BASE:r=$SPa SZ=SZ_V}
  /* 926  */ &reg139, &reg28, &mem12, NULL, // PUSH REG:r=ES       REG:SUPP:rw=$SPa MEM:SUPP:w:sx={BASE:r=$SPa SZ=SZ_V}
  /* 930  */ &reg140, &reg28, &mem12, NULL, // PUSH REG:r=CS       REG:SUPP:rw=$SPa MEM:SUPP:w:sx={BASE:r=$SPa SZ=SZ_V}
  /* 934  */ &reg141, &reg28, &mem12, NULL, // PUSH REG:r=SS       REG:SUPP:rw=$SPa MEM:SUPP:w:sx={BASE:r=$SPa SZ=SZ_V}
  /* 938  */ &reg142, &reg28, &mem12, NULL, // PUSH REG:r=DS       REG:SUPP:rw=$SPa MEM:SUPP:w:sx={BASE:r=$SPa SZ=SZ_V}
  /* 942  */ &reg143, &reg28, &mem12, NULL, // PUSH REG:r=FS       REG:SUPP:rw=$SPa MEM:SUPP:w:sx={BASE:r=$SPa SZ=SZ_V}
  /* 946  */ &reg144, &reg28, &mem12, NULL, // PUSH REG:r=GS       REG:SUPP:rw=$SPa MEM:SUPP:w:sx={BASE:r=$SPa SZ=SZ_V}
  /* 950  */ &reg38, &reg73, &reg71, &reg145, &reg146, &reg147, &reg148, &reg149, &reg28, &mem61, NULL, // PUSHA  REG:SUPP:r=AX  REG:SUPP:r=CX  REG:SUPP:r=DX  REG:SUPP:r=BX  REG:SUPP:r=SP  REG:SUPP:r=BP  REG:SUPP:r=SI  REG:SUPP:r=DI  REG:SUPP:rw=$SPa MEM:SUPP:w:sx={BASE:r=$SPa SZ=SZ_X}
  /* 961  */ &reg36, &reg52, &reg116, &reg53, &reg150, &reg151, &reg152, &reg153, &reg28, &mem61, NULL, // PUSHAD REG:SUPP:r=EAX REG:SUPP:r=ECX REG:SUPP:r=EDX REG:SUPP:r=EBX REG:SUPP:r=ESP REG:SUPP:r=EBP REG:SUPP:r=ESI REG:SUPP:r=EDI REG:SUPP:rw=$SPa MEM:SUPP:w:sx={BASE:r=$SPa SZ=SZ_X}
  /* 972  */ &reg28, &mem62, NULL, // PUSHF  REG:SUPP:rw=$SPa MEM:SUPP:w:s16={BASE:r=$SPa SZ=16}
  /* 975  */ &reg28, &mem63, NULL, // PUSHFD REG:SUPP:rw=$SPa MEM:SUPP:w:s32={BASE:r=$SPa SZ=32}
  /* 978  */ &reg28, &mem64, NULL, // PUSHFQ REG:SUPP:rw=$SPa MEM:SUPP:w:s64={BASE:r=$SPa SZ=64}
  /* 981  */ &reg37, &reg57, &reg52, NULL, // RDPMC REG:SUPP:w=EAX REG:SUPP:w=EDX REG:SUPP:r=ECX
  /* 985  */ &reg37, &reg57, NULL, // RDTSC REG:SUPP:w=EAX REG:SUPP:w=EDX
  /* 988  */ &reg29, &reg28, &mem56, NULL, // RET REG:SUPP:w=$IPa REG:SUPP:rw=$SPa MEM:SUPP:r:sx={BASE:r=$SPa SZ=SZ_V}
  /* 992  */ &reg29, &reg28, &mem65, NULL, // RET REG:SUPP:w=$IPa REG:SUPP:rw=$SPa MEM:SUPP:r:sx={BASE:r=$SPa SZ=SZ_F}
  /* 996  */ &imm3, &reg29, &reg28, &mem56, NULL, // RET IMM:s16=$simm16 REG:SUPP:w=$IPa  REG:SUPP:rw=$SPa                    MEM:SUPP:r:sx={BASE:r=$SPa SZ=SZ_V}
  /* 1001 */ &imm3, &reg29, &reg28, &mem65, NULL, // RET IMM:s16=$simm16 REG:SUPP:w=$IPa  REG:SUPP:rw=$SPa                    MEM:SUPP:r:sx={BASE:r=$SPa SZ=SZ_F}
  /* 1006 */ &reg17, &reg14, &rotate0, NULL, // RORX REG:w:s32=$GPR32r REG:r:s32=$GPR32m ROTATE:r:u8=$ror
  /* 1010 */ &reg19, &reg16, &rotate0, NULL, // RORX REG:w:s64=$GPR64r REG:r:s64=$GPR64m ROTATE:r:u8=$ror
  /* 1014 */ &reg17, &mem4, &rotate0, NULL, // RORX REG:w:s32=$GPR32r MEM:r:s32=$mem32  ROTATE:r:u8=$ror
  /* 1018 */ &reg19, &mem5, &rotate0, NULL, // RORX REG:w:s64=$GPR64r MEM:r:s64=$mem64  ROTATE:r:u8=$ror
  /* 1022 */ &reg4, &imm5, NULL, // SHR REG:rw=$GPR8m   IMM:u8=1
  /* 1025 */ &mem0, &imm5, NULL, // SHR MEM:rw:u8=$mem8 IMM:u8=1
  /* 1028 */ &reg4, &reg154, NULL, // SHR REG:rw=$GPR8m   REG:r=CL
  /* 1031 */ &mem0, &reg154, NULL, // SHR MEM:rw:u8=$mem8 REG:r=CL
  /* 1034 */ &reg4, &rotate1, NULL, // ROL REG:rw=$GPR8m   ROTATE:r:u8=$rol
  /* 1037 */ &mem0, &rotate1, NULL, // ROL MEM:rw:u8=$mem8 ROTATE:r:u8=$rol
  /* 1040 */ &reg6, &imm5, NULL, // SHR REG:rw=$GPRvm   IMM:u8=1
  /* 1043 */ &mem1, &imm5, NULL, // SHR MEM:rw:sx=$memv IMM:u8=1
  /* 1046 */ &reg6, &reg154, NULL, // SHR REG:rw=$GPRvm   REG:r=CL
  /* 1049 */ &mem1, &reg154, NULL, // SHR MEM:rw:sx=$memv REG:r=CL
  /* 1052 */ &reg6, &rotate1, NULL, // ROL REG:rw=$GPRvm   ROTATE:r:u8=$rol
  /* 1055 */ &mem1, &rotate1, NULL, // ROL MEM:rw:sx=$memv ROTATE:r:u8=$rol
  /* 1058 */ &reg4, &rotate0, NULL, // ROR REG:rw=$GPR8m   ROTATE:r:u8=$ror
  /* 1061 */ &mem0, &rotate0, NULL, // ROR MEM:rw:u8=$mem8 ROTATE:r:u8=$ror
  /* 1064 */ &reg6, &rotate0, NULL, // ROR REG:rw=$GPRvm   ROTATE:r:u8=$ror
  /* 1067 */ &mem1, &rotate0, NULL, // ROR MEM:rw:sx=$memv ROTATE:r:u8=$ror
  /* 1070 */ &reg155, NULL, // SAHF REG:SUPP:r=AH
  /* 1072 */ &reg79, NULL, // SALC REG:SUPP:w=AL
  /* 1074 */ &reg34, &mem14, NULL, // SCASB REG:SUPP:r=AL  MEM:SUPP:r:u8={SEG:r=ES BASE:r=$DIa SZ=8}
  /* 1077 */ &reg34, &mem16, &reg41, NULL, // SCASB REG:SUPP:r=AL  MEM:SUPP:cr:u8={SEG:r=ES BASE:r=$DIa SZ=8}   REG:SUPP:rcw=$CXa
  /* 1081 */ &reg36, &mem18, NULL, // SCASD REG:SUPP:r=EAX MEM:SUPP:r:s32={SEG:r=ES BASE:r=$DIa SZ=32}
  /* 1084 */ &reg36, &mem20, &reg41, NULL, // SCASD REG:SUPP:r=EAX MEM:SUPP:cr:s32={SEG:r=ES BASE:r=$DIa SZ=32} REG:SUPP:rcw=$CXa
  /* 1088 */ &reg59, &mem22, NULL, // SCASQ REG:SUPP:r=RAX MEM:SUPP:r:s64={SEG:r=ES BASE:r=$DIa SZ=64}
  /* 1091 */ &reg59, &mem24, &reg41, NULL, // SCASQ REG:SUPP:r=RAX MEM:SUPP:cr:s64={SEG:r=ES BASE:r=$DIa SZ=64} REG:SUPP:rcw=$CXa
  /* 1095 */ &reg38, &mem26, NULL, // SCASW REG:SUPP:r=AX  MEM:SUPP:r:s16={SEG:r=ES BASE:r=$DIa SZ=16}
  /* 1098 */ &reg38, &mem28, &reg41, NULL, // SCASW REG:SUPP:r=AX  MEM:SUPP:cr:s16={SEG:r=ES BASE:r=$DIa SZ=16} REG:SUPP:rcw=$CXa
  /* 1102 */ &reg97, NULL, // SETZ   REG:w=$GPR8m
  /* 1104 */ &mem45, NULL, // SETZ   MEM:w:u8=$mem8
  /* 1106 */ &mem66, &reg156, NULL, // SGDT MEM:w=$mem80  REG:SUPP:r=GDTR
  /* 1109 */ &mem67, &reg156, NULL, // SGDT MEM:w=$memppr REG:SUPP:r=GDTR
  /* 1112 */ &vreg0, &vreg1, &vreg6, NULL, // SHA256RNDS2 VREG:rw:s32=$XMMr VREG:r:s32=$XMMm  VREG:SUPP:r:u8=XMM0
  /* 1116 */ &vreg0, &mem6, &vreg6, NULL, // SHA256RNDS2 VREG:rw:s32=$XMMr MEM:r:s32=$mem128 VREG:SUPP:r:u8=XMM0
  /* 1120 */ &reg4, &shift0, NULL, // SHR REG:rw=$GPR8m   SHIFT:r:u8=$shr
  /* 1123 */ &mem0, &shift0, NULL, // SHR MEM:rw:u8=$mem8 SHIFT:r:u8=$shr
  /* 1126 */ &reg6, &shift0, NULL, // SHR REG:rw=$GPRvm   SHIFT:r:u8=$shr
  /* 1129 */ &mem1, &shift0, NULL, // SHR MEM:rw:sx=$memv SHIFT:r:u8=$shr
  /* 1132 */ &reg4, &shift1, NULL, // SHL REG:rw=$GPR8m   SHIFT:r:u8=$shl
  /* 1135 */ &mem0, &shift1, NULL, // SHL MEM:rw:u8=$mem8 SHIFT:r:u8=$shl
  /* 1138 */ &reg6, &shift1, NULL, // SHL REG:rw=$GPRvm   SHIFT:r:u8=$shl
  /* 1141 */ &mem1, &shift1, NULL, // SHL MEM:rw:sx=$memv SHIFT:r:u8=$shl
  /* 1144 */ &reg44, &reg7, &reg154, NULL, // SHRD REG:rcw=$GPRvm   REG:r=$GPRvr REG:r=CL
  /* 1148 */ &mem30, &reg7, &reg154, NULL, // SHRD MEM:rcw:sx=$memv REG:r=$GPRvr REG:r=CL
  /* 1152 */ &reg44, &reg7, &shift1, NULL, // SHLD REG:rcw=$GPRvm   REG:r=$GPRvr SHIFT:r:u8=$shl
  /* 1156 */ &mem30, &reg7, &shift1, NULL, // SHLD MEM:rcw:sx=$memv REG:r=$GPRvr SHIFT:r:u8=$shl
  /* 1160 */ &reg44, &reg7, &shift0, NULL, // SHRD REG:rcw=$GPRvm   REG:r=$GPRvr SHIFT:r:u8=$shr
  /* 1164 */ &mem30, &reg7, &shift0, NULL, // SHRD MEM:rcw:sx=$memv REG:r=$GPRvr SHIFT:r:u8=$shr
  /* 1168 */ &mem66, &reg157, NULL, // SIDT MEM:w=$mem80  REG:SUPP:r=IDTR
  /* 1171 */ &mem67, &reg157, NULL, // SIDT MEM:w=$memppr REG:SUPP:r=IDTR
  /* 1174 */ &reg98, &reg158, NULL, // SLDT REG:w=$GPRvm     REG:SUPP:r=LDTR
  /* 1177 */ &mem47, &reg158, NULL, // SLDT MEM:w:s16=$mem16 REG:SUPP:r=LDTR
  /* 1180 */ &reg98, &reg159, NULL, // SMSW REG:w=$GPRvm     REG:SUPP:r=CR0
  /* 1183 */ &mem47, &reg159, NULL, // SMSW MEM:w:s16=$mem16 REG:SUPP:r=CR0
  /* 1186 */ &mem33, &reg34, NULL, // STOSB MEM:SUPP:w:u8={SEG:r=ES BASE:r=$DIa SZ=8}    REG:SUPP:r=AL
  /* 1189 */ &mem34, &reg34, &reg41, NULL, // STOSB MEM:SUPP:cw:u8={SEG:r=ES BASE:r=$DIa SZ=8}   REG:SUPP:r=AL  REG:SUPP:rcw=$CXa
  /* 1193 */ &mem35, &reg36, NULL, // STOSD MEM:SUPP:w:s32={SEG:r=ES BASE:r=$DIa SZ=32}  REG:SUPP:r=EAX
  /* 1196 */ &mem36, &reg36, &reg41, NULL, // STOSD MEM:SUPP:cw:s32={SEG:r=ES BASE:r=$DIa SZ=32} REG:SUPP:r=EAX REG:SUPP:rcw=$CXa
  /* 1200 */ &mem53, &reg59, NULL, // STOSQ MEM:SUPP:w:s64={SEG:r=ES BASE:r=$DIa SZ=64}  REG:SUPP:r=RAX
  /* 1203 */ &mem54, &reg59, &reg41, NULL, // STOSQ MEM:SUPP:cw:s64={SEG:r=ES BASE:r=$DIa SZ=64} REG:SUPP:r=RAX REG:SUPP:rcw=$CXa
  /* 1207 */ &mem37, &reg38, NULL, // STOSW MEM:SUPP:w:s16={SEG:r=ES BASE:r=$DIa SZ=16}  REG:SUPP:r=AX
  /* 1210 */ &mem38, &reg38, &reg41, NULL, // STOSW MEM:SUPP:cw:s16={SEG:r=ES BASE:r=$DIa SZ=16} REG:SUPP:r=AX  REG:SUPP:rcw=$CXa
  /* 1214 */ &reg98, &reg160, NULL, // STR REG:w=$GPRvm     REG:SUPP:r=TR
  /* 1217 */ &mem47, &reg160, NULL, // STR MEM:w:s16=$mem16 REG:SUPP:r=TR
  /* 1220 */ &reg72, &reg161, &reg162, &reg163, &reg96, NULL, // SYSCALL REG:SUPP:w=RIP REG:SUPP:w=RCX REG:SUPP:w=R11 REG:SUPP:w=CS REG:SUPP:w=SS
  /* 1226 */ &reg72, &reg164, NULL, // SYSENTER REG:SUPP:w=RIP REG:SUPP:w=RSP
  /* 1229 */ &reg27, &reg165, NULL, // SYSENTER REG:SUPP:w=EIP REG:SUPP:w=ESP
  /* 1232 */ &reg72, &reg164, &reg48, &reg117, NULL, // SYSEXIT REG:SUPP:w=RIP REG:SUPP:w=RSP REG:SUPP:r=RCX REG:SUPP:r=RDX
  /* 1237 */ &reg27, &reg165, &reg52, &reg116, NULL, // SYSEXIT REG:SUPP:w=EIP REG:SUPP:w=ESP REG:SUPP:r=ECX REG:SUPP:r=EDX
  /* 1242 */ &reg72, &reg48, &reg166, &reg163, &reg96, NULL, // SYSRET REG:SUPP:w=RIP REG:SUPP:r=RCX REG:SUPP:r=R11 REG:SUPP:w=CS REG:SUPP:w=SS
  /* 1248 */ &reg27, &reg52, &reg166, &reg163, &reg96, NULL, // SYSRET REG:SUPP:w=EIP REG:SUPP:r=ECX REG:SUPP:r=R11 REG:SUPP:w=CS REG:SUPP:w=SS
  /* 1254 */ &reg167, &reg113, NULL, // VMWRITE REG:r=$GPR32r REG:r=$GPR32m
  /* 1257 */ &reg167, &mem4, NULL, // VMWRITE REG:r=$GPR32r MEM:r:s32=$mem32
  /* 1260 */ &vreg7, &vreg8, NULL, // VCVTPH2PS VREG:w:f32=$XMMr VREG:r:f16=$XMMm
  /* 1263 */ &vreg9, &vreg8, NULL, // VCVTPH2PS VREG:w:f32=$YMMr VREG:r:f16=$XMMm
  /* 1266 */ &vreg7, &mem68, NULL, // VCVTPH2PS VREG:w:f32=$XMMr MEM:r:f16=$mem64
  /* 1269 */ &vreg9, &mem69, NULL, // VCVTPH2PS VREG:w:f32=$YMMr MEM:r:f16=$mem128
  /* 1272 */ &vreg10, &vreg11, &rndc0, NULL, // VCVTPS2PH VREG:w:f16=$XMMm  VREG:r:f32=$XMMr RNDC:r:u8=$rndc3
  /* 1276 */ &vreg10, &vreg12, &rndc0, NULL, // VCVTPS2PH VREG:w:f16=$XMMm  VREG:r:f32=$YMMr RNDC:r:u8=$rndc3
  /* 1280 */ &mem70, &vreg11, &rndc0, NULL, // VCVTPS2PH MEM:w:f16=$mem64  VREG:r:f32=$XMMr RNDC:r:u8=$rndc3
  /* 1284 */ &mem71, &vreg12, &rndc0, NULL, // VCVTPS2PH MEM:w:f16=$mem128 VREG:r:f32=$YMMr RNDC:r:u8=$rndc3
  /* 1288 */ &reg76, NULL, // VERW REG:r=$GPR16m
  /* 1290 */ &mem40, NULL, // VERW MEM:r:s16=$mem16
  /* 1292 */ &reg36, &reg116, &reg52, NULL, // WRMSR REG:SUPP:r=EAX REG:SUPP:r=EDX REG:SUPP:r=ECX
  /* 1296 */ &reg4, &reg8, NULL, // XCHG REG:rw=$GPR8m   REG:rw=$GPR8r
  /* 1299 */ &mem0, &reg8, NULL, // XCHG MEM:rw:u8=$mem8 REG:rw=$GPR8r
  /* 1302 */ &reg6, &reg10, NULL, // XCHG REG:rw=$GPRvm   REG:rw=$GPRvr
  /* 1305 */ &mem1, &reg10, NULL, // XCHG MEM:rw:sx=$memv REG:rw=$GPRvr
  /* 1308 */ &reg26, &reg12, NULL, // XCHG REG:rw=$GPRvo   REG:rw=$AXv
  /* 1311 */ &mem72, &reg79, NULL, // XLAT MEM:SUPP:r:u8={SEG:r=DS BASE:r=$BXa SZ=8} REG:SUPP:w=AL
  /* 1314 */ &reg168, NULL, // FXAM REG:SUPP:rw:f80=ST0
  /* 1316 */ &reg169, &mem73, NULL, // FBLD REG:w:f80=ST0 MEM:r:bcd80=$mem80
  /* 1319 */ &mem74, &reg170, NULL, // FBSTP MEM:w:bcd80=$mem80 REG:r:f80=ST0
  /* 1322 */ &reg171, &reg172, NULL, // FCMOVU   REG:cw:f80=ST0 REG:r:f80=$FPm
  /* 1325 */ &reg173, &reg174, NULL, // FUCOMPP REG:SUPP:r:f80=ST0 REG:SUPP:r:f80=ST1
  /* 1328 */ &reg170, &reg172, NULL, // FUCOMIP REG:r:f80=ST0 REG:r:f80=$FPm
  /* 1331 */ &reg170, &mem75, NULL, // FCOM   REG:r:f80=ST0      MEM:r:f32=$mem32
  /* 1334 */ &reg170, &mem76, NULL, // FCOM   REG:r:f80=ST0      MEM:r:f64=$mem64
  /* 1337 */ &reg172, NULL, // FFREEP REG:r:f80=$FPm
  /* 1339 */ &reg170, &mem4, NULL, // FICOM  REG:r:f80=ST0 MEM:r:s32=$mem32
  /* 1342 */ &reg170, &mem40, NULL, // FICOM  REG:r:f80=ST0 MEM:r:s16=$mem16
  /* 1345 */ &reg169, &mem4, NULL, // FILD REG:w:f80=ST0 MEM:r:s32=$mem32
  /* 1348 */ &reg169, &mem5, NULL, // FILD REG:w:f80=ST0 MEM:r:s64=$mem64
  /* 1351 */ &reg169, &mem40, NULL, // FILD REG:w:f80=ST0 MEM:r:s16=$mem16
  /* 1354 */ &mem77, &reg170, NULL, // FISTTP MEM:w:s32=$mem32 REG:r:f80=ST0
  /* 1357 */ &mem78, &reg170, NULL, // FISTTP MEM:w:s64=$mem64 REG:r:f80=ST0
  /* 1360 */ &mem47, &reg170, NULL, // FISTTP MEM:w:s16=$mem16 REG:r:f80=ST0
  /* 1363 */ &reg169, &mem79, NULL, // FLD REG:w:f80=ST0 MEM:r:f80=$mem80
  /* 1366 */ &reg169, &mem76, NULL, // FLD REG:w:f80=ST0 MEM:r:f64=$mem64
  /* 1369 */ &reg169, &reg172, NULL, // FLD REG:w:f80=ST0 REG:r:f80=$FPm
  /* 1372 */ &reg169, &mem75, NULL, // FLD REG:w:f80=ST0 MEM:r:f32=$mem32
  /* 1375 */ &mem80, NULL, // FLDCW MEM:r=$mem16
  /* 1377 */ &mem81, NULL, // FLDENV MEM:r=$mem112
  /* 1379 */ &mem82, NULL, // FLDENV MEM:r=$mem224
  /* 1381 */ &reg175, NULL, // FLDZ   REG:SUPP:w:f80=ST0
  /* 1383 */ &reg173, &reg176, NULL, // FYL2XP1 REG:SUPP:r:f80=ST0 REG:SUPP:rw:f80=ST1
  /* 1386 */ &reg168, &reg174, NULL, // FSCALE REG:SUPP:rw:f80=ST0 REG:SUPP:r:f80=ST1
  /* 1389 */ &reg168, &reg177, NULL, // FXTRACT REG:SUPP:rw:f80=ST0 REG:SUPP:w:f80=ST1
  /* 1392 */ &mem83, NULL, // FRSTOR MEM:r=$mem752
  /* 1394 */ &mem84, NULL, // FRSTOR MEM:r=$mem864
  /* 1396 */ &mem85, NULL, // FNSAVE MEM:w=$mem752
  /* 1398 */ &mem86, NULL, // FNSAVE MEM:w=$mem864
  /* 1400 */ &mem87, &reg170, NULL, // FSTP MEM:w:f80=$mem80 REG:r:f80=ST0
  /* 1403 */ &reg178, &reg170, NULL, // FSTPNCE REG:w:f80=$FPm REG:r:f80=ST0
  /* 1406 */ &mem88, &reg170, NULL, // FST  MEM:w:f32=$mem32 REG:r:f80=ST0
  /* 1409 */ &mem89, &reg170, NULL, // FST  MEM:w:f64=$mem64 REG:r:f80=ST0
  /* 1412 */ &reg179, &reg180, NULL, // FXCH REG:rw:f80=ST0 REG:rw:f80=$FPm
  /* 1415 */ &reg180, &reg170, NULL, // FSUBR  REG:rw:f80=$FPm REG:r:f80=ST0
  /* 1418 */ &reg179, &reg172, NULL, // FSUBR  REG:rw:f80=ST0  REG:r:f80=$FPm
  /* 1421 */ &reg179, &mem75, NULL, // FSUBR  REG:rw:f80=ST0  MEM:r:f32=$mem32
  /* 1424 */ &reg179, &mem76, NULL, // FSUBR  REG:rw:f80=ST0  MEM:r:f64=$mem64
  /* 1427 */ &reg179, &mem4, NULL, // FISUBR REG:rw:f80=ST0  MEM:r:s32=$mem32
  /* 1430 */ &reg179, &mem40, NULL, // FISUBR REG:rw:f80=ST0  MEM:r:s16=$mem16
  /* 1433 */ &mem90, NULL, // FNSTSW MEM:w=$mem16
  /* 1435 */ &mem91, NULL, // FNSTENV MEM:w=$mem112
  /* 1437 */ &mem92, NULL, // FNSTENV MEM:w=$mem224
  /* 1439 */ &reg69, NULL, // FNSTSW REG:w=AX
  /* 1441 */ &reg181, &agen0, NULL, // BNDCU REG:r=$BNDr AGEN:r=$agen
  /* 1444 */ &reg181, &reg112, NULL, // BNDCU REG:r=$BNDr REG:r=$GPR64m
  /* 1447 */ &reg181, &reg113, NULL, // BNDCU REG:r=$BNDr REG:r=$GPR32m
  /* 1450 */ &reg182, &mib0, NULL, // BNDLDX REG:w=$BNDr MIB:r:u64=$mib192
  /* 1453 */ &reg182, &mib1, NULL, // BNDLDX REG:w=$BNDr MIB:r:u32=$mib96
  /* 1456 */ &reg182, &agen0, NULL, // BNDMK REG:w=$BNDr AGEN:r=$agen
  /* 1459 */ &reg183, &reg181, NULL, // BNDMOV REG:w=$BNDm       REG:r=$BNDr
  /* 1462 */ &mem93, &reg181, NULL, // BNDMOV MEM:w:u64=$mem128 REG:r=$BNDr
  /* 1465 */ &mem94, &reg181, NULL, // BNDMOV MEM:w:u32=$mem64  REG:r=$BNDr
  /* 1468 */ &reg182, &reg184, NULL, // BNDMOV REG:w=$BNDr       REG:r=$BNDm
  /* 1471 */ &reg182, &mem95, NULL, // BNDMOV REG:w=$BNDr       MEM:r:u64=$mem128
  /* 1474 */ &reg182, &mem96, NULL, // BNDMOV REG:w=$BNDr       MEM:r:u32=$mem64
  /* 1477 */ &mib2, &reg181, NULL, // BNDSTX MIB:w:u64=$mib192 REG:r=$BNDr
  /* 1480 */ &mib3, &reg181, NULL, // BNDSTX MIB:w:u32=$mib96  REG:r=$BNDr
  /* 1483 */ &mem97, NULL, // CLWB MEM:r:s64=$mem512
  /* 1485 */ &mem98, NULL, // RSTORSSP MEM:rw:u64=$mem64
  /* 1487 */ &reg36, &reg185, &reg186, &reg187, NULL, // ENCLU REG:SUPP:r=EAX REG:SUPP:crw=RBX REG:SUPP:crw=RCX REG:SUPP:crw=RDX
  /* 1492 */ &reg36, &reg188, &reg56, &reg189, NULL, // ENCLU REG:SUPP:r=EAX REG:SUPP:crw=EBX REG:SUPP:crw=ECX REG:SUPP:crw=EDX
  /* 1497 */ &reg190, &reg191, &reg192, &reg193, NULL, // ENCLV REG:SUPP:r:u32=EAX REG:SUPP:crw:u64=RBX REG:SUPP:crw:u64=RCX REG:SUPP:crw:u64=RDX
  /* 1502 */ &reg190, &reg194, &reg195, &reg196, NULL, // ENCLV REG:SUPP:r:u32=EAX REG:SUPP:crw:u64=EBX REG:SUPP:crw:u64=ECX REG:SUPP:crw:u64=EDX
  /* 1507 */ &reg105, &mem48, NULL, // ENQCMDS REG:r=$GPRar MEM:r:u32=$mem512
  /* 1510 */ &reg51, &reg53, NULL, // GETSEC REG:SUPP:rcw=EAX REG:SUPP:r=EBX
  /* 1513 */ &reg197, NULL, // INCSSPD REG:r:u8=$GPR32m
  /* 1515 */ &reg198, NULL, // INCSSPQ REG:r:u8=$GPR64m
  /* 1517 */ &reg199, &mem6, NULL, // INVVPID REG:r=$GPR64r MEM:r:s32=$mem128
  /* 1520 */ &reg167, &mem6, NULL, // INVVPID REG:r=$GPR32r MEM:r:s32=$mem128
  /* 1523 */ &reg200, &reg48, &reg117, NULL, // MONITORX REG:SUPP:r=$AXa REG:SUPP:r=RCX REG:SUPP:r=RDX
  /* 1527 */ &reg200, &reg52, &reg116, NULL, // MONITORX REG:SUPP:r=$AXa REG:SUPP:r=ECX REG:SUPP:r=EDX
  /* 1531 */ &reg59, &reg48, NULL, // MWAITX REG:SUPP:r=RAX REG:SUPP:r=RCX
  /* 1534 */ &reg36, &reg52, NULL, // MWAITX REG:SUPP:r=EAX REG:SUPP:r=ECX
  /* 1537 */ &reg201, NULL, // WRGSBASE REG:r=$GPRym
  /* 1539 */ &mem99, NULL, // PTWRITE MEM:r:sx=$memy
  /* 1541 */ &reg202, NULL, // RDSSPQ REG:w:u64=$GPR64m
  /* 1543 */ &reg203, NULL, // RDSSPD REG:w:u32=$GPR32m
  /* 1545 */ &reg204, &reg57, &reg37, &reg52, NULL, // RDPKRU REG:SUPP:r=PKRU REG:SUPP:w=EDX REG:SUPP:w=EAX REG:SUPP:r=ECX
  /* 1550 */ &reg98, NULL, // RDSEED REG:w=$GPRvm
  /* 1552 */ &reg37, &reg57, &reg134, NULL, // RDTSCP REG:SUPP:w=EAX REG:SUPP:w=EDX REG:SUPP:w=ECX
  /* 1556 */ &reg205, NULL, // RDGSBASE REG:w=$GPRym
  /* 1558 */ &reg206, &reg207, &reg190, NULL, // UMWAIT REG:r:u32=$GPR32m REG:SUPP:r:u32=EDX REG:SUPP:r:u32=EAX
  /* 1562 */ &reg208, &reg207, &reg190, NULL, // UMWAIT REG:r:u64=$GPR64m REG:SUPP:r:u32=EDX REG:SUPP:r:u32=EAX
  /* 1566 */ &reg209, NULL, // UMONITOR REG:r=$GPRam
  /* 1568 */ &mem5, NULL, // VMXON MEM:r:s64=$mem64
  /* 1570 */ &reg36, NULL, // VMFUNC REG:SUPP:r=EAX
  /* 1572 */ &mem78, NULL, // VMPTRST MEM:w:s64=$mem64
  /* 1574 */ &reg108, &reg199, NULL, // VMREAD REG:w=$GPR64m    REG:r=$GPR64r
  /* 1577 */ &mem78, &reg199, NULL, // MOVNTI MEM:w:s64=$mem64 REG:r=$GPR64r
  /* 1580 */ &reg110, &reg167, NULL, // VMREAD REG:w=$GPR32m    REG:r=$GPR32r
  /* 1583 */ &mem77, &reg167, NULL, // MOVNTI MEM:w:s32=$mem32 REG:r=$GPR32r
  /* 1586 */ &reg199, &reg112, NULL, // VMWRITE REG:r=$GPR64r REG:r=$GPR64m
  /* 1589 */ &reg199, &mem5, NULL, // VMWRITE REG:r=$GPR64r MEM:r:s64=$mem64
  /* 1592 */ &reg210, &reg116, &reg36, &reg52, NULL, // WRPKRU REG:SUPP:w=PKRU REG:SUPP:r=EDX REG:SUPP:r=EAX REG:SUPP:r=ECX
  /* 1597 */ &imm0, &reg51, NULL, // XABORT IMM:u8=$uimm8 REG:SUPP:rcw=EAX
  /* 1600 */ &rel1, &reg30, &reg81, NULL, // XBEGIN REL:sx=$relz REG:SUPP:rw=$IPa REG:SUPP:cw=EAX
  /* 1604 */ &reg52, &reg57, &reg37, &reg211, NULL, // XGETBV REG:SUPP:r=ECX REG:SUPP:w=EDX REG:SUPP:w=EAX REG:SUPP:r=XCR0
  /* 1609 */ &mem100, &reg116, &reg36, &reg211, NULL, // XRSTORS64 MEM:r=$mem4608 REG:SUPP:r=EDX REG:SUPP:r=EAX REG:SUPP:r=XCR0
  /* 1614 */ &mem101, &reg116, &reg36, &reg211, NULL, // XSAVEOPT64 MEM:rw=$mem4608 REG:SUPP:r=EDX REG:SUPP:r=EAX REG:SUPP:r=XCR0
  /* 1619 */ &mem102, &reg116, &reg36, &reg211, NULL, // XSAVES64 MEM:w=$mem4608 REG:SUPP:r=EDX REG:SUPP:r=EAX REG:SUPP:r=XCR0
  /* 1624 */ &reg52, &reg116, &reg36, &reg212, NULL, // XSETBV REG:SUPP:r=ECX REG:SUPP:r=EDX REG:SUPP:r=EAX REG:SUPP:w=XCR0
  /* 1629 */ &reg213, &reg214, NULL, // PSUBQ REG:rw:s64=$MMXr  REG:r:s64=$MMXm
  /* 1632 */ &reg213, &mem5, NULL, // PSUBQ REG:rw:s64=$MMXr  MEM:r:s64=$mem64
  /* 1635 */ &mem103, NULL, // VPREFETCHNTA MEM:r:s64=$mem8
  /* 1637 */ &reg215, &reg216, &mem104, NULL, // MASKMOVQ REG:r:u8=$MMXr REG:r:s8=$MMXm MEM:SUPP:w:s64={SEG:r=DS BASE:r=$DIa SZ=64}
  /* 1641 */ &mem78, &reg217, NULL, // MOVQ MEM:w:s64=$mem64 REG:r:s64=$MMXr
  /* 1644 */ &reg108, &reg217, NULL, // MOVQ REG:w=$GPR64m    REG:r:s64=$MMXr
  /* 1647 */ &reg218, &reg217, NULL, // MOVQ REG:w:s64=$MMXm  REG:r:s64=$MMXr
  /* 1650 */ &reg219, &reg112, NULL, // MOVQ REG:w:s64=$MMXr  REG:r=$GPR64m
  /* 1653 */ &reg219, &mem5, NULL, // PABSW REG:w:s64=$MMXr  MEM:r:s64=$mem64
  /* 1656 */ &reg219, &reg214, NULL, // PABSW REG:w:s64=$MMXr  REG:r:s64=$MMXm
  /* 1659 */ &reg110, &reg220, NULL, // MOVD REG:w=$GPR32m    REG:r:s32=$MMXr
  /* 1662 */ &mem77, &reg220, NULL, // MOVD MEM:w:s32=$mem32 REG:r:s32=$MMXr
  /* 1665 */ &reg219, &reg113, NULL, // MOVD REG:w:s64=$MMXr  REG:r=$GPR32m
  /* 1668 */ &reg219, &mem4, NULL, // MOVD REG:w:s64=$MMXr  MEM:r:s32=$mem32
  /* 1671 */ &reg221, &reg222, NULL, // PCMPGTD REG:rw:s32=$MMXr REG:r:s32=$MMXm
  /* 1674 */ &reg221, &mem9, NULL, // PCMPGTD REG:rw:s32=$MMXr MEM:r:s32=$mem64
  /* 1677 */ &reg223, &reg224, NULL, // PMULLW REG:rw:s16=$MMXr REG:r:s16=$MMXm
  /* 1680 */ &reg223, &mem105, NULL, // PMULLW REG:rw:s16=$MMXr MEM:r:s16=$mem64
  /* 1683 */ &reg225, &reg216, NULL, // PMADDUBSW REG:rw:s8=$MMXr  REG:r:s8=$MMXm
  /* 1686 */ &reg225, &mem106, NULL, // PMADDUBSW REG:rw:s8=$MMXr  MEM:r:s8=$mem64
  /* 1689 */ &reg226, &reg227, &imm6, NULL, // PEXTRW REG:w=$GPR32r REG:r:u16=$MMXm IMM:u8=$index
  /* 1693 */ &reg228, &reg113, &imm6, NULL, // PINSRW REG:rw:u16=$MMXr REG:r=$GPR32m    IMM:u8=$index
  /* 1697 */ &reg228, &mem107, &imm6, NULL, // PINSRW REG:rw:u16=$MMXr MEM:r:u16=$mem16 IMM:u8=$index
  /* 1701 */ &reg226, &reg216, NULL, // PMOVMSKB REG:w=$GPR32r REG:r:s8=$MMXm
  /* 1704 */ &reg228, &reg227, NULL, // PUNPCKLWD REG:rw:u16=$MMXr REG:r:u16=$MMXm
  /* 1707 */ &reg228, &mem108, NULL, // PMULHUW REG:rw:u16=$MMXr MEM:r:u16=$mem64
  /* 1710 */ &reg229, &reg227, &order0, NULL, // PSHUFW REG:w:u16=$MMXr REG:r:u16=$MMXm  ORDER:r:u8=$order
  /* 1714 */ &reg229, &mem108, &order0, NULL, // PSHUFW REG:w:u16=$MMXr MEM:r:u16=$mem64 ORDER:r:u8=$order
  /* 1718 */ &reg230, &shift1, NULL, // PSLLD REG:rw:u32=$MMXm SHIFT:r:u8=$shl
  /* 1721 */ &reg231, &reg214, NULL, // PSRLD REG:rw:u32=$MMXr REG:r:s64=$MMXm
  /* 1724 */ &reg231, &mem5, NULL, // PSRLD REG:rw:u32=$MMXr MEM:r:s64=$mem64
  /* 1727 */ &reg232, &shift1, NULL, // PSLLQ REG:rw:u64=$MMXm SHIFT:r:u8=$shl
  /* 1730 */ &reg233, &reg214, NULL, // PSRLQ REG:rw:u64=$MMXr REG:r:s64=$MMXm
  /* 1733 */ &reg233, &mem5, NULL, // PSRLQ REG:rw:u64=$MMXr MEM:r:s64=$mem64
  /* 1736 */ &reg234, &shift1, NULL, // PSLLW REG:rw:u16=$MMXm SHIFT:r:u8=$shl
  /* 1739 */ &reg228, &reg214, NULL, // PSRLW REG:rw:u16=$MMXr REG:r:s64=$MMXm
  /* 1742 */ &reg228, &mem5, NULL, // PSRLW REG:rw:u16=$MMXr MEM:r:s64=$mem64
  /* 1745 */ &reg235, &shift0, NULL, // PSRAD REG:rw:s32=$MMXm SHIFT:r:u8=$shr
  /* 1748 */ &reg221, &reg214, NULL, // PSRAD REG:rw:s32=$MMXr REG:r:s64=$MMXm
  /* 1751 */ &reg221, &mem5, NULL, // PSRAD REG:rw:s32=$MMXr MEM:r:s64=$mem64
  /* 1754 */ &reg236, &shift0, NULL, // PSRAW REG:rw:s16=$MMXm SHIFT:r:u8=$shr
  /* 1757 */ &reg223, &reg214, NULL, // PSRAW REG:rw:s16=$MMXr REG:r:s64=$MMXm
  /* 1760 */ &reg223, &mem5, NULL, // PSRAW REG:rw:s16=$MMXr MEM:r:s64=$mem64
  /* 1763 */ &reg230, &shift0, NULL, // PSRLD REG:rw:u32=$MMXm SHIFT:r:u8=$shr
  /* 1766 */ &reg232, &shift0, NULL, // PSRLQ REG:rw:u64=$MMXm SHIFT:r:u8=$shr
  /* 1769 */ &reg234, &shift0, NULL, // PSRLW REG:rw:u16=$MMXm SHIFT:r:u8=$shr
  /* 1772 */ &reg213, &reg222, NULL, // PUNPCKHWD REG:rw:s64=$MMXr REG:r:s32=$MMXm
  /* 1775 */ &reg237, &reg238, NULL, // PUNPCKLBW REG:rw:u8=$MMXr  REG:r:u8=$MMXm
  /* 1778 */ &reg237, &mem109, NULL, // PUNPCKLBW REG:rw:u8=$MMXr  MEM:r:u8=$mem32
  /* 1781 */ &reg231, &reg239, NULL, // PMULUDQ REG:rw:u32=$MMXr  REG:r:u32=$MMXm
  /* 1784 */ &reg231, &mem110, NULL, // PUNPCKLDQ REG:rw:u32=$MMXr MEM:r:u32=$mem32
  /* 1787 */ &reg228, &mem111, NULL, // PUNPCKLWD REG:rw:u16=$MMXr MEM:r:u16=$mem32
  /* 1790 */ &vreg13, &vreg14, NULL, // XORPD VREG:rw:f64=$XMMr VREG:r:f64=$XMMm
  /* 1793 */ &vreg13, &mem112, NULL, // XORPD VREG:rw:f64=$XMMr MEM:r:f64=$mem128
  /* 1796 */ &vreg15, &vreg16, NULL, // XORPS VREG:rw:f32=$XMMr VREG:r:f32=$XMMm
  /* 1799 */ &vreg15, &mem113, NULL, // XORPS VREG:rw:f32=$XMMr MEM:r:f32=$mem128
  /* 1802 */ &reg240, &reg241, NULL, // SUBSD REG:rw:f64=$XMMr REG:r:f64=$XMMm
  /* 1805 */ &reg240, &mem76, NULL, // SUBSD REG:rw:f64=$XMMr MEM:r:f64=$mem64
  /* 1808 */ &reg242, &reg243, NULL, // SUBSS REG:rw:f32=$XMMr REG:r:f32=$XMMm
  /* 1811 */ &reg242, &mem75, NULL, // SUBSS REG:rw:f32=$XMMr MEM:r:f32=$mem32
  /* 1814 */ &vreg13, &vreg14, &imm0, NULL, // DPPD VREG:rw:f64=$XMMr VREG:r:f64=$XMMm  IMM:u8=$uimm8
  /* 1818 */ &vreg13, &mem112, &imm0, NULL, // DPPD VREG:rw:f64=$XMMr MEM:r:f64=$mem128 IMM:u8=$uimm8
  /* 1822 */ &vreg15, &vreg16, &imm0, NULL, // DPPS VREG:rw:f32=$XMMr VREG:r:f32=$XMMm  IMM:u8=$uimm8
  /* 1826 */ &vreg15, &mem113, &imm0, NULL, // DPPS VREG:rw:f32=$XMMr MEM:r:f32=$mem128 IMM:u8=$uimm8
  /* 1830 */ &vreg13, &vreg14, &vreg17, NULL, // BLENDVPD VREG:rw:f64=$XMMr VREG:r:f64=$XMMm  VREG:SUPP:r:u64=XMM0
  /* 1834 */ &vreg13, &mem112, &vreg17, NULL, // BLENDVPD VREG:rw:f64=$XMMr MEM:r:f64=$mem128 VREG:SUPP:r:u64=XMM0
  /* 1838 */ &vreg15, &vreg16, &vreg18, NULL, // BLENDVPS VREG:rw:f32=$XMMr VREG:r:f32=$XMMm  VREG:SUPP:r:u32=XMM0
  /* 1842 */ &vreg15, &mem113, &vreg18, NULL, // BLENDVPS VREG:rw:f32=$XMMr MEM:r:f32=$mem128 VREG:SUPP:r:u32=XMM0
  /* 1846 */ &vreg13, &vreg14, &cc0, NULL, // CMPPD VREG:rw:f64=$XMMr VREG:r:f64=$XMMm  CC:u8=$cc3
  /* 1850 */ &vreg13, &mem112, &cc0, NULL, // CMPPD VREG:rw:f64=$XMMr MEM:r:f64=$mem128 CC:u8=$cc3
  /* 1854 */ &vreg15, &vreg16, &cc0, NULL, // CMPPS VREG:rw:f32=$XMMr VREG:r:f32=$XMMm  CC:u8=$cc3
  /* 1858 */ &vreg15, &mem113, &cc0, NULL, // CMPPS VREG:rw:f32=$XMMr MEM:r:f32=$mem128 CC:u8=$cc3
  /* 1862 */ &reg240, &reg241, &cc0, NULL, // CMPSD REG:rw:f64=$XMMr REG:r:f64=$XMMm  CC:u8=$cc3
  /* 1866 */ &reg240, &mem76, &cc0, NULL, // CMPSD REG:rw:f64=$XMMr MEM:r:f64=$mem64 CC:u8=$cc3
  /* 1870 */ &reg242, &reg243, &cc0, NULL, // CMPSS REG:rw:f32=$XMMr REG:r:f32=$XMMm  CC:u8=$cc3
  /* 1874 */ &reg242, &mem75, &cc0, NULL, // CMPSS REG:rw:f32=$XMMr MEM:r:f32=$mem32 CC:u8=$cc3
  /* 1878 */ &reg244, &reg241, NULL, // VCOMISD REG:r:f64=$XMMr  REG:r:f64=$XMMm
  /* 1881 */ &reg244, &mem76, NULL, // VCOMISD REG:r:f64=$XMMr  MEM:r:f64=$mem64
  /* 1884 */ &reg245, &reg243, NULL, // VCOMISS REG:r:f32=$XMMr  REG:r:f32=$XMMm
  /* 1887 */ &reg245, &mem75, NULL, // VCOMISS REG:r:f32=$XMMr  MEM:r:f32=$mem32
  /* 1890 */ &reg246, &reg247, NULL, // CRC32 REG:rw:sx=$GPRyr REG:r:u8=$GPR8m
  /* 1893 */ &reg246, &mem2, NULL, // CRC32 REG:rw:sx=$GPRyr MEM:r:u8=$mem8
  /* 1896 */ &reg246, &reg88, NULL, // CRC32 REG:rw:sx=$GPRyr REG:r:sx=$GPRvm
  /* 1899 */ &reg246, &mem3, NULL, // CRC32 REG:rw:sx=$GPRyr MEM:r:sx=$memv
  /* 1902 */ &vreg19, &vreg1, NULL, // VCVTDQ2PD VREG:w:f64=$XMMr VREG:r:s32=$XMMm
  /* 1905 */ &vreg19, &mem9, NULL, // VCVTDQ2PD VREG:w:f64=$XMMr MEM:r:s32=$mem64
  /* 1908 */ &vreg7, &vreg1, NULL, // VCVTDQ2PS VREG:w:f32=$XMMr VREG:r:s32=$XMMm
  /* 1911 */ &vreg7, &mem6, NULL, // VCVTDQ2PS VREG:w:f32=$XMMr MEM:r:s32=$mem128
  /* 1914 */ &vreg2, &vreg14, NULL, // VCVTTPD2DQ VREG:w:s32=$XMMr VREG:r:f64=$XMMm
  /* 1917 */ &vreg2, &mem112, NULL, // VCVTTPD2DQ VREG:w:s32=$XMMr MEM:r:f64=$mem128
  /* 1920 */ &reg248, &vreg14, NULL, // CVTTPD2PI REG:w:s32=$MMXr VREG:r:f64=$XMMm
  /* 1923 */ &reg248, &mem112, NULL, // CVTTPD2PI REG:w:s32=$MMXr MEM:r:f64=$mem128
  /* 1926 */ &vreg7, &vreg14, NULL, // VCVTPD2PS VREG:w:f32=$XMMr VREG:r:f64=$XMMm
  /* 1929 */ &vreg7, &mem112, NULL, // VCVTPD2PS VREG:w:f32=$XMMr MEM:r:f64=$mem128
  /* 1932 */ &vreg19, &vreg20, NULL, // CVTPI2PD VREG:w:f64=$XMMr VREG:r:s32=$MMXm
  /* 1935 */ &vreg7, &vreg20, NULL, // CVTPI2PS VREG:w:f32=$XMMr VREG:r:s32=$MMXm
  /* 1938 */ &vreg7, &mem9, NULL, // CVTPI2PS VREG:w:f32=$XMMr MEM:r:s32=$mem64
  /* 1941 */ &vreg2, &vreg16, NULL, // VCVTTPS2DQ VREG:w:s32=$XMMr VREG:r:f32=$XMMm
  /* 1944 */ &vreg2, &mem113, NULL, // VCVTTPS2DQ VREG:w:s32=$XMMr MEM:r:f32=$mem128
  /* 1947 */ &vreg19, &vreg16, NULL, // VCVTPS2PD VREG:w:f64=$XMMr VREG:r:f32=$XMMm
  /* 1950 */ &vreg19, &mem114, NULL, // VCVTPS2PD VREG:w:f64=$XMMr MEM:r:f32=$mem64
  /* 1953 */ &reg249, &vreg1, NULL, // CVTPS2PI REG:w:f32=$MMXr VREG:r:s32=$XMMm
  /* 1956 */ &reg249, &mem9, NULL, // CVTPS2PI REG:w:f32=$MMXr MEM:r:s32=$mem64
  /* 1959 */ &reg17, &reg241, NULL, // VCVTTSD2SI REG:w:s32=$GPR32r REG:r:f64=$XMMm
  /* 1962 */ &reg19, &reg241, NULL, // VCVTTSD2SI REG:w:s64=$GPR64r REG:r:f64=$XMMm
  /* 1965 */ &reg17, &mem76, NULL, // VCVTTSD2SI REG:w:s32=$GPR32r MEM:r:f64=$mem64
  /* 1968 */ &reg19, &mem76, NULL, // VCVTTSD2SI REG:w:s64=$GPR64r MEM:r:f64=$mem64
  /* 1971 */ &reg250, &reg241, NULL, // CVTSD2SS REG:w:f32=$XMMr REG:r:f64=$XMMm
  /* 1974 */ &reg250, &mem76, NULL, // CVTSD2SS REG:w:f32=$XMMr MEM:r:f64=$mem64
  /* 1977 */ &reg251, &reg14, NULL, // CVTSI2SD REG:w:f64=$XMMr REG:r:s32=$GPR32m
  /* 1980 */ &reg251, &reg16, NULL, // CVTSI2SD REG:w:f64=$XMMr REG:r:s64=$GPR64m
  /* 1983 */ &reg251, &mem4, NULL, // CVTSI2SD REG:w:f64=$XMMr MEM:r:s32=$mem32
  /* 1986 */ &reg251, &mem5, NULL, // MOVLPD REG:w:f64=$XMMr  MEM:r:s64=$mem64
  /* 1989 */ &reg250, &reg14, NULL, // CVTSI2SS REG:w:f32=$XMMr REG:r:s32=$GPR32m
  /* 1992 */ &reg250, &reg252, NULL, // CVTSI2SS REG:w:f32=$XMMr REG:r:s32=$GPR64m
  /* 1995 */ &reg250, &mem4, NULL, // CVTSI2SS REG:w:f32=$XMMr MEM:r:s32=$mem32
  /* 1998 */ &reg250, &mem9, NULL, // CVTSI2SS REG:w:f32=$XMMr MEM:r:s32=$mem64
  /* 2001 */ &reg251, &reg243, NULL, // CVTSS2SD REG:w:f64=$XMMr REG:r:f32=$XMMm
  /* 2004 */ &reg251, &mem75, NULL, // CVTSS2SD REG:w:f64=$XMMr MEM:r:f32=$mem32
  /* 2007 */ &reg17, &reg243, NULL, // VCVTTSS2SI REG:w:s32=$GPR32r REG:r:f32=$XMMm
  /* 2010 */ &reg19, &reg243, NULL, // VCVTTSS2SI REG:w:s64=$GPR64r REG:r:f32=$XMMm
  /* 2013 */ &reg17, &mem75, NULL, // VCVTTSS2SI REG:w:s32=$GPR32r MEM:r:f32=$mem32
  /* 2016 */ &reg19, &mem75, NULL, // VCVTTSS2SI REG:w:s64=$GPR64r MEM:r:f32=$mem32
  /* 2019 */ &reg248, &vreg16, NULL, // CVTTPS2PI REG:w:s32=$MMXr VREG:r:f32=$XMMm
  /* 2022 */ &reg248, &mem114, NULL, // CVTTPS2PI REG:w:s32=$MMXr MEM:r:f32=$mem64
  /* 2025 */ &reg253, &vreg21, &imm6, NULL, // PEXTRD REG:w:s32=$GPR32m VREG:r:s32=$XMMr IMM:u8=$index
  /* 2029 */ &mem77, &vreg11, &imm6, NULL, // EXTRACTPS MEM:w:s32=$mem32  VREG:r:f32=$XMMr IMM:u8=$index
  /* 2033 */ &mem115, NULL, // FXRSTOR64 MEM:r=$mem4096
  /* 2035 */ &mem116, NULL, // FXSAVE64 MEM:w=$mem4096
  /* 2037 */ &vreg15, &vreg16, &imm6, NULL, // INSERTPS VREG:rw:f32=$XMMr VREG:r:f32=$XMMm IMM:u8=$index
  /* 2041 */ &vreg15, &mem4, &imm6, NULL, // INSERTPS VREG:rw:f32=$XMMr MEM:r:s32=$mem32 IMM:u8=$index
  /* 2045 */ &vreg19, &mem6, NULL, // LDDQU VREG:w:f64=$XMMr MEM:r:s32=$mem128
  /* 2048 */ &mem4, &reg254, NULL, // VLDMXCSR MEM:r:s32=$mem32 REG:SUPP:w=MXCSR
  /* 2051 */ &vreg21, &vreg1, &mem117, NULL, // MASKMOVDQU VREG:r:s32=$XMMr VREG:r:s32=$XMMm MEM:SUPP:w:s32={SEG:r=DS BASE:r=$DIa SZ=128}
  /* 2055 */ &vreg22, &vreg23, NULL, // VMOVUPD VREG:w:f64=$XMMm  VREG:r:f64=$XMMr
  /* 2058 */ &mem118, &vreg23, NULL, // VMOVUPD MEM:w:f64=$mem128 VREG:r:f64=$XMMr
  /* 2061 */ &vreg19, &vreg14, NULL, // VFRCZPD VREG:w:f64=$XMMr VREG:r:f64=$XMMm
  /* 2064 */ &vreg19, &mem112, NULL, // VFRCZPD VREG:w:f64=$XMMr MEM:r:f64=$mem128
  /* 2067 */ &vreg24, &vreg11, NULL, // VMOVUPS VREG:w:f32=$XMMm  VREG:r:f32=$XMMr
  /* 2070 */ &mem119, &vreg11, NULL, // VMOVUPS MEM:w:f32=$mem128 VREG:r:f32=$XMMr
  /* 2073 */ &vreg7, &vreg16, NULL, // VFRCZPS VREG:w:f32=$XMMr VREG:r:f32=$XMMm
  /* 2076 */ &vreg7, &mem113, NULL, // VFRCZPS VREG:w:f32=$XMMr MEM:r:f32=$mem128
  /* 2079 */ &vreg2, &reg255, NULL, // VMOVQ VREG:w:s32=$XMMr  REG:r:s64=$XMMm
  /* 2082 */ &vreg2, &mem5, NULL, // VMOVQ VREG:w:s32=$XMMr  MEM:r:s64=$mem64
  /* 2085 */ &reg256, &reg257, NULL, // MOVDQ2Q REG:w:u64=$MMXr REG:r:u64=$XMMm
  /* 2088 */ &vreg25, &vreg21, NULL, // VMOVDQU   VREG:w:s32=$XMMm  VREG:r:s32=$XMMr
  /* 2091 */ &mem120, &vreg21, NULL, // VMOVNTDQ MEM:w:s32=$mem128 VREG:r:s32=$XMMr
  /* 2094 */ &mem78, &reg244, NULL, // MOVLPD MEM:w:s64=$mem64 REG:r:f64=$XMMr
  /* 2097 */ &mem121, &vreg11, NULL, // VMOVLPS MEM:w:f32=$mem64 VREG:r:f32=$XMMr
  /* 2100 */ &vreg7, &mem114, NULL, // MOVLPS VREG:w:f32=$XMMr MEM:r:f32=$mem64
  /* 2103 */ &reg226, &vreg14, NULL, // MOVMSKPD REG:w=$GPR32r VREG:r:f64=$XMMm
  /* 2106 */ &reg226, &vreg16, NULL, // MOVMSKPS REG:w=$GPR32r VREG:r:f32=$XMMm
  /* 2109 */ &mem120, &vreg23, NULL, // MOVNTPD MEM:w:s32=$mem128 VREG:r:f64=$XMMr
  /* 2112 */ &mem120, &vreg11, NULL, // MOVNTPS MEM:w:s32=$mem128 VREG:r:f32=$XMMr
  /* 2115 */ &reg108, &reg258, NULL, // MOVQ REG:w=$GPR64m    REG:r:s64=$XMMr
  /* 2118 */ &mem78, &reg258, NULL, // MOVNTSD MEM:w:s64=$mem64 REG:r:s64=$XMMr
  /* 2121 */ &vreg25, &reg258, NULL, // VMOVQ VREG:w:s32=$XMMm  REG:r:s64=$XMMr
  /* 2124 */ &vreg2, &reg112, NULL, // MOVQ VREG:w:s32=$XMMr REG:r=$GPR64m
  /* 2127 */ &vreg26, &reg259, NULL, // MOVQ2DQ VREG:w:u64=$XMMr REG:r:u64=$MMXm
  /* 2130 */ &reg260, &reg244, NULL, // MOVSD REG:w:f64=$XMMm  REG:r:f64=$XMMr
  /* 2133 */ &mem89, &reg244, NULL, // VMOVSD MEM:w:f64=$mem64 REG:r:f64=$XMMr
  /* 2136 */ &reg251, &reg241, NULL, // SQRTSD REG:w:f64=$XMMr REG:r:f64=$XMMm
  /* 2139 */ &vreg19, &mem76, NULL, // VFRCZSD VREG:w:f64=$XMMr MEM:r:f64=$mem64
  /* 2142 */ &reg261, &reg245, NULL, // MOVSS REG:w:f32=$XMMm  REG:r:f32=$XMMr
  /* 2145 */ &mem88, &reg245, NULL, // VMOVSS MEM:w:f32=$mem32 REG:r:f32=$XMMr
  /* 2148 */ &reg250, &reg243, NULL, // SQRTSS REG:w:f32=$XMMr REG:r:f32=$XMMm
  /* 2151 */ &vreg7, &mem75, NULL, // VFRCZSS VREG:w:f32=$XMMr MEM:r:f32=$mem32
  /* 2154 */ &reg110, &reg262, NULL, // MOVD REG:w=$GPR32m    REG:r:s32=$XMMr
  /* 2157 */ &mem77, &reg262, NULL, // MOVNTSS MEM:w:s32=$mem32 REG:r:s32=$XMMr
  /* 2160 */ &vreg2, &reg113, NULL, // MOVD VREG:w:s32=$XMMr REG:r=$GPR32m
  /* 2163 */ &vreg2, &mem4, NULL, // VMOVD VREG:w:s32=$XMMr  MEM:r:s32=$mem32
  /* 2166 */ &vreg27, &vreg28, &imm0, NULL, // MPSADBW VREG:rw:u8=$XMMr VREG:r:u8=$XMMm  IMM:u8=$uimm8
  /* 2170 */ &vreg27, &mem122, &imm0, NULL, // MPSADBW VREG:rw:u8=$XMMr MEM:r:u8=$mem128 IMM:u8=$uimm8
  /* 2174 */ &vreg29, &vreg30, NULL, // PMULHW VREG:rw:s16=$XMMr VREG:r:s16=$XMMm
  /* 2177 */ &vreg29, &mem123, NULL, // PMULHW VREG:rw:s16=$XMMr MEM:r:s16=$mem128
  /* 2180 */ &reg233, &reg259, NULL, // PADDQ REG:rw:u64=$MMXr  REG:r:u64=$MMXm
  /* 2183 */ &reg233, &mem124, NULL, // PADDQ REG:rw:u64=$MMXr  MEM:r:u64=$mem64
  /* 2186 */ &reg213, &reg214, &imm0, NULL, // PALIGNR REG:rw:s64=$MMXr  REG:r:s64=$MMXm   IMM:u8=$uimm8
  /* 2190 */ &reg213, &mem5, &imm0, NULL, // PALIGNR REG:rw:s64=$MMXr  MEM:r:s64=$mem64  IMM:u8=$uimm8
  /* 2194 */ &vreg27, &vreg28, NULL, // GF2P8MULB  VREG:rw:u8=$XMMr VREG:r:u8=$XMMm
  /* 2197 */ &vreg27, &mem122, NULL, // GF2P8MULB  VREG:rw:u8=$XMMr MEM:r:u8=$mem128
  /* 2200 */ &vreg31, &vreg32, NULL, // PMULHUW VREG:rw:u16=$XMMr VREG:r:u16=$XMMm
  /* 2203 */ &vreg31, &mem125, NULL, // PMULHUW VREG:rw:u16=$XMMr MEM:r:u16=$mem128
  /* 2206 */ &vreg0, &vreg1, &vreg33, NULL, // PBLENDVB VREG:rw:s32=$XMMr VREG:r:s32=$XMMm  VREG:SUPP:r:s32=XMM0
  /* 2210 */ &vreg0, &mem6, &vreg33, NULL, // PBLENDVB VREG:rw:s32=$XMMr MEM:r:s32=$mem128 VREG:SUPP:r:s32=XMM0
  /* 2214 */ &vreg34, &vreg35, NULL, // PMADDUBSW VREG:rw:s8=$XMMr VREG:r:s8=$XMMm
  /* 2217 */ &vreg34, &mem126, NULL, // PMADDUBSW VREG:rw:s8=$XMMr MEM:r:s8=$mem128
  /* 2220 */ &vreg21, &vreg1, &imm0, &reg36, &reg116, &reg134, NULL, // VPCMPESTRI VREG:r:s32=$XMMr VREG:r:s32=$XMMm  IMM:u8=$uimm8 REG:SUPP:r=EAX REG:SUPP:r=EDX REG:SUPP:w=ECX
  /* 2227 */ &vreg21, &vreg1, &imm0, &reg59, &reg117, &reg161, NULL, // VPCMPESTRI VREG:r:s32=$XMMr VREG:r:s32=$XMMm  IMM:u8=$uimm8 REG:SUPP:r=RAX REG:SUPP:r=RDX REG:SUPP:w=RCX
  /* 2234 */ &vreg21, &mem6, &imm0, &reg36, &reg116, &reg134, NULL, // VPCMPESTRI VREG:r:s32=$XMMr MEM:r:s32=$mem128 IMM:u8=$uimm8 REG:SUPP:r=EAX REG:SUPP:r=EDX REG:SUPP:w=ECX
  /* 2241 */ &vreg21, &mem6, &imm0, &reg59, &reg117, &reg161, NULL, // VPCMPESTRI VREG:r:s32=$XMMr MEM:r:s32=$mem128 IMM:u8=$uimm8 REG:SUPP:r=RAX REG:SUPP:r=RDX REG:SUPP:w=RCX
  /* 2248 */ &vreg21, &vreg1, &imm0, &reg36, &reg116, &vreg36, NULL, // VPCMPESTRM VREG:r:s32=$XMMr VREG:r:s32=$XMMm  IMM:u8=$uimm8 REG:SUPP:r=EAX REG:SUPP:r=EDX VREG:SUPP:w:s32=XMM0
  /* 2255 */ &vreg21, &vreg1, &imm0, &reg59, &reg117, &vreg36, NULL, // VPCMPESTRM VREG:r:s32=$XMMr VREG:r:s32=$XMMm  IMM:u8=$uimm8 REG:SUPP:r=RAX REG:SUPP:r=RDX VREG:SUPP:w:s32=XMM0
  /* 2262 */ &vreg21, &mem6, &imm0, &reg36, &reg116, &vreg36, NULL, // VPCMPESTRM VREG:r:s32=$XMMr MEM:r:s32=$mem128 IMM:u8=$uimm8 REG:SUPP:r=EAX REG:SUPP:r=EDX VREG:SUPP:w:s32=XMM0
  /* 2269 */ &vreg21, &mem6, &imm0, &reg59, &reg117, &vreg36, NULL, // VPCMPESTRM VREG:r:s32=$XMMr MEM:r:s32=$mem128 IMM:u8=$uimm8 REG:SUPP:r=RAX REG:SUPP:r=RDX VREG:SUPP:w:s32=XMM0
  /* 2276 */ &vreg21, &vreg1, &imm0, &reg134, NULL, // VPCMPISTRI VREG:r:s32=$XMMr VREG:r:s32=$XMMm  IMM:u8=$uimm8 REG:SUPP:w=ECX
  /* 2281 */ &vreg21, &vreg1, &imm0, &reg161, NULL, // VPCMPISTRI VREG:r:s32=$XMMr VREG:r:s32=$XMMm  IMM:u8=$uimm8 REG:SUPP:w=RCX
  /* 2286 */ &vreg21, &mem6, &imm0, &reg134, NULL, // VPCMPISTRI VREG:r:s32=$XMMr MEM:r:s32=$mem128 IMM:u8=$uimm8 REG:SUPP:w=ECX
  /* 2291 */ &vreg21, &mem6, &imm0, &reg161, NULL, // VPCMPISTRI VREG:r:s32=$XMMr MEM:r:s32=$mem128 IMM:u8=$uimm8 REG:SUPP:w=RCX
  /* 2296 */ &vreg21, &vreg1, &imm0, &vreg36, NULL, // VPCMPISTRM VREG:r:s32=$XMMr VREG:r:s32=$XMMm  IMM:u8=$uimm8 VREG:SUPP:w:s32=XMM0
  /* 2301 */ &vreg21, &mem6, &imm0, &vreg36, NULL, // VPCMPISTRM VREG:r:s32=$XMMr MEM:r:s32=$mem128 IMM:u8=$uimm8 VREG:SUPP:w:s32=XMM0
  /* 2306 */ &reg110, &vreg21, &imm6, NULL, // PEXTRW REG:w=$GPR32m    VREG:r:s32=$XMMr IMM:u8=$index
  /* 2310 */ &mem47, &vreg21, &imm6, NULL, // PEXTRW MEM:w:s16=$mem16 VREG:r:s32=$XMMr IMM:u8=$index
  /* 2314 */ &reg226, &vreg1, &imm6, NULL, // PEXTRW REG:w=$GPR32r    VREG:r:s32=$XMMm IMM:u8=$index
  /* 2318 */ &mem45, &vreg21, &imm6, NULL, // PEXTRB MEM:w:u8=$mem8    VREG:r:s32=$XMMr IMM:u8=$index
  /* 2322 */ &mem77, &vreg21, &imm6, NULL, // PEXTRD MEM:w:s32=$mem32  VREG:r:s32=$XMMr IMM:u8=$index
  /* 2326 */ &reg263, &vreg21, &imm6, NULL, // PEXTRQ REG:w:s64=$GPR64m VREG:r:s32=$XMMr IMM:u8=$index
  /* 2330 */ &mem78, &vreg21, &imm6, NULL, // PEXTRQ MEM:w:s64=$mem64  VREG:r:s32=$XMMr IMM:u8=$index
  /* 2334 */ &vreg0, &reg113, &imm6, NULL, // PINSRW VREG:rw:s32=$XMMr REG:r=$GPR32m    IMM:u8=$index
  /* 2338 */ &vreg0, &mem40, &imm6, NULL, // PINSRW VREG:rw:s32=$XMMr MEM:r:s16=$mem16 IMM:u8=$index
  /* 2342 */ &vreg0, &reg14, &imm6, NULL, // PINSRD VREG:rw:s32=$XMMr REG:r:s32=$GPR32m IMM:u8=$index
  /* 2346 */ &vreg0, &mem2, &imm6, NULL, // PINSRB VREG:rw:s32=$XMMr MEM:r:u8=$mem8    IMM:u8=$index
  /* 2350 */ &vreg0, &mem4, &imm6, NULL, // PINSRD VREG:rw:s32=$XMMr MEM:r:s32=$mem32  IMM:u8=$index
  /* 2354 */ &vreg0, &reg16, &imm6, NULL, // PINSRQ VREG:rw:s32=$XMMr REG:r:s64=$GPR64m IMM:u8=$index
  /* 2358 */ &vreg0, &mem5, &imm6, NULL, // PINSRQ VREG:rw:s32=$XMMr MEM:r:s64=$mem64  IMM:u8=$index
  /* 2362 */ &reg226, &vreg35, NULL, // PMOVMSKB REG:w=$GPR32r VREG:r:s8=$XMMm
  /* 2365 */ &vreg2, &vreg35, NULL, // VPHADDBD VREG:w:s32=$XMMr VREG:r:s8=$XMMm
  /* 2368 */ &vreg2, &mem127, NULL, // VPMOVSXBD VREG:w:s32=$XMMr MEM:r:s8=$mem32
  /* 2371 */ &vreg37, &vreg35, NULL, // VPHADDBQ VREG:w:s64=$XMMr VREG:r:s8=$XMMm
  /* 2374 */ &vreg37, &mem128, NULL, // VPMOVSXBQ VREG:w:s64=$XMMr MEM:r:s8=$mem16
  /* 2377 */ &vreg38, &vreg35, NULL, // VPHSUBBW VREG:w:s16=$XMMr VREG:r:s8=$XMMm
  /* 2380 */ &vreg38, &mem106, NULL, // VPMOVSXBW VREG:w:s16=$XMMr MEM:r:s8=$mem64
  /* 2383 */ &vreg37, &vreg1, NULL, // VPHSUBDQ VREG:w:s64=$XMMr VREG:r:s32=$XMMm
  /* 2386 */ &vreg37, &mem9, NULL, // VPMOVSXDQ VREG:w:s64=$XMMr MEM:r:s32=$mem64
  /* 2389 */ &vreg2, &vreg30, NULL, // VPHSUBWD VREG:w:s32=$XMMr VREG:r:s16=$XMMm
  /* 2392 */ &vreg2, &mem105, NULL, // VPMOVSXWD VREG:w:s32=$XMMr MEM:r:s16=$mem64
  /* 2395 */ &vreg37, &vreg30, NULL, // VPHADDWQ VREG:w:s64=$XMMr VREG:r:s16=$XMMm
  /* 2398 */ &vreg37, &mem8, NULL, // VPMOVSXWQ VREG:w:s64=$XMMr MEM:r:s16=$mem32
  /* 2401 */ &vreg39, &vreg28, NULL, // VPHADDUBD VREG:w:u32=$XMMr VREG:r:u8=$XMMm
  /* 2404 */ &vreg39, &mem109, NULL, // VPMOVZXBD VREG:w:u32=$XMMr MEM:r:u8=$mem32
  /* 2407 */ &vreg26, &vreg28, NULL, // VPHADDUBQ VREG:w:u64=$XMMr VREG:r:u8=$XMMm
  /* 2410 */ &vreg26, &mem129, NULL, // VPMOVZXBQ VREG:w:u64=$XMMr MEM:r:u8=$mem16
  /* 2413 */ &vreg40, &vreg28, NULL, // VPHADDUBW VREG:w:u16=$XMMr VREG:r:u8=$XMMm
  /* 2416 */ &vreg40, &mem130, NULL, // VPMOVZXBW VREG:w:u16=$XMMr MEM:r:u8=$mem64
  /* 2419 */ &vreg26, &vreg41, NULL, // VPHADDUDQ VREG:w:u64=$XMMr VREG:r:u32=$XMMm
  /* 2422 */ &vreg26, &mem96, NULL, // VPMOVZXDQ VREG:w:u64=$XMMr MEM:r:u32=$mem64
  /* 2425 */ &vreg39, &vreg32, NULL, // VPHADDUWD VREG:w:u32=$XMMr VREG:r:u16=$XMMm
  /* 2428 */ &vreg39, &mem108, NULL, // VPMOVZXWD VREG:w:u32=$XMMr MEM:r:u16=$mem64
  /* 2431 */ &vreg26, &vreg32, NULL, // VPHADDUWQ VREG:w:u64=$XMMr VREG:r:u16=$XMMm
  /* 2434 */ &vreg26, &mem111, NULL, // VPMOVZXWQ VREG:w:u64=$XMMr MEM:r:u16=$mem32
  /* 2437 */ &reg231, &mem96, NULL, // PMULUDQ REG:rw:u32=$MMXr  MEM:r:u32=$mem64
  /* 2440 */ &vreg39, &vreg41, &order0, NULL, // PSHUFD VREG:w:u32=$XMMr VREG:r:u32=$XMMm  ORDER:r:u8=$order
  /* 2444 */ &vreg39, &mem131, &order0, NULL, // PSHUFD VREG:w:u32=$XMMr MEM:r:u32=$mem128 ORDER:r:u8=$order
  /* 2448 */ &vreg40, &vreg32, &order0, NULL, // PSHUFLW VREG:w:u16=$XMMr VREG:r:u16=$XMMm  ORDER:r:u8=$order
  /* 2452 */ &vreg40, &mem125, &order0, NULL, // PSHUFLW VREG:w:u16=$XMMr MEM:r:u16=$mem128 ORDER:r:u8=$order
  /* 2456 */ &reg264, &shift1, NULL, // PSLLDQ REG:rw:u128=$XMMm SHIFT:r:u8=$shl
  /* 2459 */ &vreg42, &shift1, NULL, // PSLLD VREG:rw:u32=$XMMm SHIFT:r:u8=$shl
  /* 2462 */ &vreg43, &shift1, NULL, // PSLLQ VREG:rw:u64=$XMMm SHIFT:r:u8=$shl
  /* 2465 */ &vreg44, &vreg45, NULL, // PSLLQ VREG:rw:u64=$XMMr VREG:r:u64=$XMMm
  /* 2468 */ &vreg44, &mem95, NULL, // PSLLQ VREG:rw:u64=$XMMr MEM:r:u64=$mem128
  /* 2471 */ &vreg46, &shift1, NULL, // PSLLW VREG:rw:u16=$XMMm SHIFT:r:u8=$shl
  /* 2474 */ &vreg31, &vreg1, NULL, // PSLLW VREG:rw:u16=$XMMr VREG:r:s32=$XMMm
  /* 2477 */ &vreg31, &mem6, NULL, // PSLLW VREG:rw:u16=$XMMr MEM:r:s32=$mem128
  /* 2480 */ &vreg47, &shift0, NULL, // PSRAD VREG:rw:s32=$XMMm SHIFT:r:u8=$shr
  /* 2483 */ &vreg0, &vreg45, NULL, // PSRAD VREG:rw:s32=$XMMr VREG:r:u64=$XMMm
  /* 2486 */ &vreg0, &mem95, NULL, // PSRAD VREG:rw:s32=$XMMr MEM:r:u64=$mem128
  /* 2489 */ &vreg48, &shift0, NULL, // PSRAW VREG:rw:s16=$XMMm SHIFT:r:u8=$shr
  /* 2492 */ &vreg29, &vreg45, NULL, // PSRAW VREG:rw:s16=$XMMr VREG:r:u64=$XMMm
  /* 2495 */ &vreg29, &mem95, NULL, // PSRAW VREG:rw:s16=$XMMr MEM:r:u64=$mem128
  /* 2498 */ &reg264, &shift0, NULL, // PSRLDQ REG:rw:u128=$XMMm SHIFT:r:u8=$shr
  /* 2501 */ &vreg42, &shift0, NULL, // PSRLD VREG:rw:u32=$XMMm SHIFT:r:u8=$shr
  /* 2504 */ &vreg43, &shift0, NULL, // PSRLQ VREG:rw:u64=$XMMm SHIFT:r:u8=$shr
  /* 2507 */ &vreg46, &shift0, NULL, // PSRLW VREG:rw:u16=$XMMm SHIFT:r:u8=$shr
  /* 2510 */ &vreg21, &vreg1, NULL, // VPTEST VREG:r:s32=$XMMr VREG:r:s32=$XMMm
  /* 2513 */ &vreg21, &mem6, NULL, // VPTEST VREG:r:s32=$XMMr MEM:r:s32=$mem128
  /* 2516 */ &vreg0, &reg255, NULL, // PUNPCKLWD  VREG:rw:s32=$XMMr REG:r:s64=$XMMm
  /* 2519 */ &reg250, &mem75, NULL, // SQRTSS REG:w:f32=$XMMr MEM:r:f32=$mem32
  /* 2522 */ &vreg19, &vreg14, &rndc1, NULL, // VROUNDPD VREG:w:f64=$XMMr VREG:r:f64=$XMMm  RNDC:r:u8=$rndc2
  /* 2526 */ &vreg19, &mem112, &rndc1, NULL, // VROUNDPD VREG:w:f64=$XMMr MEM:r:f64=$mem128 RNDC:r:u8=$rndc2
  /* 2530 */ &vreg7, &vreg16, &rndc1, NULL, // VROUNDPS VREG:w:f32=$XMMr VREG:r:f32=$XMMm  RNDC:r:u8=$rndc2
  /* 2534 */ &vreg7, &mem113, &rndc1, NULL, // VROUNDPS VREG:w:f32=$XMMr MEM:r:f32=$mem128 RNDC:r:u8=$rndc2
  /* 2538 */ &reg265, &reg255, &rndc1, NULL, // ROUNDSD REG:w:s64=$XMMr REG:r:s64=$XMMm  RNDC:r:u8=$rndc2
  /* 2542 */ &reg265, &mem5, &rndc1, NULL, // ROUNDSD REG:w:s64=$XMMr MEM:r:s64=$mem64 RNDC:r:u8=$rndc2
  /* 2546 */ &reg266, &reg267, &rndc1, NULL, // ROUNDSS REG:w:s32=$XMMr REG:r:s32=$XMMm  RNDC:r:u8=$rndc2
  /* 2550 */ &reg266, &mem4, &rndc1, NULL, // ROUNDSS REG:w:s32=$XMMr MEM:r:s32=$mem32 RNDC:r:u8=$rndc2
  /* 2554 */ &vreg13, &vreg14, &order0, NULL, // SHUFPD VREG:rw:f64=$XMMr VREG:r:f64=$XMMm  ORDER:r:u8=$order
  /* 2558 */ &vreg13, &mem112, &order0, NULL, // SHUFPD VREG:rw:f64=$XMMr MEM:r:f64=$mem128 ORDER:r:u8=$order
  /* 2562 */ &vreg15, &vreg16, &order0, NULL, // SHUFPS VREG:rw:f32=$XMMr VREG:r:f32=$XMMm  ORDER:r:u8=$order
  /* 2566 */ &vreg15, &mem113, &order0, NULL, // SHUFPS VREG:rw:f32=$XMMr MEM:r:f32=$mem128 ORDER:r:u8=$order
  /* 2570 */ &reg251, &mem76, NULL, // SQRTSD REG:w:f64=$XMMr MEM:r:f64=$mem64
  /* 2573 */ &mem77, &reg268, NULL, // VSTMXCSR MEM:w:s32=$mem32 REG:SUPP:r=MXCSR
  /* 2576 */ &vreg13, &reg255, NULL, // UNPCKLPD VREG:rw:f64=$XMMr REG:r:s64=$XMMm
  /* 2579 */ &vreg13, &mem6, NULL, // UNPCKLPD VREG:rw:f64=$XMMr MEM:r:s32=$mem128
  /* 2582 */ &vreg15, &vreg1, NULL, // UNPCKHPS VREG:rw:f32=$XMMr VREG:r:s32=$XMMm
  /* 2585 */ &vreg15, &mem6, NULL, // UNPCKLPS VREG:rw:f32=$XMMr MEM:r:s32=$mem128
  /* 2588 */ &vreg15, &reg255, NULL, // UNPCKLPS VREG:rw:f32=$XMMr REG:r:s64=$XMMm
  /* 2591 */ &vreg19, &preg0, &vreg49, &vreg14, NULL, // VRSQRT28SD VREG:w:f64=$XMMr PREG:r:Z=$Kk VREG:r:f64=$XMMn VREG:r:f64=$XMMm
  /* 2596 */ &vreg19, &preg0, &vreg49, &mem112, &bcst0, NULL, // VXORPD VREG:w:f64=$XMMr PREG:r:Z=$Kk     VREG:r:f64=$XMMn  MEM:r:f64=$mem128 BCST=$BCST
  /* 2602 */ &vreg19, &vreg49, &vreg14, NULL, // VUNPCKLPD VREG:w:f64=$XMMr VREG:r:f64=$XMMn VREG:r:f64=$XMMm
  /* 2606 */ &vreg50, &vreg51, &vreg52, NULL, // VUNPCKLPD VREG:w:f64=$YMMr VREG:r:f64=$YMMn VREG:r:f64=$YMMm
  /* 2610 */ &vreg19, &vreg49, &mem112, NULL, // VUNPCKLPD VREG:w:f64=$XMMr VREG:r:f64=$XMMn MEM:r:f64=$mem128
  /* 2614 */ &vreg50, &vreg51, &mem132, NULL, // VUNPCKLPD VREG:w:f64=$YMMr VREG:r:f64=$YMMn MEM:r:f64=$mem256
  /* 2618 */ &vreg50, &preg0, &vreg51, &vreg52, NULL, // VXORPD VREG:w:f64=$YMMr PREG:r:Z=$Kk     VREG:r:f64=$YMMn  VREG:r:f64=$YMMm
  /* 2623 */ &vreg50, &preg0, &vreg51, &mem132, &bcst0, NULL, // VXORPD VREG:w:f64=$YMMr PREG:r:Z=$Kk     VREG:r:f64=$YMMn  MEM:r:f64=$mem256 BCST=$BCST
  /* 2629 */ &vreg53, &preg0, &vreg54, &vreg55, &rc0, NULL, // VSCALEFPD VREG:w:f64=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMn VREG:r:f64=$ZMMm RC=$RC
  /* 2635 */ &vreg53, &preg0, &vreg54, &vreg55, NULL, // VXORPD VREG:w:f64=$ZMMr PREG:r:Z=$Kk     VREG:r:f64=$ZMMn  VREG:r:f64=$ZMMm
  /* 2640 */ &vreg53, &preg0, &vreg54, &mem133, &bcst0, NULL, // VXORPD VREG:w:f64=$ZMMr PREG:r:Z=$Kk     VREG:r:f64=$ZMMn  MEM:r:f64=$mem512 BCST=$BCST
  /* 2646 */ &vreg7, &preg0, &vreg56, &vreg16, NULL, // VRSQRT28SS VREG:w:f32=$XMMr PREG:r:Z=$Kk VREG:r:f32=$XMMn VREG:r:f32=$XMMm
  /* 2651 */ &vreg7, &preg0, &vreg56, &mem113, &bcst0, NULL, // VXORPS VREG:w:f32=$XMMr PREG:r:Z=$Kk     VREG:r:f32=$XMMn  MEM:r:f32=$mem128 BCST=$BCST
  /* 2657 */ &vreg7, &vreg56, &vreg16, NULL, // VUNPCKLPS VREG:w:f32=$XMMr VREG:r:f32=$XMMn VREG:r:f32=$XMMm
  /* 2661 */ &vreg9, &vreg57, &vreg58, NULL, // VPERMPS VREG:w:f32=$YMMr VREG:r:f32=$YMMn VREG:r:f32=$YMMm
  /* 2665 */ &vreg7, &vreg56, &mem113, NULL, // VUNPCKLPS VREG:w:f32=$XMMr VREG:r:f32=$XMMn MEM:r:f32=$mem128
  /* 2669 */ &vreg9, &vreg57, &mem134, NULL, // VPERMPS VREG:w:f32=$YMMr VREG:r:f32=$YMMn MEM:r:f32=$mem256
  /* 2673 */ &vreg9, &preg0, &vreg57, &vreg58, NULL, // VXORPS VREG:w:f32=$YMMr PREG:r:Z=$Kk     VREG:r:f32=$YMMn  VREG:r:f32=$YMMm
  /* 2678 */ &vreg9, &preg0, &vreg57, &mem134, &bcst0, NULL, // VXORPS VREG:w:f32=$YMMr PREG:r:Z=$Kk     VREG:r:f32=$YMMn  MEM:r:f32=$mem256 BCST=$BCST
  /* 2684 */ &vreg59, &preg0, &vreg60, &vreg61, &rc0, NULL, // VSCALEFPS VREG:w:f32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMn VREG:r:f32=$ZMMm RC=$RC
  /* 2690 */ &vreg59, &preg0, &vreg60, &vreg61, NULL, // VXORPS VREG:w:f32=$ZMMr PREG:r:Z=$Kk     VREG:r:f32=$ZMMn  VREG:r:f32=$ZMMm
  /* 2695 */ &vreg59, &preg0, &vreg60, &mem135, &bcst0, NULL, // VXORPS VREG:w:f32=$ZMMr PREG:r:Z=$Kk     VREG:r:f32=$ZMMn  MEM:r:f32=$mem512 BCST=$BCST
  /* 2701 */ &vreg19, &vreg49, &reg241, NULL, // VSUBSD VREG:w:f64=$XMMr VREG:r:f64=$XMMn REG:r:f64=$XMMm
  /* 2705 */ &vreg19, &vreg49, &mem76, NULL, // VSUBSD VREG:w:f64=$XMMr VREG:r:f64=$XMMn MEM:r:f64=$mem64
  /* 2709 */ &vreg19, &preg0, &vreg49, &vreg14, &rc0, NULL, // VSCALEFSD VREG:w:f64=$XMMr PREG:r:Z=$Kk VREG:r:f64=$XMMn VREG:r:f64=$XMMm RC=$RC
  /* 2715 */ &vreg19, &preg0, &vreg49, &mem76, NULL, // VRSQRT28SD VREG:w:f64=$XMMr PREG:r:Z=$Kk VREG:r:f64=$XMMn MEM:r:f64=$mem64
  /* 2720 */ &vreg7, &vreg56, &reg243, NULL, // VSUBSS VREG:w:f32=$XMMr VREG:r:f32=$XMMn REG:r:f32=$XMMm
  /* 2724 */ &vreg7, &vreg56, &mem75, NULL, // VSUBSS VREG:w:f32=$XMMr VREG:r:f32=$XMMn MEM:r:f32=$mem32
  /* 2728 */ &vreg7, &preg0, &vreg56, &vreg16, &rc0, NULL, // VSCALEFSS VREG:w:f32=$XMMr PREG:r:Z=$Kk VREG:r:f32=$XMMn VREG:r:f32=$XMMm RC=$RC
  /* 2734 */ &vreg7, &preg0, &vreg56, &mem75, NULL, // VRSQRT28SS VREG:w:f32=$XMMr PREG:r:Z=$Kk VREG:r:f32=$XMMn MEM:r:f32=$mem32
  /* 2739 */ &vreg2, &vreg62, &vreg1, NULL, // VPSHAD VREG:w:s32=$XMMr VREG:r:s32=$XMMn  VREG:r:s32=$XMMm
  /* 2743 */ &vreg2, &vreg62, &mem6, NULL, // VPSHAD VREG:w:s32=$XMMr VREG:r:s32=$XMMn  MEM:r:s32=$mem128
  /* 2747 */ &reg269, &reg270, &reg271, NULL, // VPXOR REG:w:u128=$XMMr REG:r:u128=$XMMn REG:r:u128=$XMMm
  /* 2751 */ &reg269, &reg270, &mem136, NULL, // VPXOR REG:w:u128=$XMMr REG:r:u128=$XMMn MEM:r:u128=$mem128
  /* 2755 */ &vreg3, &vreg63, &vreg64, NULL, // VAESENCLAST VREG:w:u128=$YMMr VREG:r:u128=$YMMn VREG:r:u128=$YMMm
  /* 2759 */ &vreg3, &vreg63, &mem137, NULL, // VAESENCLAST VREG:w:u128=$YMMr VREG:r:u128=$YMMn MEM:r:u128=$mem256
  /* 2763 */ &vreg65, &vreg66, &vreg67, NULL, // VAESENCLAST VREG:w:u128=$ZMMr VREG:r:u128=$ZMMn VREG:r:u128=$ZMMm
  /* 2767 */ &vreg65, &vreg66, &mem138, NULL, // VAESENCLAST VREG:w:u128=$ZMMr VREG:r:u128=$ZMMn MEM:r:u128=$mem512
  /* 2771 */ &vreg26, &vreg68, &vreg45, NULL, // VPSHLQ VREG:w:u64=$XMMr VREG:r:u64=$XMMn  VREG:r:u64=$XMMm
  /* 2775 */ &vreg69, &vreg4, &vreg5, NULL, // VXORPD VREG:w:u64=$YMMr VREG:r:u64=$YMMn VREG:r:u64=$YMMm
  /* 2779 */ &vreg26, &vreg68, &mem95, NULL, // VPSHLQ VREG:w:u64=$XMMr VREG:r:u64=$XMMn  MEM:r:u64=$mem128
  /* 2783 */ &vreg69, &vreg4, &mem55, NULL, // VXORPD VREG:w:u64=$YMMr VREG:r:u64=$YMMn MEM:r:u64=$mem256
  /* 2787 */ &vreg70, &vreg71, &vreg72, NULL, // VXORPS VREG:w:s32=$YMMr VREG:r:s32=$YMMn VREG:r:s32=$YMMm
  /* 2791 */ &vreg70, &vreg71, &mem139, NULL, // VXORPS VREG:w:s32=$YMMr VREG:r:s32=$YMMn MEM:r:s32=$mem256
  /* 2795 */ &vreg19, &vreg49, &vreg14, &imm0, NULL, // VDPPD VREG:w:f64=$XMMr VREG:r:f64=$XMMn VREG:r:f64=$XMMm  IMM:u8=$uimm8
  /* 2800 */ &vreg50, &vreg51, &vreg52, &imm0, NULL, // VBLENDPD VREG:w:f64=$YMMr VREG:r:f64=$YMMn VREG:r:f64=$YMMm  IMM:u8=$uimm8
  /* 2805 */ &vreg19, &vreg49, &mem112, &imm0, NULL, // VDPPD VREG:w:f64=$XMMr VREG:r:f64=$XMMn MEM:r:f64=$mem128 IMM:u8=$uimm8
  /* 2810 */ &vreg50, &vreg51, &mem132, &imm0, NULL, // VBLENDPD VREG:w:f64=$YMMr VREG:r:f64=$YMMn MEM:r:f64=$mem256 IMM:u8=$uimm8
  /* 2815 */ &vreg7, &vreg56, &vreg16, &imm0, NULL, // VDPPS VREG:w:f32=$XMMr VREG:r:f32=$XMMn VREG:r:f32=$XMMm  IMM:u8=$uimm8
  /* 2820 */ &vreg9, &vreg57, &vreg58, &imm0, NULL, // VDPPS VREG:w:f32=$YMMr VREG:r:f32=$YMMn VREG:r:f32=$YMMm  IMM:u8=$uimm8
  /* 2825 */ &vreg7, &vreg56, &mem113, &imm0, NULL, // VDPPS VREG:w:f32=$XMMr VREG:r:f32=$XMMn MEM:r:f32=$mem128 IMM:u8=$uimm8
  /* 2830 */ &vreg9, &vreg57, &mem134, &imm0, NULL, // VDPPS VREG:w:f32=$YMMr VREG:r:f32=$YMMn MEM:r:f32=$mem256 IMM:u8=$uimm8
  /* 2835 */ &vreg19, &vreg49, &vreg14, &vreg73, NULL, // VBLENDVPD VREG:w:f64=$XMMr VREG:r:f64=$XMMn VREG:r:f64=$XMMm  VREG:r:u64=$XMMis4
  /* 2840 */ &vreg50, &vreg51, &vreg52, &vreg74, NULL, // VBLENDVPD VREG:w:f64=$YMMr VREG:r:f64=$YMMn VREG:r:f64=$YMMm  VREG:r:u64=$YMMis4
  /* 2845 */ &vreg19, &vreg49, &mem112, &vreg73, NULL, // VBLENDVPD VREG:w:f64=$XMMr VREG:r:f64=$XMMn MEM:r:f64=$mem128 VREG:r:u64=$XMMis4
  /* 2850 */ &vreg50, &vreg51, &mem132, &vreg74, NULL, // VBLENDVPD VREG:w:f64=$YMMr VREG:r:f64=$YMMn MEM:r:f64=$mem256 VREG:r:u64=$YMMis4
  /* 2855 */ &vreg7, &vreg56, &vreg16, &vreg75, NULL, // VBLENDVPS VREG:w:f32=$XMMr VREG:r:f32=$XMMn VREG:r:f32=$XMMm  VREG:r:u32=$XMMis4
  /* 2860 */ &vreg9, &vreg57, &vreg58, &vreg76, NULL, // VBLENDVPS VREG:w:f32=$YMMr VREG:r:f32=$YMMn VREG:r:f32=$YMMm  VREG:r:u32=$YMMis4
  /* 2865 */ &vreg7, &vreg56, &mem113, &vreg75, NULL, // VBLENDVPS VREG:w:f32=$XMMr VREG:r:f32=$XMMn MEM:r:f32=$mem128 VREG:r:u32=$XMMis4
  /* 2870 */ &vreg9, &vreg57, &mem134, &vreg76, NULL, // VBLENDVPS VREG:w:f32=$YMMr VREG:r:f32=$YMMn MEM:r:f32=$mem256 VREG:r:u32=$YMMis4
  /* 2875 */ &reg272, &preg0, &vreg49, &vreg14, &cc1, NULL, // VCMPSD REG:w=$Kr        PREG:r:Z=$Kk     VREG:r:f64=$XMMn VREG:r:f64=$XMMm          CC:u8=$cc5
  /* 2881 */ &reg272, &preg0, &vreg49, &mem112, &bcst0, &cc1, NULL, // VCMPPD REG:w=$Kr        PREG:r:Z=$Kk     VREG:r:f64=$XMMn  MEM:r:f64=$mem128 BCST=$BCST CC:u8=$cc5
  /* 2888 */ &reg272, &preg0, &vreg51, &vreg52, &cc1, NULL, // VCMPPD REG:w=$Kr        PREG:r:Z=$Kk     VREG:r:f64=$YMMn  VREG:r:f64=$YMMm             CC:u8=$cc5
  /* 2894 */ &reg272, &preg0, &vreg51, &mem132, &bcst0, &cc1, NULL, // VCMPPD REG:w=$Kr        PREG:r:Z=$Kk     VREG:r:f64=$YMMn  MEM:r:f64=$mem256 BCST=$BCST CC:u8=$cc5
  /* 2901 */ &reg272, &preg0, &vreg54, &vreg55, &sae0, &cc1, NULL, // VCMPPD REG:w=$Kr PREG:r:Z=$Kk VREG:r:f64=$ZMMn VREG:r:f64=$ZMMm SAE=$SAE       CC:u8=$cc5
  /* 2908 */ &reg272, &preg0, &vreg54, &vreg55, &cc1, NULL, // VCMPPD REG:w=$Kr        PREG:r:Z=$Kk     VREG:r:f64=$ZMMn  VREG:r:f64=$ZMMm             CC:u8=$cc5
  /* 2914 */ &reg272, &preg0, &vreg54, &mem133, &bcst0, &cc1, NULL, // VCMPPD REG:w=$Kr        PREG:r:Z=$Kk     VREG:r:f64=$ZMMn  MEM:r:f64=$mem512 BCST=$BCST CC:u8=$cc5
  /* 2921 */ &vreg19, &vreg49, &vreg14, &cc1, NULL, // VCMPPD VREG:w:f64=$XMMr VREG:r:f64=$XMMn VREG:r:f64=$XMMm  CC:u8=$cc5
  /* 2926 */ &vreg50, &vreg51, &vreg52, &cc1, NULL, // VCMPPD VREG:w:f64=$YMMr VREG:r:f64=$YMMn VREG:r:f64=$YMMm  CC:u8=$cc5
  /* 2931 */ &vreg19, &vreg49, &mem112, &cc1, NULL, // VCMPPD VREG:w:f64=$XMMr VREG:r:f64=$XMMn MEM:r:f64=$mem128 CC:u8=$cc5
  /* 2936 */ &vreg50, &vreg51, &mem132, &cc1, NULL, // VCMPPD VREG:w:f64=$YMMr VREG:r:f64=$YMMn MEM:r:f64=$mem256 CC:u8=$cc5
  /* 2941 */ &reg272, &preg0, &vreg56, &vreg16, &cc1, NULL, // VCMPSS REG:w=$Kr        PREG:r:Z=$Kk     VREG:r:f32=$XMMn VREG:r:f32=$XMMm          CC:u8=$cc5
  /* 2947 */ &reg272, &preg0, &vreg56, &mem113, &bcst0, &cc1, NULL, // VCMPPS REG:w=$Kr        PREG:r:Z=$Kk     VREG:r:f32=$XMMn  MEM:r:f32=$mem128 BCST=$BCST CC:u8=$cc5
  /* 2954 */ &reg272, &preg0, &vreg57, &vreg58, &cc1, NULL, // VCMPPS REG:w=$Kr        PREG:r:Z=$Kk     VREG:r:f32=$YMMn  VREG:r:f32=$YMMm             CC:u8=$cc5
  /* 2960 */ &reg272, &preg0, &vreg57, &mem134, &bcst0, &cc1, NULL, // VCMPPS REG:w=$Kr        PREG:r:Z=$Kk     VREG:r:f32=$YMMn  MEM:r:f32=$mem256 BCST=$BCST CC:u8=$cc5
  /* 2967 */ &reg272, &preg0, &vreg60, &vreg61, &sae0, &cc1, NULL, // VCMPPS REG:w=$Kr PREG:r:Z=$Kk VREG:r:f32=$ZMMn VREG:r:f32=$ZMMm SAE=$SAE       CC:u8=$cc5
  /* 2974 */ &reg272, &preg0, &vreg60, &vreg61, &cc1, NULL, // VCMPPS REG:w=$Kr        PREG:r:Z=$Kk     VREG:r:f32=$ZMMn  VREG:r:f32=$ZMMm             CC:u8=$cc5
  /* 2980 */ &reg272, &preg0, &vreg60, &mem135, &bcst0, &cc1, NULL, // VCMPPS REG:w=$Kr        PREG:r:Z=$Kk     VREG:r:f32=$ZMMn  MEM:r:f32=$mem512 BCST=$BCST CC:u8=$cc5
  /* 2987 */ &vreg7, &vreg56, &vreg16, &cc1, NULL, // VCMPPS VREG:w:f32=$XMMr VREG:r:f32=$XMMn VREG:r:f32=$XMMm  CC:u8=$cc5
  /* 2992 */ &vreg9, &vreg57, &vreg58, &cc1, NULL, // VCMPPS VREG:w:f32=$YMMr VREG:r:f32=$YMMn VREG:r:f32=$YMMm  CC:u8=$cc5
  /* 2997 */ &vreg7, &vreg56, &mem113, &cc1, NULL, // VCMPPS VREG:w:f32=$XMMr VREG:r:f32=$XMMn MEM:r:f32=$mem128 CC:u8=$cc5
  /* 3002 */ &vreg9, &vreg57, &mem134, &cc1, NULL, // VCMPPS VREG:w:f32=$YMMr VREG:r:f32=$YMMn MEM:r:f32=$mem256 CC:u8=$cc5
  /* 3007 */ &reg272, &preg0, &vreg49, &vreg14, &sae0, &cc1, NULL, // VCMPSD REG:w=$Kr        PREG:r:Z=$Kk     VREG:r:f64=$XMMn VREG:r:f64=$XMMm SAE=$SAE CC:u8=$cc5
  /* 3014 */ &reg272, &preg0, &vreg49, &mem76, &cc1, NULL, // VCMPSD REG:w=$Kr        PREG:r:Z=$Kk     VREG:r:f64=$XMMn MEM:r:f64=$mem64          CC:u8=$cc5
  /* 3020 */ &vreg19, &vreg49, &reg241, &cc1, NULL, // VCMPSD VREG:w:f64=$XMMr VREG:r:f64=$XMMn REG:r:f64=$XMMm  CC:u8=$cc5
  /* 3025 */ &vreg19, &vreg49, &mem76, &cc1, NULL, // VCMPSD VREG:w:f64=$XMMr VREG:r:f64=$XMMn MEM:r:f64=$mem64 CC:u8=$cc5
  /* 3030 */ &reg272, &preg0, &vreg56, &vreg16, &sae0, &cc1, NULL, // VCMPSS REG:w=$Kr        PREG:r:Z=$Kk     VREG:r:f32=$XMMn VREG:r:f32=$XMMm SAE=$SAE CC:u8=$cc5
  /* 3037 */ &reg272, &preg0, &vreg56, &mem75, &cc1, NULL, // VCMPSS REG:w=$Kr        PREG:r:Z=$Kk     VREG:r:f32=$XMMn MEM:r:f32=$mem32          CC:u8=$cc5
  /* 3043 */ &vreg7, &vreg56, &reg243, &cc1, NULL, // VCMPSS VREG:w:f32=$XMMr VREG:r:f32=$XMMn REG:r:f32=$XMMm  CC:u8=$cc5
  /* 3048 */ &vreg7, &vreg56, &mem75, &cc1, NULL, // VCMPSS VREG:w:f32=$XMMr VREG:r:f32=$XMMn MEM:r:f32=$mem32 CC:u8=$cc5
  /* 3053 */ &vreg23, &vreg14, NULL, // VTESTPD VREG:r:f64=$XMMr VREG:r:f64=$XMMm
  /* 3056 */ &vreg23, &vreg14, &sae0, NULL, // VUCOMISD VREG:r:f64=$XMMr VREG:r:f64=$XMMm SAE=$SAE
  /* 3060 */ &vreg23, &mem76, NULL, // VUCOMISD VREG:r:f64=$XMMr MEM:r:f64=$mem64
  /* 3063 */ &vreg11, &vreg16, NULL, // VTESTPS VREG:r:f32=$XMMr VREG:r:f32=$XMMm
  /* 3066 */ &vreg11, &vreg16, &sae0, NULL, // VUCOMISS VREG:r:f32=$XMMr VREG:r:f32=$XMMm SAE=$SAE
  /* 3070 */ &vreg11, &mem75, NULL, // VUCOMISS VREG:r:f32=$XMMr MEM:r:f32=$mem32
  /* 3073 */ &vreg19, &preg0, &vreg1, NULL, // VCVTDQ2PD VREG:w:f64=$XMMr PREG:r:Z=$Kk      VREG:r:s32=$XMMm
  /* 3077 */ &vreg19, &preg0, &mem9, &bcst0, NULL, // VCVTDQ2PD VREG:w:f64=$XMMr PREG:r:Z=$Kk      MEM:r:s32=$mem64 BCST=$BCST
  /* 3082 */ &vreg50, &vreg1, NULL, // VCVTDQ2PD VREG:w:f64=$YMMr VREG:r:s32=$XMMm
  /* 3085 */ &vreg50, &mem6, NULL, // VCVTDQ2PD VREG:w:f64=$YMMr MEM:r:s32=$mem128
  /* 3088 */ &vreg50, &preg0, &vreg1, NULL, // VCVTDQ2PD VREG:w:f64=$YMMr PREG:r:Z=$Kk      VREG:r:s32=$XMMm
  /* 3092 */ &vreg50, &preg0, &mem6, &bcst0, NULL, // VCVTDQ2PD VREG:w:f64=$YMMr PREG:r:Z=$Kk      MEM:r:s32=$mem128 BCST=$BCST
  /* 3097 */ &vreg53, &preg0, &vreg72, NULL, // VCVTDQ2PD VREG:w:f64=$ZMMr PREG:r:Z=$Kk      VREG:r:s32=$YMMm
  /* 3101 */ &vreg53, &preg0, &mem139, &bcst0, NULL, // VCVTDQ2PD VREG:w:f64=$ZMMr PREG:r:Z=$Kk      MEM:r:s32=$mem256 BCST=$BCST
  /* 3106 */ &vreg7, &preg0, &vreg1, NULL, // VCVTDQ2PS VREG:w:f32=$XMMr PREG:r:Z=$Kk      VREG:r:s32=$XMMm
  /* 3110 */ &vreg7, &preg0, &mem6, &bcst0, NULL, // VCVTDQ2PS VREG:w:f32=$XMMr PREG:r:Z=$Kk      MEM:r:s32=$mem128 BCST=$BCST
  /* 3115 */ &vreg9, &vreg72, NULL, // VCVTDQ2PS VREG:w:f32=$YMMr VREG:r:s32=$YMMm
  /* 3118 */ &vreg9, &mem139, NULL, // VCVTDQ2PS VREG:w:f32=$YMMr MEM:r:s32=$mem256
  /* 3121 */ &vreg9, &preg0, &vreg72, NULL, // VCVTDQ2PS VREG:w:f32=$YMMr PREG:r:Z=$Kk      VREG:r:s32=$YMMm
  /* 3125 */ &vreg9, &preg0, &mem139, &bcst0, NULL, // VCVTDQ2PS VREG:w:f32=$YMMr PREG:r:Z=$Kk      MEM:r:s32=$mem256 BCST=$BCST
  /* 3130 */ &vreg59, &preg0, &vreg77, &rc0, NULL, // VCVTDQ2PS VREG:w:f32=$ZMMr PREG:r:Z=$Kk      VREG:r:s32=$ZMMm RC=$RC
  /* 3135 */ &vreg59, &preg0, &vreg77, NULL, // VCVTDQ2PS VREG:w:f32=$ZMMr PREG:r:Z=$Kk      VREG:r:s32=$ZMMm
  /* 3139 */ &vreg59, &preg0, &mem140, &bcst0, NULL, // VCVTDQ2PS VREG:w:f32=$ZMMr PREG:r:Z=$Kk      MEM:r:s32=$mem512 BCST=$BCST
  /* 3144 */ &vreg2, &preg0, &vreg14, NULL, // VCVTTPD2DQ VREG:w:s32=$XMMr PREG:r:Z=$Kk      VREG:r:f64=$XMMm
  /* 3148 */ &vreg2, &preg0, &mem112, &bcst0, NULL, // VCVTTPD2DQ VREG:w:s32=$XMMr PREG:r:Z=$Kk      MEM:r:f64=$mem128 BCST=$BCST
  /* 3153 */ &vreg2, &vreg52, NULL, // VCVTTPD2DQ VREG:w:s32=$XMMr VREG:r:f64=$YMMm
  /* 3156 */ &vreg2, &mem132, NULL, // VCVTTPD2DQ VREG:w:s32=$XMMr MEM:r:f64=$mem256
  /* 3159 */ &vreg2, &preg0, &vreg52, NULL, // VCVTTPD2DQ VREG:w:s32=$XMMr PREG:r:Z=$Kk      VREG:r:f64=$YMMm
  /* 3163 */ &vreg2, &preg0, &mem132, &bcst0, NULL, // VCVTTPD2DQ VREG:w:s32=$XMMr PREG:r:Z=$Kk      MEM:r:f64=$mem256 BCST=$BCST
  /* 3168 */ &vreg70, &preg0, &vreg55, &rc0, NULL, // VCVTPD2DQ VREG:w:s32=$YMMr PREG:r:Z=$Kk      VREG:r:f64=$ZMMm RC=$RC
  /* 3173 */ &vreg70, &preg0, &vreg55, NULL, // VCVTTPD2DQ VREG:w:s32=$YMMr PREG:r:Z=$Kk      VREG:r:f64=$ZMMm
  /* 3177 */ &vreg70, &preg0, &mem133, &bcst0, NULL, // VCVTTPD2DQ VREG:w:s32=$YMMr PREG:r:Z=$Kk      MEM:r:f64=$mem512 BCST=$BCST
  /* 3182 */ &vreg7, &preg0, &vreg14, NULL, // VCVTPD2PS VREG:w:f32=$XMMr PREG:r:Z=$Kk      VREG:r:f64=$XMMm
  /* 3186 */ &vreg7, &preg0, &mem112, &bcst0, NULL, // VCVTPD2PS VREG:w:f32=$XMMr PREG:r:Z=$Kk      MEM:r:f64=$mem128 BCST=$BCST
  /* 3191 */ &vreg7, &vreg52, NULL, // VCVTPD2PS VREG:w:f32=$XMMr VREG:r:f64=$YMMm
  /* 3194 */ &vreg7, &mem132, NULL, // VCVTPD2PS VREG:w:f32=$XMMr MEM:r:f64=$mem256
  /* 3197 */ &vreg7, &preg0, &vreg52, NULL, // VCVTPD2PS VREG:w:f32=$XMMr PREG:r:Z=$Kk      VREG:r:f64=$YMMm
  /* 3201 */ &vreg7, &preg0, &mem132, &bcst0, NULL, // VCVTPD2PS VREG:w:f32=$XMMr PREG:r:Z=$Kk      MEM:r:f64=$mem256 BCST=$BCST
  /* 3206 */ &vreg9, &preg0, &vreg55, &rc0, NULL, // VCVTPD2PS VREG:w:f32=$YMMr PREG:r:Z=$Kk      VREG:r:f64=$ZMMm RC=$RC
  /* 3211 */ &vreg9, &preg0, &vreg55, NULL, // VCVTPD2PS VREG:w:f32=$YMMr PREG:r:Z=$Kk      VREG:r:f64=$ZMMm
  /* 3215 */ &vreg9, &preg0, &mem133, &bcst0, NULL, // VCVTPD2PS VREG:w:f32=$YMMr PREG:r:Z=$Kk      MEM:r:f64=$mem512 BCST=$BCST
  /* 3220 */ &vreg2, &preg0, &vreg16, NULL, // VCVTTPS2DQ VREG:w:s32=$XMMr PREG:r:Z=$Kk      VREG:r:f32=$XMMm
  /* 3224 */ &vreg2, &preg0, &mem113, &bcst0, NULL, // VCVTTPS2DQ VREG:w:s32=$XMMr PREG:r:Z=$Kk      MEM:r:f32=$mem128 BCST=$BCST
  /* 3229 */ &vreg70, &vreg58, NULL, // VCVTTPS2DQ VREG:w:s32=$YMMr VREG:r:f32=$YMMm
  /* 3232 */ &vreg70, &mem134, NULL, // VCVTTPS2DQ VREG:w:s32=$YMMr MEM:r:f32=$mem256
  /* 3235 */ &vreg70, &preg0, &vreg58, NULL, // VCVTTPS2DQ VREG:w:s32=$YMMr PREG:r:Z=$Kk      VREG:r:f32=$YMMm
  /* 3239 */ &vreg70, &preg0, &mem134, &bcst0, NULL, // VCVTTPS2DQ VREG:w:s32=$YMMr PREG:r:Z=$Kk      MEM:r:f32=$mem256 BCST=$BCST
  /* 3244 */ &vreg78, &preg0, &vreg61, &rc0, NULL, // VCVTPS2DQ VREG:w:s32=$ZMMr PREG:r:Z=$Kk      VREG:r:f32=$ZMMm RC=$RC
  /* 3249 */ &vreg78, &preg0, &vreg61, NULL, // VCVTTPS2DQ VREG:w:s32=$ZMMr PREG:r:Z=$Kk      VREG:r:f32=$ZMMm
  /* 3253 */ &vreg78, &preg0, &mem135, &bcst0, NULL, // VCVTTPS2DQ VREG:w:s32=$ZMMr PREG:r:Z=$Kk      MEM:r:f32=$mem512 BCST=$BCST
  /* 3258 */ &vreg19, &preg0, &vreg16, NULL, // VCVTPS2PD VREG:w:f64=$XMMr PREG:r:Z=$Kk      VREG:r:f32=$XMMm
  /* 3262 */ &vreg19, &preg0, &mem114, &bcst0, NULL, // VCVTPS2PD VREG:w:f64=$XMMr PREG:r:Z=$Kk      MEM:r:f32=$mem64 BCST=$BCST
  /* 3267 */ &vreg50, &vreg16, NULL, // VCVTPS2PD VREG:w:f64=$YMMr VREG:r:f32=$XMMm
  /* 3270 */ &vreg50, &mem113, NULL, // VCVTPS2PD VREG:w:f64=$YMMr MEM:r:f32=$mem128
  /* 3273 */ &vreg50, &preg0, &vreg16, NULL, // VCVTPS2PD VREG:w:f64=$YMMr PREG:r:Z=$Kk      VREG:r:f32=$XMMm
  /* 3277 */ &vreg50, &preg0, &mem113, &bcst0, NULL, // VCVTPS2PD VREG:w:f64=$YMMr PREG:r:Z=$Kk      MEM:r:f32=$mem128 BCST=$BCST
  /* 3282 */ &vreg53, &preg0, &vreg58, &sae0, NULL, // VCVTPS2PD VREG:w:f64=$ZMMr PREG:r:Z=$Kk      VREG:r:f32=$YMMm SAE=$SAE
  /* 3287 */ &vreg53, &preg0, &vreg58, NULL, // VCVTPS2PD VREG:w:f64=$ZMMr PREG:r:Z=$Kk      VREG:r:f32=$YMMm
  /* 3291 */ &vreg53, &preg0, &mem134, &bcst0, NULL, // VCVTPS2PD VREG:w:f64=$ZMMr PREG:r:Z=$Kk      MEM:r:f32=$mem256 BCST=$BCST
  /* 3296 */ &reg17, &vreg14, NULL, // VMOVMSKPD REG:w:s32=$GPR32r VREG:r:f64=$XMMm
  /* 3299 */ &reg17, &vreg14, &rc0, NULL, // VCVTSD2SI REG:w:s32=$GPR32r VREG:r:f64=$XMMm RC=$RC
  /* 3303 */ &reg19, &vreg14, NULL, // VCVTTSD2SI REG:w:s64=$GPR64r VREG:r:f64=$XMMm
  /* 3306 */ &reg19, &vreg14, &rc0, NULL, // VCVTSD2SI REG:w:s64=$GPR64r VREG:r:f64=$XMMm RC=$RC
  /* 3310 */ &vreg7, &vreg56, &reg241, NULL, // VCVTSD2SS VREG:w:f32=$XMMr VREG:r:f32=$XMMn REG:r:f64=$XMMm
  /* 3314 */ &vreg7, &vreg56, &mem76, NULL, // VCVTSD2SS VREG:w:f32=$XMMr VREG:r:f32=$XMMn MEM:r:f64=$mem64
  /* 3318 */ &vreg7, &preg0, &vreg49, &vreg14, NULL, // VCVTSD2SS VREG:w:f32=$XMMr PREG:r:Z=$Kk     VREG:r:f64=$XMMn VREG:r:f64=$XMMm
  /* 3323 */ &vreg7, &preg0, &vreg49, &vreg14, &rc0, NULL, // VCVTSD2SS VREG:w:f32=$XMMr PREG:r:Z=$Kk     VREG:r:f64=$XMMn VREG:r:f64=$XMMm RC=$RC
  /* 3329 */ &vreg7, &preg0, &vreg49, &mem76, NULL, // VCVTSD2SS VREG:w:f32=$XMMr PREG:r:Z=$Kk     VREG:r:f64=$XMMn MEM:r:f64=$mem64
  /* 3334 */ &vreg19, &vreg49, &reg14, NULL, // VCVTSI2SD VREG:w:f64=$XMMr VREG:r:f64=$XMMn        REG:r:s32=$GPR32m
  /* 3338 */ &vreg19, &vreg49, &mem4, NULL, // VCVTSI2SD VREG:w:f64=$XMMr VREG:r:f64=$XMMn        MEM:r:s32=$mem32
  /* 3342 */ &vreg19, &vreg49, &reg16, NULL, // VCVTSI2SD VREG:w:f64=$XMMr VREG:r:f64=$XMMn        REG:r:s64=$GPR64m
  /* 3346 */ &vreg19, &vreg49, &rc0, &reg16, NULL, // VCVTSI2SD VREG:w:f64=$XMMr VREG:r:f64=$XMMn RC=$RC REG:r:s64=$GPR64m
  /* 3351 */ &vreg19, &vreg49, &mem5, NULL, // VCVTSI2SD VREG:w:f64=$XMMr VREG:r:f64=$XMMn        MEM:r:s64=$mem64
  /* 3355 */ &vreg7, &vreg56, &reg14, NULL, // VCVTSI2SS VREG:w:f32=$XMMr VREG:r:f32=$XMMn        REG:r:s32=$GPR32m
  /* 3359 */ &vreg7, &vreg56, &reg16, NULL, // VCVTSI2SS VREG:w:f32=$XMMr VREG:r:f32=$XMMn        REG:r:s64=$GPR64m
  /* 3363 */ &vreg7, &vreg56, &mem4, NULL, // VCVTSI2SS VREG:w:f32=$XMMr VREG:r:f32=$XMMn        MEM:r:s32=$mem32
  /* 3367 */ &vreg7, &vreg56, &mem5, NULL, // VCVTSI2SS VREG:w:f32=$XMMr VREG:r:f32=$XMMn        MEM:r:s64=$mem64
  /* 3371 */ &vreg7, &vreg56, &rc0, &reg14, NULL, // VCVTSI2SS VREG:w:f32=$XMMr VREG:r:f32=$XMMn RC=$RC REG:r:s32=$GPR32m
  /* 3376 */ &vreg7, &vreg56, &rc0, &reg16, NULL, // VCVTSI2SS VREG:w:f32=$XMMr VREG:r:f32=$XMMn RC=$RC REG:r:s64=$GPR64m
  /* 3381 */ &vreg19, &vreg49, &reg243, NULL, // VCVTSS2SD VREG:w:f64=$XMMr VREG:r:f64=$XMMn REG:r:f32=$XMMm
  /* 3385 */ &vreg19, &vreg49, &mem75, NULL, // VCVTSS2SD VREG:w:f64=$XMMr VREG:r:f64=$XMMn MEM:r:f32=$mem32
  /* 3389 */ &vreg19, &preg0, &vreg56, &vreg16, NULL, // VCVTSS2SD VREG:w:f64=$XMMr PREG:r:Z=$Kk     VREG:r:f32=$XMMn VREG:r:f32=$XMMm
  /* 3394 */ &vreg19, &preg0, &vreg56, &vreg16, &sae0, NULL, // VCVTSS2SD VREG:w:f64=$XMMr PREG:r:Z=$Kk     VREG:r:f32=$XMMn VREG:r:f32=$XMMm SAE=$SAE
  /* 3400 */ &vreg19, &preg0, &vreg56, &mem75, NULL, // VCVTSS2SD VREG:w:f64=$XMMr PREG:r:Z=$Kk     VREG:r:f32=$XMMn MEM:r:f32=$mem32
  /* 3405 */ &reg17, &vreg16, NULL, // VMOVMSKPS REG:w:s32=$GPR32r VREG:r:f32=$XMMm
  /* 3408 */ &reg17, &vreg16, &rc0, NULL, // VCVTSS2SI REG:w:s32=$GPR32r VREG:r:f32=$XMMm RC=$RC
  /* 3412 */ &reg19, &vreg16, NULL, // VCVTTSS2SI REG:w:s64=$GPR64r VREG:r:f32=$XMMm
  /* 3415 */ &reg19, &vreg16, &rc0, NULL, // VCVTSS2SI REG:w:s64=$GPR64r VREG:r:f32=$XMMm RC=$RC
  /* 3419 */ &vreg70, &preg0, &vreg55, &sae0, NULL, // VCVTTPD2DQ VREG:w:s32=$YMMr PREG:r:Z=$Kk      VREG:r:f64=$ZMMm SAE=$SAE
  /* 3424 */ &vreg78, &preg0, &vreg61, &sae0, NULL, // VCVTTPS2DQ VREG:w:s32=$ZMMr PREG:r:Z=$Kk      VREG:r:f32=$ZMMm SAE=$SAE
  /* 3429 */ &reg17, &vreg14, &sae0, NULL, // VCVTTSD2SI REG:w:s32=$GPR32r VREG:r:f64=$XMMm SAE=$SAE
  /* 3433 */ &reg19, &vreg14, &sae0, NULL, // VCVTTSD2SI REG:w:s64=$GPR64r VREG:r:f64=$XMMm SAE=$SAE
  /* 3437 */ &reg17, &vreg16, &sae0, NULL, // VCVTTSS2SI REG:w:s32=$GPR32r VREG:r:f32=$XMMm SAE=$SAE
  /* 3441 */ &reg19, &vreg16, &sae0, NULL, // VCVTTSS2SI REG:w:s64=$GPR64r VREG:r:f32=$XMMm SAE=$SAE
  /* 3445 */ &reg110, &vreg11, &imm6, NULL, // VEXTRACTPS REG:w=$GPR32m     VREG:r:f32=$XMMr IMM:u8=$index
  /* 3449 */ &mem88, &vreg11, &imm6, NULL, // VEXTRACTPS MEM:w:f32=$mem32  VREG:r:f32=$XMMr IMM:u8=$index
  /* 3453 */ &reg273, &vreg11, &imm6, NULL, // VEXTRACTPS REG:w:f32=$GPR32m VREG:r:f32=$XMMr IMM:u8=$index
  /* 3457 */ &vreg27, &vreg45, &imm0, NULL, // GF2P8AFFINEQB  VREG:rw:u8=$XMMr VREG:r:u64=$XMMm  IMM:u8=$uimm8
  /* 3461 */ &vreg27, &mem95, &imm0, NULL, // GF2P8AFFINEQB  VREG:rw:u8=$XMMr MEM:r:u64=$mem128 IMM:u8=$uimm8
  /* 3465 */ &vreg79, &preg0, &vreg80, &vreg45, &imm0, NULL, // VGF2P8AFFINEQB VREG:w:u8=$XMMr  PREG:r:Z=$Kk      VREG:r:u8=$XMMn   VREG:r:u64=$XMMm             IMM:u8=$uimm8
  /* 3471 */ &vreg79, &preg0, &vreg80, &mem95, &bcst0, &imm0, NULL, // VGF2P8AFFINEQB VREG:w:u8=$XMMr  PREG:r:Z=$Kk      VREG:r:u8=$XMMn   MEM:r:u64=$mem128 BCST=$BCST IMM:u8=$uimm8
  /* 3478 */ &vreg79, &vreg80, &vreg45, &imm0, NULL, // VGF2P8AFFINEQB VREG:w:u8=$XMMr  VREG:r:u8=$XMMn   VREG:r:u64=$XMMm  IMM:u8=$uimm8
  /* 3483 */ &vreg81, &vreg82, &vreg5, &imm0, NULL, // VGF2P8AFFINEQB VREG:w:u8=$YMMr  VREG:r:u8=$YMMn   VREG:r:u64=$YMMm  IMM:u8=$uimm8
  /* 3488 */ &vreg79, &vreg80, &mem95, &imm0, NULL, // VGF2P8AFFINEQB VREG:w:u8=$XMMr  VREG:r:u8=$XMMn   MEM:r:u64=$mem128 IMM:u8=$uimm8
  /* 3493 */ &vreg81, &vreg82, &mem55, &imm0, NULL, // VGF2P8AFFINEQB VREG:w:u8=$YMMr  VREG:r:u8=$YMMn   MEM:r:u64=$mem256 IMM:u8=$uimm8
  /* 3498 */ &vreg81, &preg0, &vreg82, &vreg5, &imm0, NULL, // VGF2P8AFFINEQB VREG:w:u8=$YMMr  PREG:r:Z=$Kk      VREG:r:u8=$YMMn   VREG:r:u64=$YMMm             IMM:u8=$uimm8
  /* 3504 */ &vreg81, &preg0, &vreg82, &mem55, &bcst0, &imm0, NULL, // VGF2P8AFFINEQB VREG:w:u8=$YMMr  PREG:r:Z=$Kk      VREG:r:u8=$YMMn   MEM:r:u64=$mem256 BCST=$BCST IMM:u8=$uimm8
  /* 3511 */ &vreg83, &preg0, &vreg84, &vreg85, &imm0, NULL, // VGF2P8AFFINEQB VREG:w:u8=$ZMMr  PREG:r:Z=$Kk      VREG:r:u8=$ZMMn   VREG:r:u64=$ZMMm             IMM:u8=$uimm8
  /* 3517 */ &vreg83, &preg0, &vreg84, &mem141, &bcst0, &imm0, NULL, // VGF2P8AFFINEQB VREG:w:u8=$ZMMr  PREG:r:Z=$Kk      VREG:r:u8=$ZMMn   MEM:r:u64=$mem512 BCST=$BCST IMM:u8=$uimm8
  /* 3524 */ &vreg79, &preg0, &vreg80, &vreg28, NULL, // VPERMB VREG:w:u8=$XMMr PREG:r:Z=$Kk VREG:r:u8=$XMMn VREG:r:u8=$XMMm
  /* 3529 */ &vreg79, &preg0, &vreg80, &mem122, NULL, // VPERMB VREG:w:u8=$XMMr PREG:r:Z=$Kk VREG:r:u8=$XMMn MEM:r:u8=$mem128
  /* 3534 */ &vreg79, &vreg80, &vreg28, NULL, // VPSHLB VREG:w:u8=$XMMr VREG:r:u8=$XMMn  VREG:r:u8=$XMMm
  /* 3538 */ &vreg81, &vreg82, &vreg86, NULL, // VPUNPCKLBW  VREG:w:u8=$YMMr  VREG:r:u8=$YMMn  VREG:r:u8=$YMMm
  /* 3542 */ &vreg79, &vreg80, &mem122, NULL, // VPSHLB VREG:w:u8=$XMMr VREG:r:u8=$XMMn  MEM:r:u8=$mem128
  /* 3546 */ &vreg81, &vreg82, &mem142, NULL, // VPUNPCKLBW  VREG:w:u8=$YMMr  VREG:r:u8=$YMMn  MEM:r:u8=$mem256
  /* 3550 */ &vreg81, &preg0, &vreg82, &vreg86, NULL, // VPERMB VREG:w:u8=$YMMr PREG:r:Z=$Kk VREG:r:u8=$YMMn VREG:r:u8=$YMMm
  /* 3555 */ &vreg81, &preg0, &vreg82, &mem142, NULL, // VPERMB VREG:w:u8=$YMMr PREG:r:Z=$Kk VREG:r:u8=$YMMn MEM:r:u8=$mem256
  /* 3560 */ &vreg83, &preg0, &vreg84, &vreg87, NULL, // VPERMB VREG:w:u8=$ZMMr PREG:r:Z=$Kk VREG:r:u8=$ZMMn VREG:r:u8=$ZMMm
  /* 3565 */ &vreg83, &preg0, &vreg84, &mem143, NULL, // VPERMB VREG:w:u8=$ZMMr PREG:r:Z=$Kk VREG:r:u8=$ZMMn MEM:r:u8=$mem512
  /* 3570 */ &vreg7, &vreg56, &vreg16, &imm6, NULL, // VINSERTPS VREG:w:f32=$XMMr VREG:r:f32=$XMMn VREG:r:f32=$XMMm IMM:u8=$index
  /* 3575 */ &vreg7, &vreg56, &mem75, &imm6, NULL, // VINSERTPS VREG:w:f32=$XMMr VREG:r:f32=$XMMn MEM:r:f32=$mem32 IMM:u8=$index
  /* 3580 */ &reg272, &reg274, &reg275, NULL, // KXORQ REG:w=$Kr REG:r=$Kn REG:r=$Km
  /* 3584 */ &reg272, &reg276, NULL, // KMOVB REG:w=$Kr         REG:r:u8=$Km
  /* 3587 */ &reg272, &mem2, NULL, // KMOVB REG:w=$Kr         MEM:r:u8=$mem8
  /* 3590 */ &mem45, &reg277, NULL, // KMOVB MEM:w:u8=$mem8    REG:r=$Kr
  /* 3593 */ &reg272, &reg206, NULL, // KMOVD REG:w=$Kr         REG:r:u32=$GPR32m
  /* 3596 */ &reg278, &reg275, NULL, // KMOVD REG:w:u32=$GPR32r REG:r=$Km
  /* 3599 */ &reg272, &reg279, NULL, // KMOVW REG:w=$Kr         REG:r:u16=$Km
  /* 3602 */ &reg272, &mem107, NULL, // KMOVW REG:w=$Kr         MEM:r:u16=$mem16
  /* 3605 */ &mem144, &reg277, NULL, // KMOVW MEM:w:u16=$mem16  REG:r=$Kr
  /* 3608 */ &reg272, &reg280, NULL, // KMOVD REG:w=$Kr         REG:r:u32=$Km
  /* 3611 */ &reg272, &mem110, NULL, // KMOVD REG:w=$Kr         MEM:r:u32=$mem32
  /* 3614 */ &reg272, &reg281, NULL, // KMOVQ REG:w=$Kr         REG:r:u64=$Km
  /* 3617 */ &reg272, &mem124, NULL, // KMOVQ REG:w=$Kr         MEM:r:u64=$mem64
  /* 3620 */ &mem51, &reg277, NULL, // KMOVD MEM:w:u32=$mem32  REG:r=$Kr
  /* 3623 */ &mem52, &reg277, NULL, // KMOVQ MEM:w:u64=$mem64  REG:r=$Kr
  /* 3626 */ &reg272, &reg208, NULL, // KMOVQ REG:w=$Kr         REG:r:u64=$GPR64m
  /* 3629 */ &reg282, &reg275, NULL, // KMOVQ REG:w:u64=$GPR64r REG:r=$Km
  /* 3632 */ &reg272, &reg275, NULL, // KXOR REG:w=$Kr REG:r=$Km
  /* 3635 */ &reg277, &reg275, NULL, // KORTEST REG:r=$Kr REG:r=$Km
  /* 3638 */ &reg272, &reg275, &shift1, NULL, // KSHIFTLQ REG:w=$Kr REG:r=$Km SHIFT:r:u8=$shl
  /* 3642 */ &reg272, &reg275, &shift0, NULL, // KSHIFTRQ REG:w=$Kr REG:r=$Km SHIFT:r:u8=$shr
  /* 3646 */ &vreg70, &mem139, NULL, // VMOVNTDQA VREG:w:s32=$YMMr MEM:r:s32=$mem256
  /* 3649 */ &vreg88, &vreg28, &mem145, NULL, // VMASKMOVDQU VREG:r:u8=$XMMr VREG:r:u8=$XMMm MEM:SUPP:w:u8={SEG:r=DS BASE:r=$DIa SZ=128}
  /* 3653 */ &vreg53, &preg0, &vreg54, &vreg55, &sae0, NULL, // VMINPD VREG:w:f64=$ZMMr PREG:r:Z=$Kk     VREG:r:f64=$ZMMn  VREG:r:f64=$ZMMm SAE=$SAE
  /* 3659 */ &vreg59, &preg0, &vreg60, &vreg61, &sae0, NULL, // VMINPS VREG:w:f32=$ZMMr PREG:r:Z=$Kk     VREG:r:f32=$ZMMn  VREG:r:f32=$ZMMm SAE=$SAE
  /* 3665 */ &vreg19, &preg0, &vreg49, &vreg14, &sae0, NULL, // VRSQRT28SD VREG:w:f64=$XMMr PREG:r:Z=$Kk VREG:r:f64=$XMMn VREG:r:f64=$XMMm SAE=$SAE
  /* 3671 */ &vreg7, &preg0, &vreg56, &vreg16, &sae0, NULL, // VRSQRT28SS VREG:w:f32=$XMMr PREG:r:Z=$Kk VREG:r:f32=$XMMn VREG:r:f32=$XMMm SAE=$SAE
  /* 3677 */ &vreg22, &preg0, &vreg23, NULL, // VCOMPRESSPD VREG:w:f64=$XMMm  PREG:r:Z=$Kk VREG:r:f64=$XMMr
  /* 3681 */ &mem118, &preg0, &vreg23, NULL, // VCOMPRESSPD MEM:w:f64=$mem128 PREG:r:Z=$Kk VREG:r:f64=$XMMr
  /* 3685 */ &vreg89, &vreg90, NULL, // VMOVUPD VREG:w:f64=$YMMm  VREG:r:f64=$YMMr
  /* 3688 */ &mem146, &vreg90, NULL, // VMOVUPD MEM:w:f64=$mem256 VREG:r:f64=$YMMr
  /* 3691 */ &vreg89, &preg0, &vreg90, NULL, // VCOMPRESSPD VREG:w:f64=$YMMm  PREG:r:Z=$Kk VREG:r:f64=$YMMr
  /* 3695 */ &mem146, &preg0, &vreg90, NULL, // VCOMPRESSPD MEM:w:f64=$mem256 PREG:r:Z=$Kk VREG:r:f64=$YMMr
  /* 3699 */ &vreg91, &preg0, &vreg92, NULL, // VCOMPRESSPD VREG:w:f64=$ZMMm  PREG:r:Z=$Kk VREG:r:f64=$ZMMr
  /* 3703 */ &mem147, &preg0, &vreg92, NULL, // VCOMPRESSPD MEM:w:f64=$mem512 PREG:r:Z=$Kk VREG:r:f64=$ZMMr
  /* 3707 */ &vreg19, &preg0, &vreg14, NULL, // VRSQRT14PD VREG:w:f64=$XMMr PREG:r:Z=$Kk VREG:r:f64=$XMMm
  /* 3711 */ &vreg19, &preg0, &mem112, NULL, // VEXPANDPD VREG:w:f64=$XMMr PREG:r:Z=$Kk MEM:r:f64=$mem128
  /* 3715 */ &vreg50, &vreg52, NULL, // VFRCZPD VREG:w:f64=$YMMr VREG:r:f64=$YMMm
  /* 3718 */ &vreg50, &mem132, NULL, // VFRCZPD VREG:w:f64=$YMMr MEM:r:f64=$mem256
  /* 3721 */ &vreg50, &preg0, &vreg52, NULL, // VRSQRT14PD VREG:w:f64=$YMMr PREG:r:Z=$Kk VREG:r:f64=$YMMm
  /* 3725 */ &vreg50, &preg0, &mem132, NULL, // VEXPANDPD VREG:w:f64=$YMMr PREG:r:Z=$Kk MEM:r:f64=$mem256
  /* 3729 */ &vreg53, &preg0, &vreg55, NULL, // VRSQRT28PD VREG:w:f64=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMm
  /* 3733 */ &vreg53, &preg0, &mem133, NULL, // VEXPANDPD VREG:w:f64=$ZMMr PREG:r:Z=$Kk MEM:r:f64=$mem512
  /* 3737 */ &vreg24, &preg0, &vreg11, NULL, // VCOMPRESSPS VREG:w:f32=$XMMm  PREG:r:Z=$Kk VREG:r:f32=$XMMr
  /* 3741 */ &mem119, &preg0, &vreg11, NULL, // VCOMPRESSPS MEM:w:f32=$mem128 PREG:r:Z=$Kk VREG:r:f32=$XMMr
  /* 3745 */ &vreg93, &vreg12, NULL, // VMOVUPS VREG:w:f32=$YMMm  VREG:r:f32=$YMMr
  /* 3748 */ &mem148, &vreg12, NULL, // VMOVUPS MEM:w:f32=$mem256 VREG:r:f32=$YMMr
  /* 3751 */ &vreg93, &preg0, &vreg12, NULL, // VCOMPRESSPS VREG:w:f32=$YMMm  PREG:r:Z=$Kk VREG:r:f32=$YMMr
  /* 3755 */ &mem148, &preg0, &vreg12, NULL, // VCOMPRESSPS MEM:w:f32=$mem256 PREG:r:Z=$Kk VREG:r:f32=$YMMr
  /* 3759 */ &vreg94, &preg0, &vreg95, NULL, // VCOMPRESSPS VREG:w:f32=$ZMMm  PREG:r:Z=$Kk VREG:r:f32=$ZMMr
  /* 3763 */ &mem149, &preg0, &vreg95, NULL, // VCOMPRESSPS MEM:w:f32=$mem512 PREG:r:Z=$Kk VREG:r:f32=$ZMMr
  /* 3767 */ &vreg7, &preg0, &vreg16, NULL, // VRSQRT14PS VREG:w:f32=$XMMr PREG:r:Z=$Kk VREG:r:f32=$XMMm
  /* 3771 */ &vreg7, &preg0, &mem113, NULL, // VEXPANDPS VREG:w:f32=$XMMr PREG:r:Z=$Kk MEM:r:f32=$mem128
  /* 3775 */ &vreg9, &vreg58, NULL, // VFRCZPS VREG:w:f32=$YMMr VREG:r:f32=$YMMm
  /* 3778 */ &vreg9, &mem134, NULL, // VFRCZPS VREG:w:f32=$YMMr MEM:r:f32=$mem256
  /* 3781 */ &vreg9, &preg0, &vreg58, NULL, // VRSQRT14PS VREG:w:f32=$YMMr PREG:r:Z=$Kk VREG:r:f32=$YMMm
  /* 3785 */ &vreg9, &preg0, &mem134, NULL, // VEXPANDPS VREG:w:f32=$YMMr PREG:r:Z=$Kk MEM:r:f32=$mem256
  /* 3789 */ &vreg59, &preg0, &vreg61, NULL, // VRSQRT28PS VREG:w:f32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMm
  /* 3793 */ &vreg59, &preg0, &mem135, NULL, // VEXPANDPS VREG:w:f32=$ZMMr PREG:r:Z=$Kk MEM:r:f32=$mem512
  /* 3797 */ &vreg19, &preg0, &mem76, NULL, // VMOVSD VREG:w:f64=$XMMr PREG:r:Z=$Kk     MEM:r:f64=$mem64
  /* 3801 */ &vreg96, &vreg97, NULL, // VMOVDQU   VREG:w:s32=$YMMm  VREG:r:s32=$YMMr
  /* 3804 */ &mem150, &vreg97, NULL, // VMOVNTDQ MEM:w:s32=$mem256 VREG:r:s32=$YMMr
  /* 3807 */ &vreg70, &vreg72, NULL, // VMOVDQU   VREG:w:s32=$YMMr  VREG:r:s32=$YMMm
  /* 3810 */ &vreg98, &preg0, &vreg99, NULL, // VPCOMPRESSD VREG:w:u32=$XMMm  PREG:r:Z=$Kk VREG:r:u32=$XMMr
  /* 3814 */ &vreg100, &preg0, &vreg101, NULL, // VPCOMPRESSQ VREG:w:u64=$XMMm  PREG:r:Z=$Kk VREG:r:u64=$XMMr
  /* 3818 */ &mem151, &preg0, &vreg99, NULL, // VPCOMPRESSD MEM:w:u32=$mem128 PREG:r:Z=$Kk VREG:r:u32=$XMMr
  /* 3822 */ &mem93, &preg0, &vreg101, NULL, // VPCOMPRESSQ MEM:w:u64=$mem128 PREG:r:Z=$Kk VREG:r:u64=$XMMr
  /* 3826 */ &vreg102, &preg0, &vreg103, NULL, // VPCOMPRESSD VREG:w:u32=$YMMm  PREG:r:Z=$Kk VREG:r:u32=$YMMr
  /* 3830 */ &vreg104, &preg0, &vreg105, NULL, // VPCOMPRESSQ VREG:w:u64=$YMMm  PREG:r:Z=$Kk VREG:r:u64=$YMMr
  /* 3834 */ &mem152, &preg0, &vreg103, NULL, // VPCOMPRESSD MEM:w:u32=$mem256 PREG:r:Z=$Kk VREG:r:u32=$YMMr
  /* 3838 */ &mem153, &preg0, &vreg105, NULL, // VPCOMPRESSQ MEM:w:u64=$mem256 PREG:r:Z=$Kk VREG:r:u64=$YMMr
  /* 3842 */ &vreg106, &preg0, &vreg107, NULL, // VPCOMPRESSD VREG:w:u32=$ZMMm  PREG:r:Z=$Kk VREG:r:u32=$ZMMr
  /* 3846 */ &vreg108, &preg0, &vreg109, NULL, // VPCOMPRESSQ VREG:w:u64=$ZMMm  PREG:r:Z=$Kk VREG:r:u64=$ZMMr
  /* 3850 */ &mem154, &preg0, &vreg107, NULL, // VPCOMPRESSD MEM:w:u32=$mem512 PREG:r:Z=$Kk VREG:r:u32=$ZMMr
  /* 3854 */ &mem155, &preg0, &vreg109, NULL, // VPCOMPRESSQ MEM:w:u64=$mem512 PREG:r:Z=$Kk VREG:r:u64=$ZMMr
  /* 3858 */ &vreg39, &preg0, &vreg41, NULL, // VPOPCNTD VREG:w:u32=$XMMr PREG:r:Z=$Kk VREG:r:u32=$XMMm
  /* 3862 */ &vreg26, &preg0, &vreg45, NULL, // VPOPCNTQ VREG:w:u64=$XMMr PREG:r:Z=$Kk VREG:r:u64=$XMMm
  /* 3866 */ &vreg39, &preg0, &mem131, NULL, // VPEXPANDD VREG:w:u32=$XMMr PREG:r:Z=$Kk MEM:r:u32=$mem128
  /* 3870 */ &vreg26, &preg0, &mem95, NULL, // VPEXPANDQ VREG:w:u64=$XMMr PREG:r:Z=$Kk MEM:r:u64=$mem128
  /* 3874 */ &vreg110, &preg0, &vreg111, NULL, // VPOPCNTD VREG:w:u32=$YMMr PREG:r:Z=$Kk VREG:r:u32=$YMMm
  /* 3878 */ &vreg69, &preg0, &vreg5, NULL, // VPOPCNTQ VREG:w:u64=$YMMr PREG:r:Z=$Kk VREG:r:u64=$YMMm
  /* 3882 */ &vreg110, &preg0, &mem156, NULL, // VPEXPANDD VREG:w:u32=$YMMr PREG:r:Z=$Kk MEM:r:u32=$mem256
  /* 3886 */ &vreg69, &preg0, &mem55, NULL, // VPEXPANDQ VREG:w:u64=$YMMr PREG:r:Z=$Kk MEM:r:u64=$mem256
  /* 3890 */ &vreg112, &preg0, &vreg113, NULL, // VPOPCNTD VREG:w:u32=$ZMMr PREG:r:Z=$Kk VREG:r:u32=$ZMMm
  /* 3894 */ &vreg114, &preg0, &vreg85, NULL, // VPOPCNTQ VREG:w:u64=$ZMMr PREG:r:Z=$Kk VREG:r:u64=$ZMMm
  /* 3898 */ &vreg112, &preg0, &mem48, NULL, // VPEXPANDD VREG:w:u32=$ZMMr PREG:r:Z=$Kk MEM:r:u32=$mem512
  /* 3902 */ &vreg114, &preg0, &mem141, NULL, // VPEXPANDQ VREG:w:u64=$ZMMr PREG:r:Z=$Kk MEM:r:u64=$mem512
  /* 3906 */ &vreg115, &preg0, &vreg116, NULL, // VPCOMPRESSW VREG:w:u16=$XMMm  PREG:r:Z=$Kk VREG:r:u16=$XMMr
  /* 3910 */ &mem157, &preg0, &vreg116, NULL, // VPCOMPRESSW MEM:w:u16=$mem128 PREG:r:Z=$Kk VREG:r:u16=$XMMr
  /* 3914 */ &vreg117, &preg0, &vreg88, NULL, // VPCOMPRESSB VREG:w:u8=$XMMm   PREG:r:Z=$Kk VREG:r:u8=$XMMr
  /* 3918 */ &mem158, &preg0, &vreg88, NULL, // VPCOMPRESSB MEM:w:u8=$mem128  PREG:r:Z=$Kk VREG:r:u8=$XMMr
  /* 3922 */ &vreg118, &preg0, &vreg119, NULL, // VPCOMPRESSW VREG:w:u16=$YMMm  PREG:r:Z=$Kk VREG:r:u16=$YMMr
  /* 3926 */ &mem159, &preg0, &vreg119, NULL, // VPCOMPRESSW MEM:w:u16=$mem256 PREG:r:Z=$Kk VREG:r:u16=$YMMr
  /* 3930 */ &vreg120, &preg0, &vreg121, NULL, // VPCOMPRESSB VREG:w:u8=$YMMm   PREG:r:Z=$Kk VREG:r:u8=$YMMr
  /* 3934 */ &mem160, &preg0, &vreg121, NULL, // VPCOMPRESSB MEM:w:u8=$mem256  PREG:r:Z=$Kk VREG:r:u8=$YMMr
  /* 3938 */ &vreg122, &preg0, &vreg123, NULL, // VPCOMPRESSW VREG:w:u16=$ZMMm  PREG:r:Z=$Kk VREG:r:u16=$ZMMr
  /* 3942 */ &mem161, &preg0, &vreg123, NULL, // VPCOMPRESSW MEM:w:u16=$mem512 PREG:r:Z=$Kk VREG:r:u16=$ZMMr
  /* 3946 */ &vreg124, &preg0, &vreg125, NULL, // VPCOMPRESSB VREG:w:u8=$ZMMm   PREG:r:Z=$Kk VREG:r:u8=$ZMMr
  /* 3950 */ &mem162, &preg0, &vreg125, NULL, // VPCOMPRESSB MEM:w:u8=$mem512  PREG:r:Z=$Kk VREG:r:u8=$ZMMr
  /* 3954 */ &vreg40, &preg0, &vreg32, NULL, // VPOPCNTW VREG:w:u16=$XMMr PREG:r:Z=$Kk VREG:r:u16=$XMMm
  /* 3958 */ &vreg40, &preg0, &mem125, NULL, // VPOPCNTW VREG:w:u16=$XMMr PREG:r:Z=$Kk MEM:r:u16=$mem128
  /* 3962 */ &vreg79, &preg0, &vreg28, NULL, // VPOPCNTB VREG:w:u8=$XMMr  PREG:r:Z=$Kk VREG:r:u8=$XMMm
  /* 3966 */ &vreg79, &preg0, &mem122, NULL, // VPOPCNTB VREG:w:u8=$XMMr  PREG:r:Z=$Kk MEM:r:u8=$mem128
  /* 3970 */ &vreg126, &preg0, &vreg127, NULL, // VPOPCNTW VREG:w:u16=$YMMr PREG:r:Z=$Kk VREG:r:u16=$YMMm
  /* 3974 */ &vreg126, &preg0, &mem163, NULL, // VPOPCNTW VREG:w:u16=$YMMr PREG:r:Z=$Kk MEM:r:u16=$mem256
  /* 3978 */ &vreg81, &preg0, &vreg86, NULL, // VPOPCNTB VREG:w:u8=$YMMr  PREG:r:Z=$Kk VREG:r:u8=$YMMm
  /* 3982 */ &vreg81, &preg0, &mem142, NULL, // VPOPCNTB VREG:w:u8=$YMMr  PREG:r:Z=$Kk MEM:r:u8=$mem256
  /* 3986 */ &vreg128, &preg0, &vreg129, NULL, // VPOPCNTW VREG:w:u16=$ZMMr PREG:r:Z=$Kk VREG:r:u16=$ZMMm
  /* 3990 */ &vreg128, &preg0, &mem164, NULL, // VPOPCNTW VREG:w:u16=$ZMMr PREG:r:Z=$Kk MEM:r:u16=$mem512
  /* 3994 */ &vreg83, &preg0, &vreg87, NULL, // VPOPCNTB VREG:w:u8=$ZMMr  PREG:r:Z=$Kk VREG:r:u8=$ZMMm
  /* 3998 */ &vreg83, &preg0, &mem143, NULL, // VPOPCNTB VREG:w:u8=$ZMMr  PREG:r:Z=$Kk MEM:r:u8=$mem512
  /* 4002 */ &mem89, &vreg23, NULL, // VMOVHPD MEM:w:f64=$mem64 VREG:r:f64=$XMMr
  /* 4005 */ &vreg19, &reg283, &mem76, NULL, // VMOVHPD VREG:w:f64=$XMMr REG:r:f64=$XMMn  MEM:r:f64=$mem64
  /* 4009 */ &vreg7, &vreg56, &mem114, NULL, // VMOVLPS VREG:w:f32=$XMMr VREG:r:f32=$XMMn MEM:r:f32=$mem64
  /* 4013 */ &reg17, &vreg52, NULL, // VMOVMSKPD REG:w:s32=$GPR32r VREG:r:f64=$YMMm
  /* 4016 */ &reg17, &vreg58, NULL, // VMOVMSKPS REG:w:s32=$GPR32r VREG:r:f32=$YMMm
  /* 4019 */ &mem151, &vreg99, NULL, // VMOVNTDQ MEM:w:u32=$mem128 VREG:r:u32=$XMMr
  /* 4022 */ &mem152, &vreg103, NULL, // VMOVNTDQ MEM:w:u32=$mem256 VREG:r:u32=$YMMr
  /* 4025 */ &mem154, &vreg107, NULL, // VMOVNTDQ MEM:w:u32=$mem512 VREG:r:u32=$ZMMr
  /* 4028 */ &vreg39, &mem131, NULL, // VMOVNTDQA VREG:w:u32=$XMMr MEM:r:u32=$mem128
  /* 4031 */ &vreg110, &mem156, NULL, // VMOVNTDQA VREG:w:u32=$YMMr MEM:r:u32=$mem256
  /* 4034 */ &vreg112, &mem48, NULL, // VMOVNTDQA VREG:w:u32=$ZMMr MEM:r:u32=$mem512
  /* 4037 */ &mem147, &vreg92, NULL, // VMOVNTPD MEM:w:f64=$mem512 VREG:r:f64=$ZMMr
  /* 4040 */ &mem149, &vreg95, NULL, // VMOVNTPS MEM:w:f32=$mem512 VREG:r:f32=$ZMMr
  /* 4043 */ &reg202, &vreg101, NULL, // VMOVQ REG:w:u64=$GPR64m VREG:r:u64=$XMMr
  /* 4046 */ &mem52, &vreg101, NULL, // VMOVQ MEM:w:u64=$mem64  VREG:r:u64=$XMMr
  /* 4049 */ &reg263, &reg258, NULL, // VMOVQ REG:w:s64=$GPR64m REG:r:s64=$XMMr
  /* 4052 */ &vreg100, &vreg101, NULL, // VMOVQ VREG:w:u64=$XMMm  VREG:r:u64=$XMMr
  /* 4055 */ &vreg2, &reg16, NULL, // VMOVQ VREG:w:s32=$XMMr  REG:r:s64=$GPR64m
  /* 4058 */ &vreg26, &reg208, NULL, // VMOVQ VREG:w:u64=$XMMr  REG:r:u64=$GPR64m
  /* 4061 */ &vreg26, &mem124, NULL, // VMOVQ VREG:w:u64=$XMMr  MEM:r:u64=$mem64
  /* 4064 */ &vreg26, &vreg45, NULL, // VMOVQ VREG:w:u64=$XMMr  VREG:r:u64=$XMMm
  /* 4067 */ &vreg22, &preg0, &vreg49, &vreg23, NULL, // VMOVSD VREG:w:f64=$XMMm PREG:r:Z=$Kk     VREG:r:f64=$XMMn VREG:r:f64=$XMMr
  /* 4072 */ &vreg22, &vreg49, &reg244, NULL, // VMOVSD VREG:w:f64=$XMMm VREG:r:f64=$XMMn REG:r:f64=$XMMr
  /* 4076 */ &mem89, &preg0, &vreg23, NULL, // VMOVSD MEM:w:f64=$mem64 PREG:r:Z=$Kk     VREG:r:f64=$XMMr
  /* 4080 */ &mem88, &preg0, &vreg11, NULL, // VMOVSS MEM:w:f32=$mem32 PREG:r:Z=$Kk     VREG:r:f32=$XMMr
  /* 4084 */ &vreg24, &vreg56, &reg245, NULL, // VMOVSS VREG:w:f32=$XMMm VREG:r:f32=$XMMn REG:r:f32=$XMMr
  /* 4088 */ &vreg24, &preg0, &vreg56, &vreg11, NULL, // VMOVSS VREG:w:f32=$XMMm PREG:r:Z=$Kk     VREG:r:f32=$XMMn VREG:r:f32=$XMMr
  /* 4093 */ &vreg7, &preg0, &mem75, NULL, // VMOVSS VREG:w:f32=$XMMr PREG:r:Z=$Kk     MEM:r:f32=$mem32
  /* 4097 */ &reg253, &reg262, NULL, // VMOVD REG:w:s32=$GPR32m REG:r:s32=$XMMr
  /* 4100 */ &reg203, &vreg99, NULL, // VMOVD REG:w:u32=$GPR32m VREG:r:u32=$XMMr
  /* 4103 */ &mem51, &vreg99, NULL, // VMOVD MEM:w:u32=$mem32  VREG:r:u32=$XMMr
  /* 4106 */ &vreg2, &reg14, NULL, // VMOVD VREG:w:s32=$XMMr  REG:r:s32=$GPR32m
  /* 4109 */ &vreg39, &reg206, NULL, // VMOVD VREG:w:u32=$XMMr  REG:r:u32=$GPR32m
  /* 4112 */ &vreg39, &mem110, NULL, // VMOVD VREG:w:u32=$XMMr  MEM:r:u32=$mem32
  /* 4115 */ &vreg40, &vreg80, &vreg28, &imm0, NULL, // VMPSADBW VREG:w:u16=$XMMr VREG:r:u8=$XMMn VREG:r:u8=$XMMm  IMM:u8=$uimm8
  /* 4120 */ &vreg40, &vreg80, &mem122, &imm0, NULL, // VMPSADBW VREG:w:u16=$XMMr VREG:r:u8=$XMMn MEM:r:u8=$mem128 IMM:u8=$uimm8
  /* 4125 */ &vreg126, &vreg82, &vreg86, &imm0, NULL, // VMPSADBW VREG:w:u16=$YMMr VREG:r:u8=$YMMn VREG:r:u8=$YMMm  IMM:u8=$uimm8
  /* 4130 */ &vreg126, &vreg82, &mem142, &imm0, NULL, // VMPSADBW VREG:w:u16=$YMMr VREG:r:u8=$YMMn MEM:r:u8=$mem256 IMM:u8=$uimm8
  /* 4135 */ &vreg39, &vreg130, &vreg41, NULL, // VPSHLD VREG:w:u32=$XMMr VREG:r:u32=$XMMn  VREG:r:u32=$XMMm
  /* 4139 */ &vreg110, &vreg131, &vreg111, NULL, // VPERMD VREG:w:u32=$YMMr VREG:r:u32=$YMMn VREG:r:u32=$YMMm
  /* 4143 */ &vreg39, &vreg130, &mem131, NULL, // VPSHLD VREG:w:u32=$XMMr VREG:r:u32=$XMMn  MEM:r:u32=$mem128
  /* 4147 */ &vreg110, &vreg131, &mem156, NULL, // VPMASKMOVD VREG:w:u32=$YMMr  VREG:r:u32=$YMMn MEM:r:u32=$mem256
  /* 4151 */ &vreg79, &vreg35, NULL, // VPABSB VREG:w:u8=$XMMr  VREG:r:s8=$XMMm
  /* 4154 */ &vreg79, &mem126, NULL, // VPABSB VREG:w:u8=$XMMr  MEM:r:s8=$mem128
  /* 4157 */ &vreg132, &preg0, &vreg35, NULL, // VPABSB VREG:w:s8=$XMMr  PREG:r:Z=$Kk      VREG:r:s8=$XMMm
  /* 4161 */ &vreg132, &preg0, &mem126, NULL, // VPABSB VREG:w:s8=$XMMr  PREG:r:Z=$Kk      MEM:r:s8=$mem128
  /* 4165 */ &vreg81, &vreg133, NULL, // VPABSB VREG:w:u8=$YMMr  VREG:r:s8=$YMMm
  /* 4168 */ &vreg81, &mem165, NULL, // VPABSB VREG:w:u8=$YMMr  MEM:r:s8=$mem256
  /* 4171 */ &vreg134, &preg0, &vreg133, NULL, // VPABSB VREG:w:s8=$YMMr  PREG:r:Z=$Kk      VREG:r:s8=$YMMm
  /* 4175 */ &vreg134, &preg0, &mem165, NULL, // VPABSB VREG:w:s8=$YMMr  PREG:r:Z=$Kk      MEM:r:s8=$mem256
  /* 4179 */ &vreg135, &preg0, &vreg136, NULL, // VPABSB VREG:w:s8=$ZMMr  PREG:r:Z=$Kk      VREG:r:s8=$ZMMm
  /* 4183 */ &vreg135, &preg0, &mem166, NULL, // VPABSB VREG:w:s8=$ZMMr  PREG:r:Z=$Kk      MEM:r:s8=$mem512
  /* 4187 */ &vreg39, &vreg1, NULL, // VPABSD VREG:w:u32=$XMMr VREG:r:s32=$XMMm
  /* 4190 */ &vreg39, &mem6, NULL, // VPABSD VREG:w:u32=$XMMr MEM:r:s32=$mem128
  /* 4193 */ &vreg2, &preg0, &vreg1, NULL, // VPABSD VREG:w:s32=$XMMr PREG:r:Z=$Kk      VREG:r:s32=$XMMm
  /* 4197 */ &vreg2, &preg0, &mem6, &bcst0, NULL, // VPABSD VREG:w:s32=$XMMr PREG:r:Z=$Kk      MEM:r:s32=$mem128 BCST=$BCST
  /* 4202 */ &vreg110, &vreg72, NULL, // VPABSD VREG:w:u32=$YMMr VREG:r:s32=$YMMm
  /* 4205 */ &vreg110, &mem139, NULL, // VPABSD VREG:w:u32=$YMMr MEM:r:s32=$mem256
  /* 4208 */ &vreg70, &preg0, &vreg72, NULL, // VPABSD VREG:w:s32=$YMMr PREG:r:Z=$Kk      VREG:r:s32=$YMMm
  /* 4212 */ &vreg70, &preg0, &mem139, &bcst0, NULL, // VPABSD VREG:w:s32=$YMMr PREG:r:Z=$Kk      MEM:r:s32=$mem256 BCST=$BCST
  /* 4217 */ &vreg78, &preg0, &vreg77, NULL, // VPABSD VREG:w:s32=$ZMMr PREG:r:Z=$Kk      VREG:r:s32=$ZMMm
  /* 4221 */ &vreg78, &preg0, &mem140, &bcst0, NULL, // VPABSD VREG:w:s32=$ZMMr PREG:r:Z=$Kk      MEM:r:s32=$mem512 BCST=$BCST
  /* 4226 */ &vreg37, &preg0, &vreg137, NULL, // VPABSQ VREG:w:s64=$XMMr PREG:r:Z=$Kk      VREG:r:s64=$XMMm
  /* 4230 */ &vreg37, &preg0, &mem167, &bcst0, NULL, // VPABSQ VREG:w:s64=$XMMr PREG:r:Z=$Kk      MEM:r:s64=$mem128 BCST=$BCST
  /* 4235 */ &vreg138, &preg0, &vreg139, NULL, // VPABSQ VREG:w:s64=$YMMr PREG:r:Z=$Kk      VREG:r:s64=$YMMm
  /* 4239 */ &vreg138, &preg0, &mem168, &bcst0, NULL, // VPABSQ VREG:w:s64=$YMMr PREG:r:Z=$Kk      MEM:r:s64=$mem256 BCST=$BCST
  /* 4244 */ &vreg140, &preg0, &vreg141, NULL, // VPABSQ VREG:w:s64=$ZMMr PREG:r:Z=$Kk      VREG:r:s64=$ZMMm
  /* 4248 */ &vreg140, &preg0, &mem97, &bcst0, NULL, // VPABSQ VREG:w:s64=$ZMMr PREG:r:Z=$Kk      MEM:r:s64=$mem512 BCST=$BCST
  /* 4253 */ &vreg40, &vreg30, NULL, // VPABSW VREG:w:u16=$XMMr VREG:r:s16=$XMMm
  /* 4256 */ &vreg40, &mem123, NULL, // VPABSW VREG:w:u16=$XMMr MEM:r:s16=$mem128
  /* 4259 */ &vreg38, &preg0, &vreg30, NULL, // VPABSW VREG:w:s16=$XMMr PREG:r:Z=$Kk      VREG:r:s16=$XMMm
  /* 4263 */ &vreg38, &preg0, &mem123, NULL, // VPABSW VREG:w:s16=$XMMr PREG:r:Z=$Kk      MEM:r:s16=$mem128
  /* 4267 */ &vreg126, &vreg142, NULL, // VPABSW VREG:w:u16=$YMMr VREG:r:s16=$YMMm
  /* 4270 */ &vreg126, &mem169, NULL, // VPABSW VREG:w:u16=$YMMr MEM:r:s16=$mem256
  /* 4273 */ &vreg143, &preg0, &vreg142, NULL, // VPABSW VREG:w:s16=$YMMr PREG:r:Z=$Kk      VREG:r:s16=$YMMm
  /* 4277 */ &vreg143, &preg0, &mem169, NULL, // VPABSW VREG:w:s16=$YMMr PREG:r:Z=$Kk      MEM:r:s16=$mem256
  /* 4281 */ &vreg144, &preg0, &vreg145, NULL, // VPABSW VREG:w:s16=$ZMMr PREG:r:Z=$Kk      VREG:r:s16=$ZMMm
  /* 4285 */ &vreg144, &preg0, &mem170, NULL, // VPABSW VREG:w:s16=$ZMMr PREG:r:Z=$Kk      MEM:r:s16=$mem512
  /* 4289 */ &vreg38, &vreg62, &vreg1, NULL, // VPACKSSDW VREG:w:s16=$XMMr VREG:r:s32=$XMMn VREG:r:s32=$XMMm
  /* 4293 */ &vreg38, &vreg62, &mem6, NULL, // VPACKSSDW VREG:w:s16=$XMMr VREG:r:s32=$XMMn MEM:r:s32=$mem128
  /* 4297 */ &vreg38, &preg0, &vreg62, &vreg1, NULL, // VPACKSSDW VREG:w:s16=$XMMr PREG:r:Z=$Kk     VREG:r:s32=$XMMn  VREG:r:s32=$XMMm
  /* 4302 */ &vreg38, &preg0, &vreg62, &mem6, &bcst0, NULL, // VPACKSSDW VREG:w:s16=$XMMr PREG:r:Z=$Kk     VREG:r:s32=$XMMn  MEM:r:s32=$mem128 BCST=$BCST
  /* 4308 */ &vreg143, &vreg71, &vreg72, NULL, // VPACKSSDW VREG:w:s16=$YMMr VREG:r:s32=$YMMn VREG:r:s32=$YMMm
  /* 4312 */ &vreg143, &vreg71, &mem139, NULL, // VPACKSSDW VREG:w:s16=$YMMr VREG:r:s32=$YMMn MEM:r:s32=$mem256
  /* 4316 */ &vreg143, &preg0, &vreg71, &vreg72, NULL, // VPACKSSDW VREG:w:s16=$YMMr PREG:r:Z=$Kk     VREG:r:s32=$YMMn  VREG:r:s32=$YMMm
  /* 4321 */ &vreg143, &preg0, &vreg71, &mem139, &bcst0, NULL, // VPACKSSDW VREG:w:s16=$YMMr PREG:r:Z=$Kk     VREG:r:s32=$YMMn  MEM:r:s32=$mem256 BCST=$BCST
  /* 4327 */ &vreg144, &preg0, &vreg146, &vreg77, NULL, // VPACKSSDW VREG:w:s16=$ZMMr PREG:r:Z=$Kk     VREG:r:s32=$ZMMn  VREG:r:s32=$ZMMm
  /* 4332 */ &vreg144, &preg0, &vreg146, &mem140, &bcst0, NULL, // VPACKSSDW VREG:w:s16=$ZMMr PREG:r:Z=$Kk     VREG:r:s32=$ZMMn  MEM:r:s32=$mem512 BCST=$BCST
  /* 4338 */ &vreg132, &vreg147, &vreg30, NULL, // VPACKSSWB VREG:w:s8=$XMMr  VREG:r:s16=$XMMn VREG:r:s16=$XMMm
  /* 4342 */ &vreg132, &vreg147, &mem123, NULL, // VPACKSSWB VREG:w:s8=$XMMr  VREG:r:s16=$XMMn MEM:r:s16=$mem128
  /* 4346 */ &vreg132, &preg0, &vreg147, &vreg30, NULL, // VPACKSSWB VREG:w:s8=$XMMr  PREG:r:Z=$Kk     VREG:r:s16=$XMMn  VREG:r:s16=$XMMm
  /* 4351 */ &vreg132, &preg0, &vreg147, &mem123, NULL, // VPACKSSWB VREG:w:s8=$XMMr  PREG:r:Z=$Kk     VREG:r:s16=$XMMn  MEM:r:s16=$mem128
  /* 4356 */ &vreg134, &vreg148, &vreg142, NULL, // VPACKSSWB VREG:w:s8=$YMMr  VREG:r:s16=$YMMn VREG:r:s16=$YMMm
  /* 4360 */ &vreg134, &vreg148, &mem169, NULL, // VPACKSSWB VREG:w:s8=$YMMr  VREG:r:s16=$YMMn MEM:r:s16=$mem256
  /* 4364 */ &vreg134, &preg0, &vreg148, &vreg142, NULL, // VPACKSSWB VREG:w:s8=$YMMr  PREG:r:Z=$Kk     VREG:r:s16=$YMMn  VREG:r:s16=$YMMm
  /* 4369 */ &vreg134, &preg0, &vreg148, &mem169, NULL, // VPACKSSWB VREG:w:s8=$YMMr  PREG:r:Z=$Kk     VREG:r:s16=$YMMn  MEM:r:s16=$mem256
  /* 4374 */ &vreg135, &preg0, &vreg149, &vreg145, NULL, // VPACKSSWB VREG:w:s8=$ZMMr  PREG:r:Z=$Kk     VREG:r:s16=$ZMMn  VREG:r:s16=$ZMMm
  /* 4379 */ &vreg135, &preg0, &vreg149, &mem170, NULL, // VPACKSSWB VREG:w:s8=$ZMMr  PREG:r:Z=$Kk     VREG:r:s16=$ZMMn  MEM:r:s16=$mem512
  /* 4384 */ &vreg40, &vreg62, &vreg1, NULL, // VPACKUSDW VREG:w:u16=$XMMr VREG:r:s32=$XMMn VREG:r:s32=$XMMm
  /* 4388 */ &vreg40, &vreg62, &mem6, NULL, // VPACKUSDW VREG:w:u16=$XMMr VREG:r:s32=$XMMn MEM:r:s32=$mem128
  /* 4392 */ &vreg40, &preg0, &vreg130, &vreg41, NULL, // VPACKUSDW VREG:w:u16=$XMMr PREG:r:Z=$Kk     VREG:r:u32=$XMMn  VREG:r:u32=$XMMm
  /* 4397 */ &vreg40, &preg0, &vreg130, &mem131, &bcst0, NULL, // VPACKUSDW VREG:w:u16=$XMMr PREG:r:Z=$Kk     VREG:r:u32=$XMMn  MEM:r:u32=$mem128 BCST=$BCST
  /* 4403 */ &vreg126, &vreg71, &vreg72, NULL, // VPACKUSDW VREG:w:u16=$YMMr VREG:r:s32=$YMMn VREG:r:s32=$YMMm
  /* 4407 */ &vreg126, &vreg71, &mem139, NULL, // VPACKUSDW VREG:w:u16=$YMMr VREG:r:s32=$YMMn MEM:r:s32=$mem256
  /* 4411 */ &vreg126, &preg0, &vreg131, &vreg111, NULL, // VPACKUSDW VREG:w:u16=$YMMr PREG:r:Z=$Kk     VREG:r:u32=$YMMn  VREG:r:u32=$YMMm
  /* 4416 */ &vreg126, &preg0, &vreg131, &mem156, &bcst0, NULL, // VPACKUSDW VREG:w:u16=$YMMr PREG:r:Z=$Kk     VREG:r:u32=$YMMn  MEM:r:u32=$mem256 BCST=$BCST
  /* 4422 */ &vreg128, &preg0, &vreg150, &vreg113, NULL, // VPACKUSDW VREG:w:u16=$ZMMr PREG:r:Z=$Kk     VREG:r:u32=$ZMMn  VREG:r:u32=$ZMMm
  /* 4427 */ &vreg128, &preg0, &vreg150, &mem48, &bcst0, NULL, // VPACKUSDW VREG:w:u16=$ZMMr PREG:r:Z=$Kk     VREG:r:u32=$ZMMn  MEM:r:u32=$mem512 BCST=$BCST
  /* 4433 */ &vreg79, &vreg147, &vreg30, NULL, // VPACKUSWB VREG:w:u8=$XMMr VREG:r:s16=$XMMn VREG:r:s16=$XMMm
  /* 4437 */ &vreg79, &vreg147, &mem123, NULL, // VPACKUSWB VREG:w:u8=$XMMr VREG:r:s16=$XMMn MEM:r:s16=$mem128
  /* 4441 */ &vreg79, &preg0, &vreg151, &vreg32, NULL, // VPACKUSWB VREG:w:u8=$XMMr PREG:r:Z=$Kk     VREG:r:u16=$XMMn  VREG:r:u16=$XMMm
  /* 4446 */ &vreg79, &preg0, &vreg151, &mem125, NULL, // VPACKUSWB VREG:w:u8=$XMMr PREG:r:Z=$Kk     VREG:r:u16=$XMMn  MEM:r:u16=$mem128
  /* 4451 */ &vreg81, &vreg148, &vreg142, NULL, // VPACKUSWB VREG:w:u8=$YMMr VREG:r:s16=$YMMn VREG:r:s16=$YMMm
  /* 4455 */ &vreg81, &vreg148, &mem169, NULL, // VPACKUSWB VREG:w:u8=$YMMr VREG:r:s16=$YMMn MEM:r:s16=$mem256
  /* 4459 */ &vreg81, &preg0, &vreg152, &vreg127, NULL, // VPACKUSWB VREG:w:u8=$YMMr PREG:r:Z=$Kk     VREG:r:u16=$YMMn  VREG:r:u16=$YMMm
  /* 4464 */ &vreg81, &preg0, &vreg152, &mem163, NULL, // VPACKUSWB VREG:w:u8=$YMMr PREG:r:Z=$Kk     VREG:r:u16=$YMMn  MEM:r:u16=$mem256
  /* 4469 */ &vreg83, &preg0, &vreg153, &vreg129, NULL, // VPACKUSWB VREG:w:u8=$ZMMr PREG:r:Z=$Kk     VREG:r:u16=$ZMMn  VREG:r:u16=$ZMMm
  /* 4474 */ &vreg83, &preg0, &vreg153, &mem164, NULL, // VPACKUSWB VREG:w:u8=$ZMMr PREG:r:Z=$Kk     VREG:r:u16=$ZMMn  MEM:r:u16=$mem512
  /* 4479 */ &vreg132, &vreg154, &vreg35, NULL, // VPSHAB VREG:w:s8=$XMMr VREG:r:s8=$XMMn  VREG:r:s8=$XMMm
  /* 4483 */ &vreg132, &vreg154, &mem126, NULL, // VPSHAB VREG:w:s8=$XMMr VREG:r:s8=$XMMn  MEM:r:s8=$mem128
  /* 4487 */ &vreg132, &preg0, &vreg154, &vreg35, NULL, // VPSUBSB VREG:w:s8=$XMMr  PREG:r:Z=$Kk     VREG:r:s8=$XMMn   VREG:r:s8=$XMMm
  /* 4492 */ &vreg132, &preg0, &vreg154, &mem126, NULL, // VPSUBSB VREG:w:s8=$XMMr  PREG:r:Z=$Kk     VREG:r:s8=$XMMn   MEM:r:s8=$mem128
  /* 4497 */ &vreg134, &vreg155, &vreg133, NULL, // VPSUBB VREG:w:s8=$YMMr  VREG:r:s8=$YMMn  VREG:r:s8=$YMMm
  /* 4501 */ &vreg134, &vreg155, &mem165, NULL, // VPSUBB VREG:w:s8=$YMMr  VREG:r:s8=$YMMn  MEM:r:s8=$mem256
  /* 4505 */ &vreg134, &preg0, &vreg155, &vreg133, NULL, // VPSUBSB VREG:w:s8=$YMMr  PREG:r:Z=$Kk     VREG:r:s8=$YMMn   VREG:r:s8=$YMMm
  /* 4510 */ &vreg134, &preg0, &vreg155, &mem165, NULL, // VPSUBSB VREG:w:s8=$YMMr  PREG:r:Z=$Kk     VREG:r:s8=$YMMn   MEM:r:s8=$mem256
  /* 4515 */ &vreg135, &preg0, &vreg156, &vreg136, NULL, // VPSUBSB VREG:w:s8=$ZMMr  PREG:r:Z=$Kk     VREG:r:s8=$ZMMn   VREG:r:s8=$ZMMm
  /* 4520 */ &vreg135, &preg0, &vreg156, &mem166, NULL, // VPSUBSB VREG:w:s8=$ZMMr  PREG:r:Z=$Kk     VREG:r:s8=$ZMMn   MEM:r:s8=$mem512
  /* 4525 */ &vreg38, &vreg147, &vreg30, NULL, // VPSHAW VREG:w:s16=$XMMr VREG:r:s16=$XMMn  VREG:r:s16=$XMMm
  /* 4529 */ &vreg38, &vreg147, &mem123, NULL, // VPSHAW VREG:w:s16=$XMMr VREG:r:s16=$XMMn  MEM:r:s16=$mem128
  /* 4533 */ &vreg38, &preg0, &vreg147, &vreg30, NULL, // VPSUBSW VREG:w:s16=$XMMr PREG:r:Z=$Kk     VREG:r:s16=$XMMn  VREG:r:s16=$XMMm
  /* 4538 */ &vreg38, &preg0, &vreg147, &mem123, NULL, // VPSUBSW VREG:w:s16=$XMMr PREG:r:Z=$Kk     VREG:r:s16=$XMMn  MEM:r:s16=$mem128
  /* 4543 */ &vreg143, &vreg148, &vreg142, NULL, // VPSUBW VREG:w:s16=$YMMr VREG:r:s16=$YMMn VREG:r:s16=$YMMm
  /* 4547 */ &vreg143, &vreg148, &mem169, NULL, // VPSUBW VREG:w:s16=$YMMr VREG:r:s16=$YMMn MEM:r:s16=$mem256
  /* 4551 */ &vreg143, &preg0, &vreg148, &vreg142, NULL, // VPSUBSW VREG:w:s16=$YMMr PREG:r:Z=$Kk     VREG:r:s16=$YMMn  VREG:r:s16=$YMMm
  /* 4556 */ &vreg143, &preg0, &vreg148, &mem169, NULL, // VPSUBSW VREG:w:s16=$YMMr PREG:r:Z=$Kk     VREG:r:s16=$YMMn  MEM:r:s16=$mem256
  /* 4561 */ &vreg144, &preg0, &vreg149, &vreg145, NULL, // VPSUBSW VREG:w:s16=$ZMMr PREG:r:Z=$Kk     VREG:r:s16=$ZMMn  VREG:r:s16=$ZMMm
  /* 4566 */ &vreg144, &preg0, &vreg149, &mem170, NULL, // VPSUBSW VREG:w:s16=$ZMMr PREG:r:Z=$Kk     VREG:r:s16=$ZMMn  MEM:r:s16=$mem512
  /* 4571 */ &vreg40, &vreg151, &vreg32, NULL, // VPSHLW VREG:w:u16=$XMMr VREG:r:u16=$XMMn  VREG:r:u16=$XMMm
  /* 4575 */ &vreg40, &vreg151, &mem125, NULL, // VPSHLW VREG:w:u16=$XMMr VREG:r:u16=$XMMn  MEM:r:u16=$mem128
  /* 4579 */ &vreg40, &preg0, &vreg151, &vreg32, NULL, // VPSRLVW VREG:w:u16=$XMMr PREG:r:Z=$Kk     VREG:r:u16=$XMMn  VREG:r:u16=$XMMm
  /* 4584 */ &vreg40, &preg0, &vreg151, &mem125, NULL, // VPSRLVW VREG:w:u16=$XMMr PREG:r:Z=$Kk     VREG:r:u16=$XMMn  MEM:r:u16=$mem128
  /* 4589 */ &vreg126, &vreg152, &vreg127, NULL, // VPUNPCKLWD  VREG:w:u16=$YMMr VREG:r:u16=$YMMn VREG:r:u16=$YMMm
  /* 4593 */ &vreg126, &vreg152, &mem163, NULL, // VPUNPCKLWD  VREG:w:u16=$YMMr VREG:r:u16=$YMMn MEM:r:u16=$mem256
  /* 4597 */ &vreg126, &preg0, &vreg152, &vreg127, NULL, // VPSRLVW VREG:w:u16=$YMMr PREG:r:Z=$Kk     VREG:r:u16=$YMMn  VREG:r:u16=$YMMm
  /* 4602 */ &vreg126, &preg0, &vreg152, &mem163, NULL, // VPSRLVW VREG:w:u16=$YMMr PREG:r:Z=$Kk     VREG:r:u16=$YMMn  MEM:r:u16=$mem256
  /* 4607 */ &vreg128, &preg0, &vreg153, &vreg129, NULL, // VPSRLVW VREG:w:u16=$ZMMr PREG:r:Z=$Kk     VREG:r:u16=$ZMMn  VREG:r:u16=$ZMMm
  /* 4612 */ &vreg128, &preg0, &vreg153, &mem164, NULL, // VPSRLVW VREG:w:u16=$ZMMr PREG:r:Z=$Kk     VREG:r:u16=$ZMMn  MEM:r:u16=$mem512
  /* 4617 */ &vreg39, &preg0, &vreg130, &vreg41, NULL, // VPXORD VREG:w:u32=$XMMr PREG:r:Z=$Kk VREG:r:u32=$XMMn VREG:r:u32=$XMMm
  /* 4622 */ &vreg39, &preg0, &vreg130, &mem131, &bcst0, NULL, // VPXORD VREG:w:u32=$XMMr PREG:r:Z=$Kk VREG:r:u32=$XMMn MEM:r:u32=$mem128 BCST=$BCST
  /* 4628 */ &vreg110, &preg0, &vreg131, &vreg111, NULL, // VPXORD VREG:w:u32=$YMMr PREG:r:Z=$Kk VREG:r:u32=$YMMn VREG:r:u32=$YMMm
  /* 4633 */ &vreg110, &preg0, &vreg131, &mem156, &bcst0, NULL, // VPXORD VREG:w:u32=$YMMr PREG:r:Z=$Kk VREG:r:u32=$YMMn MEM:r:u32=$mem256 BCST=$BCST
  /* 4639 */ &vreg112, &preg0, &vreg150, &vreg113, NULL, // VPXORD VREG:w:u32=$ZMMr PREG:r:Z=$Kk VREG:r:u32=$ZMMn VREG:r:u32=$ZMMm
  /* 4644 */ &vreg112, &preg0, &vreg150, &mem48, &bcst0, NULL, // VPXORD VREG:w:u32=$ZMMr PREG:r:Z=$Kk VREG:r:u32=$ZMMn MEM:r:u32=$mem512 BCST=$BCST
  /* 4650 */ &vreg37, &vreg157, &vreg137, NULL, // VPSHAQ VREG:w:s64=$XMMr VREG:r:s64=$XMMn  VREG:r:s64=$XMMm
  /* 4654 */ &vreg37, &vreg157, &mem167, NULL, // VPSHAQ VREG:w:s64=$XMMr VREG:r:s64=$XMMn  MEM:r:s64=$mem128
  /* 4658 */ &vreg26, &preg0, &vreg68, &vreg45, NULL, // VPXORQ VREG:w:u64=$XMMr PREG:r:Z=$Kk VREG:r:u64=$XMMn VREG:r:u64=$XMMm
  /* 4663 */ &vreg26, &preg0, &vreg68, &mem95, &bcst0, NULL, // VPXORQ VREG:w:u64=$XMMr PREG:r:Z=$Kk VREG:r:u64=$XMMn MEM:r:u64=$mem128 BCST=$BCST
  /* 4669 */ &vreg138, &vreg158, &vreg139, NULL, // VPSUBQ VREG:w:s64=$YMMr VREG:r:s64=$YMMn VREG:r:s64=$YMMm
  /* 4673 */ &vreg138, &vreg158, &mem168, NULL, // VPSUBQ VREG:w:s64=$YMMr VREG:r:s64=$YMMn MEM:r:s64=$mem256
  /* 4677 */ &vreg69, &preg0, &vreg4, &vreg5, NULL, // VPXORQ VREG:w:u64=$YMMr PREG:r:Z=$Kk VREG:r:u64=$YMMn VREG:r:u64=$YMMm
  /* 4682 */ &vreg69, &preg0, &vreg4, &mem55, &bcst0, NULL, // VPXORQ VREG:w:u64=$YMMr PREG:r:Z=$Kk VREG:r:u64=$YMMn MEM:r:u64=$mem256 BCST=$BCST
  /* 4688 */ &vreg114, &preg0, &vreg159, &vreg85, NULL, // VPXORQ VREG:w:u64=$ZMMr PREG:r:Z=$Kk VREG:r:u64=$ZMMn VREG:r:u64=$ZMMm
  /* 4693 */ &vreg114, &preg0, &vreg159, &mem141, &bcst0, NULL, // VPXORQ VREG:w:u64=$ZMMr PREG:r:Z=$Kk VREG:r:u64=$ZMMn MEM:r:u64=$mem512 BCST=$BCST
  /* 4699 */ &vreg79, &vreg80, &vreg28, &imm0, NULL, // VPCOMUB VREG:w:u8=$XMMr VREG:r:u8=$XMMn VREG:r:u8=$XMMm  IMM:u8=$uimm8
  /* 4704 */ &vreg79, &vreg80, &mem122, &imm0, NULL, // VPCOMUB VREG:w:u8=$XMMr VREG:r:u8=$XMMn MEM:r:u8=$mem128 IMM:u8=$uimm8
  /* 4709 */ &vreg79, &preg0, &vreg80, &vreg28, &imm0, NULL, // VPALIGNR VREG:w:u8=$XMMr PREG:r:Z=$Kk    VREG:r:u8=$XMMn  VREG:r:u8=$XMMm  IMM:u8=$uimm8
  /* 4715 */ &vreg79, &preg0, &vreg80, &mem122, &imm0, NULL, // VPALIGNR VREG:w:u8=$XMMr PREG:r:Z=$Kk    VREG:r:u8=$XMMn  MEM:r:u8=$mem128 IMM:u8=$uimm8
  /* 4721 */ &vreg81, &vreg82, &vreg86, &imm0, NULL, // VPALIGNR VREG:w:u8=$YMMr VREG:r:u8=$YMMn VREG:r:u8=$YMMm  IMM:u8=$uimm8
  /* 4726 */ &vreg81, &vreg82, &mem142, &imm0, NULL, // VPALIGNR VREG:w:u8=$YMMr VREG:r:u8=$YMMn MEM:r:u8=$mem256 IMM:u8=$uimm8
  /* 4731 */ &vreg81, &preg0, &vreg82, &vreg86, &imm0, NULL, // VPALIGNR VREG:w:u8=$YMMr PREG:r:Z=$Kk    VREG:r:u8=$YMMn  VREG:r:u8=$YMMm  IMM:u8=$uimm8
  /* 4737 */ &vreg81, &preg0, &vreg82, &mem142, &imm0, NULL, // VPALIGNR VREG:w:u8=$YMMr PREG:r:Z=$Kk    VREG:r:u8=$YMMn  MEM:r:u8=$mem256 IMM:u8=$uimm8
  /* 4743 */ &vreg83, &preg0, &vreg84, &vreg87, &imm0, NULL, // VPALIGNR VREG:w:u8=$ZMMr PREG:r:Z=$Kk    VREG:r:u8=$ZMMn  VREG:r:u8=$ZMMm  IMM:u8=$uimm8
  /* 4749 */ &vreg83, &preg0, &vreg84, &mem143, &imm0, NULL, // VPALIGNR VREG:w:u8=$ZMMr PREG:r:Z=$Kk    VREG:r:u8=$ZMMn  MEM:r:u8=$mem512 IMM:u8=$uimm8
  /* 4755 */ &reg284, &reg285, &reg286, NULL, // VPXOR REG:w:u256=$YMMr REG:r:u256=$YMMn REG:r:u256=$YMMm
  /* 4759 */ &reg284, &reg285, &mem171, NULL, // VPXOR REG:w:u256=$YMMr REG:r:u256=$YMMn MEM:r:u256=$mem256
  /* 4763 */ &vreg132, &vreg154, &vreg35, &vreg160, NULL, // VPBLENDVB VREG:w:s8=$XMMr VREG:r:s8=$XMMn VREG:r:s8=$XMMm  VREG:r:s8=$XMMis4
  /* 4768 */ &vreg132, &vreg154, &mem126, &vreg160, NULL, // VPBLENDVB VREG:w:s8=$XMMr VREG:r:s8=$XMMn MEM:r:s8=$mem128 VREG:r:s8=$XMMis4
  /* 4773 */ &vreg81, &vreg82, &vreg86, &vreg161, NULL, // VPBLENDVB VREG:w:u8=$YMMr VREG:r:u8=$YMMn VREG:r:u8=$YMMm  VREG:r:u8=$YMMis4
  /* 4778 */ &vreg81, &vreg82, &mem142, &vreg161, NULL, // VPBLENDVB VREG:w:u8=$YMMr VREG:r:u8=$YMMn MEM:r:u8=$mem256 VREG:r:u8=$YMMis4
  /* 4783 */ &vreg40, &vreg151, &vreg32, &imm0, NULL, // VPCOMUW VREG:w:u16=$XMMr VREG:r:u16=$XMMn VREG:r:u16=$XMMm  IMM:u8=$uimm8
  /* 4788 */ &vreg40, &vreg151, &mem125, &imm0, NULL, // VPCOMUW VREG:w:u16=$XMMr VREG:r:u16=$XMMn MEM:r:u16=$mem128 IMM:u8=$uimm8
  /* 4793 */ &vreg126, &vreg152, &vreg127, &imm0, NULL, // VPBLENDW VREG:w:u16=$YMMr VREG:r:u16=$YMMn VREG:r:u16=$YMMm  IMM:u8=$uimm8
  /* 4798 */ &vreg126, &vreg152, &mem163, &imm0, NULL, // VPBLENDW VREG:w:u16=$YMMr VREG:r:u16=$YMMn MEM:r:u16=$mem256 IMM:u8=$uimm8
  /* 4803 */ &reg269, &vreg68, &vreg45, &imm0, NULL, // VPCLMULQDQ REG:w:u128=$XMMr  VREG:r:u64=$XMMn VREG:r:u64=$XMMm  IMM:u8=$uimm8
  /* 4808 */ &reg269, &vreg68, &mem95, &imm0, NULL, // VPCLMULQDQ REG:w:u128=$XMMr  VREG:r:u64=$XMMn MEM:r:u64=$mem128 IMM:u8=$uimm8
  /* 4813 */ &vreg65, &vreg159, &vreg85, &imm0, NULL, // VPCLMULQDQ VREG:w:u128=$ZMMr VREG:r:u64=$ZMMn VREG:r:u64=$ZMMm  IMM:u8=$uimm8
  /* 4818 */ &vreg65, &vreg159, &mem141, &imm0, NULL, // VPCLMULQDQ VREG:w:u128=$ZMMr VREG:r:u64=$ZMMn MEM:r:u64=$mem512 IMM:u8=$uimm8
  /* 4823 */ &reg272, &preg0, &vreg68, &vreg45, NULL, // VPTESTNMQ REG:w=$Kr PREG:r:Z=$Kk VREG:r:u64=$XMMn VREG:r:u64=$XMMm
  /* 4828 */ &reg272, &preg0, &vreg68, &mem95, &bcst0, NULL, // VPTESTNMQ REG:w=$Kr PREG:r:Z=$Kk VREG:r:u64=$XMMn MEM:r:u64=$mem128 BCST=$BCST
  /* 4834 */ &reg272, &preg0, &vreg4, &vreg5, NULL, // VPTESTNMQ REG:w=$Kr PREG:r:Z=$Kk VREG:r:u64=$YMMn VREG:r:u64=$YMMm
  /* 4839 */ &reg272, &preg0, &vreg4, &mem55, &bcst0, NULL, // VPTESTNMQ REG:w=$Kr PREG:r:Z=$Kk VREG:r:u64=$YMMn MEM:r:u64=$mem256 BCST=$BCST
  /* 4845 */ &reg272, &preg0, &vreg159, &vreg85, NULL, // VPTESTNMQ REG:w=$Kr PREG:r:Z=$Kk VREG:r:u64=$ZMMn VREG:r:u64=$ZMMm
  /* 4850 */ &reg272, &preg0, &vreg159, &mem141, &bcst0, NULL, // VPTESTNMQ REG:w=$Kr PREG:r:Z=$Kk VREG:r:u64=$ZMMn MEM:r:u64=$mem512 BCST=$BCST
  /* 4856 */ &reg272, &preg0, &vreg80, &vreg28, NULL, // VPTESTNMB REG:w=$Kr PREG:r:Z=$Kk VREG:r:u8=$XMMn  VREG:r:u8=$XMMm
  /* 4861 */ &reg272, &preg0, &vreg80, &mem122, NULL, // VPTESTNMB REG:w=$Kr PREG:r:Z=$Kk VREG:r:u8=$XMMn  MEM:r:u8=$mem128
  /* 4866 */ &reg272, &preg0, &vreg82, &vreg86, NULL, // VPTESTNMB REG:w=$Kr PREG:r:Z=$Kk VREG:r:u8=$YMMn  VREG:r:u8=$YMMm
  /* 4871 */ &reg272, &preg0, &vreg82, &mem142, NULL, // VPTESTNMB REG:w=$Kr PREG:r:Z=$Kk VREG:r:u8=$YMMn  MEM:r:u8=$mem256
  /* 4876 */ &reg272, &preg0, &vreg84, &vreg87, NULL, // VPTESTNMB REG:w=$Kr PREG:r:Z=$Kk VREG:r:u8=$ZMMn  VREG:r:u8=$ZMMm
  /* 4881 */ &reg272, &preg0, &vreg84, &mem143, NULL, // VPTESTNMB REG:w=$Kr PREG:r:Z=$Kk VREG:r:u8=$ZMMn  MEM:r:u8=$mem512
  /* 4886 */ &reg272, &preg0, &vreg130, &vreg41, NULL, // VPTESTNMD REG:w=$Kr PREG:r:Z=$Kk VREG:r:u32=$XMMn VREG:r:u32=$XMMm
  /* 4891 */ &reg272, &preg0, &vreg130, &mem131, &bcst0, NULL, // VPTESTNMD REG:w=$Kr PREG:r:Z=$Kk VREG:r:u32=$XMMn MEM:r:u32=$mem128 BCST=$BCST
  /* 4897 */ &reg272, &preg0, &vreg131, &vreg111, NULL, // VPTESTNMD REG:w=$Kr PREG:r:Z=$Kk VREG:r:u32=$YMMn VREG:r:u32=$YMMm
  /* 4902 */ &reg272, &preg0, &vreg131, &mem156, &bcst0, NULL, // VPTESTNMD REG:w=$Kr PREG:r:Z=$Kk VREG:r:u32=$YMMn MEM:r:u32=$mem256 BCST=$BCST
  /* 4908 */ &reg272, &preg0, &vreg150, &vreg113, NULL, // VPTESTNMD REG:w=$Kr PREG:r:Z=$Kk VREG:r:u32=$ZMMn VREG:r:u32=$ZMMm
  /* 4913 */ &reg272, &preg0, &vreg150, &mem48, &bcst0, NULL, // VPTESTNMD REG:w=$Kr PREG:r:Z=$Kk VREG:r:u32=$ZMMn MEM:r:u32=$mem512 BCST=$BCST
  /* 4919 */ &reg272, &preg0, &vreg151, &vreg32, NULL, // VPTESTNMW REG:w=$Kr PREG:r:Z=$Kk VREG:r:u16=$XMMn VREG:r:u16=$XMMm
  /* 4924 */ &reg272, &preg0, &vreg151, &mem125, NULL, // VPTESTNMW REG:w=$Kr PREG:r:Z=$Kk VREG:r:u16=$XMMn MEM:r:u16=$mem128
  /* 4929 */ &reg272, &preg0, &vreg152, &vreg127, NULL, // VPTESTNMW REG:w=$Kr PREG:r:Z=$Kk VREG:r:u16=$YMMn VREG:r:u16=$YMMm
  /* 4934 */ &reg272, &preg0, &vreg152, &mem163, NULL, // VPTESTNMW REG:w=$Kr PREG:r:Z=$Kk VREG:r:u16=$YMMn MEM:r:u16=$mem256
  /* 4939 */ &reg272, &preg0, &vreg153, &vreg129, NULL, // VPTESTNMW REG:w=$Kr PREG:r:Z=$Kk VREG:r:u16=$ZMMn VREG:r:u16=$ZMMm
  /* 4944 */ &reg272, &preg0, &vreg153, &mem164, NULL, // VPTESTNMW REG:w=$Kr PREG:r:Z=$Kk VREG:r:u16=$ZMMn MEM:r:u16=$mem512
  /* 4949 */ &reg272, &preg0, &vreg157, &vreg137, NULL, // VPCMPGTQ REG:w=$Kr        PREG:r:Z=$Kk     VREG:r:s64=$XMMn  VREG:r:s64=$XMMm
  /* 4954 */ &reg272, &preg0, &vreg157, &mem167, &bcst0, NULL, // VPCMPGTQ REG:w=$Kr        PREG:r:Z=$Kk     VREG:r:s64=$XMMn  MEM:r:s64=$mem128 BCST=$BCST
  /* 4960 */ &reg272, &preg0, &vreg158, &vreg139, NULL, // VPCMPGTQ REG:w=$Kr        PREG:r:Z=$Kk     VREG:r:s64=$YMMn  VREG:r:s64=$YMMm
  /* 4965 */ &reg272, &preg0, &vreg158, &mem168, &bcst0, NULL, // VPCMPGTQ REG:w=$Kr        PREG:r:Z=$Kk     VREG:r:s64=$YMMn  MEM:r:s64=$mem256 BCST=$BCST
  /* 4971 */ &reg272, &preg0, &vreg162, &vreg141, NULL, // VPCMPGTQ REG:w=$Kr        PREG:r:Z=$Kk     VREG:r:s64=$ZMMn  VREG:r:s64=$ZMMm
  /* 4976 */ &reg272, &preg0, &vreg162, &mem97, &bcst0, NULL, // VPCMPGTQ REG:w=$Kr        PREG:r:Z=$Kk     VREG:r:s64=$ZMMn  MEM:r:s64=$mem512 BCST=$BCST
  /* 4982 */ &vreg2, &vreg157, &vreg137, NULL, // VPCMPGTQ VREG:w:s32=$XMMr VREG:r:s64=$XMMn VREG:r:s64=$XMMm
  /* 4986 */ &vreg2, &vreg157, &mem167, NULL, // VPCMPGTQ VREG:w:s32=$XMMr VREG:r:s64=$XMMn MEM:r:s64=$mem128
  /* 4990 */ &reg272, &preg0, &vreg62, &vreg1, NULL, // VPCMPGTD REG:w=$Kr        PREG:r:Z=$Kk     VREG:r:s32=$XMMn  VREG:r:s32=$XMMm
  /* 4995 */ &reg272, &preg0, &vreg62, &mem6, &bcst0, NULL, // VPCMPGTD REG:w=$Kr        PREG:r:Z=$Kk     VREG:r:s32=$XMMn  MEM:r:s32=$mem128 BCST=$BCST
  /* 5001 */ &reg272, &preg0, &vreg71, &vreg72, NULL, // VPCMPGTD REG:w=$Kr        PREG:r:Z=$Kk     VREG:r:s32=$YMMn  VREG:r:s32=$YMMm
  /* 5006 */ &reg272, &preg0, &vreg71, &mem139, &bcst0, NULL, // VPCMPGTD REG:w=$Kr        PREG:r:Z=$Kk     VREG:r:s32=$YMMn  MEM:r:s32=$mem256 BCST=$BCST
  /* 5012 */ &reg272, &preg0, &vreg146, &vreg77, NULL, // VPTESTMD REG:w=$Kr PREG:r:Z=$Kk VREG:r:s32=$ZMMn VREG:r:s32=$ZMMm
  /* 5017 */ &reg272, &preg0, &vreg146, &mem140, &bcst0, NULL, // VPCMPGTD REG:w=$Kr        PREG:r:Z=$Kk     VREG:r:s32=$ZMMn  MEM:r:s32=$mem512 BCST=$BCST
  /* 5023 */ &reg253, &vreg116, &imm6, NULL, // VPEXTRW REG:w:s32=$GPR32m VREG:r:u16=$XMMr IMM:u8=$index
  /* 5027 */ &mem47, &vreg116, &imm6, NULL, // VPEXTRW MEM:w:s16=$mem16  VREG:r:u16=$XMMr IMM:u8=$index
  /* 5031 */ &reg287, &vreg116, &imm6, NULL, // VPEXTRW REG:w:u16=$GPR32m VREG:r:u16=$XMMr IMM:u8=$index
  /* 5035 */ &mem144, &vreg116, &imm6, NULL, // VPEXTRW MEM:w:u16=$mem16  VREG:r:u16=$XMMr IMM:u8=$index
  /* 5039 */ &reg17, &vreg32, &imm6, NULL, // VPEXTRW REG:w:s32=$GPR32r VREG:r:u16=$XMMm IMM:u8=$index
  /* 5043 */ &reg288, &vreg32, &imm6, NULL, // VPEXTRW REG:w:u16=$GPR32r VREG:r:u16=$XMMm IMM:u8=$index
  /* 5047 */ &reg253, &vreg88, &imm6, NULL, // VPEXTRB REG:w:s32=$GPR32m VREG:r:u8=$XMMr  IMM:u8=$index
  /* 5051 */ &mem45, &vreg88, &imm6, NULL, // VPEXTRB MEM:w:u8=$mem8    VREG:r:u8=$XMMr  IMM:u8=$index
  /* 5055 */ &reg289, &vreg88, &imm6, NULL, // VPEXTRB REG:w:u8=$GPR32m  VREG:r:u8=$XMMr  IMM:u8=$index
  /* 5059 */ &reg253, &vreg99, &imm6, NULL, // VPEXTRD REG:w:s32=$GPR32m VREG:r:u32=$XMMr IMM:u8=$index
  /* 5063 */ &mem77, &vreg99, &imm6, NULL, // VPEXTRD MEM:w:s32=$mem32  VREG:r:u32=$XMMr IMM:u8=$index
  /* 5067 */ &reg263, &vreg101, &imm6, NULL, // VPEXTRQ REG:w:s64=$GPR64m VREG:r:u64=$XMMr IMM:u8=$index
  /* 5071 */ &mem78, &vreg101, &imm6, NULL, // VPEXTRQ MEM:w:s64=$mem64  VREG:r:u64=$XMMr IMM:u8=$index
  /* 5075 */ &reg203, &vreg99, &imm6, NULL, // VPEXTRD REG:w:u32=$GPR32m VREG:r:u32=$XMMr IMM:u8=$index
  /* 5079 */ &mem51, &vreg99, &imm6, NULL, // VPEXTRD MEM:w:u32=$mem32  VREG:r:u32=$XMMr IMM:u8=$index
  /* 5083 */ &reg202, &vreg101, &imm6, NULL, // VPEXTRQ REG:w:u64=$GPR64m VREG:r:u64=$XMMr IMM:u8=$index
  /* 5087 */ &mem52, &vreg101, &imm6, NULL, // VPEXTRQ MEM:w:u64=$mem64  VREG:r:u64=$XMMr IMM:u8=$index
  /* 5091 */ &vreg40, &vreg32, NULL, // VPHMINPOSUW VREG:w:u16=$XMMr VREG:r:u16=$XMMm
  /* 5094 */ &vreg40, &mem125, NULL, // VPHMINPOSUW VREG:w:u16=$XMMr MEM:r:u16=$mem128
  /* 5097 */ &vreg40, &vreg151, &reg290, &imm6, NULL, // VPINSRW VREG:w:u16=$XMMr VREG:r:u16=$XMMn REG:r:u16=$GPR32m IMM:u8=$index
  /* 5102 */ &vreg40, &vreg151, &mem107, &imm6, NULL, // VPINSRW VREG:w:u16=$XMMr VREG:r:u16=$XMMn MEM:r:u16=$mem16  IMM:u8=$index
  /* 5107 */ &vreg79, &vreg80, &reg197, &imm6, NULL, // VPINSRB VREG:w:u8=$XMMr  VREG:r:u8=$XMMn  REG:r:u8=$GPR32m  IMM:u8=$index
  /* 5112 */ &vreg79, &vreg80, &mem2, &imm6, NULL, // VPINSRB VREG:w:u8=$XMMr  VREG:r:u8=$XMMn  MEM:r:u8=$mem8    IMM:u8=$index
  /* 5117 */ &vreg39, &vreg130, &reg206, &imm6, NULL, // VPINSRD VREG:w:u32=$XMMr VREG:r:u32=$XMMn REG:r:u32=$GPR32m IMM:u8=$index
  /* 5122 */ &vreg39, &vreg130, &mem110, &imm6, NULL, // VPINSRD VREG:w:u32=$XMMr VREG:r:u32=$XMMn MEM:r:u32=$mem32  IMM:u8=$index
  /* 5127 */ &vreg26, &vreg68, &reg208, &imm6, NULL, // VPINSRQ VREG:w:u64=$XMMr VREG:r:u64=$XMMn REG:r:u64=$GPR64m IMM:u8=$index
  /* 5132 */ &vreg26, &vreg68, &mem124, &imm6, NULL, // VPINSRQ VREG:w:u64=$XMMr VREG:r:u64=$XMMn MEM:r:u64=$mem64  IMM:u8=$index
  /* 5137 */ &vreg38, &vreg80, &vreg35, NULL, // VPMADDUBSW VREG:w:s16=$XMMr VREG:r:u8=$XMMn VREG:r:s8=$XMMm
  /* 5141 */ &vreg38, &vreg80, &mem126, NULL, // VPMADDUBSW VREG:w:s16=$XMMr VREG:r:u8=$XMMn MEM:r:s8=$mem128
  /* 5145 */ &vreg143, &vreg82, &vreg133, NULL, // VPMADDUBSW VREG:w:s16=$YMMr VREG:r:u8=$YMMn VREG:r:s8=$YMMm
  /* 5149 */ &vreg143, &vreg82, &mem165, NULL, // VPMADDUBSW VREG:w:s16=$YMMr VREG:r:u8=$YMMn MEM:r:s8=$mem256
  /* 5153 */ &vreg2, &vreg147, &vreg30, NULL, // VPMADDWD VREG:w:s32=$XMMr VREG:r:s16=$XMMn VREG:r:s16=$XMMm
  /* 5157 */ &vreg2, &vreg147, &mem123, NULL, // VPMADDWD VREG:w:s32=$XMMr VREG:r:s16=$XMMn MEM:r:s16=$mem128
  /* 5161 */ &vreg2, &preg0, &vreg147, &vreg30, NULL, // VPMADDWD VREG:w:s32=$XMMr PREG:r:Z=$Kk     VREG:r:s16=$XMMn  VREG:r:s16=$XMMm
  /* 5166 */ &vreg2, &preg0, &vreg147, &mem123, NULL, // VPMADDWD VREG:w:s32=$XMMr PREG:r:Z=$Kk     VREG:r:s16=$XMMn  MEM:r:s16=$mem128
  /* 5171 */ &vreg70, &vreg148, &vreg142, NULL, // VPMADDWD VREG:w:s32=$YMMr VREG:r:s16=$YMMn VREG:r:s16=$YMMm
  /* 5175 */ &vreg70, &vreg148, &mem169, NULL, // VPMADDWD VREG:w:s32=$YMMr VREG:r:s16=$YMMn MEM:r:s16=$mem256
  /* 5179 */ &vreg70, &preg0, &vreg148, &vreg142, NULL, // VPMADDWD VREG:w:s32=$YMMr PREG:r:Z=$Kk     VREG:r:s16=$YMMn  VREG:r:s16=$YMMm
  /* 5184 */ &vreg70, &preg0, &vreg148, &mem169, NULL, // VPMADDWD VREG:w:s32=$YMMr PREG:r:Z=$Kk     VREG:r:s16=$YMMn  MEM:r:s16=$mem256
  /* 5189 */ &vreg78, &preg0, &vreg149, &vreg145, NULL, // VPMADDWD VREG:w:s32=$ZMMr PREG:r:Z=$Kk     VREG:r:s16=$ZMMn  VREG:r:s16=$ZMMm
  /* 5194 */ &vreg78, &preg0, &vreg149, &mem170, NULL, // VPMADDWD VREG:w:s32=$ZMMr PREG:r:Z=$Kk     VREG:r:s16=$ZMMn  MEM:r:s16=$mem512
  /* 5199 */ &vreg2, &preg0, &vreg62, &vreg1, NULL, // VPMINSD VREG:w:s32=$XMMr PREG:r:Z=$Kk     VREG:r:s32=$XMMn  VREG:r:s32=$XMMm
  /* 5204 */ &vreg2, &preg0, &vreg62, &mem6, &bcst0, NULL, // VPMINSD VREG:w:s32=$XMMr PREG:r:Z=$Kk     VREG:r:s32=$XMMn  MEM:r:s32=$mem128 BCST=$BCST
  /* 5210 */ &vreg37, &preg0, &vreg157, &vreg137, NULL, // VPMULDQ VREG:w:s64=$XMMr PREG:r:Z=$Kk     VREG:r:s64=$XMMn  VREG:r:s64=$XMMm
  /* 5215 */ &vreg37, &preg0, &vreg157, &mem167, &bcst0, NULL, // VPMULDQ VREG:w:s64=$XMMr PREG:r:Z=$Kk     VREG:r:s64=$XMMn  MEM:r:s64=$mem128 BCST=$BCST
  /* 5221 */ &vreg70, &preg0, &vreg71, &vreg72, NULL, // VPMINSD VREG:w:s32=$YMMr PREG:r:Z=$Kk     VREG:r:s32=$YMMn  VREG:r:s32=$YMMm
  /* 5226 */ &vreg70, &preg0, &vreg71, &mem139, &bcst0, NULL, // VPMINSD VREG:w:s32=$YMMr PREG:r:Z=$Kk     VREG:r:s32=$YMMn  MEM:r:s32=$mem256 BCST=$BCST
  /* 5232 */ &vreg138, &preg0, &vreg158, &vreg139, NULL, // VPMULDQ VREG:w:s64=$YMMr PREG:r:Z=$Kk     VREG:r:s64=$YMMn  VREG:r:s64=$YMMm
  /* 5237 */ &vreg138, &preg0, &vreg158, &mem168, &bcst0, NULL, // VPMULDQ VREG:w:s64=$YMMr PREG:r:Z=$Kk     VREG:r:s64=$YMMn  MEM:r:s64=$mem256 BCST=$BCST
  /* 5243 */ &vreg78, &preg0, &vreg146, &vreg77, NULL, // VPMINSD VREG:w:s32=$ZMMr PREG:r:Z=$Kk     VREG:r:s32=$ZMMn  VREG:r:s32=$ZMMm
  /* 5248 */ &vreg78, &preg0, &vreg146, &mem140, &bcst0, NULL, // VPMINSD VREG:w:s32=$ZMMr PREG:r:Z=$Kk     VREG:r:s32=$ZMMn  MEM:r:s32=$mem512 BCST=$BCST
  /* 5254 */ &vreg140, &preg0, &vreg162, &vreg141, NULL, // VPMULDQ VREG:w:s64=$ZMMr PREG:r:Z=$Kk     VREG:r:s64=$ZMMn  VREG:r:s64=$ZMMm
  /* 5259 */ &vreg140, &preg0, &vreg162, &mem97, &bcst0, NULL, // VPMULDQ VREG:w:s64=$ZMMr PREG:r:Z=$Kk     VREG:r:s64=$ZMMn  MEM:r:s64=$mem512 BCST=$BCST
  /* 5265 */ &reg278, &vreg35, NULL, // VPMOVMSKB REG:w:u32=$GPR32r VREG:r:s8=$XMMm
  /* 5268 */ &reg278, &vreg133, NULL, // VPMOVMSKB REG:w:u32=$GPR32r VREG:r:s8=$YMMm
  /* 5271 */ &vreg2, &preg0, &vreg35, NULL, // VPMOVZXBD VREG:w:s32=$XMMr PREG:r:Z=$Kk      VREG:r:s8=$XMMm
  /* 5275 */ &vreg2, &preg0, &mem127, NULL, // VPMOVZXBD VREG:w:s32=$XMMr PREG:r:Z=$Kk      MEM:r:s8=$mem32
  /* 5279 */ &vreg70, &vreg35, NULL, // VPMOVSXBD VREG:w:s32=$YMMr VREG:r:s8=$XMMm
  /* 5282 */ &vreg70, &mem106, NULL, // VPMOVSXBD VREG:w:s32=$YMMr MEM:r:s8=$mem64
  /* 5285 */ &vreg70, &preg0, &vreg35, NULL, // VPMOVZXBD VREG:w:s32=$YMMr PREG:r:Z=$Kk      VREG:r:s8=$XMMm
  /* 5289 */ &vreg70, &preg0, &mem106, NULL, // VPMOVZXBD VREG:w:s32=$YMMr PREG:r:Z=$Kk      MEM:r:s8=$mem64
  /* 5293 */ &vreg78, &preg0, &vreg35, NULL, // VPMOVZXBD VREG:w:s32=$ZMMr PREG:r:Z=$Kk      VREG:r:s8=$XMMm
  /* 5297 */ &vreg78, &preg0, &mem126, NULL, // VPMOVZXBD VREG:w:s32=$ZMMr PREG:r:Z=$Kk      MEM:r:s8=$mem128
  /* 5301 */ &vreg37, &preg0, &vreg35, NULL, // VPMOVZXBQ VREG:w:s64=$XMMr PREG:r:Z=$Kk      VREG:r:s8=$XMMm
  /* 5305 */ &vreg37, &preg0, &mem128, NULL, // VPMOVZXBQ VREG:w:s64=$XMMr PREG:r:Z=$Kk      MEM:r:s8=$mem16
  /* 5309 */ &vreg138, &vreg35, NULL, // VPMOVSXBQ VREG:w:s64=$YMMr VREG:r:s8=$XMMm
  /* 5312 */ &vreg138, &mem127, NULL, // VPMOVSXBQ VREG:w:s64=$YMMr MEM:r:s8=$mem32
  /* 5315 */ &vreg138, &preg0, &vreg35, NULL, // VPMOVZXBQ VREG:w:s64=$YMMr PREG:r:Z=$Kk      VREG:r:s8=$XMMm
  /* 5319 */ &vreg138, &preg0, &mem127, NULL, // VPMOVZXBQ VREG:w:s64=$YMMr PREG:r:Z=$Kk      MEM:r:s8=$mem32
  /* 5323 */ &vreg140, &preg0, &vreg35, NULL, // VPMOVZXBQ VREG:w:s64=$ZMMr PREG:r:Z=$Kk      VREG:r:s8=$XMMm
  /* 5327 */ &vreg140, &preg0, &mem106, NULL, // VPMOVZXBQ VREG:w:s64=$ZMMr PREG:r:Z=$Kk      MEM:r:s8=$mem64
  /* 5331 */ &vreg38, &preg0, &vreg35, NULL, // VPMOVZXBW VREG:w:s16=$XMMr PREG:r:Z=$Kk      VREG:r:s8=$XMMm
  /* 5335 */ &vreg38, &preg0, &mem106, NULL, // VPMOVZXBW VREG:w:s16=$XMMr PREG:r:Z=$Kk      MEM:r:s8=$mem64
  /* 5339 */ &vreg143, &vreg35, NULL, // VPMOVSXBW VREG:w:s16=$YMMr VREG:r:s8=$XMMm
  /* 5342 */ &vreg143, &mem126, NULL, // VPMOVSXBW VREG:w:s16=$YMMr MEM:r:s8=$mem128
  /* 5345 */ &vreg143, &preg0, &vreg35, NULL, // VPMOVZXBW VREG:w:s16=$YMMr PREG:r:Z=$Kk      VREG:r:s8=$XMMm
  /* 5349 */ &vreg143, &preg0, &mem126, NULL, // VPMOVZXBW VREG:w:s16=$YMMr PREG:r:Z=$Kk      MEM:r:s8=$mem128
  /* 5353 */ &vreg144, &preg0, &vreg133, NULL, // VPMOVZXBW VREG:w:s16=$ZMMr PREG:r:Z=$Kk      VREG:r:s8=$YMMm
  /* 5357 */ &vreg144, &preg0, &mem165, NULL, // VPMOVZXBW VREG:w:s16=$ZMMr PREG:r:Z=$Kk      MEM:r:s8=$mem256
  /* 5361 */ &vreg37, &preg0, &vreg1, NULL, // VPMOVZXDQ VREG:w:s64=$XMMr PREG:r:Z=$Kk      VREG:r:s32=$XMMm
  /* 5365 */ &vreg37, &preg0, &mem9, NULL, // VPMOVZXDQ VREG:w:s64=$XMMr PREG:r:Z=$Kk      MEM:r:s32=$mem64
  /* 5369 */ &vreg138, &vreg1, NULL, // VPMOVSXDQ VREG:w:s64=$YMMr VREG:r:s32=$XMMm
  /* 5372 */ &vreg138, &mem6, NULL, // VPMOVSXDQ VREG:w:s64=$YMMr MEM:r:s32=$mem128
  /* 5375 */ &vreg138, &preg0, &vreg1, NULL, // VPMOVZXDQ VREG:w:s64=$YMMr PREG:r:Z=$Kk      VREG:r:s32=$XMMm
  /* 5379 */ &vreg138, &preg0, &mem6, NULL, // VPMOVZXDQ VREG:w:s64=$YMMr PREG:r:Z=$Kk      MEM:r:s32=$mem128
  /* 5383 */ &vreg140, &preg0, &vreg72, NULL, // VPMOVZXDQ VREG:w:s64=$ZMMr PREG:r:Z=$Kk      VREG:r:s32=$YMMm
  /* 5387 */ &vreg140, &preg0, &mem139, NULL, // VPMOVZXDQ VREG:w:s64=$ZMMr PREG:r:Z=$Kk      MEM:r:s32=$mem256
  /* 5391 */ &vreg2, &preg0, &vreg30, NULL, // VPMOVZXWD VREG:w:s32=$XMMr PREG:r:Z=$Kk      VREG:r:s16=$XMMm
  /* 5395 */ &vreg2, &preg0, &mem105, NULL, // VPMOVZXWD VREG:w:s32=$XMMr PREG:r:Z=$Kk      MEM:r:s16=$mem64
  /* 5399 */ &vreg70, &vreg30, NULL, // VPMOVSXWD VREG:w:s32=$YMMr VREG:r:s16=$XMMm
  /* 5402 */ &vreg70, &mem123, NULL, // VPMOVSXWD VREG:w:s32=$YMMr MEM:r:s16=$mem128
  /* 5405 */ &vreg70, &preg0, &vreg30, NULL, // VPMOVZXWD VREG:w:s32=$YMMr PREG:r:Z=$Kk      VREG:r:s16=$XMMm
  /* 5409 */ &vreg70, &preg0, &mem123, NULL, // VPMOVZXWD VREG:w:s32=$YMMr PREG:r:Z=$Kk      MEM:r:s16=$mem128
  /* 5413 */ &vreg78, &preg0, &vreg142, NULL, // VPMOVZXWD VREG:w:s32=$ZMMr PREG:r:Z=$Kk      VREG:r:s16=$YMMm
  /* 5417 */ &vreg78, &preg0, &mem169, NULL, // VPMOVZXWD VREG:w:s32=$ZMMr PREG:r:Z=$Kk      MEM:r:s16=$mem256
  /* 5421 */ &vreg37, &preg0, &vreg30, NULL, // VPMOVZXWQ VREG:w:s64=$XMMr PREG:r:Z=$Kk      VREG:r:s16=$XMMm
  /* 5425 */ &vreg37, &preg0, &mem8, NULL, // VPMOVZXWQ VREG:w:s64=$XMMr PREG:r:Z=$Kk      MEM:r:s16=$mem32
  /* 5429 */ &vreg138, &vreg30, NULL, // VPMOVSXWQ VREG:w:s64=$YMMr VREG:r:s16=$XMMm
  /* 5432 */ &vreg138, &mem105, NULL, // VPMOVSXWQ VREG:w:s64=$YMMr MEM:r:s16=$mem64
  /* 5435 */ &vreg138, &preg0, &vreg30, NULL, // VPMOVZXWQ VREG:w:s64=$YMMr PREG:r:Z=$Kk      VREG:r:s16=$XMMm
  /* 5439 */ &vreg138, &preg0, &mem105, NULL, // VPMOVZXWQ VREG:w:s64=$YMMr PREG:r:Z=$Kk      MEM:r:s16=$mem64
  /* 5443 */ &vreg140, &preg0, &vreg30, NULL, // VPMOVZXWQ VREG:w:s64=$ZMMr PREG:r:Z=$Kk      VREG:r:s16=$XMMm
  /* 5447 */ &vreg140, &preg0, &mem123, NULL, // VPMOVZXWQ VREG:w:s64=$ZMMr PREG:r:Z=$Kk      MEM:r:s16=$mem128
  /* 5451 */ &vreg110, &vreg28, NULL, // VPMOVZXBD VREG:w:u32=$YMMr VREG:r:u8=$XMMm
  /* 5454 */ &vreg110, &mem130, NULL, // VPMOVZXBD VREG:w:u32=$YMMr MEM:r:u8=$mem64
  /* 5457 */ &vreg69, &vreg28, NULL, // VPMOVZXBQ VREG:w:u64=$YMMr VREG:r:u8=$XMMm
  /* 5460 */ &vreg69, &mem109, NULL, // VPMOVZXBQ VREG:w:u64=$YMMr MEM:r:u8=$mem32
  /* 5463 */ &vreg126, &vreg28, NULL, // VPMOVZXBW VREG:w:u16=$YMMr VREG:r:u8=$XMMm
  /* 5466 */ &vreg126, &mem122, NULL, // VPMOVZXBW VREG:w:u16=$YMMr MEM:r:u8=$mem128
  /* 5469 */ &vreg69, &vreg41, NULL, // VPMOVZXDQ VREG:w:u64=$YMMr VREG:r:u32=$XMMm
  /* 5472 */ &vreg69, &mem131, NULL, // VPMOVZXDQ VREG:w:u64=$YMMr MEM:r:u32=$mem128
  /* 5475 */ &vreg110, &vreg32, NULL, // VPMOVZXWD VREG:w:u32=$YMMr VREG:r:u16=$XMMm
  /* 5478 */ &vreg110, &mem125, NULL, // VPMOVZXWD VREG:w:u32=$YMMr MEM:r:u16=$mem128
  /* 5481 */ &vreg69, &vreg32, NULL, // VPMOVZXWQ VREG:w:u64=$YMMr VREG:r:u16=$XMMm
  /* 5484 */ &vreg69, &mem108, NULL, // VPMOVZXWQ VREG:w:u64=$YMMr MEM:r:u16=$mem64
  /* 5487 */ &vreg37, &vreg62, &vreg1, NULL, // VPMULDQ VREG:w:s64=$XMMr VREG:r:s32=$XMMn VREG:r:s32=$XMMm
  /* 5491 */ &vreg37, &vreg62, &mem6, NULL, // VPMULDQ VREG:w:s64=$XMMr VREG:r:s32=$XMMn MEM:r:s32=$mem128
  /* 5495 */ &vreg138, &vreg71, &vreg72, NULL, // VPMULDQ VREG:w:s64=$YMMr VREG:r:s32=$YMMn VREG:r:s32=$YMMm
  /* 5499 */ &vreg138, &vreg71, &mem139, NULL, // VPMULDQ VREG:w:s64=$YMMr VREG:r:s32=$YMMn MEM:r:s32=$mem256
  /* 5503 */ &vreg26, &vreg130, &vreg41, NULL, // VPMULUDQ VREG:w:u64=$XMMr VREG:r:u32=$XMMn VREG:r:u32=$XMMm
  /* 5507 */ &vreg26, &vreg130, &mem131, NULL, // VPMULUDQ VREG:w:u64=$XMMr VREG:r:u32=$XMMn MEM:r:u32=$mem128
  /* 5511 */ &vreg69, &vreg131, &vreg111, NULL, // VPMULUDQ VREG:w:u64=$YMMr VREG:r:u32=$YMMn VREG:r:u32=$YMMm
  /* 5515 */ &vreg69, &vreg131, &mem156, NULL, // VPMULUDQ VREG:w:u64=$YMMr VREG:r:u32=$YMMn MEM:r:u32=$mem256
  /* 5519 */ &vreg40, &vreg80, &vreg28, NULL, // VPSADBW VREG:w:u16=$XMMr VREG:r:u8=$XMMn VREG:r:u8=$XMMm
  /* 5523 */ &vreg40, &vreg80, &mem122, NULL, // VPSADBW VREG:w:u16=$XMMr VREG:r:u8=$XMMn MEM:r:u8=$mem128
  /* 5527 */ &vreg126, &vreg82, &vreg86, NULL, // VPSADBW VREG:w:u16=$YMMr VREG:r:u8=$YMMn VREG:r:u8=$YMMm
  /* 5531 */ &vreg126, &vreg82, &mem142, NULL, // VPSADBW VREG:w:u16=$YMMr VREG:r:u8=$YMMn MEM:r:u8=$mem256
  /* 5535 */ &vreg128, &vreg84, &vreg87, NULL, // VPSADBW VREG:w:u16=$ZMMr VREG:r:u8=$ZMMn VREG:r:u8=$ZMMm
  /* 5539 */ &vreg128, &vreg84, &mem143, NULL, // VPSADBW VREG:w:u16=$ZMMr VREG:r:u8=$ZMMn MEM:r:u8=$mem512
  /* 5543 */ &vreg2, &vreg1, &order0, NULL, // VPSHUFLW VREG:w:s32=$XMMr VREG:r:s32=$XMMm  ORDER:r:u8=$order
  /* 5547 */ &vreg2, &mem6, &order0, NULL, // VPSHUFLW VREG:w:s32=$XMMr MEM:r:s32=$mem128 ORDER:r:u8=$order
  /* 5551 */ &vreg39, &preg0, &vreg41, &order0, NULL, // VPSHUFD VREG:w:u32=$XMMr PREG:r:Z=$Kk      VREG:r:u32=$XMMm             ORDER:r:u8=$order
  /* 5556 */ &vreg39, &preg0, &mem131, &bcst0, &order0, NULL, // VPSHUFD VREG:w:u32=$XMMr PREG:r:Z=$Kk      MEM:r:u32=$mem128 BCST=$BCST ORDER:r:u8=$order
  /* 5562 */ &vreg110, &vreg111, &order0, NULL, // VPSHUFD VREG:w:u32=$YMMr VREG:r:u32=$YMMm  ORDER:r:u8=$order
  /* 5566 */ &vreg110, &mem156, &order0, NULL, // VPSHUFD VREG:w:u32=$YMMr MEM:r:u32=$mem256 ORDER:r:u8=$order
  /* 5570 */ &vreg110, &preg0, &vreg111, &order0, NULL, // VPSHUFD VREG:w:u32=$YMMr PREG:r:Z=$Kk      VREG:r:u32=$YMMm             ORDER:r:u8=$order
  /* 5575 */ &vreg110, &preg0, &mem156, &bcst0, &order0, NULL, // VPSHUFD VREG:w:u32=$YMMr PREG:r:Z=$Kk      MEM:r:u32=$mem256 BCST=$BCST ORDER:r:u8=$order
  /* 5581 */ &vreg112, &preg0, &vreg113, &order0, NULL, // VPSHUFD VREG:w:u32=$ZMMr PREG:r:Z=$Kk      VREG:r:u32=$ZMMm             ORDER:r:u8=$order
  /* 5586 */ &vreg112, &preg0, &mem48, &bcst0, &order0, NULL, // VPSHUFD VREG:w:u32=$ZMMr PREG:r:Z=$Kk      MEM:r:u32=$mem512 BCST=$BCST ORDER:r:u8=$order
  /* 5592 */ &vreg40, &preg0, &vreg32, &order0, NULL, // VPSHUFLW VREG:w:u16=$XMMr PREG:r:Z=$Kk      VREG:r:u16=$XMMm  ORDER:r:u8=$order
  /* 5597 */ &vreg40, &preg0, &mem125, &order0, NULL, // VPSHUFLW VREG:w:u16=$XMMr PREG:r:Z=$Kk      MEM:r:u16=$mem128 ORDER:r:u8=$order
  /* 5602 */ &vreg126, &vreg127, &order0, NULL, // VPSHUFLW VREG:w:u16=$YMMr VREG:r:u16=$YMMm  ORDER:r:u8=$order
  /* 5606 */ &vreg126, &mem163, &order0, NULL, // VPSHUFLW VREG:w:u16=$YMMr MEM:r:u16=$mem256 ORDER:r:u8=$order
  /* 5610 */ &vreg126, &preg0, &vreg127, &order0, NULL, // VPSHUFLW VREG:w:u16=$YMMr PREG:r:Z=$Kk      VREG:r:u16=$YMMm  ORDER:r:u8=$order
  /* 5615 */ &vreg126, &preg0, &mem163, &order0, NULL, // VPSHUFLW VREG:w:u16=$YMMr PREG:r:Z=$Kk      MEM:r:u16=$mem256 ORDER:r:u8=$order
  /* 5620 */ &vreg128, &preg0, &vreg129, &order0, NULL, // VPSHUFLW VREG:w:u16=$ZMMr PREG:r:Z=$Kk      VREG:r:u16=$ZMMm  ORDER:r:u8=$order
  /* 5625 */ &vreg128, &preg0, &mem164, &order0, NULL, // VPSHUFLW VREG:w:u16=$ZMMr PREG:r:Z=$Kk      MEM:r:u16=$mem512 ORDER:r:u8=$order
  /* 5630 */ &reg291, &reg271, &shift1, NULL, // VPSLLDQ REG:w:u128=$XMMn  REG:r:u128=$XMMm  SHIFT:r:u8=$shl
  /* 5634 */ &vreg163, &vreg28, &shift1, NULL, // VPSLLDQ VREG:w:u8=$XMMn   VREG:r:u8=$XMMm   SHIFT:r:u8=$shl
  /* 5638 */ &vreg163, &mem122, &shift1, NULL, // VPSLLDQ VREG:w:u8=$XMMn   MEM:r:u8=$mem128  SHIFT:r:u8=$shl
  /* 5642 */ &vreg164, &vreg64, &shift1, NULL, // VPSLLDQ VREG:w:u128=$YMMn VREG:r:u128=$YMMm SHIFT:r:u8=$shl
  /* 5646 */ &vreg165, &vreg86, &shift1, NULL, // VPSLLDQ VREG:w:u8=$YMMn   VREG:r:u8=$YMMm   SHIFT:r:u8=$shl
  /* 5650 */ &vreg165, &mem142, &shift1, NULL, // VPSLLDQ VREG:w:u8=$YMMn   MEM:r:u8=$mem256  SHIFT:r:u8=$shl
  /* 5654 */ &vreg166, &vreg87, &shift1, NULL, // VPSLLDQ VREG:w:u8=$ZMMn   VREG:r:u8=$ZMMm   SHIFT:r:u8=$shl
  /* 5658 */ &vreg166, &mem143, &shift1, NULL, // VPSLLDQ VREG:w:u8=$ZMMn   MEM:r:u8=$mem512  SHIFT:r:u8=$shl
  /* 5662 */ &vreg167, &vreg41, &shift1, NULL, // VPSLLD VREG:w:u32=$XMMn VREG:r:u32=$XMMm SHIFT:r:u8=$shl
  /* 5666 */ &vreg167, &preg0, &vreg41, &shift1, NULL, // VPSLLD VREG:w:u32=$XMMn PREG:r:Z=$Kk     VREG:r:u32=$XMMm             SHIFT:r:u8=$shl
  /* 5671 */ &vreg167, &preg0, &mem131, &bcst0, &shift1, NULL, // VPSLLD VREG:w:u32=$XMMn PREG:r:Z=$Kk     MEM:r:u32=$mem128 BCST=$BCST SHIFT:r:u8=$shl
  /* 5677 */ &vreg168, &vreg111, &shift1, NULL, // VPSLLD VREG:w:u32=$YMMn VREG:r:u32=$YMMm SHIFT:r:u8=$shl
  /* 5681 */ &vreg168, &preg0, &vreg111, &shift1, NULL, // VPSLLD VREG:w:u32=$YMMn PREG:r:Z=$Kk     VREG:r:u32=$YMMm             SHIFT:r:u8=$shl
  /* 5686 */ &vreg168, &preg0, &mem156, &bcst0, &shift1, NULL, // VPSLLD VREG:w:u32=$YMMn PREG:r:Z=$Kk     MEM:r:u32=$mem256 BCST=$BCST SHIFT:r:u8=$shl
  /* 5692 */ &vreg169, &preg0, &vreg113, &shift1, NULL, // VPSLLD VREG:w:u32=$ZMMn PREG:r:Z=$Kk     VREG:r:u32=$ZMMm             SHIFT:r:u8=$shl
  /* 5697 */ &vreg169, &preg0, &mem48, &bcst0, &shift1, NULL, // VPSLLD VREG:w:u32=$ZMMn PREG:r:Z=$Kk     MEM:r:u32=$mem512 BCST=$BCST SHIFT:r:u8=$shl
  /* 5703 */ &vreg39, &vreg130, &vreg45, NULL, // VPSRLD VREG:w:u32=$XMMr VREG:r:u32=$XMMn VREG:r:u64=$XMMm
  /* 5707 */ &vreg39, &vreg130, &mem95, NULL, // VPSRLD VREG:w:u32=$XMMr VREG:r:u32=$XMMn MEM:r:u64=$mem128
  /* 5711 */ &vreg39, &preg0, &vreg130, &mem131, NULL, // VPSRLD VREG:w:u32=$XMMr PREG:r:Z=$Kk     VREG:r:u32=$XMMn             MEM:r:u32=$mem128
  /* 5716 */ &vreg110, &preg0, &vreg131, &vreg41, NULL, // VPSRLD VREG:w:u32=$YMMr PREG:r:Z=$Kk     VREG:r:u32=$YMMn             VREG:r:u32=$XMMm
  /* 5721 */ &vreg110, &preg0, &vreg131, &mem131, NULL, // VPSRLD VREG:w:u32=$YMMr PREG:r:Z=$Kk     VREG:r:u32=$YMMn             MEM:r:u32=$mem128
  /* 5726 */ &vreg110, &vreg131, &reg257, NULL, // VPSRLD VREG:w:u32=$YMMr VREG:r:u32=$YMMn REG:r:u64=$XMMm
  /* 5730 */ &vreg110, &vreg131, &mem95, NULL, // VPSRLD VREG:w:u32=$YMMr VREG:r:u32=$YMMn MEM:r:u64=$mem128
  /* 5734 */ &vreg112, &preg0, &vreg150, &vreg41, NULL, // VPSRLD VREG:w:u32=$ZMMr PREG:r:Z=$Kk     VREG:r:u32=$ZMMn             VREG:r:u32=$XMMm
  /* 5739 */ &vreg112, &preg0, &vreg150, &mem131, NULL, // VPSRLD VREG:w:u32=$ZMMr PREG:r:Z=$Kk     VREG:r:u32=$ZMMn             MEM:r:u32=$mem128
  /* 5744 */ &vreg170, &vreg45, &shift1, NULL, // VPSLLQ VREG:w:u64=$XMMn VREG:r:u64=$XMMm SHIFT:r:u8=$shl
  /* 5748 */ &vreg170, &preg0, &vreg45, &shift1, NULL, // VPSLLQ VREG:w:u64=$XMMn PREG:r:Z=$Kk     VREG:r:u64=$XMMm             SHIFT:r:u8=$shl
  /* 5753 */ &vreg170, &preg0, &mem95, &bcst0, &shift1, NULL, // VPSLLQ VREG:w:u64=$XMMn PREG:r:Z=$Kk     MEM:r:u64=$mem128 BCST=$BCST SHIFT:r:u8=$shl
  /* 5759 */ &vreg171, &vreg5, &shift1, NULL, // VPSLLQ VREG:w:u64=$YMMn VREG:r:u64=$YMMm SHIFT:r:u8=$shl
  /* 5763 */ &vreg171, &preg0, &vreg5, &shift1, NULL, // VPSLLQ VREG:w:u64=$YMMn PREG:r:Z=$Kk     VREG:r:u64=$YMMm             SHIFT:r:u8=$shl
  /* 5768 */ &vreg171, &preg0, &mem55, &bcst0, &shift1, NULL, // VPSLLQ VREG:w:u64=$YMMn PREG:r:Z=$Kk     MEM:r:u64=$mem256 BCST=$BCST SHIFT:r:u8=$shl
  /* 5774 */ &vreg172, &preg0, &vreg85, &shift1, NULL, // VPSLLQ VREG:w:u64=$ZMMn PREG:r:Z=$Kk     VREG:r:u64=$ZMMm             SHIFT:r:u8=$shl
  /* 5779 */ &vreg172, &preg0, &mem141, &bcst0, &shift1, NULL, // VPSLLQ VREG:w:u64=$ZMMn PREG:r:Z=$Kk     MEM:r:u64=$mem512 BCST=$BCST SHIFT:r:u8=$shl
  /* 5785 */ &vreg26, &preg0, &vreg68, &mem95, NULL, // VPSRLQ VREG:w:u64=$XMMr PREG:r:Z=$Kk     VREG:r:u64=$XMMn             MEM:r:u64=$mem128
  /* 5790 */ &vreg69, &preg0, &vreg4, &vreg45, NULL, // VPSRLQ VREG:w:u64=$YMMr PREG:r:Z=$Kk     VREG:r:u64=$YMMn             VREG:r:u64=$XMMm
  /* 5795 */ &vreg69, &preg0, &vreg4, &mem95, NULL, // VPSRLQ VREG:w:u64=$YMMr PREG:r:Z=$Kk     VREG:r:u64=$YMMn             MEM:r:u64=$mem128
  /* 5800 */ &vreg69, &vreg4, &reg257, NULL, // VPSRLQ VREG:w:u64=$YMMr VREG:r:u64=$YMMn REG:r:u64=$XMMm
  /* 5804 */ &vreg69, &vreg4, &mem95, NULL, // VPSRLQ VREG:w:u64=$YMMr VREG:r:u64=$YMMn MEM:r:u64=$mem128
  /* 5808 */ &vreg114, &preg0, &vreg159, &vreg45, NULL, // VPSRLQ VREG:w:u64=$ZMMr PREG:r:Z=$Kk     VREG:r:u64=$ZMMn             VREG:r:u64=$XMMm
  /* 5813 */ &vreg114, &preg0, &vreg159, &mem95, NULL, // VPSRLQ VREG:w:u64=$ZMMr PREG:r:Z=$Kk     VREG:r:u64=$ZMMn             MEM:r:u64=$mem128
  /* 5818 */ &vreg173, &vreg32, &shift1, NULL, // VPSLLW VREG:w:u16=$XMMn VREG:r:u16=$XMMm SHIFT:r:u8=$shl
  /* 5822 */ &vreg173, &preg0, &vreg32, &shift1, NULL, // VPSLLW VREG:w:u16=$XMMn PREG:r:Z=$Kk     VREG:r:u16=$XMMm             SHIFT:r:u8=$shl
  /* 5827 */ &vreg173, &preg0, &mem125, &shift1, NULL, // VPSLLW VREG:w:u16=$XMMn PREG:r:Z=$Kk     MEM:r:u16=$mem128            SHIFT:r:u8=$shl
  /* 5832 */ &vreg174, &vreg127, &shift1, NULL, // VPSLLW VREG:w:u16=$YMMn VREG:r:u16=$YMMm SHIFT:r:u8=$shl
  /* 5836 */ &vreg174, &preg0, &vreg127, &shift1, NULL, // VPSLLW VREG:w:u16=$YMMn PREG:r:Z=$Kk     VREG:r:u16=$YMMm             SHIFT:r:u8=$shl
  /* 5841 */ &vreg174, &preg0, &mem163, &shift1, NULL, // VPSLLW VREG:w:u16=$YMMn PREG:r:Z=$Kk     MEM:r:u16=$mem256            SHIFT:r:u8=$shl
  /* 5846 */ &vreg175, &preg0, &vreg129, &shift1, NULL, // VPSLLW VREG:w:u16=$ZMMn PREG:r:Z=$Kk     VREG:r:u16=$ZMMm             SHIFT:r:u8=$shl
  /* 5851 */ &vreg175, &preg0, &mem164, &shift1, NULL, // VPSLLW VREG:w:u16=$ZMMn PREG:r:Z=$Kk     MEM:r:u16=$mem512            SHIFT:r:u8=$shl
  /* 5856 */ &vreg40, &vreg151, &vreg45, NULL, // VPSRLW VREG:w:u16=$XMMr VREG:r:u16=$XMMn VREG:r:u64=$XMMm
  /* 5860 */ &vreg40, &vreg151, &mem95, NULL, // VPSRLW VREG:w:u16=$XMMr VREG:r:u16=$XMMn MEM:r:u64=$mem128
  /* 5864 */ &vreg126, &preg0, &vreg152, &vreg32, NULL, // VPSRLW VREG:w:u16=$YMMr PREG:r:Z=$Kk     VREG:r:u16=$YMMn             VREG:r:u16=$XMMm
  /* 5869 */ &vreg126, &preg0, &vreg152, &mem125, NULL, // VPSRLW VREG:w:u16=$YMMr PREG:r:Z=$Kk     VREG:r:u16=$YMMn             MEM:r:u16=$mem128
  /* 5874 */ &vreg126, &vreg152, &reg257, NULL, // VPSRLW VREG:w:u16=$YMMr VREG:r:u16=$YMMn REG:r:u64=$XMMm
  /* 5878 */ &vreg126, &vreg152, &mem95, NULL, // VPSRLW VREG:w:u16=$YMMr VREG:r:u16=$YMMn MEM:r:u64=$mem128
  /* 5882 */ &vreg128, &preg0, &vreg153, &vreg32, NULL, // VPSRLW VREG:w:u16=$ZMMr PREG:r:Z=$Kk     VREG:r:u16=$ZMMn             VREG:r:u16=$XMMm
  /* 5887 */ &vreg128, &preg0, &vreg153, &mem125, NULL, // VPSRLW VREG:w:u16=$ZMMr PREG:r:Z=$Kk     VREG:r:u16=$ZMMn             MEM:r:u16=$mem128
  /* 5892 */ &vreg176, &vreg1, &shift0, NULL, // VPSRAD VREG:w:s32=$XMMn VREG:r:s32=$XMMm SHIFT:r:u8=$shr
  /* 5896 */ &vreg177, &vreg72, &shift0, NULL, // VPSRAD VREG:w:s32=$YMMn VREG:r:s32=$YMMm SHIFT:r:u8=$shr
  /* 5900 */ &vreg2, &vreg62, &vreg45, NULL, // VPSRAD VREG:w:s32=$XMMr VREG:r:s32=$XMMn VREG:r:u64=$XMMm
  /* 5904 */ &vreg2, &vreg62, &mem95, NULL, // VPSRAD VREG:w:s32=$XMMr VREG:r:s32=$XMMn MEM:r:u64=$mem128
  /* 5908 */ &vreg70, &vreg71, &reg257, NULL, // VPSRAD VREG:w:s32=$YMMr VREG:r:s32=$YMMn REG:r:u64=$XMMm
  /* 5912 */ &vreg70, &vreg71, &mem95, NULL, // VPSRAD VREG:w:s32=$YMMr VREG:r:s32=$YMMn MEM:r:u64=$mem128
  /* 5916 */ &vreg178, &vreg30, &shift0, NULL, // VPSRAW VREG:w:s16=$XMMn VREG:r:s16=$XMMm SHIFT:r:u8=$shr
  /* 5920 */ &vreg173, &preg0, &vreg32, &shift0, NULL, // VPSRLW VREG:w:u16=$XMMn PREG:r:Z=$Kk     VREG:r:u16=$XMMm             SHIFT:r:u8=$shr
  /* 5925 */ &vreg173, &preg0, &mem125, &shift0, NULL, // VPSRLW VREG:w:u16=$XMMn PREG:r:Z=$Kk     MEM:r:u16=$mem128            SHIFT:r:u8=$shr
  /* 5930 */ &vreg179, &vreg142, &shift0, NULL, // VPSRAW VREG:w:s16=$YMMn VREG:r:s16=$YMMm SHIFT:r:u8=$shr
  /* 5934 */ &vreg174, &preg0, &vreg127, &shift0, NULL, // VPSRLW VREG:w:u16=$YMMn PREG:r:Z=$Kk     VREG:r:u16=$YMMm             SHIFT:r:u8=$shr
  /* 5939 */ &vreg174, &preg0, &mem163, &shift0, NULL, // VPSRLW VREG:w:u16=$YMMn PREG:r:Z=$Kk     MEM:r:u16=$mem256            SHIFT:r:u8=$shr
  /* 5944 */ &vreg175, &preg0, &vreg129, &shift0, NULL, // VPSRLW VREG:w:u16=$ZMMn PREG:r:Z=$Kk     VREG:r:u16=$ZMMm             SHIFT:r:u8=$shr
  /* 5949 */ &vreg175, &preg0, &mem164, &shift0, NULL, // VPSRLW VREG:w:u16=$ZMMn PREG:r:Z=$Kk     MEM:r:u16=$mem512            SHIFT:r:u8=$shr
  /* 5954 */ &vreg38, &vreg147, &vreg45, NULL, // VPSRAW VREG:w:s16=$XMMr VREG:r:s16=$XMMn VREG:r:u64=$XMMm
  /* 5958 */ &vreg38, &vreg147, &mem95, NULL, // VPSRAW VREG:w:s16=$XMMr VREG:r:s16=$XMMn MEM:r:u64=$mem128
  /* 5962 */ &vreg143, &vreg148, &reg257, NULL, // VPSRAW VREG:w:s16=$YMMr VREG:r:s16=$YMMn REG:r:u64=$XMMm
  /* 5966 */ &vreg143, &vreg148, &mem95, NULL, // VPSRAW VREG:w:s16=$YMMr VREG:r:s16=$YMMn MEM:r:u64=$mem128
  /* 5970 */ &vreg167, &preg0, &vreg41, &shift0, NULL, // VPSRLD VREG:w:u32=$XMMn PREG:r:Z=$Kk     VREG:r:u32=$XMMm             SHIFT:r:u8=$shr
  /* 5975 */ &vreg167, &preg0, &mem131, &bcst0, &shift0, NULL, // VPSRLD VREG:w:u32=$XMMn PREG:r:Z=$Kk     MEM:r:u32=$mem128 BCST=$BCST SHIFT:r:u8=$shr
  /* 5981 */ &vreg170, &preg0, &vreg45, &shift0, NULL, // VPSRLQ VREG:w:u64=$XMMn PREG:r:Z=$Kk     VREG:r:u64=$XMMm             SHIFT:r:u8=$shr
  /* 5986 */ &vreg170, &preg0, &mem95, &bcst0, &shift0, NULL, // VPSRLQ VREG:w:u64=$XMMn PREG:r:Z=$Kk     MEM:r:u64=$mem128 BCST=$BCST SHIFT:r:u8=$shr
  /* 5992 */ &vreg168, &preg0, &vreg111, &shift0, NULL, // VPSRLD VREG:w:u32=$YMMn PREG:r:Z=$Kk     VREG:r:u32=$YMMm             SHIFT:r:u8=$shr
  /* 5997 */ &vreg168, &preg0, &mem156, &bcst0, &shift0, NULL, // VPSRLD VREG:w:u32=$YMMn PREG:r:Z=$Kk     MEM:r:u32=$mem256 BCST=$BCST SHIFT:r:u8=$shr
  /* 6003 */ &vreg171, &preg0, &vreg5, &shift0, NULL, // VPSRLQ VREG:w:u64=$YMMn PREG:r:Z=$Kk     VREG:r:u64=$YMMm             SHIFT:r:u8=$shr
  /* 6008 */ &vreg171, &preg0, &mem55, &bcst0, &shift0, NULL, // VPSRLQ VREG:w:u64=$YMMn PREG:r:Z=$Kk     MEM:r:u64=$mem256 BCST=$BCST SHIFT:r:u8=$shr
  /* 6014 */ &vreg169, &preg0, &vreg113, &shift0, NULL, // VPSRLD VREG:w:u32=$ZMMn PREG:r:Z=$Kk     VREG:r:u32=$ZMMm             SHIFT:r:u8=$shr
  /* 6019 */ &vreg169, &preg0, &mem48, &bcst0, &shift0, NULL, // VPSRLD VREG:w:u32=$ZMMn PREG:r:Z=$Kk     MEM:r:u32=$mem512 BCST=$BCST SHIFT:r:u8=$shr
  /* 6025 */ &vreg172, &preg0, &vreg85, &shift0, NULL, // VPSRLQ VREG:w:u64=$ZMMn PREG:r:Z=$Kk     VREG:r:u64=$ZMMm             SHIFT:r:u8=$shr
  /* 6030 */ &vreg172, &preg0, &mem141, &bcst0, &shift0, NULL, // VPSRLQ VREG:w:u64=$ZMMn PREG:r:Z=$Kk     MEM:r:u64=$mem512 BCST=$BCST SHIFT:r:u8=$shr
  /* 6036 */ &reg291, &reg271, &shift0, NULL, // VPSRLDQ REG:w:u128=$XMMn  REG:r:u128=$XMMm  SHIFT:r:u8=$shr
  /* 6040 */ &vreg163, &vreg28, &shift0, NULL, // VPSRLDQ VREG:w:u8=$XMMn   VREG:r:u8=$XMMm   SHIFT:r:u8=$shr
  /* 6044 */ &vreg163, &mem122, &shift0, NULL, // VPSRLDQ VREG:w:u8=$XMMn   MEM:r:u8=$mem128  SHIFT:r:u8=$shr
  /* 6048 */ &vreg164, &vreg64, &shift0, NULL, // VPSRLDQ VREG:w:u128=$YMMn VREG:r:u128=$YMMm SHIFT:r:u8=$shr
  /* 6052 */ &vreg165, &vreg86, &shift0, NULL, // VPSRLDQ VREG:w:u8=$YMMn   VREG:r:u8=$YMMm   SHIFT:r:u8=$shr
  /* 6056 */ &vreg165, &mem142, &shift0, NULL, // VPSRLDQ VREG:w:u8=$YMMn   MEM:r:u8=$mem256  SHIFT:r:u8=$shr
  /* 6060 */ &vreg166, &vreg87, &shift0, NULL, // VPSRLDQ VREG:w:u8=$ZMMn   VREG:r:u8=$ZMMm   SHIFT:r:u8=$shr
  /* 6064 */ &vreg166, &mem143, &shift0, NULL, // VPSRLDQ VREG:w:u8=$ZMMn   MEM:r:u8=$mem512  SHIFT:r:u8=$shr
  /* 6068 */ &vreg167, &vreg41, &shift0, NULL, // VPSRLD VREG:w:u32=$XMMn VREG:r:u32=$XMMm SHIFT:r:u8=$shr
  /* 6072 */ &vreg168, &vreg111, &shift0, NULL, // VPSRLD VREG:w:u32=$YMMn VREG:r:u32=$YMMm SHIFT:r:u8=$shr
  /* 6076 */ &vreg170, &vreg45, &shift0, NULL, // VPSRLQ VREG:w:u64=$XMMn VREG:r:u64=$XMMm SHIFT:r:u8=$shr
  /* 6080 */ &vreg171, &vreg5, &shift0, NULL, // VPSRLQ VREG:w:u64=$YMMn VREG:r:u64=$YMMm SHIFT:r:u8=$shr
  /* 6084 */ &vreg173, &vreg32, &shift0, NULL, // VPSRLW VREG:w:u16=$XMMn VREG:r:u16=$XMMm SHIFT:r:u8=$shr
  /* 6088 */ &vreg174, &vreg127, &shift0, NULL, // VPSRLW VREG:w:u16=$YMMn VREG:r:u16=$YMMm SHIFT:r:u8=$shr
  /* 6092 */ &vreg97, &vreg72, NULL, // VPTEST VREG:r:s32=$YMMr VREG:r:s32=$YMMm
  /* 6095 */ &vreg97, &mem139, NULL, // VPTEST VREG:r:s32=$YMMr MEM:r:s32=$mem256
  /* 6098 */ &vreg50, &vreg52, &rndc1, NULL, // VROUNDPD VREG:w:f64=$YMMr VREG:r:f64=$YMMm  RNDC:r:u8=$rndc2
  /* 6102 */ &vreg50, &mem132, &rndc1, NULL, // VROUNDPD VREG:w:f64=$YMMr MEM:r:f64=$mem256 RNDC:r:u8=$rndc2
  /* 6106 */ &vreg9, &vreg58, &rndc1, NULL, // VROUNDPS VREG:w:f32=$YMMr VREG:r:f32=$YMMm  RNDC:r:u8=$rndc2
  /* 6110 */ &vreg9, &mem134, &rndc1, NULL, // VROUNDPS VREG:w:f32=$YMMr MEM:r:f32=$mem256 RNDC:r:u8=$rndc2
  /* 6114 */ &vreg19, &vreg49, &reg241, &rndc1, NULL, // VROUNDSD VREG:w:f64=$XMMr VREG:r:f64=$XMMn REG:r:f64=$XMMm  RNDC:r:u8=$rndc2
  /* 6119 */ &vreg19, &vreg49, &mem76, &rndc1, NULL, // VROUNDSD VREG:w:f64=$XMMr VREG:r:f64=$XMMn MEM:r:f64=$mem64 RNDC:r:u8=$rndc2
  /* 6124 */ &vreg7, &vreg56, &reg243, &rndc1, NULL, // VROUNDSS VREG:w:f32=$XMMr VREG:r:f32=$XMMn REG:r:f32=$XMMm  RNDC:r:u8=$rndc2
  /* 6129 */ &vreg7, &vreg56, &mem75, &rndc1, NULL, // VROUNDSS VREG:w:f32=$XMMr VREG:r:f32=$XMMn MEM:r:f32=$mem32 RNDC:r:u8=$rndc2
  /* 6134 */ &vreg19, &preg0, &vreg49, &vreg14, &order0, NULL, // VSHUFPD VREG:w:f64=$XMMr PREG:r:Z=$Kk     VREG:r:f64=$XMMn  VREG:r:f64=$XMMm             ORDER:r:u8=$order
  /* 6140 */ &vreg19, &preg0, &vreg49, &mem112, &bcst0, &order0, NULL, // VSHUFPD VREG:w:f64=$XMMr PREG:r:Z=$Kk     VREG:r:f64=$XMMn  MEM:r:f64=$mem128 BCST=$BCST ORDER:r:u8=$order
  /* 6147 */ &vreg19, &vreg49, &vreg14, &order0, NULL, // VSHUFPD VREG:w:f64=$XMMr VREG:r:f64=$XMMn VREG:r:f64=$XMMm  ORDER:r:u8=$order
  /* 6152 */ &vreg50, &vreg51, &vreg52, &order0, NULL, // VSHUFPD VREG:w:f64=$YMMr VREG:r:f64=$YMMn VREG:r:f64=$YMMm  ORDER:r:u8=$order
  /* 6157 */ &vreg19, &vreg49, &mem112, &order0, NULL, // VSHUFPD VREG:w:f64=$XMMr VREG:r:f64=$XMMn MEM:r:f64=$mem128 ORDER:r:u8=$order
  /* 6162 */ &vreg50, &vreg51, &mem132, &order0, NULL, // VSHUFPD VREG:w:f64=$YMMr VREG:r:f64=$YMMn MEM:r:f64=$mem256 ORDER:r:u8=$order
  /* 6167 */ &vreg50, &preg0, &vreg51, &vreg52, &order0, NULL, // VSHUFF64X2 VREG:w:f64=$YMMr PREG:r:Z=$Kk VREG:r:f64=$YMMn VREG:r:f64=$YMMm             ORDER:r:u8=$order
  /* 6173 */ &vreg50, &preg0, &vreg51, &mem132, &bcst0, &order0, NULL, // VSHUFF64X2 VREG:w:f64=$YMMr PREG:r:Z=$Kk VREG:r:f64=$YMMn MEM:r:f64=$mem256 BCST=$BCST ORDER:r:u8=$order
  /* 6180 */ &vreg53, &preg0, &vreg54, &vreg55, &order0, NULL, // VSHUFF64X2 VREG:w:f64=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMn VREG:r:f64=$ZMMm             ORDER:r:u8=$order
  /* 6186 */ &vreg53, &preg0, &vreg54, &mem133, &bcst0, &order0, NULL, // VSHUFF64X2 VREG:w:f64=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMn MEM:r:f64=$mem512 BCST=$BCST ORDER:r:u8=$order
  /* 6193 */ &vreg7, &preg0, &vreg56, &vreg16, &order0, NULL, // VSHUFPS VREG:w:f32=$XMMr PREG:r:Z=$Kk     VREG:r:f32=$XMMn  VREG:r:f32=$XMMm             ORDER:r:u8=$order
  /* 6199 */ &vreg7, &preg0, &vreg56, &mem113, &bcst0, &order0, NULL, // VSHUFPS VREG:w:f32=$XMMr PREG:r:Z=$Kk     VREG:r:f32=$XMMn  MEM:r:f32=$mem128 BCST=$BCST ORDER:r:u8=$order
  /* 6206 */ &vreg7, &vreg56, &vreg16, &order0, NULL, // VSHUFPS VREG:w:f32=$XMMr VREG:r:f32=$XMMn VREG:r:f32=$XMMm  ORDER:r:u8=$order
  /* 6211 */ &vreg9, &vreg57, &vreg58, &order0, NULL, // VSHUFPS VREG:w:f32=$YMMr VREG:r:f32=$YMMn VREG:r:f32=$YMMm  ORDER:r:u8=$order
  /* 6216 */ &vreg7, &vreg56, &mem113, &order0, NULL, // VSHUFPS VREG:w:f32=$XMMr VREG:r:f32=$XMMn MEM:r:f32=$mem128 ORDER:r:u8=$order
  /* 6221 */ &vreg9, &vreg57, &mem134, &order0, NULL, // VSHUFPS VREG:w:f32=$YMMr VREG:r:f32=$YMMn MEM:r:f32=$mem256 ORDER:r:u8=$order
  /* 6226 */ &vreg9, &preg0, &vreg57, &vreg58, &order0, NULL, // VSHUFF32X4 VREG:w:f32=$YMMr PREG:r:Z=$Kk VREG:r:f32=$YMMn VREG:r:f32=$YMMm             ORDER:r:u8=$order
  /* 6232 */ &vreg9, &preg0, &vreg57, &mem134, &bcst0, &order0, NULL, // VSHUFF32X4 VREG:w:f32=$YMMr PREG:r:Z=$Kk VREG:r:f32=$YMMn MEM:r:f32=$mem256 BCST=$BCST ORDER:r:u8=$order
  /* 6239 */ &vreg59, &preg0, &vreg60, &vreg61, &order0, NULL, // VSHUFF32X4 VREG:w:f32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMn VREG:r:f32=$ZMMm             ORDER:r:u8=$order
  /* 6245 */ &vreg59, &preg0, &vreg60, &mem135, &bcst0, &order0, NULL, // VSHUFF32X4 VREG:w:f32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMn MEM:r:f32=$mem512 BCST=$BCST ORDER:r:u8=$order
  /* 6252 */ &vreg19, &preg0, &mem112, &bcst0, NULL, // VRSQRT14PD VREG:w:f64=$XMMr PREG:r:Z=$Kk MEM:r:f64=$mem128 BCST=$BCST
  /* 6257 */ &vreg50, &preg0, &mem132, &bcst0, NULL, // VRSQRT14PD VREG:w:f64=$YMMr PREG:r:Z=$Kk MEM:r:f64=$mem256 BCST=$BCST
  /* 6262 */ &vreg53, &preg0, &vreg55, &rc0, NULL, // VSQRTPD VREG:w:f64=$ZMMr PREG:r:Z=$Kk      VREG:r:f64=$ZMMm RC=$RC
  /* 6267 */ &vreg53, &preg0, &mem133, &bcst0, NULL, // VRSQRT28PD VREG:w:f64=$ZMMr PREG:r:Z=$Kk MEM:r:f64=$mem512 BCST=$BCST
  /* 6272 */ &vreg7, &preg0, &mem113, &bcst0, NULL, // VRSQRT14PS VREG:w:f32=$XMMr PREG:r:Z=$Kk MEM:r:f32=$mem128 BCST=$BCST
  /* 6277 */ &vreg9, &preg0, &mem134, &bcst0, NULL, // VRSQRT14PS VREG:w:f32=$YMMr PREG:r:Z=$Kk MEM:r:f32=$mem256 BCST=$BCST
  /* 6282 */ &vreg59, &preg0, &vreg61, &rc0, NULL, // VSQRTPS VREG:w:f32=$ZMMr PREG:r:Z=$Kk      VREG:r:f32=$ZMMm RC=$RC
  /* 6287 */ &vreg59, &preg0, &mem135, &bcst0, NULL, // VRSQRT28PS VREG:w:f32=$ZMMr PREG:r:Z=$Kk MEM:r:f32=$mem512 BCST=$BCST
  /* 6292 */ &vreg23, &reg241, NULL, // VUCOMISD VREG:r:f64=$XMMr REG:r:f64=$XMMm
  /* 6295 */ &vreg11, &reg243, NULL, // VUCOMISS VREG:r:f32=$XMMr REG:r:f32=$XMMm
  /* 6298 */ &vreg39, &preg0, &vreg130, &vreg41, &imm0, NULL, // VALIGND VREG:w:u32=$XMMr PREG:r:Z=$Kk VREG:r:u32=$XMMn VREG:r:u32=$XMMm             IMM:u8=$uimm8
  /* 6304 */ &vreg39, &preg0, &vreg130, &mem131, &bcst0, &imm0, NULL, // VALIGND VREG:w:u32=$XMMr PREG:r:Z=$Kk VREG:r:u32=$XMMn MEM:r:u32=$mem128 BCST=$BCST IMM:u8=$uimm8
  /* 6311 */ &vreg26, &preg0, &vreg68, &vreg45, &imm0, NULL, // VALIGNQ VREG:w:u64=$XMMr PREG:r:Z=$Kk VREG:r:u64=$XMMn VREG:r:u64=$XMMm             IMM:u8=$uimm8
  /* 6317 */ &vreg26, &preg0, &vreg68, &mem95, &bcst0, &imm0, NULL, // VALIGNQ VREG:w:u64=$XMMr PREG:r:Z=$Kk VREG:r:u64=$XMMn MEM:r:u64=$mem128 BCST=$BCST IMM:u8=$uimm8
  /* 6324 */ &vreg110, &preg0, &vreg131, &vreg111, &imm0, NULL, // VALIGND VREG:w:u32=$YMMr PREG:r:Z=$Kk VREG:r:u32=$YMMn VREG:r:u32=$YMMm             IMM:u8=$uimm8
  /* 6330 */ &vreg110, &preg0, &vreg131, &mem156, &bcst0, &imm0, NULL, // VALIGND VREG:w:u32=$YMMr PREG:r:Z=$Kk VREG:r:u32=$YMMn MEM:r:u32=$mem256 BCST=$BCST IMM:u8=$uimm8
  /* 6337 */ &vreg69, &preg0, &vreg4, &vreg5, &imm0, NULL, // VALIGNQ VREG:w:u64=$YMMr PREG:r:Z=$Kk VREG:r:u64=$YMMn VREG:r:u64=$YMMm             IMM:u8=$uimm8
  /* 6343 */ &vreg69, &preg0, &vreg4, &mem55, &bcst0, &imm0, NULL, // VALIGNQ VREG:w:u64=$YMMr PREG:r:Z=$Kk VREG:r:u64=$YMMn MEM:r:u64=$mem256 BCST=$BCST IMM:u8=$uimm8
  /* 6350 */ &vreg112, &preg0, &vreg150, &vreg113, &imm0, NULL, // VALIGND VREG:w:u32=$ZMMr PREG:r:Z=$Kk VREG:r:u32=$ZMMn VREG:r:u32=$ZMMm             IMM:u8=$uimm8
  /* 6356 */ &vreg112, &preg0, &vreg150, &mem48, &bcst0, &imm0, NULL, // VALIGND VREG:w:u32=$ZMMr PREG:r:Z=$Kk VREG:r:u32=$ZMMn MEM:r:u32=$mem512 BCST=$BCST IMM:u8=$uimm8
  /* 6363 */ &vreg114, &preg0, &vreg159, &vreg85, &imm0, NULL, // VALIGNQ VREG:w:u64=$ZMMr PREG:r:Z=$Kk VREG:r:u64=$ZMMn VREG:r:u64=$ZMMm             IMM:u8=$uimm8
  /* 6369 */ &vreg114, &preg0, &vreg159, &mem141, &bcst0, &imm0, NULL, // VALIGNQ VREG:w:u64=$ZMMr PREG:r:Z=$Kk VREG:r:u64=$ZMMn MEM:r:u64=$mem512 BCST=$BCST IMM:u8=$uimm8
  /* 6376 */ &vreg50, &mem112, &sbcst0, NULL, // VBROADCASTF128  VREG:w:f64=$YMMr MEM:r:f64=$mem128 SBCST:SUPP={FROM=2 TO=4}
  /* 6380 */ &vreg9, &preg0, &vreg16, NULL, // VBROADCASTSS    VREG:w:f32=$YMMr PREG:r:Z=$Kk                               VREG:r:f32=$XMMm
  /* 6384 */ &vreg9, &preg0, &mem114, &sbcst1, NULL, // VBROADCASTF32X2 VREG:w:f32=$YMMr PREG:r:Z=$Kk                               MEM:r:f32=$mem64 SBCST:SUPP={FROM=2 TO=8}
  /* 6389 */ &vreg59, &preg0, &vreg16, NULL, // VBROADCASTSS    VREG:w:f32=$ZMMr PREG:r:Z=$Kk                               VREG:r:f32=$XMMm
  /* 6393 */ &vreg59, &preg0, &mem114, &sbcst2, NULL, // VBROADCASTF32X2 VREG:w:f32=$ZMMr PREG:r:Z=$Kk                               MEM:r:f32=$mem64 SBCST:SUPP={FROM=2 TO=16}
  /* 6398 */ &vreg9, &preg0, &mem113, &sbcst3, NULL, // VBROADCASTF32X4 VREG:w:f32=$YMMr PREG:r:Z=$Kk                               MEM:r:f32=$mem128 SBCST:SUPP={FROM=4 TO=8}
  /* 6403 */ &vreg59, &preg0, &mem113, &sbcst4, NULL, // VBROADCASTF32X4 VREG:w:f32=$ZMMr PREG:r:Z=$Kk                               MEM:r:f32=$mem128 SBCST:SUPP={FROM=4 TO=16}
  /* 6408 */ &vreg59, &preg0, &mem134, &sbcst5, NULL, // VBROADCASTF32X8 VREG:w:f32=$ZMMr PREG:r:Z=$Kk                               MEM:r:f32=$mem256 SBCST:SUPP={FROM=8 TO=16}
  /* 6413 */ &vreg50, &preg0, &mem112, &sbcst0, NULL, // VBROADCASTF64X2 VREG:w:f64=$YMMr PREG:r:Z=$Kk                               MEM:r:f64=$mem128 SBCST:SUPP={FROM=2 TO=4}
  /* 6418 */ &vreg53, &preg0, &mem112, &sbcst1, NULL, // VBROADCASTF64X2 VREG:w:f64=$ZMMr PREG:r:Z=$Kk                               MEM:r:f64=$mem128 SBCST:SUPP={FROM=2 TO=8}
  /* 6423 */ &vreg53, &preg0, &mem132, &sbcst3, NULL, // VBROADCASTF64X4 VREG:w:f64=$ZMMr PREG:r:Z=$Kk                               MEM:r:f64=$mem256 SBCST:SUPP={FROM=4 TO=8}
  /* 6428 */ &vreg50, &vreg14, NULL, // VBROADCASTSD    VREG:w:f64=$YMMr VREG:r:f64=$XMMm
  /* 6431 */ &vreg50, &mem76, &sbcst6, NULL, // VBROADCASTSD    VREG:w:f64=$YMMr MEM:r:f64=$mem64 SBCST:SUPP={FROM=1 TO=4}
  /* 6435 */ &vreg50, &preg0, &vreg14, NULL, // VBROADCASTSD    VREG:w:f64=$YMMr PREG:r:Z=$Kk                               VREG:r:f64=$XMMm
  /* 6439 */ &vreg50, &preg0, &mem76, &sbcst6, NULL, // VBROADCASTSD    VREG:w:f64=$YMMr PREG:r:Z=$Kk                               MEM:r:f64=$mem64 SBCST:SUPP={FROM=1 TO=4}
  /* 6444 */ &vreg53, &preg0, &vreg14, NULL, // VBROADCASTSD    VREG:w:f64=$ZMMr PREG:r:Z=$Kk                               VREG:r:f64=$XMMm
  /* 6448 */ &vreg53, &preg0, &mem76, &sbcst7, NULL, // VBROADCASTSD    VREG:w:f64=$ZMMr PREG:r:Z=$Kk                               MEM:r:f64=$mem64 SBCST:SUPP={FROM=1 TO=8}
  /* 6453 */ &vreg7, &preg0, &mem75, &sbcst6, NULL, // VBROADCASTSS    VREG:w:f32=$XMMr PREG:r:Z=$Kk                               MEM:r:f32=$mem32 SBCST:SUPP={FROM=1 TO=4}
  /* 6458 */ &vreg7, &mem75, &sbcst6, NULL, // VBROADCASTSS    VREG:w:f32=$XMMr MEM:r:f32=$mem32 SBCST:SUPP={FROM=1 TO=4}
  /* 6462 */ &vreg9, &mem75, &sbcst7, NULL, // VBROADCASTSS    VREG:w:f32=$YMMr MEM:r:f32=$mem32 SBCST:SUPP={FROM=1 TO=8}
  /* 6466 */ &vreg9, &vreg16, NULL, // VBROADCASTSS    VREG:w:f32=$YMMr VREG:r:f32=$XMMm
  /* 6469 */ &vreg9, &preg0, &mem75, &sbcst7, NULL, // VBROADCASTSS    VREG:w:f32=$YMMr PREG:r:Z=$Kk                               MEM:r:f32=$mem32 SBCST:SUPP={FROM=1 TO=8}
  /* 6474 */ &vreg59, &preg0, &mem75, &sbcst8, NULL, // VBROADCASTSS    VREG:w:f32=$ZMMr PREG:r:Z=$Kk                               MEM:r:f32=$mem32 SBCST:SUPP={FROM=1 TO=16}
  /* 6479 */ &vreg40, &preg0, &vreg56, &vreg16, NULL, // VCVTNE2PS2BF16 VREG:w:u16=$XMMr PREG:r:Z=$Kk VREG:r:f32=$XMMn VREG:r:f32=$XMMm
  /* 6484 */ &vreg40, &preg0, &vreg56, &mem113, &bcst0, NULL, // VCVTNE2PS2BF16 VREG:w:u16=$XMMr PREG:r:Z=$Kk VREG:r:f32=$XMMn MEM:r:f32=$mem128 BCST=$BCST
  /* 6490 */ &vreg126, &preg0, &vreg57, &vreg58, NULL, // VCVTNE2PS2BF16 VREG:w:u16=$YMMr PREG:r:Z=$Kk VREG:r:f32=$YMMn VREG:r:f32=$YMMm
  /* 6495 */ &vreg126, &preg0, &vreg57, &mem134, &bcst0, NULL, // VCVTNE2PS2BF16 VREG:w:u16=$YMMr PREG:r:Z=$Kk VREG:r:f32=$YMMn MEM:r:f32=$mem256 BCST=$BCST
  /* 6501 */ &vreg128, &preg0, &vreg60, &vreg61, NULL, // VCVTNE2PS2BF16 VREG:w:u16=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMn VREG:r:f32=$ZMMm
  /* 6506 */ &vreg128, &preg0, &vreg60, &mem135, &bcst0, NULL, // VCVTNE2PS2BF16 VREG:w:u16=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMn MEM:r:f32=$mem512 BCST=$BCST
  /* 6512 */ &vreg40, &preg0, &vreg16, NULL, // VCVTNEPS2BF16 VREG:w:u16=$XMMr PREG:r:Z=$Kk VREG:r:f32=$XMMm
  /* 6516 */ &vreg40, &preg0, &mem113, &bcst0, NULL, // VCVTNEPS2BF16 VREG:w:u16=$XMMr PREG:r:Z=$Kk MEM:r:f32=$mem128 BCST=$BCST
  /* 6521 */ &vreg40, &preg0, &vreg58, NULL, // VCVTNEPS2BF16 VREG:w:u16=$XMMr PREG:r:Z=$Kk VREG:r:f32=$YMMm
  /* 6525 */ &vreg40, &preg0, &mem134, &bcst0, NULL, // VCVTNEPS2BF16 VREG:w:u16=$XMMr PREG:r:Z=$Kk MEM:r:f32=$mem256 BCST=$BCST
  /* 6530 */ &vreg126, &preg0, &vreg61, NULL, // VCVTNEPS2BF16 VREG:w:u16=$YMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMm
  /* 6534 */ &vreg126, &preg0, &mem135, &bcst0, NULL, // VCVTNEPS2BF16 VREG:w:u16=$YMMr PREG:r:Z=$Kk MEM:r:f32=$mem512 BCST=$BCST
  /* 6539 */ &vreg37, &preg0, &vreg14, NULL, // VCVTTPD2QQ VREG:w:s64=$XMMr PREG:r:Z=$Kk VREG:r:f64=$XMMm
  /* 6543 */ &vreg37, &preg0, &mem112, &bcst0, NULL, // VCVTTPD2QQ VREG:w:s64=$XMMr PREG:r:Z=$Kk MEM:r:f64=$mem128 BCST=$BCST
  /* 6548 */ &vreg138, &preg0, &vreg52, NULL, // VCVTTPD2QQ VREG:w:s64=$YMMr PREG:r:Z=$Kk VREG:r:f64=$YMMm
  /* 6552 */ &vreg138, &preg0, &mem132, &bcst0, NULL, // VCVTTPD2QQ VREG:w:s64=$YMMr PREG:r:Z=$Kk MEM:r:f64=$mem256 BCST=$BCST
  /* 6557 */ &vreg140, &preg0, &vreg55, &rc0, NULL, // VCVTQQ2PD VREG:w:s64=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMm RC=$RC
  /* 6562 */ &vreg140, &preg0, &vreg55, NULL, // VCVTTPD2QQ VREG:w:s64=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMm
  /* 6566 */ &vreg140, &preg0, &mem133, &bcst0, NULL, // VCVTTPD2QQ VREG:w:s64=$ZMMr PREG:r:Z=$Kk MEM:r:f64=$mem512 BCST=$BCST
  /* 6571 */ &vreg39, &preg0, &vreg14, NULL, // VCVTTPD2UDQ VREG:w:u32=$XMMr PREG:r:Z=$Kk VREG:r:f64=$XMMm
  /* 6575 */ &vreg39, &preg0, &mem112, &bcst0, NULL, // VCVTTPD2UDQ VREG:w:u32=$XMMr PREG:r:Z=$Kk MEM:r:f64=$mem128 BCST=$BCST
  /* 6580 */ &vreg39, &preg0, &vreg52, NULL, // VCVTTPD2UDQ VREG:w:u32=$XMMr PREG:r:Z=$Kk VREG:r:f64=$YMMm
  /* 6584 */ &vreg39, &preg0, &mem132, &bcst0, NULL, // VCVTTPD2UDQ VREG:w:u32=$XMMr PREG:r:Z=$Kk MEM:r:f64=$mem256 BCST=$BCST
  /* 6589 */ &vreg110, &preg0, &vreg55, &rc0, NULL, // VCVTPD2UDQ VREG:w:u32=$YMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMm RC=$RC
  /* 6594 */ &vreg110, &preg0, &vreg55, NULL, // VCVTTPD2UDQ VREG:w:u32=$YMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMm
  /* 6598 */ &vreg110, &preg0, &mem133, &bcst0, NULL, // VCVTTPD2UDQ VREG:w:u32=$YMMr PREG:r:Z=$Kk MEM:r:f64=$mem512 BCST=$BCST
  /* 6603 */ &vreg26, &preg0, &vreg14, NULL, // VCVTTPD2UQQ VREG:w:u64=$XMMr PREG:r:Z=$Kk VREG:r:f64=$XMMm
  /* 6607 */ &vreg26, &preg0, &mem112, &bcst0, NULL, // VCVTTPD2UQQ VREG:w:u64=$XMMr PREG:r:Z=$Kk MEM:r:f64=$mem128 BCST=$BCST
  /* 6612 */ &vreg69, &preg0, &vreg52, NULL, // VCVTTPD2UQQ VREG:w:u64=$YMMr PREG:r:Z=$Kk VREG:r:f64=$YMMm
  /* 6616 */ &vreg69, &preg0, &mem132, &bcst0, NULL, // VCVTTPD2UQQ VREG:w:u64=$YMMr PREG:r:Z=$Kk MEM:r:f64=$mem256 BCST=$BCST
  /* 6621 */ &vreg114, &preg0, &vreg55, &rc0, NULL, // VCVTPD2UQQ VREG:w:u64=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMm RC=$RC
  /* 6626 */ &vreg114, &preg0, &vreg55, NULL, // VCVTTPD2UQQ VREG:w:u64=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMm
  /* 6630 */ &vreg114, &preg0, &mem133, &bcst0, NULL, // VCVTTPD2UQQ VREG:w:u64=$ZMMr PREG:r:Z=$Kk MEM:r:f64=$mem512 BCST=$BCST
  /* 6635 */ &vreg7, &preg0, &vreg8, NULL, // VCVTPH2PS VREG:w:f32=$XMMr PREG:r:Z=$Kk VREG:r:f16=$XMMm
  /* 6639 */ &vreg7, &preg0, &mem68, NULL, // VCVTPH2PS VREG:w:f32=$XMMr PREG:r:Z=$Kk MEM:r:f16=$mem64
  /* 6643 */ &vreg9, &preg0, &vreg8, NULL, // VCVTPH2PS VREG:w:f32=$YMMr PREG:r:Z=$Kk VREG:r:f16=$XMMm
  /* 6647 */ &vreg9, &preg0, &mem69, NULL, // VCVTPH2PS VREG:w:f32=$YMMr PREG:r:Z=$Kk MEM:r:f16=$mem128
  /* 6651 */ &vreg59, &preg0, &vreg180, &sae0, NULL, // VCVTPH2PS VREG:w:f32=$ZMMr PREG:r:Z=$Kk VREG:r:f16=$YMMm SAE=$SAE
  /* 6656 */ &vreg59, &preg0, &vreg180, NULL, // VCVTPH2PS VREG:w:f32=$ZMMr PREG:r:Z=$Kk VREG:r:f16=$YMMm
  /* 6660 */ &vreg59, &preg0, &mem172, NULL, // VCVTPH2PS VREG:w:f32=$ZMMr PREG:r:Z=$Kk MEM:r:f16=$mem256
  /* 6664 */ &vreg10, &preg0, &vreg11, &rndc0, NULL, // VCVTPS2PH VREG:w:f16=$XMMm  PREG:r:Z=$Kk VREG:r:f32=$XMMr          RNDC:r:u8=$rndc3
  /* 6669 */ &vreg10, &preg0, &vreg12, &rndc0, NULL, // VCVTPS2PH VREG:w:f16=$XMMm  PREG:r:Z=$Kk VREG:r:f32=$YMMr          RNDC:r:u8=$rndc3
  /* 6674 */ &mem71, &preg0, &vreg12, &rndc0, NULL, // VCVTPS2PH MEM:w:f16=$mem128 PREG:r:Z=$Kk VREG:r:f32=$YMMr          RNDC:r:u8=$rndc3
  /* 6679 */ &mem70, &preg0, &vreg11, &rndc0, NULL, // VCVTPS2PH MEM:w:f16=$mem64  PREG:r:Z=$Kk VREG:r:f32=$XMMr          RNDC:r:u8=$rndc3
  /* 6684 */ &vreg181, &preg0, &vreg95, &sae0, &rndc0, NULL, // VCVTPS2PH VREG:w:f16=$YMMm  PREG:r:Z=$Kk VREG:r:f32=$ZMMr SAE=$SAE RNDC:r:u8=$rndc3
  /* 6690 */ &vreg181, &preg0, &vreg95, &rndc0, NULL, // VCVTPS2PH VREG:w:f16=$YMMm  PREG:r:Z=$Kk VREG:r:f32=$ZMMr          RNDC:r:u8=$rndc3
  /* 6695 */ &mem173, &preg0, &vreg95, &rndc0, NULL, // VCVTPS2PH MEM:w:f16=$mem256 PREG:r:Z=$Kk VREG:r:f32=$ZMMr          RNDC:r:u8=$rndc3
  /* 6700 */ &vreg37, &preg0, &vreg16, NULL, // VCVTTPS2QQ VREG:w:s64=$XMMr PREG:r:Z=$Kk VREG:r:f32=$XMMm
  /* 6704 */ &vreg37, &preg0, &mem114, &bcst0, NULL, // VCVTTPS2QQ VREG:w:s64=$XMMr PREG:r:Z=$Kk MEM:r:f32=$mem64 BCST=$BCST
  /* 6709 */ &vreg138, &preg0, &vreg16, NULL, // VCVTTPS2QQ VREG:w:s64=$YMMr PREG:r:Z=$Kk VREG:r:f32=$XMMm
  /* 6713 */ &vreg138, &preg0, &mem113, &bcst0, NULL, // VCVTTPS2QQ VREG:w:s64=$YMMr PREG:r:Z=$Kk MEM:r:f32=$mem128 BCST=$BCST
  /* 6718 */ &vreg140, &preg0, &vreg58, &rc0, NULL, // VCVTPS2QQ VREG:w:s64=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$YMMm RC=$RC
  /* 6723 */ &vreg140, &preg0, &vreg58, NULL, // VCVTTPS2QQ VREG:w:s64=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$YMMm
  /* 6727 */ &vreg140, &preg0, &mem134, &bcst0, NULL, // VCVTTPS2QQ VREG:w:s64=$ZMMr PREG:r:Z=$Kk MEM:r:f32=$mem256 BCST=$BCST
  /* 6732 */ &vreg39, &preg0, &vreg16, NULL, // VCVTTPS2UDQ VREG:w:u32=$XMMr PREG:r:Z=$Kk VREG:r:f32=$XMMm
  /* 6736 */ &vreg39, &preg0, &mem113, &bcst0, NULL, // VCVTTPS2UDQ VREG:w:u32=$XMMr PREG:r:Z=$Kk MEM:r:f32=$mem128 BCST=$BCST
  /* 6741 */ &vreg110, &preg0, &vreg58, NULL, // VCVTTPS2UDQ VREG:w:u32=$YMMr PREG:r:Z=$Kk VREG:r:f32=$YMMm
  /* 6745 */ &vreg110, &preg0, &mem134, &bcst0, NULL, // VCVTTPS2UDQ VREG:w:u32=$YMMr PREG:r:Z=$Kk MEM:r:f32=$mem256 BCST=$BCST
  /* 6750 */ &vreg112, &preg0, &vreg61, &rc0, NULL, // VCVTPS2UDQ VREG:w:u32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMm RC=$RC
  /* 6755 */ &vreg112, &preg0, &vreg61, NULL, // VCVTTPS2UDQ VREG:w:u32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMm
  /* 6759 */ &vreg112, &preg0, &mem135, &bcst0, NULL, // VCVTTPS2UDQ VREG:w:u32=$ZMMr PREG:r:Z=$Kk MEM:r:f32=$mem512 BCST=$BCST
  /* 6764 */ &vreg26, &preg0, &vreg16, NULL, // VCVTTPS2UQQ VREG:w:u64=$XMMr PREG:r:Z=$Kk VREG:r:f32=$XMMm
  /* 6768 */ &vreg26, &preg0, &mem114, &bcst0, NULL, // VCVTTPS2UQQ VREG:w:u64=$XMMr PREG:r:Z=$Kk MEM:r:f32=$mem64 BCST=$BCST
  /* 6773 */ &vreg69, &preg0, &vreg16, NULL, // VCVTTPS2UQQ VREG:w:u64=$YMMr PREG:r:Z=$Kk VREG:r:f32=$XMMm
  /* 6777 */ &vreg69, &preg0, &mem113, &bcst0, NULL, // VCVTTPS2UQQ VREG:w:u64=$YMMr PREG:r:Z=$Kk MEM:r:f32=$mem128 BCST=$BCST
  /* 6782 */ &vreg114, &preg0, &vreg58, &rc0, NULL, // VCVTPS2UQQ VREG:w:u64=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$YMMm RC=$RC
  /* 6787 */ &vreg114, &preg0, &vreg58, NULL, // VCVTTPS2UQQ VREG:w:u64=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$YMMm
  /* 6791 */ &vreg114, &preg0, &mem134, &bcst0, NULL, // VCVTTPS2UQQ VREG:w:u64=$ZMMr PREG:r:Z=$Kk MEM:r:f32=$mem256 BCST=$BCST
  /* 6796 */ &vreg7, &preg0, &vreg45, NULL, // VCVTUQQ2PS VREG:w:f32=$XMMr PREG:r:Z=$Kk VREG:r:u64=$XMMm
  /* 6800 */ &vreg7, &preg0, &mem95, &bcst0, NULL, // VCVTUQQ2PS VREG:w:f32=$XMMr PREG:r:Z=$Kk MEM:r:u64=$mem128 BCST=$BCST
  /* 6805 */ &vreg7, &preg0, &vreg5, NULL, // VCVTUQQ2PS VREG:w:f32=$XMMr PREG:r:Z=$Kk VREG:r:u64=$YMMm
  /* 6809 */ &vreg7, &preg0, &mem55, &bcst0, NULL, // VCVTUQQ2PS VREG:w:f32=$XMMr PREG:r:Z=$Kk MEM:r:u64=$mem256 BCST=$BCST
  /* 6814 */ &vreg9, &preg0, &vreg85, &rc0, NULL, // VCVTUQQ2PS VREG:w:f32=$YMMr PREG:r:Z=$Kk VREG:r:u64=$ZMMm RC=$RC
  /* 6819 */ &vreg9, &preg0, &vreg85, NULL, // VCVTUQQ2PS VREG:w:f32=$YMMr PREG:r:Z=$Kk VREG:r:u64=$ZMMm
  /* 6823 */ &vreg9, &preg0, &mem141, &bcst0, NULL, // VCVTUQQ2PS VREG:w:f32=$YMMr PREG:r:Z=$Kk MEM:r:u64=$mem512 BCST=$BCST
  /* 6828 */ &reg278, &vreg14, NULL, // VCVTTSD2USI REG:w:u32=$GPR32r VREG:r:f64=$XMMm
  /* 6831 */ &reg278, &vreg14, &rc0, NULL, // VCVTSD2USI REG:w:u32=$GPR32r VREG:r:f64=$XMMm RC=$RC
  /* 6835 */ &reg278, &mem76, NULL, // VCVTTSD2USI REG:w:u32=$GPR32r MEM:r:f64=$mem64
  /* 6838 */ &reg282, &vreg14, NULL, // VCVTTSD2USI REG:w:u64=$GPR64r VREG:r:f64=$XMMm
  /* 6841 */ &reg282, &vreg14, &rc0, NULL, // VCVTSD2USI REG:w:u64=$GPR64r VREG:r:f64=$XMMm RC=$RC
  /* 6845 */ &reg282, &mem76, NULL, // VCVTTSD2USI REG:w:u64=$GPR64r MEM:r:f64=$mem64
  /* 6848 */ &reg278, &vreg16, NULL, // VCVTTSS2USI REG:w:u32=$GPR32r VREG:r:f32=$XMMm
  /* 6851 */ &reg278, &vreg16, &rc0, NULL, // VCVTSS2USI REG:w:u32=$GPR32r VREG:r:f32=$XMMm RC=$RC
  /* 6855 */ &reg278, &mem75, NULL, // VCVTTSS2USI REG:w:u32=$GPR32r MEM:r:f32=$mem32
  /* 6858 */ &reg282, &vreg16, NULL, // VCVTTSS2USI REG:w:u64=$GPR64r VREG:r:f32=$XMMm
  /* 6861 */ &reg282, &vreg16, &rc0, NULL, // VCVTSS2USI REG:w:u64=$GPR64r VREG:r:f32=$XMMm RC=$RC
  /* 6865 */ &reg282, &mem75, NULL, // VCVTTSS2USI REG:w:u64=$GPR64r MEM:r:f32=$mem32
  /* 6868 */ &vreg140, &preg0, &vreg55, &sae0, NULL, // VCVTTPD2QQ VREG:w:s64=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMm SAE=$SAE
  /* 6873 */ &vreg110, &preg0, &vreg55, &sae0, NULL, // VCVTTPD2UDQ VREG:w:u32=$YMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMm SAE=$SAE
  /* 6878 */ &vreg114, &preg0, &vreg55, &sae0, NULL, // VCVTTPD2UQQ VREG:w:u64=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMm SAE=$SAE
  /* 6883 */ &vreg140, &preg0, &vreg58, &sae0, NULL, // VCVTTPS2QQ VREG:w:s64=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$YMMm SAE=$SAE
  /* 6888 */ &vreg112, &preg0, &vreg61, &sae0, NULL, // VCVTTPS2UDQ VREG:w:u32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMm SAE=$SAE
  /* 6893 */ &vreg114, &preg0, &vreg58, &sae0, NULL, // VCVTTPS2UQQ VREG:w:u64=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$YMMm SAE=$SAE
  /* 6898 */ &reg278, &vreg14, &sae0, NULL, // VCVTTSD2USI REG:w:u32=$GPR32r VREG:r:f64=$XMMm SAE=$SAE
  /* 6902 */ &reg282, &vreg14, &sae0, NULL, // VCVTTSD2USI REG:w:u64=$GPR64r VREG:r:f64=$XMMm SAE=$SAE
  /* 6906 */ &reg278, &vreg16, &sae0, NULL, // VCVTTSS2USI REG:w:u32=$GPR32r VREG:r:f32=$XMMm SAE=$SAE
  /* 6910 */ &reg282, &vreg16, &sae0, NULL, // VCVTTSS2USI REG:w:u64=$GPR64r VREG:r:f32=$XMMm SAE=$SAE
  /* 6914 */ &vreg19, &preg0, &vreg41, NULL, // VCVTUDQ2PD VREG:w:f64=$XMMr PREG:r:Z=$Kk VREG:r:u32=$XMMm
  /* 6918 */ &vreg19, &preg0, &mem96, &bcst0, NULL, // VCVTUDQ2PD VREG:w:f64=$XMMr PREG:r:Z=$Kk MEM:r:u32=$mem64 BCST=$BCST
  /* 6923 */ &vreg50, &preg0, &vreg41, NULL, // VCVTUDQ2PD VREG:w:f64=$YMMr PREG:r:Z=$Kk VREG:r:u32=$XMMm
  /* 6927 */ &vreg50, &preg0, &mem131, &bcst0, NULL, // VCVTUDQ2PD VREG:w:f64=$YMMr PREG:r:Z=$Kk MEM:r:u32=$mem128 BCST=$BCST
  /* 6932 */ &vreg53, &preg0, &vreg111, NULL, // VCVTUDQ2PD VREG:w:f64=$ZMMr PREG:r:Z=$Kk VREG:r:u32=$YMMm
  /* 6936 */ &vreg53, &preg0, &mem156, &bcst0, NULL, // VCVTUDQ2PD VREG:w:f64=$ZMMr PREG:r:Z=$Kk MEM:r:u32=$mem256 BCST=$BCST
  /* 6941 */ &vreg7, &preg0, &vreg41, NULL, // VCVTUDQ2PS VREG:w:f32=$XMMr PREG:r:Z=$Kk VREG:r:u32=$XMMm
  /* 6945 */ &vreg7, &preg0, &mem131, &bcst0, NULL, // VCVTUDQ2PS VREG:w:f32=$XMMr PREG:r:Z=$Kk MEM:r:u32=$mem128 BCST=$BCST
  /* 6950 */ &vreg9, &preg0, &vreg111, NULL, // VCVTUDQ2PS VREG:w:f32=$YMMr PREG:r:Z=$Kk VREG:r:u32=$YMMm
  /* 6954 */ &vreg9, &preg0, &mem156, &bcst0, NULL, // VCVTUDQ2PS VREG:w:f32=$YMMr PREG:r:Z=$Kk MEM:r:u32=$mem256 BCST=$BCST
  /* 6959 */ &vreg59, &preg0, &vreg113, &rc0, NULL, // VCVTUDQ2PS VREG:w:f32=$ZMMr PREG:r:Z=$Kk VREG:r:u32=$ZMMm RC=$RC
  /* 6964 */ &vreg59, &preg0, &vreg113, NULL, // VCVTUDQ2PS VREG:w:f32=$ZMMr PREG:r:Z=$Kk VREG:r:u32=$ZMMm
  /* 6968 */ &vreg59, &preg0, &mem48, &bcst0, NULL, // VCVTUDQ2PS VREG:w:f32=$ZMMr PREG:r:Z=$Kk MEM:r:u32=$mem512 BCST=$BCST
  /* 6973 */ &vreg19, &preg0, &vreg45, NULL, // VCVTUQQ2PD VREG:w:f64=$XMMr PREG:r:Z=$Kk VREG:r:u64=$XMMm
  /* 6977 */ &vreg19, &preg0, &mem95, &bcst0, NULL, // VCVTUQQ2PD VREG:w:f64=$XMMr PREG:r:Z=$Kk MEM:r:u64=$mem128 BCST=$BCST
  /* 6982 */ &vreg50, &preg0, &vreg5, NULL, // VCVTUQQ2PD VREG:w:f64=$YMMr PREG:r:Z=$Kk VREG:r:u64=$YMMm
  /* 6986 */ &vreg50, &preg0, &mem55, &bcst0, NULL, // VCVTUQQ2PD VREG:w:f64=$YMMr PREG:r:Z=$Kk MEM:r:u64=$mem256 BCST=$BCST
  /* 6991 */ &vreg53, &preg0, &vreg85, &rc0, NULL, // VCVTUQQ2PD VREG:w:f64=$ZMMr PREG:r:Z=$Kk VREG:r:u64=$ZMMm RC=$RC
  /* 6996 */ &vreg53, &preg0, &vreg85, NULL, // VCVTUQQ2PD VREG:w:f64=$ZMMr PREG:r:Z=$Kk VREG:r:u64=$ZMMm
  /* 7000 */ &vreg53, &preg0, &mem141, &bcst0, NULL, // VCVTUQQ2PD VREG:w:f64=$ZMMr PREG:r:Z=$Kk MEM:r:u64=$mem512 BCST=$BCST
  /* 7005 */ &vreg19, &vreg49, &reg206, NULL, // VCVTUSI2SD VREG:w:f64=$XMMr VREG:r:f64=$XMMn        REG:r:u32=$GPR32m
  /* 7009 */ &vreg19, &vreg49, &mem110, NULL, // VCVTUSI2SD VREG:w:f64=$XMMr VREG:r:f64=$XMMn        MEM:r:u32=$mem32
  /* 7013 */ &vreg19, &vreg49, &reg208, NULL, // VCVTUSI2SD VREG:w:f64=$XMMr VREG:r:f64=$XMMn        REG:r:u64=$GPR64m
  /* 7017 */ &vreg19, &vreg49, &rc0, &reg208, NULL, // VCVTUSI2SD VREG:w:f64=$XMMr VREG:r:f64=$XMMn RC=$RC REG:r:u64=$GPR64m
  /* 7022 */ &vreg19, &vreg49, &mem124, NULL, // VCVTUSI2SD VREG:w:f64=$XMMr VREG:r:f64=$XMMn        MEM:r:u64=$mem64
  /* 7026 */ &vreg7, &vreg56, &reg206, NULL, // VCVTUSI2SS VREG:w:f32=$XMMr VREG:r:f32=$XMMn        REG:r:u32=$GPR32m
  /* 7030 */ &vreg7, &vreg56, &rc0, &reg206, NULL, // VCVTUSI2SS VREG:w:f32=$XMMr VREG:r:f32=$XMMn RC=$RC REG:r:u32=$GPR32m
  /* 7035 */ &vreg7, &vreg56, &mem110, NULL, // VCVTUSI2SS VREG:w:f32=$XMMr VREG:r:f32=$XMMn        MEM:r:u32=$mem32
  /* 7039 */ &vreg7, &vreg56, &reg208, NULL, // VCVTUSI2SS VREG:w:f32=$XMMr VREG:r:f32=$XMMn        REG:r:u64=$GPR64m
  /* 7043 */ &vreg7, &vreg56, &rc0, &reg208, NULL, // VCVTUSI2SS VREG:w:f32=$XMMr VREG:r:f32=$XMMn RC=$RC REG:r:u64=$GPR64m
  /* 7048 */ &vreg7, &vreg56, &mem124, NULL, // VCVTUSI2SS VREG:w:f32=$XMMr VREG:r:f32=$XMMn        MEM:r:u64=$mem64
  /* 7052 */ &vreg40, &preg0, &vreg80, &vreg28, &imm0, NULL, // VDBPSADBW VREG:w:u16=$XMMr PREG:r:Z=$Kk VREG:r:u8=$XMMn VREG:r:u8=$XMMm  IMM:u8=$uimm8
  /* 7058 */ &vreg40, &preg0, &vreg80, &mem122, &imm0, NULL, // VDBPSADBW VREG:w:u16=$XMMr PREG:r:Z=$Kk VREG:r:u8=$XMMn MEM:r:u8=$mem128 IMM:u8=$uimm8
  /* 7064 */ &vreg126, &preg0, &vreg82, &vreg86, &imm0, NULL, // VDBPSADBW VREG:w:u16=$YMMr PREG:r:Z=$Kk VREG:r:u8=$YMMn VREG:r:u8=$YMMm  IMM:u8=$uimm8
  /* 7070 */ &vreg126, &preg0, &vreg82, &mem142, &imm0, NULL, // VDBPSADBW VREG:w:u16=$YMMr PREG:r:Z=$Kk VREG:r:u8=$YMMn MEM:r:u8=$mem256 IMM:u8=$uimm8
  /* 7076 */ &vreg128, &preg0, &vreg84, &vreg87, &imm0, NULL, // VDBPSADBW VREG:w:u16=$ZMMr PREG:r:Z=$Kk VREG:r:u8=$ZMMn VREG:r:u8=$ZMMm  IMM:u8=$uimm8
  /* 7082 */ &vreg128, &preg0, &vreg84, &mem143, &imm0, NULL, // VDBPSADBW VREG:w:u16=$ZMMr PREG:r:Z=$Kk VREG:r:u8=$ZMMn MEM:r:u8=$mem512 IMM:u8=$uimm8
  /* 7088 */ &vreg15, &preg0, &vreg130, &vreg41, NULL, // VDPBF16PS VREG:rw:f32=$XMMr PREG:r:Z=$Kk VREG:r:u32=$XMMn VREG:r:u32=$XMMm
  /* 7093 */ &vreg15, &preg0, &vreg130, &mem131, &bcst0, NULL, // VDPBF16PS VREG:rw:f32=$XMMr PREG:r:Z=$Kk VREG:r:u32=$XMMn MEM:r:u32=$mem128 BCST=$BCST
  /* 7099 */ &vreg182, &preg0, &vreg131, &vreg111, NULL, // VDPBF16PS VREG:rw:f32=$YMMr PREG:r:Z=$Kk VREG:r:u32=$YMMn VREG:r:u32=$YMMm
  /* 7104 */ &vreg182, &preg0, &vreg131, &mem156, &bcst0, NULL, // VDPBF16PS VREG:rw:f32=$YMMr PREG:r:Z=$Kk VREG:r:u32=$YMMn MEM:r:u32=$mem256 BCST=$BCST
  /* 7110 */ &vreg183, &preg0, &vreg150, &vreg113, NULL, // VDPBF16PS VREG:rw:f32=$ZMMr PREG:r:Z=$Kk VREG:r:u32=$ZMMn VREG:r:u32=$ZMMm
  /* 7115 */ &vreg183, &preg0, &vreg150, &mem48, &bcst0, NULL, // VDPBF16PS VREG:rw:f32=$ZMMr PREG:r:Z=$Kk VREG:r:u32=$ZMMn MEM:r:u32=$mem512 BCST=$BCST
  /* 7121 */ &vreg22, &vreg90, &imm6, NULL, // VEXTRACTF128  VREG:w:f64=$XMMm  VREG:r:f64=$YMMr IMM:u8=$index
  /* 7125 */ &mem118, &vreg90, &imm6, NULL, // VEXTRACTF128  MEM:w:f64=$mem128 VREG:r:f64=$YMMr IMM:u8=$index
  /* 7129 */ &vreg24, &preg0, &vreg12, &imm6, NULL, // VEXTRACTF32X4 VREG:w:f32=$XMMm  PREG:r:Z=$Kk     VREG:r:f32=$YMMr IMM:u8=$index
  /* 7134 */ &mem119, &preg0, &vreg12, &imm6, NULL, // VEXTRACTF32X4 MEM:w:f32=$mem128 PREG:r:Z=$Kk     VREG:r:f32=$YMMr IMM:u8=$index
  /* 7139 */ &vreg24, &preg0, &vreg95, &imm6, NULL, // VEXTRACTF32X4 VREG:w:f32=$XMMm  PREG:r:Z=$Kk     VREG:r:f32=$ZMMr IMM:u8=$index
  /* 7144 */ &mem119, &preg0, &vreg95, &imm6, NULL, // VEXTRACTF32X4 MEM:w:f32=$mem128 PREG:r:Z=$Kk     VREG:r:f32=$ZMMr IMM:u8=$index
  /* 7149 */ &vreg93, &preg0, &vreg95, &imm6, NULL, // VEXTRACTF32X8 VREG:w:f32=$YMMm  PREG:r:Z=$Kk     VREG:r:f32=$ZMMr IMM:u8=$index
  /* 7154 */ &mem148, &preg0, &vreg95, &imm6, NULL, // VEXTRACTF32X8 MEM:w:f32=$mem256 PREG:r:Z=$Kk     VREG:r:f32=$ZMMr IMM:u8=$index
  /* 7159 */ &vreg22, &preg0, &vreg90, &imm6, NULL, // VEXTRACTF64X2 VREG:w:f64=$XMMm  PREG:r:Z=$Kk     VREG:r:f64=$YMMr IMM:u8=$index
  /* 7164 */ &mem118, &preg0, &vreg90, &imm6, NULL, // VEXTRACTF64X2 MEM:w:f64=$mem128 PREG:r:Z=$Kk     VREG:r:f64=$YMMr IMM:u8=$index
  /* 7169 */ &vreg22, &preg0, &vreg92, &imm6, NULL, // VEXTRACTF64X2 VREG:w:f64=$XMMm  PREG:r:Z=$Kk     VREG:r:f64=$ZMMr IMM:u8=$index
  /* 7174 */ &mem118, &preg0, &vreg92, &imm6, NULL, // VEXTRACTF64X2 MEM:w:f64=$mem128 PREG:r:Z=$Kk     VREG:r:f64=$ZMMr IMM:u8=$index
  /* 7179 */ &vreg89, &preg0, &vreg92, &imm6, NULL, // VEXTRACTF64X4 VREG:w:f64=$YMMm  PREG:r:Z=$Kk     VREG:r:f64=$ZMMr IMM:u8=$index
  /* 7184 */ &mem146, &preg0, &vreg92, &imm6, NULL, // VEXTRACTF64X4 MEM:w:f64=$mem256 PREG:r:Z=$Kk     VREG:r:f64=$ZMMr IMM:u8=$index
  /* 7189 */ &reg292, &vreg184, &imm6, NULL, // VEXTRACTI128  REG:w:u128=$XMMm   VREG:r:u128=$YMMr IMM:u8=$index
  /* 7193 */ &mem174, &vreg184, &imm6, NULL, // VEXTRACTI128  MEM:w:u128=$mem128 VREG:r:u128=$YMMr IMM:u8=$index
  /* 7197 */ &vreg98, &preg0, &vreg103, &imm6, NULL, // VEXTRACTI32X4 VREG:w:u32=$XMMm   PREG:r:Z=$Kk      VREG:r:u32=$YMMr IMM:u8=$index
  /* 7202 */ &mem151, &preg0, &vreg103, &imm6, NULL, // VEXTRACTI32X4 MEM:w:u32=$mem128  PREG:r:Z=$Kk      VREG:r:u32=$YMMr IMM:u8=$index
  /* 7207 */ &vreg98, &preg0, &vreg107, &imm6, NULL, // VEXTRACTI32X4 VREG:w:u32=$XMMm   PREG:r:Z=$Kk      VREG:r:u32=$ZMMr IMM:u8=$index
  /* 7212 */ &mem151, &preg0, &vreg107, &imm6, NULL, // VEXTRACTI32X4 MEM:w:u32=$mem128  PREG:r:Z=$Kk      VREG:r:u32=$ZMMr IMM:u8=$index
  /* 7217 */ &vreg102, &preg0, &vreg107, &imm6, NULL, // VEXTRACTI32X8 VREG:w:u32=$YMMm   PREG:r:Z=$Kk      VREG:r:u32=$ZMMr IMM:u8=$index
  /* 7222 */ &mem152, &preg0, &vreg107, &imm6, NULL, // VEXTRACTI32X8 MEM:w:u32=$mem256  PREG:r:Z=$Kk      VREG:r:u32=$ZMMr IMM:u8=$index
  /* 7227 */ &vreg100, &preg0, &vreg105, &imm6, NULL, // VEXTRACTI64X2 VREG:w:u64=$XMMm   PREG:r:Z=$Kk      VREG:r:u64=$YMMr IMM:u8=$index
  /* 7232 */ &mem93, &preg0, &vreg105, &imm6, NULL, // VEXTRACTI64X2 MEM:w:u64=$mem128  PREG:r:Z=$Kk      VREG:r:u64=$YMMr IMM:u8=$index
  /* 7237 */ &vreg100, &preg0, &vreg109, &imm6, NULL, // VEXTRACTI64X2 VREG:w:u64=$XMMm   PREG:r:Z=$Kk      VREG:r:u64=$ZMMr IMM:u8=$index
  /* 7242 */ &mem93, &preg0, &vreg109, &imm6, NULL, // VEXTRACTI64X2 MEM:w:u64=$mem128  PREG:r:Z=$Kk      VREG:r:u64=$ZMMr IMM:u8=$index
  /* 7247 */ &vreg104, &preg0, &vreg109, &imm6, NULL, // VEXTRACTI64X4 VREG:w:u64=$YMMm   PREG:r:Z=$Kk      VREG:r:u64=$ZMMr IMM:u8=$index
  /* 7252 */ &mem153, &preg0, &vreg109, &imm6, NULL, // VEXTRACTI64X4 MEM:w:u64=$mem256  PREG:r:Z=$Kk      VREG:r:u64=$ZMMr IMM:u8=$index
  /* 7257 */ &vreg13, &preg0, &vreg49, &vreg14, &fexcpc0, NULL, // VFIXUPIMMSD VREG:rw:f64=$XMMr PREG:r:Z=$Kk VREG:r:f64=$XMMn VREG:r:f64=$XMMm          FEXCPC:r:u8=$fexcpc
  /* 7263 */ &vreg13, &preg0, &vreg49, &mem112, &bcst0, &fexcpc0, NULL, // VFIXUPIMMPD VREG:rw:f64=$XMMr PREG:r:Z=$Kk VREG:r:f64=$XMMn MEM:r:f64=$mem128 BCST=$BCST FEXCPC:r:u8=$fexcpc
  /* 7270 */ &vreg185, &preg0, &vreg51, &vreg52, &fexcpc0, NULL, // VFIXUPIMMPD VREG:rw:f64=$YMMr PREG:r:Z=$Kk VREG:r:f64=$YMMn VREG:r:f64=$YMMm             FEXCPC:r:u8=$fexcpc
  /* 7276 */ &vreg185, &preg0, &vreg51, &mem132, &bcst0, &fexcpc0, NULL, // VFIXUPIMMPD VREG:rw:f64=$YMMr PREG:r:Z=$Kk VREG:r:f64=$YMMn MEM:r:f64=$mem256 BCST=$BCST FEXCPC:r:u8=$fexcpc
  /* 7283 */ &vreg186, &preg0, &vreg54, &vreg55, &sae0, &fexcpc0, NULL, // VFIXUPIMMPD VREG:rw:f64=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMn VREG:r:f64=$ZMMm SAE=$SAE    FEXCPC:r:u8=$fexcpc
  /* 7290 */ &vreg186, &preg0, &vreg54, &vreg55, &fexcpc0, NULL, // VFIXUPIMMPD VREG:rw:f64=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMn VREG:r:f64=$ZMMm             FEXCPC:r:u8=$fexcpc
  /* 7296 */ &vreg186, &preg0, &vreg54, &mem133, &bcst0, &fexcpc0, NULL, // VFIXUPIMMPD VREG:rw:f64=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMn MEM:r:f64=$mem512 BCST=$BCST FEXCPC:r:u8=$fexcpc
  /* 7303 */ &vreg15, &preg0, &vreg56, &vreg16, &fexcpc0, NULL, // VFIXUPIMMSS VREG:rw:f32=$XMMr PREG:r:Z=$Kk VREG:r:f32=$XMMn VREG:r:f32=$XMMm          FEXCPC:r:u8=$fexcpc
  /* 7309 */ &vreg15, &preg0, &vreg56, &mem113, &bcst0, &fexcpc0, NULL, // VFIXUPIMMPS VREG:rw:f32=$XMMr PREG:r:Z=$Kk VREG:r:f32=$XMMn MEM:r:f32=$mem128 BCST=$BCST FEXCPC:r:u8=$fexcpc
  /* 7316 */ &vreg182, &preg0, &vreg57, &vreg58, &fexcpc0, NULL, // VFIXUPIMMPS VREG:rw:f32=$YMMr PREG:r:Z=$Kk VREG:r:f32=$YMMn VREG:r:f32=$YMMm             FEXCPC:r:u8=$fexcpc
  /* 7322 */ &vreg182, &preg0, &vreg57, &mem134, &bcst0, &fexcpc0, NULL, // VFIXUPIMMPS VREG:rw:f32=$YMMr PREG:r:Z=$Kk VREG:r:f32=$YMMn MEM:r:f32=$mem256 BCST=$BCST FEXCPC:r:u8=$fexcpc
  /* 7329 */ &vreg183, &preg0, &vreg60, &vreg61, &sae0, &fexcpc0, NULL, // VFIXUPIMMPS VREG:rw:f32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMn VREG:r:f32=$ZMMm SAE=$SAE    FEXCPC:r:u8=$fexcpc
  /* 7336 */ &vreg183, &preg0, &vreg60, &vreg61, &fexcpc0, NULL, // VFIXUPIMMPS VREG:rw:f32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMn VREG:r:f32=$ZMMm             FEXCPC:r:u8=$fexcpc
  /* 7342 */ &vreg183, &preg0, &vreg60, &mem135, &bcst0, &fexcpc0, NULL, // VFIXUPIMMPS VREG:rw:f32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMn MEM:r:f32=$mem512 BCST=$BCST FEXCPC:r:u8=$fexcpc
  /* 7349 */ &vreg13, &preg0, &vreg49, &vreg14, &sae0, &fexcpc0, NULL, // VFIXUPIMMSD VREG:rw:f64=$XMMr PREG:r:Z=$Kk VREG:r:f64=$XMMn VREG:r:f64=$XMMm SAE=$SAE FEXCPC:r:u8=$fexcpc
  /* 7356 */ &vreg13, &preg0, &vreg49, &mem76, &fexcpc0, NULL, // VFIXUPIMMSD VREG:rw:f64=$XMMr PREG:r:Z=$Kk VREG:r:f64=$XMMn MEM:r:f64=$mem64          FEXCPC:r:u8=$fexcpc
  /* 7362 */ &vreg15, &preg0, &vreg56, &vreg16, &sae0, &fexcpc0, NULL, // VFIXUPIMMSS VREG:rw:f32=$XMMr PREG:r:Z=$Kk VREG:r:f32=$XMMn VREG:r:f32=$XMMm SAE=$SAE FEXCPC:r:u8=$fexcpc
  /* 7369 */ &vreg15, &preg0, &vreg56, &mem75, &fexcpc0, NULL, // VFIXUPIMMSS VREG:rw:f32=$XMMr PREG:r:Z=$Kk VREG:r:f32=$XMMn MEM:r:f32=$mem32          FEXCPC:r:u8=$fexcpc
  /* 7375 */ &vreg13, &preg0, &vreg49, &vreg14, NULL, // VPERMT2PD VREG:rw:f64=$XMMr PREG:r:Z=$Kk VREG:r:f64=$XMMn VREG:r:f64=$XMMm
  /* 7380 */ &vreg13, &preg0, &vreg49, &mem112, &bcst0, NULL, // VPERMT2PD VREG:rw:f64=$XMMr PREG:r:Z=$Kk VREG:r:f64=$XMMn MEM:r:f64=$mem128 BCST=$BCST
  /* 7386 */ &vreg13, &vreg49, &vreg14, NULL, // VFNMSUB231PD VREG:rw:f64=$XMMr VREG:r:f64=$XMMn VREG:r:f64=$XMMm
  /* 7390 */ &vreg185, &vreg51, &vreg52, NULL, // VFNMSUB231PD VREG:rw:f64=$YMMr VREG:r:f64=$YMMn VREG:r:f64=$YMMm
  /* 7394 */ &vreg13, &vreg49, &mem112, NULL, // VFNMSUB231PD VREG:rw:f64=$XMMr VREG:r:f64=$XMMn MEM:r:f64=$mem128
  /* 7398 */ &vreg185, &vreg51, &mem132, NULL, // VFNMSUB231PD VREG:rw:f64=$YMMr VREG:r:f64=$YMMn MEM:r:f64=$mem256
  /* 7402 */ &vreg185, &preg0, &vreg51, &vreg52, NULL, // VPERMT2PD VREG:rw:f64=$YMMr PREG:r:Z=$Kk VREG:r:f64=$YMMn VREG:r:f64=$YMMm
  /* 7407 */ &vreg185, &preg0, &vreg51, &mem132, &bcst0, NULL, // VPERMT2PD VREG:rw:f64=$YMMr PREG:r:Z=$Kk VREG:r:f64=$YMMn MEM:r:f64=$mem256 BCST=$BCST
  /* 7413 */ &vreg186, &preg0, &vreg54, &vreg55, &rc0, NULL, // VSUBRPD VREG:rw:f64=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMn VREG:r:f64=$ZMMm RC=$RC
  /* 7419 */ &vreg186, &preg0, &vreg54, &vreg55, NULL, // VPXORQ VREG:rw:f64=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMn VREG:r:f64=$ZMMm
  /* 7424 */ &vreg186, &preg0, &vreg54, &mem133, &bcst0, NULL, // VPERMT2PD VREG:rw:f64=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMn MEM:r:f64=$mem512 BCST=$BCST
  /* 7430 */ &vreg15, &preg0, &vreg56, &vreg16, NULL, // VPERMT2PS VREG:rw:f32=$XMMr PREG:r:Z=$Kk VREG:r:f32=$XMMn VREG:r:f32=$XMMm
  /* 7435 */ &vreg15, &preg0, &vreg56, &mem113, &bcst0, NULL, // VPERMT2PS VREG:rw:f32=$XMMr PREG:r:Z=$Kk VREG:r:f32=$XMMn MEM:r:f32=$mem128 BCST=$BCST
  /* 7441 */ &vreg15, &vreg56, &vreg16, NULL, // VFNMSUB231PS VREG:rw:f32=$XMMr VREG:r:f32=$XMMn VREG:r:f32=$XMMm
  /* 7445 */ &vreg182, &vreg57, &vreg58, NULL, // VFNMSUB231PS VREG:rw:f32=$YMMr VREG:r:f32=$YMMn VREG:r:f32=$YMMm
  /* 7449 */ &vreg15, &vreg56, &mem113, NULL, // VFNMSUB231PS VREG:rw:f32=$XMMr VREG:r:f32=$XMMn MEM:r:f32=$mem128
  /* 7453 */ &vreg182, &vreg57, &mem134, NULL, // VFNMSUB231PS VREG:rw:f32=$YMMr VREG:r:f32=$YMMn MEM:r:f32=$mem256
  /* 7457 */ &vreg182, &preg0, &vreg57, &vreg58, NULL, // VPERMT2PS VREG:rw:f32=$YMMr PREG:r:Z=$Kk VREG:r:f32=$YMMn VREG:r:f32=$YMMm
  /* 7462 */ &vreg182, &preg0, &vreg57, &mem134, &bcst0, NULL, // VPERMT2PS VREG:rw:f32=$YMMr PREG:r:Z=$Kk VREG:r:f32=$YMMn MEM:r:f32=$mem256 BCST=$BCST
  /* 7468 */ &vreg183, &preg0, &vreg60, &vreg61, &rc0, NULL, // VSUBRPS VREG:rw:f32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMn VREG:r:f32=$ZMMm RC=$RC
  /* 7474 */ &vreg183, &preg0, &vreg60, &vreg61, NULL, // VSCALEPS VREG:rw:f32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMn VREG:r:f32=$ZMMm
  /* 7479 */ &vreg183, &preg0, &vreg60, &mem135, &bcst0, NULL, // VPERMT2PS VREG:rw:f32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMn MEM:r:f32=$mem512 BCST=$BCST
  /* 7485 */ &vreg13, &preg0, &vreg49, &vreg14, &rc0, NULL, // VFNMSUB231SD VREG:rw:f64=$XMMr PREG:r:Z=$Kk    VREG:r:f64=$XMMn VREG:r:f64=$XMMm RC=$RC
  /* 7491 */ &vreg13, &preg0, &vreg49, &mem76, NULL, // VFNMSUB231SD VREG:rw:f64=$XMMr PREG:r:Z=$Kk    VREG:r:f64=$XMMn MEM:r:f64=$mem64
  /* 7496 */ &vreg13, &reg283, &reg241, NULL, // VFNMSUB231SD VREG:rw:f64=$XMMr REG:r:f64=$XMMn REG:r:f64=$XMMm
  /* 7500 */ &vreg13, &reg283, &mem76, NULL, // VFNMSUB231SD VREG:rw:f64=$XMMr REG:r:f64=$XMMn MEM:r:f64=$mem64
  /* 7504 */ &vreg15, &reg293, &reg243, NULL, // VFNMSUB231SS VREG:rw:f32=$XMMr REG:r:f32=$XMMn REG:r:f32=$XMMm
  /* 7508 */ &vreg15, &reg293, &mem75, NULL, // VFNMSUB231SS VREG:rw:f32=$XMMr REG:r:f32=$XMMn MEM:r:f32=$mem32
  /* 7512 */ &vreg15, &preg0, &vreg56, &vreg16, &rc0, NULL, // VFNMSUB231SS VREG:rw:f32=$XMMr PREG:r:Z=$Kk    VREG:r:f32=$XMMn VREG:r:f32=$XMMm RC=$RC
  /* 7518 */ &vreg15, &preg0, &vreg56, &mem75, NULL, // VFNMSUB231SS VREG:rw:f32=$XMMr PREG:r:Z=$Kk    VREG:r:f32=$XMMn MEM:r:f32=$mem32
  /* 7523 */ &reg272, &preg0, &vreg14, &fpct0, NULL, // VFPCLASSPD REG:w=$Kr PREG:r:Z=$Kk VREG:r:f64=$XMMm             FPCT:r:u8=$fpct
  /* 7528 */ &reg272, &preg0, &mem112, &bcst0, &fpct0, NULL, // VFPCLASSPD REG:w=$Kr PREG:r:Z=$Kk MEM:r:f64=$mem128 BCST=$BCST FPCT:r:u8=$fpct
  /* 7534 */ &reg272, &preg0, &vreg52, &fpct0, NULL, // VFPCLASSPD REG:w=$Kr PREG:r:Z=$Kk VREG:r:f64=$YMMm             FPCT:r:u8=$fpct
  /* 7539 */ &reg272, &preg0, &mem132, &bcst0, &fpct0, NULL, // VFPCLASSPD REG:w=$Kr PREG:r:Z=$Kk MEM:r:f64=$mem256 BCST=$BCST FPCT:r:u8=$fpct
  /* 7545 */ &reg272, &preg0, &vreg55, &fpct0, NULL, // VFPCLASSPD REG:w=$Kr PREG:r:Z=$Kk VREG:r:f64=$ZMMm             FPCT:r:u8=$fpct
  /* 7550 */ &reg272, &preg0, &mem133, &bcst0, &fpct0, NULL, // VFPCLASSPD REG:w=$Kr PREG:r:Z=$Kk MEM:r:f64=$mem512 BCST=$BCST FPCT:r:u8=$fpct
  /* 7556 */ &reg272, &preg0, &vreg16, &fpct0, NULL, // VFPCLASSPS REG:w=$Kr PREG:r:Z=$Kk VREG:r:f32=$XMMm             FPCT:r:u8=$fpct
  /* 7561 */ &reg272, &preg0, &mem113, &bcst0, &fpct0, NULL, // VFPCLASSPS REG:w=$Kr PREG:r:Z=$Kk MEM:r:f32=$mem128 BCST=$BCST FPCT:r:u8=$fpct
  /* 7567 */ &reg272, &preg0, &vreg58, &fpct0, NULL, // VFPCLASSPS REG:w=$Kr PREG:r:Z=$Kk VREG:r:f32=$YMMm             FPCT:r:u8=$fpct
  /* 7572 */ &reg272, &preg0, &mem134, &bcst0, &fpct0, NULL, // VFPCLASSPS REG:w=$Kr PREG:r:Z=$Kk MEM:r:f32=$mem256 BCST=$BCST FPCT:r:u8=$fpct
  /* 7578 */ &reg272, &preg0, &vreg61, &fpct0, NULL, // VFPCLASSPS REG:w=$Kr PREG:r:Z=$Kk VREG:r:f32=$ZMMm             FPCT:r:u8=$fpct
  /* 7583 */ &reg272, &preg0, &mem135, &bcst0, &fpct0, NULL, // VFPCLASSPS REG:w=$Kr PREG:r:Z=$Kk MEM:r:f32=$mem512 BCST=$BCST FPCT:r:u8=$fpct
  /* 7589 */ &reg272, &preg0, &vreg14, &imm0, NULL, // VFPCLASSSD REG:w=$Kr PREG:r:Z=$Kk VREG:r:f64=$XMMm IMM:u8=$uimm8
  /* 7594 */ &reg272, &preg0, &mem76, &imm0, NULL, // VFPCLASSSD REG:w=$Kr PREG:r:Z=$Kk MEM:r:f64=$mem64 IMM:u8=$uimm8
  /* 7599 */ &reg272, &preg0, &vreg16, &imm0, NULL, // VFPCLASSSS REG:w=$Kr PREG:r:Z=$Kk VREG:r:f32=$XMMm IMM:u8=$uimm8
  /* 7604 */ &reg272, &preg0, &mem75, &imm0, NULL, // VFPCLASSSS REG:w=$Kr PREG:r:Z=$Kk MEM:r:f32=$mem32 IMM:u8=$uimm8
  /* 7609 */ &vreg19, &preg1, &mem175, NULL, // VGATHERQPD VREG:w:f64=$XMMr   PREG:rw=$Kk      MEM:r:f64=$vmx64
  /* 7613 */ &vreg7, &preg1, &mem176, NULL, // VGATHERQPS VREG:w:f32=$XMMr   PREG:rw=$Kk      MEM:r:f32=$vmx32
  /* 7617 */ &vreg187, &mem175, &vreg188, NULL, // VGATHERQPD VREG:crw:f64=$XMMr MEM:r:f64=$vmx64 VREG:rw:s64=$XMMn
  /* 7621 */ &vreg189, &mem175, &vreg190, NULL, // VGATHERDPD VREG:crw:f64=$YMMr MEM:r:f64=$vmx64 VREG:rw:s64=$YMMn
  /* 7625 */ &vreg191, &mem176, &vreg192, NULL, // VGATHERQPS VREG:crw:f32=$XMMr MEM:r:f32=$vmx32 VREG:rw:s32=$XMMn
  /* 7629 */ &vreg193, &mem177, &vreg194, NULL, // VGATHERDPS VREG:crw:f32=$YMMr MEM:r:f32=$vmy32 VREG:rw:s32=$YMMn
  /* 7633 */ &vreg50, &preg1, &mem175, NULL, // VGATHERDPD VREG:w:f64=$YMMr   PREG:rw=$Kk      MEM:r:f64=$vmx64
  /* 7637 */ &vreg9, &preg1, &mem177, NULL, // VGATHERDPS VREG:w:f32=$YMMr   PREG:rw=$Kk      MEM:r:f32=$vmy32
  /* 7641 */ &vreg53, &preg1, &mem178, NULL, // VGATHERDPD VREG:w:f64=$ZMMr   PREG:rw=$Kk      MEM:r:f64=$vmy64
  /* 7645 */ &vreg59, &preg1, &mem179, NULL, // VGATHERDPS VREG:w:f32=$ZMMr   PREG:rw=$Kk      MEM:r:f32=$vmz32
  /* 7649 */ &vreg50, &preg1, &mem178, NULL, // VGATHERQPD VREG:w:f64=$YMMr   PREG:rw=$Kk      MEM:r:f64=$vmy64
  /* 7653 */ &vreg7, &preg1, &mem177, NULL, // VGATHERQPS VREG:w:f32=$XMMr   PREG:rw=$Kk      MEM:r:f32=$vmy32
  /* 7657 */ &vreg53, &preg1, &mem180, NULL, // VGATHERQPD VREG:w:f64=$ZMMr   PREG:rw=$Kk      MEM:r:f64=$vmz64
  /* 7661 */ &vreg9, &preg1, &mem179, NULL, // VGATHERQPS VREG:w:f32=$YMMr   PREG:rw=$Kk      MEM:r:f32=$vmz32
  /* 7665 */ &vreg189, &mem178, &vreg190, NULL, // VGATHERQPD VREG:crw:f64=$YMMr MEM:r:f64=$vmy64 VREG:rw:s64=$YMMn
  /* 7669 */ &vreg191, &mem177, &vreg192, NULL, // VGATHERQPS VREG:crw:f32=$XMMr MEM:r:f32=$vmy32 VREG:rw:s32=$XMMn
  /* 7673 */ &vreg53, &preg0, &vreg55, &sae0, NULL, // VRSQRT28PD VREG:w:f64=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMm SAE=$SAE
  /* 7678 */ &vreg59, &preg0, &vreg61, &sae0, NULL, // VRSQRT28PS VREG:w:f32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMm SAE=$SAE
  /* 7683 */ &vreg19, &preg0, &vreg14, &signc0, NULL, // VGETMANTPD VREG:w:f64=$XMMr PREG:r:Z=$Kk VREG:r:f64=$XMMm             SIGNC:r:u8=$signc
  /* 7688 */ &vreg19, &preg0, &mem112, &bcst0, &signc0, NULL, // VGETMANTPD VREG:w:f64=$XMMr PREG:r:Z=$Kk MEM:r:f64=$mem128 BCST=$BCST SIGNC:r:u8=$signc
  /* 7694 */ &vreg50, &preg0, &vreg52, &signc0, NULL, // VGETMANTPD VREG:w:f64=$YMMr PREG:r:Z=$Kk VREG:r:f64=$YMMm             SIGNC:r:u8=$signc
  /* 7699 */ &vreg50, &preg0, &mem132, &bcst0, &signc0, NULL, // VGETMANTPD VREG:w:f64=$YMMr PREG:r:Z=$Kk MEM:r:f64=$mem256 BCST=$BCST SIGNC:r:u8=$signc
  /* 7705 */ &vreg53, &preg0, &vreg55, &sae0, &signc0, NULL, // VGETMANTPD VREG:w:f64=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMm SAE=$SAE    SIGNC:r:u8=$signc
  /* 7711 */ &vreg53, &preg0, &vreg55, &signc0, NULL, // VGETMANTPD VREG:w:f64=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMm             SIGNC:r:u8=$signc
  /* 7716 */ &vreg53, &preg0, &mem133, &bcst0, &signc0, NULL, // VGETMANTPD VREG:w:f64=$ZMMr PREG:r:Z=$Kk MEM:r:f64=$mem512 BCST=$BCST SIGNC:r:u8=$signc
  /* 7722 */ &vreg7, &preg0, &vreg16, &signc0, NULL, // VGETMANTPS VREG:w:f32=$XMMr PREG:r:Z=$Kk VREG:r:f32=$XMMm             SIGNC:r:u8=$signc
  /* 7727 */ &vreg7, &preg0, &mem113, &bcst0, &signc0, NULL, // VGETMANTPS VREG:w:f32=$XMMr PREG:r:Z=$Kk MEM:r:f32=$mem128 BCST=$BCST SIGNC:r:u8=$signc
  /* 7733 */ &vreg9, &preg0, &vreg58, &signc0, NULL, // VGETMANTPS VREG:w:f32=$YMMr PREG:r:Z=$Kk VREG:r:f32=$YMMm             SIGNC:r:u8=$signc
  /* 7738 */ &vreg9, &preg0, &mem134, &bcst0, &signc0, NULL, // VGETMANTPS VREG:w:f32=$YMMr PREG:r:Z=$Kk MEM:r:f32=$mem256 BCST=$BCST SIGNC:r:u8=$signc
  /* 7744 */ &vreg59, &preg0, &vreg61, &sae0, &signc0, NULL, // VGETMANTPS VREG:w:f32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMm SAE=$SAE    SIGNC:r:u8=$signc
  /* 7750 */ &vreg59, &preg0, &vreg61, &signc0, NULL, // VGETMANTPS VREG:w:f32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMm             SIGNC:r:u8=$signc
  /* 7755 */ &vreg59, &preg0, &mem135, &bcst0, &signc0, NULL, // VGETMANTPS VREG:w:f32=$ZMMr PREG:r:Z=$Kk MEM:r:f32=$mem512 BCST=$BCST SIGNC:r:u8=$signc
  /* 7761 */ &vreg19, &preg0, &vreg49, &vreg14, &signc0, NULL, // VGETMANTSD VREG:w:f64=$XMMr PREG:r:Z=$Kk VREG:r:f64=$XMMn VREG:r:f64=$XMMm          SIGNC:r:u8=$signc
  /* 7767 */ &vreg19, &preg0, &vreg49, &vreg14, &sae0, &signc0, NULL, // VGETMANTSD VREG:w:f64=$XMMr PREG:r:Z=$Kk VREG:r:f64=$XMMn VREG:r:f64=$XMMm SAE=$SAE SIGNC:r:u8=$signc
  /* 7774 */ &vreg19, &preg0, &vreg49, &mem76, &signc0, NULL, // VGETMANTSD VREG:w:f64=$XMMr PREG:r:Z=$Kk VREG:r:f64=$XMMn MEM:r:f64=$mem64          SIGNC:r:u8=$signc
  /* 7780 */ &vreg7, &preg0, &vreg56, &vreg16, &signc0, NULL, // VGETMANTSS VREG:w:f32=$XMMr PREG:r:Z=$Kk VREG:r:f32=$XMMn VREG:r:f32=$XMMm          SIGNC:r:u8=$signc
  /* 7786 */ &vreg7, &preg0, &vreg56, &vreg16, &sae0, &signc0, NULL, // VGETMANTSS VREG:w:f32=$XMMr PREG:r:Z=$Kk VREG:r:f32=$XMMn VREG:r:f32=$XMMm SAE=$SAE SIGNC:r:u8=$signc
  /* 7793 */ &vreg7, &preg0, &vreg56, &mem75, &signc0, NULL, // VGETMANTSS VREG:w:f32=$XMMr PREG:r:Z=$Kk VREG:r:f32=$XMMn MEM:r:f32=$mem32          SIGNC:r:u8=$signc
  /* 7799 */ &vreg50, &vreg51, &vreg14, &imm6, NULL, // VINSERTF128  VREG:w:f64=$YMMr VREG:r:f64=$YMMn VREG:r:f64=$XMMm                           IMM:u8=$index
  /* 7804 */ &vreg50, &vreg51, &mem112, &sbcst0, &imm6, NULL, // VINSERTF128  VREG:w:f64=$YMMr VREG:r:f64=$YMMn MEM:r:f64=$mem128 SBCST:SUPP={FROM=2 TO=4} IMM:u8=$index
  /* 7810 */ &vreg9, &preg0, &vreg57, &vreg16, &imm6, NULL, // VINSERTF32X4 VREG:w:f32=$YMMr PREG:r:Z=$Kk     VREG:r:f32=$YMMn                           VREG:r:f32=$XMMm  IMM:u8=$index
  /* 7816 */ &vreg9, &preg0, &vreg57, &mem113, &imm6, NULL, // VINSERTF32X4 VREG:w:f32=$YMMr PREG:r:Z=$Kk     VREG:r:f32=$YMMn                           MEM:r:f32=$mem128 IMM:u8=$index
  /* 7822 */ &vreg59, &preg0, &vreg60, &vreg16, &imm6, NULL, // VINSERTF32X4 VREG:w:f32=$ZMMr PREG:r:Z=$Kk     VREG:r:f32=$ZMMn                           VREG:r:f32=$XMMm  IMM:u8=$index
  /* 7828 */ &vreg59, &preg0, &vreg60, &mem113, &imm6, NULL, // VINSERTF32X4 VREG:w:f32=$ZMMr PREG:r:Z=$Kk     VREG:r:f32=$ZMMn                           MEM:r:f32=$mem128 IMM:u8=$index
  /* 7834 */ &vreg59, &preg0, &vreg60, &vreg58, &imm6, NULL, // VINSERTF32X8 VREG:w:f32=$ZMMr PREG:r:Z=$Kk     VREG:r:f32=$ZMMn                           VREG:r:f32=$YMMm  IMM:u8=$index
  /* 7840 */ &vreg59, &preg0, &vreg60, &mem134, &imm6, NULL, // VINSERTF32X8 VREG:w:f32=$ZMMr PREG:r:Z=$Kk     VREG:r:f32=$ZMMn                           MEM:r:f32=$mem256 IMM:u8=$index
  /* 7846 */ &vreg50, &preg0, &vreg51, &vreg14, &imm6, NULL, // VINSERTF64X2 VREG:w:f64=$YMMr PREG:r:Z=$Kk     VREG:r:f64=$YMMn                           VREG:r:f64=$XMMm  IMM:u8=$index
  /* 7852 */ &vreg50, &preg0, &vreg51, &mem112, &imm6, NULL, // VINSERTF64X2 VREG:w:f64=$YMMr PREG:r:Z=$Kk     VREG:r:f64=$YMMn                           MEM:r:f64=$mem128 IMM:u8=$index
  /* 7858 */ &vreg53, &preg0, &vreg54, &vreg14, &imm6, NULL, // VINSERTF64X2 VREG:w:f64=$ZMMr PREG:r:Z=$Kk     VREG:r:f64=$ZMMn                           VREG:r:f64=$XMMm  IMM:u8=$index
  /* 7864 */ &vreg53, &preg0, &vreg54, &mem112, &imm6, NULL, // VINSERTF64X2 VREG:w:f64=$ZMMr PREG:r:Z=$Kk     VREG:r:f64=$ZMMn                           MEM:r:f64=$mem128 IMM:u8=$index
  /* 7870 */ &vreg53, &preg0, &vreg54, &vreg52, &imm6, NULL, // VINSERTF64X4 VREG:w:f64=$ZMMr PREG:r:Z=$Kk     VREG:r:f64=$ZMMn                           VREG:r:f64=$YMMm  IMM:u8=$index
  /* 7876 */ &vreg53, &preg0, &vreg54, &mem132, &imm6, NULL, // VINSERTF64X4 VREG:w:f64=$ZMMr PREG:r:Z=$Kk     VREG:r:f64=$ZMMn                           MEM:r:f64=$mem256 IMM:u8=$index
  /* 7882 */ &vreg3, &vreg63, &reg271, &imm6, NULL, // VINSERTI128  VREG:w:u128=$YMMr VREG:r:u128=$YMMn REG:r:u128=$XMMm   IMM:u8=$index
  /* 7887 */ &vreg3, &vreg63, &mem136, &imm6, NULL, // VINSERTI128  VREG:w:u128=$YMMr VREG:r:u128=$YMMn MEM:r:u128=$mem128 IMM:u8=$index
  /* 7892 */ &vreg110, &preg0, &vreg131, &vreg41, &imm6, NULL, // VINSERTI32X4 VREG:w:u32=$YMMr  PREG:r:Z=$Kk      VREG:r:u32=$YMMn   VREG:r:u32=$XMMm  IMM:u8=$index
  /* 7898 */ &vreg110, &preg0, &vreg131, &mem131, &imm6, NULL, // VINSERTI32X4 VREG:w:u32=$YMMr  PREG:r:Z=$Kk      VREG:r:u32=$YMMn   MEM:r:u32=$mem128 IMM:u8=$index
  /* 7904 */ &vreg112, &preg0, &vreg150, &vreg41, &imm6, NULL, // VINSERTI32X4 VREG:w:u32=$ZMMr  PREG:r:Z=$Kk      VREG:r:u32=$ZMMn   VREG:r:u32=$XMMm  IMM:u8=$index
  /* 7910 */ &vreg112, &preg0, &vreg150, &mem131, &imm6, NULL, // VINSERTI32X4 VREG:w:u32=$ZMMr  PREG:r:Z=$Kk      VREG:r:u32=$ZMMn   MEM:r:u32=$mem128 IMM:u8=$index
  /* 7916 */ &vreg112, &preg0, &vreg150, &vreg111, &imm6, NULL, // VINSERTI32X8 VREG:w:u32=$ZMMr  PREG:r:Z=$Kk      VREG:r:u32=$ZMMn   VREG:r:u32=$YMMm  IMM:u8=$index
  /* 7922 */ &vreg112, &preg0, &vreg150, &mem156, &imm6, NULL, // VINSERTI32X8 VREG:w:u32=$ZMMr  PREG:r:Z=$Kk      VREG:r:u32=$ZMMn   MEM:r:u32=$mem256 IMM:u8=$index
  /* 7928 */ &vreg69, &preg0, &vreg4, &vreg45, &imm6, NULL, // VINSERTI64X2 VREG:w:u64=$YMMr  PREG:r:Z=$Kk      VREG:r:u64=$YMMn   VREG:r:u64=$XMMm  IMM:u8=$index
  /* 7934 */ &vreg69, &preg0, &vreg4, &mem95, &imm6, NULL, // VINSERTI64X2 VREG:w:u64=$YMMr  PREG:r:Z=$Kk      VREG:r:u64=$YMMn   MEM:r:u64=$mem128 IMM:u8=$index
  /* 7940 */ &vreg114, &preg0, &vreg159, &vreg45, &imm6, NULL, // VINSERTI64X2 VREG:w:u64=$ZMMr  PREG:r:Z=$Kk      VREG:r:u64=$ZMMn   VREG:r:u64=$XMMm  IMM:u8=$index
  /* 7946 */ &vreg114, &preg0, &vreg159, &mem95, &imm6, NULL, // VINSERTI64X2 VREG:w:u64=$ZMMr  PREG:r:Z=$Kk      VREG:r:u64=$ZMMn   MEM:r:u64=$mem128 IMM:u8=$index
  /* 7952 */ &vreg114, &preg0, &vreg159, &vreg5, &imm6, NULL, // VINSERTI64X4 VREG:w:u64=$ZMMr  PREG:r:Z=$Kk      VREG:r:u64=$ZMMn   VREG:r:u64=$YMMm  IMM:u8=$index
  /* 7958 */ &vreg114, &preg0, &vreg159, &mem55, &imm6, NULL, // VINSERTI64X4 VREG:w:u64=$ZMMr  PREG:r:Z=$Kk      VREG:r:u64=$ZMMn   MEM:r:u64=$mem256 IMM:u8=$index
  /* 7964 */ &mem118, &vreg68, &vreg23, NULL, // VMASKMOVPD MEM:w:f64=$mem128 VREG:r:u64=$XMMn VREG:r:f64=$XMMr
  /* 7968 */ &mem146, &vreg4, &vreg90, NULL, // VMASKMOVPD MEM:w:f64=$mem256 VREG:r:u64=$YMMn VREG:r:f64=$YMMr
  /* 7972 */ &vreg19, &vreg68, &mem112, NULL, // VMASKMOVPD VREG:w:f64=$XMMr  VREG:r:u64=$XMMn MEM:r:f64=$mem128
  /* 7976 */ &vreg50, &vreg4, &mem132, NULL, // VMASKMOVPD VREG:w:f64=$YMMr  VREG:r:u64=$YMMn MEM:r:f64=$mem256
  /* 7980 */ &mem119, &vreg62, &vreg11, NULL, // VMASKMOVPS MEM:w:f32=$mem128 VREG:r:s32=$XMMn VREG:r:f32=$XMMr
  /* 7984 */ &mem148, &vreg71, &vreg12, NULL, // VMASKMOVPS MEM:w:f32=$mem256 VREG:r:s32=$YMMn VREG:r:f32=$YMMr
  /* 7988 */ &vreg7, &vreg62, &mem113, NULL, // VMASKMOVPS VREG:w:f32=$XMMr  VREG:r:s32=$XMMn MEM:r:f32=$mem128
  /* 7992 */ &vreg9, &vreg71, &mem134, NULL, // VMASKMOVPS VREG:w:f32=$YMMr  VREG:r:s32=$YMMn MEM:r:f32=$mem256
  /* 7996 */ &reg272, &vreg130, &vreg41, NULL, // VP2INTERSECTD REG:w=$Kr VREG:r:u32=$XMMn VREG:r:u32=$XMMm
  /* 8000 */ &reg272, &vreg130, &mem131, &bcst0, NULL, // VP2INTERSECTD REG:w=$Kr VREG:r:u32=$XMMn MEM:r:u32=$mem128 BCST=$BCST
  /* 8005 */ &reg272, &vreg131, &vreg111, NULL, // VP2INTERSECTD REG:w=$Kr VREG:r:u32=$YMMn VREG:r:u32=$YMMm
  /* 8009 */ &reg272, &vreg131, &mem156, &bcst0, NULL, // VP2INTERSECTD REG:w=$Kr VREG:r:u32=$YMMn MEM:r:u32=$mem256 BCST=$BCST
  /* 8014 */ &reg272, &vreg150, &vreg113, NULL, // VP2INTERSECTD REG:w=$Kr VREG:r:u32=$ZMMn VREG:r:u32=$ZMMm
  /* 8018 */ &reg272, &vreg150, &mem48, &bcst0, NULL, // VP2INTERSECTD REG:w=$Kr VREG:r:u32=$ZMMn MEM:r:u32=$mem512 BCST=$BCST
  /* 8023 */ &reg272, &vreg68, &vreg45, NULL, // VP2INTERSECTQ REG:w=$Kr VREG:r:u64=$XMMn VREG:r:u64=$XMMm
  /* 8027 */ &reg272, &vreg68, &mem95, &bcst0, NULL, // VP2INTERSECTQ REG:w=$Kr VREG:r:u64=$XMMn MEM:r:u64=$mem128 BCST=$BCST
  /* 8032 */ &reg272, &vreg4, &vreg5, NULL, // VP2INTERSECTQ REG:w=$Kr VREG:r:u64=$YMMn VREG:r:u64=$YMMm
  /* 8036 */ &reg272, &vreg4, &mem55, &bcst0, NULL, // VP2INTERSECTQ REG:w=$Kr VREG:r:u64=$YMMn MEM:r:u64=$mem256 BCST=$BCST
  /* 8041 */ &reg272, &vreg159, &vreg85, NULL, // VP2INTERSECTQ REG:w=$Kr VREG:r:u64=$ZMMn VREG:r:u64=$ZMMm
  /* 8045 */ &reg272, &vreg159, &mem141, &bcst0, NULL, // VP2INTERSECTQ REG:w=$Kr VREG:r:u64=$ZMMn MEM:r:u64=$mem512 BCST=$BCST
  /* 8050 */ &vreg39, &vreg130, &vreg41, &imm0, NULL, // VPCOMUD VREG:w:u32=$XMMr VREG:r:u32=$XMMn VREG:r:u32=$XMMm  IMM:u8=$uimm8
  /* 8055 */ &vreg110, &vreg131, &vreg111, &imm0, NULL, // VPBLENDD VREG:w:u32=$YMMr VREG:r:u32=$YMMn VREG:r:u32=$YMMm  IMM:u8=$uimm8
  /* 8060 */ &vreg39, &vreg130, &mem131, &imm0, NULL, // VPCOMUD VREG:w:u32=$XMMr VREG:r:u32=$XMMn MEM:r:u32=$mem128 IMM:u8=$uimm8
  /* 8065 */ &vreg110, &vreg131, &mem156, &imm0, NULL, // VPBLENDD VREG:w:u32=$YMMr VREG:r:u32=$YMMn MEM:r:u32=$mem256 IMM:u8=$uimm8
  /* 8070 */ &vreg3, &mem136, &sbcst0, NULL, // VBROADCASTI128  VREG:w:u128=$YMMr MEM:r:u128=$mem128 SBCST:SUPP={FROM=2 TO=4}
  /* 8074 */ &vreg39, &preg0, &mem96, &sbcst0, NULL, // VBROADCASTI32X2 VREG:w:u32=$XMMr  PREG:r:Z=$Kk                                MEM:r:u32=$mem64 SBCST:SUPP={FROM=2 TO=4}
  /* 8079 */ &vreg110, &preg0, &vreg41, NULL, // VPBROADCASTD    VREG:w:u32=$YMMr  PREG:r:Z=$Kk                                VREG:r:u32=$XMMm
  /* 8083 */ &vreg110, &preg0, &mem96, &sbcst1, NULL, // VBROADCASTI32X2 VREG:w:u32=$YMMr  PREG:r:Z=$Kk                                MEM:r:u32=$mem64 SBCST:SUPP={FROM=2 TO=8}
  /* 8088 */ &vreg112, &preg0, &vreg41, NULL, // VPBROADCASTD    VREG:w:u32=$ZMMr  PREG:r:Z=$Kk                                VREG:r:u32=$XMMm
  /* 8092 */ &vreg112, &preg0, &mem96, &sbcst2, NULL, // VBROADCASTI32X2 VREG:w:u32=$ZMMr  PREG:r:Z=$Kk                                MEM:r:u32=$mem64 SBCST:SUPP={FROM=2 TO=16}
  /* 8097 */ &vreg110, &preg0, &mem131, &sbcst3, NULL, // VBROADCASTI32X4 VREG:w:u32=$YMMr  PREG:r:Z=$Kk                                MEM:r:u32=$mem128 SBCST:SUPP={FROM=4 TO=8}
  /* 8102 */ &vreg112, &preg0, &mem131, &sbcst4, NULL, // VBROADCASTI32X4 VREG:w:u32=$ZMMr  PREG:r:Z=$Kk                                MEM:r:u32=$mem128 SBCST:SUPP={FROM=4 TO=16}
  /* 8107 */ &vreg112, &preg0, &mem156, &sbcst5, NULL, // VBROADCASTI32X8 VREG:w:u32=$ZMMr  PREG:r:Z=$Kk                                MEM:r:u32=$mem256 SBCST:SUPP={FROM=8 TO=16}
  /* 8112 */ &vreg69, &preg0, &mem95, &sbcst0, NULL, // VBROADCASTI64X2 VREG:w:u64=$YMMr  PREG:r:Z=$Kk                                MEM:r:u64=$mem128 SBCST:SUPP={FROM=2 TO=4}
  /* 8117 */ &vreg114, &preg0, &mem95, &sbcst1, NULL, // VBROADCASTI64X2 VREG:w:u64=$ZMMr  PREG:r:Z=$Kk                                MEM:r:u64=$mem128 SBCST:SUPP={FROM=2 TO=8}
  /* 8122 */ &vreg114, &preg0, &mem55, &sbcst3, NULL, // VBROADCASTI64X4 VREG:w:u64=$ZMMr  PREG:r:Z=$Kk                                MEM:r:u64=$mem256 SBCST:SUPP={FROM=4 TO=8}
  /* 8127 */ &vreg79, &preg0, &reg197, NULL, // VPBROADCASTB    VREG:w:u8=$XMMr   PREG:r:Z=$Kk                                REG:r:u8=$GPR32m
  /* 8131 */ &vreg79, &preg0, &mem2, &sbcst8, NULL, // VPBROADCASTB    VREG:w:u8=$XMMr   PREG:r:Z=$Kk                                MEM:r:u8=$mem8 SBCST:SUPP={FROM=1 TO=16}
  /* 8136 */ &vreg79, &reg294, NULL, // VPBROADCASTB    VREG:w:u8=$XMMr   REG:r:u8=$XMMm
  /* 8139 */ &vreg81, &reg294, NULL, // VPBROADCASTB    VREG:w:u8=$YMMr   REG:r:u8=$XMMm
  /* 8142 */ &vreg79, &mem2, &sbcst8, NULL, // VPBROADCASTB    VREG:w:u8=$XMMr   MEM:r:u8=$mem8 SBCST:SUPP={FROM=1 TO=16}
  /* 8146 */ &vreg81, &mem2, &sbcst9, NULL, // VPBROADCASTB    VREG:w:u8=$YMMr   MEM:r:u8=$mem8 SBCST:SUPP={FROM=1 TO=32}
  /* 8150 */ &vreg81, &preg0, &reg197, NULL, // VPBROADCASTB    VREG:w:u8=$YMMr   PREG:r:Z=$Kk                                REG:r:u8=$GPR32m
  /* 8154 */ &vreg81, &preg0, &vreg28, NULL, // VPBROADCASTB    VREG:w:u8=$YMMr   PREG:r:Z=$Kk                                VREG:r:u8=$XMMm
  /* 8158 */ &vreg81, &preg0, &mem2, &sbcst9, NULL, // VPBROADCASTB    VREG:w:u8=$YMMr   PREG:r:Z=$Kk                                MEM:r:u8=$mem8 SBCST:SUPP={FROM=1 TO=32}
  /* 8163 */ &vreg83, &preg0, &reg197, NULL, // VPBROADCASTB    VREG:w:u8=$ZMMr   PREG:r:Z=$Kk                                REG:r:u8=$GPR32m
  /* 8167 */ &vreg83, &preg0, &vreg28, NULL, // VPBROADCASTB    VREG:w:u8=$ZMMr   PREG:r:Z=$Kk                                VREG:r:u8=$XMMm
  /* 8171 */ &vreg83, &preg0, &mem2, &sbcst10, NULL, // VPBROADCASTB    VREG:w:u8=$ZMMr   PREG:r:Z=$Kk                                MEM:r:u8=$mem8 SBCST:SUPP={FROM=1 TO=64}
  /* 8176 */ &vreg39, &preg0, &mem110, &sbcst6, NULL, // VPBROADCASTD    VREG:w:u32=$XMMr  PREG:r:Z=$Kk                                MEM:r:u32=$mem32 SBCST:SUPP={FROM=1 TO=4}
  /* 8181 */ &vreg39, &reg295, NULL, // VPBROADCASTD    VREG:w:u32=$XMMr  REG:r:u32=$XMMm
  /* 8184 */ &vreg110, &reg295, NULL, // VPBROADCASTD    VREG:w:u32=$YMMr  REG:r:u32=$XMMm
  /* 8187 */ &vreg39, &mem110, &sbcst6, NULL, // VPBROADCASTD    VREG:w:u32=$XMMr  MEM:r:u32=$mem32 SBCST:SUPP={FROM=1 TO=4}
  /* 8191 */ &vreg110, &mem110, &sbcst7, NULL, // VPBROADCASTD    VREG:w:u32=$YMMr  MEM:r:u32=$mem32 SBCST:SUPP={FROM=1 TO=8}
  /* 8195 */ &vreg110, &preg0, &mem110, &sbcst7, NULL, // VPBROADCASTD    VREG:w:u32=$YMMr  PREG:r:Z=$Kk                                MEM:r:u32=$mem32 SBCST:SUPP={FROM=1 TO=8}
  /* 8200 */ &vreg112, &preg0, &mem110, &sbcst8, NULL, // VPBROADCASTD    VREG:w:u32=$ZMMr  PREG:r:Z=$Kk                                MEM:r:u32=$mem32 SBCST:SUPP={FROM=1 TO=16}
  /* 8205 */ &vreg26, &preg0, &mem124, &sbcst11, NULL, // VPBROADCASTQ    VREG:w:u64=$XMMr  PREG:r:Z=$Kk                                MEM:r:u64=$mem64 SBCST:SUPP={FROM=1 TO=2}
  /* 8210 */ &vreg26, &reg257, NULL, // VPBROADCASTQ    VREG:w:u64=$XMMr  REG:r:u64=$XMMm
  /* 8213 */ &vreg69, &reg257, NULL, // VPBROADCASTQ    VREG:w:u64=$YMMr  REG:r:u64=$XMMm
  /* 8216 */ &vreg26, &mem124, &sbcst11, NULL, // VPBROADCASTQ    VREG:w:u64=$XMMr  MEM:r:u64=$mem64 SBCST:SUPP={FROM=1 TO=2}
  /* 8220 */ &vreg69, &mem124, &sbcst6, NULL, // VPBROADCASTQ    VREG:w:u64=$YMMr  MEM:r:u64=$mem64 SBCST:SUPP={FROM=1 TO=4}
  /* 8224 */ &vreg69, &preg0, &vreg45, NULL, // VPBROADCASTQ    VREG:w:u64=$YMMr  PREG:r:Z=$Kk                                VREG:r:u64=$XMMm
  /* 8228 */ &vreg69, &preg0, &mem124, &sbcst6, NULL, // VPBROADCASTQ    VREG:w:u64=$YMMr  PREG:r:Z=$Kk                                MEM:r:u64=$mem64 SBCST:SUPP={FROM=1 TO=4}
  /* 8233 */ &vreg114, &preg0, &vreg45, NULL, // VPBROADCASTQ    VREG:w:u64=$ZMMr  PREG:r:Z=$Kk                                VREG:r:u64=$XMMm
  /* 8237 */ &vreg114, &preg0, &mem124, &sbcst7, NULL, // VPBROADCASTQ    VREG:w:u64=$ZMMr  PREG:r:Z=$Kk                                MEM:r:u64=$mem64 SBCST:SUPP={FROM=1 TO=8}
  /* 8242 */ &vreg40, &preg0, &reg290, NULL, // VPBROADCASTW    VREG:w:u16=$XMMr  PREG:r:Z=$Kk                                REG:r:u16=$GPR32m
  /* 8246 */ &vreg40, &preg0, &mem107, &sbcst7, NULL, // VPBROADCASTW    VREG:w:u16=$XMMr  PREG:r:Z=$Kk                                MEM:r:u16=$mem16 SBCST:SUPP={FROM=1 TO=8}
  /* 8251 */ &vreg40, &reg296, NULL, // VPBROADCASTW    VREG:w:u16=$XMMr  REG:r:u16=$XMMm
  /* 8254 */ &vreg126, &reg296, NULL, // VPBROADCASTW    VREG:w:u16=$YMMr  REG:r:u16=$XMMm
  /* 8257 */ &vreg40, &mem107, &sbcst7, NULL, // VPBROADCASTW    VREG:w:u16=$XMMr  MEM:r:u16=$mem16 SBCST:SUPP={FROM=1 TO=8}
  /* 8261 */ &vreg126, &mem107, &sbcst8, NULL, // VPBROADCASTW    VREG:w:u16=$YMMr  MEM:r:u16=$mem16 SBCST:SUPP={FROM=1 TO=16}
  /* 8265 */ &vreg126, &preg0, &reg290, NULL, // VPBROADCASTW    VREG:w:u16=$YMMr  PREG:r:Z=$Kk                                REG:r:u16=$GPR32m
  /* 8269 */ &vreg126, &preg0, &vreg32, NULL, // VPBROADCASTW    VREG:w:u16=$YMMr  PREG:r:Z=$Kk                                VREG:r:u16=$XMMm
  /* 8273 */ &vreg126, &preg0, &mem107, &sbcst8, NULL, // VPBROADCASTW    VREG:w:u16=$YMMr  PREG:r:Z=$Kk                                MEM:r:u16=$mem16 SBCST:SUPP={FROM=1 TO=16}
  /* 8278 */ &vreg128, &preg0, &reg290, NULL, // VPBROADCASTW    VREG:w:u16=$ZMMr  PREG:r:Z=$Kk                                REG:r:u16=$GPR32m
  /* 8282 */ &vreg128, &preg0, &vreg32, NULL, // VPBROADCASTW    VREG:w:u16=$ZMMr  PREG:r:Z=$Kk                                VREG:r:u16=$XMMm
  /* 8286 */ &vreg128, &preg0, &mem107, &sbcst9, NULL, // VPBROADCASTW    VREG:w:u16=$ZMMr  PREG:r:Z=$Kk                                MEM:r:u16=$mem16 SBCST:SUPP={FROM=1 TO=32}
  /* 8291 */ &vreg39, &preg0, &reg206, NULL, // VPBROADCASTD    VREG:w:u32=$XMMr  PREG:r:Z=$Kk                                REG:r:u32=$GPR32m
  /* 8295 */ &vreg26, &preg0, &reg208, NULL, // VPBROADCASTQ    VREG:w:u64=$XMMr  PREG:r:Z=$Kk                                REG:r:u64=$GPR64m
  /* 8299 */ &vreg110, &preg0, &reg206, NULL, // VPBROADCASTD    VREG:w:u32=$YMMr  PREG:r:Z=$Kk                                REG:r:u32=$GPR32m
  /* 8303 */ &vreg69, &preg0, &reg208, NULL, // VPBROADCASTQ    VREG:w:u64=$YMMr  PREG:r:Z=$Kk                                REG:r:u64=$GPR64m
  /* 8307 */ &vreg112, &preg0, &reg206, NULL, // VPBROADCASTD    VREG:w:u32=$ZMMr  PREG:r:Z=$Kk                                REG:r:u32=$GPR32m
  /* 8311 */ &vreg114, &preg0, &reg208, NULL, // VPBROADCASTQ    VREG:w:u64=$ZMMr  PREG:r:Z=$Kk                                REG:r:u64=$GPR64m
  /* 8315 */ &vreg26, &reg281, NULL, // VPBROADCASTMB2Q VREG:w:u64=$XMMr REG:r:u64=$Km
  /* 8318 */ &vreg69, &reg281, NULL, // VPBROADCASTMB2Q VREG:w:u64=$YMMr REG:r:u64=$Km
  /* 8321 */ &vreg114, &reg281, NULL, // VPBROADCASTMB2Q VREG:w:u64=$ZMMr REG:r:u64=$Km
  /* 8324 */ &vreg39, &reg280, NULL, // VPBROADCASTMW2D VREG:w:u32=$XMMr REG:r:u32=$Km
  /* 8327 */ &vreg110, &reg280, NULL, // VPBROADCASTMW2D VREG:w:u32=$YMMr REG:r:u32=$Km
  /* 8330 */ &vreg112, &reg280, NULL, // VPBROADCASTMW2D VREG:w:u32=$ZMMr REG:r:u32=$Km
  /* 8333 */ &reg272, &preg0, &vreg154, &vreg35, &cc0, NULL, // VPCMPB  REG:w=$Kr PREG:r:Z=$Kk VREG:r:s8=$XMMn VREG:r:s8=$XMMm  CC:u8=$cc3
  /* 8339 */ &reg272, &preg0, &vreg154, &mem126, &cc0, NULL, // VPCMPB  REG:w=$Kr PREG:r:Z=$Kk VREG:r:s8=$XMMn MEM:r:s8=$mem128 CC:u8=$cc3
  /* 8345 */ &reg272, &preg0, &vreg155, &vreg133, &cc0, NULL, // VPCMPB  REG:w=$Kr PREG:r:Z=$Kk VREG:r:s8=$YMMn VREG:r:s8=$YMMm  CC:u8=$cc3
  /* 8351 */ &reg272, &preg0, &vreg155, &mem165, &cc0, NULL, // VPCMPB  REG:w=$Kr PREG:r:Z=$Kk VREG:r:s8=$YMMn MEM:r:s8=$mem256 CC:u8=$cc3
  /* 8357 */ &reg272, &preg0, &vreg156, &vreg136, &cc0, NULL, // VPCMPB  REG:w=$Kr PREG:r:Z=$Kk VREG:r:s8=$ZMMn VREG:r:s8=$ZMMm  CC:u8=$cc3
  /* 8363 */ &reg272, &preg0, &vreg156, &mem166, &cc0, NULL, // VPCMPB  REG:w=$Kr PREG:r:Z=$Kk VREG:r:s8=$ZMMn MEM:r:s8=$mem512 CC:u8=$cc3
  /* 8369 */ &reg272, &preg0, &vreg80, &vreg28, &cc0, NULL, // VPCMPUB REG:w=$Kr PREG:r:Z=$Kk VREG:r:u8=$XMMn VREG:r:u8=$XMMm  CC:u8=$cc3
  /* 8375 */ &reg272, &preg0, &vreg80, &mem122, &cc0, NULL, // VPCMPUB REG:w=$Kr PREG:r:Z=$Kk VREG:r:u8=$XMMn MEM:r:u8=$mem128 CC:u8=$cc3
  /* 8381 */ &reg272, &preg0, &vreg82, &vreg86, &cc0, NULL, // VPCMPUB REG:w=$Kr PREG:r:Z=$Kk VREG:r:u8=$YMMn VREG:r:u8=$YMMm  CC:u8=$cc3
  /* 8387 */ &reg272, &preg0, &vreg82, &mem142, &cc0, NULL, // VPCMPUB REG:w=$Kr PREG:r:Z=$Kk VREG:r:u8=$YMMn MEM:r:u8=$mem256 CC:u8=$cc3
  /* 8393 */ &reg272, &preg0, &vreg84, &vreg87, &cc0, NULL, // VPCMPUB REG:w=$Kr PREG:r:Z=$Kk VREG:r:u8=$ZMMn VREG:r:u8=$ZMMm  CC:u8=$cc3
  /* 8399 */ &reg272, &preg0, &vreg84, &mem143, &cc0, NULL, // VPCMPUB REG:w=$Kr PREG:r:Z=$Kk VREG:r:u8=$ZMMn MEM:r:u8=$mem512 CC:u8=$cc3
  /* 8405 */ &reg272, &preg0, &vreg62, &vreg1, &cc0, NULL, // VPCMPD  REG:w=$Kr PREG:r:Z=$Kk VREG:r:s32=$XMMn VREG:r:s32=$XMMm             CC:u8=$cc3
  /* 8411 */ &reg272, &preg0, &vreg62, &mem6, &bcst0, &cc0, NULL, // VPCMPD  REG:w=$Kr PREG:r:Z=$Kk VREG:r:s32=$XMMn MEM:r:s32=$mem128 BCST=$BCST CC:u8=$cc3
  /* 8418 */ &reg272, &preg0, &vreg71, &vreg72, &cc0, NULL, // VPCMPD  REG:w=$Kr PREG:r:Z=$Kk VREG:r:s32=$YMMn VREG:r:s32=$YMMm             CC:u8=$cc3
  /* 8424 */ &reg272, &preg0, &vreg71, &mem139, &bcst0, &cc0, NULL, // VPCMPD  REG:w=$Kr PREG:r:Z=$Kk VREG:r:s32=$YMMn MEM:r:s32=$mem256 BCST=$BCST CC:u8=$cc3
  /* 8431 */ &reg272, &preg0, &vreg146, &vreg77, &cc0, NULL, // VPCMPD REG:w=$Kr PREG:r:Z=$Kk VREG:r:s32=$ZMMn VREG:r:s32=$ZMMm                CC:u8=$cc3
  /* 8437 */ &reg272, &preg0, &vreg146, &mem140, &bcst0, &cc0, NULL, // VPCMPD  REG:w=$Kr PREG:r:Z=$Kk VREG:r:s32=$ZMMn MEM:r:s32=$mem512 BCST=$BCST CC:u8=$cc3
  /* 8444 */ &reg272, &preg0, &vreg130, &vreg41, &cc0, NULL, // VPCMPUD REG:w=$Kr PREG:r:Z=$Kk VREG:r:u32=$XMMn VREG:r:u32=$XMMm             CC:u8=$cc3
  /* 8450 */ &reg272, &preg0, &vreg130, &mem131, &bcst0, &cc0, NULL, // VPCMPUD REG:w=$Kr PREG:r:Z=$Kk VREG:r:u32=$XMMn MEM:r:u32=$mem128 BCST=$BCST CC:u8=$cc3
  /* 8457 */ &reg272, &preg0, &vreg131, &vreg111, &cc0, NULL, // VPCMPUD REG:w=$Kr PREG:r:Z=$Kk VREG:r:u32=$YMMn VREG:r:u32=$YMMm             CC:u8=$cc3
  /* 8463 */ &reg272, &preg0, &vreg131, &mem156, &bcst0, &cc0, NULL, // VPCMPUD REG:w=$Kr PREG:r:Z=$Kk VREG:r:u32=$YMMn MEM:r:u32=$mem256 BCST=$BCST CC:u8=$cc3
  /* 8470 */ &reg272, &preg0, &vreg150, &vreg113, &cc0, NULL, // VPCMPUD REG:w=$Kr PREG:r:Z=$Kk VREG:r:u32=$ZMMn VREG:r:u32=$ZMMm                CC:u8=$cc3
  /* 8476 */ &reg272, &preg0, &vreg150, &mem48, &bcst0, &cc0, NULL, // VPCMPUD REG:w=$Kr PREG:r:Z=$Kk VREG:r:u32=$ZMMn MEM:r:u32=$mem512 BCST=$BCST CC:u8=$cc3
  /* 8483 */ &reg272, &preg0, &vreg157, &vreg137, &cc0, NULL, // VPCMPQ  REG:w=$Kr PREG:r:Z=$Kk VREG:r:s64=$XMMn VREG:r:s64=$XMMm             CC:u8=$cc3
  /* 8489 */ &reg272, &preg0, &vreg157, &mem167, &bcst0, &cc0, NULL, // VPCMPQ  REG:w=$Kr PREG:r:Z=$Kk VREG:r:s64=$XMMn MEM:r:s64=$mem128 BCST=$BCST CC:u8=$cc3
  /* 8496 */ &reg272, &preg0, &vreg158, &vreg139, &cc0, NULL, // VPCMPQ  REG:w=$Kr PREG:r:Z=$Kk VREG:r:s64=$YMMn VREG:r:s64=$YMMm             CC:u8=$cc3
  /* 8502 */ &reg272, &preg0, &vreg158, &mem168, &bcst0, &cc0, NULL, // VPCMPQ  REG:w=$Kr PREG:r:Z=$Kk VREG:r:s64=$YMMn MEM:r:s64=$mem256 BCST=$BCST CC:u8=$cc3
  /* 8509 */ &reg272, &preg0, &vreg162, &vreg141, &cc0, NULL, // VPCMPQ  REG:w=$Kr PREG:r:Z=$Kk VREG:r:s64=$ZMMn VREG:r:s64=$ZMMm             CC:u8=$cc3
  /* 8515 */ &reg272, &preg0, &vreg162, &mem97, &bcst0, &cc0, NULL, // VPCMPQ  REG:w=$Kr PREG:r:Z=$Kk VREG:r:s64=$ZMMn MEM:r:s64=$mem512 BCST=$BCST CC:u8=$cc3
  /* 8522 */ &reg272, &preg0, &vreg68, &vreg45, &cc0, NULL, // VPCMPUQ REG:w=$Kr PREG:r:Z=$Kk VREG:r:u64=$XMMn VREG:r:u64=$XMMm             CC:u8=$cc3
  /* 8528 */ &reg272, &preg0, &vreg68, &mem95, &bcst0, &cc0, NULL, // VPCMPUQ REG:w=$Kr PREG:r:Z=$Kk VREG:r:u64=$XMMn MEM:r:u64=$mem128 BCST=$BCST CC:u8=$cc3
  /* 8535 */ &reg272, &preg0, &vreg4, &vreg5, &cc0, NULL, // VPCMPUQ REG:w=$Kr PREG:r:Z=$Kk VREG:r:u64=$YMMn VREG:r:u64=$YMMm             CC:u8=$cc3
  /* 8541 */ &reg272, &preg0, &vreg4, &mem55, &bcst0, &cc0, NULL, // VPCMPUQ REG:w=$Kr PREG:r:Z=$Kk VREG:r:u64=$YMMn MEM:r:u64=$mem256 BCST=$BCST CC:u8=$cc3
  /* 8548 */ &reg272, &preg0, &vreg159, &vreg85, &cc0, NULL, // VPCMPUQ REG:w=$Kr PREG:r:Z=$Kk VREG:r:u64=$ZMMn VREG:r:u64=$ZMMm             CC:u8=$cc3
  /* 8554 */ &reg272, &preg0, &vreg159, &mem141, &bcst0, &cc0, NULL, // VPCMPUQ REG:w=$Kr PREG:r:Z=$Kk VREG:r:u64=$ZMMn MEM:r:u64=$mem512 BCST=$BCST CC:u8=$cc3
  /* 8561 */ &reg272, &preg0, &vreg151, &vreg32, &cc0, NULL, // VPCMPUW REG:w=$Kr PREG:r:Z=$Kk VREG:r:u16=$XMMn VREG:r:u16=$XMMm  CC:u8=$cc3
  /* 8567 */ &reg272, &preg0, &vreg151, &mem125, &cc0, NULL, // VPCMPUW REG:w=$Kr PREG:r:Z=$Kk VREG:r:u16=$XMMn MEM:r:u16=$mem128 CC:u8=$cc3
  /* 8573 */ &reg272, &preg0, &vreg152, &vreg127, &cc0, NULL, // VPCMPUW REG:w=$Kr PREG:r:Z=$Kk VREG:r:u16=$YMMn VREG:r:u16=$YMMm  CC:u8=$cc3
  /* 8579 */ &reg272, &preg0, &vreg152, &mem163, &cc0, NULL, // VPCMPUW REG:w=$Kr PREG:r:Z=$Kk VREG:r:u16=$YMMn MEM:r:u16=$mem256 CC:u8=$cc3
  /* 8585 */ &reg272, &preg0, &vreg153, &vreg129, &cc0, NULL, // VPCMPUW REG:w=$Kr PREG:r:Z=$Kk VREG:r:u16=$ZMMn VREG:r:u16=$ZMMm  CC:u8=$cc3
  /* 8591 */ &reg272, &preg0, &vreg153, &mem164, &cc0, NULL, // VPCMPUW REG:w=$Kr PREG:r:Z=$Kk VREG:r:u16=$ZMMn MEM:r:u16=$mem512 CC:u8=$cc3
  /* 8597 */ &reg272, &preg0, &vreg147, &vreg30, &cc0, NULL, // VPCMPW  REG:w=$Kr PREG:r:Z=$Kk VREG:r:s16=$XMMn VREG:r:s16=$XMMm  CC:u8=$cc3
  /* 8603 */ &reg272, &preg0, &vreg147, &mem123, &cc0, NULL, // VPCMPW  REG:w=$Kr PREG:r:Z=$Kk VREG:r:s16=$XMMn MEM:r:s16=$mem128 CC:u8=$cc3
  /* 8609 */ &reg272, &preg0, &vreg148, &vreg142, &cc0, NULL, // VPCMPW  REG:w=$Kr PREG:r:Z=$Kk VREG:r:s16=$YMMn VREG:r:s16=$YMMm  CC:u8=$cc3
  /* 8615 */ &reg272, &preg0, &vreg148, &mem169, &cc0, NULL, // VPCMPW  REG:w=$Kr PREG:r:Z=$Kk VREG:r:s16=$YMMn MEM:r:s16=$mem256 CC:u8=$cc3
  /* 8621 */ &reg272, &preg0, &vreg149, &vreg145, &cc0, NULL, // VPCMPW  REG:w=$Kr PREG:r:Z=$Kk VREG:r:s16=$ZMMn VREG:r:s16=$ZMMm  CC:u8=$cc3
  /* 8627 */ &reg272, &preg0, &vreg149, &mem170, &cc0, NULL, // VPCMPW  REG:w=$Kr PREG:r:Z=$Kk VREG:r:s16=$ZMMn MEM:r:s16=$mem512 CC:u8=$cc3
  /* 8633 */ &vreg39, &preg0, &mem131, &bcst0, NULL, // VPOPCNTD VREG:w:u32=$XMMr PREG:r:Z=$Kk MEM:r:u32=$mem128 BCST=$BCST
  /* 8638 */ &vreg26, &preg0, &mem95, &bcst0, NULL, // VPOPCNTQ VREG:w:u64=$XMMr PREG:r:Z=$Kk MEM:r:u64=$mem128 BCST=$BCST
  /* 8643 */ &vreg110, &preg0, &mem156, &bcst0, NULL, // VPOPCNTD VREG:w:u32=$YMMr PREG:r:Z=$Kk MEM:r:u32=$mem256 BCST=$BCST
  /* 8648 */ &vreg69, &preg0, &mem55, &bcst0, NULL, // VPOPCNTQ VREG:w:u64=$YMMr PREG:r:Z=$Kk MEM:r:u64=$mem256 BCST=$BCST
  /* 8653 */ &vreg112, &preg0, &mem48, &bcst0, NULL, // VPOPCNTD VREG:w:u32=$ZMMr PREG:r:Z=$Kk MEM:r:u32=$mem512 BCST=$BCST
  /* 8658 */ &vreg114, &preg0, &mem141, &bcst0, NULL, // VPOPCNTQ VREG:w:u64=$ZMMr PREG:r:Z=$Kk MEM:r:u64=$mem512 BCST=$BCST
  /* 8663 */ &vreg0, &preg0, &vreg80, &vreg41, NULL, // VPDPBUSDS VREG:rw:s32=$XMMr PREG:r:Z=$Kk VREG:r:u8=$XMMn VREG:r:u32=$XMMm
  /* 8668 */ &vreg0, &preg0, &vreg80, &mem131, &bcst0, NULL, // VPDPBUSDS VREG:rw:s32=$XMMr PREG:r:Z=$Kk VREG:r:u8=$XMMn MEM:r:u32=$mem128 BCST=$BCST
  /* 8674 */ &vreg195, &preg0, &vreg82, &vreg111, NULL, // VPDPBUSDS VREG:rw:s32=$YMMr PREG:r:Z=$Kk VREG:r:u8=$YMMn VREG:r:u32=$YMMm
  /* 8679 */ &vreg195, &preg0, &vreg82, &mem156, &bcst0, NULL, // VPDPBUSDS VREG:rw:s32=$YMMr PREG:r:Z=$Kk VREG:r:u8=$YMMn MEM:r:u32=$mem256 BCST=$BCST
  /* 8685 */ &vreg196, &preg0, &vreg84, &vreg113, NULL, // VPDPBUSDS VREG:rw:s32=$ZMMr PREG:r:Z=$Kk VREG:r:u8=$ZMMn VREG:r:u32=$ZMMm
  /* 8690 */ &vreg196, &preg0, &vreg84, &mem48, &bcst0, NULL, // VPDPBUSDS VREG:rw:s32=$ZMMr PREG:r:Z=$Kk VREG:r:u8=$ZMMn MEM:r:u32=$mem512 BCST=$BCST
  /* 8696 */ &vreg0, &preg0, &vreg147, &vreg41, NULL, // VPDPWSSDS VREG:rw:s32=$XMMr PREG:r:Z=$Kk VREG:r:s16=$XMMn VREG:r:u32=$XMMm
  /* 8701 */ &vreg0, &preg0, &vreg147, &mem131, &bcst0, NULL, // VPDPWSSDS VREG:rw:s32=$XMMr PREG:r:Z=$Kk VREG:r:s16=$XMMn MEM:r:u32=$mem128 BCST=$BCST
  /* 8707 */ &vreg195, &preg0, &vreg148, &vreg111, NULL, // VPDPWSSDS VREG:rw:s32=$YMMr PREG:r:Z=$Kk VREG:r:s16=$YMMn VREG:r:u32=$YMMm
  /* 8712 */ &vreg195, &preg0, &vreg148, &mem156, &bcst0, NULL, // VPDPWSSDS VREG:rw:s32=$YMMr PREG:r:Z=$Kk VREG:r:s16=$YMMn MEM:r:u32=$mem256 BCST=$BCST
  /* 8718 */ &vreg196, &preg0, &vreg149, &vreg113, NULL, // VPDPWSSDS VREG:rw:s32=$ZMMr PREG:r:Z=$Kk VREG:r:s16=$ZMMn VREG:r:u32=$ZMMm
  /* 8723 */ &vreg196, &preg0, &vreg149, &mem48, &bcst0, NULL, // VPDPWSSDS VREG:rw:s32=$ZMMr PREG:r:Z=$Kk VREG:r:s16=$ZMMn MEM:r:u32=$mem512 BCST=$BCST
  /* 8729 */ &vreg50, &vreg51, &vreg52, &ctl0, NULL, // VPERM2F128 VREG:w:f64=$YMMr VREG:r:f64=$YMMn VREG:r:f64=$YMMm  CTL:r:u8=$ctl
  /* 8734 */ &vreg50, &vreg51, &mem132, &ctl0, NULL, // VPERM2F128 VREG:w:f64=$YMMr VREG:r:f64=$YMMn MEM:r:f64=$mem256 CTL:r:u8=$ctl
  /* 8739 */ &vreg3, &vreg63, &vreg64, &ctl0, NULL, // VPERM2I128 VREG:w:u128=$YMMr VREG:r:u128=$YMMn VREG:r:u128=$YMMm  CTL:r:u8=$ctl
  /* 8744 */ &vreg3, &vreg63, &mem137, &ctl0, NULL, // VPERM2I128 VREG:w:u128=$YMMr VREG:r:u128=$YMMn MEM:r:u128=$mem256 CTL:r:u8=$ctl
  /* 8749 */ &vreg27, &preg0, &vreg80, &vreg28, NULL, // VPERMT2B VREG:rw:u8=$XMMr PREG:r:Z=$Kk VREG:r:u8=$XMMn VREG:r:u8=$XMMm
  /* 8754 */ &vreg27, &preg0, &vreg80, &mem122, NULL, // VPERMT2B VREG:rw:u8=$XMMr PREG:r:Z=$Kk VREG:r:u8=$XMMn MEM:r:u8=$mem128
  /* 8759 */ &vreg197, &preg0, &vreg82, &vreg86, NULL, // VPERMT2B VREG:rw:u8=$YMMr PREG:r:Z=$Kk VREG:r:u8=$YMMn VREG:r:u8=$YMMm
  /* 8764 */ &vreg197, &preg0, &vreg82, &mem142, NULL, // VPERMT2B VREG:rw:u8=$YMMr PREG:r:Z=$Kk VREG:r:u8=$YMMn MEM:r:u8=$mem256
  /* 8769 */ &vreg198, &preg0, &vreg84, &vreg87, NULL, // VPERMT2B VREG:rw:u8=$ZMMr PREG:r:Z=$Kk VREG:r:u8=$ZMMn VREG:r:u8=$ZMMm
  /* 8774 */ &vreg198, &preg0, &vreg84, &mem143, NULL, // VPERMT2B VREG:rw:u8=$ZMMr PREG:r:Z=$Kk VREG:r:u8=$ZMMn MEM:r:u8=$mem512
  /* 8779 */ &vreg31, &preg0, &vreg151, &vreg32, NULL, // VPSHRDVW VREG:rw:u16=$XMMr PREG:r:Z=$Kk VREG:r:u16=$XMMn VREG:r:u16=$XMMm
  /* 8784 */ &vreg31, &preg0, &vreg151, &mem125, NULL, // VPSHRDVW VREG:rw:u16=$XMMr PREG:r:Z=$Kk VREG:r:u16=$XMMn MEM:r:u16=$mem128
  /* 8789 */ &vreg199, &preg0, &vreg152, &vreg127, NULL, // VPSHRDVW VREG:rw:u16=$YMMr PREG:r:Z=$Kk VREG:r:u16=$YMMn VREG:r:u16=$YMMm
  /* 8794 */ &vreg199, &preg0, &vreg152, &mem163, NULL, // VPSHRDVW VREG:rw:u16=$YMMr PREG:r:Z=$Kk VREG:r:u16=$YMMn MEM:r:u16=$mem256
  /* 8799 */ &vreg200, &preg0, &vreg153, &vreg129, NULL, // VPSHRDVW VREG:rw:u16=$ZMMr PREG:r:Z=$Kk VREG:r:u16=$ZMMn VREG:r:u16=$ZMMm
  /* 8804 */ &vreg200, &preg0, &vreg153, &mem164, NULL, // VPSHRDVW VREG:rw:u16=$ZMMr PREG:r:Z=$Kk VREG:r:u16=$ZMMn MEM:r:u16=$mem512
  /* 8809 */ &vreg201, &preg0, &vreg130, &vreg41, NULL, // VPSHRDVD VREG:rw:u32=$XMMr PREG:r:Z=$Kk VREG:r:u32=$XMMn VREG:r:u32=$XMMm
  /* 8814 */ &vreg201, &preg0, &vreg130, &mem131, &bcst0, NULL, // VPSHRDVD VREG:rw:u32=$XMMr PREG:r:Z=$Kk VREG:r:u32=$XMMn MEM:r:u32=$mem128 BCST=$BCST
  /* 8820 */ &vreg44, &preg0, &vreg68, &vreg45, NULL, // VPSHRDVQ VREG:rw:u64=$XMMr PREG:r:Z=$Kk VREG:r:u64=$XMMn VREG:r:u64=$XMMm
  /* 8825 */ &vreg44, &preg0, &vreg68, &mem95, &bcst0, NULL, // VPSHRDVQ VREG:rw:u64=$XMMr PREG:r:Z=$Kk VREG:r:u64=$XMMn MEM:r:u64=$mem128 BCST=$BCST
  /* 8831 */ &vreg202, &preg0, &vreg131, &vreg111, NULL, // VPSHRDVD VREG:rw:u32=$YMMr PREG:r:Z=$Kk VREG:r:u32=$YMMn VREG:r:u32=$YMMm
  /* 8836 */ &vreg202, &preg0, &vreg131, &mem156, &bcst0, NULL, // VPSHRDVD VREG:rw:u32=$YMMr PREG:r:Z=$Kk VREG:r:u32=$YMMn MEM:r:u32=$mem256 BCST=$BCST
  /* 8842 */ &vreg203, &preg0, &vreg4, &vreg5, NULL, // VPSHRDVQ VREG:rw:u64=$YMMr PREG:r:Z=$Kk VREG:r:u64=$YMMn VREG:r:u64=$YMMm
  /* 8847 */ &vreg203, &preg0, &vreg4, &mem55, &bcst0, NULL, // VPSHRDVQ VREG:rw:u64=$YMMr PREG:r:Z=$Kk VREG:r:u64=$YMMn MEM:r:u64=$mem256 BCST=$BCST
  /* 8853 */ &vreg204, &preg0, &vreg150, &vreg113, NULL, // VPSHRDVD VREG:rw:u32=$ZMMr PREG:r:Z=$Kk VREG:r:u32=$ZMMn VREG:r:u32=$ZMMm
  /* 8858 */ &vreg204, &preg0, &vreg150, &mem48, &bcst0, NULL, // VPSHRDVD VREG:rw:u32=$ZMMr PREG:r:Z=$Kk VREG:r:u32=$ZMMn MEM:r:u32=$mem512 BCST=$BCST
  /* 8864 */ &vreg205, &preg0, &vreg159, &vreg85, NULL, // VPSHRDVQ VREG:rw:u64=$ZMMr PREG:r:Z=$Kk VREG:r:u64=$ZMMn VREG:r:u64=$ZMMm
  /* 8869 */ &vreg205, &preg0, &vreg159, &mem141, &bcst0, NULL, // VPSHRDVQ VREG:rw:u64=$ZMMr PREG:r:Z=$Kk VREG:r:u64=$ZMMn MEM:r:u64=$mem512 BCST=$BCST
  /* 8875 */ &vreg19, &preg0, &vreg14, &ctl0, NULL, // VPERMILPD VREG:w:f64=$XMMr PREG:r:Z=$Kk      VREG:r:f64=$XMMm             CTL:r:u8=$ctl
  /* 8880 */ &vreg19, &preg0, &mem112, &bcst0, &ctl0, NULL, // VPERMILPD VREG:w:f64=$XMMr PREG:r:Z=$Kk      MEM:r:f64=$mem128 BCST=$BCST CTL:r:u8=$ctl
  /* 8886 */ &vreg19, &vreg14, &ctl0, NULL, // VPERMILPD VREG:w:f64=$XMMr VREG:r:f64=$XMMm  CTL:r:u8=$ctl
  /* 8890 */ &vreg50, &vreg52, &ctl0, NULL, // VPERMPD VREG:w:f64=$YMMr VREG:r:f64=$YMMm  CTL:r:u8=$ctl
  /* 8894 */ &vreg19, &mem112, &ctl0, NULL, // VPERMILPD VREG:w:f64=$XMMr MEM:r:f64=$mem128 CTL:r:u8=$ctl
  /* 8898 */ &vreg50, &mem132, &ctl0, NULL, // VPERMPD VREG:w:f64=$YMMr MEM:r:f64=$mem256 CTL:r:u8=$ctl
  /* 8902 */ &vreg19, &vreg49, &vreg45, NULL, // VPERMILPD VREG:w:f64=$XMMr VREG:r:f64=$XMMn  VREG:r:u64=$XMMm
  /* 8906 */ &vreg50, &vreg51, &vreg5, NULL, // VPERMILPD VREG:w:f64=$YMMr VREG:r:f64=$YMMn  VREG:r:u64=$YMMm
  /* 8910 */ &vreg19, &vreg49, &mem95, NULL, // VPERMILPD VREG:w:f64=$XMMr VREG:r:f64=$XMMn  MEM:r:u64=$mem128
  /* 8914 */ &vreg50, &vreg51, &mem55, NULL, // VPERMILPD VREG:w:f64=$YMMr VREG:r:f64=$YMMn  MEM:r:u64=$mem256
  /* 8918 */ &vreg50, &preg0, &vreg52, &ctl0, NULL, // VPERMPD VREG:w:f64=$YMMr PREG:r:Z=$Kk      VREG:r:f64=$YMMm             CTL:r:u8=$ctl
  /* 8923 */ &vreg50, &preg0, &mem132, &bcst0, &ctl0, NULL, // VPERMPD VREG:w:f64=$YMMr PREG:r:Z=$Kk      MEM:r:f64=$mem256 BCST=$BCST CTL:r:u8=$ctl
  /* 8929 */ &vreg53, &preg0, &vreg55, &ctl0, NULL, // VPERMPD VREG:w:f64=$ZMMr PREG:r:Z=$Kk      VREG:r:f64=$ZMMm             CTL:r:u8=$ctl
  /* 8934 */ &vreg53, &preg0, &mem133, &bcst0, &ctl0, NULL, // VPERMPD VREG:w:f64=$ZMMr PREG:r:Z=$Kk      MEM:r:f64=$mem512 BCST=$BCST CTL:r:u8=$ctl
  /* 8940 */ &vreg7, &preg0, &vreg16, &ctl0, NULL, // VPERMILPS VREG:w:f32=$XMMr PREG:r:Z=$Kk      VREG:r:f32=$XMMm             CTL:r:u8=$ctl
  /* 8945 */ &vreg7, &preg0, &mem113, &bcst0, &ctl0, NULL, // VPERMILPS VREG:w:f32=$XMMr PREG:r:Z=$Kk      MEM:r:f32=$mem128 BCST=$BCST CTL:r:u8=$ctl
  /* 8951 */ &vreg7, &vreg16, &ctl0, NULL, // VPERMILPS VREG:w:f32=$XMMr VREG:r:f32=$XMMm  CTL:r:u8=$ctl
  /* 8955 */ &vreg9, &vreg58, &ctl0, NULL, // VPERMILPS VREG:w:f32=$YMMr VREG:r:f32=$YMMm  CTL:r:u8=$ctl
  /* 8959 */ &vreg7, &mem113, &ctl0, NULL, // VPERMILPS VREG:w:f32=$XMMr MEM:r:f32=$mem128 CTL:r:u8=$ctl
  /* 8963 */ &vreg9, &mem134, &ctl0, NULL, // VPERMILPS VREG:w:f32=$YMMr MEM:r:f32=$mem256 CTL:r:u8=$ctl
  /* 8967 */ &vreg7, &vreg56, &vreg41, NULL, // VPERMILPS VREG:w:f32=$XMMr VREG:r:f32=$XMMn  VREG:r:u32=$XMMm
  /* 8971 */ &vreg9, &vreg57, &vreg111, NULL, // VPERMILPS VREG:w:f32=$YMMr VREG:r:f32=$YMMn  VREG:r:u32=$YMMm
  /* 8975 */ &vreg7, &vreg56, &mem131, NULL, // VPERMILPS VREG:w:f32=$XMMr VREG:r:f32=$XMMn  MEM:r:u32=$mem128
  /* 8979 */ &vreg9, &vreg57, &mem156, NULL, // VPERMILPS VREG:w:f32=$YMMr VREG:r:f32=$YMMn  MEM:r:u32=$mem256
  /* 8983 */ &vreg9, &preg0, &vreg58, &ctl0, NULL, // VPERMILPS VREG:w:f32=$YMMr PREG:r:Z=$Kk      VREG:r:f32=$YMMm             CTL:r:u8=$ctl
  /* 8988 */ &vreg9, &preg0, &mem134, &bcst0, &ctl0, NULL, // VPERMILPS VREG:w:f32=$YMMr PREG:r:Z=$Kk      MEM:r:f32=$mem256 BCST=$BCST CTL:r:u8=$ctl
  /* 8994 */ &vreg59, &preg0, &vreg61, &ctl0, NULL, // VPERMILPS VREG:w:f32=$ZMMr PREG:r:Z=$Kk      VREG:r:f32=$ZMMm             CTL:r:u8=$ctl
  /* 8999 */ &vreg59, &preg0, &mem135, &bcst0, &ctl0, NULL, // VPERMILPS VREG:w:f32=$ZMMr PREG:r:Z=$Kk      MEM:r:f32=$mem512 BCST=$BCST CTL:r:u8=$ctl
  /* 9005 */ &vreg69, &vreg5, &imm0, NULL, // VPERMQ VREG:w:u64=$YMMr VREG:r:u64=$YMMm  IMM:u8=$uimm8
  /* 9009 */ &vreg69, &mem55, &imm0, NULL, // VPERMQ VREG:w:u64=$YMMr MEM:r:u64=$mem256 IMM:u8=$uimm8
  /* 9013 */ &vreg69, &preg0, &vreg5, &imm0, NULL, // VPERMQ VREG:w:u64=$YMMr PREG:r:Z=$Kk      VREG:r:u64=$YMMm             IMM:u8=$uimm8
  /* 9018 */ &vreg69, &preg0, &mem55, &bcst0, &imm0, NULL, // VPERMQ VREG:w:u64=$YMMr PREG:r:Z=$Kk      MEM:r:u64=$mem256 BCST=$BCST IMM:u8=$uimm8
  /* 9024 */ &vreg114, &preg0, &vreg85, &imm0, NULL, // VPERMQ VREG:w:u64=$ZMMr PREG:r:Z=$Kk      VREG:r:u64=$ZMMm             IMM:u8=$uimm8
  /* 9029 */ &vreg114, &preg0, &mem141, &bcst0, &imm0, NULL, // VPERMQ VREG:w:u64=$ZMMr PREG:r:Z=$Kk      MEM:r:u64=$mem512 BCST=$BCST IMM:u8=$uimm8
  /* 9035 */ &vreg39, &preg1, &mem181, NULL, // VPGATHERQD VREG:w:u32=$XMMr   PREG:rw=$Kk      MEM:r:u32=$vmx32
  /* 9039 */ &vreg26, &preg1, &mem182, NULL, // VPGATHERQQ VREG:w:u64=$XMMr   PREG:rw=$Kk      MEM:r:u64=$vmx64
  /* 9043 */ &vreg206, &mem181, &vreg192, NULL, // VPGATHERQD VREG:crw:u32=$XMMr MEM:r:u32=$vmx32 VREG:rw:s32=$XMMn
  /* 9047 */ &vreg207, &mem183, &vreg194, NULL, // VPGATHERDD VREG:crw:u32=$YMMr MEM:r:u32=$vmy32 VREG:rw:s32=$YMMn
  /* 9051 */ &vreg208, &mem182, &vreg188, NULL, // VPGATHERQQ VREG:crw:u64=$XMMr MEM:r:u64=$vmx64 VREG:rw:s64=$XMMn
  /* 9055 */ &vreg209, &mem182, &vreg190, NULL, // VPGATHERDQ VREG:crw:u64=$YMMr MEM:r:u64=$vmx64 VREG:rw:s64=$YMMn
  /* 9059 */ &vreg110, &preg1, &mem183, NULL, // VPGATHERDD VREG:w:u32=$YMMr   PREG:rw=$Kk      MEM:r:u32=$vmy32
  /* 9063 */ &vreg69, &preg1, &mem182, NULL, // VPGATHERDQ VREG:w:u64=$YMMr   PREG:rw=$Kk      MEM:r:u64=$vmx64
  /* 9067 */ &vreg112, &preg1, &mem184, NULL, // VPGATHERDD VREG:w:u32=$ZMMr   PREG:rw=$Kk      MEM:r:u32=$vmz32
  /* 9071 */ &vreg114, &preg1, &mem185, NULL, // VPGATHERDQ VREG:w:u64=$ZMMr   PREG:rw=$Kk      MEM:r:u64=$vmy64
  /* 9075 */ &vreg39, &preg1, &mem183, NULL, // VPGATHERQD VREG:w:u32=$XMMr   PREG:rw=$Kk      MEM:r:u32=$vmy32
  /* 9079 */ &vreg69, &preg1, &mem185, NULL, // VPGATHERQQ VREG:w:u64=$YMMr   PREG:rw=$Kk      MEM:r:u64=$vmy64
  /* 9083 */ &vreg110, &preg1, &mem184, NULL, // VPGATHERQD VREG:w:u32=$YMMr   PREG:rw=$Kk      MEM:r:u32=$vmz32
  /* 9087 */ &vreg114, &preg1, &mem186, NULL, // VPGATHERQQ VREG:w:u64=$ZMMr   PREG:rw=$Kk      MEM:r:u64=$vmz64
  /* 9091 */ &vreg206, &mem183, &vreg192, NULL, // VPGATHERQD VREG:crw:u32=$XMMr MEM:r:u32=$vmy32 VREG:rw:s32=$XMMn
  /* 9095 */ &vreg209, &mem185, &vreg190, NULL, // VPGATHERQQ VREG:crw:u64=$YMMr MEM:r:u64=$vmy64 VREG:rw:s64=$YMMn
  /* 9099 */ &mem151, &vreg130, &vreg99, NULL, // VPMASKMOVD MEM:w:u32=$mem128 VREG:r:u32=$XMMn VREG:r:u32=$XMMr
  /* 9103 */ &mem152, &vreg131, &vreg103, NULL, // VPMASKMOVD MEM:w:u32=$mem256 VREG:r:u32=$YMMn VREG:r:u32=$YMMr
  /* 9107 */ &mem93, &vreg68, &vreg101, NULL, // VPMASKMOVQ MEM:w:u64=$mem128 VREG:r:u64=$XMMn VREG:r:u64=$XMMr
  /* 9111 */ &mem153, &vreg4, &vreg105, NULL, // VPMASKMOVQ MEM:w:u64=$mem256 VREG:r:u64=$YMMn VREG:r:u64=$YMMr
  /* 9115 */ &vreg79, &reg275, NULL, // VPMOVM2B VREG:w:u8=$XMMr  REG:r=$Km
  /* 9118 */ &vreg40, &reg275, NULL, // VPMOVM2W VREG:w:u16=$XMMr REG:r=$Km
  /* 9121 */ &vreg39, &reg275, NULL, // VPMOVM2D VREG:w:u32=$XMMr REG:r=$Km
  /* 9124 */ &vreg26, &reg275, NULL, // VPMOVM2Q VREG:w:u64=$XMMr REG:r=$Km
  /* 9127 */ &vreg81, &reg275, NULL, // VPMOVM2B VREG:w:u8=$YMMr  REG:r=$Km
  /* 9130 */ &vreg126, &reg275, NULL, // VPMOVM2W VREG:w:u16=$YMMr REG:r=$Km
  /* 9133 */ &vreg110, &reg275, NULL, // VPMOVM2D VREG:w:u32=$YMMr REG:r=$Km
  /* 9136 */ &vreg69, &reg275, NULL, // VPMOVM2Q VREG:w:u64=$YMMr REG:r=$Km
  /* 9139 */ &vreg83, &reg275, NULL, // VPMOVM2B VREG:w:u8=$ZMMr  REG:r=$Km
  /* 9142 */ &vreg128, &reg275, NULL, // VPMOVM2W VREG:w:u16=$ZMMr REG:r=$Km
  /* 9145 */ &vreg112, &reg275, NULL, // VPMOVM2D VREG:w:u32=$ZMMr REG:r=$Km
  /* 9148 */ &vreg114, &reg275, NULL, // VPMOVM2Q VREG:w:u64=$ZMMr REG:r=$Km
  /* 9151 */ &reg272, &vreg28, NULL, // VPMOVB2M REG:w=$Kr VREG:r:u8=$XMMm
  /* 9154 */ &reg272, &vreg32, NULL, // VPMOVW2M REG:w=$Kr VREG:r:u16=$XMMm
  /* 9157 */ &reg272, &vreg41, NULL, // VPMOVD2M REG:w=$Kr VREG:r:u32=$XMMm
  /* 9160 */ &reg272, &vreg45, NULL, // VPMOVQ2M REG:w=$Kr VREG:r:u64=$XMMm
  /* 9163 */ &reg272, &vreg86, NULL, // VPMOVB2M REG:w=$Kr VREG:r:u8=$YMMm
  /* 9166 */ &reg272, &vreg127, NULL, // VPMOVW2M REG:w=$Kr VREG:r:u16=$YMMm
  /* 9169 */ &reg272, &vreg111, NULL, // VPMOVD2M REG:w=$Kr VREG:r:u32=$YMMm
  /* 9172 */ &reg272, &vreg5, NULL, // VPMOVQ2M REG:w=$Kr VREG:r:u64=$YMMm
  /* 9175 */ &reg272, &vreg87, NULL, // VPMOVB2M REG:w=$Kr VREG:r:u8=$ZMMm
  /* 9178 */ &reg272, &vreg129, NULL, // VPMOVW2M REG:w=$Kr VREG:r:u16=$ZMMm
  /* 9181 */ &reg272, &vreg113, NULL, // VPMOVD2M REG:w=$Kr VREG:r:u32=$ZMMm
  /* 9184 */ &reg272, &vreg85, NULL, // VPMOVQ2M REG:w=$Kr VREG:r:u64=$ZMMm
  /* 9187 */ &mem187, &preg0, &vreg99, NULL, // VPMOVUSDB MEM:w:u8=$mem32  PREG:r:Z=$Kk VREG:r:u32=$XMMr
  /* 9191 */ &vreg117, &preg0, &vreg99, NULL, // VPMOVUSDB VREG:w:u8=$XMMm  PREG:r:Z=$Kk VREG:r:u32=$XMMr
  /* 9195 */ &vreg117, &preg0, &vreg103, NULL, // VPMOVUSDB VREG:w:u8=$XMMm  PREG:r:Z=$Kk VREG:r:u32=$YMMr
  /* 9199 */ &vreg117, &preg0, &vreg107, NULL, // VPMOVUSDB VREG:w:u8=$XMMm  PREG:r:Z=$Kk VREG:r:u32=$ZMMr
  /* 9203 */ &mem158, &preg0, &vreg107, NULL, // VPMOVUSDB MEM:w:u8=$mem128 PREG:r:Z=$Kk VREG:r:u32=$ZMMr
  /* 9207 */ &mem188, &preg0, &vreg103, NULL, // VPMOVUSDB MEM:w:u8=$mem64  PREG:r:Z=$Kk VREG:r:u32=$YMMr
  /* 9211 */ &mem189, &preg0, &vreg21, NULL, // VPMOVSDB  MEM:w:s8=$mem32  PREG:r:Z=$Kk VREG:r:s32=$XMMr
  /* 9215 */ &vreg210, &preg0, &vreg21, NULL, // VPMOVSDB  VREG:w:s8=$XMMm  PREG:r:Z=$Kk VREG:r:s32=$XMMr
  /* 9219 */ &vreg210, &preg0, &vreg97, NULL, // VPMOVSDB  VREG:w:s8=$XMMm  PREG:r:Z=$Kk VREG:r:s32=$YMMr
  /* 9223 */ &vreg210, &preg0, &vreg211, NULL, // VPMOVSDB  VREG:w:s8=$XMMm  PREG:r:Z=$Kk VREG:r:s32=$ZMMr
  /* 9227 */ &mem190, &preg0, &vreg211, NULL, // VPMOVSDB  MEM:w:s8=$mem128 PREG:r:Z=$Kk VREG:r:s32=$ZMMr
  /* 9231 */ &mem191, &preg0, &vreg97, NULL, // VPMOVSDB  MEM:w:s8=$mem64  PREG:r:Z=$Kk VREG:r:s32=$YMMr
  /* 9235 */ &vreg115, &preg0, &vreg99, NULL, // VPMOVUSDW VREG:w:u16=$XMMm  PREG:r:Z=$Kk VREG:r:u32=$XMMr
  /* 9239 */ &vreg115, &preg0, &vreg103, NULL, // VPMOVUSDW VREG:w:u16=$XMMm  PREG:r:Z=$Kk VREG:r:u32=$YMMr
  /* 9243 */ &mem157, &preg0, &vreg103, NULL, // VPMOVUSDW MEM:w:u16=$mem128 PREG:r:Z=$Kk VREG:r:u32=$YMMr
  /* 9247 */ &mem192, &preg0, &vreg99, NULL, // VPMOVUSDW MEM:w:u16=$mem64  PREG:r:Z=$Kk VREG:r:u32=$XMMr
  /* 9251 */ &vreg118, &preg0, &vreg107, NULL, // VPMOVUSDW VREG:w:u16=$YMMm  PREG:r:Z=$Kk VREG:r:u32=$ZMMr
  /* 9255 */ &mem159, &preg0, &vreg107, NULL, // VPMOVUSDW MEM:w:u16=$mem256 PREG:r:Z=$Kk VREG:r:u32=$ZMMr
  /* 9259 */ &vreg212, &preg0, &vreg21, NULL, // VPMOVSDW  VREG:w:s16=$XMMm  PREG:r:Z=$Kk VREG:r:s32=$XMMr
  /* 9263 */ &vreg212, &preg0, &vreg97, NULL, // VPMOVSDW  VREG:w:s16=$XMMm  PREG:r:Z=$Kk VREG:r:s32=$YMMr
  /* 9267 */ &mem193, &preg0, &vreg97, NULL, // VPMOVSDW  MEM:w:s16=$mem128 PREG:r:Z=$Kk VREG:r:s32=$YMMr
  /* 9271 */ &mem194, &preg0, &vreg21, NULL, // VPMOVSDW  MEM:w:s16=$mem64  PREG:r:Z=$Kk VREG:r:s32=$XMMr
  /* 9275 */ &vreg213, &preg0, &vreg211, NULL, // VPMOVSDW  VREG:w:s16=$YMMm  PREG:r:Z=$Kk VREG:r:s32=$ZMMr
  /* 9279 */ &mem195, &preg0, &vreg211, NULL, // VPMOVSDW  MEM:w:s16=$mem256 PREG:r:Z=$Kk VREG:r:s32=$ZMMr
  /* 9283 */ &mem187, &preg0, &vreg105, NULL, // VPMOVUSQB MEM:w:u8=$mem32 PREG:r:Z=$Kk VREG:r:u64=$YMMr
  /* 9287 */ &vreg117, &preg0, &vreg101, NULL, // VPMOVUSQB VREG:w:u8=$XMMm PREG:r:Z=$Kk VREG:r:u64=$XMMr
  /* 9291 */ &vreg117, &preg0, &vreg105, NULL, // VPMOVUSQB VREG:w:u8=$XMMm PREG:r:Z=$Kk VREG:r:u64=$YMMr
  /* 9295 */ &vreg117, &preg0, &vreg109, NULL, // VPMOVUSQB VREG:w:u8=$XMMm PREG:r:Z=$Kk VREG:r:u64=$ZMMr
  /* 9299 */ &mem188, &preg0, &vreg109, NULL, // VPMOVUSQB MEM:w:u8=$mem64 PREG:r:Z=$Kk VREG:r:u64=$ZMMr
  /* 9303 */ &mem196, &preg0, &vreg101, NULL, // VPMOVUSQB MEM:w:u8=$mem16 PREG:r:Z=$Kk VREG:r:u64=$XMMr
  /* 9307 */ &mem189, &preg0, &vreg214, NULL, // VPMOVSQB  MEM:w:s8=$mem32 PREG:r:Z=$Kk VREG:r:s64=$YMMr
  /* 9311 */ &vreg210, &preg0, &vreg215, NULL, // VPMOVSQB  VREG:w:s8=$XMMm PREG:r:Z=$Kk VREG:r:s64=$XMMr
  /* 9315 */ &vreg210, &preg0, &vreg214, NULL, // VPMOVSQB  VREG:w:s8=$XMMm PREG:r:Z=$Kk VREG:r:s64=$YMMr
  /* 9319 */ &vreg210, &preg0, &vreg216, NULL, // VPMOVSQB  VREG:w:s8=$XMMm PREG:r:Z=$Kk VREG:r:s64=$ZMMr
  /* 9323 */ &mem191, &preg0, &vreg216, NULL, // VPMOVSQB  MEM:w:s8=$mem64 PREG:r:Z=$Kk VREG:r:s64=$ZMMr
  /* 9327 */ &mem197, &preg0, &vreg215, NULL, // VPMOVSQB  MEM:w:s8=$mem16 PREG:r:Z=$Kk VREG:r:s64=$XMMr
  /* 9331 */ &vreg98, &preg0, &vreg101, NULL, // VPMOVUSQD VREG:w:u32=$XMMm  PREG:r:Z=$Kk VREG:r:u64=$XMMr
  /* 9335 */ &vreg98, &preg0, &vreg105, NULL, // VPMOVUSQD VREG:w:u32=$XMMm  PREG:r:Z=$Kk VREG:r:u64=$YMMr
  /* 9339 */ &mem151, &preg0, &vreg105, NULL, // VPMOVUSQD MEM:w:u32=$mem128 PREG:r:Z=$Kk VREG:r:u64=$YMMr
  /* 9343 */ &mem94, &preg0, &vreg101, NULL, // VPMOVUSQD MEM:w:u32=$mem64  PREG:r:Z=$Kk VREG:r:u64=$XMMr
  /* 9347 */ &vreg102, &preg0, &vreg109, NULL, // VPMOVUSQD VREG:w:u32=$YMMm  PREG:r:Z=$Kk VREG:r:u64=$ZMMr
  /* 9351 */ &mem152, &preg0, &vreg109, NULL, // VPMOVUSQD MEM:w:u32=$mem256 PREG:r:Z=$Kk VREG:r:u64=$ZMMr
  /* 9355 */ &vreg25, &preg0, &vreg215, NULL, // VPMOVSQD  VREG:w:s32=$XMMm  PREG:r:Z=$Kk VREG:r:s64=$XMMr
  /* 9359 */ &vreg25, &preg0, &vreg214, NULL, // VPMOVSQD  VREG:w:s32=$XMMm  PREG:r:Z=$Kk VREG:r:s64=$YMMr
  /* 9363 */ &mem120, &preg0, &vreg214, NULL, // VPMOVSQD  MEM:w:s32=$mem128 PREG:r:Z=$Kk VREG:r:s64=$YMMr
  /* 9367 */ &mem198, &preg0, &vreg215, NULL, // VPMOVSQD  MEM:w:s32=$mem64  PREG:r:Z=$Kk VREG:r:s64=$XMMr
  /* 9371 */ &vreg96, &preg0, &vreg216, NULL, // VPMOVSQD  VREG:w:s32=$YMMm  PREG:r:Z=$Kk VREG:r:s64=$ZMMr
  /* 9375 */ &mem150, &preg0, &vreg216, NULL, // VPMOVSQD  MEM:w:s32=$mem256 PREG:r:Z=$Kk VREG:r:s64=$ZMMr
  /* 9379 */ &mem199, &preg0, &vreg101, NULL, // VPMOVUSQW MEM:w:u16=$mem32  PREG:r:Z=$Kk VREG:r:u64=$XMMr
  /* 9383 */ &vreg115, &preg0, &vreg101, NULL, // VPMOVUSQW VREG:w:u16=$XMMm  PREG:r:Z=$Kk VREG:r:u64=$XMMr
  /* 9387 */ &vreg115, &preg0, &vreg105, NULL, // VPMOVUSQW VREG:w:u16=$XMMm  PREG:r:Z=$Kk VREG:r:u64=$YMMr
  /* 9391 */ &vreg115, &preg0, &vreg109, NULL, // VPMOVUSQW VREG:w:u16=$XMMm  PREG:r:Z=$Kk VREG:r:u64=$ZMMr
  /* 9395 */ &mem157, &preg0, &vreg109, NULL, // VPMOVUSQW MEM:w:u16=$mem128 PREG:r:Z=$Kk VREG:r:u64=$ZMMr
  /* 9399 */ &mem192, &preg0, &vreg105, NULL, // VPMOVUSQW MEM:w:u16=$mem64  PREG:r:Z=$Kk VREG:r:u64=$YMMr
  /* 9403 */ &mem200, &preg0, &vreg215, NULL, // VPMOVSQW  MEM:w:s16=$mem32  PREG:r:Z=$Kk VREG:r:s64=$XMMr
  /* 9407 */ &vreg212, &preg0, &vreg215, NULL, // VPMOVSQW  VREG:w:s16=$XMMm  PREG:r:Z=$Kk VREG:r:s64=$XMMr
  /* 9411 */ &vreg212, &preg0, &vreg214, NULL, // VPMOVSQW  VREG:w:s16=$XMMm  PREG:r:Z=$Kk VREG:r:s64=$YMMr
  /* 9415 */ &vreg212, &preg0, &vreg216, NULL, // VPMOVSQW  VREG:w:s16=$XMMm  PREG:r:Z=$Kk VREG:r:s64=$ZMMr
  /* 9419 */ &mem193, &preg0, &vreg216, NULL, // VPMOVSQW  MEM:w:s16=$mem128 PREG:r:Z=$Kk VREG:r:s64=$ZMMr
  /* 9423 */ &mem194, &preg0, &vreg214, NULL, // VPMOVSQW  MEM:w:s16=$mem64  PREG:r:Z=$Kk VREG:r:s64=$YMMr
  /* 9427 */ &vreg210, &preg0, &vreg217, NULL, // VPMOVSWB  VREG:w:s8=$XMMm  PREG:r:Z=$Kk VREG:r:s16=$XMMr
  /* 9431 */ &vreg210, &preg0, &vreg218, NULL, // VPMOVSWB  VREG:w:s8=$XMMm  PREG:r:Z=$Kk VREG:r:s16=$YMMr
  /* 9435 */ &mem190, &preg0, &vreg218, NULL, // VPMOVSWB  MEM:w:s8=$mem128 PREG:r:Z=$Kk VREG:r:s16=$YMMr
  /* 9439 */ &mem191, &preg0, &vreg217, NULL, // VPMOVSWB  MEM:w:s8=$mem64  PREG:r:Z=$Kk VREG:r:s16=$XMMr
  /* 9443 */ &vreg219, &preg0, &vreg220, NULL, // VPMOVSWB  VREG:w:s8=$YMMm  PREG:r:Z=$Kk VREG:r:s16=$ZMMr
  /* 9447 */ &mem201, &preg0, &vreg220, NULL, // VPMOVSWB  MEM:w:s8=$mem256 PREG:r:Z=$Kk VREG:r:s16=$ZMMr
  /* 9451 */ &vreg117, &preg0, &vreg116, NULL, // VPMOVWB   VREG:w:u8=$XMMm  PREG:r:Z=$Kk VREG:r:u16=$XMMr
  /* 9455 */ &vreg117, &preg0, &vreg119, NULL, // VPMOVWB   VREG:w:u8=$XMMm  PREG:r:Z=$Kk VREG:r:u16=$YMMr
  /* 9459 */ &mem158, &preg0, &vreg119, NULL, // VPMOVWB   MEM:w:u8=$mem128 PREG:r:Z=$Kk VREG:r:u16=$YMMr
  /* 9463 */ &mem188, &preg0, &vreg116, NULL, // VPMOVWB   MEM:w:u8=$mem64  PREG:r:Z=$Kk VREG:r:u16=$XMMr
  /* 9467 */ &vreg120, &preg0, &vreg123, NULL, // VPMOVWB   VREG:w:u8=$YMMm  PREG:r:Z=$Kk VREG:r:u16=$ZMMr
  /* 9471 */ &mem160, &preg0, &vreg123, NULL, // VPMOVWB   MEM:w:u8=$mem256 PREG:r:Z=$Kk VREG:r:u16=$ZMMr
  /* 9475 */ &vreg79, &preg0, &vreg80, &vreg45, NULL, // VPMULTISHIFTQB VREG:w:u8=$XMMr PREG:r:Z=$Kk VREG:r:u8=$XMMn VREG:r:u64=$XMMm
  /* 9480 */ &vreg79, &preg0, &vreg80, &mem95, &bcst0, NULL, // VPMULTISHIFTQB VREG:w:u8=$XMMr PREG:r:Z=$Kk VREG:r:u8=$XMMn MEM:r:u64=$mem128 BCST=$BCST
  /* 9486 */ &vreg81, &preg0, &vreg82, &vreg5, NULL, // VPMULTISHIFTQB VREG:w:u8=$YMMr PREG:r:Z=$Kk VREG:r:u8=$YMMn VREG:r:u64=$YMMm
  /* 9491 */ &vreg81, &preg0, &vreg82, &mem55, &bcst0, NULL, // VPMULTISHIFTQB VREG:w:u8=$YMMr PREG:r:Z=$Kk VREG:r:u8=$YMMn MEM:r:u64=$mem256 BCST=$BCST
  /* 9497 */ &vreg83, &preg0, &vreg84, &vreg85, NULL, // VPMULTISHIFTQB VREG:w:u8=$ZMMr PREG:r:Z=$Kk VREG:r:u8=$ZMMn VREG:r:u64=$ZMMm
  /* 9502 */ &vreg83, &preg0, &vreg84, &mem141, &bcst0, NULL, // VPMULTISHIFTQB VREG:w:u8=$ZMMr PREG:r:Z=$Kk VREG:r:u8=$ZMMn MEM:r:u64=$mem512 BCST=$BCST
  /* 9508 */ &vreg167, &preg0, &vreg41, &rotate1, NULL, // VPROLD  VREG:w:u32=$XMMn PREG:r:Z=$Kk VREG:r:u32=$XMMm             ROTATE:r:u8=$rol
  /* 9513 */ &vreg167, &preg0, &mem131, &bcst0, &rotate1, NULL, // VPROLD  VREG:w:u32=$XMMn PREG:r:Z=$Kk MEM:r:u32=$mem128 BCST=$BCST ROTATE:r:u8=$rol
  /* 9519 */ &vreg170, &preg0, &vreg45, &rotate1, NULL, // VPROLQ  VREG:w:u64=$XMMn PREG:r:Z=$Kk VREG:r:u64=$XMMm             ROTATE:r:u8=$rol
  /* 9524 */ &vreg170, &preg0, &mem95, &bcst0, &rotate1, NULL, // VPROLQ  VREG:w:u64=$XMMn PREG:r:Z=$Kk MEM:r:u64=$mem128 BCST=$BCST ROTATE:r:u8=$rol
  /* 9530 */ &vreg168, &preg0, &vreg111, &rotate1, NULL, // VPROLD  VREG:w:u32=$YMMn PREG:r:Z=$Kk VREG:r:u32=$YMMm             ROTATE:r:u8=$rol
  /* 9535 */ &vreg168, &preg0, &mem156, &bcst0, &rotate1, NULL, // VPROLD  VREG:w:u32=$YMMn PREG:r:Z=$Kk MEM:r:u32=$mem256 BCST=$BCST ROTATE:r:u8=$rol
  /* 9541 */ &vreg171, &preg0, &vreg5, &rotate1, NULL, // VPROLQ  VREG:w:u64=$YMMn PREG:r:Z=$Kk VREG:r:u64=$YMMm             ROTATE:r:u8=$rol
  /* 9546 */ &vreg171, &preg0, &mem55, &bcst0, &rotate1, NULL, // VPROLQ  VREG:w:u64=$YMMn PREG:r:Z=$Kk MEM:r:u64=$mem256 BCST=$BCST ROTATE:r:u8=$rol
  /* 9552 */ &vreg169, &preg0, &vreg113, &rotate1, NULL, // VPROLD  VREG:w:u32=$ZMMn PREG:r:Z=$Kk VREG:r:u32=$ZMMm             ROTATE:r:u8=$rol
  /* 9557 */ &vreg169, &preg0, &mem48, &bcst0, &rotate1, NULL, // VPROLD  VREG:w:u32=$ZMMn PREG:r:Z=$Kk MEM:r:u32=$mem512 BCST=$BCST ROTATE:r:u8=$rol
  /* 9563 */ &vreg172, &preg0, &vreg85, &rotate1, NULL, // VPROLQ  VREG:w:u64=$ZMMn PREG:r:Z=$Kk VREG:r:u64=$ZMMm             ROTATE:r:u8=$rol
  /* 9568 */ &vreg172, &preg0, &mem141, &bcst0, &rotate1, NULL, // VPROLQ  VREG:w:u64=$ZMMn PREG:r:Z=$Kk MEM:r:u64=$mem512 BCST=$BCST ROTATE:r:u8=$rol
  /* 9574 */ &vreg167, &preg0, &vreg41, &rotate0, NULL, // VPRORD  VREG:w:u32=$XMMn PREG:r:Z=$Kk VREG:r:u32=$XMMm             ROTATE:r:u8=$ror
  /* 9579 */ &vreg167, &preg0, &mem131, &bcst0, &rotate0, NULL, // VPRORD  VREG:w:u32=$XMMn PREG:r:Z=$Kk MEM:r:u32=$mem128 BCST=$BCST ROTATE:r:u8=$ror
  /* 9585 */ &vreg170, &preg0, &vreg45, &rotate0, NULL, // VPRORQ  VREG:w:u64=$XMMn PREG:r:Z=$Kk VREG:r:u64=$XMMm             ROTATE:r:u8=$ror
  /* 9590 */ &vreg170, &preg0, &mem95, &bcst0, &rotate0, NULL, // VPRORQ  VREG:w:u64=$XMMn PREG:r:Z=$Kk MEM:r:u64=$mem128 BCST=$BCST ROTATE:r:u8=$ror
  /* 9596 */ &vreg168, &preg0, &vreg111, &rotate0, NULL, // VPRORD  VREG:w:u32=$YMMn PREG:r:Z=$Kk VREG:r:u32=$YMMm             ROTATE:r:u8=$ror
  /* 9601 */ &vreg168, &preg0, &mem156, &bcst0, &rotate0, NULL, // VPRORD  VREG:w:u32=$YMMn PREG:r:Z=$Kk MEM:r:u32=$mem256 BCST=$BCST ROTATE:r:u8=$ror
  /* 9607 */ &vreg171, &preg0, &vreg5, &rotate0, NULL, // VPRORQ  VREG:w:u64=$YMMn PREG:r:Z=$Kk VREG:r:u64=$YMMm             ROTATE:r:u8=$ror
  /* 9612 */ &vreg171, &preg0, &mem55, &bcst0, &rotate0, NULL, // VPRORQ  VREG:w:u64=$YMMn PREG:r:Z=$Kk MEM:r:u64=$mem256 BCST=$BCST ROTATE:r:u8=$ror
  /* 9618 */ &vreg169, &preg0, &vreg113, &rotate0, NULL, // VPRORD  VREG:w:u32=$ZMMn PREG:r:Z=$Kk VREG:r:u32=$ZMMm             ROTATE:r:u8=$ror
  /* 9623 */ &vreg169, &preg0, &mem48, &bcst0, &rotate0, NULL, // VPRORD  VREG:w:u32=$ZMMn PREG:r:Z=$Kk MEM:r:u32=$mem512 BCST=$BCST ROTATE:r:u8=$ror
  /* 9629 */ &vreg172, &preg0, &vreg85, &rotate0, NULL, // VPRORQ  VREG:w:u64=$ZMMn PREG:r:Z=$Kk VREG:r:u64=$ZMMm             ROTATE:r:u8=$ror
  /* 9634 */ &vreg172, &preg0, &mem141, &bcst0, &rotate0, NULL, // VPRORQ  VREG:w:u64=$ZMMn PREG:r:Z=$Kk MEM:r:u64=$mem512 BCST=$BCST ROTATE:r:u8=$ror
  /* 9640 */ &mem202, &preg1, &vreg99, NULL, // VPSCATTERQD MEM:w:u32=$vmx32 PREG:rw=$Kk VREG:r:u32=$XMMr
  /* 9644 */ &mem203, &preg1, &vreg101, NULL, // VPSCATTERQQ MEM:w:u64=$vmx64 PREG:rw=$Kk VREG:r:u64=$XMMr
  /* 9648 */ &mem204, &preg1, &vreg103, NULL, // VPSCATTERDD MEM:w:u32=$vmy32 PREG:rw=$Kk VREG:r:u32=$YMMr
  /* 9652 */ &mem203, &preg1, &vreg105, NULL, // VPSCATTERDQ MEM:w:u64=$vmx64 PREG:rw=$Kk VREG:r:u64=$YMMr
  /* 9656 */ &mem205, &preg1, &vreg107, NULL, // VPSCATTERDD MEM:w:u32=$vmz32 PREG:rw=$Kk VREG:r:u32=$ZMMr
  /* 9660 */ &mem206, &preg1, &vreg109, NULL, // VPSCATTERDQ MEM:w:u64=$vmy64 PREG:rw=$Kk VREG:r:u64=$ZMMr
  /* 9664 */ &mem204, &preg1, &vreg99, NULL, // VPSCATTERQD MEM:w:u32=$vmy32 PREG:rw=$Kk VREG:r:u32=$XMMr
  /* 9668 */ &mem206, &preg1, &vreg105, NULL, // VPSCATTERQQ MEM:w:u64=$vmy64 PREG:rw=$Kk VREG:r:u64=$YMMr
  /* 9672 */ &mem205, &preg1, &vreg103, NULL, // VPSCATTERQD MEM:w:u32=$vmz32 PREG:rw=$Kk VREG:r:u32=$YMMr
  /* 9676 */ &mem207, &preg1, &vreg109, NULL, // VPSCATTERQQ MEM:w:u64=$vmz64 PREG:rw=$Kk VREG:r:u64=$ZMMr
  /* 9680 */ &vreg40, &preg0, &vreg151, &vreg32, &shift1, NULL, // VPSHLDW VREG:w:u16=$XMMr PREG:r:Z=$Kk VREG:r:u16=$XMMn VREG:r:u16=$XMMm             SHIFT:r:u8=$shl
  /* 9686 */ &vreg40, &preg0, &vreg151, &mem125, &shift1, NULL, // VPSHLDW VREG:w:u16=$XMMr PREG:r:Z=$Kk VREG:r:u16=$XMMn MEM:r:u16=$mem128            SHIFT:r:u8=$shl
  /* 9692 */ &vreg126, &preg0, &vreg152, &vreg127, &shift1, NULL, // VPSHLDW VREG:w:u16=$YMMr PREG:r:Z=$Kk VREG:r:u16=$YMMn VREG:r:u16=$YMMm             SHIFT:r:u8=$shl
  /* 9698 */ &vreg126, &preg0, &vreg152, &mem163, &shift1, NULL, // VPSHLDW VREG:w:u16=$YMMr PREG:r:Z=$Kk VREG:r:u16=$YMMn MEM:r:u16=$mem256            SHIFT:r:u8=$shl
  /* 9704 */ &vreg128, &preg0, &vreg153, &vreg129, &shift1, NULL, // VPSHLDW VREG:w:u16=$ZMMr PREG:r:Z=$Kk VREG:r:u16=$ZMMn VREG:r:u16=$ZMMm             SHIFT:r:u8=$shl
  /* 9710 */ &vreg128, &preg0, &vreg153, &mem164, &shift1, NULL, // VPSHLDW VREG:w:u16=$ZMMr PREG:r:Z=$Kk VREG:r:u16=$ZMMn MEM:r:u16=$mem512            SHIFT:r:u8=$shl
  /* 9716 */ &vreg39, &preg0, &vreg130, &vreg41, &shift1, NULL, // VPSHLDD VREG:w:u32=$XMMr PREG:r:Z=$Kk VREG:r:u32=$XMMn VREG:r:u32=$XMMm             SHIFT:r:u8=$shl
  /* 9722 */ &vreg39, &preg0, &vreg130, &mem131, &bcst0, &shift1, NULL, // VPSHLDD VREG:w:u32=$XMMr PREG:r:Z=$Kk VREG:r:u32=$XMMn MEM:r:u32=$mem128 BCST=$BCST SHIFT:r:u8=$shl
  /* 9729 */ &vreg26, &preg0, &vreg68, &vreg45, &shift1, NULL, // VPSHLDQ VREG:w:u64=$XMMr PREG:r:Z=$Kk VREG:r:u64=$XMMn VREG:r:u64=$XMMm             SHIFT:r:u8=$shl
  /* 9735 */ &vreg26, &preg0, &vreg68, &mem95, &bcst0, &shift1, NULL, // VPSHLDQ VREG:w:u64=$XMMr PREG:r:Z=$Kk VREG:r:u64=$XMMn MEM:r:u64=$mem128 BCST=$BCST SHIFT:r:u8=$shl
  /* 9742 */ &vreg110, &preg0, &vreg131, &vreg111, &shift1, NULL, // VPSHLDD VREG:w:u32=$YMMr PREG:r:Z=$Kk VREG:r:u32=$YMMn VREG:r:u32=$YMMm             SHIFT:r:u8=$shl
  /* 9748 */ &vreg110, &preg0, &vreg131, &mem156, &bcst0, &shift1, NULL, // VPSHLDD VREG:w:u32=$YMMr PREG:r:Z=$Kk VREG:r:u32=$YMMn MEM:r:u32=$mem256 BCST=$BCST SHIFT:r:u8=$shl
  /* 9755 */ &vreg69, &preg0, &vreg4, &vreg5, &shift1, NULL, // VPSHLDQ VREG:w:u64=$YMMr PREG:r:Z=$Kk VREG:r:u64=$YMMn VREG:r:u64=$YMMm             SHIFT:r:u8=$shl
  /* 9761 */ &vreg69, &preg0, &vreg4, &mem55, &bcst0, &shift1, NULL, // VPSHLDQ VREG:w:u64=$YMMr PREG:r:Z=$Kk VREG:r:u64=$YMMn MEM:r:u64=$mem256 BCST=$BCST SHIFT:r:u8=$shl
  /* 9768 */ &vreg112, &preg0, &vreg150, &vreg113, &shift1, NULL, // VPSHLDD VREG:w:u32=$ZMMr PREG:r:Z=$Kk VREG:r:u32=$ZMMn VREG:r:u32=$ZMMm             SHIFT:r:u8=$shl
  /* 9774 */ &vreg112, &preg0, &vreg150, &mem48, &bcst0, &shift1, NULL, // VPSHLDD VREG:w:u32=$ZMMr PREG:r:Z=$Kk VREG:r:u32=$ZMMn MEM:r:u32=$mem512 BCST=$BCST SHIFT:r:u8=$shl
  /* 9781 */ &vreg114, &preg0, &vreg159, &vreg85, &shift1, NULL, // VPSHLDQ VREG:w:u64=$ZMMr PREG:r:Z=$Kk VREG:r:u64=$ZMMn VREG:r:u64=$ZMMm             SHIFT:r:u8=$shl
  /* 9787 */ &vreg114, &preg0, &vreg159, &mem141, &bcst0, &shift1, NULL, // VPSHLDQ VREG:w:u64=$ZMMr PREG:r:Z=$Kk VREG:r:u64=$ZMMn MEM:r:u64=$mem512 BCST=$BCST SHIFT:r:u8=$shl
  /* 9794 */ &vreg40, &preg0, &vreg151, &vreg32, &shift0, NULL, // VPSHRDW VREG:w:u16=$XMMr PREG:r:Z=$Kk VREG:r:u16=$XMMn VREG:r:u16=$XMMm             SHIFT:r:u8=$shr
  /* 9800 */ &vreg40, &preg0, &vreg151, &mem125, &shift0, NULL, // VPSHRDW VREG:w:u16=$XMMr PREG:r:Z=$Kk VREG:r:u16=$XMMn MEM:r:u16=$mem128            SHIFT:r:u8=$shr
  /* 9806 */ &vreg126, &preg0, &vreg152, &vreg127, &shift0, NULL, // VPSHRDW VREG:w:u16=$YMMr PREG:r:Z=$Kk VREG:r:u16=$YMMn VREG:r:u16=$YMMm             SHIFT:r:u8=$shr
  /* 9812 */ &vreg126, &preg0, &vreg152, &mem163, &shift0, NULL, // VPSHRDW VREG:w:u16=$YMMr PREG:r:Z=$Kk VREG:r:u16=$YMMn MEM:r:u16=$mem256            SHIFT:r:u8=$shr
  /* 9818 */ &vreg128, &preg0, &vreg153, &vreg129, &shift0, NULL, // VPSHRDW VREG:w:u16=$ZMMr PREG:r:Z=$Kk VREG:r:u16=$ZMMn VREG:r:u16=$ZMMm             SHIFT:r:u8=$shr
  /* 9824 */ &vreg128, &preg0, &vreg153, &mem164, &shift0, NULL, // VPSHRDW VREG:w:u16=$ZMMr PREG:r:Z=$Kk VREG:r:u16=$ZMMn MEM:r:u16=$mem512            SHIFT:r:u8=$shr
  /* 9830 */ &vreg39, &preg0, &vreg130, &vreg41, &shift0, NULL, // VPSHRDD VREG:w:u32=$XMMr PREG:r:Z=$Kk VREG:r:u32=$XMMn VREG:r:u32=$XMMm             SHIFT:r:u8=$shr
  /* 9836 */ &vreg39, &preg0, &vreg130, &mem131, &bcst0, &shift0, NULL, // VPSHRDD VREG:w:u32=$XMMr PREG:r:Z=$Kk VREG:r:u32=$XMMn MEM:r:u32=$mem128 BCST=$BCST SHIFT:r:u8=$shr
  /* 9843 */ &vreg26, &preg0, &vreg68, &vreg45, &shift0, NULL, // VPSHRDQ VREG:w:u64=$XMMr PREG:r:Z=$Kk VREG:r:u64=$XMMn VREG:r:u64=$XMMm             SHIFT:r:u8=$shr
  /* 9849 */ &vreg26, &preg0, &vreg68, &mem95, &bcst0, &shift0, NULL, // VPSHRDQ VREG:w:u64=$XMMr PREG:r:Z=$Kk VREG:r:u64=$XMMn MEM:r:u64=$mem128 BCST=$BCST SHIFT:r:u8=$shr
  /* 9856 */ &vreg110, &preg0, &vreg131, &vreg111, &shift0, NULL, // VPSHRDD VREG:w:u32=$YMMr PREG:r:Z=$Kk VREG:r:u32=$YMMn VREG:r:u32=$YMMm             SHIFT:r:u8=$shr
  /* 9862 */ &vreg110, &preg0, &vreg131, &mem156, &bcst0, &shift0, NULL, // VPSHRDD VREG:w:u32=$YMMr PREG:r:Z=$Kk VREG:r:u32=$YMMn MEM:r:u32=$mem256 BCST=$BCST SHIFT:r:u8=$shr
  /* 9869 */ &vreg69, &preg0, &vreg4, &vreg5, &shift0, NULL, // VPSHRDQ VREG:w:u64=$YMMr PREG:r:Z=$Kk VREG:r:u64=$YMMn VREG:r:u64=$YMMm             SHIFT:r:u8=$shr
  /* 9875 */ &vreg69, &preg0, &vreg4, &mem55, &bcst0, &shift0, NULL, // VPSHRDQ VREG:w:u64=$YMMr PREG:r:Z=$Kk VREG:r:u64=$YMMn MEM:r:u64=$mem256 BCST=$BCST SHIFT:r:u8=$shr
  /* 9882 */ &vreg112, &preg0, &vreg150, &vreg113, &shift0, NULL, // VPSHRDD VREG:w:u32=$ZMMr PREG:r:Z=$Kk VREG:r:u32=$ZMMn VREG:r:u32=$ZMMm             SHIFT:r:u8=$shr
  /* 9888 */ &vreg112, &preg0, &vreg150, &mem48, &bcst0, &shift0, NULL, // VPSHRDD VREG:w:u32=$ZMMr PREG:r:Z=$Kk VREG:r:u32=$ZMMn MEM:r:u32=$mem512 BCST=$BCST SHIFT:r:u8=$shr
  /* 9895 */ &vreg114, &preg0, &vreg159, &vreg85, &shift0, NULL, // VPSHRDQ VREG:w:u64=$ZMMr PREG:r:Z=$Kk VREG:r:u64=$ZMMn VREG:r:u64=$ZMMm             SHIFT:r:u8=$shr
  /* 9901 */ &vreg114, &preg0, &vreg159, &mem141, &bcst0, &shift0, NULL, // VPSHRDQ VREG:w:u64=$ZMMr PREG:r:Z=$Kk VREG:r:u64=$ZMMn MEM:r:u64=$mem512 BCST=$BCST SHIFT:r:u8=$shr
  /* 9908 */ &reg272, &preg0, &vreg68, &vreg28, NULL, // VPSHUFBITQMB REG:w=$Kr PREG:r:Z=$Kk VREG:r:u64=$XMMn VREG:r:u8=$XMMm
  /* 9913 */ &reg272, &preg0, &vreg68, &mem122, NULL, // VPSHUFBITQMB REG:w=$Kr PREG:r:Z=$Kk VREG:r:u64=$XMMn MEM:r:u8=$mem128
  /* 9918 */ &reg272, &preg0, &vreg4, &vreg86, NULL, // VPSHUFBITQMB REG:w=$Kr PREG:r:Z=$Kk VREG:r:u64=$YMMn VREG:r:u8=$YMMm
  /* 9923 */ &reg272, &preg0, &vreg4, &mem142, NULL, // VPSHUFBITQMB REG:w=$Kr PREG:r:Z=$Kk VREG:r:u64=$YMMn MEM:r:u8=$mem256
  /* 9928 */ &reg272, &preg0, &vreg159, &vreg87, NULL, // VPSHUFBITQMB REG:w=$Kr PREG:r:Z=$Kk VREG:r:u64=$ZMMn VREG:r:u8=$ZMMm
  /* 9933 */ &reg272, &preg0, &vreg159, &mem143, NULL, // VPSHUFBITQMB REG:w=$Kr PREG:r:Z=$Kk VREG:r:u64=$ZMMn MEM:r:u8=$mem512
  /* 9938 */ &vreg201, &preg0, &vreg130, &vreg41, &imm0, NULL, // VPTERNLOGD VREG:rw:u32=$XMMr PREG:r:Z=$Kk VREG:r:u32=$XMMn VREG:r:u32=$XMMm             IMM:u8=$uimm8
  /* 9944 */ &vreg201, &preg0, &vreg130, &mem131, &bcst0, &imm0, NULL, // VPTERNLOGD VREG:rw:u32=$XMMr PREG:r:Z=$Kk VREG:r:u32=$XMMn MEM:r:u32=$mem128 BCST=$BCST IMM:u8=$uimm8
  /* 9951 */ &vreg44, &preg0, &vreg68, &vreg45, &imm0, NULL, // VPTERNLOGQ VREG:rw:u64=$XMMr PREG:r:Z=$Kk VREG:r:u64=$XMMn VREG:r:u64=$XMMm             IMM:u8=$uimm8
  /* 9957 */ &vreg44, &preg0, &vreg68, &mem95, &bcst0, &imm0, NULL, // VPTERNLOGQ VREG:rw:u64=$XMMr PREG:r:Z=$Kk VREG:r:u64=$XMMn MEM:r:u64=$mem128 BCST=$BCST IMM:u8=$uimm8
  /* 9964 */ &vreg202, &preg0, &vreg131, &vreg111, &imm0, NULL, // VPTERNLOGD VREG:rw:u32=$YMMr PREG:r:Z=$Kk VREG:r:u32=$YMMn VREG:r:u32=$YMMm             IMM:u8=$uimm8
  /* 9970 */ &vreg202, &preg0, &vreg131, &mem156, &bcst0, &imm0, NULL, // VPTERNLOGD VREG:rw:u32=$YMMr PREG:r:Z=$Kk VREG:r:u32=$YMMn MEM:r:u32=$mem256 BCST=$BCST IMM:u8=$uimm8
  /* 9977 */ &vreg203, &preg0, &vreg4, &vreg5, &imm0, NULL, // VPTERNLOGQ VREG:rw:u64=$YMMr PREG:r:Z=$Kk VREG:r:u64=$YMMn VREG:r:u64=$YMMm             IMM:u8=$uimm8
  /* 9983 */ &vreg203, &preg0, &vreg4, &mem55, &bcst0, &imm0, NULL, // VPTERNLOGQ VREG:rw:u64=$YMMr PREG:r:Z=$Kk VREG:r:u64=$YMMn MEM:r:u64=$mem256 BCST=$BCST IMM:u8=$uimm8
  /* 9990 */ &vreg204, &preg0, &vreg150, &vreg113, &imm0, NULL, // VPTERNLOGD VREG:rw:u32=$ZMMr PREG:r:Z=$Kk VREG:r:u32=$ZMMn VREG:r:u32=$ZMMm             IMM:u8=$uimm8
  /* 9996 */ &vreg204, &preg0, &vreg150, &mem48, &bcst0, &imm0, NULL, // VPTERNLOGD VREG:rw:u32=$ZMMr PREG:r:Z=$Kk VREG:r:u32=$ZMMn MEM:r:u32=$mem512 BCST=$BCST IMM:u8=$uimm8
  /* 10003 */ &vreg205, &preg0, &vreg159, &vreg85, &imm0, NULL, // VPTERNLOGQ VREG:rw:u64=$ZMMr PREG:r:Z=$Kk VREG:r:u64=$ZMMn VREG:r:u64=$ZMMm             IMM:u8=$uimm8
  /* 10009 */ &vreg205, &preg0, &vreg159, &mem141, &bcst0, &imm0, NULL, // VPTERNLOGQ VREG:rw:u64=$ZMMr PREG:r:Z=$Kk VREG:r:u64=$ZMMn MEM:r:u64=$mem512 BCST=$BCST IMM:u8=$uimm8
  /* 10016 */ &vreg19, &preg0, &vreg49, &vreg14, &imm0, NULL, // VRNDSCALESD VREG:w:f64=$XMMr PREG:r:Z=$Kk VREG:r:f64=$XMMn VREG:r:f64=$XMMm          IMM:u8=$uimm8
  /* 10022 */ &vreg19, &preg0, &vreg49, &mem112, &bcst0, &imm0, NULL, // VRANGEPD VREG:w:f64=$XMMr PREG:r:Z=$Kk VREG:r:f64=$XMMn MEM:r:f64=$mem128 BCST=$BCST IMM:u8=$uimm8
  /* 10029 */ &vreg50, &preg0, &vreg51, &vreg52, &imm0, NULL, // VRANGEPD VREG:w:f64=$YMMr PREG:r:Z=$Kk VREG:r:f64=$YMMn VREG:r:f64=$YMMm             IMM:u8=$uimm8
  /* 10035 */ &vreg50, &preg0, &vreg51, &mem132, &bcst0, &imm0, NULL, // VRANGEPD VREG:w:f64=$YMMr PREG:r:Z=$Kk VREG:r:f64=$YMMn MEM:r:f64=$mem256 BCST=$BCST IMM:u8=$uimm8
  /* 10042 */ &vreg53, &preg0, &vreg54, &vreg55, &sae0, &imm0, NULL, // VRANGEPD VREG:w:f64=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMn VREG:r:f64=$ZMMm SAE=$SAE    IMM:u8=$uimm8
  /* 10049 */ &vreg53, &preg0, &vreg54, &vreg55, &imm0, NULL, // VRANGEPD VREG:w:f64=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMn VREG:r:f64=$ZMMm             IMM:u8=$uimm8
  /* 10055 */ &vreg53, &preg0, &vreg54, &mem133, &bcst0, &imm0, NULL, // VRANGEPD VREG:w:f64=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMn MEM:r:f64=$mem512 BCST=$BCST IMM:u8=$uimm8
  /* 10062 */ &vreg7, &preg0, &vreg56, &vreg16, &imm0, NULL, // VRNDSCALESS VREG:w:f32=$XMMr PREG:r:Z=$Kk VREG:r:f32=$XMMn VREG:r:f32=$XMMm          IMM:u8=$uimm8
  /* 10068 */ &vreg7, &preg0, &vreg56, &mem113, &bcst0, &imm0, NULL, // VRANGEPS VREG:w:f32=$XMMr PREG:r:Z=$Kk VREG:r:f32=$XMMn MEM:r:f32=$mem128 BCST=$BCST IMM:u8=$uimm8
  /* 10075 */ &vreg9, &preg0, &vreg57, &vreg58, &imm0, NULL, // VRANGEPS VREG:w:f32=$YMMr PREG:r:Z=$Kk VREG:r:f32=$YMMn VREG:r:f32=$YMMm             IMM:u8=$uimm8
  /* 10081 */ &vreg9, &preg0, &vreg57, &mem134, &bcst0, &imm0, NULL, // VRANGEPS VREG:w:f32=$YMMr PREG:r:Z=$Kk VREG:r:f32=$YMMn MEM:r:f32=$mem256 BCST=$BCST IMM:u8=$uimm8
  /* 10088 */ &vreg59, &preg0, &vreg60, &vreg61, &sae0, &imm0, NULL, // VRANGEPS VREG:w:f32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMn VREG:r:f32=$ZMMm SAE=$SAE    IMM:u8=$uimm8
  /* 10095 */ &vreg59, &preg0, &vreg60, &vreg61, &imm0, NULL, // VRANGEPS VREG:w:f32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMn VREG:r:f32=$ZMMm             IMM:u8=$uimm8
  /* 10101 */ &vreg59, &preg0, &vreg60, &mem135, &bcst0, &imm0, NULL, // VRANGEPS VREG:w:f32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMn MEM:r:f32=$mem512 BCST=$BCST IMM:u8=$uimm8
  /* 10108 */ &vreg19, &preg0, &vreg49, &vreg14, &sae0, &imm0, NULL, // VRNDSCALESD VREG:w:f64=$XMMr PREG:r:Z=$Kk VREG:r:f64=$XMMn VREG:r:f64=$XMMm SAE=$SAE IMM:u8=$uimm8
  /* 10115 */ &vreg19, &preg0, &vreg49, &mem76, &imm0, NULL, // VRNDSCALESD VREG:w:f64=$XMMr PREG:r:Z=$Kk VREG:r:f64=$XMMn MEM:r:f64=$mem64          IMM:u8=$uimm8
  /* 10121 */ &vreg7, &preg0, &vreg56, &vreg16, &sae0, &imm0, NULL, // VRNDSCALESS VREG:w:f32=$XMMr PREG:r:Z=$Kk VREG:r:f32=$XMMn VREG:r:f32=$XMMm SAE=$SAE IMM:u8=$uimm8
  /* 10128 */ &vreg7, &preg0, &vreg56, &mem75, &imm0, NULL, // VRNDSCALESS VREG:w:f32=$XMMr PREG:r:Z=$Kk VREG:r:f32=$XMMn MEM:r:f32=$mem32          IMM:u8=$uimm8
  /* 10134 */ &vreg19, &preg0, &vreg14, &imm0, NULL, // VRNDSCALEPD VREG:w:f64=$XMMr PREG:r:Z=$Kk VREG:r:f64=$XMMm             IMM:u8=$uimm8
  /* 10139 */ &vreg19, &preg0, &mem112, &bcst0, &imm0, NULL, // VRNDSCALEPD VREG:w:f64=$XMMr PREG:r:Z=$Kk MEM:r:f64=$mem128 BCST=$BCST IMM:u8=$uimm8
  /* 10145 */ &vreg50, &preg0, &vreg52, &imm0, NULL, // VRNDSCALEPD VREG:w:f64=$YMMr PREG:r:Z=$Kk VREG:r:f64=$YMMm             IMM:u8=$uimm8
  /* 10150 */ &vreg50, &preg0, &mem132, &bcst0, &imm0, NULL, // VRNDSCALEPD VREG:w:f64=$YMMr PREG:r:Z=$Kk MEM:r:f64=$mem256 BCST=$BCST IMM:u8=$uimm8
  /* 10156 */ &vreg53, &preg0, &vreg55, &sae0, &imm0, NULL, // VRNDSCALEPD VREG:w:f64=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMm SAE=$SAE    IMM:u8=$uimm8
  /* 10162 */ &vreg53, &preg0, &vreg55, &imm0, NULL, // VRNDSCALEPD VREG:w:f64=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMm             IMM:u8=$uimm8
  /* 10167 */ &vreg53, &preg0, &mem133, &bcst0, &imm0, NULL, // VRNDSCALEPD VREG:w:f64=$ZMMr PREG:r:Z=$Kk MEM:r:f64=$mem512 BCST=$BCST IMM:u8=$uimm8
  /* 10173 */ &vreg7, &preg0, &vreg16, &imm0, NULL, // VRNDSCALEPS VREG:w:f32=$XMMr PREG:r:Z=$Kk VREG:r:f32=$XMMm             IMM:u8=$uimm8
  /* 10178 */ &vreg7, &preg0, &mem113, &bcst0, &imm0, NULL, // VRNDSCALEPS VREG:w:f32=$XMMr PREG:r:Z=$Kk MEM:r:f32=$mem128 BCST=$BCST IMM:u8=$uimm8
  /* 10184 */ &vreg9, &preg0, &vreg58, &imm0, NULL, // VRNDSCALEPS VREG:w:f32=$YMMr PREG:r:Z=$Kk VREG:r:f32=$YMMm             IMM:u8=$uimm8
  /* 10189 */ &vreg9, &preg0, &mem134, &bcst0, &imm0, NULL, // VRNDSCALEPS VREG:w:f32=$YMMr PREG:r:Z=$Kk MEM:r:f32=$mem256 BCST=$BCST IMM:u8=$uimm8
  /* 10195 */ &vreg59, &preg0, &vreg61, &sae0, &imm0, NULL, // VRNDSCALEPS VREG:w:f32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMm SAE=$SAE    IMM:u8=$uimm8
  /* 10201 */ &vreg59, &preg0, &vreg61, &imm0, NULL, // VRNDSCALEPS VREG:w:f32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMm             IMM:u8=$uimm8
  /* 10206 */ &vreg59, &preg0, &mem135, &bcst0, &imm0, NULL, // VRNDSCALEPS VREG:w:f32=$ZMMr PREG:r:Z=$Kk MEM:r:f32=$mem512 BCST=$BCST IMM:u8=$uimm8
  /* 10212 */ &mem208, &preg1, &vreg23, NULL, // VSCATTERQPD MEM:w:f64=$vmx64 PREG:rw=$Kk VREG:r:f64=$XMMr
  /* 10216 */ &mem209, &preg1, &vreg11, NULL, // VSCATTERQPS MEM:w:f32=$vmx32 PREG:rw=$Kk VREG:r:f32=$XMMr
  /* 10220 */ &mem208, &preg1, &vreg90, NULL, // VSCATTERDPD MEM:w:f64=$vmx64 PREG:rw=$Kk VREG:r:f64=$YMMr
  /* 10224 */ &mem210, &preg1, &vreg12, NULL, // VSCATTERDPS MEM:w:f32=$vmy32 PREG:rw=$Kk VREG:r:f32=$YMMr
  /* 10228 */ &mem211, &preg1, &vreg92, NULL, // VSCATTERDPD MEM:w:f64=$vmy64 PREG:rw=$Kk VREG:r:f64=$ZMMr
  /* 10232 */ &mem212, &preg1, &vreg95, NULL, // VSCATTERDPS MEM:w:f32=$vmz32 PREG:rw=$Kk VREG:r:f32=$ZMMr
  /* 10236 */ &mem211, &preg1, &vreg90, NULL, // VSCATTERQPD MEM:w:f64=$vmy64 PREG:rw=$Kk VREG:r:f64=$YMMr
  /* 10240 */ &mem210, &preg1, &vreg11, NULL, // VSCATTERQPS MEM:w:f32=$vmy32 PREG:rw=$Kk VREG:r:f32=$XMMr
  /* 10244 */ &mem213, &preg1, &vreg92, NULL, // VSCATTERQPD MEM:w:f64=$vmz64 PREG:rw=$Kk VREG:r:f64=$ZMMr
  /* 10248 */ &mem212, &preg1, &vreg12, NULL, // VSCATTERQPS MEM:w:f32=$vmz32 PREG:rw=$Kk VREG:r:f32=$YMMr
  /* 10252 */ &vreg110, &preg0, &vreg131, &vreg111, &order0, NULL, // VSHUFI32X4 VREG:w:u32=$YMMr PREG:r:Z=$Kk VREG:r:u32=$YMMn VREG:r:u32=$YMMm             ORDER:r:u8=$order
  /* 10258 */ &vreg110, &preg0, &vreg131, &mem156, &bcst0, &order0, NULL, // VSHUFI32X4 VREG:w:u32=$YMMr PREG:r:Z=$Kk VREG:r:u32=$YMMn MEM:r:u32=$mem256 BCST=$BCST ORDER:r:u8=$order
  /* 10265 */ &vreg69, &preg0, &vreg4, &vreg5, &order0, NULL, // VSHUFI64X2 VREG:w:u64=$YMMr PREG:r:Z=$Kk VREG:r:u64=$YMMn VREG:r:u64=$YMMm             ORDER:r:u8=$order
  /* 10271 */ &vreg69, &preg0, &vreg4, &mem55, &bcst0, &order0, NULL, // VSHUFI64X2 VREG:w:u64=$YMMr PREG:r:Z=$Kk VREG:r:u64=$YMMn MEM:r:u64=$mem256 BCST=$BCST ORDER:r:u8=$order
  /* 10278 */ &vreg112, &preg0, &vreg150, &vreg113, &order0, NULL, // VSHUFI32X4 VREG:w:u32=$ZMMr PREG:r:Z=$Kk VREG:r:u32=$ZMMn VREG:r:u32=$ZMMm             ORDER:r:u8=$order
  /* 10284 */ &vreg112, &preg0, &vreg150, &mem48, &bcst0, &order0, NULL, // VSHUFI32X4 VREG:w:u32=$ZMMr PREG:r:Z=$Kk VREG:r:u32=$ZMMn MEM:r:u32=$mem512 BCST=$BCST ORDER:r:u8=$order
  /* 10291 */ &vreg114, &preg0, &vreg159, &vreg85, &order0, NULL, // VSHUFI64X2 VREG:w:u64=$ZMMr PREG:r:Z=$Kk VREG:r:u64=$ZMMn VREG:r:u64=$ZMMm             ORDER:r:u8=$order
  /* 10297 */ &vreg114, &preg0, &vreg159, &mem141, &bcst0, &order0, NULL, // VSHUFI64X2 VREG:w:u64=$ZMMr PREG:r:Z=$Kk VREG:r:u64=$ZMMn MEM:r:u64=$mem512 BCST=$BCST ORDER:r:u8=$order
  /* 10304 */ &vreg90, &vreg52, NULL, // VTESTPD VREG:r:f64=$YMMr VREG:r:f64=$YMMm
  /* 10307 */ &vreg23, &mem112, NULL, // VTESTPD VREG:r:f64=$XMMr MEM:r:f64=$mem128
  /* 10310 */ &vreg90, &mem132, NULL, // VTESTPD VREG:r:f64=$YMMr MEM:r:f64=$mem256
  /* 10313 */ &vreg12, &vreg58, NULL, // VTESTPS VREG:r:f32=$YMMr VREG:r:f32=$YMMm
  /* 10316 */ &vreg11, &mem113, NULL, // VTESTPS VREG:r:f32=$XMMr MEM:r:f32=$mem128
  /* 10319 */ &vreg12, &mem134, NULL, // VTESTPS VREG:r:f32=$YMMr MEM:r:f32=$mem256
  /* 10322 */ &reg297, &reg298, &imm7, NULL, // BEXTR REG:w:sx=$GPRyr   REG:r:sx=$GPRym   IMM:s32=$simm32
  /* 10326 */ &reg297, &mem99, &imm7, NULL, // BEXTR REG:w:sx=$GPRyr   MEM:r:sx=$memy    IMM:s32=$simm32
  /* 10330 */ &reg17, &reg14, &imm7, NULL, // BEXTR REG:w:s32=$GPR32r REG:r:s32=$GPR32m IMM:s32=$simm32
  /* 10334 */ &reg17, &mem4, &imm7, NULL, // BEXTR REG:w:s32=$GPR32r MEM:r:s32=$mem32  IMM:s32=$simm32
  /* 10338 */ &reg299, &reg88, NULL, // TZMSK REG:w:sx=$GPRyn   REG:r:sx=$GPRvm
  /* 10341 */ &reg299, &mem99, NULL, // TZMSK REG:w:sx=$GPRyn   MEM:r:sx=$memy
  /* 10344 */ &reg23, &reg300, NULL, // T1MSKC REG:w:s32=$GPR32n REG:r:s32=$GPRvm
  /* 10347 */ &reg40, NULL, // VMRUN REG:r=$AXv
  /* 10349 */ &reg301, &imm0, &imm0, NULL, // EXTRQ REG:w:s64=$XMMm IMM:u8=$uimm8    IMM:u8=$uimm8
  /* 10353 */ &reg265, &vreg1, NULL, // INSERTQ REG:w:s64=$XMMr VREG:r:s32=$XMMm
  /* 10356 */ &reg265, &reg255, &imm6, &imm6, NULL, // INSERTQ REG:w:s64=$XMMr REG:r:s64=$XMMm  IMM:u8=$index IMM:u8=$index
  /* 10361 */ &reg302, NULL, // SLWPCB REG:w:sx=$GPRym
  /* 10363 */ &reg299, &reg14, &imm7, NULL, // LWPVAL REG:w:sx=$GPRyn REG:r:s32=$GPR32m IMM:s32=$simm32
  /* 10367 */ &reg299, &mem4, &imm7, NULL, // LWPVAL REG:w:sx=$GPRyn MEM:r:s32=$mem32  IMM:s32=$simm32
  /* 10371 */ &reg303, &reg304, &reg305, NULL, // RDPRU REG:SUPP:w:s32=EDX REG:SUPP:w:s32=EAX REG:SUPP:r:s32=ECX
  /* 10375 */ &reg40, &reg306, NULL, // INVLPGA REG:r=$AXv REG:r=ECX
  /* 10378 */ &reg119, NULL, // SKINIT REG:r=EAX
  /* 10380 */ &reg29, &reg161, &reg162, &reg163, &reg96, NULL, // SYSCALL REG:SUPP:w=$IPa REG:SUPP:w=RCX REG:SUPP:w=R11 REG:SUPP:w=CS REG:SUPP:w=SS
  /* 10386 */ &reg27, &reg48, &reg166, &reg163, &reg96, NULL, // SYSRET REG:SUPP:w=EIP REG:SUPP:r=RCX REG:SUPP:r=R11 REG:SUPP:w=CS REG:SUPP:w=SS
  /* 10392 */ &vreg19, &vreg49, &vreg221, &vreg14, NULL, // VFNMSUBPD VREG:w:f64=$XMMr VREG:r:f64=$XMMn VREG:r:f64=$XMMis4 VREG:r:f64=$XMMm
  /* 10397 */ &vreg50, &vreg51, &vreg222, &vreg52, NULL, // VFNMSUBPD VREG:w:f64=$YMMr VREG:r:f64=$YMMn VREG:r:f64=$YMMis4 VREG:r:f64=$YMMm
  /* 10402 */ &vreg19, &vreg49, &vreg221, &mem112, NULL, // VFNMSUBPD VREG:w:f64=$XMMr VREG:r:f64=$XMMn VREG:r:f64=$XMMis4 MEM:r:f64=$mem128
  /* 10407 */ &vreg50, &vreg51, &vreg222, &mem132, NULL, // VFNMSUBPD VREG:w:f64=$YMMr VREG:r:f64=$YMMn VREG:r:f64=$YMMis4 MEM:r:f64=$mem256
  /* 10412 */ &vreg19, &vreg49, &vreg14, &vreg221, NULL, // VFNMSUBPD VREG:w:f64=$XMMr VREG:r:f64=$XMMn VREG:r:f64=$XMMm   VREG:r:f64=$XMMis4
  /* 10417 */ &vreg50, &vreg51, &vreg52, &vreg222, NULL, // VFNMSUBPD VREG:w:f64=$YMMr VREG:r:f64=$YMMn VREG:r:f64=$YMMm   VREG:r:f64=$YMMis4
  /* 10422 */ &vreg19, &vreg49, &mem112, &vreg221, NULL, // VFNMSUBPD VREG:w:f64=$XMMr VREG:r:f64=$XMMn MEM:r:f64=$mem128  VREG:r:f64=$XMMis4
  /* 10427 */ &vreg50, &vreg51, &mem132, &vreg222, NULL, // VFNMSUBPD VREG:w:f64=$YMMr VREG:r:f64=$YMMn MEM:r:f64=$mem256  VREG:r:f64=$YMMis4
  /* 10432 */ &vreg7, &vreg56, &vreg223, &vreg16, NULL, // VFNMSUBPS VREG:w:f32=$XMMr VREG:r:f32=$XMMn VREG:r:f32=$XMMis4 VREG:r:f32=$XMMm
  /* 10437 */ &vreg9, &vreg57, &vreg224, &vreg58, NULL, // VFNMSUBPS VREG:w:f32=$YMMr VREG:r:f32=$YMMn VREG:r:f32=$YMMis4 VREG:r:f32=$YMMm
  /* 10442 */ &vreg7, &vreg56, &vreg223, &mem113, NULL, // VFNMSUBPS VREG:w:f32=$XMMr VREG:r:f32=$XMMn VREG:r:f32=$XMMis4 MEM:r:f32=$mem128
  /* 10447 */ &vreg9, &vreg57, &vreg224, &mem134, NULL, // VFNMSUBPS VREG:w:f32=$YMMr VREG:r:f32=$YMMn VREG:r:f32=$YMMis4 MEM:r:f32=$mem256
  /* 10452 */ &vreg7, &vreg56, &vreg16, &vreg223, NULL, // VFNMSUBPS VREG:w:f32=$XMMr VREG:r:f32=$XMMn VREG:r:f32=$XMMm   VREG:r:f32=$XMMis4
  /* 10457 */ &vreg9, &vreg57, &vreg58, &vreg224, NULL, // VFNMSUBPS VREG:w:f32=$YMMr VREG:r:f32=$YMMn VREG:r:f32=$YMMm   VREG:r:f32=$YMMis4
  /* 10462 */ &vreg7, &vreg56, &mem113, &vreg223, NULL, // VFNMSUBPS VREG:w:f32=$XMMr VREG:r:f32=$XMMn MEM:r:f32=$mem128  VREG:r:f32=$XMMis4
  /* 10467 */ &vreg9, &vreg57, &mem134, &vreg224, NULL, // VFNMSUBPS VREG:w:f32=$YMMr VREG:r:f32=$YMMn MEM:r:f32=$mem256  VREG:r:f32=$YMMis4
  /* 10472 */ &vreg19, &vreg49, &vreg221, &reg241, NULL, // VFNMSUBSD VREG:w:f64=$XMMr VREG:r:f64=$XMMn VREG:r:f64=$XMMis4 REG:r:f64=$XMMm
  /* 10477 */ &vreg19, &vreg49, &vreg221, &mem76, NULL, // VFNMSUBSD VREG:w:f64=$XMMr VREG:r:f64=$XMMn VREG:r:f64=$XMMis4 MEM:r:f64=$mem64
  /* 10482 */ &vreg19, &vreg49, &reg241, &vreg221, NULL, // VFNMSUBSD VREG:w:f64=$XMMr VREG:r:f64=$XMMn REG:r:f64=$XMMm    VREG:r:f64=$XMMis4
  /* 10487 */ &vreg19, &vreg49, &mem76, &vreg221, NULL, // VFNMSUBSD VREG:w:f64=$XMMr VREG:r:f64=$XMMn MEM:r:f64=$mem64   VREG:r:f64=$XMMis4
  /* 10492 */ &vreg7, &vreg56, &vreg223, &reg243, NULL, // VFNMSUBSS VREG:w:f32=$XMMr VREG:r:f32=$XMMn VREG:r:f32=$XMMis4 REG:r:f32=$XMMm
  /* 10497 */ &vreg7, &vreg56, &vreg223, &mem75, NULL, // VFNMSUBSS VREG:w:f32=$XMMr VREG:r:f32=$XMMn VREG:r:f32=$XMMis4 MEM:r:f32=$mem32
  /* 10502 */ &vreg7, &vreg56, &reg243, &vreg223, NULL, // VFNMSUBSS VREG:w:f32=$XMMr VREG:r:f32=$XMMn REG:r:f32=$XMMm    VREG:r:f32=$XMMis4
  /* 10507 */ &vreg7, &vreg56, &mem75, &vreg223, NULL, // VFNMSUBSS VREG:w:f32=$XMMr VREG:r:f32=$XMMn MEM:r:f32=$mem32   VREG:r:f32=$XMMis4
  /* 10512 */ &vreg19, &vreg49, &vreg221, &vreg14, &ctl0, NULL, // VPERMIL2PD VREG:w:f64=$XMMr VREG:r:f64=$XMMn VREG:r:f64=$XMMis4 VREG:r:f64=$XMMm   CTL:r:u8=$ctl
  /* 10518 */ &vreg50, &vreg51, &vreg222, &vreg52, &ctl0, NULL, // VPERMIL2PD VREG:w:f64=$YMMr VREG:r:f64=$YMMn VREG:r:f64=$YMMis4 VREG:r:f64=$YMMm   CTL:r:u8=$ctl
  /* 10524 */ &vreg19, &vreg49, &vreg221, &mem112, &ctl0, NULL, // VPERMIL2PD VREG:w:f64=$XMMr VREG:r:f64=$XMMn VREG:r:f64=$XMMis4 MEM:r:f64=$mem128  CTL:r:u8=$ctl
  /* 10530 */ &vreg50, &vreg51, &vreg222, &mem132, &ctl0, NULL, // VPERMIL2PD VREG:w:f64=$YMMr VREG:r:f64=$YMMn VREG:r:f64=$YMMis4 MEM:r:f64=$mem256  CTL:r:u8=$ctl
  /* 10536 */ &vreg19, &vreg49, &vreg14, &vreg221, &ctl0, NULL, // VPERMIL2PD VREG:w:f64=$XMMr VREG:r:f64=$XMMn VREG:r:f64=$XMMm   VREG:r:f64=$XMMis4 CTL:r:u8=$ctl
  /* 10542 */ &vreg50, &vreg51, &vreg52, &vreg222, &ctl0, NULL, // VPERMIL2PD VREG:w:f64=$YMMr VREG:r:f64=$YMMn VREG:r:f64=$YMMm   VREG:r:f64=$YMMis4 CTL:r:u8=$ctl
  /* 10548 */ &vreg19, &vreg49, &mem112, &vreg221, &ctl0, NULL, // VPERMIL2PD VREG:w:f64=$XMMr VREG:r:f64=$XMMn MEM:r:f64=$mem128  VREG:r:f64=$XMMis4 CTL:r:u8=$ctl
  /* 10554 */ &vreg50, &vreg51, &mem132, &vreg222, &ctl0, NULL, // VPERMIL2PD VREG:w:f64=$YMMr VREG:r:f64=$YMMn MEM:r:f64=$mem256  VREG:r:f64=$YMMis4 CTL:r:u8=$ctl
  /* 10560 */ &vreg39, &mem125, NULL, // VPHADDUWD VREG:w:u32=$XMMr MEM:r:u16=$mem128
  /* 10563 */ &vreg19, &reg241, NULL, // VFRCZSD VREG:w:f64=$XMMr REG:r:f64=$XMMm
  /* 10566 */ &vreg7, &reg243, NULL, // VFRCZSS VREG:w:f32=$XMMr REG:r:f32=$XMMm
  /* 10569 */ &vreg225, &vreg226, &vreg227, &vreg228, NULL, // VPCMOV VREG:w=$XMMr VREG:r=$XMMn VREG:r=$XMMis4 VREG:r=$XMMm
  /* 10574 */ &vreg229, &vreg230, &vreg231, &vreg232, NULL, // VPCMOV VREG:w=$YMMr VREG:r=$YMMn VREG:r=$YMMis4 VREG:r=$YMMm
  /* 10579 */ &vreg225, &vreg226, &vreg227, &mem214, NULL, // VPCMOV VREG:w=$XMMr VREG:r=$XMMn VREG:r=$XMMis4 MEM:r=$mem128
  /* 10584 */ &vreg229, &vreg230, &vreg231, &mem215, NULL, // VPCMOV VREG:w=$YMMr VREG:r=$YMMn VREG:r=$YMMis4 MEM:r=$mem256
  /* 10589 */ &vreg225, &vreg226, &vreg228, &vreg227, NULL, // VPCMOV VREG:w=$XMMr VREG:r=$XMMn VREG:r=$XMMm   VREG:r=$XMMis4
  /* 10594 */ &vreg229, &vreg230, &vreg232, &vreg231, NULL, // VPCMOV VREG:w=$YMMr VREG:r=$YMMn VREG:r=$YMMm   VREG:r=$YMMis4
  /* 10599 */ &vreg225, &vreg226, &mem214, &vreg227, NULL, // VPCMOV VREG:w=$XMMr VREG:r=$XMMn MEM:r=$mem128  VREG:r=$XMMis4
  /* 10604 */ &vreg229, &vreg230, &mem215, &vreg231, NULL, // VPCMOV VREG:w=$YMMr VREG:r=$YMMn MEM:r=$mem256  VREG:r=$YMMis4
  /* 10609 */ &vreg132, &vreg154, &vreg35, &imm0, NULL, // VPCOMB VREG:w:s8=$XMMr VREG:r:s8=$XMMn VREG:r:s8=$XMMm  IMM:u8=$uimm8
  /* 10614 */ &vreg132, &vreg154, &mem126, &imm0, NULL, // VPCOMB VREG:w:s8=$XMMr VREG:r:s8=$XMMn MEM:r:s8=$mem128 IMM:u8=$uimm8
  /* 10619 */ &vreg2, &vreg62, &vreg1, &imm0, NULL, // VPCOMD VREG:w:s32=$XMMr VREG:r:s32=$XMMn VREG:r:s32=$XMMm  IMM:u8=$uimm8
  /* 10624 */ &vreg2, &vreg62, &mem6, &imm0, NULL, // VPCOMD VREG:w:s32=$XMMr VREG:r:s32=$XMMn MEM:r:s32=$mem128 IMM:u8=$uimm8
  /* 10629 */ &vreg37, &vreg157, &vreg137, &imm0, NULL, // VPCOMQ VREG:w:s64=$XMMr VREG:r:s64=$XMMn VREG:r:s64=$XMMm  IMM:u8=$uimm8
  /* 10634 */ &vreg37, &vreg157, &mem167, &imm0, NULL, // VPCOMQ VREG:w:s64=$XMMr VREG:r:s64=$XMMn MEM:r:s64=$mem128 IMM:u8=$uimm8
  /* 10639 */ &vreg26, &vreg68, &vreg45, &imm0, NULL, // VPCOMUQ VREG:w:u64=$XMMr VREG:r:u64=$XMMn VREG:r:u64=$XMMm  IMM:u8=$uimm8
  /* 10644 */ &vreg26, &vreg68, &mem95, &imm0, NULL, // VPCOMUQ VREG:w:u64=$XMMr VREG:r:u64=$XMMn MEM:r:u64=$mem128 IMM:u8=$uimm8
  /* 10649 */ &vreg38, &vreg147, &vreg30, &imm0, NULL, // VPCOMW VREG:w:s16=$XMMr VREG:r:s16=$XMMn VREG:r:s16=$XMMm  IMM:u8=$uimm8
  /* 10654 */ &vreg38, &vreg147, &mem123, &imm0, NULL, // VPCOMW VREG:w:s16=$XMMr VREG:r:s16=$XMMn MEM:r:s16=$mem128 IMM:u8=$uimm8
  /* 10659 */ &vreg7, &vreg56, &vreg223, &vreg16, &ctl0, NULL, // VPERMIL2PS VREG:w:f32=$XMMr VREG:r:f32=$XMMn VREG:r:f32=$XMMis4 VREG:r:f32=$XMMm   CTL:r:u8=$ctl
  /* 10665 */ &vreg9, &vreg57, &vreg224, &vreg58, &ctl0, NULL, // VPERMIL2PS VREG:w:f32=$YMMr VREG:r:f32=$YMMn VREG:r:f32=$YMMis4 VREG:r:f32=$YMMm   CTL:r:u8=$ctl
  /* 10671 */ &vreg7, &vreg56, &vreg223, &mem113, &ctl0, NULL, // VPERMIL2PS VREG:w:f32=$XMMr VREG:r:f32=$XMMn VREG:r:f32=$XMMis4 MEM:r:f32=$mem128  CTL:r:u8=$ctl
  /* 10677 */ &vreg9, &vreg57, &vreg224, &mem134, &ctl0, NULL, // VPERMIL2PS VREG:w:f32=$YMMr VREG:r:f32=$YMMn VREG:r:f32=$YMMis4 MEM:r:f32=$mem256  CTL:r:u8=$ctl
  /* 10683 */ &vreg7, &vreg56, &vreg16, &vreg223, &ctl0, NULL, // VPERMIL2PS VREG:w:f32=$XMMr VREG:r:f32=$XMMn VREG:r:f32=$XMMm   VREG:r:f32=$XMMis4 CTL:r:u8=$ctl
  /* 10689 */ &vreg9, &vreg57, &vreg58, &vreg224, &ctl0, NULL, // VPERMIL2PS VREG:w:f32=$YMMr VREG:r:f32=$YMMn VREG:r:f32=$YMMm   VREG:r:f32=$YMMis4 CTL:r:u8=$ctl
  /* 10695 */ &vreg7, &vreg56, &mem113, &vreg223, &ctl0, NULL, // VPERMIL2PS VREG:w:f32=$XMMr VREG:r:f32=$XMMn MEM:r:f32=$mem128  VREG:r:f32=$XMMis4 CTL:r:u8=$ctl
  /* 10701 */ &vreg9, &vreg57, &mem134, &vreg224, &ctl0, NULL, // VPERMIL2PS VREG:w:f32=$YMMr VREG:r:f32=$YMMn MEM:r:f32=$mem256  VREG:r:f32=$YMMis4 CTL:r:u8=$ctl
  /* 10707 */ &vreg2, &mem126, NULL, // VPHADDBD VREG:w:s32=$XMMr MEM:r:s8=$mem128
  /* 10710 */ &vreg37, &mem126, NULL, // VPHADDBQ VREG:w:s64=$XMMr MEM:r:s8=$mem128
  /* 10713 */ &vreg132, &vreg35, NULL, // VPHADDBW VREG:w:s8=$XMMr VREG:r:s8=$XMMm
  /* 10716 */ &vreg132, &mem126, NULL, // VPHADDBW VREG:w:s8=$XMMr MEM:r:s8=$mem128
  /* 10719 */ &vreg37, &mem6, NULL, // VPHSUBDQ VREG:w:s64=$XMMr MEM:r:s32=$mem128
  /* 10722 */ &vreg39, &mem122, NULL, // VPHADDUBD VREG:w:u32=$XMMr MEM:r:u8=$mem128
  /* 10725 */ &vreg26, &mem122, NULL, // VPHADDUBQ VREG:w:u64=$XMMr MEM:r:u8=$mem128
  /* 10728 */ &vreg40, &mem122, NULL, // VPHADDUBW VREG:w:u16=$XMMr MEM:r:u8=$mem128
  /* 10731 */ &vreg26, &mem131, NULL, // VPHADDUDQ VREG:w:u64=$XMMr MEM:r:u32=$mem128
  /* 10734 */ &vreg26, &mem125, NULL, // VPHADDUWQ VREG:w:u64=$XMMr MEM:r:u16=$mem128
  /* 10737 */ &vreg2, &mem123, NULL, // VPHSUBWD VREG:w:s32=$XMMr MEM:r:s16=$mem128
  /* 10740 */ &vreg37, &mem123, NULL, // VPHADDWQ VREG:w:s64=$XMMr MEM:r:s16=$mem128
  /* 10743 */ &vreg38, &mem126, NULL, // VPHSUBBW VREG:w:s16=$XMMr MEM:r:s8=$mem128
  /* 10746 */ &vreg2, &vreg62, &vreg1, &vreg233, NULL, // VPMACSSDD VREG:w:s32=$XMMr VREG:r:s32=$XMMn VREG:r:s32=$XMMm  VREG:r:s32=$XMMis4
  /* 10751 */ &vreg2, &vreg62, &mem6, &vreg233, NULL, // VPMACSSDD VREG:w:s32=$XMMr VREG:r:s32=$XMMn MEM:r:s32=$mem128 VREG:r:s32=$XMMis4
  /* 10756 */ &vreg37, &vreg62, &vreg1, &vreg234, NULL, // VPMACSSDQL VREG:w:s64=$XMMr VREG:r:s32=$XMMn VREG:r:s32=$XMMm  VREG:r:s64=$XMMis4
  /* 10761 */ &vreg37, &vreg62, &mem6, &vreg234, NULL, // VPMACSSDQL VREG:w:s64=$XMMr VREG:r:s32=$XMMn MEM:r:s32=$mem128 VREG:r:s64=$XMMis4
  /* 10766 */ &vreg2, &vreg147, &vreg30, &vreg233, NULL, // VPMADCSWD VREG:w:s32=$XMMr VREG:r:s16=$XMMn VREG:r:s16=$XMMm  VREG:r:s32=$XMMis4
  /* 10771 */ &vreg2, &vreg147, &mem123, &vreg233, NULL, // VPMADCSWD VREG:w:s32=$XMMr VREG:r:s16=$XMMn MEM:r:s16=$mem128 VREG:r:s32=$XMMis4
  /* 10776 */ &vreg38, &vreg147, &vreg30, &vreg235, NULL, // VPPERM VREG:w:s16=$XMMr VREG:r:s16=$XMMn VREG:r:s16=$XMMm   VREG:r:s16=$XMMis4
  /* 10781 */ &vreg38, &vreg147, &mem123, &vreg235, NULL, // VPPERM VREG:w:s16=$XMMr VREG:r:s16=$XMMn MEM:r:s16=$mem128  VREG:r:s16=$XMMis4
  /* 10786 */ &vreg38, &vreg147, &vreg235, &vreg30, NULL, // VPPERM VREG:w:s16=$XMMr VREG:r:s16=$XMMn VREG:r:s16=$XMMis4 VREG:r:s16=$XMMm
  /* 10791 */ &vreg38, &vreg147, &vreg235, &mem123, NULL, // VPPERM VREG:w:s16=$XMMr VREG:r:s16=$XMMn VREG:r:s16=$XMMis4 MEM:r:s16=$mem128
  /* 10796 */ &vreg79, &vreg28, &vreg80, NULL, // VPSHLB VREG:w:u8=$XMMr VREG:r:u8=$XMMm  VREG:r:u8=$XMMn
  /* 10800 */ &vreg79, &mem122, &vreg80, NULL, // VPSHLB VREG:w:u8=$XMMr MEM:r:u8=$mem128 VREG:r:u8=$XMMn
  /* 10804 */ &vreg79, &vreg28, &imm0, NULL, // VPROTB VREG:w:u8=$XMMr VREG:r:u8=$XMMm  IMM:u8=$uimm8
  /* 10808 */ &vreg79, &mem122, &imm0, NULL, // VPROTB VREG:w:u8=$XMMr MEM:r:u8=$mem128 IMM:u8=$uimm8
  /* 10812 */ &vreg39, &vreg41, &vreg130, NULL, // VPSHLD VREG:w:u32=$XMMr VREG:r:u32=$XMMm  VREG:r:u32=$XMMn
  /* 10816 */ &vreg39, &mem131, &vreg130, NULL, // VPSHLD VREG:w:u32=$XMMr MEM:r:u32=$mem128 VREG:r:u32=$XMMn
  /* 10820 */ &vreg39, &vreg41, &imm0, NULL, // VPROTD VREG:w:u32=$XMMr VREG:r:u32=$XMMm  IMM:u8=$uimm8
  /* 10824 */ &vreg39, &mem131, &imm0, NULL, // VPROTD VREG:w:u32=$XMMr MEM:r:u32=$mem128 IMM:u8=$uimm8
  /* 10828 */ &vreg26, &vreg45, &vreg68, NULL, // VPSHLQ VREG:w:u64=$XMMr VREG:r:u64=$XMMm  VREG:r:u64=$XMMn
  /* 10832 */ &vreg26, &mem95, &vreg68, NULL, // VPSHLQ VREG:w:u64=$XMMr MEM:r:u64=$mem128 VREG:r:u64=$XMMn
  /* 10836 */ &vreg26, &vreg45, &imm0, NULL, // VPROTQ VREG:w:u64=$XMMr VREG:r:u64=$XMMm  IMM:u8=$uimm8
  /* 10840 */ &vreg26, &mem95, &imm0, NULL, // VPROTQ VREG:w:u64=$XMMr MEM:r:u64=$mem128 IMM:u8=$uimm8
  /* 10844 */ &vreg40, &vreg32, &vreg151, NULL, // VPSHLW VREG:w:u16=$XMMr VREG:r:u16=$XMMm  VREG:r:u16=$XMMn
  /* 10848 */ &vreg40, &mem125, &vreg151, NULL, // VPSHLW VREG:w:u16=$XMMr MEM:r:u16=$mem128 VREG:r:u16=$XMMn
  /* 10852 */ &vreg40, &vreg32, &imm0, NULL, // VPROTW VREG:w:u16=$XMMr VREG:r:u16=$XMMm  IMM:u8=$uimm8
  /* 10856 */ &vreg40, &mem125, &imm0, NULL, // VPROTW VREG:w:u16=$XMMr MEM:r:u16=$mem128 IMM:u8=$uimm8
  /* 10860 */ &vreg132, &vreg35, &vreg154, NULL, // VPSHAB VREG:w:s8=$XMMr VREG:r:s8=$XMMm  VREG:r:s8=$XMMn
  /* 10864 */ &vreg132, &mem126, &vreg154, NULL, // VPSHAB VREG:w:s8=$XMMr MEM:r:s8=$mem128 VREG:r:s8=$XMMn
  /* 10868 */ &vreg2, &vreg1, &vreg62, NULL, // VPSHAD VREG:w:s32=$XMMr VREG:r:s32=$XMMm  VREG:r:s32=$XMMn
  /* 10872 */ &vreg2, &mem6, &vreg62, NULL, // VPSHAD VREG:w:s32=$XMMr MEM:r:s32=$mem128 VREG:r:s32=$XMMn
  /* 10876 */ &vreg37, &vreg137, &vreg157, NULL, // VPSHAQ VREG:w:s64=$XMMr VREG:r:s64=$XMMm  VREG:r:s64=$XMMn
  /* 10880 */ &vreg37, &mem167, &vreg157, NULL, // VPSHAQ VREG:w:s64=$XMMr MEM:r:s64=$mem128 VREG:r:s64=$XMMn
  /* 10884 */ &vreg38, &vreg30, &vreg147, NULL, // VPSHAW VREG:w:s16=$XMMr VREG:r:s16=$XMMm  VREG:r:s16=$XMMn
  /* 10888 */ &vreg38, &mem123, &vreg147, NULL, // VPSHAW VREG:w:s16=$XMMr MEM:r:s16=$mem128 VREG:r:s16=$XMMn
  /* 10892 */ &reg307, &reg84, &reg57, &reg308, &mem216, NULL, // MONTMUL REG:SUPP:rw=$AXa REG:SUPP:rw=$CXa REG:SUPP:w=EDX REG:SUPP:r=$SIa MEM:SUPP:r={SEG:r=ES BASE:r=$SIa SZ=SZ_V}
  /* 10898 */ &reg309, &reg41, &reg310, &mem217, &mem218, &mem219, &mem220, &mem221, NULL, // XCRYPT_CFB REG:SUPP:rcw=$AXa REG:SUPP:rcw=$CXa REG:SUPP:rcw=$SIa MEM:SUPP:rcw:sx={SEG:r=ES BASE:r=$AXa SZ=SZ_V} MEM:SUPP:cr={SEG:r=ES BASE:r=$DXa SZ=SZ_V} MEM:SUPP:cr:sx={SEG:r=ES BASE:r=$BXa SZ=SZ_V} MEM:SUPP:cr:sx={SEG:r=ES BASE:r=$SIa SZ=SZ_V} MEM:SUPP:cw:sx={SEG:r=ES BASE:r=$DIa SZ=SZ_V}
  /* 10907 */ &reg309, &reg41, &reg310, &reg311, &mem217, &mem218, &mem219, &mem220, &mem221, NULL, // XCRYPT_OFB REG:SUPP:rcw=$AXa REG:SUPP:rcw=$CXa REG:SUPP:rcw=$SIa REG:SUPP:rcw=$DIa MEM:SUPP:rcw:sx={SEG:r=ES BASE:r=$AXa SZ=SZ_V} MEM:SUPP:cr={SEG:r=ES BASE:r=$DXa SZ=SZ_V} MEM:SUPP:cr:sx={SEG:r=ES BASE:r=$BXa SZ=SZ_V} MEM:SUPP:cr:sx={SEG:r=ES BASE:r=$SIa SZ=SZ_V} MEM:SUPP:cw:sx={SEG:r=ES BASE:r=$DIa SZ=SZ_V}
  /* 10917 */ &reg41, &reg310, &reg311, &mem218, &mem219, &mem220, &mem221, NULL, // XCRYPT_ECB REG:SUPP:rcw=$CXa REG:SUPP:rcw=$SIa REG:SUPP:rcw=$DIa MEM:SUPP:cr={SEG:r=ES BASE:r=$DXa SZ=SZ_V} MEM:SUPP:cr:sx={SEG:r=ES BASE:r=$BXa SZ=SZ_V} MEM:SUPP:cr:sx={SEG:r=ES BASE:r=$SIa SZ=SZ_V} MEM:SUPP:cw:sx={SEG:r=ES BASE:r=$DIa SZ=SZ_V}
  /* 10925 */ &reg309, &reg312, &reg310, &reg313, &mem220, &mem221, NULL, // XSHA256 REG:SUPP:rcw=$AXa REG:SUPP:r=$CXa REG:SUPP:rcw=$SIa REG:SUPP:cr=$DIa MEM:SUPP:cr:sx={SEG:r=ES BASE:r=$SIa SZ=SZ_V} MEM:SUPP:cw:sx={SEG:r=ES BASE:r=$DIa SZ=SZ_V}
  /* 10932 */ &reg37, &reg116, &reg314, &mem222, NULL, // XSTORE REG:SUPP:w=EAX  REG:SUPP:r=EDX    REG:SUPP:rw=$DIa MEM:SUPP:w:s8={SEG:r=ES BASE:r=$DIa SZ=8}
  /* 10937 */ &reg81, &reg41, &reg50, &reg311, &mem223, NULL, // XSTORE REG:SUPP:cw=EAX REG:SUPP:rcw=$CXa REG:SUPP:rcw=EDX REG:SUPP:rcw=$DIa                         MEM:SUPP:cw:s8={SEG:r=ES BASE:r=$DIa SZ=8}
  /* 10943 */ &mem103, &swz0, &evh0, NULL, // VPREFETCHNTA MEM:r:s64=$mem8 SWZ=$n_i32 EVH=$EVH
  /* 10947 */ &reg14, NULL, // SPFLT REG:r:s32=$GPR32m
  /* 10949 */ &reg16, NULL, // SPFLT REG:r:s64=$GPR64m
  /* 10951 */ &reg315, &rel2, NULL, // JKZD REG:w=$Kn REL:s8=$rel8
  /* 10954 */ &reg315, &rel1, NULL, // JKZD REG:w=$Kn REL:sx=$relz
  /* 10957 */ &reg19, &reg274, &reg275, NULL, // KCONCATL REG:w:s64=$GPR64r REG:r=$Kn REG:r=$Km
  /* 10961 */ &reg272, &reg16, &imm6, NULL, // KEXTRACT REG:w=$Kr REG:r:s64=$GPR64m IMM:u8=$index
  /* 10965 */ &reg272, &reg113, NULL, // KMOV REG:w=$Kr     REG:r=$GPR32m
  /* 10968 */ &reg226, &reg275, NULL, // KMOV REG:w=$GPR32r REG:r=$Km
  /* 10971 */ &reg17, &reg14, NULL, // TZCNT REG:w:s32=$GPR32r REG:r:s32=$GPR32m
  /* 10974 */ &reg19, &reg16, NULL, // TZCNT REG:w:s64=$GPR64r REG:r:s64=$GPR64m
  /* 10977 */ &vreg183, &preg0, &vreg60, &mem113, NULL, // V4FNMADDPS VREG:rw:f32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMn MEM:r:f32=$mem128
  /* 10982 */ &vreg15, &preg0, &vreg56, &mem113, NULL, // V4FNMADDSS VREG:rw:f32=$XMMr PREG:r:Z=$Kk VREG:r:f32=$XMMn MEM:r:f32=$mem128
  /* 10987 */ &vreg186, &preg0, &vreg54, &vreg55, &swz1, NULL, // VSUBRPD VREG:rw:f64=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMn VREG:r:f64=$ZMMm SWZ=$r_i64
  /* 10993 */ &vreg186, &preg0, &vreg54, &mem224, &swz2, &evh0, NULL, // VSUBRPD VREG:rw:f64=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMn MEM:r=$mem SWZ=$su_f64 EVH=$EVH
  /* 11000 */ &vreg183, &preg0, &vreg60, &vreg61, &swz3, NULL, // VSUBRPS VREG:rw:f32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMn VREG:r:f32=$ZMMm SWZ=$r_i32
  /* 11006 */ &vreg183, &preg0, &vreg60, &mem224, &swz4, &evh0, NULL, // VSUBRPS VREG:rw:f32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMn MEM:r=$mem SWZ=$su_f32 EVH=$EVH
  /* 11013 */ &vreg183, &preg2, &vreg60, &mem224, &swz4, &evh0, NULL, // VADDSETSPS VREG:rw:f32=$ZMMr PREG:rw:Z=$Kk VREG:r:f32=$ZMMn MEM:r=$mem SWZ=$su_f32 EVH=$EVH
  /* 11020 */ &vreg183, &preg2, &vreg60, &vreg61, &swz3, NULL, // VPADDSETSD VREG:rw:f32=$ZMMr PREG:rw:Z=$Kk VREG:r:f32=$ZMMn VREG:r:f32=$ZMMm SWZ=$r_i32
  /* 11026 */ &vreg183, &preg2, &vreg60, &vreg61, &rc0, NULL, // VADDSETSPS VREG:rw:f32=$ZMMr PREG:rw:Z=$Kk VREG:r:f32=$ZMMn VREG:r:f32=$ZMMm RC=$RC
  /* 11032 */ &vreg183, &preg0, &vreg60, &vreg61, &imm0, NULL, // VALIGND VREG:rw:f32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMn VREG:r:f32=$ZMMm                      IMM:u8=$uimm8
  /* 11038 */ &vreg183, &preg0, &vreg60, &mem140, &swz0, &evh0, &imm0, NULL, // VALIGND VREG:rw:f32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMn MEM:r:s32=$mem512 SWZ=$n_i32 EVH=$EVH IMM:u8=$uimm8
  /* 11046 */ &vreg183, &preg0, &mem224, &sbcst4, &swz5, &evh0, NULL, // VBROADCASTF32X4 VREG:rw:f32=$ZMMr PREG:r:Z=$Kk MEM:r=$mem SBCST:SUPP={FROM=4 TO=16} SWZ=$u_f32 EVH=$EVH
  /* 11053 */ &vreg186, &preg0, &mem224, &sbcst3, &swz6, &evh0, NULL, // VBROADCASTF64X4 VREG:rw:f64=$ZMMr PREG:r:Z=$Kk MEM:r=$mem SBCST:SUPP={FROM=4 TO=8} SWZ=$u_f64 EVH=$EVH
  /* 11060 */ &vreg196, &preg0, &mem224, &sbcst4, &swz7, &evh0, NULL, // VBROADCASTI32X4 VREG:rw:s32=$ZMMr PREG:r:Z=$Kk MEM:r=$mem SBCST:SUPP={FROM=4 TO=16} SWZ=$u_i32 EVH=$EVH
  /* 11067 */ &vreg236, &preg0, &mem224, &sbcst3, &swz6, &evh0, NULL, // VBROADCASTI64X4 VREG:rw:s64=$ZMMr PREG:r:Z=$Kk MEM:r=$mem SBCST:SUPP={FROM=4 TO=8} SWZ=$u_f64 EVH=$EVH
  /* 11074 */ &vreg186, &preg0, &mem224, &sbcst7, &swz6, &evh0, NULL, // VBROADCASTSD VREG:rw:f64=$ZMMr PREG:r:Z=$Kk MEM:r=$mem SBCST:SUPP={FROM=1 TO=8} SWZ=$u_f64 EVH=$EVH
  /* 11081 */ &vreg183, &preg0, &mem224, &sbcst8, &swz5, &evh0, NULL, // VBROADCASTSS VREG:rw:f32=$ZMMr PREG:r:Z=$Kk MEM:r=$mem SBCST:SUPP={FROM=1 TO=16} SWZ=$u_f32 EVH=$EVH
  /* 11088 */ &reg272, &preg0, &vreg54, &vreg55, &swz1, &cc1, NULL, // VCMPPD REG:w=$Kr PREG:r:Z=$Kk VREG:r:f64=$ZMMn VREG:r:f64=$ZMMm SWZ=$r_i64     CC:u8=$cc5
  /* 11095 */ &reg272, &preg0, &vreg54, &mem224, &swz2, &evh0, &cc1, NULL, // VCMPPD REG:w=$Kr PREG:r:Z=$Kk VREG:r:f64=$ZMMn MEM:r=$mem SWZ=$su_f64 EVH=$EVH CC:u8=$cc5
  /* 11103 */ &reg272, &preg0, &vreg60, &vreg61, &swz1, &cc1, NULL, // VCMPPS REG:w=$Kr PREG:r:Z=$Kk VREG:r:f32=$ZMMn VREG:r:f32=$ZMMm SWZ=$r_i64     CC:u8=$cc5
  /* 11110 */ &reg272, &preg0, &vreg60, &mem224, &swz4, &evh0, &cc1, NULL, // VCMPPS REG:w=$Kr PREG:r:Z=$Kk VREG:r:f32=$ZMMn MEM:r=$mem SWZ=$su_f32 EVH=$EVH CC:u8=$cc5
  /* 11118 */ &vreg186, &preg0, &vreg55, &swz3, NULL, // VCVTUDQ2PD VREG:rw:f64=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMm SWZ=$r_i32
  /* 11123 */ &vreg186, &preg0, &vreg55, NULL, // VMOVAPD VREG:rw:f64=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMm
  /* 11127 */ &vreg186, &preg0, &mem224, &swz8, &evh0, NULL, // VCVTUDQ2PD VREG:rw:f64=$ZMMr PREG:r:Z=$Kk MEM:r=$mem SWZ=$su_hi32 EVH=$EVH
  /* 11133 */ &vreg183, &preg0, &vreg77, &swz3, &imm0, NULL, // VCVTFXPNTDQ2PS VREG:rw:f32=$ZMMr PREG:r:Z=$Kk VREG:r:s32=$ZMMm SWZ=$r_i32     IMM:u8=$uimm8
  /* 11139 */ &vreg183, &preg0, &vreg77, &sae0, &imm0, NULL, // VCVTFXPNTDQ2PS VREG:rw:f32=$ZMMr PREG:r:Z=$Kk VREG:r:s32=$ZMMm SAE=$SAE       IMM:u8=$uimm8
  /* 11145 */ &vreg183, &preg0, &mem224, &swz9, &evh0, &imm0, NULL, // VCVTFXPNTUDQ2PS VREG:rw:f32=$ZMMr PREG:r:Z=$Kk MEM:r=$mem SWZ=$su_i32 EVH=$EVH IMM:u8=$uimm8
  /* 11152 */ &vreg196, &preg0, &vreg55, &swz1, &imm0, NULL, // VCVTFXPNTPD2DQ VREG:rw:s32=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMm SWZ=$r_i64     IMM:u8=$uimm8
  /* 11158 */ &vreg196, &preg0, &vreg55, &sae0, &imm0, NULL, // VCVTFXPNTPD2DQ VREG:rw:s32=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMm SAE=$SAE       IMM:u8=$uimm8
  /* 11164 */ &vreg196, &preg0, &mem224, &swz2, &evh0, &imm0, NULL, // VCVTFXPNTPD2DQ VREG:rw:s32=$ZMMr PREG:r:Z=$Kk MEM:r=$mem SWZ=$su_f64 EVH=$EVH IMM:u8=$uimm8
  /* 11171 */ &vreg204, &preg0, &vreg55, &swz1, &imm0, NULL, // VCVTFXPNTPD2UDQ VREG:rw:u32=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMm SWZ=$r_i64     IMM:u8=$uimm8
  /* 11177 */ &vreg204, &preg0, &vreg55, &sae0, &imm0, NULL, // VCVTFXPNTPD2UDQ VREG:rw:u32=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMm SAE=$SAE       IMM:u8=$uimm8
  /* 11183 */ &vreg204, &preg0, &mem224, &swz2, &evh0, &imm0, NULL, // VCVTFXPNTPD2UDQ VREG:rw:u32=$ZMMr PREG:r:Z=$Kk MEM:r=$mem SWZ=$su_f64 EVH=$EVH IMM:u8=$uimm8
  /* 11190 */ &vreg196, &preg0, &vreg61, &swz3, &imm0, NULL, // VCVTFXPNTPS2DQ VREG:rw:s32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMm SWZ=$r_i32     IMM:u8=$uimm8
  /* 11196 */ &vreg196, &preg0, &vreg61, &sae0, &imm0, NULL, // VCVTFXPNTPS2DQ VREG:rw:s32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMm SAE=$SAE       IMM:u8=$uimm8
  /* 11202 */ &vreg196, &preg0, &mem224, &swz4, &evh0, &imm0, NULL, // VCVTFXPNTPS2DQ VREG:rw:s32=$ZMMr PREG:r:Z=$Kk MEM:r=$mem SWZ=$su_f32 EVH=$EVH IMM:u8=$uimm8
  /* 11209 */ &vreg204, &preg0, &vreg61, &swz3, &imm0, NULL, // VCVTFXPNTPS2UDQ VREG:rw:u32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMm SWZ=$r_i32     IMM:u8=$uimm8
  /* 11215 */ &vreg204, &preg0, &vreg61, &sae0, &imm0, NULL, // VCVTFXPNTPS2UDQ VREG:rw:u32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMm SAE=$SAE       IMM:u8=$uimm8
  /* 11221 */ &vreg204, &preg0, &mem224, &swz4, &evh0, &imm0, NULL, // VCVTFXPNTPS2UDQ VREG:rw:u32=$ZMMr PREG:r:Z=$Kk MEM:r=$mem SWZ=$su_f32 EVH=$EVH IMM:u8=$uimm8
  /* 11228 */ &vreg183, &preg0, &vreg113, &swz3, &imm0, NULL, // VCVTFXPNTUDQ2PS VREG:rw:f32=$ZMMr PREG:r:Z=$Kk VREG:r:u32=$ZMMm SWZ=$r_i32     IMM:u8=$uimm8
  /* 11234 */ &vreg183, &preg0, &vreg113, &sae0, &imm0, NULL, // VCVTFXPNTUDQ2PS VREG:rw:f32=$ZMMr PREG:r:Z=$Kk VREG:r:u32=$ZMMm SAE=$SAE       IMM:u8=$uimm8
  /* 11240 */ &vreg183, &preg0, &vreg55, &swz1, NULL, // VCVTPD2PS VREG:rw:f32=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMm SWZ=$r_i64
  /* 11245 */ &vreg183, &preg0, &vreg55, &rc0, NULL, // VCVTPD2PS VREG:rw:f32=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMm RC=$RC
  /* 11250 */ &vreg183, &preg0, &mem224, &swz2, &evh0, NULL, // VCVTPD2PS VREG:rw:f32=$ZMMr PREG:r:Z=$Kk MEM:r=$mem SWZ=$su_f64 EVH=$EVH
  /* 11256 */ &vreg186, &preg0, &vreg61, &swz3, NULL, // VGETEXPPS VREG:rw:f64=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMm SWZ=$r_i32
  /* 11261 */ &vreg186, &preg0, &vreg61, &sae0, NULL, // VGETEXPPS VREG:rw:f64=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMm SAE=$SAE
  /* 11266 */ &vreg186, &preg0, &mem224, &swz10, &evh0, NULL, // VCVTPS2PD VREG:rw:f64=$ZMMr PREG:r:Z=$Kk MEM:r=$mem SWZ=$su_hf32 EVH=$EVH
  /* 11272 */ &vreg196, &preg0, &vreg77, NULL, // VRSQRT23PS VREG:rw:s32=$ZMMr PREG:r:Z=$Kk VREG:r:s32=$ZMMm
  /* 11276 */ &vreg196, &preg0, &vreg77, &sae0, NULL, // VRSQRT23PS VREG:rw:s32=$ZMMr PREG:r:Z=$Kk VREG:r:s32=$ZMMm SAE=$SAE
  /* 11281 */ &vreg196, &preg0, &mem140, &swz11, &evh0, NULL, // VRSQRT23PS VREG:rw:s32=$ZMMr PREG:r:Z=$Kk MEM:r:s32=$mem512 SWZ=$n_f32 EVH=$EVH
  /* 11287 */ &vreg186, &preg0, &vreg54, &vreg55, &sae0, NULL, // VGMINPD VREG:rw:f64=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMn VREG:r:f64=$ZMMm SAE=$SAE
  /* 11293 */ &vreg186, &preg0, &vreg54, &mem224, &swz12, &evh0, NULL, // VPXORQ VREG:rw:f64=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMn MEM:r=$mem SWZ=$su_i64 EVH=$EVH
  /* 11300 */ &vreg183, &preg0, &vreg60, &vreg61, &sae0, NULL, // VGMAXABSPS VREG:rw:f32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMn VREG:r:f32=$ZMMm SAE=$SAE
  /* 11306 */ &vreg183, &preg0, &vreg60, &mem224, &swz9, &evh0, NULL, // VSCALEPS VREG:rw:f32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMn MEM:r=$mem SWZ=$su_i32 EVH=$EVH
  /* 11313 */ &vreg183, &preg0, &vreg60, &mem224, &swz13, &evh0, NULL, // VFMADD233PS VREG:rw:f32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMn MEM:r=$mem SWZ=$su_mf32 EVH=$EVH
  /* 11320 */ &vreg186, &preg2, &mem225, &sbcst7, &swz6, &evh0, NULL, // VGATHERDPD VREG:rw:f64=$ZMMr PREG:rw:Z=$Kk MEM:r=$vmz SBCST:SUPP={FROM=1 TO=8} SWZ=$u_f64 EVH=$EVH
  /* 11327 */ &vreg183, &preg2, &mem225, &sbcst8, &swz5, &evh0, NULL, // VGATHERDPS VREG:rw:f32=$ZMMr PREG:rw:Z=$Kk MEM:r=$vmz SBCST:SUPP={FROM=1 TO=16} SWZ=$u_f32 EVH=$EVH
  /* 11334 */ &mem178, &preg1, NULL, // VSCATTERPF1DPD MEM:r:f64=$vmy64 PREG:rw=$Kk
  /* 11337 */ &mem225, &swz5, &evh0, &preg2, NULL, // VGATHERPF1DPS MEM:r=$vmz SWZ=$u_f32 EVH=$EVH PREG:rw:Z=$Kk
  /* 11342 */ &mem179, &preg1, NULL, // VSCATTERPF1QPS MEM:r:f32=$vmz32 PREG:rw=$Kk
  /* 11345 */ &mem180, &preg1, NULL, // VSCATTERPF1QPD MEM:r:f64=$vmz64 PREG:rw=$Kk
  /* 11348 */ &vreg186, &preg0, &vreg55, &swz1, NULL, // VMOVAPD VREG:rw:f64=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMm SWZ=$r_i64
  /* 11353 */ &vreg186, &preg0, &vreg55, &sae0, NULL, // VGETEXPPD VREG:rw:f64=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMm SAE=$SAE
  /* 11358 */ &vreg186, &preg0, &mem224, &swz2, &evh0, NULL, // VGETEXPPD VREG:rw:f64=$ZMMr PREG:r:Z=$Kk MEM:r=$mem SWZ=$su_f64 EVH=$EVH
  /* 11364 */ &vreg186, &preg0, &mem224, &swz4, &evh0, NULL, // VGETEXPPS VREG:rw:f64=$ZMMr PREG:r:Z=$Kk MEM:r=$mem SWZ=$su_f32 EVH=$EVH
  /* 11370 */ &vreg186, &preg0, &vreg55, &swz1, &signc0, NULL, // VGETMANTPD VREG:rw:f64=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMm SWZ=$r_i64     SIGNC:r:u8=$signc
  /* 11376 */ &vreg186, &preg0, &vreg55, &sae0, &signc0, NULL, // VGETMANTPD VREG:rw:f64=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMm SAE=$SAE       SIGNC:r:u8=$signc
  /* 11382 */ &vreg186, &preg0, &mem224, &swz2, &evh0, &signc0, NULL, // VGETMANTPD VREG:rw:f64=$ZMMr PREG:r:Z=$Kk MEM:r=$mem SWZ=$su_f64 EVH=$EVH SIGNC:r:u8=$signc
  /* 11389 */ &vreg183, &preg0, &vreg61, &swz3, &signc0, NULL, // VGETMANTPS VREG:rw:f32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMm SWZ=$r_i32     SIGNC:r:u8=$signc
  /* 11395 */ &vreg183, &preg0, &vreg61, &sae0, &signc0, NULL, // VGETMANTPS VREG:rw:f32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMm SAE=$SAE       SIGNC:r:u8=$signc
  /* 11401 */ &vreg183, &preg0, &mem224, &swz4, &evh0, &signc0, NULL, // VGETMANTPS VREG:rw:f32=$ZMMr PREG:r:Z=$Kk MEM:r=$mem SWZ=$su_f32 EVH=$EVH SIGNC:r:u8=$signc
  /* 11408 */ &vreg196, &preg0, &mem224, &swz7, &evh0, NULL, // VMOVDQA32 VREG:rw:s32=$ZMMr PREG:r:Z=$Kk MEM:r=$mem SWZ=$u_i32 EVH=$EVH
  /* 11414 */ &vreg186, &preg0, &mem224, &swz6, &evh0, NULL, // VMOVAPD VREG:rw:f64=$ZMMr PREG:r:Z=$Kk MEM:r=$mem SWZ=$u_f64 EVH=$EVH
  /* 11420 */ &vreg183, &preg0, &mem224, &swz5, &evh0, NULL, // VMOVAPS VREG:rw:f32=$ZMMr PREG:r:Z=$Kk MEM:r=$mem SWZ=$u_f32 EVH=$EVH
  /* 11426 */ &vreg236, &preg0, &mem224, &swz14, &evh0, NULL, // VMOVDQA64 VREG:rw:s64=$ZMMr PREG:r:Z=$Kk MEM:r=$mem SWZ=$u_i64 EVH=$EVH
  /* 11432 */ &mem147, &preg0, &vreg92, &swz15, &evh0, NULL, // VMOVAPD MEM:w:f64=$mem512 PREG:r:Z=$Kk VREG:r:f64=$ZMMr SWZ=$d_f64 EVH=$EVH
  /* 11438 */ &mem226, &preg0, &vreg95, &swz16, &evh0, NULL, // VPACKSTORELPS MEM:w=$mem PREG:r:Z=$Kk VREG:r:f32=$ZMMr SWZ=$d_f32 EVH=$EVH
  /* 11444 */ &vreg183, &preg0, &vreg61, &swz3, NULL, // VMOVAPS VREG:rw:f32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMm SWZ=$r_i32
  /* 11449 */ &vreg183, &preg0, &vreg61, NULL, // VMOVAPS VREG:rw:f32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMm
  /* 11453 */ &mem226, &preg0, &vreg211, &swz17, &evh0, NULL, // VPACKSTORELD MEM:w=$mem PREG:r:Z=$Kk VREG:r:s32=$ZMMr SWZ=$d_i32 EVH=$EVH
  /* 11459 */ &vreg196, &preg0, &vreg77, &swz3, NULL, // VMOVDQA32 VREG:rw:s32=$ZMMr PREG:r:Z=$Kk VREG:r:s32=$ZMMm SWZ=$r_i32
  /* 11464 */ &mem227, &preg0, &vreg216, &swz18, &evh0, NULL, // VMOVDQA64 MEM:w:s64=$mem512 PREG:r:Z=$Kk VREG:r:s64=$ZMMr SWZ=$d_i64 EVH=$EVH
  /* 11470 */ &vreg236, &preg0, &vreg141, &swz1, NULL, // VMOVDQA64 VREG:rw:s64=$ZMMr PREG:r:Z=$Kk VREG:r:s64=$ZMMm SWZ=$r_i64
  /* 11475 */ &vreg236, &preg0, &vreg141, NULL, // VMOVDQA64 VREG:rw:s64=$ZMMr PREG:r:Z=$Kk VREG:r:s64=$ZMMm
  /* 11479 */ &mem228, &preg0, &vreg92, &swz15, &evh0, NULL, // VMOVNRNGOAPD MEM:rw:f64=$mem512 PREG:r:Z=$Kk VREG:r:f64=$ZMMr SWZ=$d_f64 EVH=$EVH
  /* 11485 */ &mem229, &preg0, &vreg95, &swz16, &evh0, NULL, // VMOVNRNGOAPS MEM:rw=$mem PREG:r:Z=$Kk VREG:r:f32=$ZMMr SWZ=$d_f32 EVH=$EVH
  /* 11491 */ &vreg196, &preg0, &vreg149, &mem131, NULL, // VP4DPWSSDS VREG:rw:s32=$ZMMr PREG:r:Z=$Kk VREG:r:s16=$ZMMn MEM:r:u32=$mem128
  /* 11496 */ &mem226, &preg0, &vreg92, &swz15, &evh0, NULL, // VPACKSTORELPD MEM:w=$mem PREG:r:Z=$Kk VREG:r:f64=$ZMMr SWZ=$d_f64 EVH=$EVH
  /* 11502 */ &mem226, &preg0, &vreg216, &swz18, &evh0, NULL, // VPACKSTORELQ MEM:w=$mem PREG:r:Z=$Kk VREG:r:s64=$ZMMr SWZ=$d_i64 EVH=$EVH
  /* 11508 */ &vreg196, &preg0, &reg315, &vreg77, &swz3, NULL, // VPSUBSETBD VREG:rw:s32=$ZMMr PREG:r:Z=$Kk REG:w=$Kn VREG:r:s32=$ZMMm SWZ=$r_i32
  /* 11514 */ &vreg196, &preg0, &reg315, &vreg77, NULL, // VPSUBSETBD VREG:rw:s32=$ZMMr PREG:r:Z=$Kk REG:w=$Kn VREG:r:s32=$ZMMm
  /* 11519 */ &vreg196, &preg0, &reg315, &mem224, &swz9, &evh0, NULL, // VPSUBSETBD VREG:rw:s32=$ZMMr PREG:r:Z=$Kk REG:w=$Kn MEM:r=$mem SWZ=$su_i32 EVH=$EVH
  /* 11526 */ &vreg183, &preg2, &vreg60, &vreg61, NULL, // VPADDSETSD VREG:rw:f32=$ZMMr PREG:rw:Z=$Kk VREG:r:f32=$ZMMn VREG:r:f32=$ZMMm
  /* 11531 */ &vreg183, &preg2, &vreg60, &mem224, &swz9, &evh0, NULL, // VPADDSETSD VREG:rw:f32=$ZMMr PREG:rw:Z=$Kk VREG:r:f32=$ZMMn MEM:r=$mem SWZ=$su_i32 EVH=$EVH
  /* 11538 */ &vreg196, &preg0, &mem224, &sbcst8, &swz7, &evh0, NULL, // VPBROADCASTD VREG:rw:s32=$ZMMr PREG:r:Z=$Kk MEM:r=$mem SBCST:SUPP={FROM=1 TO=16} SWZ=$u_i32 EVH=$EVH
  /* 11545 */ &vreg236, &preg0, &mem224, &sbcst7, &swz6, &evh0, NULL, // VPBROADCASTQ VREG:rw:s64=$ZMMr PREG:r:Z=$Kk MEM:r=$mem SBCST:SUPP={FROM=1 TO=8} SWZ=$u_f64 EVH=$EVH
  /* 11552 */ &reg272, &preg0, &vreg146, &vreg77, &swz1, &cc0, NULL, // VPCMPD REG:w=$Kr PREG:r:Z=$Kk VREG:r:s32=$ZMMn VREG:r:s32=$ZMMm SWZ=$r_i64     CC:u8=$cc3
  /* 11559 */ &reg272, &preg0, &vreg146, &mem224, &swz9, &evh0, &cc0, NULL, // VPCMPD REG:w=$Kr PREG:r:Z=$Kk VREG:r:s32=$ZMMn MEM:r=$mem SWZ=$su_i32 EVH=$EVH CC:u8=$cc3
  /* 11567 */ &reg272, &preg0, &vreg146, &vreg77, &swz1, NULL, // VPTESTMD REG:w=$Kr PREG:r:Z=$Kk VREG:r:s32=$ZMMn VREG:r:s32=$ZMMm SWZ=$r_i64
  /* 11573 */ &reg272, &preg0, &vreg146, &mem224, &swz9, &evh0, NULL, // VPTESTMD REG:w=$Kr PREG:r:Z=$Kk VREG:r:s32=$ZMMn MEM:r=$mem SWZ=$su_i32 EVH=$EVH
  /* 11580 */ &reg272, &preg0, &vreg150, &vreg113, &swz1, &cc0, NULL, // VPCMPUD REG:w=$Kr PREG:r:Z=$Kk VREG:r:u32=$ZMMn VREG:r:u32=$ZMMm SWZ=$r_i64     CC:u8=$cc3
  /* 11587 */ &reg272, &preg0, &vreg150, &mem224, &swz9, &evh0, &cc0, NULL, // VPCMPUD REG:w=$Kr PREG:r:Z=$Kk VREG:r:u32=$ZMMn MEM:r=$mem SWZ=$su_i32 EVH=$EVH CC:u8=$cc3
  /* 11595 */ &vreg183, &preg0, &vreg60, &mem140, &swz0, &evh0, NULL, // VPERMD VREG:rw:f32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMn MEM:r:s32=$mem512 SWZ=$n_i32 EVH=$EVH
  /* 11602 */ &vreg196, &preg0, &vreg77, &order0, NULL, // VPSHUFD VREG:rw:s32=$ZMMr PREG:r:Z=$Kk VREG:r:s32=$ZMMm                      ORDER:r:u8=$order
  /* 11607 */ &vreg196, &preg0, &mem140, &swz0, &evh0, &order0, NULL, // VPSHUFD VREG:rw:s32=$ZMMr PREG:r:Z=$Kk MEM:r:s32=$mem512 SWZ=$n_i32 EVH=$EVH ORDER:r:u8=$order
  /* 11614 */ &vreg196, &preg2, &mem225, &sbcst8, &swz7, &evh0, NULL, // VPGATHERDD VREG:rw:s32=$ZMMr PREG:rw:Z=$Kk MEM:r=$vmz SBCST:SUPP={FROM=1 TO=16} SWZ=$u_i32 EVH=$EVH
  /* 11621 */ &vreg236, &preg2, &mem225, &sbcst7, &swz14, &evh0, NULL, // VPGATHERDQ VREG:rw:s64=$ZMMr PREG:rw:Z=$Kk MEM:r=$vmz SBCST:SUPP={FROM=1 TO=8} SWZ=$u_i64 EVH=$EVH
  /* 11628 */ &vreg183, &preg0, &vreg60, &mem224, &swz19, &evh0, NULL, // VPMADD233D VREG:rw:f32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMn MEM:r=$mem SWZ=$su_mi32 EVH=$EVH
  /* 11635 */ &mem230, &sbcst8, &preg2, &vreg211, &swz17, &evh0, NULL, // VPSCATTERDD MEM:w=$vmz SBCST:SUPP={FROM=1 TO=16} PREG:rw:Z=$Kk VREG:r:s32=$ZMMr SWZ=$d_i32 EVH=$EVH
  /* 11642 */ &mem230, &sbcst7, &preg2, &vreg216, &swz18, &evh0, NULL, // VPSCATTERDQ MEM:w=$vmz SBCST:SUPP={FROM=1 TO=8} PREG:rw:Z=$Kk VREG:r:s64=$ZMMr SWZ=$d_i64 EVH=$EVH
  /* 11649 */ &vreg237, &preg0, &vreg61, &swz3, &shift1, NULL, // VPSLLD VREG:rw:f32=$ZMMn PREG:r:Z=$Kk VREG:r:f32=$ZMMm SWZ=$r_i32     SHIFT:r:u8=$shl
  /* 11655 */ &vreg237, &preg0, &vreg61, &shift1, NULL, // VPSLLD VREG:rw:f32=$ZMMn PREG:r:Z=$Kk VREG:r:f32=$ZMMm                SHIFT:r:u8=$shl
  /* 11660 */ &vreg237, &preg0, &mem224, &swz9, &evh0, &shift1, NULL, // VPSLLD VREG:rw:f32=$ZMMn PREG:r:Z=$Kk MEM:r=$mem SWZ=$su_i32 EVH=$EVH SHIFT:r:u8=$shl
  /* 11667 */ &vreg196, &preg0, &vreg146, &vreg77, &swz3, NULL, // VPSRLVD VREG:rw:s32=$ZMMr PREG:r:Z=$Kk VREG:r:s32=$ZMMn VREG:r:s32=$ZMMm SWZ=$r_i32
  /* 11673 */ &vreg196, &preg0, &vreg146, &vreg77, NULL, // VPSRLVD VREG:rw:s32=$ZMMr PREG:r:Z=$Kk VREG:r:s32=$ZMMn VREG:r:s32=$ZMMm
  /* 11678 */ &vreg196, &preg0, &vreg146, &mem224, &swz9, &evh0, NULL, // VPSRLVD VREG:rw:s32=$ZMMr PREG:r:Z=$Kk VREG:r:s32=$ZMMn MEM:r=$mem SWZ=$su_i32 EVH=$EVH
  /* 11685 */ &vreg237, &preg0, &vreg61, &swz3, &shift0, NULL, // VPSRLD VREG:rw:f32=$ZMMn PREG:r:Z=$Kk VREG:r:f32=$ZMMm SWZ=$r_i32     SHIFT:r:u8=$shr
  /* 11691 */ &vreg237, &preg0, &vreg61, &shift0, NULL, // VPSRLD VREG:rw:f32=$ZMMn PREG:r:Z=$Kk VREG:r:f32=$ZMMm                SHIFT:r:u8=$shr
  /* 11696 */ &vreg237, &preg0, &mem224, &swz9, &evh0, &shift0, NULL, // VPSRLD VREG:rw:f32=$ZMMn PREG:r:Z=$Kk MEM:r=$mem SWZ=$su_i32 EVH=$EVH SHIFT:r:u8=$shr
  /* 11703 */ &vreg186, &preg0, &vreg55, &swz1, &imm0, NULL, // VRNDFXPNTPD VREG:rw:f64=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMm SWZ=$r_i64     IMM:u8=$uimm8
  /* 11709 */ &vreg186, &preg0, &vreg55, &sae0, &imm0, NULL, // VRNDFXPNTPD VREG:rw:f64=$ZMMr PREG:r:Z=$Kk VREG:r:f64=$ZMMm SAE=$SAE       IMM:u8=$uimm8
  /* 11715 */ &vreg186, &preg0, &mem224, &swz2, &evh0, &imm0, NULL, // VRNDFXPNTPD VREG:rw:f64=$ZMMr PREG:r:Z=$Kk MEM:r=$mem SWZ=$su_f64 EVH=$EVH IMM:u8=$uimm8
  /* 11722 */ &vreg183, &preg0, &vreg61, &swz3, &imm0, NULL, // VRNDFXPNTPS VREG:rw:f32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMm SWZ=$r_i32     IMM:u8=$uimm8
  /* 11728 */ &vreg183, &preg0, &vreg61, &sae0, &imm0, NULL, // VRNDFXPNTPS VREG:rw:f32=$ZMMr PREG:r:Z=$Kk VREG:r:f32=$ZMMm SAE=$SAE       IMM:u8=$uimm8
  /* 11734 */ &vreg183, &preg0, &mem224, &swz4, &evh0, &imm0, NULL, // VRNDFXPNTPS VREG:rw:f32=$ZMMr PREG:r:Z=$Kk MEM:r=$mem SWZ=$su_f32 EVH=$EVH IMM:u8=$uimm8
  /* 11741 */ &mem230, &sbcst7, &preg2, &vreg92, &swz15, &evh0, NULL, // VSCATTERDPD MEM:w=$vmz SBCST:SUPP={FROM=1 TO=8} PREG:rw:Z=$Kk VREG:r:f64=$ZMMr SWZ=$d_f64 EVH=$EVH
  /* 11748 */ &mem230, &sbcst8, &preg2, &vreg95, &swz16, &evh0, NULL, // VSCATTERDPS MEM:w=$vmz SBCST:SUPP={FROM=1 TO=16} PREG:rw:Z=$Kk VREG:r:f32=$ZMMr SWZ=$d_f32 EVH=$EVH
  /* 11755 */ &mem230, &swz5, &evh0, &preg2, NULL, // VSCATTERPF1DPS MEM:w=$vmz SWZ=$u_f32 EVH=$EVH PREG:rw:Z=$Kk
};

