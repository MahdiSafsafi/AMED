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

static bool is_alias_condition_ok(aarch64_internal *pinternal, uint32_t index){
  const uint32_t opcode = pinternal->opcode;
  switch(index)
  {
  case 0:
    return false;
  case 1:
    /* Unconditionally */
    return Unconditionally;
  case 2:
    /* SysOp(op1,0b0111,CRm,op2) == Sys_AT */
    return (SysOp(((opcode & 0x00070000) >> 16), 7, ((opcode & 0x00000f00) >> 8), ((opcode & 0x000000e0) >> 5)) == Sys_AT);
  case 3:
    /* UInt(imms) < UInt(immr) */
    return (UInt(((opcode & 0x0000fc00) >> 10)) < UInt(((opcode & 0x003f0000) >> 16)));
  case 4:
    /* UInt(imms) >= UInt(immr) */
    return (UInt(((opcode & 0x0000fc00) >> 10)) >= UInt(((opcode & 0x003f0000) >> 16)));
  case 5:
    /* Zn == Zm */
    return (((opcode & 0x000003e0) >> 5) == ((opcode & 0x001f0000) >> 16));
  case 6:
    /* SysOp(op1,0b0111,CRm,op2) == Sys_DC */
    return (SysOp(((opcode & 0x00070000) >> 16), 7, ((opcode & 0x00000f00) >> 8), ((opcode & 0x000000e0) >> 5)) == Sys_DC);
  case 7:
    /* SysOp(op1,0b0111,CRm,op2) == Sys_IC */
    return (SysOp(((opcode & 0x00070000) >> 16), 7, ((opcode & 0x00000f00) >> 8), ((opcode & 0x000000e0) >> 5)) == Sys_IC);
  case 8:
    /* imms + 1 == immr */
    return ((((opcode & 0x0000fc00) >> 10) + 1) == ((opcode & 0x003f0000) >> 16));
  case 9:
    /* (Rd == 0b11111 || Rn == 0b11111) */
    return ((((opcode & 0x0000001f) >> 0) == 31) || (((opcode & 0x000003e0) >> 5) == 31));
  case 10:
    /* !(IsZero(imm16) && hw != 0b00) && ! IsOnes(imm16) */
    return (!(IsZero(((opcode & 0x001fffe0) >> 5)) && (((opcode & 0x00600000) >> 21) != 0)) && !(((opcode & 0x001fffe0) >> 5) == 0x0000ffff));
  case 11:
    /* !(IsZero(imm16) && hw != 0b00) */
    return !(IsZero(((opcode & 0x001fffe0) >> 5)) && (((opcode & 0x00600000) >> 21) != 0));
  case 12:
    /* ! MoveWidePreferred(sf, N, imms, immr) */
    return !MoveWidePreferred(((opcode & 0x80000000) >> 31), ((opcode & 0x00400000) >> 22), ((opcode & 0x0000fc00) >> 10), ((opcode & 0x003f0000) >> 16));
  case 13:
    /* Never */
    return Never;
  case 14:
    /* BFXPreferred(sf, opc<1>, imms, immr) */
    return BFXPreferred(((opcode & 0x80000000) >> 31), (((opcode & 0x60000000) >> 29) >> 1), ((opcode & 0x0000fc00) >> 10), ((opcode & 0x003f0000) >> 16));
  case 15:
    /* SysOp(op1,0b1000,CRm,op2) == Sys_TLBI */
    return (SysOp(((opcode & 0x00070000) >> 16), 8, ((opcode & 0x00000f00) >> 8), ((opcode & 0x000000e0) >> 5)) == Sys_TLBI);
  case 16:
    /* Rm == Rn */
    return (((opcode & 0x001f0000) >> 16) == ((opcode & 0x000003e0) >> 5));
  case 17:
    /* BitCount(immh) == 1 */
    return (BitCount(((opcode & 0x00780000) >> 19)) == 1);
  case 18:
    /* S == 0b0 && Pn == Pm */
    return ((((opcode & 0x00400000) >> 22) == 0) && (((opcode & 0x000001e0) >> 5) == ((opcode & 0x000f0000) >> 16)));
  case 19:
    /* BitCount(imm2:tsz) > 1 */
    return (BitCount(((((opcode & 0x00c00000) >> 22) << 5) | (((opcode & 0x001f0000) >> 16) << 0))) > 1);
  case 20:
    /* BitCount(imm2:tsz) == 1 */
    return (BitCount(((((opcode & 0x00c00000) >> 22) << 5) | (((opcode & 0x001f0000) >> 16) << 0))) == 1);
  case 21:
    /* SVEMoveMaskPreferred(imm13) */
    return SVEMoveMaskPreferred(((opcode & 0x0003ffe0) >> 5));
  case 22:
    /* S == 0b0 && Pn == Pm && Pm == Pg */
    return (((((opcode & 0x00400000) >> 22) == 0) && (((opcode & 0x000001e0) >> 5) == ((opcode & 0x000f0000) >> 16))) && (((opcode & 0x000f0000) >> 16) == ((opcode & 0x00003c00) >> 10)));
  case 23:
    /* Pd == Pm */
    return (((opcode & 0x0000000f) >> 0) == ((opcode & 0x000f0000) >> 16));
  case 24:
    /* Zd == Zm */
    return (((opcode & 0x0000001f) >> 0) == ((opcode & 0x001f0000) >> 16));
  case 25:
    /* S == 0b1 && Pn == Pm */
    return ((((opcode & 0x00400000) >> 22) == 1) && (((opcode & 0x000001e0) >> 5) == ((opcode & 0x000f0000) >> 16)));
  case 26:
    /* S == 0b1 && Pn == Pm && Pm == Pg */
    return (((((opcode & 0x00400000) >> 22) == 1) && (((opcode & 0x000001e0) >> 5) == ((opcode & 0x000f0000) >> 16))) && (((opcode & 0x000f0000) >> 16) == ((opcode & 0x00003c00) >> 10)));
  case 27:
    /* Pm == Pg */
    return (((opcode & 0x000f0000) >> 16) == ((opcode & 0x00003c00) >> 10));
  }
  return false;
};

