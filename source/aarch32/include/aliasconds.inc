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

static bool is_alias_condition_ok(aarch32_internal *pinternal, uint32_t index){
  const uint32_t opcode = pinternal->opcode;
  switch(index)
  {
  case 0:
    return false;
  case 1:
    /* Never */
    return Never;
  case 2:
    /* Unconditionally */
    return Unconditionally;
  case 3:
    /* InITBlock */
    return InITBlock;
  case 4:
    /* !InITBlock */
    return !InITBlock;
  case 5:
    /* BitCount(register_list) > 1 */
    return (BitCount(((opcode & 0x0000ffff) >> 0)) > 1);
  case 6:
    /* BitCount(P:M:register_list) > 1 */
    return (BitCount(((((opcode & 0x00008000) >> 15) << 15) | ((((opcode & 0x00004000) >> 14) << 14) | (((opcode & 0x00003fff) >> 0) << 0)))) > 1);
  case 7:
    /* BitCount(M:register_list) > 1 */
    return (BitCount(((((opcode & 0x00004000) >> 14) << 14) | (((opcode & 0x00003fff) >> 0) << 0))) > 1);
  case 8:
    /* imm12 == 0b000000000000 */
    return (((opcode & 0x00000fff) >> 0) == 0);
  case 9:
    /* i:imm3:imm8 == 0b000000000000 */
    return (((((opcode & 0x04000000) >> 26) << 11) | ((((opcode & 0x00007000) >> 12) << 8) | (((opcode & 0x000000ff) >> 0) << 0))) == 0);
  case 10:
    /* N:Vn == M:Vm */
    return (((((opcode & 0x00000080) >> 7) << 4) | (((opcode & 0x000f0000) >> 16) << 0)) == ((((opcode & 0x00000020) >> 5) << 4) | (((opcode & 0x0000000f) >> 0) << 0)));
  }
  return false;
};

