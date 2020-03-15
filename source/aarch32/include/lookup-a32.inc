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

uint32_t
aarch32_lookup_a32(uint32_t opcode)
{
  unsigned char a = (opcode >> 0 ) & 0xff;
  unsigned char b = (opcode >> 8 ) & 0xff;
  unsigned char c = (opcode >> 16) & 0xff;
  unsigned char d = (opcode >> 24) & 0xff;
  
  // the following switch contains 8 case.
  switch (d & 0x0e)
  {
    case 0x00:
    {
      if (c & 0x10)
      {
        if (a & 0x10)
        {
          if (a & 0x80)
          {
            if (a & 0x20)
            {
              if (a & 0x40)
              {
                if (c & 0x40)
                {
                  // conflicts:
                  // ENCODING.LDRSH_i_A1_off       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xx0xxxxxxxxxxxxxxxxxxxxx
                  // ENCODING.LDRSH_i_A1_post      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xx0xxxxxxxxxxxxxxxxxxxxx
                  // ENCODING.LDRSH_i_A1_pre       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xx1xxxxxxxxxxxxxxxxxxxxx
                  // ENCODING.LDRSH_l_A1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx
                  // ENCODING.LDRSHT_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xx1xxxxxxxxxxxxxxxxxxxxx
                  // P:W!=0b01
                  if ((opcode & 0x01200000) != 0x00200000)
                  {
                    // Rn!=0b1111
                    if ((opcode & 0x000f0000) != 0x000f0000)
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.LDRSH_i_A1_pre
                        return 317;
                      }
                      else
                      {
                        if (d & 0x01)
                        {
                          // ENCODING.LDRSH_i_A1_off
                          return 315;
                        }
                        else
                        {
                          // ENCODING.LDRSH_i_A1_post
                          return 316;
                        }
                      }
                    }
                    else
                    {
                      // ENCODING.LDRSH_l_A1
                      return 322;
                    }
                  }
                  else
                  {
                    // ENCODING.LDRSHT_A1
                    return 329;
                  }
                }
                else
                {
                  if (c & 0x20)
                  {
                    if (d & 0x01)
                    {
                      // ENCODING.LDRSH_r_A1_pre
                      return 326;
                    }
                    else
                    {
                      // ENCODING.LDRSHT_A2
                      return 330;
                    }
                  }
                  else
                  {
                    if (d & 0x01)
                    {
                      // ENCODING.LDRSH_r_A1_off
                      return 324;
                    }
                    else
                    {
                      // ENCODING.LDRSH_r_A1_post
                      return 325;
                    }
                  }
                }
              }
              else
              {
                if (c & 0x40)
                {
                  // conflicts:
                  // ENCODING.LDRH_i_A1_off        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xx0xxxxxxxxxxxxxxxxxxxxx
                  // ENCODING.LDRH_i_A1_post       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xx0xxxxxxxxxxxxxxxxxxxxx
                  // ENCODING.LDRH_i_A1_pre        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xx1xxxxxxxxxxxxxxxxxxxxx
                  // ENCODING.LDRH_l_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx
                  // ENCODING.LDRHT_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xx1xxxxxxxxxxxxxxxxxxxxx
                  // P:W!=0b01
                  if ((opcode & 0x01200000) != 0x00200000)
                  {
                    // Rn!=0b1111
                    if ((opcode & 0x000f0000) != 0x000f0000)
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.LDRH_i_A1_pre
                        return 282;
                      }
                      else
                      {
                        if (d & 0x01)
                        {
                          // ENCODING.LDRH_i_A1_off
                          return 280;
                        }
                        else
                        {
                          // ENCODING.LDRH_i_A1_post
                          return 281;
                        }
                      }
                    }
                    else
                    {
                      // ENCODING.LDRH_l_A1
                      return 288;
                    }
                  }
                  else
                  {
                    // ENCODING.LDRHT_A1
                    return 295;
                  }
                }
                else
                {
                  if (c & 0x20)
                  {
                    if (d & 0x01)
                    {
                      // ENCODING.LDRH_r_A1_pre
                      return 292;
                    }
                    else
                    {
                      // ENCODING.LDRHT_A2
                      return 296;
                    }
                  }
                  else
                  {
                    if (d & 0x01)
                    {
                      // ENCODING.LDRH_r_A1_off
                      return 290;
                    }
                    else
                    {
                      // ENCODING.LDRH_r_A1_post
                      return 291;
                    }
                  }
                }
              }
            }
            else
            {
              if (a & 0x40)
              {
                if (c & 0x40)
                {
                  // conflicts:
                  // ENCODING.LDRSB_i_A1_off       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xx0xxxxxxxxxxxxxxxxxxxxx
                  // ENCODING.LDRSB_i_A1_post      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xx0xxxxxxxxxxxxxxxxxxxxx
                  // ENCODING.LDRSB_i_A1_pre       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xx1xxxxxxxxxxxxxxxxxxxxx
                  // ENCODING.LDRSB_l_A1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx
                  // ENCODING.LDRSBT_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xx1xxxxxxxxxxxxxxxxxxxxx
                  // P:W!=0b01
                  if ((opcode & 0x01200000) != 0x00200000)
                  {
                    // Rn!=0b1111
                    if ((opcode & 0x000f0000) != 0x000f0000)
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.LDRSB_i_A1_pre
                        return 300;
                      }
                      else
                      {
                        if (d & 0x01)
                        {
                          // ENCODING.LDRSB_i_A1_off
                          return 298;
                        }
                        else
                        {
                          // ENCODING.LDRSB_i_A1_post
                          return 299;
                        }
                      }
                    }
                    else
                    {
                      // ENCODING.LDRSB_l_A1
                      return 305;
                    }
                  }
                  else
                  {
                    // ENCODING.LDRSBT_A1
                    return 312;
                  }
                }
                else
                {
                  if (c & 0x20)
                  {
                    if (d & 0x01)
                    {
                      // ENCODING.LDRSB_r_A1_pre
                      return 309;
                    }
                    else
                    {
                      // ENCODING.LDRSBT_A2
                      return 313;
                    }
                  }
                  else
                  {
                    if (d & 0x01)
                    {
                      // ENCODING.LDRSB_r_A1_off
                      return 307;
                    }
                    else
                    {
                      // ENCODING.LDRSB_r_A1_post
                      return 308;
                    }
                  }
                }
              }
              else
              {
                if (c & 0x20)
                {
                  if (c & 0x40)
                  {
                    if (d & 0x01)
                    {
                      // the following switch contains 3 case.
                      switch (b & 0x03)
                      {
                        case 0x00:
                        {
                          // ENCODING.LDAH_A1
                          return 205;
                          break;
                        }
                        case 0x02:
                        {
                          // ENCODING.LDAEXH_A1
                          return 203;
                          break;
                        }
                        case 0x03:
                        {
                          // ENCODING.LDREXH_A1
                          return 278;
                          break;
                        }
                        default: break;
                      }
                    }
                    else
                    {
                      // ENCODING.SMLALS_A1
                      return 581;
                    }
                  }
                  else
                  {
                    if (c & 0x80)
                    {
                      if (d & 0x01)
                      {
                        if (b & 0x01)
                        {
                          // ENCODING.LDREXD_A1
                          return 276;
                        }
                        else
                        {
                          // ENCODING.LDAEXD_A1
                          return 201;
                        }
                      }
                      else
                      {
                        // ENCODING.UMLALS_A1
                        return 854;
                      }
                    }
                    else
                    {
                      // ENCODING.MLAS_A1
                      return 339;
                    }
                  }
                }
                else
                {
                  if (c & 0x40)
                  {
                    if (d & 0x01)
                    {
                      // the following switch contains 3 case.
                      switch (b & 0x03)
                      {
                        case 0x00:
                        {
                          // ENCODING.LDAB_A1
                          return 195;
                          break;
                        }
                        case 0x02:
                        {
                          // ENCODING.LDAEXB_A1
                          return 199;
                          break;
                        }
                        case 0x03:
                        {
                          // ENCODING.LDREXB_A1
                          return 274;
                          break;
                        }
                        default: break;
                      }
                    }
                    else
                    {
                      // ENCODING.SMULLS_A1
                      return 632;
                    }
                  }
                  else
                  {
                    if (c & 0x80)
                    {
                      if (d & 0x01)
                      {
                        // the following switch contains 3 case.
                        switch (b & 0x03)
                        {
                          case 0x00:
                          {
                            // ENCODING.LDA_A1
                            return 193;
                            break;
                          }
                          case 0x02:
                          {
                            // ENCODING.LDAEX_A1
                            return 197;
                            break;
                          }
                          case 0x03:
                          {
                            // ENCODING.LDREX_A1
                            return 272;
                            break;
                          }
                          default: break;
                        }
                      }
                      else
                      {
                        // ENCODING.UMULLS_A1
                        return 857;
                      }
                    }
                    else
                    {
                      // ENCODING.MULS_A1
                      return 384;
                    }
                  }
                }
              }
            }
          }
          else
          {
            if (c & 0x20)
            {
              if (c & 0x40)
              {
                if (c & 0x80)
                {
                  if (d & 0x01)
                  {
                    // ENCODING.MVNS_rr_A1
                    return 401;
                  }
                  else
                  {
                    // ENCODING.RSCS_rr_A1
                    return 514;
                  }
                }
                else
                {
                  if (d & 0x01)
                  {
                    // ENCODING.CMN_rr_A1
                    return 121;
                  }
                  else
                  {
                    // ENCODING.RSBS_rr_A1
                    return 506;
                  }
                }
              }
              else
              {
                if (c & 0x80)
                {
                  if (d & 0x01)
                  {
                    // ENCODING.MOVS_rr_A1
                    return 361;
                  }
                  else
                  {
                    // ENCODING.ADCS_rr_A1
                    return 14;
                  }
                }
                else
                {
                  if (d & 0x01)
                  {
                    // ENCODING.TEQ_rr_A1
                    return 816;
                  }
                  else
                  {
                    // ENCODING.EORS_rr_A1
                    return 180;
                  }
                }
              }
            }
            else
            {
              if (c & 0x40)
              {
                if (c & 0x80)
                {
                  if (d & 0x01)
                  {
                    // ENCODING.BICS_rr_A1
                    return 94;
                  }
                  else
                  {
                    // ENCODING.SBCS_rr_A1
                    return 537;
                  }
                }
                else
                {
                  if (d & 0x01)
                  {
                    // ENCODING.CMP_rr_A1
                    return 131;
                  }
                  else
                  {
                    // ENCODING.SUBS_rr_A1
                    return 776;
                  }
                }
              }
              else
              {
                if (c & 0x80)
                {
                  if (d & 0x01)
                  {
                    // ENCODING.ORRS_rr_A1
                    return 425;
                  }
                  else
                  {
                    // ENCODING.ADDS_rr_A1
                    return 33;
                  }
                }
                else
                {
                  if (d & 0x01)
                  {
                    // ENCODING.TST_rr_A1
                    return 826;
                  }
                  else
                  {
                    // ENCODING.ANDS_rr_A1
                    return 70;
                  }
                }
              }
            }
          }
        }
        else
        {
          if (c & 0x20)
          {
            if (c & 0x40)
            {
              if (c & 0x80)
              {
                if (d & 0x01)
                {
                  // conflicts:
                  // ENCODING.MVNS_r_A1_RRX        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0000xxxx0000011xxxxx
                  // ENCODING.MVNS_r_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0000xxxxxxxxxxxxxxxx
                  // imm5:stype!=0b0000011
                  if ((opcode & 0x00000fe0) != 0x00000060)
                  {
                    // ENCODING.MVNS_r_A1
                    return 395;
                  }
                  else
                  {
                    // ENCODING.MVNS_r_A1_RRX
                    return 394;
                  }
                }
                else
                {
                  // conflicts:
                  // ENCODING.RSCS_r_A1_RRX        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0000011xxxxx
                  // ENCODING.RSCS_r_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                  // imm5:stype!=0b0000011
                  if ((opcode & 0x00000fe0) != 0x00000060)
                  {
                    // ENCODING.RSCS_r_A1
                    return 513;
                  }
                  else
                  {
                    // ENCODING.RSCS_r_A1_RRX
                    return 512;
                  }
                }
              }
              else
              {
                if (d & 0x01)
                {
                  // conflicts:
                  // ENCODING.CMN_r_A1_RRX         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00000000011xxxxx
                  // ENCODING.CMN_r_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0000xxxxxxxxxxxx
                  // imm5:stype!=0b0000011
                  if ((opcode & 0x00000fe0) != 0x00000060)
                  {
                    // ENCODING.CMN_r_A1
                    return 117;
                  }
                  else
                  {
                    // ENCODING.CMN_r_A1_RRX
                    return 116;
                  }
                }
                else
                {
                  // conflicts:
                  // ENCODING.RSBS_r_A1_RRX        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0000011xxxxx
                  // ENCODING.RSBS_r_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                  // imm5:stype!=0b0000011
                  if ((opcode & 0x00000fe0) != 0x00000060)
                  {
                    // ENCODING.RSBS_r_A1
                    return 501;
                  }
                  else
                  {
                    // ENCODING.RSBS_r_A1_RRX
                    return 500;
                  }
                }
              }
            }
            else
            {
              if (c & 0x80)
              {
                if (d & 0x01)
                {
                  // conflicts:
                  // ENCODING.MOVS_r_A1_RRX        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0000xxxx0000011xxxxx
                  // ENCODING.MOVS_r_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0000xxxxxxxxxxxxxxxx
                  // imm5:stype!=0b0000011
                  if ((opcode & 0x00000fe0) != 0x00000060)
                  {
                    // ENCODING.MOVS_r_A1
                    return 354;
                  }
                  else
                  {
                    // ENCODING.MOVS_r_A1_RRX
                    return 353;
                  }
                }
                else
                {
                  // conflicts:
                  // ENCODING.ADCS_r_A1_RRX        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0000011xxxxx
                  // ENCODING.ADCS_r_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                  // imm5:stype!=0b0000011
                  if ((opcode & 0x00000fe0) != 0x00000060)
                  {
                    // ENCODING.ADCS_r_A1
                    return 8;
                  }
                  else
                  {
                    // ENCODING.ADCS_r_A1_RRX
                    return 7;
                  }
                }
              }
              else
              {
                if (d & 0x01)
                {
                  // conflicts:
                  // ENCODING.TEQ_r_A1_RRX         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00000000011xxxxx
                  // ENCODING.TEQ_r_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0000xxxxxxxxxxxx
                  // imm5:stype!=0b0000011
                  if ((opcode & 0x00000fe0) != 0x00000060)
                  {
                    // ENCODING.TEQ_r_A1
                    return 813;
                  }
                  else
                  {
                    // ENCODING.TEQ_r_A1_RRX
                    return 812;
                  }
                }
                else
                {
                  // conflicts:
                  // ENCODING.EORS_r_A1_RRX        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0000011xxxxx
                  // ENCODING.EORS_r_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                  // imm5:stype!=0b0000011
                  if ((opcode & 0x00000fe0) != 0x00000060)
                  {
                    // ENCODING.EORS_r_A1
                    return 174;
                  }
                  else
                  {
                    // ENCODING.EORS_r_A1_RRX
                    return 173;
                  }
                }
              }
            }
          }
          else
          {
            if (c & 0x40)
            {
              if (c & 0x80)
              {
                if (d & 0x01)
                {
                  // conflicts:
                  // ENCODING.BICS_r_A1_RRX        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0000011xxxxx
                  // ENCODING.BICS_r_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                  // imm5:stype!=0b0000011
                  if ((opcode & 0x00000fe0) != 0x00000060)
                  {
                    // ENCODING.BICS_r_A1
                    return 88;
                  }
                  else
                  {
                    // ENCODING.BICS_r_A1_RRX
                    return 87;
                  }
                }
                else
                {
                  // conflicts:
                  // ENCODING.SBCS_r_A1_RRX        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0000011xxxxx
                  // ENCODING.SBCS_r_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                  // imm5:stype!=0b0000011
                  if ((opcode & 0x00000fe0) != 0x00000060)
                  {
                    // ENCODING.SBCS_r_A1
                    return 531;
                  }
                  else
                  {
                    // ENCODING.SBCS_r_A1_RRX
                    return 530;
                  }
                }
              }
              else
              {
                if (d & 0x01)
                {
                  // conflicts:
                  // ENCODING.CMP_r_A1_RRX         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00000000011xxxxx
                  // ENCODING.CMP_r_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0000xxxxxxxxxxxx
                  // imm5:stype!=0b0000011
                  if ((opcode & 0x00000fe0) != 0x00000060)
                  {
                    // ENCODING.CMP_r_A1
                    return 126;
                  }
                  else
                  {
                    // ENCODING.CMP_r_A1_RRX
                    return 125;
                  }
                }
                else
                {
                  // conflicts:
                  // ENCODING.SUBS_r_A1_RRX        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0000011xxxxx
                  // ENCODING.SUBS_r_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                  // ENCODING.SUBS_SP_r_A1_RRX     : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1101xxxx0000011xxxxx
                  // ENCODING.SUBS_SP_r_A1         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1101xxxxxxxxxxxxxxxx
                  // imm5:stype!=0b0000011
                  if ((opcode & 0x00000fe0) != 0x00000060)
                  {
                    // Rn!=0b1101
                    if ((opcode & 0x000f0000) != 0x000d0000)
                    {
                      // ENCODING.SUBS_r_A1
                      return 770;
                    }
                    else
                    {
                      // ENCODING.SUBS_SP_r_A1
                      return 787;
                    }
                  }
                  else
                  {
                    // Rn!=0b1101
                    if ((opcode & 0x000f0000) != 0x000d0000)
                    {
                      // ENCODING.SUBS_r_A1_RRX
                      return 769;
                    }
                    else
                    {
                      // ENCODING.SUBS_SP_r_A1_RRX
                      return 786;
                    }
                  }
                }
              }
            }
            else
            {
              if (c & 0x80)
              {
                if (d & 0x01)
                {
                  // conflicts:
                  // ENCODING.ORRS_r_A1_RRX        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0000011xxxxx
                  // ENCODING.ORRS_r_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                  // imm5:stype!=0b0000011
                  if ((opcode & 0x00000fe0) != 0x00000060)
                  {
                    // ENCODING.ORRS_r_A1
                    return 419;
                  }
                  else
                  {
                    // ENCODING.ORRS_r_A1_RRX
                    return 418;
                  }
                }
                else
                {
                  // conflicts:
                  // ENCODING.ADDS_r_A1_RRX        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0000011xxxxx
                  // ENCODING.ADDS_r_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                  // ENCODING.ADDS_SP_r_A1_RRX     : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1101xxxx0000011xxxxx
                  // ENCODING.ADDS_SP_r_A1         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1101xxxxxxxxxxxxxxxx
                  // imm5:stype!=0b0000011
                  if ((opcode & 0x00000fe0) != 0x00000060)
                  {
                    // Rn!=0b1101
                    if ((opcode & 0x000f0000) != 0x000d0000)
                    {
                      // ENCODING.ADDS_r_A1
                      return 26;
                    }
                    else
                    {
                      // ENCODING.ADDS_SP_r_A1
                      return 45;
                    }
                  }
                  else
                  {
                    // Rn!=0b1101
                    if ((opcode & 0x000f0000) != 0x000d0000)
                    {
                      // ENCODING.ADDS_r_A1_RRX
                      return 25;
                    }
                    else
                    {
                      // ENCODING.ADDS_SP_r_A1_RRX
                      return 44;
                    }
                  }
                }
              }
              else
              {
                if (d & 0x01)
                {
                  // conflicts:
                  // ENCODING.SETPAN_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxx0000000000x0000x0000
                  // ENCODING.TST_r_A1_RRX         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00000000011xxxxx
                  // ENCODING.TST_r_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0000xxxxxxxxxxxx
                  // cond!=0b1111
                  if ((opcode & 0xf0000000) != 0xf0000000)
                  {
                    // imm5:stype!=0b0000011
                    if ((opcode & 0x00000fe0) != 0x00000060)
                    {
                      // ENCODING.TST_r_A1
                      return 822;
                    }
                    else
                    {
                      // ENCODING.TST_r_A1_RRX
                      return 821;
                    }
                  }
                  else
                  {
                    // ENCODING.SETPAN_A1
                    return 547;
                  }
                }
                else
                {
                  // conflicts:
                  // ENCODING.ANDS_r_A1_RRX        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0000011xxxxx
                  // ENCODING.ANDS_r_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                  // imm5:stype!=0b0000011
                  if ((opcode & 0x00000fe0) != 0x00000060)
                  {
                    // ENCODING.ANDS_r_A1
                    return 64;
                  }
                  else
                  {
                    // ENCODING.ANDS_r_A1_RRX
                    return 63;
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        if (c & 0x20)
        {
          if (a & 0x10)
          {
            if (a & 0x80)
            {
              if (a & 0x20)
              {
                if (a & 0x40)
                {
                  if (c & 0x40)
                  {
                    // ENCODING.STRD_i_A1_pre
                    return 725;
                  }
                  else
                  {
                    // ENCODING.STRD_r_A1_pre
                    return 731;
                  }
                }
                else
                {
                  if (c & 0x40)
                  {
                    if (d & 0x01)
                    {
                      // ENCODING.STRH_i_A1_pre
                      return 742;
                    }
                    else
                    {
                      // ENCODING.STRHT_A1
                      return 753;
                    }
                  }
                  else
                  {
                    if (d & 0x01)
                    {
                      // ENCODING.STRH_r_A1_pre
                      return 750;
                    }
                    else
                    {
                      // ENCODING.STRHT_A2
                      return 754;
                    }
                  }
                }
              }
              else
              {
                if (a & 0x40)
                {
                  if (c & 0x40)
                  {
                    // ENCODING.LDRD_i_A1_pre
                    return 263;
                  }
                  else
                  {
                    // ENCODING.LDRD_r_A1_pre
                    return 271;
                  }
                }
                else
                {
                  if (c & 0x40)
                  {
                    if (c & 0x80)
                    {
                      if (d & 0x01)
                      {
                        // the following switch contains 3 case.
                        switch (b & 0x03)
                        {
                          case 0x00:
                          {
                            // ENCODING.STLH_A1
                            return 683;
                            break;
                          }
                          case 0x02:
                          {
                            // ENCODING.STLEXH_A1
                            return 681;
                            break;
                          }
                          case 0x03:
                          {
                            // ENCODING.STREXH_A1
                            return 738;
                            break;
                          }
                          default: break;
                        }
                      }
                      else
                      {
                        // ENCODING.SMLAL_A1
                        return 582;
                      }
                    }
                    else
                    {
                      // ENCODING.MLS_A1
                      return 342;
                    }
                  }
                  else
                  {
                    if (c & 0x80)
                    {
                      if (d & 0x01)
                      {
                        if (b & 0x01)
                        {
                          // ENCODING.STREXD_A1
                          return 736;
                        }
                        else
                        {
                          // ENCODING.STLEXD_A1
                          return 679;
                        }
                      }
                      else
                      {
                        // ENCODING.UMLAL_A1
                        return 855;
                      }
                    }
                    else
                    {
                      // ENCODING.MLA_A1
                      return 340;
                    }
                  }
                }
              }
            }
            else
            {
              if (c & 0x40)
              {
                if (c & 0x80)
                {
                  if (d & 0x01)
                  {
                    // ENCODING.MVN_rr_A1
                    return 402;
                  }
                  else
                  {
                    // ENCODING.RSC_rr_A1
                    return 515;
                  }
                }
                else
                {
                  if (d & 0x01)
                  {
                    if (a & 0x20)
                    {
                      // ENCODING.SMC_A1_AS
                      return 567;
                    }
                    else
                    {
                      if (a & 0x40)
                      {
                        // ENCODING.QDSUB_A1
                        return 466;
                      }
                      else
                      {
                        // ENCODING.CLZ_A1
                        return 112;
                      }
                    }
                  }
                  else
                  {
                    // ENCODING.RSB_rr_A1
                    return 507;
                  }
                }
              }
              else
              {
                if (c & 0x80)
                {
                  if (d & 0x01)
                  {
                    // ENCODING.MOV_rr_A1
                    return 362;
                  }
                  else
                  {
                    // ENCODING.ADC_rr_A1
                    return 15;
                  }
                }
                else
                {
                  if (d & 0x01)
                  {
                    // the following switch contains 4 case.
                    switch (a & 0x60)
                    {
                      case 0x00:
                      {
                        // ENCODING.BX_A1
                        return 104;
                        break;
                      }
                      case 0x20:
                      {
                        // ENCODING.BLX_r_A1
                        return 102;
                        break;
                      }
                      case 0x40:
                      {
                        // ENCODING.QSUB_A1
                        return 470;
                        break;
                      }
                      case 0x60:
                      {
                        // ENCODING.BKPT_A1
                        return 96;
                        break;
                      }
                      default: break;
                    }
                  }
                  else
                  {
                    // ENCODING.EOR_rr_A1
                    return 181;
                  }
                }
              }
            }
          }
          else
          {
            if (c & 0x80)
            {
              if (c & 0x40)
              {
                if (d & 0x01)
                {
                  // conflicts:
                  // ENCODING.MVN_r_A1_RRX         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0000xxxx0000011xxxxx
                  // ENCODING.MVN_r_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0000xxxxxxxxxxxxxxxx
                  // imm5:stype!=0b0000011
                  if ((opcode & 0x00000fe0) != 0x00000060)
                  {
                    // ENCODING.MVN_r_A1
                    return 393;
                  }
                  else
                  {
                    // ENCODING.MVN_r_A1_RRX
                    return 392;
                  }
                }
                else
                {
                  // conflicts:
                  // ENCODING.RSC_r_A1_RRX         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0000011xxxxx
                  // ENCODING.RSC_r_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                  // imm5:stype!=0b0000011
                  if ((opcode & 0x00000fe0) != 0x00000060)
                  {
                    // ENCODING.RSC_r_A1
                    return 511;
                  }
                  else
                  {
                    // ENCODING.RSC_r_A1_RRX
                    return 510;
                  }
                }
              }
              else
              {
                if (d & 0x01)
                {
                  // conflicts:
                  // ENCODING.MOV_r_A1_RRX         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0000xxxx0000011xxxxx
                  // ENCODING.MOV_r_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0000xxxxxxxxxxxxxxxx
                  // imm5:stype!=0b0000011
                  if ((opcode & 0x00000fe0) != 0x00000060)
                  {
                    // ENCODING.MOV_r_A1
                    return 352;
                  }
                  else
                  {
                    // ENCODING.MOV_r_A1_RRX
                    return 351;
                  }
                }
                else
                {
                  // conflicts:
                  // ENCODING.ADC_r_A1_RRX         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0000011xxxxx
                  // ENCODING.ADC_r_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                  // imm5:stype!=0b0000011
                  if ((opcode & 0x00000fe0) != 0x00000060)
                  {
                    // ENCODING.ADC_r_A1
                    return 6;
                  }
                  else
                  {
                    // ENCODING.ADC_r_A1_RRX
                    return 5;
                  }
                }
              }
            }
            else
            {
              if (d & 0x01)
              {
                // the following switch contains 8 case.
                switch (a & 0xe0)
                {
                  case 0x00:
                  {
                    if (b & 0x02)
                    {
                      // ENCODING.MSR_br_A1_AS
                      return 379;
                    }
                    else
                    {
                      // ENCODING.MSR_r_A1_AS
                      return 382;
                    }
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.BXJ_A1
                    return 106;
                    break;
                  }
                  case 0x40:
                  {
                    if (b & 0x02)
                    {
                      // ENCODING.CRC32CH_A1
                      return 151;
                    }
                    else
                    {
                      // ENCODING.CRC32H_A1
                      return 145;
                    }
                    break;
                  }
                  case 0x60:
                  {
                    // ENCODING.ERET_A1
                    return 182;
                    break;
                  }
                  case 0x80:
                  {
                    if (c & 0x40)
                    {
                      // ENCODING.SMULBB_A1
                      return 624;
                    }
                    else
                    {
                      // ENCODING.SMLAWB_A1
                      return 596;
                    }
                    break;
                  }
                  case 0xa0:
                  {
                    if (c & 0x40)
                    {
                      // ENCODING.SMULTB_A1
                      return 626;
                    }
                    else
                    {
                      // ENCODING.SMULWB_A1
                      return 635;
                    }
                    break;
                  }
                  case 0xc0:
                  {
                    if (c & 0x40)
                    {
                      // ENCODING.SMULBT_A1
                      return 625;
                    }
                    else
                    {
                      // ENCODING.SMLAWT_A1
                      return 597;
                    }
                    break;
                  }
                  case 0xe0:
                  {
                    if (c & 0x40)
                    {
                      // ENCODING.SMULTT_A1
                      return 627;
                    }
                    else
                    {
                      // ENCODING.SMULWT_A1
                      return 636;
                    }
                    break;
                  }
                  default: break;
                }
              }
              else
              {
                if (c & 0x40)
                {
                  // conflicts:
                  // ENCODING.RSB_r_A1_RRX         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0000011xxxxx
                  // ENCODING.RSB_r_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                  // imm5:stype!=0b0000011
                  if ((opcode & 0x00000fe0) != 0x00000060)
                  {
                    // ENCODING.RSB_r_A1
                    return 499;
                  }
                  else
                  {
                    // ENCODING.RSB_r_A1_RRX
                    return 498;
                  }
                }
                else
                {
                  // conflicts:
                  // ENCODING.EOR_r_A1_RRX         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0000011xxxxx
                  // ENCODING.EOR_r_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                  // imm5:stype!=0b0000011
                  if ((opcode & 0x00000fe0) != 0x00000060)
                  {
                    // ENCODING.EOR_r_A1
                    return 172;
                  }
                  else
                  {
                    // ENCODING.EOR_r_A1_RRX
                    return 171;
                  }
                }
              }
            }
          }
        }
        else
        {
          if (d & 0x01)
          {
            // conflicts:
            // ENCODING.BIC_r_A1_RRX         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx11xxxxxxxxxx00000110xxxx
            // ENCODING.BIC_r_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx11xxxxxxxxxxxxxxxxx0xxxx
            // ENCODING.BIC_rr_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx11xxxxxxxxxxxxxx0xx1xxxx
            // ENCODING.CPS_A1_AS            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx00xx00100000000xxx0xxxxx
            // ENCODING.CPSID_A1_AS          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx00xx11000000000xxx0xxxxx
            // ENCODING.CPSID_A1_ASM         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx00xx11100000000xxx0xxxxx
            // ENCODING.CPSIE_A1_AS          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx00xx10000000000xxx0xxxxx
            // ENCODING.CPSIE_A1_ASM         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx00xx10100000000xxx0xxxxx
            // ENCODING.CRC32B_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxxxxxxxxx00000100xxxx
            // ENCODING.CRC32W_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx01xxxxxxxxxx00000100xxxx
            // ENCODING.CRC32CB_A1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxxxxxxxxx00100100xxxx
            // ENCODING.CRC32CW_A1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx01xxxxxxxxxx00100100xxxx
            // ENCODING.HLT_A1               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxxxxxxxxxxxxx0111xxxx
            // ENCODING.HVC_A1               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx01xxxxxxxxxxxxxx0111xxxx
            // ENCODING.LDRD_i_A1_off        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xxxxxxxxxxxxxx1101xxxx
            // ENCODING.LDRD_l_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xx1111xxxxxxxx1101xxxx
            // ENCODING.LDRD_r_A1_off        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxxx00001101xxxx
            // ENCODING.MRS_A1_AS            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxx1111xxxx000000000000
            // ENCODING.MRS_br_A1_AS         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxxxx001x00000000
            // ENCODING.ORR_r_A1_RRX         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx10xxxxxxxxxx00000110xxxx
            // ENCODING.ORR_r_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx10xxxxxxxxxxxxxxxxx0xxxx
            // ENCODING.ORR_rr_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx10xxxxxxxxxxxxxx0xx1xxxx
            // ENCODING.QADD_A1              : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxxxxxxxxx00000101xxxx
            // ENCODING.QDADD_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx01xxxxxxxxxx00000101xxxx
            // ENCODING.SETEND_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx00xx0001000000x000000000
            // ENCODING.SMLABB_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxxxxxxxxxxxxx1000xxxx
            // ENCODING.SMLABT_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxxxxxxxxxxxxx1100xxxx
            // ENCODING.SMLATB_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxxxxxxxxxxxxx1010xxxx
            // ENCODING.SMLATT_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxxxxxxxxxxxxx1110xxxx
            // ENCODING.SMLALBB_A1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx01xxxxxxxxxxxxxx1000xxxx
            // ENCODING.SMLALBT_A1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx01xxxxxxxxxxxxxx1100xxxx
            // ENCODING.SMLALTB_A1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx01xxxxxxxxxxxxxx1010xxxx
            // ENCODING.SMLALTT_A1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx01xxxxxxxxxxxxxx1110xxxx
            // ENCODING.STL_A1               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx10xxxxxx111111001001xxxx
            // ENCODING.STLB_A1              : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx11xxxxxx111111001001xxxx
            // ENCODING.STLEX_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx10xxxxxxxxxx11101001xxxx
            // ENCODING.STLEXB_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx11xxxxxxxxxx11101001xxxx
            // ENCODING.STRD_i_A1_off        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xxxxxxxxxxxxxx1111xxxx
            // ENCODING.STRD_r_A1_off        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxxx00001111xxxx
            // ENCODING.STREX_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx10xxxxxxxxxx11111001xxxx
            // ENCODING.STREXB_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx11xxxxxxxxxx11111001xxxx
            // ENCODING.STRH_i_A1_off        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xxxxxxxxxxxxxx1011xxxx
            // ENCODING.STRH_r_A1_off        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxxx00001011xxxx
            // cond!=0b1111
            if ((opcode & 0xf0000000) != 0xf0000000)
            {
              if (a & 0x10)
              {
                if (a & 0x80)
                {
                  if (a & 0x20)
                  {
                    if (a & 0x40)
                    {
                      if (c & 0x40)
                      {
                        // ENCODING.STRD_i_A1_off
                        return 723;
                      }
                      else
                      {
                        // ENCODING.STRD_r_A1_off
                        return 729;
                      }
                    }
                    else
                    {
                      if (c & 0x40)
                      {
                        // ENCODING.STRH_i_A1_off
                        return 740;
                      }
                      else
                      {
                        // ENCODING.STRH_r_A1_off
                        return 748;
                      }
                    }
                  }
                  else
                  {
                    if (a & 0x40)
                    {
                      if (c & 0x40)
                      {
                        // Rn!=0b1111
                        if ((opcode & 0x000f0000) != 0x000f0000)
                        {
                          // ENCODING.LDRD_i_A1_off
                          return 261;
                        }
                        else
                        {
                          // ENCODING.LDRD_l_A1
                          return 267;
                        }
                      }
                      else
                      {
                        // ENCODING.LDRD_r_A1_off
                        return 269;
                      }
                    }
                    else
                    {
                      if (b & 0x01)
                      {
                        if (c & 0x40)
                        {
                          // ENCODING.STREXB_A1
                          return 734;
                        }
                        else
                        {
                          // ENCODING.STREX_A1
                          return 732;
                        }
                      }
                      else
                      {
                        if (b & 0x02)
                        {
                          if (c & 0x40)
                          {
                            // ENCODING.STLEXB_A1
                            return 677;
                          }
                          else
                          {
                            // ENCODING.STLEX_A1
                            return 675;
                          }
                        }
                        else
                        {
                          if (c & 0x40)
                          {
                            // ENCODING.STLB_A1
                            return 673;
                          }
                          else
                          {
                            // ENCODING.STL_A1
                            return 671;
                          }
                        }
                      }
                    }
                  }
                }
                else
                {
                  // the following switch contains 4 case.
                  switch (c & 0xc0)
                  {
                    case 0x00:
                    {
                      if (a & 0x20)
                      {
                        // ENCODING.HLT_A1
                        return 186;
                      }
                      else
                      {
                        // ENCODING.QADD_A1
                        return 456;
                      }
                      break;
                    }
                    case 0x40:
                    {
                      if (a & 0x20)
                      {
                        // ENCODING.HVC_A1
                        return 188;
                      }
                      else
                      {
                        // ENCODING.QDADD_A1
                        return 464;
                      }
                      break;
                    }
                    case 0x80:
                    {
                      // ENCODING.ORR_rr_A1
                      return 426;
                      break;
                    }
                    case 0xc0:
                    {
                      // ENCODING.BIC_rr_A1
                      return 95;
                      break;
                    }
                    default: break;
                  }
                }
              }
              else
              {
                if (c & 0x80)
                {
                  if (c & 0x40)
                  {
                    // imm5:stype!=0b0000011
                    if ((opcode & 0x00000fe0) != 0x00000060)
                    {
                      // ENCODING.BIC_r_A1
                      return 86;
                    }
                    else
                    {
                      // ENCODING.BIC_r_A1_RRX
                      return 85;
                    }
                  }
                  else
                  {
                    // imm5:stype!=0b0000011
                    if ((opcode & 0x00000fe0) != 0x00000060)
                    {
                      // ENCODING.ORR_r_A1
                      return 417;
                    }
                    else
                    {
                      // ENCODING.ORR_r_A1_RRX
                      return 416;
                    }
                  }
                }
                else
                {
                  // the following switch contains 6 case.
                  switch (a & 0xe0)
                  {
                    case 0x00:
                    {
                      if (b & 0x02)
                      {
                        // ENCODING.MRS_br_A1_AS
                        return 377;
                      }
                      else
                      {
                        // ENCODING.MRS_A1_AS
                        return 375;
                      }
                      break;
                    }
                    case 0x40:
                    {
                      if (b & 0x02)
                      {
                        if (c & 0x40)
                        {
                          // ENCODING.CRC32CW_A1
                          return 152;
                        }
                        else
                        {
                          // ENCODING.CRC32CB_A1
                          return 150;
                        }
                      }
                      else
                      {
                        if (c & 0x40)
                        {
                          // ENCODING.CRC32W_A1
                          return 146;
                        }
                        else
                        {
                          // ENCODING.CRC32B_A1
                          return 144;
                        }
                      }
                      break;
                    }
                    case 0x80:
                    {
                      if (c & 0x40)
                      {
                        // ENCODING.SMLALBB_A1
                        return 584;
                      }
                      else
                      {
                        // ENCODING.SMLABB_A1
                        return 569;
                      }
                      break;
                    }
                    case 0xa0:
                    {
                      if (c & 0x40)
                      {
                        // ENCODING.SMLALTB_A1
                        return 586;
                      }
                      else
                      {
                        // ENCODING.SMLATB_A1
                        return 571;
                      }
                      break;
                    }
                    case 0xc0:
                    {
                      if (c & 0x40)
                      {
                        // ENCODING.SMLALBT_A1
                        return 585;
                      }
                      else
                      {
                        // ENCODING.SMLABT_A1
                        return 570;
                      }
                      break;
                    }
                    case 0xe0:
                    {
                      if (c & 0x40)
                      {
                        // ENCODING.SMLALTT_A1
                        return 587;
                      }
                      else
                      {
                        // ENCODING.SMLATT_A1
                        return 572;
                      }
                      break;
                    }
                    default: break;
                  }
                }
              }
            }
            else
            {
              // the following switch contains 6 case.
              switch ((c & 0x0f) - 1)
              {
                case 0x00:
                {
                  // ENCODING.SETEND_A1
                  return 545;
                  break;
                }
                case 0x01:
                {
                  // ENCODING.CPS_A1_AS
                  return 132;
                  break;
                }
                case 0x07:
                {
                  // ENCODING.CPSIE_A1_AS
                  return 135;
                  break;
                }
                case 0x09:
                {
                  // ENCODING.CPSIE_A1_ASM
                  return 136;
                  break;
                }
                case 0x0b:
                {
                  // ENCODING.CPSID_A1_AS
                  return 133;
                  break;
                }
                case 0x0d:
                {
                  // ENCODING.CPSID_A1_ASM
                  return 134;
                  break;
                }
                default: break;
              }
            }
          }
          else
          {
            if (a & 0x10)
            {
              if (a & 0x80)
              {
                if (a & 0x20)
                {
                  if (a & 0x40)
                  {
                    if (c & 0x40)
                    {
                      // ENCODING.STRD_i_A1_post
                      return 724;
                    }
                    else
                    {
                      // ENCODING.STRD_r_A1_post
                      return 730;
                    }
                  }
                  else
                  {
                    if (c & 0x40)
                    {
                      // ENCODING.STRH_i_A1_post
                      return 741;
                    }
                    else
                    {
                      // ENCODING.STRH_r_A1_post
                      return 749;
                    }
                  }
                }
                else
                {
                  if (a & 0x40)
                  {
                    if (c & 0x40)
                    {
                      // ENCODING.LDRD_i_A1_post
                      return 262;
                    }
                    else
                    {
                      // ENCODING.LDRD_r_A1_post
                      return 270;
                    }
                  }
                  else
                  {
                    // the following switch contains 4 case.
                    switch (c & 0xc0)
                    {
                      case 0x00:
                      {
                        // ENCODING.MUL_A1
                        return 385;
                        break;
                      }
                      case 0x40:
                      {
                        // ENCODING.UMAAL_A1
                        return 852;
                        break;
                      }
                      case 0x80:
                      {
                        // ENCODING.UMULL_A1
                        return 858;
                        break;
                      }
                      case 0xc0:
                      {
                        // ENCODING.SMULL_A1
                        return 633;
                        break;
                      }
                      default: break;
                    }
                  }
                }
              }
              else
              {
                // the following switch contains 4 case.
                switch (c & 0xc0)
                {
                  case 0x00:
                  {
                    // ENCODING.AND_rr_A1
                    return 71;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.SUB_rr_A1
                    return 777;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.ADD_rr_A1
                    return 34;
                    break;
                  }
                  case 0xc0:
                  {
                    // ENCODING.SBC_rr_A1
                    return 538;
                    break;
                  }
                  default: break;
                }
              }
            }
            else
            {
              // the following switch contains 4 case.
              switch (c & 0xc0)
              {
                case 0x00:
                {
                  // conflicts:
                  // ENCODING.AND_r_A1_RRX         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0000011xxxxx
                  // ENCODING.AND_r_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                  // imm5:stype!=0b0000011
                  if ((opcode & 0x00000fe0) != 0x00000060)
                  {
                    // ENCODING.AND_r_A1
                    return 62;
                  }
                  else
                  {
                    // ENCODING.AND_r_A1_RRX
                    return 61;
                  }
                  break;
                }
                case 0x40:
                {
                  // conflicts:
                  // ENCODING.SUB_r_A1_RRX         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0000011xxxxx
                  // ENCODING.SUB_r_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                  // ENCODING.SUB_SP_r_A1_RRX      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1101xxxx0000011xxxxx
                  // ENCODING.SUB_SP_r_A1          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1101xxxxxxxxxxxxxxxx
                  // imm5:stype!=0b0000011
                  if ((opcode & 0x00000fe0) != 0x00000060)
                  {
                    // Rn!=0b1101
                    if ((opcode & 0x000f0000) != 0x000d0000)
                    {
                      // ENCODING.SUB_r_A1
                      return 768;
                    }
                    else
                    {
                      // ENCODING.SUB_SP_r_A1
                      return 785;
                    }
                  }
                  else
                  {
                    // Rn!=0b1101
                    if ((opcode & 0x000f0000) != 0x000d0000)
                    {
                      // ENCODING.SUB_r_A1_RRX
                      return 767;
                    }
                    else
                    {
                      // ENCODING.SUB_SP_r_A1_RRX
                      return 784;
                    }
                  }
                  break;
                }
                case 0x80:
                {
                  // conflicts:
                  // ENCODING.ADD_r_A1_RRX         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0000011xxxxx
                  // ENCODING.ADD_r_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                  // ENCODING.ADD_SP_r_A1_RRX      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1101xxxx0000011xxxxx
                  // ENCODING.ADD_SP_r_A1          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1101xxxxxxxxxxxxxxxx
                  // imm5:stype!=0b0000011
                  if ((opcode & 0x00000fe0) != 0x00000060)
                  {
                    // Rn!=0b1101
                    if ((opcode & 0x000f0000) != 0x000d0000)
                    {
                      // ENCODING.ADD_r_A1
                      return 24;
                    }
                    else
                    {
                      // ENCODING.ADD_SP_r_A1
                      return 43;
                    }
                  }
                  else
                  {
                    // Rn!=0b1101
                    if ((opcode & 0x000f0000) != 0x000d0000)
                    {
                      // ENCODING.ADD_r_A1_RRX
                      return 23;
                    }
                    else
                    {
                      // ENCODING.ADD_SP_r_A1_RRX
                      return 42;
                    }
                  }
                  break;
                }
                case 0xc0:
                {
                  // conflicts:
                  // ENCODING.SBC_r_A1_RRX         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0000011xxxxx
                  // ENCODING.SBC_r_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                  // imm5:stype!=0b0000011
                  if ((opcode & 0x00000fe0) != 0x00000060)
                  {
                    // ENCODING.SBC_r_A1
                    return 529;
                  }
                  else
                  {
                    // ENCODING.SBC_r_A1_RRX
                    return 528;
                  }
                  break;
                }
                default: break;
              }
            }
          }
        }
      }
      break;
    }
    case 0x02:
    {
      if (c & 0x80)
      {
        // conflicts:
        // ENCODING.ADC_i_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0x010xxxxxxxxxxxxxxxxxxxx
        // ENCODING.ADCS_i_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0x011xxxxxxxxxxxxxxxxxxxx
        // ENCODING.ADD_i_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0x000xxxxxxxxxxxxxxxxxxxx
        // ENCODING.ADDS_i_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0x001xxxxxxxxxxxxxxxxxxxx
        // ENCODING.ADD_SP_i_A1          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0x0001101xxxxxxxxxxxxxxxx
        // ENCODING.ADDS_SP_i_A1         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0x0011101xxxxxxxxxxxxxxxx
        // ENCODING.ADR_A1               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0x0001111xxxxxxxxxxxxxxxx
        // ENCODING.BIC_i_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1x100xxxxxxxxxxxxxxxxxxxx
        // ENCODING.BICS_i_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1x101xxxxxxxxxxxxxxxxxxxx
        // ENCODING.MOV_i_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1x0100000xxxxxxxxxxxxxxxx
        // ENCODING.MOVS_i_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1x0110000xxxxxxxxxxxxxxxx
        // ENCODING.MVN_i_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1x1100000xxxxxxxxxxxxxxxx
        // ENCODING.MVNS_i_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1x1110000xxxxxxxxxxxxxxxx
        // ENCODING.ORR_i_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1x000xxxxxxxxxxxxxxxxxxxx
        // ENCODING.ORRS_i_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1x001xxxxxxxxxxxxxxxxxxxx
        // ENCODING.RSC_i_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0x110xxxxxxxxxxxxxxxxxxxx
        // ENCODING.RSCS_i_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0x111xxxxxxxxxxxxxxxxxxxx
        // ENCODING.SBC_i_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0x100xxxxxxxxxxxxxxxxxxxx
        // ENCODING.SBCS_i_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0x101xxxxxxxxxxxxxxxxxxxx
        // ENCODING.AESD_A1              : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx00xxxx001101x0xxxx
        // ENCODING.AESE_A1              : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx00xxxx001100x0xxxx
        // ENCODING.AESIMC_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx00xxxx001111x0xxxx
        // ENCODING.AESMC_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx00xxxx001110x0xxxx
        // ENCODING.SHA1H_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx01xxxx001011x0xxxx
        // ENCODING.SHA1SU1_A1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx10xxxx001110x0xxxx
        // ENCODING.SHA256SU0_A1         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx10xxxx001111x0xxxx
        // ENCODING.VABAL_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0101x0x0xxxx
        // ENCODING.VABDL_i_A1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0111x0x0xxxx
        // ENCODING.VABS_A1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx01xxxx0x1100x0xxxx
        // ENCODING.VABS_A1_Q            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx01xxxx0x1101x0xxxx
        // ENCODING.VADDHN_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xxxxxxxxxxxx0100x0x0xxxx
        // ENCODING.VADDL_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0000x0x0xxxx
        // ENCODING.VADDW_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0001x0x0xxxx
        // ENCODING.VBIC_i_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx000xxxxxxx0xx10011xxxx
        // ENCODING.VBIC_i_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx000xxxxxxx0xx10111xxxx
        // ENCODING.VBIC_i_A2_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx000xxxxxxx10x10011xxxx
        // ENCODING.VBIC_i_A2_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx000xxxxxxx10x10111xxxx
        // ENCODING.VCEQ_i_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx01xxxx0x0100x0xxxx
        // ENCODING.VCEQ_i_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx01xxxx0x0101x0xxxx
        // ENCODING.VCGE_i_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx01xxxx0x0010x0xxxx
        // ENCODING.VCGE_i_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx01xxxx0x0011x0xxxx
        // ENCODING.VCGT_i_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx01xxxx0x0000x0xxxx
        // ENCODING.VCGT_i_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx01xxxx0x0001x0xxxx
        // ENCODING.VCLE_i_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx01xxxx0x0110x0xxxx
        // ENCODING.VCLE_i_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx01xxxx0x0111x0xxxx
        // ENCODING.VCLS_A1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx00xxxx010000x0xxxx
        // ENCODING.VCLS_A1_Q            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx00xxxx010001x0xxxx
        // ENCODING.VCLT_i_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx01xxxx0x1000x0xxxx
        // ENCODING.VCLT_i_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx01xxxx0x1001x0xxxx
        // ENCODING.VCLZ_A1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx00xxxx010010x0xxxx
        // ENCODING.VCLZ_A1_Q            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx00xxxx010011x0xxxx
        // ENCODING.VCNT_A1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx00xxxx010100x0xxxx
        // ENCODING.VCNT_A1_Q            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx00xxxx010101x0xxxx
        // ENCODING.VCVT_bfs_A1          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx110110xxxx011001x0xxxx
        // ENCODING.VCVT_sh_A1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx10xxxx011100x0xxxx
        // ENCODING.VCVT_hs_A1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx10xxxx011000x0xxxx
        // ENCODING.VCVT_is_A1_D         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx11xxxx011xx0x0xxxx
        // ENCODING.VCVT_is_A1_Q         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx11xxxx011xx1x0xxxx
        // ENCODING.VCVT_xs_A1_D         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx11xx00x1xxxx
        // ENCODING.VCVT_xs_A1_Q         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx11xx01x1xxxx
        // ENCODING.VCVTA_asimd_A1_D     : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx11xxxx0000x0x0xxxx
        // ENCODING.VCVTA_asimd_A1_Q     : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx11xxxx0000x1x0xxxx
        // ENCODING.VCVTM_asimd_A1_D     : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx11xxxx0011x0x0xxxx
        // ENCODING.VCVTM_asimd_A1_Q     : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx11xxxx0011x1x0xxxx
        // ENCODING.VCVTN_asimd_A1_D     : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx11xxxx0001x0x0xxxx
        // ENCODING.VCVTN_asimd_A1_Q     : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx11xxxx0001x1x0xxxx
        // ENCODING.VCVTP_asimd_A1_D     : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx11xxxx0010x0x0xxxx
        // ENCODING.VCVTP_asimd_A1_Q     : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx11xxxx0010x1x0xxxx
        // ENCODING.VDUP_s_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xxxxxxxx110000x0xxxx
        // ENCODING.VDUP_s_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xxxxxxxx110001x0xxxx
        // ENCODING.VEXT_A1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx11xxxxxxxxxxxxx0x0xxxx
        // ENCODING.VEXT_A1_Q            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx11xxxxxxxxxxxxx1x0xxxx
        // ENCODING.VMLA_s_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xxxxxxxxxxxx000xx1x0xxxx
        // ENCODING.VMLA_s_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xxxxxxxxxxxx000xx1x0xxxx
        // ENCODING.VMLAL_i_A1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx1000x0x0xxxx
        // ENCODING.VMLAL_s_A1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0010x1x0xxxx
        // ENCODING.VMLS_s_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xxxxxxxxxxxx010xx1x0xxxx
        // ENCODING.VMLS_s_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xxxxxxxxxxxx010xx1x0xxxx
        // ENCODING.VMLSL_i_A1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx1010x0x0xxxx
        // ENCODING.VMLSL_s_A1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0110x1x0xxxx
        // ENCODING.VMOV_i_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx000xxxxxxx0xx00001xxxx
        // ENCODING.VMOV_i_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx000xxxxxxx0xx00101xxxx
        // ENCODING.VMOV_i_A3_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx000xxxxxxx10x00001xxxx
        // ENCODING.VMOV_i_A3_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx000xxxxxxx10x00101xxxx
        // ENCODING.VMOV_i_A4_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx000xxxxxxx11xx0001xxxx
        // ENCODING.VMOV_i_A4_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx000xxxxxxx11xx0101xxxx
        // ENCODING.VMOV_i_A5_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx000xxxxxxx11100011xxxx
        // ENCODING.VMOV_i_A5_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx000xxxxxxx11100111xxxx
        // ENCODING.VMOVL_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxx000xxxx101000x1xxxx
        // ENCODING.VMOVN_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx10xxxx001000x0xxxx
        // ENCODING.VMUL_s_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xxxxxxxxxxxx100xx1x0xxxx
        // ENCODING.VMUL_s_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xxxxxxxxxxxx100xx1x0xxxx
        // ENCODING.VMULL_i_A1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx11x0x0x0xxxx
        // ENCODING.VMULL_s_A1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx1010x1x0xxxx
        // ENCODING.VMVN_i_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx000xxxxxxx0xx00011xxxx
        // ENCODING.VMVN_i_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx000xxxxxxx0xx00111xxxx
        // ENCODING.VMVN_i_A2_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx000xxxxxxx10x00011xxxx
        // ENCODING.VMVN_i_A2_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx000xxxxxxx10x00111xxxx
        // ENCODING.VMVN_i_A3_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx000xxxxxxx110x0011xxxx
        // ENCODING.VMVN_i_A3_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx000xxxxxxx110x0111xxxx
        // ENCODING.VMVN_r_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx00xxxx010110x0xxxx
        // ENCODING.VMVN_r_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx00xxxx010111x0xxxx
        // ENCODING.VNEG_A1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx01xxxx0x1110x0xxxx
        // ENCODING.VNEG_A1_Q            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx01xxxx0x1111x0xxxx
        // ENCODING.VORR_i_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx000xxxxxxx0xx10001xxxx
        // ENCODING.VORR_i_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx000xxxxxxx0xx10101xxxx
        // ENCODING.VORR_i_A2_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx000xxxxxxx10x10001xxxx
        // ENCODING.VORR_i_A2_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx000xxxxxxx10x10101xxxx
        // ENCODING.VPADAL_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx00xxxx0110x0x0xxxx
        // ENCODING.VPADAL_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx00xxxx0110x1x0xxxx
        // ENCODING.VPADDL_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx00xxxx0010x0x0xxxx
        // ENCODING.VPADDL_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx00xxxx0010x1x0xxxx
        // ENCODING.VQABS_A1_D           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx00xxxx011100x0xxxx
        // ENCODING.VQABS_A1_Q           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx00xxxx011101x0xxxx
        // ENCODING.VQDMLAL_A1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xxxxxxxxxxxx1001x0x0xxxx
        // ENCODING.VQDMLAL_A2           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xxxxxxxxxxxx0011x1x0xxxx
        // ENCODING.VQDMLSL_A1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xxxxxxxxxxxx1011x0x0xxxx
        // ENCODING.VQDMLSL_A2           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xxxxxxxxxxxx0111x1x0xxxx
        // ENCODING.VQDMULH_A2_D         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xxxxxxxxxxxx1100x1x0xxxx
        // ENCODING.VQDMULH_A2_Q         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xxxxxxxxxxxx1100x1x0xxxx
        // ENCODING.VQDMULL_A1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xxxxxxxxxxxx1101x0x0xxxx
        // ENCODING.VQDMULL_A2           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xxxxxxxxxxxx1011x1x0xxxx
        // ENCODING.VQMOVN_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx10xxxx00101xx0xxxx
        // ENCODING.VQMOVUN_A1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx10xxxx001001x0xxxx
        // ENCODING.VQNEG_A1_D           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx00xxxx011110x0xxxx
        // ENCODING.VQNEG_A1_Q           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx00xxxx011111x0xxxx
        // ENCODING.VQRDMLAH_A2_D        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xxxxxxxxxxxx1110x1x0xxxx
        // ENCODING.VQRDMLAH_A2_Q        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xxxxxxxxxxxx1110x1x0xxxx
        // ENCODING.VQRDMLSH_A2_D        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xxxxxxxxxxxx1111x1x0xxxx
        // ENCODING.VQRDMLSH_A2_Q        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xxxxxxxxxxxx1111x1x0xxxx
        // ENCODING.VQRDMULH_A2_D        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xxxxxxxxxxxx1101x1x0xxxx
        // ENCODING.VQRDMULH_A2_Q        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xxxxxxxxxxxx1101x1x0xxxx
        // ENCODING.VQRSHRN_A1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx100101x1xxxx
        // ENCODING.VQRSHRUN_A1          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xxxxxxxxxxxx100001x1xxxx
        // ENCODING.VQSHL_i_A1_D         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0111x0x1xxxx
        // ENCODING.VQSHL_i_A1_Q         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0111x1x1xxxx
        // ENCODING.VQSHLU_i_A1_D        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xxxxxxxxxxxx0110x0x1xxxx
        // ENCODING.VQSHLU_i_A1_Q        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xxxxxxxxxxxx0110x1x1xxxx
        // ENCODING.VQSHRN_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx100100x1xxxx
        // ENCODING.VQSHRUN_A1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xxxxxxxxxxxx100000x1xxxx
        // ENCODING.VRADDHN_A1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xxxxxxxxxxxx0100x0x0xxxx
        // ENCODING.VRECPE_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx11xxxx010x00x0xxxx
        // ENCODING.VRECPE_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx11xxxx010x01x0xxxx
        // ENCODING.VREV16_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx00xxxx000100x0xxxx
        // ENCODING.VREV16_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx00xxxx000101x0xxxx
        // ENCODING.VREV32_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx00xxxx000010x0xxxx
        // ENCODING.VREV32_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx00xxxx000011x0xxxx
        // ENCODING.VREV64_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx00xxxx000000x0xxxx
        // ENCODING.VREV64_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx00xxxx000001x0xxxx
        // ENCODING.VRINTA_asimd_A1_D    : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx10xxxx010100x0xxxx
        // ENCODING.VRINTA_asimd_A1_Q    : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx10xxxx010101x0xxxx
        // ENCODING.VRINTM_asimd_A1_D    : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx10xxxx011010x0xxxx
        // ENCODING.VRINTM_asimd_A1_Q    : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx10xxxx011011x0xxxx
        // ENCODING.VRINTN_asimd_A1_D    : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx10xxxx010000x0xxxx
        // ENCODING.VRINTN_asimd_A1_Q    : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx10xxxx010001x0xxxx
        // ENCODING.VRINTP_asimd_A1_D    : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx10xxxx011110x0xxxx
        // ENCODING.VRINTP_asimd_A1_Q    : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx10xxxx011111x0xxxx
        // ENCODING.VRINTX_asimd_A1_D    : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx10xxxx010010x0xxxx
        // ENCODING.VRINTX_asimd_A1_Q    : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx10xxxx010011x0xxxx
        // ENCODING.VRINTZ_asimd_A1_D    : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx10xxxx010110x0xxxx
        // ENCODING.VRINTZ_asimd_A1_Q    : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx10xxxx010111x0xxxx
        // ENCODING.VRSHR_A1_D           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0010x0x1xxxx
        // ENCODING.VRSHR_A1_Q           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0010x1x1xxxx
        // ENCODING.VRSHRN_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xxxxxxxxxxxx100001x1xxxx
        // ENCODING.VRSQRTE_A1_D         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx11xxxx010x10x0xxxx
        // ENCODING.VRSQRTE_A1_Q         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx11xxxx010x11x0xxxx
        // ENCODING.VRSRA_A1_Q           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0011x0x1xxxx
        // ENCODING.VRSRA_A1_D           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0011x1x1xxxx
        // ENCODING.VRSUBHN_A1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xxxxxxxxxxxx0110x0x0xxxx
        // ENCODING.VSHL_i_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xxxxxxxxxxxx0101x0x1xxxx
        // ENCODING.VSHL_i_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xxxxxxxxxxxx0101x1x1xxxx
        // ENCODING.VSHLL_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx101000x1xxxx
        // ENCODING.VSHLL_A2             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx10xxxx001100x0xxxx
        // ENCODING.VSHR_A1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0000x0x1xxxx
        // ENCODING.VSHR_A1_Q            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0000x1x1xxxx
        // ENCODING.VSHRN_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xxxxxxxxxxxx100000x1xxxx
        // ENCODING.VSLI_A1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xxxxxxxxxxxx0101x0x1xxxx
        // ENCODING.VSLI_A1_Q            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xxxxxxxxxxxx0101x1x1xxxx
        // ENCODING.VSRA_A1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0001x0x1xxxx
        // ENCODING.VSRA_A1_Q            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0001x1x1xxxx
        // ENCODING.VSRI_A1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xxxxxxxxxxxx0100x0x1xxxx
        // ENCODING.VSRI_A1_Q            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xxxxxxxxxxxx0100x1x1xxxx
        // ENCODING.VSUBHN_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xxxxxxxxxxxx0110x0x0xxxx
        // ENCODING.VSUBL_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0010x0x0xxxx
        // ENCODING.VSUBW_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0011x0x0xxxx
        // ENCODING.VSWP_A1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx110010xxxx000000x0xxxx
        // ENCODING.VSWP_A1_Q            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx110010xxxx000001x0xxxx
        // ENCODING.VTBL_A1              : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xxxxxxxx10xxx0x0xxxx
        // ENCODING.VTBX_A1              : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xxxxxxxx10xxx1x0xxxx
        // ENCODING.VTRN_A1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx10xxxx000010x0xxxx
        // ENCODING.VTRN_A1_Q            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx10xxxx000011x0xxxx
        // ENCODING.VUZP_A1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx10xxxx000100x0xxxx
        // ENCODING.VUZP_A1_Q            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx10xxxx000101x0xxxx
        // ENCODING.VZIP_A1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx10xxxx000110x0xxxx
        // ENCODING.VZIP_A1_Q            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xx10xxxx000111x0xxxx
        // size!=0b11
        if ((opcode & 0x00300000) != 0x00300000)
        {
          // imm6!=0b000xxx
          if ((opcode & 0x00380000) != 0x00000000)
          {
            // imm6:L!=0b000xxx0
            if ((opcode & 0x00380080) != 0x00000000)
            {
              // cond!=0b1111
              if ((opcode & 0xf0000000) != 0xf0000000)
              {
                if (c & 0x10)
                {
                  if (c & 0x40)
                  {
                    if (d & 0x01)
                    {
                      // ENCODING.BICS_i_A1
                      return 82;
                    }
                    else
                    {
                      // ENCODING.SBCS_i_A1
                      return 525;
                    }
                  }
                  else
                  {
                    if (d & 0x01)
                    {
                      // ENCODING.ORRS_i_A1
                      return 413;
                    }
                    else
                    {
                      // Rn!=0b1101
                      if ((opcode & 0x000f0000) != 0x000d0000)
                      {
                        // ENCODING.ADDS_i_A1
                        return 17;
                      }
                      else
                      {
                        // ENCODING.ADDS_SP_i_A1
                        return 36;
                      }
                    }
                  }
                }
                else
                {
                  if (c & 0x20)
                  {
                    if (c & 0x40)
                    {
                      if (d & 0x01)
                      {
                        // ENCODING.MVN_i_A1
                        return 388;
                      }
                      else
                      {
                        // ENCODING.RSC_i_A1
                        return 508;
                      }
                    }
                    else
                    {
                      if (d & 0x01)
                      {
                        // ENCODING.MOV_i_A1
                        return 344;
                      }
                      else
                      {
                        // ENCODING.ADC_i_A1
                        return 1;
                      }
                    }
                  }
                  else
                  {
                    if (c & 0x40)
                    {
                      if (d & 0x01)
                      {
                        // ENCODING.BIC_i_A1
                        return 81;
                      }
                      else
                      {
                        // ENCODING.SBC_i_A1
                        return 524;
                      }
                    }
                    else
                    {
                      if (d & 0x01)
                      {
                        // ENCODING.ORR_i_A1
                        return 412;
                      }
                      else
                      {
                        // Rn!=0b11x1
                        if ((opcode & 0x000d0000) != 0x000d0000)
                        {
                          // ENCODING.ADD_i_A1
                          return 16;
                        }
                        else
                        {
                          if (c & 0x02)
                          {
                            // ENCODING.ADR_A1
                            return 52;
                          }
                          else
                          {
                            // ENCODING.ADD_SP_i_A1
                            return 35;
                          }
                        }
                      }
                    }
                  }
                }
              }
              else
              {
                if (a & 0x10)
                {
                  if (a & 0x40)
                  {
                    // the following switch contains 4 case.
                    switch (b & 0x0c)
                    {
                      case 0x00:
                      {
                        // the following switch contains 4 case.
                        switch (b & 0x03)
                        {
                          case 0x00:
                          {
                            // ENCODING.VSHR_A1_Q
                            return 2054;
                            break;
                          }
                          case 0x01:
                          {
                            // ENCODING.VSRA_A1_Q
                            return 2072;
                            break;
                          }
                          case 0x02:
                          {
                            // ENCODING.VRSHR_A1_Q
                            return 1990;
                            break;
                          }
                          case 0x03:
                          {
                            // ENCODING.VRSRA_A1_D
                            return 2004;
                            break;
                          }
                          default: break;
                        }
                        break;
                      }
                      case 0x04:
                      {
                        // the following switch contains 4 case.
                        switch (b & 0x03)
                        {
                          case 0x00:
                          {
                            // ENCODING.VSRI_A1_Q
                            return 2076;
                            break;
                          }
                          case 0x01:
                          {
                            if (d & 0x01)
                            {
                              // ENCODING.VSLI_A1_Q
                              return 2060;
                            }
                            else
                            {
                              // ENCODING.VSHL_i_A1_Q
                              return 2042;
                            }
                            break;
                          }
                          case 0x02:
                          {
                            // ENCODING.VQSHLU_i_A1_Q
                            return 1876;
                            break;
                          }
                          case 0x03:
                          {
                            // ENCODING.VQSHL_i_A1_Q
                            return 1874;
                            break;
                          }
                          default: break;
                        }
                        break;
                      }
                      case 0x08:
                      {
                        if (b & 0x01)
                        {
                          // ENCODING.VQRSHRN_A1
                          return 1869;
                        }
                        else
                        {
                          if (d & 0x01)
                          {
                            // ENCODING.VQRSHRUN_A1
                            return 1870;
                          }
                          else
                          {
                            // ENCODING.VRSHRN_A1
                            return 1993;
                          }
                        }
                        break;
                      }
                      case 0x0c:
                      {
                        // ENCODING.VCVT_xs_A1_Q
                        return 1222;
                        break;
                      }
                      default: break;
                    }
                  }
                  else
                  {
                    // the following switch contains 4 case.
                    switch (b & 0x0c)
                    {
                      case 0x00:
                      {
                        // the following switch contains 4 case.
                        switch (b & 0x03)
                        {
                          case 0x00:
                          {
                            // ENCODING.VSHR_A1_D
                            return 2053;
                            break;
                          }
                          case 0x01:
                          {
                            // ENCODING.VSRA_A1_D
                            return 2071;
                            break;
                          }
                          case 0x02:
                          {
                            // ENCODING.VRSHR_A1_D
                            return 1989;
                            break;
                          }
                          case 0x03:
                          {
                            // ENCODING.VRSRA_A1_Q
                            return 2003;
                            break;
                          }
                          default: break;
                        }
                        break;
                      }
                      case 0x04:
                      {
                        // the following switch contains 4 case.
                        switch (b & 0x03)
                        {
                          case 0x00:
                          {
                            // ENCODING.VSRI_A1_D
                            return 2075;
                            break;
                          }
                          case 0x01:
                          {
                            if (d & 0x01)
                            {
                              // ENCODING.VSLI_A1_D
                              return 2059;
                            }
                            else
                            {
                              // ENCODING.VSHL_i_A1_D
                              return 2041;
                            }
                            break;
                          }
                          case 0x02:
                          {
                            // ENCODING.VQSHLU_i_A1_D
                            return 1875;
                            break;
                          }
                          case 0x03:
                          {
                            // ENCODING.VQSHL_i_A1_D
                            return 1873;
                            break;
                          }
                          default: break;
                        }
                        break;
                      }
                      case 0x08:
                      {
                        // the following switch contains 3 case.
                        switch (b & 0x03)
                        {
                          case 0x00:
                          {
                            if (d & 0x01)
                            {
                              // ENCODING.VQSHRUN_A1
                              return 1886;
                            }
                            else
                            {
                              // ENCODING.VSHRN_A1
                              return 2057;
                            }
                            break;
                          }
                          case 0x01:
                          {
                            // ENCODING.VQSHRN_A1
                            return 1885;
                            break;
                          }
                          case 0x02:
                          {
                            if (((opcode & 0xfe870fd0) == 0xf2800a10) && ((opcode & 0x00380000) != 0x00000000))
                            {
                              // ENCODING.VMOVL_A1
                              return 1693;
                            }
                            else
                            {
                              // ENCODING.VSHLL_A1
                              return 2049;
                            }
                            break;
                          }
                          default: break;
                        }
                        break;
                      }
                      case 0x0c:
                      {
                        // ENCODING.VCVT_xs_A1_D
                        return 1221;
                        break;
                      }
                      default: break;
                    }
                  }
                }
                else
                {
                  if (a & 0x40)
                  {
                    // the following switch contains 8 case.
                    switch (b & 0x0e)
                    {
                      case 0x00:
                      {
                        if (d & 0x01)
                        {
                          // ENCODING.VMLA_s_A1_Q
                          return 1616;
                        }
                        else
                        {
                          // ENCODING.VMLA_s_A1_D
                          return 1615;
                        }
                        break;
                      }
                      case 0x02:
                      {
                        if (b & 0x01)
                        {
                          // ENCODING.VQDMLAL_A2
                          return 1814;
                        }
                        else
                        {
                          // ENCODING.VMLAL_s_A1
                          return 1621;
                        }
                        break;
                      }
                      case 0x04:
                      {
                        if (d & 0x01)
                        {
                          // ENCODING.VMLS_s_A1_Q
                          return 1638;
                        }
                        else
                        {
                          // ENCODING.VMLS_s_A1_D
                          return 1637;
                        }
                        break;
                      }
                      case 0x06:
                      {
                        if (b & 0x01)
                        {
                          // ENCODING.VQDMLSL_A2
                          return 1818;
                        }
                        else
                        {
                          // ENCODING.VMLSL_s_A1
                          return 1643;
                        }
                        break;
                      }
                      case 0x08:
                      {
                        if (d & 0x01)
                        {
                          // ENCODING.VMUL_s_A1_Q
                          return 1718;
                        }
                        else
                        {
                          // ENCODING.VMUL_s_A1_D
                          return 1717;
                        }
                        break;
                      }
                      case 0x0a:
                      {
                        if (b & 0x01)
                        {
                          // ENCODING.VQDMULL_A2
                          return 1830;
                        }
                        else
                        {
                          // ENCODING.VMULL_s_A1
                          return 1723;
                        }
                        break;
                      }
                      case 0x0c:
                      {
                        if (b & 0x01)
                        {
                          if (d & 0x01)
                          {
                            // ENCODING.VQRDMULH_A2_Q
                            return 1860;
                          }
                          else
                          {
                            // ENCODING.VQRDMULH_A2_D
                            return 1859;
                          }
                        }
                        else
                        {
                          if (d & 0x01)
                          {
                            // ENCODING.VQDMULH_A2_Q
                            return 1824;
                          }
                          else
                          {
                            // ENCODING.VQDMULH_A2_D
                            return 1823;
                          }
                        }
                        break;
                      }
                      case 0x0e:
                      {
                        if (b & 0x01)
                        {
                          if (d & 0x01)
                          {
                            // ENCODING.VQRDMLSH_A2_Q
                            return 1852;
                          }
                          else
                          {
                            // ENCODING.VQRDMLSH_A2_D
                            return 1851;
                          }
                        }
                        else
                        {
                          if (d & 0x01)
                          {
                            // ENCODING.VQRDMLAH_A2_Q
                            return 1844;
                          }
                          else
                          {
                            // ENCODING.VQRDMLAH_A2_D
                            return 1843;
                          }
                        }
                        break;
                      }
                      default: break;
                    }
                  }
                  else
                  {
                    // the following switch contains 8 case.
                    switch (b & 0x0d)
                    {
                      case 0x00:
                      {
                        if (b & 0x02)
                        {
                          // ENCODING.VSUBL_A1
                          return 2228;
                        }
                        else
                        {
                          // ENCODING.VADDL_A1
                          return 1061;
                        }
                        break;
                      }
                      case 0x01:
                      {
                        if (b & 0x02)
                        {
                          // ENCODING.VSUBW_A1
                          return 2230;
                        }
                        else
                        {
                          // ENCODING.VADDW_A1
                          return 1063;
                        }
                        break;
                      }
                      case 0x04:
                      {
                        if (b & 0x02)
                        {
                          if (d & 0x01)
                          {
                            // ENCODING.VRSUBHN_A1
                            return 2007;
                          }
                          else
                          {
                            // ENCODING.VSUBHN_A1
                            return 2226;
                          }
                        }
                        else
                        {
                          if (d & 0x01)
                          {
                            // ENCODING.VRADDHN_A1
                            return 1893;
                          }
                          else
                          {
                            // ENCODING.VADDHN_A1
                            return 1059;
                          }
                        }
                        break;
                      }
                      case 0x05:
                      {
                        if (b & 0x02)
                        {
                          // ENCODING.VABDL_i_A1
                          return 1025;
                        }
                        else
                        {
                          // ENCODING.VABAL_A1
                          return 1015;
                        }
                        break;
                      }
                      case 0x08:
                      {
                        if (b & 0x02)
                        {
                          // ENCODING.VMLSL_i_A1
                          return 1641;
                        }
                        else
                        {
                          // ENCODING.VMLAL_i_A1
                          return 1619;
                        }
                        break;
                      }
                      case 0x09:
                      {
                        if (b & 0x02)
                        {
                          // ENCODING.VQDMLSL_A1
                          return 1817;
                        }
                        else
                        {
                          // ENCODING.VQDMLAL_A1
                          return 1813;
                        }
                        break;
                      }
                      case 0x0c:
                      {
                        // ENCODING.VMULL_i_A1
                        return 1721;
                        break;
                      }
                      case 0x0d:
                      {
                        // ENCODING.VQDMULL_A1
                        return 1829;
                        break;
                      }
                      default: break;
                    }
                  }
                }
              }
            }
            else
            {
              // cond!=0b1111
              if ((opcode & 0xf0000000) != 0xf0000000)
              {
                if (c & 0x10)
                {
                  if (c & 0x40)
                  {
                    if (d & 0x01)
                    {
                      // ENCODING.BICS_i_A1
                      return 82;
                    }
                    else
                    {
                      // ENCODING.SBCS_i_A1
                      return 525;
                    }
                  }
                  else
                  {
                    if (d & 0x01)
                    {
                      // ENCODING.ORRS_i_A1
                      return 413;
                    }
                    else
                    {
                      // Rn!=0b1101
                      if ((opcode & 0x000f0000) != 0x000d0000)
                      {
                        // ENCODING.ADDS_i_A1
                        return 17;
                      }
                      else
                      {
                        // ENCODING.ADDS_SP_i_A1
                        return 36;
                      }
                    }
                  }
                }
                else
                {
                  if (c & 0x20)
                  {
                    if (c & 0x40)
                    {
                      if (d & 0x01)
                      {
                        // ENCODING.MVN_i_A1
                        return 388;
                      }
                      else
                      {
                        // ENCODING.RSC_i_A1
                        return 508;
                      }
                    }
                    else
                    {
                      if (d & 0x01)
                      {
                        // ENCODING.MOV_i_A1
                        return 344;
                      }
                      else
                      {
                        // ENCODING.ADC_i_A1
                        return 1;
                      }
                    }
                  }
                  else
                  {
                    if (c & 0x40)
                    {
                      if (d & 0x01)
                      {
                        // ENCODING.BIC_i_A1
                        return 81;
                      }
                      else
                      {
                        // ENCODING.SBC_i_A1
                        return 524;
                      }
                    }
                    else
                    {
                      if (d & 0x01)
                      {
                        // ENCODING.ORR_i_A1
                        return 412;
                      }
                      else
                      {
                        // Rn!=0b11x1
                        if ((opcode & 0x000d0000) != 0x000d0000)
                        {
                          // ENCODING.ADD_i_A1
                          return 16;
                        }
                        else
                        {
                          if (c & 0x02)
                          {
                            // ENCODING.ADR_A1
                            return 52;
                          }
                          else
                          {
                            // ENCODING.ADD_SP_i_A1
                            return 35;
                          }
                        }
                      }
                    }
                  }
                }
              }
              else
              {
                if (a & 0x10)
                {
                  if (a & 0x40)
                  {
                    if (b & 0x04)
                    {
                      // ENCODING.VCVT_xs_A1_Q
                      return 1222;
                    }
                    else
                    {
                      if (b & 0x01)
                      {
                        // ENCODING.VQRSHRN_A1
                        return 1869;
                      }
                      else
                      {
                        if (d & 0x01)
                        {
                          // ENCODING.VQRSHRUN_A1
                          return 1870;
                        }
                        else
                        {
                          // ENCODING.VRSHRN_A1
                          return 1993;
                        }
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x04)
                    {
                      // ENCODING.VCVT_xs_A1_D
                      return 1221;
                    }
                    else
                    {
                      // the following switch contains 3 case.
                      switch (b & 0x03)
                      {
                        case 0x00:
                        {
                          if (d & 0x01)
                          {
                            // ENCODING.VQSHRUN_A1
                            return 1886;
                          }
                          else
                          {
                            // ENCODING.VSHRN_A1
                            return 2057;
                          }
                          break;
                        }
                        case 0x01:
                        {
                          // ENCODING.VQSHRN_A1
                          return 1885;
                          break;
                        }
                        case 0x02:
                        {
                          if (((opcode & 0xfe870fd0) == 0xf2800a10) && ((opcode & 0x00380000) != 0x00000000))
                          {
                            // ENCODING.VMOVL_A1
                            return 1693;
                          }
                          else
                          {
                            // ENCODING.VSHLL_A1
                            return 2049;
                          }
                          break;
                        }
                        default: break;
                      }
                    }
                  }
                }
                else
                {
                  if (a & 0x40)
                  {
                    // the following switch contains 8 case.
                    switch (b & 0x0e)
                    {
                      case 0x00:
                      {
                        if (d & 0x01)
                        {
                          // ENCODING.VMLA_s_A1_Q
                          return 1616;
                        }
                        else
                        {
                          // ENCODING.VMLA_s_A1_D
                          return 1615;
                        }
                        break;
                      }
                      case 0x02:
                      {
                        if (b & 0x01)
                        {
                          // ENCODING.VQDMLAL_A2
                          return 1814;
                        }
                        else
                        {
                          // ENCODING.VMLAL_s_A1
                          return 1621;
                        }
                        break;
                      }
                      case 0x04:
                      {
                        if (d & 0x01)
                        {
                          // ENCODING.VMLS_s_A1_Q
                          return 1638;
                        }
                        else
                        {
                          // ENCODING.VMLS_s_A1_D
                          return 1637;
                        }
                        break;
                      }
                      case 0x06:
                      {
                        if (b & 0x01)
                        {
                          // ENCODING.VQDMLSL_A2
                          return 1818;
                        }
                        else
                        {
                          // ENCODING.VMLSL_s_A1
                          return 1643;
                        }
                        break;
                      }
                      case 0x08:
                      {
                        if (d & 0x01)
                        {
                          // ENCODING.VMUL_s_A1_Q
                          return 1718;
                        }
                        else
                        {
                          // ENCODING.VMUL_s_A1_D
                          return 1717;
                        }
                        break;
                      }
                      case 0x0a:
                      {
                        if (b & 0x01)
                        {
                          // ENCODING.VQDMULL_A2
                          return 1830;
                        }
                        else
                        {
                          // ENCODING.VMULL_s_A1
                          return 1723;
                        }
                        break;
                      }
                      case 0x0c:
                      {
                        if (b & 0x01)
                        {
                          if (d & 0x01)
                          {
                            // ENCODING.VQRDMULH_A2_Q
                            return 1860;
                          }
                          else
                          {
                            // ENCODING.VQRDMULH_A2_D
                            return 1859;
                          }
                        }
                        else
                        {
                          if (d & 0x01)
                          {
                            // ENCODING.VQDMULH_A2_Q
                            return 1824;
                          }
                          else
                          {
                            // ENCODING.VQDMULH_A2_D
                            return 1823;
                          }
                        }
                        break;
                      }
                      case 0x0e:
                      {
                        if (b & 0x01)
                        {
                          if (d & 0x01)
                          {
                            // ENCODING.VQRDMLSH_A2_Q
                            return 1852;
                          }
                          else
                          {
                            // ENCODING.VQRDMLSH_A2_D
                            return 1851;
                          }
                        }
                        else
                        {
                          if (d & 0x01)
                          {
                            // ENCODING.VQRDMLAH_A2_Q
                            return 1844;
                          }
                          else
                          {
                            // ENCODING.VQRDMLAH_A2_D
                            return 1843;
                          }
                        }
                        break;
                      }
                      default: break;
                    }
                  }
                  else
                  {
                    // the following switch contains 8 case.
                    switch (b & 0x0d)
                    {
                      case 0x00:
                      {
                        if (b & 0x02)
                        {
                          // ENCODING.VSUBL_A1
                          return 2228;
                        }
                        else
                        {
                          // ENCODING.VADDL_A1
                          return 1061;
                        }
                        break;
                      }
                      case 0x01:
                      {
                        if (b & 0x02)
                        {
                          // ENCODING.VSUBW_A1
                          return 2230;
                        }
                        else
                        {
                          // ENCODING.VADDW_A1
                          return 1063;
                        }
                        break;
                      }
                      case 0x04:
                      {
                        if (b & 0x02)
                        {
                          if (d & 0x01)
                          {
                            // ENCODING.VRSUBHN_A1
                            return 2007;
                          }
                          else
                          {
                            // ENCODING.VSUBHN_A1
                            return 2226;
                          }
                        }
                        else
                        {
                          if (d & 0x01)
                          {
                            // ENCODING.VRADDHN_A1
                            return 1893;
                          }
                          else
                          {
                            // ENCODING.VADDHN_A1
                            return 1059;
                          }
                        }
                        break;
                      }
                      case 0x05:
                      {
                        if (b & 0x02)
                        {
                          // ENCODING.VABDL_i_A1
                          return 1025;
                        }
                        else
                        {
                          // ENCODING.VABAL_A1
                          return 1015;
                        }
                        break;
                      }
                      case 0x08:
                      {
                        if (b & 0x02)
                        {
                          // ENCODING.VMLSL_i_A1
                          return 1641;
                        }
                        else
                        {
                          // ENCODING.VMLAL_i_A1
                          return 1619;
                        }
                        break;
                      }
                      case 0x09:
                      {
                        if (b & 0x02)
                        {
                          // ENCODING.VQDMLSL_A1
                          return 1817;
                        }
                        else
                        {
                          // ENCODING.VQDMLAL_A1
                          return 1813;
                        }
                        break;
                      }
                      case 0x0c:
                      {
                        // ENCODING.VMULL_i_A1
                        return 1721;
                        break;
                      }
                      case 0x0d:
                      {
                        // ENCODING.VQDMULL_A1
                        return 1829;
                        break;
                      }
                      default: break;
                    }
                  }
                }
              }
            }
          }
          else
          {
            // imm6:L!=0b000xxx0
            if ((opcode & 0x00380080) != 0x00000000)
            {
              // cond!=0b1111
              if ((opcode & 0xf0000000) != 0xf0000000)
              {
                if (c & 0x10)
                {
                  if (c & 0x40)
                  {
                    if (d & 0x01)
                    {
                      // ENCODING.BICS_i_A1
                      return 82;
                    }
                    else
                    {
                      // ENCODING.SBCS_i_A1
                      return 525;
                    }
                  }
                  else
                  {
                    if (d & 0x01)
                    {
                      // ENCODING.ORRS_i_A1
                      return 413;
                    }
                    else
                    {
                      // ENCODING.ADDS_i_A1
                      return 17;
                    }
                  }
                }
                else
                {
                  if (c & 0x20)
                  {
                    if (c & 0x40)
                    {
                      // ENCODING.RSC_i_A1
                      return 508;
                    }
                    else
                    {
                      // ENCODING.ADC_i_A1
                      return 1;
                    }
                  }
                  else
                  {
                    if (c & 0x40)
                    {
                      if (d & 0x01)
                      {
                        // ENCODING.BIC_i_A1
                        return 81;
                      }
                      else
                      {
                        // ENCODING.SBC_i_A1
                        return 524;
                      }
                    }
                    else
                    {
                      if (d & 0x01)
                      {
                        // ENCODING.ORR_i_A1
                        return 412;
                      }
                      else
                      {
                        // ENCODING.ADD_i_A1
                        return 16;
                      }
                    }
                  }
                }
              }
              else
              {
                if (a & 0x10)
                {
                  if (a & 0x40)
                  {
                    // the following switch contains 8 case.
                    switch (b & 0x07)
                    {
                      case 0x00:
                      {
                        // ENCODING.VSHR_A1_Q
                        return 2054;
                        break;
                      }
                      case 0x01:
                      {
                        // ENCODING.VSRA_A1_Q
                        return 2072;
                        break;
                      }
                      case 0x02:
                      {
                        // ENCODING.VRSHR_A1_Q
                        return 1990;
                        break;
                      }
                      case 0x03:
                      {
                        // ENCODING.VRSRA_A1_D
                        return 2004;
                        break;
                      }
                      case 0x04:
                      {
                        // ENCODING.VSRI_A1_Q
                        return 2076;
                        break;
                      }
                      case 0x05:
                      {
                        if (d & 0x01)
                        {
                          // ENCODING.VSLI_A1_Q
                          return 2060;
                        }
                        else
                        {
                          // ENCODING.VSHL_i_A1_Q
                          return 2042;
                        }
                        break;
                      }
                      case 0x06:
                      {
                        // ENCODING.VQSHLU_i_A1_Q
                        return 1876;
                        break;
                      }
                      case 0x07:
                      {
                        // ENCODING.VQSHL_i_A1_Q
                        return 1874;
                        break;
                      }
                      default: break;
                    }
                  }
                  else
                  {
                    // the following switch contains 8 case.
                    switch (b & 0x07)
                    {
                      case 0x00:
                      {
                        // ENCODING.VSHR_A1_D
                        return 2053;
                        break;
                      }
                      case 0x01:
                      {
                        // ENCODING.VSRA_A1_D
                        return 2071;
                        break;
                      }
                      case 0x02:
                      {
                        // ENCODING.VRSHR_A1_D
                        return 1989;
                        break;
                      }
                      case 0x03:
                      {
                        // ENCODING.VRSRA_A1_Q
                        return 2003;
                        break;
                      }
                      case 0x04:
                      {
                        // ENCODING.VSRI_A1_D
                        return 2075;
                        break;
                      }
                      case 0x05:
                      {
                        if (d & 0x01)
                        {
                          // ENCODING.VSLI_A1_D
                          return 2059;
                        }
                        else
                        {
                          // ENCODING.VSHL_i_A1_D
                          return 2041;
                        }
                        break;
                      }
                      case 0x06:
                      {
                        // ENCODING.VQSHLU_i_A1_D
                        return 1875;
                        break;
                      }
                      case 0x07:
                      {
                        // ENCODING.VQSHL_i_A1_D
                        return 1873;
                        break;
                      }
                      default: break;
                    }
                  }
                }
                else
                {
                  if (a & 0x40)
                  {
                    // the following switch contains 8 case.
                    switch (b & 0x0e)
                    {
                      case 0x00:
                      {
                        if (d & 0x01)
                        {
                          // ENCODING.VMLA_s_A1_Q
                          return 1616;
                        }
                        else
                        {
                          // ENCODING.VMLA_s_A1_D
                          return 1615;
                        }
                        break;
                      }
                      case 0x02:
                      {
                        if (b & 0x01)
                        {
                          // ENCODING.VQDMLAL_A2
                          return 1814;
                        }
                        else
                        {
                          // ENCODING.VMLAL_s_A1
                          return 1621;
                        }
                        break;
                      }
                      case 0x04:
                      {
                        if (d & 0x01)
                        {
                          // ENCODING.VMLS_s_A1_Q
                          return 1638;
                        }
                        else
                        {
                          // ENCODING.VMLS_s_A1_D
                          return 1637;
                        }
                        break;
                      }
                      case 0x06:
                      {
                        if (b & 0x01)
                        {
                          // ENCODING.VQDMLSL_A2
                          return 1818;
                        }
                        else
                        {
                          // ENCODING.VMLSL_s_A1
                          return 1643;
                        }
                        break;
                      }
                      case 0x08:
                      {
                        if (d & 0x01)
                        {
                          // ENCODING.VMUL_s_A1_Q
                          return 1718;
                        }
                        else
                        {
                          // ENCODING.VMUL_s_A1_D
                          return 1717;
                        }
                        break;
                      }
                      case 0x0a:
                      {
                        if (b & 0x01)
                        {
                          // ENCODING.VQDMULL_A2
                          return 1830;
                        }
                        else
                        {
                          // ENCODING.VMULL_s_A1
                          return 1723;
                        }
                        break;
                      }
                      case 0x0c:
                      {
                        if (b & 0x01)
                        {
                          if (d & 0x01)
                          {
                            // ENCODING.VQRDMULH_A2_Q
                            return 1860;
                          }
                          else
                          {
                            // ENCODING.VQRDMULH_A2_D
                            return 1859;
                          }
                        }
                        else
                        {
                          if (d & 0x01)
                          {
                            // ENCODING.VQDMULH_A2_Q
                            return 1824;
                          }
                          else
                          {
                            // ENCODING.VQDMULH_A2_D
                            return 1823;
                          }
                        }
                        break;
                      }
                      case 0x0e:
                      {
                        if (b & 0x01)
                        {
                          if (d & 0x01)
                          {
                            // ENCODING.VQRDMLSH_A2_Q
                            return 1852;
                          }
                          else
                          {
                            // ENCODING.VQRDMLSH_A2_D
                            return 1851;
                          }
                        }
                        else
                        {
                          if (d & 0x01)
                          {
                            // ENCODING.VQRDMLAH_A2_Q
                            return 1844;
                          }
                          else
                          {
                            // ENCODING.VQRDMLAH_A2_D
                            return 1843;
                          }
                        }
                        break;
                      }
                      default: break;
                    }
                  }
                  else
                  {
                    // the following switch contains 8 case.
                    switch (b & 0x0d)
                    {
                      case 0x00:
                      {
                        if (b & 0x02)
                        {
                          // ENCODING.VSUBL_A1
                          return 2228;
                        }
                        else
                        {
                          // ENCODING.VADDL_A1
                          return 1061;
                        }
                        break;
                      }
                      case 0x01:
                      {
                        if (b & 0x02)
                        {
                          // ENCODING.VSUBW_A1
                          return 2230;
                        }
                        else
                        {
                          // ENCODING.VADDW_A1
                          return 1063;
                        }
                        break;
                      }
                      case 0x04:
                      {
                        if (b & 0x02)
                        {
                          if (d & 0x01)
                          {
                            // ENCODING.VRSUBHN_A1
                            return 2007;
                          }
                          else
                          {
                            // ENCODING.VSUBHN_A1
                            return 2226;
                          }
                        }
                        else
                        {
                          if (d & 0x01)
                          {
                            // ENCODING.VRADDHN_A1
                            return 1893;
                          }
                          else
                          {
                            // ENCODING.VADDHN_A1
                            return 1059;
                          }
                        }
                        break;
                      }
                      case 0x05:
                      {
                        if (b & 0x02)
                        {
                          // ENCODING.VABDL_i_A1
                          return 1025;
                        }
                        else
                        {
                          // ENCODING.VABAL_A1
                          return 1015;
                        }
                        break;
                      }
                      case 0x08:
                      {
                        if (b & 0x02)
                        {
                          // ENCODING.VMLSL_i_A1
                          return 1641;
                        }
                        else
                        {
                          // ENCODING.VMLAL_i_A1
                          return 1619;
                        }
                        break;
                      }
                      case 0x09:
                      {
                        if (b & 0x02)
                        {
                          // ENCODING.VQDMLSL_A1
                          return 1817;
                        }
                        else
                        {
                          // ENCODING.VQDMLAL_A1
                          return 1813;
                        }
                        break;
                      }
                      case 0x0c:
                      {
                        // ENCODING.VMULL_i_A1
                        return 1721;
                        break;
                      }
                      case 0x0d:
                      {
                        // ENCODING.VQDMULL_A1
                        return 1829;
                        break;
                      }
                      default: break;
                    }
                  }
                }
              }
            }
            else
            {
              // cond!=0b1111
              if ((opcode & 0xf0000000) != 0xf0000000)
              {
                if (c & 0x10)
                {
                  if (c & 0x40)
                  {
                    if (d & 0x01)
                    {
                      // ENCODING.BICS_i_A1
                      return 82;
                    }
                    else
                    {
                      // ENCODING.SBCS_i_A1
                      return 525;
                    }
                  }
                  else
                  {
                    if (d & 0x01)
                    {
                      // ENCODING.ORRS_i_A1
                      return 413;
                    }
                    else
                    {
                      // ENCODING.ADDS_i_A1
                      return 17;
                    }
                  }
                }
                else
                {
                  if (c & 0x20)
                  {
                    if (c & 0x40)
                    {
                      // ENCODING.RSC_i_A1
                      return 508;
                    }
                    else
                    {
                      // ENCODING.ADC_i_A1
                      return 1;
                    }
                  }
                  else
                  {
                    if (c & 0x40)
                    {
                      if (d & 0x01)
                      {
                        // ENCODING.BIC_i_A1
                        return 81;
                      }
                      else
                      {
                        // ENCODING.SBC_i_A1
                        return 524;
                      }
                    }
                    else
                    {
                      if (d & 0x01)
                      {
                        // ENCODING.ORR_i_A1
                        return 412;
                      }
                      else
                      {
                        // ENCODING.ADD_i_A1
                        return 16;
                      }
                    }
                  }
                }
              }
              else
              {
                if (a & 0x10)
                {
                  if (a & 0x20)
                  {
                    if (a & 0x40)
                    {
                      if (b & 0x08)
                      {
                        if (b & 0x04)
                        {
                          if (b & 0x02)
                          {
                            // ENCODING.VMOV_i_A5_Q
                            return 1665;
                          }
                          else
                          {
                            // ENCODING.VMVN_i_A3_Q
                            return 1730;
                          }
                        }
                        else
                        {
                          if (b & 0x01)
                          {
                            // ENCODING.VBIC_i_A2_Q
                            return 1072;
                          }
                          else
                          {
                            // ENCODING.VMVN_i_A2_Q
                            return 1728;
                          }
                        }
                      }
                      else
                      {
                        if (b & 0x01)
                        {
                          // ENCODING.VBIC_i_A1_Q
                          return 1070;
                        }
                        else
                        {
                          // ENCODING.VMVN_i_A1_Q
                          return 1726;
                        }
                      }
                    }
                    else
                    {
                      if (b & 0x08)
                      {
                        if (b & 0x04)
                        {
                          if (b & 0x02)
                          {
                            // ENCODING.VMOV_i_A5_D
                            return 1664;
                          }
                          else
                          {
                            // ENCODING.VMVN_i_A3_D
                            return 1729;
                          }
                        }
                        else
                        {
                          if (b & 0x01)
                          {
                            // ENCODING.VBIC_i_A2_D
                            return 1071;
                          }
                          else
                          {
                            // ENCODING.VMVN_i_A2_D
                            return 1727;
                          }
                        }
                      }
                      else
                      {
                        if (b & 0x01)
                        {
                          // ENCODING.VBIC_i_A1_D
                          return 1069;
                        }
                        else
                        {
                          // ENCODING.VMVN_i_A1_D
                          return 1725;
                        }
                      }
                    }
                  }
                  else
                  {
                    if (a & 0x40)
                    {
                      if (b & 0x08)
                      {
                        if (b & 0x04)
                        {
                          // ENCODING.VMOV_i_A4_Q
                          return 1663;
                        }
                        else
                        {
                          if (b & 0x01)
                          {
                            // ENCODING.VORR_i_A2_Q
                            return 1776;
                          }
                          else
                          {
                            // ENCODING.VMOV_i_A3_Q
                            return 1661;
                          }
                        }
                      }
                      else
                      {
                        if (b & 0x01)
                        {
                          // ENCODING.VORR_i_A1_Q
                          return 1774;
                        }
                        else
                        {
                          // ENCODING.VMOV_i_A1_Q
                          return 1656;
                        }
                      }
                    }
                    else
                    {
                      if (b & 0x08)
                      {
                        if (b & 0x04)
                        {
                          // ENCODING.VMOV_i_A4_D
                          return 1662;
                        }
                        else
                        {
                          if (b & 0x01)
                          {
                            // ENCODING.VORR_i_A2_D
                            return 1775;
                          }
                          else
                          {
                            // ENCODING.VMOV_i_A3_D
                            return 1660;
                          }
                        }
                      }
                      else
                      {
                        if (b & 0x01)
                        {
                          // ENCODING.VORR_i_A1_D
                          return 1773;
                        }
                        else
                        {
                          // ENCODING.VMOV_i_A1_D
                          return 1655;
                        }
                      }
                    }
                  }
                }
                else
                {
                  if (a & 0x40)
                  {
                    // the following switch contains 8 case.
                    switch (b & 0x0e)
                    {
                      case 0x00:
                      {
                        if (d & 0x01)
                        {
                          // ENCODING.VMLA_s_A1_Q
                          return 1616;
                        }
                        else
                        {
                          // ENCODING.VMLA_s_A1_D
                          return 1615;
                        }
                        break;
                      }
                      case 0x02:
                      {
                        if (b & 0x01)
                        {
                          // ENCODING.VQDMLAL_A2
                          return 1814;
                        }
                        else
                        {
                          // ENCODING.VMLAL_s_A1
                          return 1621;
                        }
                        break;
                      }
                      case 0x04:
                      {
                        if (d & 0x01)
                        {
                          // ENCODING.VMLS_s_A1_Q
                          return 1638;
                        }
                        else
                        {
                          // ENCODING.VMLS_s_A1_D
                          return 1637;
                        }
                        break;
                      }
                      case 0x06:
                      {
                        if (b & 0x01)
                        {
                          // ENCODING.VQDMLSL_A2
                          return 1818;
                        }
                        else
                        {
                          // ENCODING.VMLSL_s_A1
                          return 1643;
                        }
                        break;
                      }
                      case 0x08:
                      {
                        if (d & 0x01)
                        {
                          // ENCODING.VMUL_s_A1_Q
                          return 1718;
                        }
                        else
                        {
                          // ENCODING.VMUL_s_A1_D
                          return 1717;
                        }
                        break;
                      }
                      case 0x0a:
                      {
                        if (b & 0x01)
                        {
                          // ENCODING.VQDMULL_A2
                          return 1830;
                        }
                        else
                        {
                          // ENCODING.VMULL_s_A1
                          return 1723;
                        }
                        break;
                      }
                      case 0x0c:
                      {
                        if (b & 0x01)
                        {
                          if (d & 0x01)
                          {
                            // ENCODING.VQRDMULH_A2_Q
                            return 1860;
                          }
                          else
                          {
                            // ENCODING.VQRDMULH_A2_D
                            return 1859;
                          }
                        }
                        else
                        {
                          if (d & 0x01)
                          {
                            // ENCODING.VQDMULH_A2_Q
                            return 1824;
                          }
                          else
                          {
                            // ENCODING.VQDMULH_A2_D
                            return 1823;
                          }
                        }
                        break;
                      }
                      case 0x0e:
                      {
                        if (b & 0x01)
                        {
                          if (d & 0x01)
                          {
                            // ENCODING.VQRDMLSH_A2_Q
                            return 1852;
                          }
                          else
                          {
                            // ENCODING.VQRDMLSH_A2_D
                            return 1851;
                          }
                        }
                        else
                        {
                          if (d & 0x01)
                          {
                            // ENCODING.VQRDMLAH_A2_Q
                            return 1844;
                          }
                          else
                          {
                            // ENCODING.VQRDMLAH_A2_D
                            return 1843;
                          }
                        }
                        break;
                      }
                      default: break;
                    }
                  }
                  else
                  {
                    // the following switch contains 8 case.
                    switch (b & 0x0d)
                    {
                      case 0x00:
                      {
                        if (b & 0x02)
                        {
                          // ENCODING.VSUBL_A1
                          return 2228;
                        }
                        else
                        {
                          // ENCODING.VADDL_A1
                          return 1061;
                        }
                        break;
                      }
                      case 0x01:
                      {
                        if (b & 0x02)
                        {
                          // ENCODING.VSUBW_A1
                          return 2230;
                        }
                        else
                        {
                          // ENCODING.VADDW_A1
                          return 1063;
                        }
                        break;
                      }
                      case 0x04:
                      {
                        if (b & 0x02)
                        {
                          if (d & 0x01)
                          {
                            // ENCODING.VRSUBHN_A1
                            return 2007;
                          }
                          else
                          {
                            // ENCODING.VSUBHN_A1
                            return 2226;
                          }
                        }
                        else
                        {
                          if (d & 0x01)
                          {
                            // ENCODING.VRADDHN_A1
                            return 1893;
                          }
                          else
                          {
                            // ENCODING.VADDHN_A1
                            return 1059;
                          }
                        }
                        break;
                      }
                      case 0x05:
                      {
                        if (b & 0x02)
                        {
                          // ENCODING.VABDL_i_A1
                          return 1025;
                        }
                        else
                        {
                          // ENCODING.VABAL_A1
                          return 1015;
                        }
                        break;
                      }
                      case 0x08:
                      {
                        if (b & 0x02)
                        {
                          // ENCODING.VMLSL_i_A1
                          return 1641;
                        }
                        else
                        {
                          // ENCODING.VMLAL_i_A1
                          return 1619;
                        }
                        break;
                      }
                      case 0x09:
                      {
                        if (b & 0x02)
                        {
                          // ENCODING.VQDMLSL_A1
                          return 1817;
                        }
                        else
                        {
                          // ENCODING.VQDMLAL_A1
                          return 1813;
                        }
                        break;
                      }
                      case 0x0c:
                      {
                        // ENCODING.VMULL_i_A1
                        return 1721;
                        break;
                      }
                      case 0x0d:
                      {
                        // ENCODING.VQDMULL_A1
                        return 1829;
                        break;
                      }
                      default: break;
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          // imm6!=0b000xxx
          if ((opcode & 0x00380000) != 0x00000000)
          {
            // imm6:L!=0b000xxx0
            if ((opcode & 0x00380080) != 0x00000000)
            {
              // cond!=0b1111
              if ((opcode & 0xf0000000) != 0xf0000000)
              {
                if (c & 0x40)
                {
                  if (d & 0x01)
                  {
                    // ENCODING.MVNS_i_A1
                    return 389;
                  }
                  else
                  {
                    // ENCODING.RSCS_i_A1
                    return 509;
                  }
                }
                else
                {
                  if (d & 0x01)
                  {
                    // ENCODING.MOVS_i_A1
                    return 345;
                  }
                  else
                  {
                    // ENCODING.ADCS_i_A1
                    return 2;
                  }
                }
              }
              else
              {
                if (a & 0x10)
                {
                  if (a & 0x40)
                  {
                    // the following switch contains 4 case.
                    switch (b & 0x0c)
                    {
                      case 0x00:
                      {
                        // the following switch contains 4 case.
                        switch (b & 0x03)
                        {
                          case 0x00:
                          {
                            // ENCODING.VSHR_A1_Q
                            return 2054;
                            break;
                          }
                          case 0x01:
                          {
                            // ENCODING.VSRA_A1_Q
                            return 2072;
                            break;
                          }
                          case 0x02:
                          {
                            // ENCODING.VRSHR_A1_Q
                            return 1990;
                            break;
                          }
                          case 0x03:
                          {
                            // ENCODING.VRSRA_A1_D
                            return 2004;
                            break;
                          }
                          default: break;
                        }
                        break;
                      }
                      case 0x04:
                      {
                        // the following switch contains 4 case.
                        switch (b & 0x03)
                        {
                          case 0x00:
                          {
                            // ENCODING.VSRI_A1_Q
                            return 2076;
                            break;
                          }
                          case 0x01:
                          {
                            if (d & 0x01)
                            {
                              // ENCODING.VSLI_A1_Q
                              return 2060;
                            }
                            else
                            {
                              // ENCODING.VSHL_i_A1_Q
                              return 2042;
                            }
                            break;
                          }
                          case 0x02:
                          {
                            // ENCODING.VQSHLU_i_A1_Q
                            return 1876;
                            break;
                          }
                          case 0x03:
                          {
                            // ENCODING.VQSHL_i_A1_Q
                            return 1874;
                            break;
                          }
                          default: break;
                        }
                        break;
                      }
                      case 0x08:
                      {
                        if (b & 0x01)
                        {
                          // ENCODING.VQRSHRN_A1
                          return 1869;
                        }
                        else
                        {
                          if (d & 0x01)
                          {
                            // ENCODING.VQRSHRUN_A1
                            return 1870;
                          }
                          else
                          {
                            // ENCODING.VRSHRN_A1
                            return 1993;
                          }
                        }
                        break;
                      }
                      case 0x0c:
                      {
                        // ENCODING.VCVT_xs_A1_Q
                        return 1222;
                        break;
                      }
                      default: break;
                    }
                  }
                  else
                  {
                    // the following switch contains 4 case.
                    switch (b & 0x0c)
                    {
                      case 0x00:
                      {
                        // the following switch contains 4 case.
                        switch (b & 0x03)
                        {
                          case 0x00:
                          {
                            // ENCODING.VSHR_A1_D
                            return 2053;
                            break;
                          }
                          case 0x01:
                          {
                            // ENCODING.VSRA_A1_D
                            return 2071;
                            break;
                          }
                          case 0x02:
                          {
                            // ENCODING.VRSHR_A1_D
                            return 1989;
                            break;
                          }
                          case 0x03:
                          {
                            // ENCODING.VRSRA_A1_Q
                            return 2003;
                            break;
                          }
                          default: break;
                        }
                        break;
                      }
                      case 0x04:
                      {
                        // the following switch contains 4 case.
                        switch (b & 0x03)
                        {
                          case 0x00:
                          {
                            // ENCODING.VSRI_A1_D
                            return 2075;
                            break;
                          }
                          case 0x01:
                          {
                            if (d & 0x01)
                            {
                              // ENCODING.VSLI_A1_D
                              return 2059;
                            }
                            else
                            {
                              // ENCODING.VSHL_i_A1_D
                              return 2041;
                            }
                            break;
                          }
                          case 0x02:
                          {
                            // ENCODING.VQSHLU_i_A1_D
                            return 1875;
                            break;
                          }
                          case 0x03:
                          {
                            // ENCODING.VQSHL_i_A1_D
                            return 1873;
                            break;
                          }
                          default: break;
                        }
                        break;
                      }
                      case 0x08:
                      {
                        // the following switch contains 3 case.
                        switch (b & 0x03)
                        {
                          case 0x00:
                          {
                            if (d & 0x01)
                            {
                              // ENCODING.VQSHRUN_A1
                              return 1886;
                            }
                            else
                            {
                              // ENCODING.VSHRN_A1
                              return 2057;
                            }
                            break;
                          }
                          case 0x01:
                          {
                            // ENCODING.VQSHRN_A1
                            return 1885;
                            break;
                          }
                          case 0x02:
                          {
                            if (((opcode & 0xfe870fd0) == 0xf2800a10) && ((opcode & 0x00380000) != 0x00000000))
                            {
                              // ENCODING.VMOVL_A1
                              return 1693;
                            }
                            else
                            {
                              // ENCODING.VSHLL_A1
                              return 2049;
                            }
                            break;
                          }
                          default: break;
                        }
                        break;
                      }
                      case 0x0c:
                      {
                        // ENCODING.VCVT_xs_A1_D
                        return 1221;
                        break;
                      }
                      default: break;
                    }
                  }
                }
                else
                {
                  if (d & 0x01)
                  {
                    if (b & 0x08)
                    {
                      if (a & 0x40)
                      {
                        if (b & 0x04)
                        {
                          // ENCODING.VDUP_s_A1_Q
                          return 1326;
                        }
                        else
                        {
                          // ENCODING.VTBX_A1
                          return 2241;
                        }
                      }
                      else
                      {
                        if (b & 0x04)
                        {
                          // ENCODING.VDUP_s_A1_D
                          return 1325;
                        }
                        else
                        {
                          // ENCODING.VTBL_A1
                          return 2240;
                        }
                      }
                    }
                    else
                    {
                      if (b & 0x02)
                      {
                        // the following switch contains 4 case.
                        switch (c & 0x03)
                        {
                          case 0x00:
                          {
                            if (a & 0x40)
                            {
                              // the following switch contains 4 case.
                              switch (b & 0x05)
                              {
                                case 0x00:
                                {
                                  // ENCODING.VPADDL_A1_Q
                                  return 1794;
                                  break;
                                }
                                case 0x01:
                                {
                                  if (a & 0x80)
                                  {
                                    // ENCODING.AESIMC_A1
                                    return 978;
                                  }
                                  else
                                  {
                                    // ENCODING.AESD_A1
                                    return 974;
                                  }
                                  break;
                                }
                                case 0x04:
                                {
                                  // ENCODING.VPADAL_A1_Q
                                  return 1786;
                                  break;
                                }
                                case 0x05:
                                {
                                  if (a & 0x80)
                                  {
                                    // ENCODING.VQNEG_A1_Q
                                    return 1838;
                                  }
                                  else
                                  {
                                    // ENCODING.VQABS_A1_Q
                                    return 1806;
                                  }
                                  break;
                                }
                                default: break;
                              }
                            }
                            else
                            {
                              // the following switch contains 4 case.
                              switch (b & 0x05)
                              {
                                case 0x00:
                                {
                                  // ENCODING.VPADDL_A1_D
                                  return 1793;
                                  break;
                                }
                                case 0x01:
                                {
                                  if (a & 0x80)
                                  {
                                    // ENCODING.AESMC_A1
                                    return 980;
                                  }
                                  else
                                  {
                                    // ENCODING.AESE_A1
                                    return 976;
                                  }
                                  break;
                                }
                                case 0x04:
                                {
                                  // ENCODING.VPADAL_A1_D
                                  return 1785;
                                  break;
                                }
                                case 0x05:
                                {
                                  if (a & 0x80)
                                  {
                                    // ENCODING.VQNEG_A1_D
                                    return 1837;
                                  }
                                  else
                                  {
                                    // ENCODING.VQABS_A1_D
                                    return 1805;
                                  }
                                  break;
                                }
                                default: break;
                              }
                            }
                            break;
                          }
                          case 0x01:
                          {
                            if (a & 0x40)
                            {
                              if (a & 0x80)
                              {
                                if (b & 0x01)
                                {
                                  // ENCODING.VNEG_A1_Q
                                  return 1742;
                                }
                                else
                                {
                                  // ENCODING.SHA1H_A1
                                  return 992;
                                }
                              }
                              else
                              {
                                if (b & 0x01)
                                {
                                  // ENCODING.VABS_A1_Q
                                  return 1028;
                                }
                                else
                                {
                                  // ENCODING.VCLT_i_A1_Q
                                  return 1142;
                                }
                              }
                            }
                            else
                            {
                              if (a & 0x80)
                              {
                                // ENCODING.VNEG_A1_D
                                return 1741;
                              }
                              else
                              {
                                if (b & 0x01)
                                {
                                  // ENCODING.VABS_A1_D
                                  return 1027;
                                }
                                else
                                {
                                  // ENCODING.VCLT_i_A1_D
                                  return 1141;
                                }
                              }
                            }
                            break;
                          }
                          case 0x02:
                          {
                            if (a & 0x80)
                            {
                              // the following switch contains 4 case.
                              switch (b & 0x05)
                              {
                                case 0x00:
                                {
                                  // ENCODING.VQMOVN_A1
                                  return 1833;
                                  break;
                                }
                                case 0x01:
                                {
                                  if (a & 0x40)
                                  {
                                    // ENCODING.SHA256SU0_A1
                                    return 1006;
                                  }
                                  else
                                  {
                                    // ENCODING.SHA1SU1_A1
                                    return 1000;
                                  }
                                  break;
                                }
                                case 0x04:
                                {
                                  if (a & 0x40)
                                  {
                                    // ENCODING.VRINTM_asimd_A1_Q
                                    return 1930;
                                  }
                                  else
                                  {
                                    // ENCODING.VRINTM_asimd_A1_D
                                    return 1929;
                                  }
                                  break;
                                }
                                case 0x05:
                                {
                                  if (a & 0x40)
                                  {
                                    // ENCODING.VRINTP_asimd_A1_Q
                                    return 1950;
                                  }
                                  else
                                  {
                                    // ENCODING.VRINTP_asimd_A1_D
                                    return 1949;
                                  }
                                  break;
                                }
                                default: break;
                              }
                            }
                            else
                            {
                              if (a & 0x40)
                              {
                                if (b & 0x04)
                                {
                                  // ENCODING.VCVT_bfs_A1
                                  return 1189;
                                }
                                else
                                {
                                  // ENCODING.VQMOVUN_A1
                                  return 1834;
                                }
                              }
                              else
                              {
                                // the following switch contains 4 case.
                                switch (b & 0x05)
                                {
                                  case 0x00:
                                  {
                                    // ENCODING.VMOVN_A1
                                    return 1695;
                                    break;
                                  }
                                  case 0x01:
                                  {
                                    // ENCODING.VSHLL_A2
                                    return 2050;
                                    break;
                                  }
                                  case 0x04:
                                  {
                                    // ENCODING.VCVT_hs_A1
                                    return 1196;
                                    break;
                                  }
                                  case 0x05:
                                  {
                                    // ENCODING.VCVT_sh_A1
                                    return 1195;
                                    break;
                                  }
                                  default: break;
                                }
                              }
                            }
                            break;
                          }
                          case 0x03:
                          {
                            if (a & 0x40)
                            {
                              if (b & 0x04)
                              {
                                // ENCODING.VCVT_is_A1_Q
                                return 1200;
                              }
                              else
                              {
                                if (b & 0x01)
                                {
                                  // ENCODING.VCVTM_asimd_A1_Q
                                  return 1258;
                                }
                                else
                                {
                                  // ENCODING.VCVTP_asimd_A1_Q
                                  return 1278;
                                }
                              }
                            }
                            else
                            {
                              if (b & 0x04)
                              {
                                // ENCODING.VCVT_is_A1_D
                                return 1199;
                              }
                              else
                              {
                                if (b & 0x01)
                                {
                                  // ENCODING.VCVTM_asimd_A1_D
                                  return 1257;
                                }
                                else
                                {
                                  // ENCODING.VCVTP_asimd_A1_D
                                  return 1277;
                                }
                              }
                            }
                            break;
                          }
                          default: break;
                        }
                      }
                      else
                      {
                        if (a & 0x40)
                        {
                          // the following switch contains 4 case.
                          switch (c & 0x03)
                          {
                            case 0x00:
                            {
                              if (a & 0x80)
                              {
                                // the following switch contains 3 case.
                                switch (b & 0x05)
                                {
                                  case 0x00:
                                  {
                                    // ENCODING.VREV32_A1_Q
                                    return 1908;
                                    break;
                                  }
                                  case 0x04:
                                  {
                                    // ENCODING.VCLZ_A1_Q
                                    return 1146;
                                    break;
                                  }
                                  case 0x05:
                                  {
                                    // ENCODING.VMVN_r_A1_Q
                                    return 1738;
                                    break;
                                  }
                                  default: break;
                                }
                              }
                              else
                              {
                                // the following switch contains 4 case.
                                switch (b & 0x05)
                                {
                                  case 0x00:
                                  {
                                    // ENCODING.VREV64_A1_Q
                                    return 1912;
                                    break;
                                  }
                                  case 0x01:
                                  {
                                    // ENCODING.VREV16_A1_Q
                                    return 1904;
                                    break;
                                  }
                                  case 0x04:
                                  {
                                    // ENCODING.VCLS_A1_Q
                                    return 1138;
                                    break;
                                  }
                                  case 0x05:
                                  {
                                    // ENCODING.VCNT_A1_Q
                                    return 1186;
                                    break;
                                  }
                                  default: break;
                                }
                              }
                              break;
                            }
                            case 0x01:
                            {
                              if (a & 0x80)
                              {
                                if (b & 0x01)
                                {
                                  // ENCODING.VCLE_i_A1_Q
                                  return 1134;
                                }
                                else
                                {
                                  // ENCODING.VCGE_i_A1_Q
                                  return 1110;
                                }
                              }
                              else
                              {
                                if (b & 0x01)
                                {
                                  // ENCODING.VCEQ_i_A1_Q
                                  return 1098;
                                }
                                else
                                {
                                  // ENCODING.VCGT_i_A1_Q
                                  return 1122;
                                }
                              }
                              break;
                            }
                            case 0x02:
                            {
                              if (a & 0x80)
                              {
                                // the following switch contains 4 case.
                                switch (b & 0x05)
                                {
                                  case 0x00:
                                  {
                                    // ENCODING.VTRN_A1_Q
                                    return 2245;
                                    break;
                                  }
                                  case 0x01:
                                  {
                                    // ENCODING.VZIP_A1_Q
                                    return 2277;
                                    break;
                                  }
                                  case 0x04:
                                  {
                                    // ENCODING.VRINTX_asimd_A1_Q
                                    return 1966;
                                    break;
                                  }
                                  case 0x05:
                                  {
                                    // ENCODING.VRINTZ_asimd_A1_Q
                                    return 1976;
                                    break;
                                  }
                                  default: break;
                                }
                              }
                              else
                              {
                                // the following switch contains 4 case.
                                switch (b & 0x05)
                                {
                                  case 0x00:
                                  {
                                    // ENCODING.VSWP_A1_Q
                                    return 2237;
                                    break;
                                  }
                                  case 0x01:
                                  {
                                    // ENCODING.VUZP_A1_Q
                                    return 2273;
                                    break;
                                  }
                                  case 0x04:
                                  {
                                    // ENCODING.VRINTN_asimd_A1_Q
                                    return 1940;
                                    break;
                                  }
                                  case 0x05:
                                  {
                                    // ENCODING.VRINTA_asimd_A1_Q
                                    return 1920;
                                    break;
                                  }
                                  default: break;
                                }
                              }
                              break;
                            }
                            case 0x03:
                            {
                              if (b & 0x04)
                              {
                                if (a & 0x80)
                                {
                                  // ENCODING.VRSQRTE_A1_Q
                                  return 1996;
                                }
                                else
                                {
                                  // ENCODING.VRECPE_A1_Q
                                  return 1896;
                                }
                              }
                              else
                              {
                                if (b & 0x01)
                                {
                                  // ENCODING.VCVTN_asimd_A1_Q
                                  return 1268;
                                }
                                else
                                {
                                  // ENCODING.VCVTA_asimd_A1_Q
                                  return 1238;
                                }
                              }
                              break;
                            }
                            default: break;
                          }
                        }
                        else
                        {
                          // the following switch contains 4 case.
                          switch (c & 0x03)
                          {
                            case 0x00:
                            {
                              if (a & 0x80)
                              {
                                // the following switch contains 3 case.
                                switch (b & 0x05)
                                {
                                  case 0x00:
                                  {
                                    // ENCODING.VREV32_A1_D
                                    return 1907;
                                    break;
                                  }
                                  case 0x04:
                                  {
                                    // ENCODING.VCLZ_A1_D
                                    return 1145;
                                    break;
                                  }
                                  case 0x05:
                                  {
                                    // ENCODING.VMVN_r_A1_D
                                    return 1737;
                                    break;
                                  }
                                  default: break;
                                }
                              }
                              else
                              {
                                // the following switch contains 4 case.
                                switch (b & 0x05)
                                {
                                  case 0x00:
                                  {
                                    // ENCODING.VREV64_A1_D
                                    return 1911;
                                    break;
                                  }
                                  case 0x01:
                                  {
                                    // ENCODING.VREV16_A1_D
                                    return 1903;
                                    break;
                                  }
                                  case 0x04:
                                  {
                                    // ENCODING.VCLS_A1_D
                                    return 1137;
                                    break;
                                  }
                                  case 0x05:
                                  {
                                    // ENCODING.VCNT_A1_D
                                    return 1185;
                                    break;
                                  }
                                  default: break;
                                }
                              }
                              break;
                            }
                            case 0x01:
                            {
                              if (a & 0x80)
                              {
                                if (b & 0x01)
                                {
                                  // ENCODING.VCLE_i_A1_D
                                  return 1133;
                                }
                                else
                                {
                                  // ENCODING.VCGE_i_A1_D
                                  return 1109;
                                }
                              }
                              else
                              {
                                if (b & 0x01)
                                {
                                  // ENCODING.VCEQ_i_A1_D
                                  return 1097;
                                }
                                else
                                {
                                  // ENCODING.VCGT_i_A1_D
                                  return 1121;
                                }
                              }
                              break;
                            }
                            case 0x02:
                            {
                              if (a & 0x80)
                              {
                                // the following switch contains 4 case.
                                switch (b & 0x05)
                                {
                                  case 0x00:
                                  {
                                    // ENCODING.VTRN_A1_D
                                    return 2244;
                                    break;
                                  }
                                  case 0x01:
                                  {
                                    // ENCODING.VZIP_A1_D
                                    return 2276;
                                    break;
                                  }
                                  case 0x04:
                                  {
                                    // ENCODING.VRINTX_asimd_A1_D
                                    return 1965;
                                    break;
                                  }
                                  case 0x05:
                                  {
                                    // ENCODING.VRINTZ_asimd_A1_D
                                    return 1975;
                                    break;
                                  }
                                  default: break;
                                }
                              }
                              else
                              {
                                // the following switch contains 4 case.
                                switch (b & 0x05)
                                {
                                  case 0x00:
                                  {
                                    // ENCODING.VSWP_A1_D
                                    return 2236;
                                    break;
                                  }
                                  case 0x01:
                                  {
                                    // ENCODING.VUZP_A1_D
                                    return 2272;
                                    break;
                                  }
                                  case 0x04:
                                  {
                                    // ENCODING.VRINTN_asimd_A1_D
                                    return 1939;
                                    break;
                                  }
                                  case 0x05:
                                  {
                                    // ENCODING.VRINTA_asimd_A1_D
                                    return 1919;
                                    break;
                                  }
                                  default: break;
                                }
                              }
                              break;
                            }
                            case 0x03:
                            {
                              if (b & 0x04)
                              {
                                if (a & 0x80)
                                {
                                  // ENCODING.VRSQRTE_A1_D
                                  return 1995;
                                }
                                else
                                {
                                  // ENCODING.VRECPE_A1_D
                                  return 1895;
                                }
                              }
                              else
                              {
                                if (b & 0x01)
                                {
                                  // ENCODING.VCVTN_asimd_A1_D
                                  return 1267;
                                }
                                else
                                {
                                  // ENCODING.VCVTA_asimd_A1_D
                                  return 1237;
                                }
                              }
                              break;
                            }
                            default: break;
                          }
                        }
                      }
                    }
                  }
                  else
                  {
                    if (a & 0x40)
                    {
                      // ENCODING.VEXT_A1_Q
                      return 1334;
                    }
                    else
                    {
                      // ENCODING.VEXT_A1_D
                      return 1333;
                    }
                  }
                }
              }
            }
            else
            {
              // cond!=0b1111
              if ((opcode & 0xf0000000) != 0xf0000000)
              {
                if (c & 0x40)
                {
                  if (d & 0x01)
                  {
                    // ENCODING.MVNS_i_A1
                    return 389;
                  }
                  else
                  {
                    // ENCODING.RSCS_i_A1
                    return 509;
                  }
                }
                else
                {
                  if (d & 0x01)
                  {
                    // ENCODING.MOVS_i_A1
                    return 345;
                  }
                  else
                  {
                    // ENCODING.ADCS_i_A1
                    return 2;
                  }
                }
              }
              else
              {
                if (a & 0x10)
                {
                  if (a & 0x40)
                  {
                    if (b & 0x04)
                    {
                      // ENCODING.VCVT_xs_A1_Q
                      return 1222;
                    }
                    else
                    {
                      if (b & 0x01)
                      {
                        // ENCODING.VQRSHRN_A1
                        return 1869;
                      }
                      else
                      {
                        if (d & 0x01)
                        {
                          // ENCODING.VQRSHRUN_A1
                          return 1870;
                        }
                        else
                        {
                          // ENCODING.VRSHRN_A1
                          return 1993;
                        }
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x04)
                    {
                      // ENCODING.VCVT_xs_A1_D
                      return 1221;
                    }
                    else
                    {
                      // the following switch contains 3 case.
                      switch (b & 0x03)
                      {
                        case 0x00:
                        {
                          if (d & 0x01)
                          {
                            // ENCODING.VQSHRUN_A1
                            return 1886;
                          }
                          else
                          {
                            // ENCODING.VSHRN_A1
                            return 2057;
                          }
                          break;
                        }
                        case 0x01:
                        {
                          // ENCODING.VQSHRN_A1
                          return 1885;
                          break;
                        }
                        case 0x02:
                        {
                          if (((opcode & 0xfe870fd0) == 0xf2800a10) && ((opcode & 0x00380000) != 0x00000000))
                          {
                            // ENCODING.VMOVL_A1
                            return 1693;
                          }
                          else
                          {
                            // ENCODING.VSHLL_A1
                            return 2049;
                          }
                          break;
                        }
                        default: break;
                      }
                    }
                  }
                }
                else
                {
                  if (d & 0x01)
                  {
                    if (b & 0x08)
                    {
                      if (a & 0x40)
                      {
                        if (b & 0x04)
                        {
                          // ENCODING.VDUP_s_A1_Q
                          return 1326;
                        }
                        else
                        {
                          // ENCODING.VTBX_A1
                          return 2241;
                        }
                      }
                      else
                      {
                        if (b & 0x04)
                        {
                          // ENCODING.VDUP_s_A1_D
                          return 1325;
                        }
                        else
                        {
                          // ENCODING.VTBL_A1
                          return 2240;
                        }
                      }
                    }
                    else
                    {
                      if (b & 0x02)
                      {
                        // the following switch contains 4 case.
                        switch (c & 0x03)
                        {
                          case 0x00:
                          {
                            if (a & 0x40)
                            {
                              // the following switch contains 4 case.
                              switch (b & 0x05)
                              {
                                case 0x00:
                                {
                                  // ENCODING.VPADDL_A1_Q
                                  return 1794;
                                  break;
                                }
                                case 0x01:
                                {
                                  if (a & 0x80)
                                  {
                                    // ENCODING.AESIMC_A1
                                    return 978;
                                  }
                                  else
                                  {
                                    // ENCODING.AESD_A1
                                    return 974;
                                  }
                                  break;
                                }
                                case 0x04:
                                {
                                  // ENCODING.VPADAL_A1_Q
                                  return 1786;
                                  break;
                                }
                                case 0x05:
                                {
                                  if (a & 0x80)
                                  {
                                    // ENCODING.VQNEG_A1_Q
                                    return 1838;
                                  }
                                  else
                                  {
                                    // ENCODING.VQABS_A1_Q
                                    return 1806;
                                  }
                                  break;
                                }
                                default: break;
                              }
                            }
                            else
                            {
                              // the following switch contains 4 case.
                              switch (b & 0x05)
                              {
                                case 0x00:
                                {
                                  // ENCODING.VPADDL_A1_D
                                  return 1793;
                                  break;
                                }
                                case 0x01:
                                {
                                  if (a & 0x80)
                                  {
                                    // ENCODING.AESMC_A1
                                    return 980;
                                  }
                                  else
                                  {
                                    // ENCODING.AESE_A1
                                    return 976;
                                  }
                                  break;
                                }
                                case 0x04:
                                {
                                  // ENCODING.VPADAL_A1_D
                                  return 1785;
                                  break;
                                }
                                case 0x05:
                                {
                                  if (a & 0x80)
                                  {
                                    // ENCODING.VQNEG_A1_D
                                    return 1837;
                                  }
                                  else
                                  {
                                    // ENCODING.VQABS_A1_D
                                    return 1805;
                                  }
                                  break;
                                }
                                default: break;
                              }
                            }
                            break;
                          }
                          case 0x01:
                          {
                            if (a & 0x40)
                            {
                              if (a & 0x80)
                              {
                                if (b & 0x01)
                                {
                                  // ENCODING.VNEG_A1_Q
                                  return 1742;
                                }
                                else
                                {
                                  // ENCODING.SHA1H_A1
                                  return 992;
                                }
                              }
                              else
                              {
                                if (b & 0x01)
                                {
                                  // ENCODING.VABS_A1_Q
                                  return 1028;
                                }
                                else
                                {
                                  // ENCODING.VCLT_i_A1_Q
                                  return 1142;
                                }
                              }
                            }
                            else
                            {
                              if (a & 0x80)
                              {
                                // ENCODING.VNEG_A1_D
                                return 1741;
                              }
                              else
                              {
                                if (b & 0x01)
                                {
                                  // ENCODING.VABS_A1_D
                                  return 1027;
                                }
                                else
                                {
                                  // ENCODING.VCLT_i_A1_D
                                  return 1141;
                                }
                              }
                            }
                            break;
                          }
                          case 0x02:
                          {
                            if (a & 0x80)
                            {
                              // the following switch contains 4 case.
                              switch (b & 0x05)
                              {
                                case 0x00:
                                {
                                  // ENCODING.VQMOVN_A1
                                  return 1833;
                                  break;
                                }
                                case 0x01:
                                {
                                  if (a & 0x40)
                                  {
                                    // ENCODING.SHA256SU0_A1
                                    return 1006;
                                  }
                                  else
                                  {
                                    // ENCODING.SHA1SU1_A1
                                    return 1000;
                                  }
                                  break;
                                }
                                case 0x04:
                                {
                                  if (a & 0x40)
                                  {
                                    // ENCODING.VRINTM_asimd_A1_Q
                                    return 1930;
                                  }
                                  else
                                  {
                                    // ENCODING.VRINTM_asimd_A1_D
                                    return 1929;
                                  }
                                  break;
                                }
                                case 0x05:
                                {
                                  if (a & 0x40)
                                  {
                                    // ENCODING.VRINTP_asimd_A1_Q
                                    return 1950;
                                  }
                                  else
                                  {
                                    // ENCODING.VRINTP_asimd_A1_D
                                    return 1949;
                                  }
                                  break;
                                }
                                default: break;
                              }
                            }
                            else
                            {
                              if (a & 0x40)
                              {
                                // ENCODING.VQMOVUN_A1
                                return 1834;
                              }
                              else
                              {
                                // the following switch contains 4 case.
                                switch (b & 0x05)
                                {
                                  case 0x00:
                                  {
                                    // ENCODING.VMOVN_A1
                                    return 1695;
                                    break;
                                  }
                                  case 0x01:
                                  {
                                    // ENCODING.VSHLL_A2
                                    return 2050;
                                    break;
                                  }
                                  case 0x04:
                                  {
                                    // ENCODING.VCVT_hs_A1
                                    return 1196;
                                    break;
                                  }
                                  case 0x05:
                                  {
                                    // ENCODING.VCVT_sh_A1
                                    return 1195;
                                    break;
                                  }
                                  default: break;
                                }
                              }
                            }
                            break;
                          }
                          case 0x03:
                          {
                            if (a & 0x40)
                            {
                              if (b & 0x04)
                              {
                                // ENCODING.VCVT_is_A1_Q
                                return 1200;
                              }
                              else
                              {
                                if (b & 0x01)
                                {
                                  // ENCODING.VCVTM_asimd_A1_Q
                                  return 1258;
                                }
                                else
                                {
                                  // ENCODING.VCVTP_asimd_A1_Q
                                  return 1278;
                                }
                              }
                            }
                            else
                            {
                              if (b & 0x04)
                              {
                                // ENCODING.VCVT_is_A1_D
                                return 1199;
                              }
                              else
                              {
                                if (b & 0x01)
                                {
                                  // ENCODING.VCVTM_asimd_A1_D
                                  return 1257;
                                }
                                else
                                {
                                  // ENCODING.VCVTP_asimd_A1_D
                                  return 1277;
                                }
                              }
                            }
                            break;
                          }
                          default: break;
                        }
                      }
                      else
                      {
                        if (a & 0x40)
                        {
                          // the following switch contains 4 case.
                          switch (c & 0x03)
                          {
                            case 0x00:
                            {
                              if (a & 0x80)
                              {
                                // the following switch contains 3 case.
                                switch (b & 0x05)
                                {
                                  case 0x00:
                                  {
                                    // ENCODING.VREV32_A1_Q
                                    return 1908;
                                    break;
                                  }
                                  case 0x04:
                                  {
                                    // ENCODING.VCLZ_A1_Q
                                    return 1146;
                                    break;
                                  }
                                  case 0x05:
                                  {
                                    // ENCODING.VMVN_r_A1_Q
                                    return 1738;
                                    break;
                                  }
                                  default: break;
                                }
                              }
                              else
                              {
                                // the following switch contains 4 case.
                                switch (b & 0x05)
                                {
                                  case 0x00:
                                  {
                                    // ENCODING.VREV64_A1_Q
                                    return 1912;
                                    break;
                                  }
                                  case 0x01:
                                  {
                                    // ENCODING.VREV16_A1_Q
                                    return 1904;
                                    break;
                                  }
                                  case 0x04:
                                  {
                                    // ENCODING.VCLS_A1_Q
                                    return 1138;
                                    break;
                                  }
                                  case 0x05:
                                  {
                                    // ENCODING.VCNT_A1_Q
                                    return 1186;
                                    break;
                                  }
                                  default: break;
                                }
                              }
                              break;
                            }
                            case 0x01:
                            {
                              if (a & 0x80)
                              {
                                if (b & 0x01)
                                {
                                  // ENCODING.VCLE_i_A1_Q
                                  return 1134;
                                }
                                else
                                {
                                  // ENCODING.VCGE_i_A1_Q
                                  return 1110;
                                }
                              }
                              else
                              {
                                if (b & 0x01)
                                {
                                  // ENCODING.VCEQ_i_A1_Q
                                  return 1098;
                                }
                                else
                                {
                                  // ENCODING.VCGT_i_A1_Q
                                  return 1122;
                                }
                              }
                              break;
                            }
                            case 0x02:
                            {
                              if (a & 0x80)
                              {
                                // the following switch contains 4 case.
                                switch (b & 0x05)
                                {
                                  case 0x00:
                                  {
                                    // ENCODING.VTRN_A1_Q
                                    return 2245;
                                    break;
                                  }
                                  case 0x01:
                                  {
                                    // ENCODING.VZIP_A1_Q
                                    return 2277;
                                    break;
                                  }
                                  case 0x04:
                                  {
                                    // ENCODING.VRINTX_asimd_A1_Q
                                    return 1966;
                                    break;
                                  }
                                  case 0x05:
                                  {
                                    // ENCODING.VRINTZ_asimd_A1_Q
                                    return 1976;
                                    break;
                                  }
                                  default: break;
                                }
                              }
                              else
                              {
                                // the following switch contains 3 case.
                                switch ((b & 0x05) - 1)
                                {
                                  case 0x00:
                                  {
                                    // ENCODING.VUZP_A1_Q
                                    return 2273;
                                    break;
                                  }
                                  case 0x03:
                                  {
                                    // ENCODING.VRINTN_asimd_A1_Q
                                    return 1940;
                                    break;
                                  }
                                  case 0x04:
                                  {
                                    // ENCODING.VRINTA_asimd_A1_Q
                                    return 1920;
                                    break;
                                  }
                                  default: break;
                                }
                              }
                              break;
                            }
                            case 0x03:
                            {
                              if (b & 0x04)
                              {
                                if (a & 0x80)
                                {
                                  // ENCODING.VRSQRTE_A1_Q
                                  return 1996;
                                }
                                else
                                {
                                  // ENCODING.VRECPE_A1_Q
                                  return 1896;
                                }
                              }
                              else
                              {
                                if (b & 0x01)
                                {
                                  // ENCODING.VCVTN_asimd_A1_Q
                                  return 1268;
                                }
                                else
                                {
                                  // ENCODING.VCVTA_asimd_A1_Q
                                  return 1238;
                                }
                              }
                              break;
                            }
                            default: break;
                          }
                        }
                        else
                        {
                          // the following switch contains 4 case.
                          switch (c & 0x03)
                          {
                            case 0x00:
                            {
                              if (a & 0x80)
                              {
                                // the following switch contains 3 case.
                                switch (b & 0x05)
                                {
                                  case 0x00:
                                  {
                                    // ENCODING.VREV32_A1_D
                                    return 1907;
                                    break;
                                  }
                                  case 0x04:
                                  {
                                    // ENCODING.VCLZ_A1_D
                                    return 1145;
                                    break;
                                  }
                                  case 0x05:
                                  {
                                    // ENCODING.VMVN_r_A1_D
                                    return 1737;
                                    break;
                                  }
                                  default: break;
                                }
                              }
                              else
                              {
                                // the following switch contains 4 case.
                                switch (b & 0x05)
                                {
                                  case 0x00:
                                  {
                                    // ENCODING.VREV64_A1_D
                                    return 1911;
                                    break;
                                  }
                                  case 0x01:
                                  {
                                    // ENCODING.VREV16_A1_D
                                    return 1903;
                                    break;
                                  }
                                  case 0x04:
                                  {
                                    // ENCODING.VCLS_A1_D
                                    return 1137;
                                    break;
                                  }
                                  case 0x05:
                                  {
                                    // ENCODING.VCNT_A1_D
                                    return 1185;
                                    break;
                                  }
                                  default: break;
                                }
                              }
                              break;
                            }
                            case 0x01:
                            {
                              if (a & 0x80)
                              {
                                if (b & 0x01)
                                {
                                  // ENCODING.VCLE_i_A1_D
                                  return 1133;
                                }
                                else
                                {
                                  // ENCODING.VCGE_i_A1_D
                                  return 1109;
                                }
                              }
                              else
                              {
                                if (b & 0x01)
                                {
                                  // ENCODING.VCEQ_i_A1_D
                                  return 1097;
                                }
                                else
                                {
                                  // ENCODING.VCGT_i_A1_D
                                  return 1121;
                                }
                              }
                              break;
                            }
                            case 0x02:
                            {
                              if (a & 0x80)
                              {
                                // the following switch contains 4 case.
                                switch (b & 0x05)
                                {
                                  case 0x00:
                                  {
                                    // ENCODING.VTRN_A1_D
                                    return 2244;
                                    break;
                                  }
                                  case 0x01:
                                  {
                                    // ENCODING.VZIP_A1_D
                                    return 2276;
                                    break;
                                  }
                                  case 0x04:
                                  {
                                    // ENCODING.VRINTX_asimd_A1_D
                                    return 1965;
                                    break;
                                  }
                                  case 0x05:
                                  {
                                    // ENCODING.VRINTZ_asimd_A1_D
                                    return 1975;
                                    break;
                                  }
                                  default: break;
                                }
                              }
                              else
                              {
                                // the following switch contains 3 case.
                                switch ((b & 0x05) - 1)
                                {
                                  case 0x00:
                                  {
                                    // ENCODING.VUZP_A1_D
                                    return 2272;
                                    break;
                                  }
                                  case 0x03:
                                  {
                                    // ENCODING.VRINTN_asimd_A1_D
                                    return 1939;
                                    break;
                                  }
                                  case 0x04:
                                  {
                                    // ENCODING.VRINTA_asimd_A1_D
                                    return 1919;
                                    break;
                                  }
                                  default: break;
                                }
                              }
                              break;
                            }
                            case 0x03:
                            {
                              if (b & 0x04)
                              {
                                if (a & 0x80)
                                {
                                  // ENCODING.VRSQRTE_A1_D
                                  return 1995;
                                }
                                else
                                {
                                  // ENCODING.VRECPE_A1_D
                                  return 1895;
                                }
                              }
                              else
                              {
                                if (b & 0x01)
                                {
                                  // ENCODING.VCVTN_asimd_A1_D
                                  return 1267;
                                }
                                else
                                {
                                  // ENCODING.VCVTA_asimd_A1_D
                                  return 1237;
                                }
                              }
                              break;
                            }
                            default: break;
                          }
                        }
                      }
                    }
                  }
                  else
                  {
                    if (a & 0x40)
                    {
                      // ENCODING.VEXT_A1_Q
                      return 1334;
                    }
                    else
                    {
                      // ENCODING.VEXT_A1_D
                      return 1333;
                    }
                  }
                }
              }
            }
          }
          else
          {
            // imm6:L!=0b000xxx0
            if ((opcode & 0x00380080) != 0x00000000)
            {
              // cond!=0b1111
              if ((opcode & 0xf0000000) != 0xf0000000)
              {
                if (c & 0x40)
                {
                  // ENCODING.RSCS_i_A1
                  return 509;
                }
                else
                {
                  // ENCODING.ADCS_i_A1
                  return 2;
                }
              }
              else
              {
                if (a & 0x10)
                {
                  if (a & 0x40)
                  {
                    // the following switch contains 8 case.
                    switch (b & 0x07)
                    {
                      case 0x00:
                      {
                        // ENCODING.VSHR_A1_Q
                        return 2054;
                        break;
                      }
                      case 0x01:
                      {
                        // ENCODING.VSRA_A1_Q
                        return 2072;
                        break;
                      }
                      case 0x02:
                      {
                        // ENCODING.VRSHR_A1_Q
                        return 1990;
                        break;
                      }
                      case 0x03:
                      {
                        // ENCODING.VRSRA_A1_D
                        return 2004;
                        break;
                      }
                      case 0x04:
                      {
                        // ENCODING.VSRI_A1_Q
                        return 2076;
                        break;
                      }
                      case 0x05:
                      {
                        if (d & 0x01)
                        {
                          // ENCODING.VSLI_A1_Q
                          return 2060;
                        }
                        else
                        {
                          // ENCODING.VSHL_i_A1_Q
                          return 2042;
                        }
                        break;
                      }
                      case 0x06:
                      {
                        // ENCODING.VQSHLU_i_A1_Q
                        return 1876;
                        break;
                      }
                      case 0x07:
                      {
                        // ENCODING.VQSHL_i_A1_Q
                        return 1874;
                        break;
                      }
                      default: break;
                    }
                  }
                  else
                  {
                    // the following switch contains 8 case.
                    switch (b & 0x07)
                    {
                      case 0x00:
                      {
                        // ENCODING.VSHR_A1_D
                        return 2053;
                        break;
                      }
                      case 0x01:
                      {
                        // ENCODING.VSRA_A1_D
                        return 2071;
                        break;
                      }
                      case 0x02:
                      {
                        // ENCODING.VRSHR_A1_D
                        return 1989;
                        break;
                      }
                      case 0x03:
                      {
                        // ENCODING.VRSRA_A1_Q
                        return 2003;
                        break;
                      }
                      case 0x04:
                      {
                        // ENCODING.VSRI_A1_D
                        return 2075;
                        break;
                      }
                      case 0x05:
                      {
                        if (d & 0x01)
                        {
                          // ENCODING.VSLI_A1_D
                          return 2059;
                        }
                        else
                        {
                          // ENCODING.VSHL_i_A1_D
                          return 2041;
                        }
                        break;
                      }
                      case 0x06:
                      {
                        // ENCODING.VQSHLU_i_A1_D
                        return 1875;
                        break;
                      }
                      case 0x07:
                      {
                        // ENCODING.VQSHL_i_A1_D
                        return 1873;
                        break;
                      }
                      default: break;
                    }
                  }
                }
                else
                {
                  if (d & 0x01)
                  {
                    if (b & 0x08)
                    {
                      if (a & 0x40)
                      {
                        if (b & 0x04)
                        {
                          // ENCODING.VDUP_s_A1_Q
                          return 1326;
                        }
                        else
                        {
                          // ENCODING.VTBX_A1
                          return 2241;
                        }
                      }
                      else
                      {
                        if (b & 0x04)
                        {
                          // ENCODING.VDUP_s_A1_D
                          return 1325;
                        }
                        else
                        {
                          // ENCODING.VTBL_A1
                          return 2240;
                        }
                      }
                    }
                    else
                    {
                      if (b & 0x02)
                      {
                        // the following switch contains 4 case.
                        switch (c & 0x03)
                        {
                          case 0x00:
                          {
                            if (a & 0x40)
                            {
                              // the following switch contains 4 case.
                              switch (b & 0x05)
                              {
                                case 0x00:
                                {
                                  // ENCODING.VPADDL_A1_Q
                                  return 1794;
                                  break;
                                }
                                case 0x01:
                                {
                                  if (a & 0x80)
                                  {
                                    // ENCODING.AESIMC_A1
                                    return 978;
                                  }
                                  else
                                  {
                                    // ENCODING.AESD_A1
                                    return 974;
                                  }
                                  break;
                                }
                                case 0x04:
                                {
                                  // ENCODING.VPADAL_A1_Q
                                  return 1786;
                                  break;
                                }
                                case 0x05:
                                {
                                  if (a & 0x80)
                                  {
                                    // ENCODING.VQNEG_A1_Q
                                    return 1838;
                                  }
                                  else
                                  {
                                    // ENCODING.VQABS_A1_Q
                                    return 1806;
                                  }
                                  break;
                                }
                                default: break;
                              }
                            }
                            else
                            {
                              // the following switch contains 4 case.
                              switch (b & 0x05)
                              {
                                case 0x00:
                                {
                                  // ENCODING.VPADDL_A1_D
                                  return 1793;
                                  break;
                                }
                                case 0x01:
                                {
                                  if (a & 0x80)
                                  {
                                    // ENCODING.AESMC_A1
                                    return 980;
                                  }
                                  else
                                  {
                                    // ENCODING.AESE_A1
                                    return 976;
                                  }
                                  break;
                                }
                                case 0x04:
                                {
                                  // ENCODING.VPADAL_A1_D
                                  return 1785;
                                  break;
                                }
                                case 0x05:
                                {
                                  if (a & 0x80)
                                  {
                                    // ENCODING.VQNEG_A1_D
                                    return 1837;
                                  }
                                  else
                                  {
                                    // ENCODING.VQABS_A1_D
                                    return 1805;
                                  }
                                  break;
                                }
                                default: break;
                              }
                            }
                            break;
                          }
                          case 0x01:
                          {
                            if (a & 0x40)
                            {
                              if (a & 0x80)
                              {
                                if (b & 0x01)
                                {
                                  // ENCODING.VNEG_A1_Q
                                  return 1742;
                                }
                                else
                                {
                                  // ENCODING.SHA1H_A1
                                  return 992;
                                }
                              }
                              else
                              {
                                if (b & 0x01)
                                {
                                  // ENCODING.VABS_A1_Q
                                  return 1028;
                                }
                                else
                                {
                                  // ENCODING.VCLT_i_A1_Q
                                  return 1142;
                                }
                              }
                            }
                            else
                            {
                              if (a & 0x80)
                              {
                                // ENCODING.VNEG_A1_D
                                return 1741;
                              }
                              else
                              {
                                if (b & 0x01)
                                {
                                  // ENCODING.VABS_A1_D
                                  return 1027;
                                }
                                else
                                {
                                  // ENCODING.VCLT_i_A1_D
                                  return 1141;
                                }
                              }
                            }
                            break;
                          }
                          case 0x02:
                          {
                            if (a & 0x80)
                            {
                              // the following switch contains 4 case.
                              switch (b & 0x05)
                              {
                                case 0x00:
                                {
                                  // ENCODING.VQMOVN_A1
                                  return 1833;
                                  break;
                                }
                                case 0x01:
                                {
                                  if (a & 0x40)
                                  {
                                    // ENCODING.SHA256SU0_A1
                                    return 1006;
                                  }
                                  else
                                  {
                                    // ENCODING.SHA1SU1_A1
                                    return 1000;
                                  }
                                  break;
                                }
                                case 0x04:
                                {
                                  if (a & 0x40)
                                  {
                                    // ENCODING.VRINTM_asimd_A1_Q
                                    return 1930;
                                  }
                                  else
                                  {
                                    // ENCODING.VRINTM_asimd_A1_D
                                    return 1929;
                                  }
                                  break;
                                }
                                case 0x05:
                                {
                                  if (a & 0x40)
                                  {
                                    // ENCODING.VRINTP_asimd_A1_Q
                                    return 1950;
                                  }
                                  else
                                  {
                                    // ENCODING.VRINTP_asimd_A1_D
                                    return 1949;
                                  }
                                  break;
                                }
                                default: break;
                              }
                            }
                            else
                            {
                              if (a & 0x40)
                              {
                                // ENCODING.VQMOVUN_A1
                                return 1834;
                              }
                              else
                              {
                                // the following switch contains 4 case.
                                switch (b & 0x05)
                                {
                                  case 0x00:
                                  {
                                    // ENCODING.VMOVN_A1
                                    return 1695;
                                    break;
                                  }
                                  case 0x01:
                                  {
                                    // ENCODING.VSHLL_A2
                                    return 2050;
                                    break;
                                  }
                                  case 0x04:
                                  {
                                    // ENCODING.VCVT_hs_A1
                                    return 1196;
                                    break;
                                  }
                                  case 0x05:
                                  {
                                    // ENCODING.VCVT_sh_A1
                                    return 1195;
                                    break;
                                  }
                                  default: break;
                                }
                              }
                            }
                            break;
                          }
                          case 0x03:
                          {
                            if (a & 0x40)
                            {
                              if (b & 0x04)
                              {
                                // ENCODING.VCVT_is_A1_Q
                                return 1200;
                              }
                              else
                              {
                                if (b & 0x01)
                                {
                                  // ENCODING.VCVTM_asimd_A1_Q
                                  return 1258;
                                }
                                else
                                {
                                  // ENCODING.VCVTP_asimd_A1_Q
                                  return 1278;
                                }
                              }
                            }
                            else
                            {
                              if (b & 0x04)
                              {
                                // ENCODING.VCVT_is_A1_D
                                return 1199;
                              }
                              else
                              {
                                if (b & 0x01)
                                {
                                  // ENCODING.VCVTM_asimd_A1_D
                                  return 1257;
                                }
                                else
                                {
                                  // ENCODING.VCVTP_asimd_A1_D
                                  return 1277;
                                }
                              }
                            }
                            break;
                          }
                          default: break;
                        }
                      }
                      else
                      {
                        if (a & 0x40)
                        {
                          // the following switch contains 4 case.
                          switch (c & 0x03)
                          {
                            case 0x00:
                            {
                              if (a & 0x80)
                              {
                                // the following switch contains 3 case.
                                switch (b & 0x05)
                                {
                                  case 0x00:
                                  {
                                    // ENCODING.VREV32_A1_Q
                                    return 1908;
                                    break;
                                  }
                                  case 0x04:
                                  {
                                    // ENCODING.VCLZ_A1_Q
                                    return 1146;
                                    break;
                                  }
                                  case 0x05:
                                  {
                                    // ENCODING.VMVN_r_A1_Q
                                    return 1738;
                                    break;
                                  }
                                  default: break;
                                }
                              }
                              else
                              {
                                // the following switch contains 4 case.
                                switch (b & 0x05)
                                {
                                  case 0x00:
                                  {
                                    // ENCODING.VREV64_A1_Q
                                    return 1912;
                                    break;
                                  }
                                  case 0x01:
                                  {
                                    // ENCODING.VREV16_A1_Q
                                    return 1904;
                                    break;
                                  }
                                  case 0x04:
                                  {
                                    // ENCODING.VCLS_A1_Q
                                    return 1138;
                                    break;
                                  }
                                  case 0x05:
                                  {
                                    // ENCODING.VCNT_A1_Q
                                    return 1186;
                                    break;
                                  }
                                  default: break;
                                }
                              }
                              break;
                            }
                            case 0x01:
                            {
                              if (a & 0x80)
                              {
                                if (b & 0x01)
                                {
                                  // ENCODING.VCLE_i_A1_Q
                                  return 1134;
                                }
                                else
                                {
                                  // ENCODING.VCGE_i_A1_Q
                                  return 1110;
                                }
                              }
                              else
                              {
                                if (b & 0x01)
                                {
                                  // ENCODING.VCEQ_i_A1_Q
                                  return 1098;
                                }
                                else
                                {
                                  // ENCODING.VCGT_i_A1_Q
                                  return 1122;
                                }
                              }
                              break;
                            }
                            case 0x02:
                            {
                              if (a & 0x80)
                              {
                                // the following switch contains 4 case.
                                switch (b & 0x05)
                                {
                                  case 0x00:
                                  {
                                    // ENCODING.VTRN_A1_Q
                                    return 2245;
                                    break;
                                  }
                                  case 0x01:
                                  {
                                    // ENCODING.VZIP_A1_Q
                                    return 2277;
                                    break;
                                  }
                                  case 0x04:
                                  {
                                    // ENCODING.VRINTX_asimd_A1_Q
                                    return 1966;
                                    break;
                                  }
                                  case 0x05:
                                  {
                                    // ENCODING.VRINTZ_asimd_A1_Q
                                    return 1976;
                                    break;
                                  }
                                  default: break;
                                }
                              }
                              else
                              {
                                // the following switch contains 3 case.
                                switch ((b & 0x05) - 1)
                                {
                                  case 0x00:
                                  {
                                    // ENCODING.VUZP_A1_Q
                                    return 2273;
                                    break;
                                  }
                                  case 0x03:
                                  {
                                    // ENCODING.VRINTN_asimd_A1_Q
                                    return 1940;
                                    break;
                                  }
                                  case 0x04:
                                  {
                                    // ENCODING.VRINTA_asimd_A1_Q
                                    return 1920;
                                    break;
                                  }
                                  default: break;
                                }
                              }
                              break;
                            }
                            case 0x03:
                            {
                              if (b & 0x04)
                              {
                                if (a & 0x80)
                                {
                                  // ENCODING.VRSQRTE_A1_Q
                                  return 1996;
                                }
                                else
                                {
                                  // ENCODING.VRECPE_A1_Q
                                  return 1896;
                                }
                              }
                              else
                              {
                                if (b & 0x01)
                                {
                                  // ENCODING.VCVTN_asimd_A1_Q
                                  return 1268;
                                }
                                else
                                {
                                  // ENCODING.VCVTA_asimd_A1_Q
                                  return 1238;
                                }
                              }
                              break;
                            }
                            default: break;
                          }
                        }
                        else
                        {
                          // the following switch contains 4 case.
                          switch (c & 0x03)
                          {
                            case 0x00:
                            {
                              if (a & 0x80)
                              {
                                // the following switch contains 3 case.
                                switch (b & 0x05)
                                {
                                  case 0x00:
                                  {
                                    // ENCODING.VREV32_A1_D
                                    return 1907;
                                    break;
                                  }
                                  case 0x04:
                                  {
                                    // ENCODING.VCLZ_A1_D
                                    return 1145;
                                    break;
                                  }
                                  case 0x05:
                                  {
                                    // ENCODING.VMVN_r_A1_D
                                    return 1737;
                                    break;
                                  }
                                  default: break;
                                }
                              }
                              else
                              {
                                // the following switch contains 4 case.
                                switch (b & 0x05)
                                {
                                  case 0x00:
                                  {
                                    // ENCODING.VREV64_A1_D
                                    return 1911;
                                    break;
                                  }
                                  case 0x01:
                                  {
                                    // ENCODING.VREV16_A1_D
                                    return 1903;
                                    break;
                                  }
                                  case 0x04:
                                  {
                                    // ENCODING.VCLS_A1_D
                                    return 1137;
                                    break;
                                  }
                                  case 0x05:
                                  {
                                    // ENCODING.VCNT_A1_D
                                    return 1185;
                                    break;
                                  }
                                  default: break;
                                }
                              }
                              break;
                            }
                            case 0x01:
                            {
                              if (a & 0x80)
                              {
                                if (b & 0x01)
                                {
                                  // ENCODING.VCLE_i_A1_D
                                  return 1133;
                                }
                                else
                                {
                                  // ENCODING.VCGE_i_A1_D
                                  return 1109;
                                }
                              }
                              else
                              {
                                if (b & 0x01)
                                {
                                  // ENCODING.VCEQ_i_A1_D
                                  return 1097;
                                }
                                else
                                {
                                  // ENCODING.VCGT_i_A1_D
                                  return 1121;
                                }
                              }
                              break;
                            }
                            case 0x02:
                            {
                              if (a & 0x80)
                              {
                                // the following switch contains 4 case.
                                switch (b & 0x05)
                                {
                                  case 0x00:
                                  {
                                    // ENCODING.VTRN_A1_D
                                    return 2244;
                                    break;
                                  }
                                  case 0x01:
                                  {
                                    // ENCODING.VZIP_A1_D
                                    return 2276;
                                    break;
                                  }
                                  case 0x04:
                                  {
                                    // ENCODING.VRINTX_asimd_A1_D
                                    return 1965;
                                    break;
                                  }
                                  case 0x05:
                                  {
                                    // ENCODING.VRINTZ_asimd_A1_D
                                    return 1975;
                                    break;
                                  }
                                  default: break;
                                }
                              }
                              else
                              {
                                // the following switch contains 3 case.
                                switch ((b & 0x05) - 1)
                                {
                                  case 0x00:
                                  {
                                    // ENCODING.VUZP_A1_D
                                    return 2272;
                                    break;
                                  }
                                  case 0x03:
                                  {
                                    // ENCODING.VRINTN_asimd_A1_D
                                    return 1939;
                                    break;
                                  }
                                  case 0x04:
                                  {
                                    // ENCODING.VRINTA_asimd_A1_D
                                    return 1919;
                                    break;
                                  }
                                  default: break;
                                }
                              }
                              break;
                            }
                            case 0x03:
                            {
                              if (b & 0x04)
                              {
                                if (a & 0x80)
                                {
                                  // ENCODING.VRSQRTE_A1_D
                                  return 1995;
                                }
                                else
                                {
                                  // ENCODING.VRECPE_A1_D
                                  return 1895;
                                }
                              }
                              else
                              {
                                if (b & 0x01)
                                {
                                  // ENCODING.VCVTN_asimd_A1_D
                                  return 1267;
                                }
                                else
                                {
                                  // ENCODING.VCVTA_asimd_A1_D
                                  return 1237;
                                }
                              }
                              break;
                            }
                            default: break;
                          }
                        }
                      }
                    }
                  }
                  else
                  {
                    if (a & 0x40)
                    {
                      // ENCODING.VEXT_A1_Q
                      return 1334;
                    }
                    else
                    {
                      // ENCODING.VEXT_A1_D
                      return 1333;
                    }
                  }
                }
              }
            }
            else
            {
              if (d & 0x01)
              {
                if (b & 0x08)
                {
                  if (a & 0x40)
                  {
                    if (b & 0x04)
                    {
                      // ENCODING.VDUP_s_A1_Q
                      return 1326;
                    }
                    else
                    {
                      // ENCODING.VTBX_A1
                      return 2241;
                    }
                  }
                  else
                  {
                    if (b & 0x04)
                    {
                      // ENCODING.VDUP_s_A1_D
                      return 1325;
                    }
                    else
                    {
                      // ENCODING.VTBL_A1
                      return 2240;
                    }
                  }
                }
                else
                {
                  if (b & 0x02)
                  {
                    // the following switch contains 4 case.
                    switch (c & 0x03)
                    {
                      case 0x00:
                      {
                        if (a & 0x40)
                        {
                          // the following switch contains 4 case.
                          switch (b & 0x05)
                          {
                            case 0x00:
                            {
                              // ENCODING.VPADDL_A1_Q
                              return 1794;
                              break;
                            }
                            case 0x01:
                            {
                              if (a & 0x80)
                              {
                                // ENCODING.AESIMC_A1
                                return 978;
                              }
                              else
                              {
                                // ENCODING.AESD_A1
                                return 974;
                              }
                              break;
                            }
                            case 0x04:
                            {
                              // ENCODING.VPADAL_A1_Q
                              return 1786;
                              break;
                            }
                            case 0x05:
                            {
                              if (a & 0x80)
                              {
                                // ENCODING.VQNEG_A1_Q
                                return 1838;
                              }
                              else
                              {
                                // ENCODING.VQABS_A1_Q
                                return 1806;
                              }
                              break;
                            }
                            default: break;
                          }
                        }
                        else
                        {
                          // the following switch contains 4 case.
                          switch (b & 0x05)
                          {
                            case 0x00:
                            {
                              // ENCODING.VPADDL_A1_D
                              return 1793;
                              break;
                            }
                            case 0x01:
                            {
                              if (a & 0x80)
                              {
                                // ENCODING.AESMC_A1
                                return 980;
                              }
                              else
                              {
                                // ENCODING.AESE_A1
                                return 976;
                              }
                              break;
                            }
                            case 0x04:
                            {
                              // ENCODING.VPADAL_A1_D
                              return 1785;
                              break;
                            }
                            case 0x05:
                            {
                              if (a & 0x80)
                              {
                                // ENCODING.VQNEG_A1_D
                                return 1837;
                              }
                              else
                              {
                                // ENCODING.VQABS_A1_D
                                return 1805;
                              }
                              break;
                            }
                            default: break;
                          }
                        }
                        break;
                      }
                      case 0x01:
                      {
                        if (a & 0x40)
                        {
                          if (a & 0x80)
                          {
                            if (b & 0x01)
                            {
                              // ENCODING.VNEG_A1_Q
                              return 1742;
                            }
                            else
                            {
                              // ENCODING.SHA1H_A1
                              return 992;
                            }
                          }
                          else
                          {
                            if (b & 0x01)
                            {
                              // ENCODING.VABS_A1_Q
                              return 1028;
                            }
                            else
                            {
                              // ENCODING.VCLT_i_A1_Q
                              return 1142;
                            }
                          }
                        }
                        else
                        {
                          if (a & 0x80)
                          {
                            // ENCODING.VNEG_A1_D
                            return 1741;
                          }
                          else
                          {
                            if (b & 0x01)
                            {
                              // ENCODING.VABS_A1_D
                              return 1027;
                            }
                            else
                            {
                              // ENCODING.VCLT_i_A1_D
                              return 1141;
                            }
                          }
                        }
                        break;
                      }
                      case 0x02:
                      {
                        if (a & 0x80)
                        {
                          // the following switch contains 4 case.
                          switch (b & 0x05)
                          {
                            case 0x00:
                            {
                              // ENCODING.VQMOVN_A1
                              return 1833;
                              break;
                            }
                            case 0x01:
                            {
                              if (a & 0x40)
                              {
                                // ENCODING.SHA256SU0_A1
                                return 1006;
                              }
                              else
                              {
                                // ENCODING.SHA1SU1_A1
                                return 1000;
                              }
                              break;
                            }
                            case 0x04:
                            {
                              if (a & 0x40)
                              {
                                // ENCODING.VRINTM_asimd_A1_Q
                                return 1930;
                              }
                              else
                              {
                                // ENCODING.VRINTM_asimd_A1_D
                                return 1929;
                              }
                              break;
                            }
                            case 0x05:
                            {
                              if (a & 0x40)
                              {
                                // ENCODING.VRINTP_asimd_A1_Q
                                return 1950;
                              }
                              else
                              {
                                // ENCODING.VRINTP_asimd_A1_D
                                return 1949;
                              }
                              break;
                            }
                            default: break;
                          }
                        }
                        else
                        {
                          if (a & 0x40)
                          {
                            // ENCODING.VQMOVUN_A1
                            return 1834;
                          }
                          else
                          {
                            // the following switch contains 4 case.
                            switch (b & 0x05)
                            {
                              case 0x00:
                              {
                                // ENCODING.VMOVN_A1
                                return 1695;
                                break;
                              }
                              case 0x01:
                              {
                                // ENCODING.VSHLL_A2
                                return 2050;
                                break;
                              }
                              case 0x04:
                              {
                                // ENCODING.VCVT_hs_A1
                                return 1196;
                                break;
                              }
                              case 0x05:
                              {
                                // ENCODING.VCVT_sh_A1
                                return 1195;
                                break;
                              }
                              default: break;
                            }
                          }
                        }
                        break;
                      }
                      case 0x03:
                      {
                        if (a & 0x40)
                        {
                          if (b & 0x04)
                          {
                            // ENCODING.VCVT_is_A1_Q
                            return 1200;
                          }
                          else
                          {
                            if (b & 0x01)
                            {
                              // ENCODING.VCVTM_asimd_A1_Q
                              return 1258;
                            }
                            else
                            {
                              // ENCODING.VCVTP_asimd_A1_Q
                              return 1278;
                            }
                          }
                        }
                        else
                        {
                          if (b & 0x04)
                          {
                            // ENCODING.VCVT_is_A1_D
                            return 1199;
                          }
                          else
                          {
                            if (b & 0x01)
                            {
                              // ENCODING.VCVTM_asimd_A1_D
                              return 1257;
                            }
                            else
                            {
                              // ENCODING.VCVTP_asimd_A1_D
                              return 1277;
                            }
                          }
                        }
                        break;
                      }
                      default: break;
                    }
                  }
                  else
                  {
                    if (a & 0x40)
                    {
                      // the following switch contains 4 case.
                      switch (c & 0x03)
                      {
                        case 0x00:
                        {
                          if (a & 0x80)
                          {
                            // the following switch contains 3 case.
                            switch (b & 0x05)
                            {
                              case 0x00:
                              {
                                // ENCODING.VREV32_A1_Q
                                return 1908;
                                break;
                              }
                              case 0x04:
                              {
                                // ENCODING.VCLZ_A1_Q
                                return 1146;
                                break;
                              }
                              case 0x05:
                              {
                                // ENCODING.VMVN_r_A1_Q
                                return 1738;
                                break;
                              }
                              default: break;
                            }
                          }
                          else
                          {
                            // the following switch contains 4 case.
                            switch (b & 0x05)
                            {
                              case 0x00:
                              {
                                // ENCODING.VREV64_A1_Q
                                return 1912;
                                break;
                              }
                              case 0x01:
                              {
                                // ENCODING.VREV16_A1_Q
                                return 1904;
                                break;
                              }
                              case 0x04:
                              {
                                // ENCODING.VCLS_A1_Q
                                return 1138;
                                break;
                              }
                              case 0x05:
                              {
                                // ENCODING.VCNT_A1_Q
                                return 1186;
                                break;
                              }
                              default: break;
                            }
                          }
                          break;
                        }
                        case 0x01:
                        {
                          if (a & 0x80)
                          {
                            if (b & 0x01)
                            {
                              // ENCODING.VCLE_i_A1_Q
                              return 1134;
                            }
                            else
                            {
                              // ENCODING.VCGE_i_A1_Q
                              return 1110;
                            }
                          }
                          else
                          {
                            if (b & 0x01)
                            {
                              // ENCODING.VCEQ_i_A1_Q
                              return 1098;
                            }
                            else
                            {
                              // ENCODING.VCGT_i_A1_Q
                              return 1122;
                            }
                          }
                          break;
                        }
                        case 0x02:
                        {
                          if (a & 0x80)
                          {
                            // the following switch contains 4 case.
                            switch (b & 0x05)
                            {
                              case 0x00:
                              {
                                // ENCODING.VTRN_A1_Q
                                return 2245;
                                break;
                              }
                              case 0x01:
                              {
                                // ENCODING.VZIP_A1_Q
                                return 2277;
                                break;
                              }
                              case 0x04:
                              {
                                // ENCODING.VRINTX_asimd_A1_Q
                                return 1966;
                                break;
                              }
                              case 0x05:
                              {
                                // ENCODING.VRINTZ_asimd_A1_Q
                                return 1976;
                                break;
                              }
                              default: break;
                            }
                          }
                          else
                          {
                            // the following switch contains 3 case.
                            switch ((b & 0x05) - 1)
                            {
                              case 0x00:
                              {
                                // ENCODING.VUZP_A1_Q
                                return 2273;
                                break;
                              }
                              case 0x03:
                              {
                                // ENCODING.VRINTN_asimd_A1_Q
                                return 1940;
                                break;
                              }
                              case 0x04:
                              {
                                // ENCODING.VRINTA_asimd_A1_Q
                                return 1920;
                                break;
                              }
                              default: break;
                            }
                          }
                          break;
                        }
                        case 0x03:
                        {
                          if (b & 0x04)
                          {
                            if (a & 0x80)
                            {
                              // ENCODING.VRSQRTE_A1_Q
                              return 1996;
                            }
                            else
                            {
                              // ENCODING.VRECPE_A1_Q
                              return 1896;
                            }
                          }
                          else
                          {
                            if (b & 0x01)
                            {
                              // ENCODING.VCVTN_asimd_A1_Q
                              return 1268;
                            }
                            else
                            {
                              // ENCODING.VCVTA_asimd_A1_Q
                              return 1238;
                            }
                          }
                          break;
                        }
                        default: break;
                      }
                    }
                    else
                    {
                      // the following switch contains 4 case.
                      switch (c & 0x03)
                      {
                        case 0x00:
                        {
                          if (a & 0x80)
                          {
                            // the following switch contains 3 case.
                            switch (b & 0x05)
                            {
                              case 0x00:
                              {
                                // ENCODING.VREV32_A1_D
                                return 1907;
                                break;
                              }
                              case 0x04:
                              {
                                // ENCODING.VCLZ_A1_D
                                return 1145;
                                break;
                              }
                              case 0x05:
                              {
                                // ENCODING.VMVN_r_A1_D
                                return 1737;
                                break;
                              }
                              default: break;
                            }
                          }
                          else
                          {
                            // the following switch contains 4 case.
                            switch (b & 0x05)
                            {
                              case 0x00:
                              {
                                // ENCODING.VREV64_A1_D
                                return 1911;
                                break;
                              }
                              case 0x01:
                              {
                                // ENCODING.VREV16_A1_D
                                return 1903;
                                break;
                              }
                              case 0x04:
                              {
                                // ENCODING.VCLS_A1_D
                                return 1137;
                                break;
                              }
                              case 0x05:
                              {
                                // ENCODING.VCNT_A1_D
                                return 1185;
                                break;
                              }
                              default: break;
                            }
                          }
                          break;
                        }
                        case 0x01:
                        {
                          if (a & 0x80)
                          {
                            if (b & 0x01)
                            {
                              // ENCODING.VCLE_i_A1_D
                              return 1133;
                            }
                            else
                            {
                              // ENCODING.VCGE_i_A1_D
                              return 1109;
                            }
                          }
                          else
                          {
                            if (b & 0x01)
                            {
                              // ENCODING.VCEQ_i_A1_D
                              return 1097;
                            }
                            else
                            {
                              // ENCODING.VCGT_i_A1_D
                              return 1121;
                            }
                          }
                          break;
                        }
                        case 0x02:
                        {
                          if (a & 0x80)
                          {
                            // the following switch contains 4 case.
                            switch (b & 0x05)
                            {
                              case 0x00:
                              {
                                // ENCODING.VTRN_A1_D
                                return 2244;
                                break;
                              }
                              case 0x01:
                              {
                                // ENCODING.VZIP_A1_D
                                return 2276;
                                break;
                              }
                              case 0x04:
                              {
                                // ENCODING.VRINTX_asimd_A1_D
                                return 1965;
                                break;
                              }
                              case 0x05:
                              {
                                // ENCODING.VRINTZ_asimd_A1_D
                                return 1975;
                                break;
                              }
                              default: break;
                            }
                          }
                          else
                          {
                            // the following switch contains 3 case.
                            switch ((b & 0x05) - 1)
                            {
                              case 0x00:
                              {
                                // ENCODING.VUZP_A1_D
                                return 2272;
                                break;
                              }
                              case 0x03:
                              {
                                // ENCODING.VRINTN_asimd_A1_D
                                return 1939;
                                break;
                              }
                              case 0x04:
                              {
                                // ENCODING.VRINTA_asimd_A1_D
                                return 1919;
                                break;
                              }
                              default: break;
                            }
                          }
                          break;
                        }
                        case 0x03:
                        {
                          if (b & 0x04)
                          {
                            if (a & 0x80)
                            {
                              // ENCODING.VRSQRTE_A1_D
                              return 1995;
                            }
                            else
                            {
                              // ENCODING.VRECPE_A1_D
                              return 1895;
                            }
                          }
                          else
                          {
                            if (b & 0x01)
                            {
                              // ENCODING.VCVTN_asimd_A1_D
                              return 1267;
                            }
                            else
                            {
                              // ENCODING.VCVTA_asimd_A1_D
                              return 1237;
                            }
                          }
                          break;
                        }
                        default: break;
                      }
                    }
                  }
                }
              }
              else
              {
                // cond!=0b1111
                if ((opcode & 0xf0000000) != 0xf0000000)
                {
                  if (c & 0x40)
                  {
                    // ENCODING.RSCS_i_A1
                    return 509;
                  }
                  else
                  {
                    // ENCODING.ADCS_i_A1
                    return 2;
                  }
                }
                else
                {
                  if (a & 0x40)
                  {
                    // ENCODING.VEXT_A1_Q
                    return 1334;
                  }
                  else
                  {
                    // ENCODING.VEXT_A1_D
                    return 1333;
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        // conflicts:
        // ENCODING.ADR_A2               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0x1001111xxxxxxxxxxxxxxxx
        // ENCODING.AND_i_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0x000xxxxxxxxxxxxxxxxxxxx
        // ENCODING.ANDS_i_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0x001xxxxxxxxxxxxxxxxxxxx
        // ENCODING.CMN_i_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1x111xxxx0000xxxxxxxxxxxx
        // ENCODING.CMP_i_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1x101xxxx0000xxxxxxxxxxxx
        // ENCODING.CSDB_A1              : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1x01000001111000000010100
        // ENCODING.DBG_A1               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1x0100000111100001111xxxx
        // ENCODING.EOR_i_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0x010xxxxxxxxxxxxxxxxxxxx
        // ENCODING.EORS_i_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0x011xxxxxxxxxxxxxxxxxxxx
        // ENCODING.ESB_A1               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1x01000001111000000010000
        // ENCODING.MOV_i_A2             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1x000xxxxxxxxxxxxxxxxxxxx
        // ENCODING.MOVT_A1              : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1x100xxxxxxxxxxxxxxxxxxxx
        // ENCODING.MSR_i_A1_AS          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xx10xxxx1111xxxxxxxxxxxx
        // ENCODING.NOP_A1               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1x01000001111000000000000
        // ENCODING.RSB_i_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0x110xxxxxxxxxxxxxxxxxxxx
        // ENCODING.RSBS_i_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0x111xxxxxxxxxxxxxxxxxxxx
        // ENCODING.SEV_A1               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1x01000001111000000000100
        // ENCODING.SEVL_A1              : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1x01000001111000000000101
        // ENCODING.SUB_i_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0x100xxxxxxxxxxxxxxxxxxxx
        // ENCODING.SUBS_i_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0x101xxxxxxxxxxxxxxxxxxxx
        // ENCODING.SUB_SP_i_A1          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0x1001101xxxxxxxxxxxxxxxx
        // ENCODING.SUBS_SP_i_A1         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0x1011101xxxxxxxxxxxxxxxx
        // ENCODING.TEQ_i_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1x011xxxx0000xxxxxxxxxxxx
        // ENCODING.TSB_A1               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1x01000001111000000010010
        // ENCODING.TST_i_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1x001xxxx0000xxxxxxxxxxxx
        // ENCODING.WFE_A1               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1x01000001111000000000010
        // ENCODING.WFI_A1               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1x01000001111000000000011
        // ENCODING.YIELD_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1x01000001111000000000001
        // ENCODING.SHA1C_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx00xxxxxxxx1100xxx0xxxx
        // ENCODING.SHA1M_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx10xxxxxxxx1100xxx0xxxx
        // ENCODING.SHA1P_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx01xxxxxxxx1100xxx0xxxx
        // ENCODING.SHA1SU0_A1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx11xxxxxxxx1100xxx0xxxx
        // ENCODING.SHA256H_A1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx00xxxxxxxx1100xxx0xxxx
        // ENCODING.SHA256H2_A1          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx01xxxxxxxx1100xxx0xxxx
        // ENCODING.SHA256SU1_A1         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx10xxxxxxxx1100xxx0xxxx
        // ENCODING.VABA_A1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0111x0x1xxxx
        // ENCODING.VABA_A1_Q            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0111x1x1xxxx
        // ENCODING.VABD_f_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx1xxxxxxxxx1101x0x0xxxx
        // ENCODING.VABD_f_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx1xxxxxxxxx1101x1x0xxxx
        // ENCODING.VABD_i_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0111x0x0xxxx
        // ENCODING.VABD_i_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0111x1x0xxxx
        // ENCODING.VACGE_A1_D           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx0xxxxxxxxx1110x0x1xxxx
        // ENCODING.VACGE_A1_Q           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx0xxxxxxxxx1110x1x1xxxx
        // ENCODING.VACGT_A1_D           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx1xxxxxxxxx1110x0x1xxxx
        // ENCODING.VACGT_A1_Q           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx1xxxxxxxxx1110x1x1xxxx
        // ENCODING.VADD_f_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx0xxxxxxxxx1101x0x0xxxx
        // ENCODING.VADD_f_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx0xxxxxxxxx1101x1x0xxxx
        // ENCODING.VADD_i_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xxxxxxxxxxxx1000x0x0xxxx
        // ENCODING.VADD_i_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xxxxxxxxxxxx1000x1x0xxxx
        // ENCODING.VAND_r_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx00xxxxxxxx0001x0x1xxxx
        // ENCODING.VAND_r_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx00xxxxxxxx0001x1x1xxxx
        // ENCODING.VBIC_r_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx01xxxxxxxx0001x0x1xxxx
        // ENCODING.VBIC_r_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx01xxxxxxxx0001x1x1xxxx
        // ENCODING.VBIF_A1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xxxxxxxx0001x0x1xxxx
        // ENCODING.VBIF_A1_Q            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx11xxxxxxxx0001x1x1xxxx
        // ENCODING.VBIT_A1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx10xxxxxxxx0001x0x1xxxx
        // ENCODING.VBIT_A1_Q            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx10xxxxxxxx0001x1x1xxxx
        // ENCODING.VBSL_A1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx01xxxxxxxx0001x0x1xxxx
        // ENCODING.VBSL_A1_Q            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx01xxxxxxxx0001x1x1xxxx
        // ENCODING.VCEQ_r_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xxxxxxxxxxxx1000x0x1xxxx
        // ENCODING.VCEQ_r_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xxxxxxxxxxxx1000x1x1xxxx
        // ENCODING.VCEQ_r_A2_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx0xxxxxxxxx1110x0x0xxxx
        // ENCODING.VCEQ_r_A2_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx0xxxxxxxxx1110x1x0xxxx
        // ENCODING.VCGE_r_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0011x0x1xxxx
        // ENCODING.VCGE_r_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0011x1x1xxxx
        // ENCODING.VCGE_r_A2_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx0xxxxxxxxx1110x0x0xxxx
        // ENCODING.VCGE_r_A2_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx0xxxxxxxxx1110x1x0xxxx
        // ENCODING.VCGT_r_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0011x0x0xxxx
        // ENCODING.VCGT_r_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0011x1x0xxxx
        // ENCODING.VCGT_r_A2_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx1xxxxxxxxx1110x0x0xxxx
        // ENCODING.VCGT_r_A2_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx1xxxxxxxxx1110x1x0xxxx
        // ENCODING.VEOR_A1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx00xxxxxxxx0001x0x1xxxx
        // ENCODING.VEOR_A1_Q            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx00xxxxxxxx0001x1x1xxxx
        // ENCODING.VFMA_A1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx0xxxxxxxxx1100x0x1xxxx
        // ENCODING.VFMA_A1_Q            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx0xxxxxxxxx1100x1x1xxxx
        // ENCODING.VFMS_A1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx1xxxxxxxxx1100x0x1xxxx
        // ENCODING.VFMS_A1_Q            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx1xxxxxxxxx1100x1x1xxxx
        // ENCODING.VHADD_A1_D           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0000x0x0xxxx
        // ENCODING.VHADD_A1_Q           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0000x1x0xxxx
        // ENCODING.VHSUB_A1_D           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0010x0x0xxxx
        // ENCODING.VHSUB_A1_Q           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0010x1x0xxxx
        // ENCODING.VMAX_f_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx0xxxxxxxxx1111x0x0xxxx
        // ENCODING.VMAX_f_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx0xxxxxxxxx1111x1x0xxxx
        // ENCODING.VMAX_i_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0110x0x0xxxx
        // ENCODING.VMAX_i_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0110x1x0xxxx
        // ENCODING.VMAXNM_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx0xxxxxxxxx1111x0x1xxxx
        // ENCODING.VMAXNM_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx0xxxxxxxxx1111x1x1xxxx
        // ENCODING.VMIN_f_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx1xxxxxxxxx1111x0x0xxxx
        // ENCODING.VMIN_f_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx1xxxxxxxxx1111x1x0xxxx
        // ENCODING.VMIN_i_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0110x0x1xxxx
        // ENCODING.VMIN_i_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0110x1x1xxxx
        // ENCODING.VMINNM_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx1xxxxxxxxx1111x0x1xxxx
        // ENCODING.VMINNM_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx1xxxxxxxxx1111x1x1xxxx
        // ENCODING.VMLA_f_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx0xxxxxxxxx1101x0x1xxxx
        // ENCODING.VMLA_f_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx0xxxxxxxxx1101x1x1xxxx
        // ENCODING.VMLA_i_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xxxxxxxxxxxx1001x0x0xxxx
        // ENCODING.VMLA_i_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xxxxxxxxxxxx1001x1x0xxxx
        // ENCODING.VMLS_f_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx1xxxxxxxxx1101x0x1xxxx
        // ENCODING.VMLS_f_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx1xxxxxxxxx1101x1x1xxxx
        // ENCODING.VMLS_i_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xxxxxxxxxxxx1001x0x0xxxx
        // ENCODING.VMLS_i_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xxxxxxxxxxxx1001x1x0xxxx
        // ENCODING.VMUL_f_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx0xxxxxxxxx1101x0x1xxxx
        // ENCODING.VMUL_f_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx0xxxxxxxxx1101x1x1xxxx
        // ENCODING.VMUL_i_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx1001x0x1xxxx
        // ENCODING.VMUL_i_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx1001x1x1xxxx
        // ENCODING.VORN_r_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx11xxxxxxxx0001x0x1xxxx
        // ENCODING.VORN_r_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx11xxxxxxxx0001x1x1xxxx
        // ENCODING.VORR_r_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx10xxxxxxxx0001x0x1xxxx
        // ENCODING.VORR_r_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx10xxxxxxxx0001x1x1xxxx
        // ENCODING.VPADD_f_A1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx0xxxxxxxxx1101xxx0xxxx
        // ENCODING.VPADD_i_A1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xxxxxxxxxxxx1011xxx1xxxx
        // ENCODING.VPMAX_f_A1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx0xxxxxxxxx1111x0x0xxxx
        // ENCODING.VPMAX_i_A1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx1010x0x0xxxx
        // ENCODING.VPMIN_f_A1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx1xxxxxxxxx1111x0x0xxxx
        // ENCODING.VPMIN_i_A1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx1010x0x1xxxx
        // ENCODING.VQADD_A1_D           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0000x0x1xxxx
        // ENCODING.VQADD_A1_Q           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0000x1x1xxxx
        // ENCODING.VQDMULH_A1_D         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xxxxxxxxxxxx1011x0x0xxxx
        // ENCODING.VQDMULH_A1_Q         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xxxxxxxxxxxx1011x1x0xxxx
        // ENCODING.VQRDMLAH_A1_D        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xxxxxxxxxxxx1011x0x1xxxx
        // ENCODING.VQRDMLAH_A1_Q        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xxxxxxxxxxxx1011x1x1xxxx
        // ENCODING.VQRDMLSH_A1_D        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xxxxxxxxxxxx1100x0x1xxxx
        // ENCODING.VQRDMLSH_A1_Q        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xxxxxxxxxxxx1100x1x1xxxx
        // ENCODING.VQRDMULH_A1_D        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xxxxxxxxxxxx1011x0x0xxxx
        // ENCODING.VQRDMULH_A1_Q        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xxxxxxxxxxxx1011x1x0xxxx
        // ENCODING.VQRSHL_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0101x0x1xxxx
        // ENCODING.VQRSHL_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0101x1x1xxxx
        // ENCODING.VQSHL_r_A1_D         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0100x0x1xxxx
        // ENCODING.VQSHL_r_A1_Q         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0100x1x1xxxx
        // ENCODING.VQSUB_A1_D           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0010x0x1xxxx
        // ENCODING.VQSUB_A1_Q           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0010x1x1xxxx
        // ENCODING.VRECPS_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx0xxxxxxxxx1111x0x1xxxx
        // ENCODING.VRECPS_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx0xxxxxxxxx1111x1x1xxxx
        // ENCODING.VRHADD_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0001x0x0xxxx
        // ENCODING.VRHADD_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0001x1x0xxxx
        // ENCODING.VRSHL_A1_D           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0101x0x0xxxx
        // ENCODING.VRSHL_A1_Q           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0101x1x0xxxx
        // ENCODING.VRSQRTS_A1_D         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx1xxxxxxxxx1111x0x1xxxx
        // ENCODING.VRSQRTS_A1_Q         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx1xxxxxxxxx1111x1x1xxxx
        // ENCODING.VSHL_r_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0100x0x0xxxx
        // ENCODING.VSHL_r_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0100x1x0xxxx
        // ENCODING.VSUB_f_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx1xxxxxxxxx1101x0x0xxxx
        // ENCODING.VSUB_f_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx1xxxxxxxxx1101x1x0xxxx
        // ENCODING.VSUB_i_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xxxxxxxxxxxx1000x0x0xxxx
        // ENCODING.VSUB_i_A1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xxxxxxxxxxxx1000x1x0xxxx
        // ENCODING.VTST_A1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xxxxxxxxxxxx1000x0x1xxxx
        // ENCODING.VTST_A1_Q            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xxxxxxxxxxxx1000x1x1xxxx
        // cond!=0b1111
        if ((opcode & 0xf0000000) != 0xf0000000)
        {
          if (c & 0x10)
          {
            if (c & 0x20)
            {
              if (c & 0x40)
              {
                if (d & 0x01)
                {
                  // ENCODING.CMN_i_A1
                  return 114;
                }
                else
                {
                  // ENCODING.RSBS_i_A1
                  return 494;
                }
              }
              else
              {
                if (d & 0x01)
                {
                  // ENCODING.TEQ_i_A1
                  return 810;
                }
                else
                {
                  // ENCODING.EORS_i_A1
                  return 168;
                }
              }
            }
            else
            {
              if (c & 0x40)
              {
                if (d & 0x01)
                {
                  // ENCODING.CMP_i_A1
                  return 122;
                }
                else
                {
                  // Rn!=0b1101
                  if ((opcode & 0x000f0000) != 0x000d0000)
                  {
                    // ENCODING.SUBS_i_A1
                    return 760;
                  }
                  else
                  {
                    // ENCODING.SUBS_SP_i_A1
                    return 779;
                  }
                }
              }
              else
              {
                if (d & 0x01)
                {
                  // ENCODING.TST_i_A1
                  return 819;
                }
                else
                {
                  // ENCODING.ANDS_i_A1
                  return 58;
                }
              }
            }
          }
          else
          {
            if (c & 0x20)
            {
              if (d & 0x01)
              {
                // R:mask!=0b00000
                if ((opcode & 0x004f0000) != 0x00000000)
                {
                  // ENCODING.MSR_i_A1_AS
                  return 381;
                }
                else
                {
                  // the following switch contains 3 case.
                  switch (a & 0xf0)
                  {
                    case 0x00:
                    {
                      // the following switch contains 6 case.
                      switch (a & 0x07)
                      {
                        case 0x00:
                        {
                          // ENCODING.NOP_A1
                          return 403;
                          break;
                        }
                        case 0x01:
                        {
                          // ENCODING.YIELD_A1
                          return 908;
                          break;
                        }
                        case 0x02:
                        {
                          // ENCODING.WFE_A1
                          return 902;
                          break;
                        }
                        case 0x03:
                        {
                          // ENCODING.WFI_A1
                          return 905;
                          break;
                        }
                        case 0x04:
                        {
                          // ENCODING.SEV_A1
                          return 549;
                          break;
                        }
                        case 0x05:
                        {
                          // ENCODING.SEVL_A1
                          return 552;
                          break;
                        }
                        default: break;
                      }
                      break;
                    }
                    case 0x10:
                    {
                      // the following switch contains 3 case.
                      switch (a & 0x06)
                      {
                        case 0x00:
                        {
                          // ENCODING.ESB_A1
                          return 184;
                          break;
                        }
                        case 0x02:
                        {
                          // ENCODING.TSB_A1
                          return 817;
                          break;
                        }
                        case 0x04:
                        {
                          // ENCODING.CSDB_A1
                          return 156;
                          break;
                        }
                        default: break;
                      }
                      break;
                    }
                    case 0xf0:
                    {
                      // ENCODING.DBG_A1
                      return 158;
                      break;
                    }
                    default: break;
                  }
                }
              }
              else
              {
                if (c & 0x40)
                {
                  // ENCODING.RSB_i_A1
                  return 493;
                }
                else
                {
                  // ENCODING.EOR_i_A1
                  return 167;
                }
              }
            }
            else
            {
              if (c & 0x40)
              {
                if (d & 0x01)
                {
                  // ENCODING.MOVT_A1
                  return 369;
                }
                else
                {
                  // Rn!=0b11x1
                  if ((opcode & 0x000d0000) != 0x000d0000)
                  {
                    // ENCODING.SUB_i_A1
                    return 759;
                  }
                  else
                  {
                    if (c & 0x02)
                    {
                      // ENCODING.ADR_A2
                      return 53;
                    }
                    else
                    {
                      // ENCODING.SUB_SP_i_A1
                      return 778;
                    }
                  }
                }
              }
              else
              {
                if (d & 0x01)
                {
                  // ENCODING.MOV_i_A2
                  return 346;
                }
                else
                {
                  // ENCODING.AND_i_A1
                  return 57;
                }
              }
            }
          }
        }
        else
        {
          if (a & 0x10)
          {
            // the following switch contains 16 case.
            switch (b & 0x0f)
            {
              case 0x00:
              {
                if (a & 0x40)
                {
                  // ENCODING.VQADD_A1_Q
                  return 1810;
                }
                else
                {
                  // ENCODING.VQADD_A1_D
                  return 1809;
                }
                break;
              }
              case 0x01:
              {
                if (a & 0x40)
                {
                  if (c & 0x10)
                  {
                    if (c & 0x20)
                    {
                      if (d & 0x01)
                      {
                        // ENCODING.VBIF_A1_Q
                        return 1082;
                      }
                      else
                      {
                        // ENCODING.VORN_r_A1_Q
                        return 1770;
                      }
                    }
                    else
                    {
                      if (d & 0x01)
                      {
                        // ENCODING.VBSL_A1_Q
                        return 1090;
                      }
                      else
                      {
                        // ENCODING.VBIC_r_A1_Q
                        return 1078;
                      }
                    }
                  }
                  else
                  {
                    if (c & 0x20)
                    {
                      if (d & 0x01)
                      {
                        // ENCODING.VBIT_A1_Q
                        return 1086;
                      }
                      else
                      {
                        // ENCODING.VORR_r_A1_Q
                        return 1782;
                      }
                    }
                    else
                    {
                      if (d & 0x01)
                      {
                        // ENCODING.VEOR_A1_Q
                        return 1330;
                      }
                      else
                      {
                        // ENCODING.VAND_r_A1_Q
                        return 1066;
                      }
                    }
                  }
                }
                else
                {
                  if (c & 0x10)
                  {
                    if (c & 0x20)
                    {
                      if (d & 0x01)
                      {
                        // ENCODING.VBIF_A1_D
                        return 1081;
                      }
                      else
                      {
                        // ENCODING.VORN_r_A1_D
                        return 1769;
                      }
                    }
                    else
                    {
                      if (d & 0x01)
                      {
                        // ENCODING.VBSL_A1_D
                        return 1089;
                      }
                      else
                      {
                        // ENCODING.VBIC_r_A1_D
                        return 1077;
                      }
                    }
                  }
                  else
                  {
                    if (c & 0x20)
                    {
                      if (d & 0x01)
                      {
                        // ENCODING.VBIT_A1_D
                        return 1085;
                      }
                      else
                      {
                        // ENCODING.VORR_r_A1_D
                        return 1781;
                      }
                    }
                    else
                    {
                      if (d & 0x01)
                      {
                        // ENCODING.VEOR_A1_D
                        return 1329;
                      }
                      else
                      {
                        // ENCODING.VAND_r_A1_D
                        return 1065;
                      }
                    }
                  }
                }
                break;
              }
              case 0x02:
              {
                if (a & 0x40)
                {
                  // ENCODING.VQSUB_A1_Q
                  return 1890;
                }
                else
                {
                  // ENCODING.VQSUB_A1_D
                  return 1889;
                }
                break;
              }
              case 0x03:
              {
                if (a & 0x40)
                {
                  // ENCODING.VCGE_r_A1_Q
                  return 1114;
                }
                else
                {
                  // ENCODING.VCGE_r_A1_D
                  return 1113;
                }
                break;
              }
              case 0x04:
              {
                if (a & 0x40)
                {
                  // ENCODING.VQSHL_r_A1_Q
                  return 1882;
                }
                else
                {
                  // ENCODING.VQSHL_r_A1_D
                  return 1881;
                }
                break;
              }
              case 0x05:
              {
                if (a & 0x40)
                {
                  // ENCODING.VQRSHL_A1_Q
                  return 1866;
                }
                else
                {
                  // ENCODING.VQRSHL_A1_D
                  return 1865;
                }
                break;
              }
              case 0x06:
              {
                if (a & 0x40)
                {
                  // ENCODING.VMIN_i_A1_Q
                  return 1588;
                }
                else
                {
                  // ENCODING.VMIN_i_A1_D
                  return 1587;
                }
                break;
              }
              case 0x07:
              {
                if (a & 0x40)
                {
                  // ENCODING.VABA_A1_Q
                  return 1012;
                }
                else
                {
                  // ENCODING.VABA_A1_D
                  return 1011;
                }
                break;
              }
              case 0x08:
              {
                if (a & 0x40)
                {
                  if (d & 0x01)
                  {
                    // ENCODING.VCEQ_r_A1_Q
                    return 1102;
                  }
                  else
                  {
                    // ENCODING.VTST_A1_Q
                    return 2249;
                  }
                }
                else
                {
                  if (d & 0x01)
                  {
                    // ENCODING.VCEQ_r_A1_D
                    return 1101;
                  }
                  else
                  {
                    // ENCODING.VTST_A1_D
                    return 2248;
                  }
                }
                break;
              }
              case 0x09:
              {
                if (a & 0x40)
                {
                  // ENCODING.VMUL_i_A1_Q
                  return 1714;
                }
                else
                {
                  // ENCODING.VMUL_i_A1_D
                  return 1713;
                }
                break;
              }
              case 0x0a:
              {
                // ENCODING.VPMIN_i_A1
                return 1803;
                break;
              }
              case 0x0b:
              {
                if (d & 0x01)
                {
                  if (a & 0x40)
                  {
                    // ENCODING.VQRDMLAH_A1_Q
                    return 1842;
                  }
                  else
                  {
                    // ENCODING.VQRDMLAH_A1_D
                    return 1841;
                  }
                }
                else
                {
                  // ENCODING.VPADD_i_A1
                  return 1791;
                }
                break;
              }
              case 0x0c:
              {
                if (a & 0x40)
                {
                  if (d & 0x01)
                  {
                    // ENCODING.VQRDMLSH_A1_Q
                    return 1850;
                  }
                  else
                  {
                    if (c & 0x20)
                    {
                      // ENCODING.VFMS_A1_Q
                      return 1360;
                    }
                    else
                    {
                      // ENCODING.VFMA_A1_Q
                      return 1338;
                    }
                  }
                }
                else
                {
                  if (d & 0x01)
                  {
                    // ENCODING.VQRDMLSH_A1_D
                    return 1849;
                  }
                  else
                  {
                    if (c & 0x20)
                    {
                      // ENCODING.VFMS_A1_D
                      return 1359;
                    }
                    else
                    {
                      // ENCODING.VFMA_A1_D
                      return 1337;
                    }
                  }
                }
                break;
              }
              case 0x0d:
              {
                if (a & 0x40)
                {
                  if (c & 0x20)
                  {
                    // ENCODING.VMLS_f_A1_Q
                    return 1624;
                  }
                  else
                  {
                    if (d & 0x01)
                    {
                      // ENCODING.VMUL_f_A1_Q
                      return 1704;
                    }
                    else
                    {
                      // ENCODING.VMLA_f_A1_Q
                      return 1602;
                    }
                  }
                }
                else
                {
                  if (c & 0x20)
                  {
                    // ENCODING.VMLS_f_A1_D
                    return 1623;
                  }
                  else
                  {
                    if (d & 0x01)
                    {
                      // ENCODING.VMUL_f_A1_D
                      return 1703;
                    }
                    else
                    {
                      // ENCODING.VMLA_f_A1_D
                      return 1601;
                    }
                  }
                }
                break;
              }
              case 0x0e:
              {
                if (a & 0x40)
                {
                  if (c & 0x20)
                  {
                    // ENCODING.VACGT_A1_Q
                    return 1042;
                  }
                  else
                  {
                    // ENCODING.VACGE_A1_Q
                    return 1038;
                  }
                }
                else
                {
                  if (c & 0x20)
                  {
                    // ENCODING.VACGT_A1_D
                    return 1041;
                  }
                  else
                  {
                    // ENCODING.VACGE_A1_D
                    return 1037;
                  }
                }
                break;
              }
              case 0x0f:
              {
                if (a & 0x40)
                {
                  if (c & 0x20)
                  {
                    if (d & 0x01)
                    {
                      // ENCODING.VMINNM_A1_Q
                      return 1592;
                    }
                    else
                    {
                      // ENCODING.VRSQRTS_A1_Q
                      return 2000;
                    }
                  }
                  else
                  {
                    if (d & 0x01)
                    {
                      // ENCODING.VMAXNM_A1_Q
                      return 1574;
                    }
                    else
                    {
                      // ENCODING.VRECPS_A1_Q
                      return 1900;
                    }
                  }
                }
                else
                {
                  if (c & 0x20)
                  {
                    if (d & 0x01)
                    {
                      // ENCODING.VMINNM_A1_D
                      return 1591;
                    }
                    else
                    {
                      // ENCODING.VRSQRTS_A1_D
                      return 1999;
                    }
                  }
                  else
                  {
                    if (d & 0x01)
                    {
                      // ENCODING.VMAXNM_A1_D
                      return 1573;
                    }
                    else
                    {
                      // ENCODING.VRECPS_A1_D
                      return 1899;
                    }
                  }
                }
                break;
              }
              default: break;
            }
          }
          else
          {
            // the following switch contains 16 case.
            switch (b & 0x0f)
            {
              case 0x00:
              {
                if (a & 0x40)
                {
                  // ENCODING.VHADD_A1_Q
                  return 1390;
                }
                else
                {
                  // ENCODING.VHADD_A1_D
                  return 1389;
                }
                break;
              }
              case 0x01:
              {
                if (a & 0x40)
                {
                  // ENCODING.VRHADD_A1_Q
                  return 1916;
                }
                else
                {
                  // ENCODING.VRHADD_A1_D
                  return 1915;
                }
                break;
              }
              case 0x02:
              {
                if (a & 0x40)
                {
                  // ENCODING.VHSUB_A1_Q
                  return 1394;
                }
                else
                {
                  // ENCODING.VHSUB_A1_D
                  return 1393;
                }
                break;
              }
              case 0x03:
              {
                if (a & 0x40)
                {
                  // ENCODING.VCGT_r_A1_Q
                  return 1126;
                }
                else
                {
                  // ENCODING.VCGT_r_A1_D
                  return 1125;
                }
                break;
              }
              case 0x04:
              {
                if (a & 0x40)
                {
                  // ENCODING.VSHL_r_A1_Q
                  return 2046;
                }
                else
                {
                  // ENCODING.VSHL_r_A1_D
                  return 2045;
                }
                break;
              }
              case 0x05:
              {
                if (a & 0x40)
                {
                  // ENCODING.VRSHL_A1_Q
                  return 1986;
                }
                else
                {
                  // ENCODING.VRSHL_A1_D
                  return 1985;
                }
                break;
              }
              case 0x06:
              {
                if (a & 0x40)
                {
                  // ENCODING.VMAX_i_A1_Q
                  return 1570;
                }
                else
                {
                  // ENCODING.VMAX_i_A1_D
                  return 1569;
                }
                break;
              }
              case 0x07:
              {
                if (a & 0x40)
                {
                  // ENCODING.VABD_i_A1_Q
                  return 1022;
                }
                else
                {
                  // ENCODING.VABD_i_A1_D
                  return 1021;
                }
                break;
              }
              case 0x08:
              {
                if (a & 0x40)
                {
                  if (d & 0x01)
                  {
                    // ENCODING.VSUB_i_A1_Q
                    return 2223;
                  }
                  else
                  {
                    // ENCODING.VADD_i_A1_Q
                    return 1056;
                  }
                }
                else
                {
                  if (d & 0x01)
                  {
                    // ENCODING.VSUB_i_A1_D
                    return 2222;
                  }
                  else
                  {
                    // ENCODING.VADD_i_A1_D
                    return 1055;
                  }
                }
                break;
              }
              case 0x09:
              {
                if (a & 0x40)
                {
                  if (d & 0x01)
                  {
                    // ENCODING.VMLS_i_A1_Q
                    return 1634;
                  }
                  else
                  {
                    // ENCODING.VMLA_i_A1_Q
                    return 1612;
                  }
                }
                else
                {
                  if (d & 0x01)
                  {
                    // ENCODING.VMLS_i_A1_D
                    return 1633;
                  }
                  else
                  {
                    // ENCODING.VMLA_i_A1_D
                    return 1611;
                  }
                }
                break;
              }
              case 0x0a:
              {
                // ENCODING.VPMAX_i_A1
                return 1799;
                break;
              }
              case 0x0b:
              {
                if (a & 0x40)
                {
                  if (d & 0x01)
                  {
                    // ENCODING.VQRDMULH_A1_Q
                    return 1858;
                  }
                  else
                  {
                    // ENCODING.VQDMULH_A1_Q
                    return 1822;
                  }
                }
                else
                {
                  if (d & 0x01)
                  {
                    // ENCODING.VQRDMULH_A1_D
                    return 1857;
                  }
                  else
                  {
                    // ENCODING.VQDMULH_A1_D
                    return 1821;
                  }
                }
                break;
              }
              case 0x0c:
              {
                if (c & 0x10)
                {
                  if (c & 0x20)
                  {
                    // ENCODING.SHA1SU0_A1
                    return 998;
                  }
                  else
                  {
                    if (d & 0x01)
                    {
                      // ENCODING.SHA256H2_A1
                      return 1004;
                    }
                    else
                    {
                      // ENCODING.SHA1P_A1
                      return 996;
                    }
                  }
                }
                else
                {
                  if (c & 0x20)
                  {
                    if (d & 0x01)
                    {
                      // ENCODING.SHA256SU1_A1
                      return 1008;
                    }
                    else
                    {
                      // ENCODING.SHA1M_A1
                      return 994;
                    }
                  }
                  else
                  {
                    if (d & 0x01)
                    {
                      // ENCODING.SHA256H_A1
                      return 1002;
                    }
                    else
                    {
                      // ENCODING.SHA1C_A1
                      return 990;
                    }
                  }
                }
                break;
              }
              case 0x0d:
              {
                if (c & 0x20)
                {
                  if (a & 0x40)
                  {
                    if (d & 0x01)
                    {
                      // ENCODING.VABD_f_A1_Q
                      return 1018;
                    }
                    else
                    {
                      // ENCODING.VSUB_f_A1_Q
                      return 2213;
                    }
                  }
                  else
                  {
                    if (d & 0x01)
                    {
                      // ENCODING.VABD_f_A1_D
                      return 1017;
                    }
                    else
                    {
                      // ENCODING.VSUB_f_A1_D
                      return 2212;
                    }
                  }
                }
                else
                {
                  if (d & 0x01)
                  {
                    // ENCODING.VPADD_f_A1
                    return 1789;
                  }
                  else
                  {
                    if (a & 0x40)
                    {
                      // ENCODING.VADD_f_A1_Q
                      return 1046;
                    }
                    else
                    {
                      // ENCODING.VADD_f_A1_D
                      return 1045;
                    }
                  }
                }
                break;
              }
              case 0x0e:
              {
                if (a & 0x40)
                {
                  if (c & 0x20)
                  {
                    // ENCODING.VCGT_r_A2_Q
                    return 1128;
                  }
                  else
                  {
                    if (d & 0x01)
                    {
                      // ENCODING.VCGE_r_A2_Q
                      return 1116;
                    }
                    else
                    {
                      // ENCODING.VCEQ_r_A2_Q
                      return 1104;
                    }
                  }
                }
                else
                {
                  if (c & 0x20)
                  {
                    // ENCODING.VCGT_r_A2_D
                    return 1127;
                  }
                  else
                  {
                    if (d & 0x01)
                    {
                      // ENCODING.VCGE_r_A2_D
                      return 1115;
                    }
                    else
                    {
                      // ENCODING.VCEQ_r_A2_D
                      return 1103;
                    }
                  }
                }
                break;
              }
              case 0x0f:
              {
                if (a & 0x40)
                {
                  if (c & 0x20)
                  {
                    // ENCODING.VMIN_f_A1_Q
                    return 1584;
                  }
                  else
                  {
                    // ENCODING.VMAX_f_A1_Q
                    return 1566;
                  }
                }
                else
                {
                  if (c & 0x20)
                  {
                    if (d & 0x01)
                    {
                      // ENCODING.VPMIN_f_A1
                      return 1801;
                    }
                    else
                    {
                      // ENCODING.VMIN_f_A1_D
                      return 1583;
                    }
                  }
                  else
                  {
                    if (d & 0x01)
                    {
                      // ENCODING.VPMAX_f_A1
                      return 1797;
                    }
                    else
                    {
                      // ENCODING.VMAX_f_A1_D
                      return 1565;
                    }
                  }
                }
                break;
              }
              default: break;
            }
          }
        }
      }
      break;
    }
    case 0x04:
    {
      if (c & 0x10)
      {
        if (c & 0x40)
        {
          // conflicts:
          // ENCODING.CLREX_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx10x1x11111111000000011111
          // ENCODING.DMB_A1               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx10x1x1111111100000101xxxx
          // ENCODING.DSB_A1               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx10x1x1111111100000100xxxx
          // ENCODING.ISB_A1               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx10x1x1111111100000110xxxx
          // ENCODING.LDRB_i_A1_off        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xx0xxxxxxxxxxxxxxxxxxxxx
          // ENCODING.LDRB_i_A1_post       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xx0xxxxxxxxxxxxxxxxxxxxx
          // ENCODING.LDRB_i_A1_pre        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xx1xxxxxxxxxxxxxxxxxxxxx
          // ENCODING.LDRB_l_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx
          // ENCODING.LDRBT_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xx1xxxxxxxxxxxxxxxxxxxxx
          // ENCODING.PLD_i_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx0xxxxx1111xxxxxxxxxxxx
          // ENCODING.PLD_l_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx0x11111111xxxxxxxxxxxx
          // ENCODING.PLI_i_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx0xxxxx1111xxxxxxxxxxxx
          // ENCODING.PSSBB_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx10x1x11111111000001000100
          // ENCODING.SB_A1                : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx10x1x11111111000001110000
          // ENCODING.SSBB_A1              : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx10x1x11111111000001000000
          // Rn!=0b1111
          if ((opcode & 0x000f0000) != 0x000f0000)
          {
            if (c & 0x20)
            {
              if (d & 0x01)
              {
                // ENCODING.LDRB_i_A1_pre
                return 245;
              }
              else
              {
                // ENCODING.LDRBT_A1
                return 258;
              }
            }
            else
            {
              if (d & 0x01)
              {
                // cond!=0b1111
                if ((opcode & 0xf0000000) != 0xf0000000)
                {
                  // ENCODING.LDRB_i_A1_off
                  return 243;
                }
                else
                {
                  // ENCODING.PLD_i_A1
                  return 431;
                }
              }
              else
              {
                // cond!=0b1111
                if ((opcode & 0xf0000000) != 0xf0000000)
                {
                  // ENCODING.LDRB_i_A1_post
                  return 244;
                }
                else
                {
                  // ENCODING.PLI_i_A1
                  return 445;
                }
              }
            }
          }
          else
          {
            // cond!=0b1111
            if ((opcode & 0xf0000000) != 0xf0000000)
            {
              // P:W!=0b01
              if ((opcode & 0x01200000) != 0x00200000)
              {
                // ENCODING.LDRB_l_A1
                return 251;
              }
              else
              {
                // ENCODING.LDRBT_A1
                return 258;
              }
            }
            else
            {
              if (c & 0x20)
              {
                // the following switch contains 5 case.
                switch ((a & 0x70) - 16)
                {
                  case 0x00:
                  {
                    // ENCODING.CLREX_A1
                    return 110;
                    break;
                  }
                  case 0x30:
                  {
                    // option!=0b0x00
                    if ((opcode & 0x0000000b) != 0x00000000)
                    {
                      // ENCODING.DSB_A1
                      return 165;
                    }
                    else
                    {
                      if (a & 0x04)
                      {
                        // ENCODING.PSSBB_A1
                        return 453;
                      }
                      else
                      {
                        // ENCODING.SSBB_A1
                        return 657;
                      }
                    }
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.DMB_A1
                    return 163;
                    break;
                  }
                  case 0x50:
                  {
                    // ENCODING.ISB_A1
                    return 190;
                    break;
                  }
                  case 0x60:
                  {
                    // ENCODING.SB_A1
                    return 522;
                    break;
                  }
                  default: break;
                }
              }
              else
              {
                if (d & 0x01)
                {
                  // ENCODING.PLD_l_A1
                  return 437;
                }
                else
                {
                  // ENCODING.PLI_i_A1
                  return 445;
                }
              }
            }
          }
        }
        else
        {
          // conflicts:
          // ENCODING.LDR_i_A1_off         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xx0xxxxxxxxxxxxxxxxxxxxx
          // ENCODING.LDR_i_A1_post        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xx0xxxxxxxxxxxxxxxxxxxxx
          // ENCODING.LDR_i_A1_pre         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xx1xxxxxxxxxxxxxxxxxxxxx
          // ENCODING.LDR_l_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx
          // ENCODING.LDRT_A1              : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xx1xxxxxxxxxxxxxxxxxxxxx
          // ENCODING.PLDW_i_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xx0xxxxx1111xxxxxxxxxxxx
          // Rn!=0b1111
          if ((opcode & 0x000f0000) != 0x000f0000)
          {
            if (c & 0x20)
            {
              if (d & 0x01)
              {
                // ENCODING.LDR_i_A1_pre
                return 228;
              }
              else
              {
                // ENCODING.LDRT_A1
                return 332;
              }
            }
            else
            {
              if (d & 0x01)
              {
                // cond!=0b1111
                if ((opcode & 0xf0000000) != 0xf0000000)
                {
                  // ENCODING.LDR_i_A1_off
                  return 226;
                }
                else
                {
                  // ENCODING.PLDW_i_A1
                  return 432;
                }
              }
              else
              {
                // ENCODING.LDR_i_A1_post
                return 227;
              }
            }
          }
          else
          {
            // P:W!=0b01
            if ((opcode & 0x01200000) != 0x00200000)
            {
              // ENCODING.LDR_l_A1
              return 235;
            }
            else
            {
              // ENCODING.LDRT_A1
              return 332;
            }
          }
        }
      }
      else
      {
        if (c & 0x20)
        {
          if (d & 0x01)
          {
            if (c & 0x40)
            {
              // ENCODING.STRB_i_A1_pre
              return 709;
            }
            else
            {
              // ENCODING.STR_i_A1_pre
              return 695;
            }
          }
          else
          {
            // conflicts:
            // ENCODING.STRBT_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xxxxxxxxxxxxxxxxxxxxxx
            // ENCODING.STRT_A1              : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxxxxxxxxxxxxxxx
            // ENCODING.VLD1_1_A1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0000xxxx1111
            // ENCODING.VLD1_1_A1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0000xxxx1101
            // ENCODING.VLD1_1_A1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0000xxxxxxxx
            // ENCODING.VLD1_1_A2_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0100xxxx1111
            // ENCODING.VLD1_1_A2_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0100xxxx1101
            // ENCODING.VLD1_1_A2_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0100xxxxxxxx
            // ENCODING.VLD1_1_A3_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx1000xxxx1111
            // ENCODING.VLD1_1_A3_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx1000xxxx1101
            // ENCODING.VLD1_1_A3_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx1000xxxxxxxx
            // ENCODING.VLD1_a_A1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx1100xxxx1111
            // ENCODING.VLD1_a_A1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx1100xxxx1101
            // ENCODING.VLD1_a_A1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx1100xxxxxxxx
            // ENCODING.VLD1_m_A1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx0111xxxx1111
            // ENCODING.VLD1_m_A1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx0111xxxx1101
            // ENCODING.VLD1_m_A1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx0111xxxxxxxx
            // ENCODING.VLD1_m_A2_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx1010xxxx1111
            // ENCODING.VLD1_m_A2_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx1010xxxx1101
            // ENCODING.VLD1_m_A2_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx1010xxxxxxxx
            // ENCODING.VLD1_m_A3_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx0110xxxx1111
            // ENCODING.VLD1_m_A3_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx0110xxxx1101
            // ENCODING.VLD1_m_A3_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx0110xxxxxxxx
            // ENCODING.VLD1_m_A4_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx0010xxxx1111
            // ENCODING.VLD1_m_A4_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx0010xxxx1101
            // ENCODING.VLD1_m_A4_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx0010xxxxxxxx
            // ENCODING.VLD2_1_A1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0001xxxx1111
            // ENCODING.VLD2_1_A1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0001xxxx1101
            // ENCODING.VLD2_1_A1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0001xxxxxxxx
            // ENCODING.VLD2_1_A2_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0101xxxx1111
            // ENCODING.VLD2_1_A2_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0101xxxx1101
            // ENCODING.VLD2_1_A2_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0101xxxxxxxx
            // ENCODING.VLD2_1_A3_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx1001xxxx1111
            // ENCODING.VLD2_1_A3_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx1001xxxx1101
            // ENCODING.VLD2_1_A3_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx1001xxxxxxxx
            // ENCODING.VLD2_a_A1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx1101xxxx1111
            // ENCODING.VLD2_a_A1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx1101xxxx1101
            // ENCODING.VLD2_a_A1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx1101xxxxxxxx
            // ENCODING.VLD2_m_A1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx100xxxxx1111
            // ENCODING.VLD2_m_A1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx100xxxxx1101
            // ENCODING.VLD2_m_A1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx100xxxxxxxxx
            // ENCODING.VLD2_m_A2_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx0011xxxx1111
            // ENCODING.VLD2_m_A2_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx0011xxxx1101
            // ENCODING.VLD2_m_A2_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx0011xxxxxxxx
            // ENCODING.VLD3_1_A1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0010xxxx1111
            // ENCODING.VLD3_1_A1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0010xxxx1101
            // ENCODING.VLD3_1_A1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0010xxxxxxxx
            // ENCODING.VLD3_1_A2_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0110xxxx1111
            // ENCODING.VLD3_1_A2_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0110xxxx1101
            // ENCODING.VLD3_1_A2_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0110xxxxxxxx
            // ENCODING.VLD3_1_A3_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx1010xxxx1111
            // ENCODING.VLD3_1_A3_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx1010xxxx1101
            // ENCODING.VLD3_1_A3_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx1010xxxxxxxx
            // ENCODING.VLD3_a_A1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx1110xxx01111
            // ENCODING.VLD3_a_A1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx1110xxx01101
            // ENCODING.VLD3_a_A1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx1110xxx0xxxx
            // ENCODING.VLD3_m_A1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx010xxxxx1111
            // ENCODING.VLD3_m_A1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx010xxxxx1101
            // ENCODING.VLD3_m_A1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx010xxxxxxxxx
            // ENCODING.VLD4_1_A1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0011xxxx1111
            // ENCODING.VLD4_1_A1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0011xxxx1101
            // ENCODING.VLD4_1_A1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0011xxxxxxxx
            // ENCODING.VLD4_1_A2_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0111xxxx1111
            // ENCODING.VLD4_1_A2_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0111xxxx1101
            // ENCODING.VLD4_1_A2_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0111xxxxxxxx
            // ENCODING.VLD4_1_A3_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx1011xxxx1111
            // ENCODING.VLD4_1_A3_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx1011xxxx1101
            // ENCODING.VLD4_1_A3_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx1011xxxxxxxx
            // ENCODING.VLD4_a_A1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx1111xxxx1111
            // ENCODING.VLD4_a_A1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx1111xxxx1101
            // ENCODING.VLD4_a_A1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx1111xxxxxxxx
            // ENCODING.VLD4_m_A1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx000xxxxx1111
            // ENCODING.VLD4_m_A1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx000xxxxx1101
            // ENCODING.VLD4_m_A1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx000xxxxxxxxx
            // Rm!=0b11x1
            if ((opcode & 0x0000000d) != 0x0000000d)
            {
              // cond!=0b1111
              if ((opcode & 0xf0000000) != 0xf0000000)
              {
                if (c & 0x40)
                {
                  // ENCODING.STRBT_A1
                  return 720;
                }
                else
                {
                  // ENCODING.STRT_A1
                  return 756;
                }
              }
              else
              {
                if (b & 0x02)
                {
                  if (b & 0x01)
                  {
                    if (b & 0x04)
                    {
                      if (b & 0x08)
                      {
                        // ENCODING.VLD4_a_A1_postr
                        return 1535;
                      }
                      else
                      {
                        if (c & 0x80)
                        {
                          // ENCODING.VLD4_1_A2_postr
                          return 1520;
                        }
                        else
                        {
                          // ENCODING.VLD1_m_A1_postr
                          return 1427;
                        }
                      }
                    }
                    else
                    {
                      if (b & 0x08)
                      {
                        // ENCODING.VLD4_1_A3_postr
                        return 1523;
                      }
                      else
                      {
                        if (c & 0x80)
                        {
                          // ENCODING.VLD4_1_A1_postr
                          return 1517;
                        }
                        else
                        {
                          // ENCODING.VLD2_m_A2_postr
                          return 1478;
                        }
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x04)
                    {
                      if (b & 0x08)
                      {
                        // ENCODING.VLD3_a_A1_postr
                        return 1505;
                      }
                      else
                      {
                        if (c & 0x80)
                        {
                          // ENCODING.VLD3_1_A2_postr
                          return 1490;
                        }
                        else
                        {
                          // ENCODING.VLD1_m_A3_postr
                          return 1433;
                        }
                      }
                    }
                    else
                    {
                      if (b & 0x08)
                      {
                        if (c & 0x80)
                        {
                          // ENCODING.VLD3_1_A3_postr
                          return 1493;
                        }
                        else
                        {
                          // ENCODING.VLD1_m_A2_postr
                          return 1430;
                        }
                      }
                      else
                      {
                        if (c & 0x80)
                        {
                          // ENCODING.VLD3_1_A1_postr
                          return 1487;
                        }
                        else
                        {
                          // ENCODING.VLD1_m_A4_postr
                          return 1436;
                        }
                      }
                    }
                  }
                }
                else
                {
                  if (b & 0x04)
                  {
                    if (b & 0x08)
                    {
                      if (b & 0x01)
                      {
                        // ENCODING.VLD2_a_A1_postr
                        return 1469;
                      }
                      else
                      {
                        // ENCODING.VLD1_a_A1_postr
                        return 1421;
                      }
                    }
                    else
                    {
                      if (c & 0x80)
                      {
                        if (b & 0x01)
                        {
                          // ENCODING.VLD2_1_A2_postr
                          return 1454;
                        }
                        else
                        {
                          // ENCODING.VLD1_1_A2_postr
                          return 1406;
                        }
                      }
                      else
                      {
                        // ENCODING.VLD3_m_A1_postr
                        return 1511;
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x08)
                    {
                      if (c & 0x80)
                      {
                        if (b & 0x01)
                        {
                          // ENCODING.VLD2_1_A3_postr
                          return 1457;
                        }
                        else
                        {
                          // ENCODING.VLD1_1_A3_postr
                          return 1409;
                        }
                      }
                      else
                      {
                        // ENCODING.VLD2_m_A1_postr
                        return 1475;
                      }
                    }
                    else
                    {
                      if (c & 0x80)
                      {
                        if (b & 0x01)
                        {
                          // ENCODING.VLD2_1_A1_postr
                          return 1451;
                        }
                        else
                        {
                          // ENCODING.VLD1_1_A1_postr
                          return 1403;
                        }
                      }
                      else
                      {
                        // ENCODING.VLD4_m_A1_postr
                        return 1541;
                      }
                    }
                  }
                }
              }
            }
            else
            {
              // cond!=0b1111
              if ((opcode & 0xf0000000) != 0xf0000000)
              {
                if (c & 0x40)
                {
                  // ENCODING.STRBT_A1
                  return 720;
                }
                else
                {
                  // ENCODING.STRT_A1
                  return 756;
                }
              }
              else
              {
                if (a & 0x02)
                {
                  if (b & 0x02)
                  {
                    if (b & 0x01)
                    {
                      if (b & 0x04)
                      {
                        if (b & 0x08)
                        {
                          // ENCODING.VLD4_a_A1_nowb
                          return 1533;
                        }
                        else
                        {
                          if (c & 0x80)
                          {
                            // ENCODING.VLD4_1_A2_nowb
                            return 1518;
                          }
                          else
                          {
                            // ENCODING.VLD1_m_A1_nowb
                            return 1425;
                          }
                        }
                      }
                      else
                      {
                        if (b & 0x08)
                        {
                          // ENCODING.VLD4_1_A3_nowb
                          return 1521;
                        }
                        else
                        {
                          if (c & 0x80)
                          {
                            // ENCODING.VLD4_1_A1_nowb
                            return 1515;
                          }
                          else
                          {
                            // ENCODING.VLD2_m_A2_nowb
                            return 1476;
                          }
                        }
                      }
                    }
                    else
                    {
                      if (b & 0x04)
                      {
                        if (b & 0x08)
                        {
                          // ENCODING.VLD3_a_A1_nowb
                          return 1503;
                        }
                        else
                        {
                          if (c & 0x80)
                          {
                            // ENCODING.VLD3_1_A2_nowb
                            return 1488;
                          }
                          else
                          {
                            // ENCODING.VLD1_m_A3_nowb
                            return 1431;
                          }
                        }
                      }
                      else
                      {
                        if (b & 0x08)
                        {
                          if (c & 0x80)
                          {
                            // ENCODING.VLD3_1_A3_nowb
                            return 1491;
                          }
                          else
                          {
                            // ENCODING.VLD1_m_A2_nowb
                            return 1428;
                          }
                        }
                        else
                        {
                          if (c & 0x80)
                          {
                            // ENCODING.VLD3_1_A1_nowb
                            return 1485;
                          }
                          else
                          {
                            // ENCODING.VLD1_m_A4_nowb
                            return 1434;
                          }
                        }
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x04)
                    {
                      if (b & 0x08)
                      {
                        if (b & 0x01)
                        {
                          // ENCODING.VLD2_a_A1_nowb
                          return 1467;
                        }
                        else
                        {
                          // ENCODING.VLD1_a_A1_nowb
                          return 1419;
                        }
                      }
                      else
                      {
                        if (c & 0x80)
                        {
                          if (b & 0x01)
                          {
                            // ENCODING.VLD2_1_A2_nowb
                            return 1452;
                          }
                          else
                          {
                            // ENCODING.VLD1_1_A2_nowb
                            return 1404;
                          }
                        }
                        else
                        {
                          // ENCODING.VLD3_m_A1_nowb
                          return 1509;
                        }
                      }
                    }
                    else
                    {
                      if (b & 0x08)
                      {
                        if (c & 0x80)
                        {
                          if (b & 0x01)
                          {
                            // ENCODING.VLD2_1_A3_nowb
                            return 1455;
                          }
                          else
                          {
                            // ENCODING.VLD1_1_A3_nowb
                            return 1407;
                          }
                        }
                        else
                        {
                          // ENCODING.VLD2_m_A1_nowb
                          return 1473;
                        }
                      }
                      else
                      {
                        if (c & 0x80)
                        {
                          if (b & 0x01)
                          {
                            // ENCODING.VLD2_1_A1_nowb
                            return 1449;
                          }
                          else
                          {
                            // ENCODING.VLD1_1_A1_nowb
                            return 1401;
                          }
                        }
                        else
                        {
                          // ENCODING.VLD4_m_A1_nowb
                          return 1539;
                        }
                      }
                    }
                  }
                }
                else
                {
                  if (b & 0x02)
                  {
                    if (b & 0x01)
                    {
                      if (b & 0x04)
                      {
                        if (b & 0x08)
                        {
                          // ENCODING.VLD4_a_A1_posti
                          return 1534;
                        }
                        else
                        {
                          if (c & 0x80)
                          {
                            // ENCODING.VLD4_1_A2_posti
                            return 1519;
                          }
                          else
                          {
                            // ENCODING.VLD1_m_A1_posti
                            return 1426;
                          }
                        }
                      }
                      else
                      {
                        if (b & 0x08)
                        {
                          // ENCODING.VLD4_1_A3_posti
                          return 1522;
                        }
                        else
                        {
                          if (c & 0x80)
                          {
                            // ENCODING.VLD4_1_A1_posti
                            return 1516;
                          }
                          else
                          {
                            // ENCODING.VLD2_m_A2_posti
                            return 1477;
                          }
                        }
                      }
                    }
                    else
                    {
                      if (b & 0x04)
                      {
                        if (b & 0x08)
                        {
                          // ENCODING.VLD3_a_A1_posti
                          return 1504;
                        }
                        else
                        {
                          if (c & 0x80)
                          {
                            // ENCODING.VLD3_1_A2_posti
                            return 1489;
                          }
                          else
                          {
                            // ENCODING.VLD1_m_A3_posti
                            return 1432;
                          }
                        }
                      }
                      else
                      {
                        if (b & 0x08)
                        {
                          if (c & 0x80)
                          {
                            // ENCODING.VLD3_1_A3_posti
                            return 1492;
                          }
                          else
                          {
                            // ENCODING.VLD1_m_A2_posti
                            return 1429;
                          }
                        }
                        else
                        {
                          if (c & 0x80)
                          {
                            // ENCODING.VLD3_1_A1_posti
                            return 1486;
                          }
                          else
                          {
                            // ENCODING.VLD1_m_A4_posti
                            return 1435;
                          }
                        }
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x04)
                    {
                      if (b & 0x08)
                      {
                        if (b & 0x01)
                        {
                          // ENCODING.VLD2_a_A1_posti
                          return 1468;
                        }
                        else
                        {
                          // ENCODING.VLD1_a_A1_posti
                          return 1420;
                        }
                      }
                      else
                      {
                        if (c & 0x80)
                        {
                          if (b & 0x01)
                          {
                            // ENCODING.VLD2_1_A2_posti
                            return 1453;
                          }
                          else
                          {
                            // ENCODING.VLD1_1_A2_posti
                            return 1405;
                          }
                        }
                        else
                        {
                          // ENCODING.VLD3_m_A1_posti
                          return 1510;
                        }
                      }
                    }
                    else
                    {
                      if (b & 0x08)
                      {
                        if (c & 0x80)
                        {
                          if (b & 0x01)
                          {
                            // ENCODING.VLD2_1_A3_posti
                            return 1456;
                          }
                          else
                          {
                            // ENCODING.VLD1_1_A3_posti
                            return 1408;
                          }
                        }
                        else
                        {
                          // ENCODING.VLD2_m_A1_posti
                          return 1474;
                        }
                      }
                      else
                      {
                        if (c & 0x80)
                        {
                          if (b & 0x01)
                          {
                            // ENCODING.VLD2_1_A1_posti
                            return 1450;
                          }
                          else
                          {
                            // ENCODING.VLD1_1_A1_posti
                            return 1402;
                          }
                        }
                        else
                        {
                          // ENCODING.VLD4_m_A1_posti
                          return 1540;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          if (d & 0x01)
          {
            if (c & 0x40)
            {
              // ENCODING.STRB_i_A1_off
              return 707;
            }
            else
            {
              // ENCODING.STR_i_A1_off
              return 693;
            }
          }
          else
          {
            // conflicts:
            // ENCODING.STR_i_A1_post        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxxxxxxxxxxxxxxx
            // ENCODING.STRB_i_A1_post       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xxxxxxxxxxxxxxxxxxxxxx
            // ENCODING.VST4_1_A3_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx1011xxxx1111
            // ENCODING.VST1_1_A1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0000xxxx1111
            // ENCODING.VST1_1_A1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0000xxxx1101
            // ENCODING.VST1_1_A1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0000xxxxxxxx
            // ENCODING.VST1_1_A2_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0100xxxx1111
            // ENCODING.VST1_1_A2_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0100xxxx1101
            // ENCODING.VST1_1_A2_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0100xxxxxxxx
            // ENCODING.VST1_1_A3_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx1000xxxx1111
            // ENCODING.VST1_1_A3_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx1000xxxx1101
            // ENCODING.VST1_1_A3_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx1000xxxxxxxx
            // ENCODING.VST1_m_A1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx0111xxxx1111
            // ENCODING.VST1_m_A1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx0111xxxx1101
            // ENCODING.VST1_m_A1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx0111xxxxxxxx
            // ENCODING.VST1_m_A2_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx1010xxxx1111
            // ENCODING.VST1_m_A2_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx1010xxxx1101
            // ENCODING.VST1_m_A2_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx1010xxxxxxxx
            // ENCODING.VST1_m_A3_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx0110xxxx1111
            // ENCODING.VST1_m_A3_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx0110xxxx1101
            // ENCODING.VST1_m_A3_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx0110xxxxxxxx
            // ENCODING.VST1_m_A4_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx0010xxxx1111
            // ENCODING.VST1_m_A4_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx0010xxxx1101
            // ENCODING.VST1_m_A4_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx0010xxxxxxxx
            // ENCODING.VST2_1_A1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0001xxxx1111
            // ENCODING.VST2_1_A1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0001xxxx1101
            // ENCODING.VST2_1_A1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0001xxxxxxxx
            // ENCODING.VST2_1_A2_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0101xxxx1111
            // ENCODING.VST2_1_A2_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0101xxxx1101
            // ENCODING.VST2_1_A2_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0101xxxxxxxx
            // ENCODING.VST2_1_A3_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx1001xxxx1111
            // ENCODING.VST2_1_A3_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx1001xxxx1101
            // ENCODING.VST2_1_A3_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx1001xxxxxxxx
            // ENCODING.VST2_m_A1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx100xxxxx1111
            // ENCODING.VST2_m_A1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx100xxxxx1101
            // ENCODING.VST2_m_A1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx100xxxxxxxxx
            // ENCODING.VST2_m_A2_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx0011xxxx1111
            // ENCODING.VST2_m_A2_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx0011xxxx1101
            // ENCODING.VST2_m_A2_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx0011xxxxxxxx
            // ENCODING.VST3_1_A1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0010xxxx1111
            // ENCODING.VST3_1_A1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0010xxxx1101
            // ENCODING.VST3_1_A1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0010xxxxxxxx
            // ENCODING.VST3_1_A2_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0110xxxx1111
            // ENCODING.VST3_1_A2_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0110xxxx1101
            // ENCODING.VST3_1_A2_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0110xxxxxxxx
            // ENCODING.VST3_1_A3_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx1010xxxx1111
            // ENCODING.VST3_1_A3_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx1010xxxx1101
            // ENCODING.VST3_1_A3_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx1010xxxxxxxx
            // ENCODING.VST3_m_A1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx010xxxxx1111
            // ENCODING.VST3_m_A1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx010xxxxx1101
            // ENCODING.VST3_m_A1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx010xxxxxxxxx
            // ENCODING.VST4_1_A1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0011xxxx1111
            // ENCODING.VST4_1_A1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0011xxxx1101
            // ENCODING.VST4_1_A1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0011xxxxxxxx
            // ENCODING.VST4_1_A2_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0111xxxx1111
            // ENCODING.VST4_1_A2_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0111xxxx1101
            // ENCODING.VST4_1_A2_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx0111xxxxxxxx
            // ENCODING.VST4_1_A3_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx1011xxxx1101
            // ENCODING.VST4_1_A3_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx1xxxxxxxxxxx1011xxxxxxxx
            // ENCODING.VST4_m_A1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx000xxxxx1111
            // ENCODING.VST4_m_A1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx000xxxxx1101
            // ENCODING.VST4_m_A1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxx000xxxxxxxxx
            // Rm!=0b11x1
            if ((opcode & 0x0000000d) != 0x0000000d)
            {
              // cond!=0b1111
              if ((opcode & 0xf0000000) != 0xf0000000)
              {
                if (c & 0x40)
                {
                  // ENCODING.STRB_i_A1_post
                  return 708;
                }
                else
                {
                  // ENCODING.STR_i_A1_post
                  return 694;
                }
              }
              else
              {
                if (b & 0x02)
                {
                  if (b & 0x01)
                  {
                    if (b & 0x04)
                    {
                      if (c & 0x80)
                      {
                        // ENCODING.VST4_1_A2_postr
                        return 2180;
                      }
                      else
                      {
                        // ENCODING.VST1_m_A1_postr
                        return 2099;
                      }
                    }
                    else
                    {
                      if (b & 0x08)
                      {
                        // ENCODING.VST4_1_A3_postr
                        return 2182;
                      }
                      else
                      {
                        if (c & 0x80)
                        {
                          // ENCODING.VST4_1_A1_postr
                          return 2177;
                        }
                        else
                        {
                          // ENCODING.VST2_m_A2_postr
                          return 2144;
                        }
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x04)
                    {
                      if (c & 0x80)
                      {
                        // ENCODING.VST3_1_A2_postr
                        return 2156;
                      }
                      else
                      {
                        // ENCODING.VST1_m_A3_postr
                        return 2105;
                      }
                    }
                    else
                    {
                      if (b & 0x08)
                      {
                        if (c & 0x80)
                        {
                          // ENCODING.VST3_1_A3_postr
                          return 2159;
                        }
                        else
                        {
                          // ENCODING.VST1_m_A2_postr
                          return 2102;
                        }
                      }
                      else
                      {
                        if (c & 0x80)
                        {
                          // ENCODING.VST3_1_A1_postr
                          return 2153;
                        }
                        else
                        {
                          // ENCODING.VST1_m_A4_postr
                          return 2108;
                        }
                      }
                    }
                  }
                }
                else
                {
                  if (b & 0x04)
                  {
                    if (c & 0x80)
                    {
                      if (b & 0x01)
                      {
                        // ENCODING.VST2_1_A2_postr
                        return 2126;
                      }
                      else
                      {
                        // ENCODING.VST1_1_A2_postr
                        return 2084;
                      }
                    }
                    else
                    {
                      // ENCODING.VST3_m_A1_postr
                      return 2171;
                    }
                  }
                  else
                  {
                    if (b & 0x08)
                    {
                      if (c & 0x80)
                      {
                        if (b & 0x01)
                        {
                          // ENCODING.VST2_1_A3_postr
                          return 2129;
                        }
                        else
                        {
                          // ENCODING.VST1_1_A3_postr
                          return 2087;
                        }
                      }
                      else
                      {
                        // ENCODING.VST2_m_A1_postr
                        return 2141;
                      }
                    }
                    else
                    {
                      if (c & 0x80)
                      {
                        if (b & 0x01)
                        {
                          // ENCODING.VST2_1_A1_postr
                          return 2123;
                        }
                        else
                        {
                          // ENCODING.VST1_1_A1_postr
                          return 2081;
                        }
                      }
                      else
                      {
                        // ENCODING.VST4_m_A1_postr
                        return 2194;
                      }
                    }
                  }
                }
              }
            }
            else
            {
              // cond!=0b1111
              if ((opcode & 0xf0000000) != 0xf0000000)
              {
                if (c & 0x40)
                {
                  // ENCODING.STRB_i_A1_post
                  return 708;
                }
                else
                {
                  // ENCODING.STR_i_A1_post
                  return 694;
                }
              }
              else
              {
                if (a & 0x02)
                {
                  if (b & 0x02)
                  {
                    if (b & 0x01)
                    {
                      if (b & 0x04)
                      {
                        if (c & 0x80)
                        {
                          // ENCODING.VST4_1_A2_nowb
                          return 2178;
                        }
                        else
                        {
                          // ENCODING.VST1_m_A1_nowb
                          return 2097;
                        }
                      }
                      else
                      {
                        if (b & 0x08)
                        {
                          // ENCODING.VST4_1_A3_nowb
                          return 1010;
                        }
                        else
                        {
                          if (c & 0x80)
                          {
                            // ENCODING.VST4_1_A1_nowb
                            return 2175;
                          }
                          else
                          {
                            // ENCODING.VST2_m_A2_nowb
                            return 2142;
                          }
                        }
                      }
                    }
                    else
                    {
                      if (b & 0x04)
                      {
                        if (c & 0x80)
                        {
                          // ENCODING.VST3_1_A2_nowb
                          return 2154;
                        }
                        else
                        {
                          // ENCODING.VST1_m_A3_nowb
                          return 2103;
                        }
                      }
                      else
                      {
                        if (b & 0x08)
                        {
                          if (c & 0x80)
                          {
                            // ENCODING.VST3_1_A3_nowb
                            return 2157;
                          }
                          else
                          {
                            // ENCODING.VST1_m_A2_nowb
                            return 2100;
                          }
                        }
                        else
                        {
                          if (c & 0x80)
                          {
                            // ENCODING.VST3_1_A1_nowb
                            return 2151;
                          }
                          else
                          {
                            // ENCODING.VST1_m_A4_nowb
                            return 2106;
                          }
                        }
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x04)
                    {
                      if (c & 0x80)
                      {
                        if (b & 0x01)
                        {
                          // ENCODING.VST2_1_A2_nowb
                          return 2124;
                        }
                        else
                        {
                          // ENCODING.VST1_1_A2_nowb
                          return 2082;
                        }
                      }
                      else
                      {
                        // ENCODING.VST3_m_A1_nowb
                        return 2169;
                      }
                    }
                    else
                    {
                      if (b & 0x08)
                      {
                        if (c & 0x80)
                        {
                          if (b & 0x01)
                          {
                            // ENCODING.VST2_1_A3_nowb
                            return 2127;
                          }
                          else
                          {
                            // ENCODING.VST1_1_A3_nowb
                            return 2085;
                          }
                        }
                        else
                        {
                          // ENCODING.VST2_m_A1_nowb
                          return 2139;
                        }
                      }
                      else
                      {
                        if (c & 0x80)
                        {
                          if (b & 0x01)
                          {
                            // ENCODING.VST2_1_A1_nowb
                            return 2121;
                          }
                          else
                          {
                            // ENCODING.VST1_1_A1_nowb
                            return 2079;
                          }
                        }
                        else
                        {
                          // ENCODING.VST4_m_A1_nowb
                          return 2192;
                        }
                      }
                    }
                  }
                }
                else
                {
                  if (b & 0x02)
                  {
                    if (b & 0x01)
                    {
                      if (b & 0x04)
                      {
                        if (c & 0x80)
                        {
                          // ENCODING.VST4_1_A2_posti
                          return 2179;
                        }
                        else
                        {
                          // ENCODING.VST1_m_A1_posti
                          return 2098;
                        }
                      }
                      else
                      {
                        if (b & 0x08)
                        {
                          // ENCODING.VST4_1_A3_posti
                          return 2181;
                        }
                        else
                        {
                          if (c & 0x80)
                          {
                            // ENCODING.VST4_1_A1_posti
                            return 2176;
                          }
                          else
                          {
                            // ENCODING.VST2_m_A2_posti
                            return 2143;
                          }
                        }
                      }
                    }
                    else
                    {
                      if (b & 0x04)
                      {
                        if (c & 0x80)
                        {
                          // ENCODING.VST3_1_A2_posti
                          return 2155;
                        }
                        else
                        {
                          // ENCODING.VST1_m_A3_posti
                          return 2104;
                        }
                      }
                      else
                      {
                        if (b & 0x08)
                        {
                          if (c & 0x80)
                          {
                            // ENCODING.VST3_1_A3_posti
                            return 2158;
                          }
                          else
                          {
                            // ENCODING.VST1_m_A2_posti
                            return 2101;
                          }
                        }
                        else
                        {
                          if (c & 0x80)
                          {
                            // ENCODING.VST3_1_A1_posti
                            return 2152;
                          }
                          else
                          {
                            // ENCODING.VST1_m_A4_posti
                            return 2107;
                          }
                        }
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x04)
                    {
                      if (c & 0x80)
                      {
                        if (b & 0x01)
                        {
                          // ENCODING.VST2_1_A2_posti
                          return 2125;
                        }
                        else
                        {
                          // ENCODING.VST1_1_A2_posti
                          return 2083;
                        }
                      }
                      else
                      {
                        // ENCODING.VST3_m_A1_posti
                        return 2170;
                      }
                    }
                    else
                    {
                      if (b & 0x08)
                      {
                        if (c & 0x80)
                        {
                          if (b & 0x01)
                          {
                            // ENCODING.VST2_1_A3_posti
                            return 2128;
                          }
                          else
                          {
                            // ENCODING.VST1_1_A3_posti
                            return 2086;
                          }
                        }
                        else
                        {
                          // ENCODING.VST2_m_A1_posti
                          return 2140;
                        }
                      }
                      else
                      {
                        if (c & 0x80)
                        {
                          if (b & 0x01)
                          {
                            // ENCODING.VST2_1_A1_posti
                            return 2122;
                          }
                          else
                          {
                            // ENCODING.VST1_1_A1_posti
                            return 2080;
                          }
                        }
                        else
                        {
                          // ENCODING.VST4_m_A1_posti
                          return 2193;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      break;
    }
    case 0x06:
    {
      if (a & 0x10)
      {
        if (a & 0x20)
        {
          if (a & 0x40)
          {
            if (a & 0x80)
            {
              if (c & 0x10)
              {
                if (c & 0x20)
                {
                  if (c & 0x40)
                  {
                    if (c & 0x80)
                    {
                      // ENCODING.UDF_A1
                      return 835;
                    }
                    else
                    {
                      // ENCODING.UHSUB8_A1
                      return 850;
                    }
                  }
                  else
                  {
                    // ENCODING.SHSUB8_A1
                    return 565;
                  }
                }
                else
                {
                  if (c & 0x40)
                  {
                    if (d & 0x01)
                    {
                      // ENCODING.SMMLSR_A1
                      return 613;
                    }
                    else
                    {
                      // ENCODING.USUB8_A1
                      return 886;
                    }
                  }
                  else
                  {
                    // ENCODING.SSUB8_A1
                    return 661;
                  }
                }
              }
              else
              {
                if (c & 0x40)
                {
                  // ENCODING.UQSUB8_A1
                  return 870;
                }
                else
                {
                  // ENCODING.QSUB8_A1
                  return 474;
                }
              }
            }
            else
            {
              if (c & 0x10)
              {
                if (b & 0x01)
                {
                  // the following switch contains 4 case.
                  switch (c & 0x60)
                  {
                    case 0x00:
                    {
                      // ENCODING.SSUB16_A1
                      return 659;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.SHSUB16_A1
                      return 563;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.USUB16_A1
                      return 884;
                      break;
                    }
                    case 0x60:
                    {
                      // ENCODING.UHSUB16_A1
                      return 848;
                      break;
                    }
                    default: break;
                  }
                }
                else
                {
                  if (c & 0x40)
                  {
                    // conflicts:
                    // ENCODING.UXTAH_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx01xxxxxxxxxxxxxxxxxxxxxxx
                    // ENCODING.UXTH_A1              : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx01xxx1111xxxxxxxxxxxxxxxx
                    // Rn!=0b1111
                    if ((opcode & 0x000f0000) != 0x000f0000)
                    {
                      // ENCODING.UXTAH_A1
                      return 892;
                    }
                    else
                    {
                      // ENCODING.UXTH_A1
                      return 899;
                    }
                  }
                  else
                  {
                    // conflicts:
                    // ENCODING.SXTAH_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx01xxxxxxxxxxxxxxxxxxxxxxx
                    // ENCODING.SXTH_A1              : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx01xxx1111xxxxxxxxxxxxxxxx
                    // Rn!=0b1111
                    if ((opcode & 0x000f0000) != 0x000f0000)
                    {
                      // ENCODING.SXTAH_A1
                      return 798;
                    }
                    else
                    {
                      // ENCODING.SXTH_A1
                      return 805;
                    }
                  }
                }
              }
              else
              {
                if (c & 0x20)
                {
                  if (b & 0x01)
                  {
                    if (c & 0x40)
                    {
                      // ENCODING.UQSUB16_A1
                      return 868;
                    }
                    else
                    {
                      // ENCODING.QSUB16_A1
                      return 472;
                    }
                  }
                  else
                  {
                    if (c & 0x40)
                    {
                      // conflicts:
                      // ENCODING.UXTAB_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx01xxxxxxxxxxxxxxxxxxxxxxx
                      // ENCODING.UXTB_A1              : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx01xxx1111xxxxxxxxxxxxxxxx
                      // Rn!=0b1111
                      if ((opcode & 0x000f0000) != 0x000f0000)
                      {
                        // ENCODING.UXTAB_A1
                        return 888;
                      }
                      else
                      {
                        // ENCODING.UXTB_A1
                        return 894;
                      }
                    }
                    else
                    {
                      // conflicts:
                      // ENCODING.SXTAB_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx01xxxxxxxxxxxxxxxxxxxxxxx
                      // ENCODING.SXTB_A1              : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx01xxx1111xxxxxxxxxxxxxxxx
                      // Rn!=0b1111
                      if ((opcode & 0x000f0000) != 0x000f0000)
                      {
                        // ENCODING.SXTAB_A1
                        return 794;
                      }
                      else
                      {
                        // ENCODING.SXTB_A1
                        return 800;
                      }
                    }
                  }
                }
                else
                {
                  if (c & 0x40)
                  {
                    if (c & 0x80)
                    {
                      // conflicts:
                      // ENCODING.UXTAB16_A1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxxxxxxx00xxxxxxxx
                      // ENCODING.UXTB16_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxx1111xxxxxx00xxxxxxxx
                      // Rn!=0b1111
                      if ((opcode & 0x000f0000) != 0x000f0000)
                      {
                        // ENCODING.UXTAB16_A1
                        return 890;
                      }
                      else
                      {
                        // ENCODING.UXTB16_A1
                        return 897;
                      }
                    }
                    else
                    {
                      // ENCODING.SMLSLDX_A1
                      return 605;
                    }
                  }
                  else
                  {
                    if (c & 0x80)
                    {
                      // conflicts:
                      // ENCODING.SXTAB16_A1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxxxxxxx00xxxxxxxx
                      // ENCODING.SXTB16_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxx1111xxxxxx00xxxxxxxx
                      // Rn!=0b1111
                      if ((opcode & 0x000f0000) != 0x000f0000)
                      {
                        // ENCODING.SXTAB16_A1
                        return 796;
                      }
                      else
                      {
                        // ENCODING.SXTB16_A1
                        return 803;
                      }
                    }
                    else
                    {
                      // conflicts:
                      // ENCODING.SMLSDX_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xxxxxxxxxxxxxxxxxxxxxxxx
                      // ENCODING.SMUSDX_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xxxxxxxx1111xxxxxxxxxxxx
                      // Ra!=0b1111
                      if ((opcode & 0x0000f000) != 0x0000f000)
                      {
                        // ENCODING.SMLSDX_A1
                        return 601;
                      }
                      else
                      {
                        // ENCODING.SMUSDX_A1
                        return 640;
                      }
                    }
                  }
                }
              }
            }
          }
          else
          {
            if (a & 0x80)
            {
              // the following switch contains 3 case.
              switch (c & 0x70)
              {
                case 0x00:
                {
                  // ENCODING.SEL_A1
                  return 543;
                  break;
                }
                case 0x30:
                {
                  // ENCODING.REV16_A1
                  return 481;
                  break;
                }
                case 0x70:
                {
                  // ENCODING.REVSH_A1
                  return 484;
                  break;
                }
                default: break;
              }
            }
            else
            {
              if (c & 0x10)
              {
                if (c & 0x20)
                {
                  // the following switch contains 4 case.
                  switch (c & 0xc0)
                  {
                    case 0x00:
                    {
                      // ENCODING.SHASX_A1
                      return 559;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.UHASX_A1
                      return 844;
                      break;
                    }
                    case 0x80:
                    {
                      // ENCODING.REV_A1
                      return 478;
                      break;
                    }
                    case 0xc0:
                    {
                      // ENCODING.RBIT_A1
                      return 476;
                      break;
                    }
                    default: break;
                  }
                }
                else
                {
                  if (c & 0x40)
                  {
                    if (d & 0x01)
                    {
                      // conflicts:
                      // ENCODING.SMMLAR_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                      // ENCODING.SMMULR_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxx
                      // Ra!=0b1111
                      if ((opcode & 0x0000f000) != 0x0000f000)
                      {
                        // ENCODING.SMMLAR_A1
                        return 609;
                      }
                      else
                      {
                        // ENCODING.SMMULR_A1
                        return 617;
                      }
                    }
                    else
                    {
                      // ENCODING.UASX_A1
                      return 831;
                    }
                  }
                  else
                  {
                    // ENCODING.SASX_A1
                    return 520;
                  }
                }
              }
              else
              {
                if (c & 0x20)
                {
                  // the following switch contains 4 case.
                  switch (c & 0xc0)
                  {
                    case 0x00:
                    {
                      // ENCODING.QASX_A1
                      return 462;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.UQASX_A1
                      return 864;
                      break;
                    }
                    case 0x80:
                    {
                      // ENCODING.SSAT16_A1
                      return 653;
                      break;
                    }
                    case 0xc0:
                    {
                      // ENCODING.USAT16_A1
                      return 880;
                      break;
                    }
                    default: break;
                  }
                }
                else
                {
                  if (c & 0x40)
                  {
                    // ENCODING.SMLALDX_A1
                    return 593;
                  }
                  else
                  {
                    // conflicts:
                    // ENCODING.SMLADX_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx10xxxxxxxxxxxxxxxxxxxxxxx
                    // ENCODING.SMUADX_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx10xxxxxxx1111xxxxxxxxxxxx
                    // Ra!=0b1111
                    if ((opcode & 0x0000f000) != 0x0000f000)
                    {
                      // ENCODING.SMLADX_A1
                      return 578;
                    }
                    else
                    {
                      // ENCODING.SMUADX_A1
                      return 621;
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          if (a & 0x40)
          {
            if (c & 0x20)
            {
              if (c & 0x40)
              {
                if (c & 0x80)
                {
                  if (d & 0x01)
                  {
                    // ENCODING.UBFX_A1
                    return 833;
                  }
                  else
                  {
                    // ENCODING.USAT_A1_ASR
                    return 876;
                  }
                }
                else
                {
                  if (c & 0x10)
                  {
                    // ENCODING.UHSAX_A1
                    return 846;
                  }
                  else
                  {
                    // ENCODING.UQSAX_A1
                    return 866;
                  }
                }
              }
              else
              {
                if (c & 0x80)
                {
                  if (d & 0x01)
                  {
                    // ENCODING.SBFX_A1
                    return 539;
                  }
                  else
                  {
                    // ENCODING.SSAT_A1_ASR
                    return 649;
                  }
                }
                else
                {
                  if (c & 0x10)
                  {
                    // ENCODING.SHSAX_A1
                    return 561;
                  }
                  else
                  {
                    // ENCODING.QSAX_A1
                    return 468;
                  }
                }
              }
            }
            else
            {
              if (c & 0x10)
              {
                if (a & 0x80)
                {
                  // ENCODING.SMMLS_A1
                  return 612;
                }
                else
                {
                  if (c & 0x40)
                  {
                    // ENCODING.USAX_A1
                    return 882;
                  }
                  else
                  {
                    // ENCODING.SSAX_A1
                    return 655;
                  }
                }
              }
              else
              {
                if (c & 0x40)
                {
                  // ENCODING.SMLSLD_A1
                  return 604;
                }
                else
                {
                  if (c & 0x80)
                  {
                    // ENCODING.PKHTB_A1
                    return 428;
                  }
                  else
                  {
                    // conflicts:
                    // ENCODING.SMLSD_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xxxxxxxxxxxxxxxx0xxxxxxx
                    // ENCODING.SMUSD_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xxxxxxxx1111xxxx0xxxxxxx
                    // Ra!=0b1111
                    if ((opcode & 0x0000f000) != 0x0000f000)
                    {
                      // ENCODING.SMLSD_A1
                      return 600;
                    }
                    else
                    {
                      // ENCODING.SMUSD_A1
                      return 639;
                    }
                  }
                }
              }
            }
          }
          else
          {
            if (c & 0x20)
            {
              if (c & 0x40)
              {
                if (c & 0x80)
                {
                  // ENCODING.USAT_A1_LSL
                  return 877;
                }
                else
                {
                  if (a & 0x80)
                  {
                    if (c & 0x10)
                    {
                      // ENCODING.UHADD8_A1
                      return 842;
                    }
                    else
                    {
                      // ENCODING.UQADD8_A1
                      return 862;
                    }
                  }
                  else
                  {
                    if (c & 0x10)
                    {
                      // ENCODING.UHADD16_A1
                      return 840;
                    }
                    else
                    {
                      // ENCODING.UQADD16_A1
                      return 860;
                    }
                  }
                }
              }
              else
              {
                if (c & 0x80)
                {
                  // ENCODING.SSAT_A1_LSL
                  return 650;
                }
                else
                {
                  if (a & 0x80)
                  {
                    if (c & 0x10)
                    {
                      // ENCODING.SHADD8_A1
                      return 557;
                    }
                    else
                    {
                      // ENCODING.QADD8_A1
                      return 460;
                    }
                  }
                  else
                  {
                    if (c & 0x10)
                    {
                      if (d & 0x01)
                      {
                        // ENCODING.UDIV_A1
                        return 838;
                      }
                      else
                      {
                        // ENCODING.SHADD16_A1
                        return 555;
                      }
                    }
                    else
                    {
                      // ENCODING.QADD16_A1
                      return 458;
                    }
                  }
                }
              }
            }
            else
            {
              if (c & 0x40)
              {
                if (c & 0x80)
                {
                  // conflicts:
                  // ENCODING.BFC_A1               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xxxxxxxxxxxxxxxxxxxx1111
                  // ENCODING.BFI_A1               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xxxxxxxxxxxxxxxxxxxxxxxx
                  // Rn!=0b1111
                  if ((opcode & 0x0000000f) != 0x0000000f)
                  {
                    // ENCODING.BFI_A1
                    return 79;
                  }
                  else
                  {
                    // ENCODING.BFC_A1
                    return 77;
                  }
                }
                else
                {
                  if (a & 0x80)
                  {
                    // ENCODING.UADD8_A1
                    return 829;
                  }
                  else
                  {
                    if (c & 0x10)
                    {
                      if (d & 0x01)
                      {
                        // conflicts:
                        // ENCODING.SMMLA_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                        // ENCODING.SMMUL_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxx
                        // Ra!=0b1111
                        if ((opcode & 0x0000f000) != 0x0000f000)
                        {
                          // ENCODING.SMMLA_A1
                          return 608;
                        }
                        else
                        {
                          // ENCODING.SMMUL_A1
                          return 616;
                        }
                      }
                      else
                      {
                        // ENCODING.UADD16_A1
                        return 827;
                      }
                    }
                    else
                    {
                      // ENCODING.SMLALD_A1
                      return 592;
                    }
                  }
                }
              }
              else
              {
                if (c & 0x10)
                {
                  if (a & 0x80)
                  {
                    // ENCODING.SADD8_A1
                    return 518;
                  }
                  else
                  {
                    if (d & 0x01)
                    {
                      // ENCODING.SDIV_A1
                      return 541;
                    }
                    else
                    {
                      // ENCODING.SADD16_A1
                      return 516;
                    }
                  }
                }
                else
                {
                  if (c & 0x80)
                  {
                    if (d & 0x01)
                    {
                      // conflicts:
                      // ENCODING.USAD8_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxx
                      // ENCODING.USADA8_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxx
                      // Ra!=0b1111
                      if ((opcode & 0x0000f000) != 0x0000f000)
                      {
                        // ENCODING.USADA8_A1
                        return 874;
                      }
                      else
                      {
                        // ENCODING.USAD8_A1
                        return 872;
                      }
                    }
                    else
                    {
                      // ENCODING.PKHBT_A1
                      return 427;
                    }
                  }
                  else
                  {
                    // conflicts:
                    // ENCODING.SMLAD_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xxxxxxxxxxxxxxxx0xxxxxxx
                    // ENCODING.SMUAD_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xxxxxxxx1111xxxx0xxxxxxx
                    // Ra!=0b1111
                    if ((opcode & 0x0000f000) != 0x0000f000)
                    {
                      // ENCODING.SMLAD_A1
                      return 577;
                    }
                    else
                    {
                      // ENCODING.SMUAD_A1
                      return 620;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        if (c & 0x10)
        {
          if (c & 0x20)
          {
            if (c & 0x40)
            {
              if (d & 0x01)
              {
                // ENCODING.LDRB_r_A1_pre
                return 255;
              }
              else
              {
                // ENCODING.LDRBT_A2
                return 259;
              }
            }
            else
            {
              if (d & 0x01)
              {
                // ENCODING.LDR_r_A1_pre
                return 240;
              }
              else
              {
                // ENCODING.LDRT_A2
                return 333;
              }
            }
          }
          else
          {
            if (c & 0x40)
            {
              if (d & 0x01)
              {
                // conflicts:
                // ENCODING.LDRB_r_A1_off        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                // ENCODING.PLD_r_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxx1111xxxxxxxxxxxx
                // ENCODING.PLD_r_A1_RRX         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxx11110000011xxxxx
                // imm5:stype!=0b0000011
                if ((opcode & 0x00000fe0) != 0x00000060)
                {
                  // cond!=0b1111
                  if ((opcode & 0xf0000000) != 0xf0000000)
                  {
                    // ENCODING.LDRB_r_A1_off
                    return 253;
                  }
                  else
                  {
                    // ENCODING.PLD_r_A1
                    return 439;
                  }
                }
                else
                {
                  // cond!=0b1111
                  if ((opcode & 0xf0000000) != 0xf0000000)
                  {
                    // ENCODING.LDRB_r_A1_off
                    return 253;
                  }
                  else
                  {
                    // ENCODING.PLD_r_A1_RRX
                    return 440;
                  }
                }
              }
              else
              {
                // conflicts:
                // ENCODING.LDRB_r_A1_post       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                // ENCODING.PLI_r_A1_RRX         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxx11110000011xxxxx
                // ENCODING.PLI_r_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxx1111xxxxxxxxxxxx
                // imm5:stype!=0b0000011
                if ((opcode & 0x00000fe0) != 0x00000060)
                {
                  // cond!=0b1111
                  if ((opcode & 0xf0000000) != 0xf0000000)
                  {
                    // ENCODING.LDRB_r_A1_post
                    return 254;
                  }
                  else
                  {
                    // ENCODING.PLI_r_A1
                    return 450;
                  }
                }
                else
                {
                  // cond!=0b1111
                  if ((opcode & 0xf0000000) != 0xf0000000)
                  {
                    // ENCODING.LDRB_r_A1_post
                    return 254;
                  }
                  else
                  {
                    // ENCODING.PLI_r_A1_RRX
                    return 449;
                  }
                }
              }
            }
            else
            {
              if (d & 0x01)
              {
                // conflicts:
                // ENCODING.LDR_r_A1_off         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                // ENCODING.PLDW_r_A1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxx1111xxxxxxxxxxxx
                // ENCODING.PLDW_r_A1_RRX        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxx11110000011xxxxx
                // imm5:stype!=0b0000011
                if ((opcode & 0x00000fe0) != 0x00000060)
                {
                  // cond!=0b1111
                  if ((opcode & 0xf0000000) != 0xf0000000)
                  {
                    // ENCODING.LDR_r_A1_off
                    return 238;
                  }
                  else
                  {
                    // ENCODING.PLDW_r_A1
                    return 441;
                  }
                }
                else
                {
                  // cond!=0b1111
                  if ((opcode & 0xf0000000) != 0xf0000000)
                  {
                    // ENCODING.LDR_r_A1_off
                    return 238;
                  }
                  else
                  {
                    // ENCODING.PLDW_r_A1_RRX
                    return 442;
                  }
                }
              }
              else
              {
                // ENCODING.LDR_r_A1_post
                return 239;
              }
            }
          }
        }
        else
        {
          if (c & 0x20)
          {
            if (c & 0x40)
            {
              if (d & 0x01)
              {
                // ENCODING.STRB_r_A1_pre
                return 717;
              }
              else
              {
                // ENCODING.STRBT_A2
                return 721;
              }
            }
            else
            {
              if (d & 0x01)
              {
                // ENCODING.STR_r_A1_pre
                return 704;
              }
              else
              {
                // ENCODING.STRT_A2
                return 757;
              }
            }
          }
          else
          {
            if (c & 0x40)
            {
              if (d & 0x01)
              {
                // ENCODING.STRB_r_A1_off
                return 715;
              }
              else
              {
                // ENCODING.STRB_r_A1_post
                return 716;
              }
            }
            else
            {
              if (d & 0x01)
              {
                // ENCODING.STR_r_A1_off
                return 702;
              }
              else
              {
                // ENCODING.STR_r_A1_post
                return 703;
              }
            }
          }
        }
      }
      break;
    }
    case 0x08:
    {
      // the following switch contains 4 case.
      switch (c & 0x50)
      {
        case 0x00:
        {
          if (c & 0x80)
          {
            if (d & 0x01)
            {
              // ENCODING.STMIB_A1
              return 692;
            }
            else
            {
              // ENCODING.STM_A1
              return 685;
            }
          }
          else
          {
            if (d & 0x01)
            {
              // ENCODING.STMDB_A1
              return 690;
            }
            else
            {
              // ENCODING.STMDA_A1
              return 689;
            }
          }
          break;
        }
        case 0x10:
        {
          if (c & 0x80)
          {
            if (d & 0x01)
            {
              // conflicts:
              // ENCODING.LDMIB_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
              // ENCODING.RFEIB_A1_AS          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxx0000101000000000
              // cond!=0b1111
              if ((opcode & 0xf0000000) != 0xf0000000)
              {
                // ENCODING.LDMIB_A1
                return 225;
              }
              else
              {
                // ENCODING.RFEIB_A1_AS
                return 490;
              }
            }
            else
            {
              // conflicts:
              // ENCODING.LDM_A1               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
              // ENCODING.RFEIA_A1_AS          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxx0000101000000000
              // cond!=0b1111
              if ((opcode & 0xf0000000) != 0xf0000000)
              {
                // ENCODING.LDM_A1
                return 217;
              }
              else
              {
                // ENCODING.RFEIA_A1_AS
                return 489;
              }
            }
          }
          else
          {
            if (d & 0x01)
            {
              // conflicts:
              // ENCODING.LDMDB_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
              // ENCODING.RFEDB_A1_AS          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxx0000101000000000
              // cond!=0b1111
              if ((opcode & 0xf0000000) != 0xf0000000)
              {
                // ENCODING.LDMDB_A1
                return 223;
              }
              else
              {
                // ENCODING.RFEDB_A1_AS
                return 488;
              }
            }
            else
            {
              // conflicts:
              // ENCODING.LDMDA_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
              // ENCODING.RFEDA_A1_AS          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxx0000101000000000
              // cond!=0b1111
              if ((opcode & 0xf0000000) != 0xf0000000)
              {
                // ENCODING.LDMDA_A1
                return 222;
              }
              else
              {
                // ENCODING.RFEDA_A1_AS
                return 487;
              }
            }
          }
          break;
        }
        case 0x40:
        {
          // conflicts:
          // ENCODING.SRSDA_A1_AS          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx00xxx110100000101000xxxxx
          // ENCODING.SRSDB_A1_AS          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx10xxx110100000101000xxxxx
          // ENCODING.SRSIA_A1_AS          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx01xxx110100000101000xxxxx
          // ENCODING.SRSIB_A1_AS          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx11xxx110100000101000xxxxx
          // ENCODING.STM_u_A1_AS          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxxxxxxxxxxxxxx
          // cond!=0b1111
          if ((opcode & 0xf0000000) != 0xf0000000)
          {
            // ENCODING.STM_u_A1_AS
            return 688;
          }
          else
          {
            if (c & 0x80)
            {
              if (d & 0x01)
              {
                // ENCODING.SRSIB_A1_AS
                return 646;
              }
              else
              {
                // ENCODING.SRSIA_A1_AS
                return 645;
              }
            }
            else
            {
              if (d & 0x01)
              {
                // ENCODING.SRSDB_A1_AS
                return 644;
              }
              else
              {
                // ENCODING.SRSDA_A1_AS
                return 643;
              }
            }
          }
          break;
        }
        case 0x50:
        {
          if (b & 0x80)
          {
            // ENCODING.LDM_e_A1_AS
            return 220;
          }
          else
          {
            // ENCODING.LDM_u_A1_AS
            return 221;
          }
          break;
        }
        default: break;
      }
      break;
    }
    case 0x0a:
    {
      // conflicts:
      // ENCODING.B_A1                 : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxxxxxxxxxxxxxxxxx
      // ENCODING.BL_i_A1              : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xxxxxxxxxxxxxxxxxxxxxxxx
      // ENCODING.BL_i_A2              : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxxxxxxxxxxxxxx
      // cond!=0b1111
      if ((opcode & 0xf0000000) != 0xf0000000)
      {
        if (d & 0x01)
        {
          // ENCODING.BL_i_A1
          return 98;
        }
        else
        {
          // ENCODING.B_A1
          return 72;
        }
      }
      else
      {
        // ENCODING.BL_i_A2
        return 99;
      }
      break;
    }
    case 0x0c:
    {
      // the following switch contains 4 case.
      switch (b & 0x06)
      {
        case 0x00:
        {
          if (b & 0x01)
          {
            if (c & 0x10)
            {
              // conflicts:
              // ENCODING.VLDR_A1_H            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xx0xxxxxxxxxxxxxxxxxxxxx
              // ENCODING.VLDR_l_A1_H          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xx0x1111xxxxxxxxxxxxxxxx
              // Rn!=0b1111
              if ((opcode & 0x000f0000) != 0x000f0000)
              {
                // ENCODING.VLDR_A1_H
                return 1553;
              }
              else
              {
                // ENCODING.VLDR_l_A1_H
                return 1559;
              }
            }
            else
            {
              // ENCODING.VSTR_A1_H
              return 2206;
            }
          }
          else
          {
            if (a & 0x10)
            {
              // the following switch contains 3 case.
              switch (c & 0x90)
              {
                case 0x00:
                {
                  if (a & 0x40)
                  {
                    // ENCODING.VFMAL_A1_Q
                    return 1352;
                  }
                  else
                  {
                    // ENCODING.VFMAL_A1_D
                    return 1351;
                  }
                  break;
                }
                case 0x10:
                {
                  // ENCODING.VFMA_bf_A1_Q
                  return 1347;
                  break;
                }
                case 0x80:
                {
                  if (a & 0x40)
                  {
                    // ENCODING.VFMSL_A1_Q
                    return 1370;
                  }
                  else
                  {
                    // ENCODING.VFMSL_A1_D
                    return 1369;
                  }
                  break;
                }
                default: break;
              }
            }
            else
            {
              if (a & 0x40)
              {
                if (c & 0x20)
                {
                  // ENCODING.VCMLA_A1_Q
                  return 1150;
                }
                else
                {
                  // ENCODING.VCADD_A1_Q
                  return 1094;
                }
              }
              else
              {
                if (c & 0x20)
                {
                  // ENCODING.VCMLA_A1_D
                  return 1149;
                }
                else
                {
                  // ENCODING.VCADD_A1_D
                  return 1093;
                }
              }
            }
          }
          break;
        }
        case 0x02:
        {
          if (b & 0x01)
          {
            if (c & 0x10)
            {
              if (d & 0x01)
              {
                if (c & 0x20)
                {
                  if (a & 0x01)
                  {
                    // ENCODING.FLDMDBX_A1
                    return 982;
                  }
                  else
                  {
                    // ENCODING.VLDMDB_A1
                    return 1545;
                  }
                }
                else
                {
                  // conflicts:
                  // ENCODING.VLDR_A1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                  // ENCODING.VLDR_l_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx
                  // Rn!=0b1111
                  if ((opcode & 0x000f0000) != 0x000f0000)
                  {
                    // ENCODING.VLDR_A1_D
                    return 1555;
                  }
                  else
                  {
                    // ENCODING.VLDR_l_A1_D
                    return 1561;
                  }
                }
              }
              else
              {
                if (c & 0x80)
                {
                  if (a & 0x01)
                  {
                    // ENCODING.FLDMIAX_A1
                    return 983;
                  }
                  else
                  {
                    // ENCODING.VLDM_A1
                    return 1546;
                  }
                }
                else
                {
                  // ENCODING.VMOV_d_A1
                  return 1648;
                }
              }
            }
            else
            {
              if (d & 0x01)
              {
                if (c & 0x20)
                {
                  if (a & 0x01)
                  {
                    // ENCODING.FSTMDBX_A1
                    return 986;
                  }
                  else
                  {
                    // ENCODING.VSTMDB_A1
                    return 2198;
                  }
                }
                else
                {
                  // ENCODING.VSTR_A1_D
                  return 2208;
                }
              }
              else
              {
                if (c & 0x80)
                {
                  if (a & 0x01)
                  {
                    // ENCODING.FSTMIAX_A1
                    return 987;
                  }
                  else
                  {
                    // ENCODING.VSTM_A1
                    return 2199;
                  }
                }
                else
                {
                  // ENCODING.VMOV_tod_A1
                  return 1647;
                }
              }
            }
          }
          else
          {
            if (c & 0x10)
            {
              if (d & 0x01)
              {
                if (c & 0x20)
                {
                  // ENCODING.VLDMDB_A2
                  return 1547;
                }
                else
                {
                  // conflicts:
                  // ENCODING.VLDR_A1_S            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                  // ENCODING.VLDR_l_A1_S          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx
                  // Rn!=0b1111
                  if ((opcode & 0x000f0000) != 0x000f0000)
                  {
                    // ENCODING.VLDR_A1_S
                    return 1554;
                  }
                  else
                  {
                    // ENCODING.VLDR_l_A1_S
                    return 1560;
                  }
                }
              }
              else
              {
                if (c & 0x80)
                {
                  // ENCODING.VLDM_A2
                  return 1548;
                }
                else
                {
                  // ENCODING.VMOV_ss_A1
                  return 1690;
                }
              }
            }
            else
            {
              if (d & 0x01)
              {
                if (c & 0x20)
                {
                  // ENCODING.VSTMDB_A2
                  return 2200;
                }
                else
                {
                  // ENCODING.VSTR_A1_S
                  return 2207;
                }
              }
              else
              {
                if (c & 0x80)
                {
                  // ENCODING.VSTM_A2
                  return 2201;
                }
                else
                {
                  // ENCODING.VMOV_toss_A1
                  return 1689;
                }
              }
            }
          }
          break;
        }
        case 0x04:
        {
          if (a & 0x10)
          {
            if (a & 0x40)
            {
              if (b & 0x01)
              {
                // ENCODING.VUDOT_A1_Q
                return 2253;
              }
              else
              {
                // ENCODING.VUMMLA_A1_Q
                return 2260;
              }
            }
            else
            {
              // ENCODING.VUDOT_A1_D
              return 2252;
            }
          }
          else
          {
            if (a & 0x40)
            {
              if (b & 0x01)
              {
                // the following switch contains 3 case.
                switch (c & 0xa0)
                {
                  case 0x00:
                  {
                    // ENCODING.VDOT_A1_Q
                    return 1316;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.VSDOT_A1_Q
                    return 2010;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.VUSDOT_A1_Q
                    return 2263;
                    break;
                  }
                  default: break;
                }
              }
              else
              {
                // the following switch contains 3 case.
                switch (c & 0xa0)
                {
                  case 0x00:
                  {
                    // ENCODING.VMMLA_A1_Q
                    return 1645;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.VSMMLA_A1_Q
                    return 2063;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.VUSMMLA_A1_Q
                    return 2270;
                    break;
                  }
                  default: break;
                }
              }
            }
            else
            {
              // the following switch contains 3 case.
              switch (c & 0xa0)
              {
                case 0x00:
                {
                  // ENCODING.VDOT_A1_D
                  return 1315;
                  break;
                }
                case 0x20:
                {
                  // ENCODING.VSDOT_A1_D
                  return 2009;
                  break;
                }
                case 0xa0:
                {
                  // ENCODING.VUSDOT_A1_D
                  return 2262;
                  break;
                }
                default: break;
              }
            }
          }
          break;
        }
        case 0x06:
        {
          // the following switch contains 4 case.
          switch (c & 0x50)
          {
            case 0x00:
            {
              if (c & 0x20)
              {
                if (d & 0x01)
                {
                  // ENCODING.STC_A1_pre
                  return 665;
                }
                else
                {
                  // ENCODING.STC_A1_post
                  return 664;
                }
              }
              else
              {
                if (d & 0x01)
                {
                  // ENCODING.STC_A1_off
                  return 663;
                }
                else
                {
                  // ENCODING.STC_A1_unind
                  return 666;
                }
              }
              break;
            }
            case 0x10:
            {
              // conflicts:
              // ENCODING.LDC_i_A1_off         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xx0xxxxx01011xx0xxxxxxxx
              // ENCODING.LDC_i_A1_post        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xx1xxxxx01011xx0xxxxxxxx
              // ENCODING.LDC_i_A1_pre         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xx1xxxxx01011xx0xxxxxxxx
              // ENCODING.LDC_i_A1_unind       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx01x0xxxxx01011xx0xxxxxxxx
              // ENCODING.LDC_l_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111101011xx0xxxxxxxx
              // P:U:W!=0b000
              if ((opcode & 0x01a00000) != 0x00000000)
              {
                // Rn!=0b1111
                if ((opcode & 0x000f0000) != 0x000f0000)
                {
                  if (c & 0x20)
                  {
                    if (d & 0x01)
                    {
                      // ENCODING.LDC_i_A1_pre
                      return 209;
                    }
                    else
                    {
                      // ENCODING.LDC_i_A1_post
                      return 208;
                    }
                  }
                  else
                  {
                    if (d & 0x01)
                    {
                      // ENCODING.LDC_i_A1_off
                      return 207;
                    }
                    else
                    {
                      // ENCODING.LDC_i_A1_unind
                      return 210;
                    }
                  }
                }
                else
                {
                  // ENCODING.LDC_l_A1
                  return 215;
                }
              }
              else
              {
                if (c & 0x20)
                {
                  if (d & 0x01)
                  {
                    // ENCODING.LDC_i_A1_pre
                    return 209;
                  }
                  else
                  {
                    // ENCODING.LDC_i_A1_post
                    return 208;
                  }
                }
                else
                {
                  // ENCODING.LDC_i_A1_off
                  return 207;
                }
              }
              break;
            }
            case 0x40:
            {
              // ENCODING.MCRR_A1
              return 337;
              break;
            }
            case 0x50:
            {
              // ENCODING.MRRC_A1
              return 373;
              break;
            }
            default: break;
          }
          break;
        }
        default: break;
      }
      break;
    }
    case 0x0e:
    {
      if (d & 0x01)
      {
        // ENCODING.SVC_A1
        return 792;
      }
      else
      {
        if (a & 0x10)
        {
          if (b & 0x02)
          {
            if (b & 0x04)
            {
              if (c & 0x10)
              {
                // ENCODING.MRC_A1
                return 371;
              }
              else
              {
                // ENCODING.MCR_A1
                return 335;
              }
            }
            else
            {
              if (b & 0x01)
              {
                if (c & 0x10)
                {
                  // ENCODING.VMOV_sr_A1
                  return 1687;
                }
                else
                {
                  if (c & 0x80)
                  {
                    // ENCODING.VDUP_r_A1
                    return 1323;
                  }
                  else
                  {
                    // ENCODING.VMOV_rs_A1
                    return 1681;
                  }
                }
              }
              else
              {
                // the following switch contains 4 case.
                switch (c & 0xf0)
                {
                  case 0x00:
                  {
                    // ENCODING.VMOV_tos_A1
                    return 1683;
                    break;
                  }
                  case 0x10:
                  {
                    // ENCODING.VMOV_s_A1
                    return 1684;
                    break;
                  }
                  case 0xe0:
                  {
                    // ENCODING.VMSR_A1_AS
                    return 1701;
                    break;
                  }
                  case 0xf0:
                  {
                    // ENCODING.VMRS_A1_AS
                    return 1699;
                    break;
                  }
                  default: break;
                }
              }
            }
          }
          else
          {
            if (b & 0x01)
            {
              if (a & 0x40)
              {
                if (c & 0x20)
                {
                  // ENCODING.VUDOT_s_A1_Q
                  return 2257;
                }
                else
                {
                  // ENCODING.VSUDOT_s_A1_Q
                  return 2233;
                }
              }
              else
              {
                if (b & 0x04)
                {
                  if (c & 0x20)
                  {
                    // ENCODING.VUDOT_s_A1_D
                    return 2256;
                  }
                  else
                  {
                    // ENCODING.VSUDOT_s_A1_D
                    return 2232;
                  }
                }
                else
                {
                  if (c & 0x10)
                  {
                    // ENCODING.VMOV_h_A1
                    return 1652;
                  }
                  else
                  {
                    // ENCODING.VMOV_toh_A1
                    return 1651;
                  }
                }
              }
            }
            else
            {
              // the following switch contains 3 case.
              switch (c & 0x30)
              {
                case 0x00:
                {
                  if (a & 0x40)
                  {
                    // ENCODING.VFMAL_s_A1_Q
                    return 1356;
                  }
                  else
                  {
                    // ENCODING.VFMAL_s_A1_D
                    return 1355;
                  }
                  break;
                }
                case 0x10:
                {
                  if (a & 0x40)
                  {
                    // ENCODING.VFMSL_s_A1_Q
                    return 1374;
                  }
                  else
                  {
                    // ENCODING.VFMSL_s_A1_D
                    return 1373;
                  }
                  break;
                }
                case 0x30:
                {
                  // ENCODING.VFMA_bfs_A1_Q
                  return 1349;
                  break;
                }
                default: break;
              }
            }
          }
        }
        else
        {
          if (a & 0x40)
          {
            if (b & 0x01)
            {
              if (b & 0x02)
              {
                // the following switch contains 8 case.
                switch (c & 0xb0)
                {
                  case 0x00:
                  {
                    // ENCODING.VMLS_f_A2_D
                    return 1627;
                    break;
                  }
                  case 0x10:
                  {
                    // ENCODING.VNMLA_A1_D
                    return 1753;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.VNMUL_A1_D
                    return 1765;
                    break;
                  }
                  case 0x30:
                  {
                    // ENCODING.VSUB_f_A2_D
                    return 2216;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.VMINNM_A2_D
                    return 1595;
                    break;
                  }
                  case 0x90:
                  {
                    // ENCODING.VFNMA_A1_D
                    return 1379;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.VFMS_A2_D
                    return 1363;
                    break;
                  }
                  case 0xb0:
                  {
                    // the following switch contains 8 case.
                    switch (c & 0x0e)
                    {
                      case 0x00:
                      {
                        if (a & 0x80)
                        {
                          if (c & 0x01)
                          {
                            // ENCODING.VSQRT_A1_D
                            return 2067;
                          }
                          else
                          {
                            // ENCODING.VABS_A2_D
                            return 1031;
                          }
                        }
                        else
                        {
                          if (c & 0x01)
                          {
                            // ENCODING.VNEG_A2_D
                            return 1745;
                          }
                          else
                          {
                            // ENCODING.VMOV_r_A2_D
                            return 1678;
                          }
                        }
                        break;
                      }
                      case 0x02:
                      {
                        if (a & 0x80)
                        {
                          if (c & 0x01)
                          {
                            // ENCODING.VCVTT_A1_HD
                            return 1302;
                          }
                          else
                          {
                            // ENCODING.VCVTT_A1_DH
                            return 1300;
                          }
                        }
                        else
                        {
                          if (c & 0x01)
                          {
                            // ENCODING.VCVTB_A1_HD
                            return 1250;
                          }
                          else
                          {
                            // ENCODING.VCVTB_A1_DH
                            return 1248;
                          }
                        }
                        break;
                      }
                      case 0x04:
                      {
                        if (a & 0x80)
                        {
                          if (c & 0x01)
                          {
                            // ENCODING.VCMPE_A2_D
                            return 1178;
                          }
                          else
                          {
                            // ENCODING.VCMPE_A1_D
                            return 1175;
                          }
                        }
                        else
                        {
                          if (c & 0x01)
                          {
                            // ENCODING.VCMP_A2_D
                            return 1166;
                          }
                          else
                          {
                            // ENCODING.VCMP_A1_D
                            return 1163;
                          }
                        }
                        break;
                      }
                      case 0x06:
                      {
                        if (a & 0x80)
                        {
                          if (c & 0x01)
                          {
                            // ENCODING.VCVT_sd_A1
                            return 1192;
                          }
                          else
                          {
                            // ENCODING.VRINTZ_vfp_A1_D
                            return 1981;
                          }
                        }
                        else
                        {
                          if (c & 0x01)
                          {
                            // ENCODING.VRINTX_vfp_A1_D
                            return 1971;
                          }
                          else
                          {
                            // ENCODING.VRINTR_vfp_A1_D
                            return 1961;
                          }
                        }
                        break;
                      }
                      case 0x08:
                      {
                        if (c & 0x01)
                        {
                          if (a & 0x80)
                          {
                            // ENCODING.VJCVT_A1
                            return 1399;
                          }
                          else
                          {
                            // ENCODING.VRINTN_vfp_A1_D
                            return 1945;
                          }
                        }
                        else
                        {
                          // conflicts:
                          // ENCODING.VCVT_vi_A1_D         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                          // ENCODING.VRINTA_vfp_A1_D      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxxxxxx0xxxxxxx
                          // size!=0b00
                          if ((opcode & 0x00000300) != 0x00000000)
                          {
                            // cond!=0b1111
                            if ((opcode & 0xf0000000) != 0xf0000000)
                            {
                              // ENCODING.VCVT_vi_A1_D
                              return 1217;
                            }
                            else
                            {
                              // ENCODING.VRINTA_vfp_A1_D
                              return 1925;
                            }
                          }
                          else
                          {
                            // ENCODING.VCVT_vi_A1_D
                            return 1217;
                          }
                        }
                        break;
                      }
                      case 0x0a:
                      {
                        // conflicts:
                        // ENCODING.VCVT_toxv_A1_D       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx10xxxxxxxxxx
                        // ENCODING.VRINTM_vfp_A1_D      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxx1xxxx10xx0xxxxxxx
                        // ENCODING.VRINTP_vfp_A1_D      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxx0xxxx10xx0xxxxxxx
                        // size!=0b00
                        if ((opcode & 0x00000300) != 0x00000000)
                        {
                          // cond!=0b1111
                          if ((opcode & 0xf0000000) != 0xf0000000)
                          {
                            // ENCODING.VCVT_toxv_A1_D
                            return 1229;
                          }
                          else
                          {
                            if (c & 0x01)
                            {
                              // ENCODING.VRINTM_vfp_A1_D
                              return 1935;
                            }
                            else
                            {
                              // ENCODING.VRINTP_vfp_A1_D
                              return 1955;
                            }
                          }
                        }
                        else
                        {
                          // ENCODING.VCVT_toxv_A1_D
                          return 1229;
                        }
                        break;
                      }
                      case 0x0c:
                      {
                        if (c & 0x01)
                        {
                          // conflicts:
                          // ENCODING.VCVT_siv_A1_D        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xxxxxxx
                          // ENCODING.VCVTN_vfp_A1_D       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxxxxxxxxxxxxxx
                          // ENCODING.VCVTR_siv_A1_D       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxx
                          // cond!=0b1111
                          if ((opcode & 0xf0000000) != 0xf0000000)
                          {
                            if (a & 0x80)
                            {
                              // ENCODING.VCVT_siv_A1_D
                              return 1208;
                            }
                            else
                            {
                              // ENCODING.VCVTR_siv_A1_D
                              return 1292;
                            }
                          }
                          else
                          {
                            // ENCODING.VCVTN_vfp_A1_D
                            return 1273;
                          }
                        }
                        else
                        {
                          // conflicts:
                          // ENCODING.VCVT_uiv_A1_D        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xxxxxxx
                          // ENCODING.VCVTA_vfp_A1_D       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxxxxxxxxxxxxxx
                          // ENCODING.VCVTR_uiv_A1_D       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxx
                          // cond!=0b1111
                          if ((opcode & 0xf0000000) != 0xf0000000)
                          {
                            if (a & 0x80)
                            {
                              // ENCODING.VCVT_uiv_A1_D
                              return 1207;
                            }
                            else
                            {
                              // ENCODING.VCVTR_uiv_A1_D
                              return 1291;
                            }
                          }
                          else
                          {
                            // ENCODING.VCVTA_vfp_A1_D
                            return 1243;
                          }
                        }
                        break;
                      }
                      case 0x0e:
                      {
                        // conflicts:
                        // ENCODING.VCVT_xv_A1_D         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx10xxxxxxxxxx
                        // ENCODING.VCVTM_vfp_A1_D       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxx1xxxx10xxxxxxxxxx
                        // ENCODING.VCVTP_vfp_A1_D       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxx0xxxx10xxxxxxxxxx
                        // size!=0b00
                        if ((opcode & 0x00000300) != 0x00000000)
                        {
                          // cond!=0b1111
                          if ((opcode & 0xf0000000) != 0xf0000000)
                          {
                            // ENCODING.VCVT_xv_A1_D
                            return 1230;
                          }
                          else
                          {
                            if (c & 0x01)
                            {
                              // ENCODING.VCVTM_vfp_A1_D
                              return 1263;
                            }
                            else
                            {
                              // ENCODING.VCVTP_vfp_A1_D
                              return 1283;
                            }
                          }
                        }
                        else
                        {
                          // ENCODING.VCVT_xv_A1_D
                          return 1230;
                        }
                        break;
                      }
                      default: break;
                    }
                    break;
                  }
                  default: break;
                }
              }
              else
              {
                if (b & 0x04)
                {
                  // the following switch contains 3 case.
                  switch (c & 0xa0)
                  {
                    case 0x00:
                    {
                      // ENCODING.VDOT_s_A1_Q
                      return 1320;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.VSDOT_s_A1_Q
                      return 2014;
                      break;
                    }
                    case 0x80:
                    {
                      // ENCODING.VUSDOT_s_A1_Q
                      return 2267;
                      break;
                    }
                    default: break;
                  }
                }
                else
                {
                  // the following switch contains 8 case.
                  switch (c & 0xb0)
                  {
                    case 0x00:
                    {
                      // ENCODING.VMLS_f_A2_H
                      return 1625;
                      break;
                    }
                    case 0x10:
                    {
                      // ENCODING.VNMLA_A1_H
                      return 1751;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.VNMUL_A1_H
                      return 1763;
                      break;
                    }
                    case 0x30:
                    {
                      // ENCODING.VSUB_f_A2_H
                      return 2214;
                      break;
                    }
                    case 0x80:
                    {
                      // ENCODING.VMINNM_A2_H
                      return 1593;
                      break;
                    }
                    case 0x90:
                    {
                      // ENCODING.VFNMA_A1_H
                      return 1377;
                      break;
                    }
                    case 0xa0:
                    {
                      // ENCODING.VFMS_A2_H
                      return 1361;
                      break;
                    }
                    case 0xb0:
                    {
                      // the following switch contains 8 case.
                      switch (c & 0x0e)
                      {
                        case 0x00:
                        {
                          if (a & 0x80)
                          {
                            if (c & 0x01)
                            {
                              // ENCODING.VSQRT_A1_H
                              return 2065;
                            }
                            else
                            {
                              // ENCODING.VABS_A2_H
                              return 1029;
                            }
                          }
                          else
                          {
                            // ENCODING.VNEG_A2_H
                            return 1743;
                          }
                          break;
                        }
                        case 0x02:
                        {
                          if (a & 0x80)
                          {
                            // ENCODING.VCVTT_A1_bfs
                            return 1307;
                          }
                          else
                          {
                            // ENCODING.VCVTB_A1_bfs
                            return 1255;
                          }
                          break;
                        }
                        case 0x04:
                        {
                          if (a & 0x80)
                          {
                            if (c & 0x01)
                            {
                              // ENCODING.VCMPE_A2_H
                              return 1176;
                            }
                            else
                            {
                              // ENCODING.VCMPE_A1_H
                              return 1173;
                            }
                          }
                          else
                          {
                            if (c & 0x01)
                            {
                              // ENCODING.VCMP_A2_H
                              return 1164;
                            }
                            else
                            {
                              // ENCODING.VCMP_A1_H
                              return 1161;
                            }
                          }
                          break;
                        }
                        case 0x06:
                        {
                          if (a & 0x80)
                          {
                            // ENCODING.VRINTZ_vfp_A1_H
                            return 1979;
                          }
                          else
                          {
                            if (c & 0x01)
                            {
                              // ENCODING.VRINTX_vfp_A1_H
                              return 1969;
                            }
                            else
                            {
                              // ENCODING.VRINTR_vfp_A1_H
                              return 1959;
                            }
                          }
                          break;
                        }
                        case 0x08:
                        {
                          if (c & 0x01)
                          {
                            // ENCODING.VRINTN_vfp_A1_H
                            return 1943;
                          }
                          else
                          {
                            // conflicts:
                            // ENCODING.VCVT_vi_A1_H         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                            // ENCODING.VRINTA_vfp_A1_H      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxxxxxx0xxxxxxx
                            // size!=0b00
                            if ((opcode & 0x00000300) != 0x00000000)
                            {
                              // cond!=0b1111
                              if ((opcode & 0xf0000000) != 0xf0000000)
                              {
                                // ENCODING.VCVT_vi_A1_H
                                return 1215;
                              }
                              else
                              {
                                // ENCODING.VRINTA_vfp_A1_H
                                return 1923;
                              }
                            }
                            else
                            {
                              // ENCODING.VCVT_vi_A1_H
                              return 1215;
                            }
                          }
                          break;
                        }
                        case 0x0a:
                        {
                          // conflicts:
                          // ENCODING.VCVT_toxv_A1_H       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xxxxxxxxxxx
                          // ENCODING.VRINTM_vfp_A1_H      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxx1xxxx1xxx0xxxxxxx
                          // ENCODING.VRINTP_vfp_A1_H      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxx0xxxx1xxx0xxxxxxx
                          // size!=0b00
                          if ((opcode & 0x00000300) != 0x00000000)
                          {
                            // cond!=0b1111
                            if ((opcode & 0xf0000000) != 0xf0000000)
                            {
                              // ENCODING.VCVT_toxv_A1_H
                              return 1225;
                            }
                            else
                            {
                              if (c & 0x01)
                              {
                                // ENCODING.VRINTM_vfp_A1_H
                                return 1933;
                              }
                              else
                              {
                                // ENCODING.VRINTP_vfp_A1_H
                                return 1953;
                              }
                            }
                          }
                          else
                          {
                            // ENCODING.VCVT_toxv_A1_H
                            return 1225;
                          }
                          break;
                        }
                        case 0x0c:
                        {
                          if (c & 0x01)
                          {
                            // conflicts:
                            // ENCODING.VCVT_siv_A1_H        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xxxxxxx
                            // ENCODING.VCVTN_vfp_A1_H       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxxxxxxxxxxxxxx
                            // ENCODING.VCVTR_siv_A1_H       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxx
                            // cond!=0b1111
                            if ((opcode & 0xf0000000) != 0xf0000000)
                            {
                              if (a & 0x80)
                              {
                                // ENCODING.VCVT_siv_A1_H
                                return 1204;
                              }
                              else
                              {
                                // ENCODING.VCVTR_siv_A1_H
                                return 1288;
                              }
                            }
                            else
                            {
                              // ENCODING.VCVTN_vfp_A1_H
                              return 1271;
                            }
                          }
                          else
                          {
                            // conflicts:
                            // ENCODING.VCVT_uiv_A1_H        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xxxxxxx
                            // ENCODING.VCVTA_vfp_A1_H       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxxxxxxxxxxxxxx
                            // ENCODING.VCVTR_uiv_A1_H       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxx
                            // cond!=0b1111
                            if ((opcode & 0xf0000000) != 0xf0000000)
                            {
                              if (a & 0x80)
                              {
                                // ENCODING.VCVT_uiv_A1_H
                                return 1203;
                              }
                              else
                              {
                                // ENCODING.VCVTR_uiv_A1_H
                                return 1287;
                              }
                            }
                            else
                            {
                              // ENCODING.VCVTA_vfp_A1_H
                              return 1241;
                            }
                          }
                          break;
                        }
                        case 0x0e:
                        {
                          // conflicts:
                          // ENCODING.VCVT_xv_A1_H         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xxxxxxxxxxx
                          // ENCODING.VCVTM_vfp_A1_H       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxx1xxxx1xxxxxxxxxxx
                          // ENCODING.VCVTP_vfp_A1_H       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxx0xxxx1xxxxxxxxxxx
                          // size!=0b00
                          if ((opcode & 0x00000300) != 0x00000000)
                          {
                            // cond!=0b1111
                            if ((opcode & 0xf0000000) != 0xf0000000)
                            {
                              // ENCODING.VCVT_xv_A1_H
                              return 1226;
                            }
                            else
                            {
                              if (c & 0x01)
                              {
                                // ENCODING.VCVTM_vfp_A1_H
                                return 1261;
                              }
                              else
                              {
                                // ENCODING.VCVTP_vfp_A1_H
                                return 1281;
                              }
                            }
                          }
                          else
                          {
                            // ENCODING.VCVT_xv_A1_H
                            return 1226;
                          }
                          break;
                        }
                        default: break;
                      }
                      break;
                    }
                    default: break;
                  }
                }
              }
            }
            else
            {
              if (b & 0x02)
              {
                // the following switch contains 8 case.
                switch (c & 0xb0)
                {
                  case 0x00:
                  {
                    // ENCODING.VMLS_f_A2_S
                    return 1626;
                    break;
                  }
                  case 0x10:
                  {
                    // ENCODING.VNMLA_A1_S
                    return 1752;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.VNMUL_A1_S
                    return 1764;
                    break;
                  }
                  case 0x30:
                  {
                    // ENCODING.VSUB_f_A2_S
                    return 2215;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.VMINNM_A2_S
                    return 1594;
                    break;
                  }
                  case 0x90:
                  {
                    // ENCODING.VFNMA_A1_S
                    return 1378;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.VFMS_A2_S
                    return 1362;
                    break;
                  }
                  case 0xb0:
                  {
                    // the following switch contains 8 case.
                    switch (c & 0x0e)
                    {
                      case 0x00:
                      {
                        if (a & 0x80)
                        {
                          if (c & 0x01)
                          {
                            // ENCODING.VSQRT_A1_S
                            return 2066;
                          }
                          else
                          {
                            // conflicts:
                            // ENCODING.VABS_A2_S            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                            // ENCODING.VINS_A1              : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxxxxxxxxxxxxxx
                            // cond!=0b1111
                            if ((opcode & 0xf0000000) != 0xf0000000)
                            {
                              // ENCODING.VABS_A2_S
                              return 1030;
                            }
                            else
                            {
                              // ENCODING.VINS_A1
                              return 1397;
                            }
                          }
                        }
                        else
                        {
                          if (c & 0x01)
                          {
                            // ENCODING.VNEG_A2_S
                            return 1744;
                          }
                          else
                          {
                            // conflicts:
                            // ENCODING.VMOV_r_A2_S          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                            // ENCODING.VMOVX_A1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxxxxxxxxxxxxxx
                            // cond!=0b1111
                            if ((opcode & 0xf0000000) != 0xf0000000)
                            {
                              // ENCODING.VMOV_r_A2_S
                              return 1677;
                            }
                            else
                            {
                              // ENCODING.VMOVX_A1
                              return 1697;
                            }
                          }
                        }
                        break;
                      }
                      case 0x02:
                      {
                        if (a & 0x80)
                        {
                          if (c & 0x01)
                          {
                            // ENCODING.VCVTT_A1_HS
                            return 1301;
                          }
                          else
                          {
                            // ENCODING.VCVTT_A1_SH
                            return 1299;
                          }
                        }
                        else
                        {
                          if (c & 0x01)
                          {
                            // ENCODING.VCVTB_A1_HS
                            return 1249;
                          }
                          else
                          {
                            // ENCODING.VCVTB_A1_SH
                            return 1247;
                          }
                        }
                        break;
                      }
                      case 0x04:
                      {
                        if (a & 0x80)
                        {
                          if (c & 0x01)
                          {
                            // ENCODING.VCMPE_A2_S
                            return 1177;
                          }
                          else
                          {
                            // ENCODING.VCMPE_A1_S
                            return 1174;
                          }
                        }
                        else
                        {
                          if (c & 0x01)
                          {
                            // ENCODING.VCMP_A2_S
                            return 1165;
                          }
                          else
                          {
                            // ENCODING.VCMP_A1_S
                            return 1162;
                          }
                        }
                        break;
                      }
                      case 0x06:
                      {
                        if (a & 0x80)
                        {
                          if (c & 0x01)
                          {
                            // ENCODING.VCVT_ds_A1
                            return 1191;
                          }
                          else
                          {
                            // ENCODING.VRINTZ_vfp_A1_S
                            return 1980;
                          }
                        }
                        else
                        {
                          if (c & 0x01)
                          {
                            // ENCODING.VRINTX_vfp_A1_S
                            return 1970;
                          }
                          else
                          {
                            // ENCODING.VRINTR_vfp_A1_S
                            return 1960;
                          }
                        }
                        break;
                      }
                      case 0x08:
                      {
                        if (c & 0x01)
                        {
                          // ENCODING.VRINTN_vfp_A1_S
                          return 1944;
                        }
                        else
                        {
                          // conflicts:
                          // ENCODING.VCVT_vi_A1_S         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                          // ENCODING.VRINTA_vfp_A1_S      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxxxxxx0xxxxxxx
                          // size!=0b00
                          if ((opcode & 0x00000300) != 0x00000000)
                          {
                            // cond!=0b1111
                            if ((opcode & 0xf0000000) != 0xf0000000)
                            {
                              // ENCODING.VCVT_vi_A1_S
                              return 1216;
                            }
                            else
                            {
                              // ENCODING.VRINTA_vfp_A1_S
                              return 1924;
                            }
                          }
                          else
                          {
                            // ENCODING.VCVT_vi_A1_S
                            return 1216;
                          }
                        }
                        break;
                      }
                      case 0x0a:
                      {
                        // conflicts:
                        // ENCODING.VCVT_toxv_A1_S       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx10xxxxxxxxxx
                        // ENCODING.VRINTM_vfp_A1_S      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxx1xxxx10xx0xxxxxxx
                        // ENCODING.VRINTP_vfp_A1_S      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxx0xxxx10xx0xxxxxxx
                        // size!=0b00
                        if ((opcode & 0x00000300) != 0x00000000)
                        {
                          // cond!=0b1111
                          if ((opcode & 0xf0000000) != 0xf0000000)
                          {
                            // ENCODING.VCVT_toxv_A1_S
                            return 1227;
                          }
                          else
                          {
                            if (c & 0x01)
                            {
                              // ENCODING.VRINTM_vfp_A1_S
                              return 1934;
                            }
                            else
                            {
                              // ENCODING.VRINTP_vfp_A1_S
                              return 1954;
                            }
                          }
                        }
                        else
                        {
                          // ENCODING.VCVT_toxv_A1_S
                          return 1227;
                        }
                        break;
                      }
                      case 0x0c:
                      {
                        if (c & 0x01)
                        {
                          // conflicts:
                          // ENCODING.VCVT_siv_A1_S        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xxxxxxx
                          // ENCODING.VCVTN_vfp_A1_S       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxxxxxxxxxxxxxx
                          // ENCODING.VCVTR_siv_A1_S       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxx
                          // cond!=0b1111
                          if ((opcode & 0xf0000000) != 0xf0000000)
                          {
                            if (a & 0x80)
                            {
                              // ENCODING.VCVT_siv_A1_S
                              return 1206;
                            }
                            else
                            {
                              // ENCODING.VCVTR_siv_A1_S
                              return 1290;
                            }
                          }
                          else
                          {
                            // ENCODING.VCVTN_vfp_A1_S
                            return 1272;
                          }
                        }
                        else
                        {
                          // conflicts:
                          // ENCODING.VCVT_uiv_A1_S        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xxxxxxx
                          // ENCODING.VCVTA_vfp_A1_S       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxxxxxxxxxxxxxx
                          // ENCODING.VCVTR_uiv_A1_S       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxx
                          // cond!=0b1111
                          if ((opcode & 0xf0000000) != 0xf0000000)
                          {
                            if (a & 0x80)
                            {
                              // ENCODING.VCVT_uiv_A1_S
                              return 1205;
                            }
                            else
                            {
                              // ENCODING.VCVTR_uiv_A1_S
                              return 1289;
                            }
                          }
                          else
                          {
                            // ENCODING.VCVTA_vfp_A1_S
                            return 1242;
                          }
                        }
                        break;
                      }
                      case 0x0e:
                      {
                        // conflicts:
                        // ENCODING.VCVT_xv_A1_S         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx10xxxxxxxxxx
                        // ENCODING.VCVTM_vfp_A1_S       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxx1xxxx10xxxxxxxxxx
                        // ENCODING.VCVTP_vfp_A1_S       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxx0xxxx10xxxxxxxxxx
                        // size!=0b00
                        if ((opcode & 0x00000300) != 0x00000000)
                        {
                          // cond!=0b1111
                          if ((opcode & 0xf0000000) != 0xf0000000)
                          {
                            // ENCODING.VCVT_xv_A1_S
                            return 1228;
                          }
                          else
                          {
                            if (c & 0x01)
                            {
                              // ENCODING.VCVTM_vfp_A1_S
                              return 1262;
                            }
                            else
                            {
                              // ENCODING.VCVTP_vfp_A1_S
                              return 1282;
                            }
                          }
                        }
                        else
                        {
                          // ENCODING.VCVT_xv_A1_S
                          return 1228;
                        }
                        break;
                      }
                      default: break;
                    }
                    break;
                  }
                  default: break;
                }
              }
              else
              {
                if (c & 0x80)
                {
                  // ENCODING.VCMLA_s_A1_QS
                  return 1156;
                }
                else
                {
                  // ENCODING.VCMLA_s_A1_QH
                  return 1155;
                }
              }
            }
          }
          else
          {
            if (b & 0x01)
            {
              if (b & 0x02)
              {
                // the following switch contains 8 case.
                switch (c & 0xb0)
                {
                  case 0x00:
                  {
                    // conflicts:
                    // ENCODING.VMLA_f_A2_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx10xxxxxxxxxx
                    // ENCODING.VSELEQ_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx10xxxxxxxxxx
                    // size!=0b00
                    if ((opcode & 0x00000300) != 0x00000000)
                    {
                      // cond!=0b1111
                      if ((opcode & 0xf0000000) != 0xf0000000)
                      {
                        // ENCODING.VMLA_f_A2_D
                        return 1605;
                      }
                      else
                      {
                        // ENCODING.VSELEQ_A1_D
                        return 2017;
                      }
                    }
                    else
                    {
                      // ENCODING.VMLA_f_A2_D
                      return 1605;
                    }
                    break;
                  }
                  case 0x10:
                  {
                    // conflicts:
                    // ENCODING.VNMLS_A1_D           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx10xxxxxxxxxx
                    // ENCODING.VSELVS_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx10xxxxxxxxxx
                    // size!=0b00
                    if ((opcode & 0x00000300) != 0x00000000)
                    {
                      // cond!=0b1111
                      if ((opcode & 0xf0000000) != 0xf0000000)
                      {
                        // ENCODING.VNMLS_A1_D
                        return 1759;
                      }
                      else
                      {
                        // ENCODING.VSELVS_A1_D
                        return 2026;
                      }
                    }
                    else
                    {
                      // ENCODING.VNMLS_A1_D
                      return 1759;
                    }
                    break;
                  }
                  case 0x20:
                  {
                    // conflicts:
                    // ENCODING.VMUL_f_A2_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx10xxxxxxxxxx
                    // ENCODING.VSELGE_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx10xxxxxxxxxx
                    // size!=0b00
                    if ((opcode & 0x00000300) != 0x00000000)
                    {
                      // cond!=0b1111
                      if ((opcode & 0xf0000000) != 0xf0000000)
                      {
                        // ENCODING.VMUL_f_A2_D
                        return 1707;
                      }
                      else
                      {
                        // ENCODING.VSELGE_A1_D
                        return 2020;
                      }
                    }
                    else
                    {
                      // ENCODING.VMUL_f_A2_D
                      return 1707;
                    }
                    break;
                  }
                  case 0x30:
                  {
                    // conflicts:
                    // ENCODING.VADD_f_A2_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx10xxxxxxxxxx
                    // ENCODING.VSELGT_A1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx10xxxxxxxxxx
                    // size!=0b00
                    if ((opcode & 0x00000300) != 0x00000000)
                    {
                      // cond!=0b1111
                      if ((opcode & 0xf0000000) != 0xf0000000)
                      {
                        // ENCODING.VADD_f_A2_D
                        return 1049;
                      }
                      else
                      {
                        // ENCODING.VSELGT_A1_D
                        return 2023;
                      }
                    }
                    else
                    {
                      // ENCODING.VADD_f_A2_D
                      return 1049;
                    }
                    break;
                  }
                  case 0x80:
                  {
                    // conflicts:
                    // ENCODING.VDIV_A1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx10xxxxxxxxxx
                    // ENCODING.VMAXNM_A2_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx10xxxxxxxxxx
                    // size!=0b00
                    if ((opcode & 0x00000300) != 0x00000000)
                    {
                      // cond!=0b1111
                      if ((opcode & 0xf0000000) != 0xf0000000)
                      {
                        // ENCODING.VDIV_A1_D
                        return 1311;
                      }
                      else
                      {
                        // ENCODING.VMAXNM_A2_D
                        return 1577;
                      }
                    }
                    else
                    {
                      // ENCODING.VDIV_A1_D
                      return 1311;
                    }
                    break;
                  }
                  case 0x90:
                  {
                    // ENCODING.VFNMS_A1_D
                    return 1385;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.VFMA_A2_D
                    return 1341;
                    break;
                  }
                  case 0xb0:
                  {
                    // ENCODING.VMOV_i_A2_D
                    return 1659;
                    break;
                  }
                  default: break;
                }
              }
              else
              {
                if (b & 0x04)
                {
                  // the following switch contains 3 case.
                  switch (c & 0xa0)
                  {
                    case 0x00:
                    {
                      // ENCODING.VDOT_s_A1_D
                      return 1319;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.VSDOT_s_A1_D
                      return 2013;
                      break;
                    }
                    case 0x80:
                    {
                      // ENCODING.VUSDOT_s_A1_D
                      return 2266;
                      break;
                    }
                    default: break;
                  }
                }
                else
                {
                  // the following switch contains 8 case.
                  switch (c & 0xb0)
                  {
                    case 0x00:
                    {
                      // conflicts:
                      // ENCODING.VMLA_f_A2_H          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xxxxxxxxxxx
                      // ENCODING.VSELEQ_A1_H          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx1xxxxxxxxxxx
                      // size!=0b00
                      if ((opcode & 0x00000300) != 0x00000000)
                      {
                        // cond!=0b1111
                        if ((opcode & 0xf0000000) != 0xf0000000)
                        {
                          // ENCODING.VMLA_f_A2_H
                          return 1603;
                        }
                        else
                        {
                          // ENCODING.VSELEQ_A1_H
                          return 2018;
                        }
                      }
                      else
                      {
                        // ENCODING.VMLA_f_A2_H
                        return 1603;
                      }
                      break;
                    }
                    case 0x10:
                    {
                      // conflicts:
                      // ENCODING.VNMLS_A1_H           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xxxxxxxxxxx
                      // ENCODING.VSELVS_A1_H          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx1xxxxxxxxxxx
                      // size!=0b00
                      if ((opcode & 0x00000300) != 0x00000000)
                      {
                        // cond!=0b1111
                        if ((opcode & 0xf0000000) != 0xf0000000)
                        {
                          // ENCODING.VNMLS_A1_H
                          return 1757;
                        }
                        else
                        {
                          // ENCODING.VSELVS_A1_H
                          return 2027;
                        }
                      }
                      else
                      {
                        // ENCODING.VNMLS_A1_H
                        return 1757;
                      }
                      break;
                    }
                    case 0x20:
                    {
                      // conflicts:
                      // ENCODING.VMUL_f_A2_H          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xxxxxxxxxxx
                      // ENCODING.VSELGE_A1_H          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx1xxxxxxxxxxx
                      // size!=0b00
                      if ((opcode & 0x00000300) != 0x00000000)
                      {
                        // cond!=0b1111
                        if ((opcode & 0xf0000000) != 0xf0000000)
                        {
                          // ENCODING.VMUL_f_A2_H
                          return 1705;
                        }
                        else
                        {
                          // ENCODING.VSELGE_A1_H
                          return 2021;
                        }
                      }
                      else
                      {
                        // ENCODING.VMUL_f_A2_H
                        return 1705;
                      }
                      break;
                    }
                    case 0x30:
                    {
                      // conflicts:
                      // ENCODING.VADD_f_A2_H          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xxxxxxxxxxx
                      // ENCODING.VSELGT_A1_H          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx1xxxxxxxxxxx
                      // size!=0b00
                      if ((opcode & 0x00000300) != 0x00000000)
                      {
                        // cond!=0b1111
                        if ((opcode & 0xf0000000) != 0xf0000000)
                        {
                          // ENCODING.VADD_f_A2_H
                          return 1047;
                        }
                        else
                        {
                          // ENCODING.VSELGT_A1_H
                          return 2024;
                        }
                      }
                      else
                      {
                        // ENCODING.VADD_f_A2_H
                        return 1047;
                      }
                      break;
                    }
                    case 0x80:
                    {
                      // conflicts:
                      // ENCODING.VDIV_A1_H            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xxxxxxxxxxx
                      // ENCODING.VMAXNM_A2_H          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx1xxxxxxxxxxx
                      // size!=0b00
                      if ((opcode & 0x00000300) != 0x00000000)
                      {
                        // cond!=0b1111
                        if ((opcode & 0xf0000000) != 0xf0000000)
                        {
                          // ENCODING.VDIV_A1_H
                          return 1309;
                        }
                        else
                        {
                          // ENCODING.VMAXNM_A2_H
                          return 1575;
                        }
                      }
                      else
                      {
                        // ENCODING.VDIV_A1_H
                        return 1309;
                      }
                      break;
                    }
                    case 0x90:
                    {
                      // ENCODING.VFNMS_A1_H
                      return 1383;
                      break;
                    }
                    case 0xa0:
                    {
                      // ENCODING.VFMA_A2_H
                      return 1339;
                      break;
                    }
                    case 0xb0:
                    {
                      // ENCODING.VMOV_i_A2_H
                      return 1657;
                      break;
                    }
                    default: break;
                  }
                }
              }
            }
            else
            {
              if (b & 0x02)
              {
                // the following switch contains 8 case.
                switch (c & 0xb0)
                {
                  case 0x00:
                  {
                    // conflicts:
                    // ENCODING.VMLA_f_A2_S          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx10xxxxxxxxxx
                    // ENCODING.VSELEQ_A1_S          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx10xxxxxxxxxx
                    // size!=0b00
                    if ((opcode & 0x00000300) != 0x00000000)
                    {
                      // cond!=0b1111
                      if ((opcode & 0xf0000000) != 0xf0000000)
                      {
                        // ENCODING.VMLA_f_A2_S
                        return 1604;
                      }
                      else
                      {
                        // ENCODING.VSELEQ_A1_S
                        return 2019;
                      }
                    }
                    else
                    {
                      // ENCODING.VMLA_f_A2_S
                      return 1604;
                    }
                    break;
                  }
                  case 0x10:
                  {
                    // conflicts:
                    // ENCODING.VNMLS_A1_S           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx10xxxxxxxxxx
                    // ENCODING.VSELVS_A1_S          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx10xxxxxxxxxx
                    // size!=0b00
                    if ((opcode & 0x00000300) != 0x00000000)
                    {
                      // cond!=0b1111
                      if ((opcode & 0xf0000000) != 0xf0000000)
                      {
                        // ENCODING.VNMLS_A1_S
                        return 1758;
                      }
                      else
                      {
                        // ENCODING.VSELVS_A1_S
                        return 2028;
                      }
                    }
                    else
                    {
                      // ENCODING.VNMLS_A1_S
                      return 1758;
                    }
                    break;
                  }
                  case 0x20:
                  {
                    // conflicts:
                    // ENCODING.VMUL_f_A2_S          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx10xxxxxxxxxx
                    // ENCODING.VSELGE_A1_S          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx10xxxxxxxxxx
                    // size!=0b00
                    if ((opcode & 0x00000300) != 0x00000000)
                    {
                      // cond!=0b1111
                      if ((opcode & 0xf0000000) != 0xf0000000)
                      {
                        // ENCODING.VMUL_f_A2_S
                        return 1706;
                      }
                      else
                      {
                        // ENCODING.VSELGE_A1_S
                        return 2022;
                      }
                    }
                    else
                    {
                      // ENCODING.VMUL_f_A2_S
                      return 1706;
                    }
                    break;
                  }
                  case 0x30:
                  {
                    // conflicts:
                    // ENCODING.VADD_f_A2_S          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx10xxxxxxxxxx
                    // ENCODING.VSELGT_A1_S          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx10xxxxxxxxxx
                    // size!=0b00
                    if ((opcode & 0x00000300) != 0x00000000)
                    {
                      // cond!=0b1111
                      if ((opcode & 0xf0000000) != 0xf0000000)
                      {
                        // ENCODING.VADD_f_A2_S
                        return 1048;
                      }
                      else
                      {
                        // ENCODING.VSELGT_A1_S
                        return 2025;
                      }
                    }
                    else
                    {
                      // ENCODING.VADD_f_A2_S
                      return 1048;
                    }
                    break;
                  }
                  case 0x80:
                  {
                    // conflicts:
                    // ENCODING.VDIV_A1_S            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx10xxxxxxxxxx
                    // ENCODING.VMAXNM_A2_S          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx10xxxxxxxxxx
                    // size!=0b00
                    if ((opcode & 0x00000300) != 0x00000000)
                    {
                      // cond!=0b1111
                      if ((opcode & 0xf0000000) != 0xf0000000)
                      {
                        // ENCODING.VDIV_A1_S
                        return 1310;
                      }
                      else
                      {
                        // ENCODING.VMAXNM_A2_S
                        return 1576;
                      }
                    }
                    else
                    {
                      // ENCODING.VDIV_A1_S
                      return 1310;
                    }
                    break;
                  }
                  case 0x90:
                  {
                    // ENCODING.VFNMS_A1_S
                    return 1384;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.VFMA_A2_S
                    return 1340;
                    break;
                  }
                  case 0xb0:
                  {
                    // ENCODING.VMOV_i_A2_S
                    return 1658;
                    break;
                  }
                  default: break;
                }
              }
              else
              {
                if (c & 0x80)
                {
                  // ENCODING.VCMLA_s_A1_DS
                  return 1154;
                }
                else
                {
                  // ENCODING.VCMLA_s_A1_DH
                  return 1153;
                }
              }
            }
          }
        }
      }
      break;
    }
    default: break;
  }
  return 0;
};

