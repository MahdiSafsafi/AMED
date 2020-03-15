/*BEGIN_HEADER
*
* Copyright (C) 2020 Mahdi Safsafi.
*
* https://github.com/MahdiSafsafi/AMED
*
* See licence file 'LICENCE' for use and distribution rights.
*
*END_HEADER*/

#include <stdint.h>
#include <stdbool.h>
#include <assert.h>

#include "amed.h"
#include "amed/aarch64.h"
#include "db.h"

extern const amed_db_encoding    amed_aarch64_encodings_array[];
extern const amed_db_template    amed_aarch64_templates_array[];
extern const amed_db_bitdiff     amed_aarch64_bitdiffs_array[];
extern const amed_db_encodedin   amed_aarch64_encodedins_array[];
extern const void*               amed_aarch64_arguments_array[];
extern const uint16_t            amed_aarch64_aliases_array[];
extern const amed_db_reginfo     amed_aarch64_reginfo_array[];
extern const uint16_t            amed_aarch64_iform2mnem_array[];
extern const amed_db_pstate      amed_aarch64_iflags_array[];