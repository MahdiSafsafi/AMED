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
#include "amed/aarch32.h"
#include "db.h"

extern const amed_db_encoding    amed_aarch32_encodings_array[];
extern const amed_db_template    amed_aarch32_templates_array[];
extern const amed_db_bitdiff     amed_aarch32_bitdiffs_array[];
extern const amed_db_encodedin   amed_aarch32_encodedins_array[];
extern const void*               amed_aarch32_arguments_array[];
extern const uint16_t            amed_aarch32_aliases_array[];
extern const amed_db_reginfo     amed_aarch32_reginfo_array[];
extern const uint16_t            amed_aarch32_iform2mnem_array[];
extern const amed_db_pstate      amed_aarch32_iflags_array[];