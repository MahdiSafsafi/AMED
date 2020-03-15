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

static const amed_db_swizzle_tv n_i32_tbl[8] = 
{{.mdt=MK_MDT(U32), .nelem=16, .vdt=MK_VDT(U32)},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1}}
;
static const amed_db_swizzle_tv n_f32_tbl[8] = 
{{.mdt=MK_MDT(F32), .nelem=16, .vdt=MK_VDT(F32)},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1}}
;
static const amed_db_swizzle_tv n_i64_tbl[8] = 
{{.mdt=MK_MDT(U64), .nelem=8, .vdt=MK_VDT(U64)},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1}}
;
static const amed_db_swizzle_tv su_f64_tbl[8] = 
{{.mdt=MK_MDT(F64), .nelem=8, .vdt=MK_VDT(F64)},
{.broadcasting=1, .mdt=MK_MDT(F64), .nelem=1, .vdt=MK_VDT(F64)},
{.broadcasting=1, .mdt=MK_MDT(F64), .nelem=4, .vdt=MK_VDT(F64)},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1}}
;
static const amed_db_swizzle_tv u_f64_tbl[8] = 
{{.mdt=MK_MDT(F64), .nelem=8, .vdt=MK_VDT(F64)},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1}}
;
static const amed_db_swizzle_tv su_f32_tbl[8] = 
{{.mdt=MK_MDT(F32), .nelem=16, .vdt=MK_VDT(F32)},
{.broadcasting=1, .mdt=MK_MDT(F32), .nelem=1, .vdt=MK_VDT(F32)},
{.broadcasting=1, .mdt=MK_MDT(F32), .nelem=4, .vdt=MK_VDT(F32)},
{.converting=1, .mdt=MK_MDT(F16), .nelem=16, .vdt=MK_VDT(F32)},
{.converting=1, .mdt=MK_MDT(U8), .nelem=16, .vdt=MK_VDT(F32)},
{.converting=1, .mdt=MK_MDT(S8), .nelem=16, .vdt=MK_VDT(F32)},
{.converting=1, .mdt=MK_MDT(U16), .nelem=16, .vdt=MK_VDT(F32)},
{.converting=1, .mdt=MK_MDT(S16), .nelem=16, .vdt=MK_VDT(F32)}}
;
static const amed_db_swizzle_tv su_mf32_tbl[8] = 
{{.mdt=MK_MDT(F32), .nelem=16, .vdt=MK_VDT(F32)},
{.reserved=1},
{.broadcasting=1, .mdt=MK_MDT(F32), .nelem=4, .vdt=MK_VDT(F32)},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1}}
;
static const amed_db_swizzle_tv su_hf32_tbl[8] = 
{{.mdt=MK_MDT(F32), .nelem=8, .vdt=MK_VDT(F32)},
{.broadcasting=1, .mdt=MK_MDT(F32), .nelem=1, .vdt=MK_VDT(F32)},
{.broadcasting=1, .mdt=MK_MDT(F32), .nelem=4, .vdt=MK_VDT(F32)},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1}}
;
static const amed_db_swizzle_tv u_f32_tbl[8] = 
{{.mdt=MK_MDT(F32), .nelem=16, .vdt=MK_VDT(F32)},
{.reserved=1},
{.reserved=1},
{.converting=1, .mdt=MK_MDT(F16), .nelem=16, .vdt=MK_VDT(F32)},
{.converting=1, .mdt=MK_MDT(U8), .nelem=16, .vdt=MK_VDT(F32)},
{.converting=1, .mdt=MK_MDT(S8), .nelem=16, .vdt=MK_VDT(F32)},
{.converting=1, .mdt=MK_MDT(U16), .nelem=16, .vdt=MK_VDT(F32)},
{.converting=1, .mdt=MK_MDT(S16), .nelem=16, .vdt=MK_VDT(F32)}}
;
static const amed_db_swizzle_tv su_i64_tbl[8] = 
{{.mdt=MK_MDT(S64), .nelem=8, .vdt=MK_VDT(S64)},
{.broadcasting=1, .mdt=MK_MDT(S64), .nelem=1, .vdt=MK_VDT(S64)},
{.broadcasting=1, .mdt=MK_MDT(S64), .nelem=4, .vdt=MK_VDT(S64)},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1}}
;
static const amed_db_swizzle_tv u_i64_tbl[8] = 
{{.mdt=MK_MDT(S64), .nelem=8, .vdt=MK_VDT(S64)},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1}}
;
static const amed_db_swizzle_tv su_i32_tbl[8] = 
{{.mdt=MK_MDT(S32), .nelem=16, .vdt=MK_VDT(S32)},
{.broadcasting=1, .mdt=MK_MDT(S32), .nelem=1, .vdt=MK_VDT(S32)},
{.broadcasting=1, .mdt=MK_MDT(S32), .nelem=4, .vdt=MK_VDT(S32)},
{.reserved=1},
{.converting=1, .mdt=MK_MDT(U8), .nelem=16, .vdt=MK_VDT(U32)},
{.converting=1, .mdt=MK_MDT(S8), .nelem=16, .vdt=MK_VDT(S32)},
{.converting=1, .mdt=MK_MDT(U16), .nelem=16, .vdt=MK_VDT(U32)},
{.converting=1, .mdt=MK_MDT(S16), .nelem=16, .vdt=MK_VDT(S32)}}
;
static const amed_db_swizzle_tv su_mi32_tbl[8] = 
{{.mdt=MK_MDT(S32), .nelem=16, .vdt=MK_VDT(S32)},
{.reserved=1},
{.broadcasting=1, .mdt=MK_MDT(S32), .nelem=4, .vdt=MK_VDT(S32)},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1}}
;
static const amed_db_swizzle_tv su_hi32_tbl[8] = 
{{.mdt=MK_MDT(S32), .nelem=8, .vdt=MK_VDT(S32)},
{.broadcasting=1, .mdt=MK_MDT(S32), .nelem=1, .vdt=MK_VDT(S32)},
{.broadcasting=1, .mdt=MK_MDT(S32), .nelem=4, .vdt=MK_VDT(S32)},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1}}
;
static const amed_db_swizzle_tv u_i32_tbl[8] = 
{{.mdt=MK_MDT(S32), .nelem=16, .vdt=MK_VDT(S32)},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.converting=1, .mdt=MK_MDT(U8), .nelem=16, .vdt=MK_VDT(U32)},
{.converting=1, .mdt=MK_MDT(S8), .nelem=16, .vdt=MK_VDT(S32)},
{.converting=1, .mdt=MK_MDT(U16), .nelem=16, .vdt=MK_VDT(U32)},
{.converting=1, .mdt=MK_MDT(S16), .nelem=16, .vdt=MK_VDT(S32)}}
;
static const amed_db_swizzle_tv d_f32_tbl[8] = 
{{.mdt=MK_MDT(F32), .nelem=16, .vdt=MK_VDT(F32)},
{.reserved=1},
{.reserved=1},
{.converting=1, .mdt=MK_MDT(F16), .nelem=16, .vdt=MK_VDT(F32)},
{.converting=1, .mdt=MK_MDT(U8), .nelem=16, .vdt=MK_VDT(F32)},
{.converting=1, .mdt=MK_MDT(S8), .nelem=16, .vdt=MK_VDT(F32)},
{.converting=1, .mdt=MK_MDT(U16), .nelem=16, .vdt=MK_VDT(F32)},
{.converting=1, .mdt=MK_MDT(S16), .nelem=16, .vdt=MK_VDT(F32)}}
;
static const amed_db_swizzle_tv d_i32_tbl[8] = 
{{.mdt=MK_MDT(S32), .nelem=16, .vdt=MK_VDT(S32)},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.converting=1, .mdt=MK_MDT(U8), .nelem=16, .vdt=MK_VDT(U32)},
{.converting=1, .mdt=MK_MDT(S8), .nelem=16, .vdt=MK_VDT(S32)},
{.converting=1, .mdt=MK_MDT(U16), .nelem=16, .vdt=MK_VDT(U32)},
{.converting=1, .mdt=MK_MDT(S16), .nelem=16, .vdt=MK_VDT(S32)}}
;
static const amed_db_swizzle_tv d_i64_tbl[8] = 
{{.mdt=MK_MDT(S64), .nelem=8, .vdt=MK_VDT(S64)},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1}}
;
static const amed_db_swizzle_tv d_f64_tbl[8] = 
{{.mdt=MK_MDT(F64), .nelem=8, .vdt=MK_VDT(F64)},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1},
{.reserved=1}}
;
