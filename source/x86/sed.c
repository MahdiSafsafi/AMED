/*BEGIN_HEADER
*
* Copyright (C) 2020 Mahdi Safsafi.
*
* https://github.com/MahdiSafsafi/AMED
*
* See licence file 'LICENCE' for use and distribution rights.
*
*END_HEADER*/

#include <assert.h>
#include <stdbool.h>
#include <stdint.h>

#include "amed.h"
#include "amed/x86.h"
#include "sed.h"

#include "include/bitdiffs.inc"
#include "include/encodings.inc"
#include "include/templates.inc"
#include "include/iflags.inc"
#include "include/tables.inc"
#include "include/reginfo.inc"
#include "include/argument.inc"
#include "include/arguments.inc"
#include "include/iform2mnem.inc"
#include "include/widths.inc"