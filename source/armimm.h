/*BEGIN_HEADER
*
* Copyright (C) 2020 Mahdi Safsafi.
*
* https://github.com/MahdiSafsafi/AMED
*
* See licence file 'LICENCE' for use and distribution rights.
*
*END_HEADER*/


bool decode_vfp_imm(uint32_t encodedin, double* fpimm);
bool decode_advsimd_imm(uint32_t encodedin, uint64_t* imm, amed_datatype* outdt);