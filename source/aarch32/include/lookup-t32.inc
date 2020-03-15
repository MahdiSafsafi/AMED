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
aarch32_lookup_t32(uint32_t opcode)
{
  unsigned char a = (opcode >> 0 ) & 0xff;
  unsigned char b = (opcode >> 8 ) & 0xff;
  unsigned char c = (opcode >> 16) & 0xff;
  unsigned char d = (opcode >> 24) & 0xff;
  
  if (d & 0x08)
  {
    // the following switch contains 4 case.
    switch (d & 0x06)
    {
      case 0x00:
      {
        if (c & 0x10)
        {
          if (c & 0x40)
          {
            if (d & 0x10)
            {
              // conflicts:
              // ENCODING.LDR_i_T3             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx01x0xxxxxxxxxxxxxxxxxxxxx
              // ENCODING.LDR_i_T4_off         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx00x0xxxxxxxxx1100xxxxxxxx
              // ENCODING.LDR_i_T4_post        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx00x0xxxxxxxxx10x1xxxxxxxx
              // ENCODING.LDR_i_T4_pre         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx00x0xxxxxxxxx11x1xxxxxxxx
              // ENCODING.LDR_l_T2             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx0xx0x1111xxxxxxxxxxxxxxxx
              // ENCODING.LDR_r_T2             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx00x0xxxxxxxxx000000xxxxxx
              // ENCODING.LDRT_T1              : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx00x0xxxxxxxxx1110xxxxxxxx
              // Rn!=0b1111
              if ((opcode & 0x000f0000) != 0x000f0000)
              {
                if (c & 0x80)
                {
                  // ENCODING.LDR_i_T3
                  return 231;
                }
                else
                {
                  // the following switch contains 4 case.
                  switch (b & 0x0d)
                  {
                    case 0x00:
                    {
                      // ENCODING.LDR_r_T2
                      return 242;
                      break;
                    }
                    case 0x09:
                    {
                      // ENCODING.LDR_i_T4_post
                      return 233;
                      break;
                    }
                    case 0x0c:
                    {
                      if (b & 0x02)
                      {
                        // ENCODING.LDRT_T1
                        return 334;
                      }
                      else
                      {
                        // ENCODING.LDR_i_T4_off
                        return 232;
                      }
                      break;
                    }
                    case 0x0d:
                    {
                      // ENCODING.LDR_i_T4_pre
                      return 234;
                      break;
                    }
                    default: break;
                  }
                }
              }
              else
              {
                // ENCODING.LDR_l_T2
                return 237;
              }
            }
            else
            {
              // conflicts:
              // ENCODING.LDA_T1               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx01x0xxxxxxxxx111110101111
              // ENCODING.LDAB_T1              : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx01x0xxxxxxxxx111110001111
              // ENCODING.LDAEX_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx01x0xxxxxxxxx111111101111
              // ENCODING.LDAEXB_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx01x0xxxxxxxxx111111001111
              // ENCODING.LDAEXD_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx01x0xxxxxxxxxxxxx11111111
              // ENCODING.LDAEXH_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx01x0xxxxxxxxx111111011111
              // ENCODING.LDAH_T1              : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx01x0xxxxxxxxx111110011111
              // ENCODING.LDRD_i_T1_off        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx1xx0xxxxxxxxxxxxxxxxxxxxx
              // ENCODING.LDRD_i_T1_post       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx0xx1xxxxxxxxxxxxxxxxxxxxx
              // ENCODING.LDRD_i_T1_pre        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx1xx1xxxxxxxxxxxxxxxxxxxxx
              // ENCODING.LDRD_l_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxx1111xxxxxxxxxxxxxxxx
              // ENCODING.LDREX_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx00x0xxxxxxxxx1111xxxxxxxx
              // ENCODING.LDREXB_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx01x0xxxxxxxxx111101001111
              // ENCODING.LDREXD_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx01x0xxxxxxxxxxxxx01111111
              // ENCODING.LDREXH_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx01x0xxxxxxxxx111101011111
              // ENCODING.TBB_T1               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx01x0xxxxx111100000000xxxx
              // ENCODING.TBH_T1               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx01x0xxxxx111100000001xxxx
              // P:W!=0b00
              if ((opcode & 0x01200000) != 0x00000000)
              {
                // Rn!=0b1111
                if ((opcode & 0x000f0000) != 0x000f0000)
                {
                  if (c & 0x20)
                  {
                    if (d & 0x01)
                    {
                      // ENCODING.LDRD_i_T1_pre
                      return 266;
                    }
                    else
                    {
                      // ENCODING.LDRD_i_T1_post
                      return 265;
                    }
                  }
                  else
                  {
                    // ENCODING.LDRD_i_T1_off
                    return 264;
                  }
                }
                else
                {
                  // ENCODING.LDRD_l_T1
                  return 268;
                }
              }
              else
              {
                if (c & 0x80)
                {
                  // the following switch contains 12 case.
                  switch (a & 0xf0)
                  {
                    case 0x00:
                    {
                      // ENCODING.TBB_T1
                      return 808;
                      break;
                    }
                    case 0x10:
                    {
                      // ENCODING.TBH_T1
                      return 809;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.LDREXB_T1
                      return 275;
                      break;
                    }
                    case 0x50:
                    {
                      // ENCODING.LDREXH_T1
                      return 279;
                      break;
                    }
                    case 0x70:
                    {
                      // ENCODING.LDREXD_T1
                      return 277;
                      break;
                    }
                    case 0x80:
                    {
                      // ENCODING.LDAB_T1
                      return 196;
                      break;
                    }
                    case 0x90:
                    {
                      // ENCODING.LDAH_T1
                      return 206;
                      break;
                    }
                    case 0xa0:
                    {
                      // ENCODING.LDA_T1
                      return 194;
                      break;
                    }
                    case 0xc0:
                    {
                      // ENCODING.LDAEXB_T1
                      return 200;
                      break;
                    }
                    case 0xd0:
                    {
                      // ENCODING.LDAEXH_T1
                      return 204;
                      break;
                    }
                    case 0xe0:
                    {
                      // ENCODING.LDAEX_T1
                      return 198;
                      break;
                    }
                    case 0xf0:
                    {
                      // ENCODING.LDAEXD_T1
                      return 202;
                      break;
                    }
                    default: break;
                  }
                }
                else
                {
                  // ENCODING.LDREX_T1
                  return 273;
                }
              }
            }
          }
          else
          {
            // the following switch contains 4 case.
            switch (d & 0x11)
            {
              case 0x00:
              {
                if (c & 0x80)
                {
                  // ENCODING.LDM_T2
                  return 219;
                }
                else
                {
                  // ENCODING.RFE_T1_AS
                  return 491;
                }
                break;
              }
              case 0x01:
              {
                if (c & 0x80)
                {
                  // ENCODING.RFE_T2_AS
                  return 492;
                }
                else
                {
                  // ENCODING.LDMDB_T1
                  return 224;
                }
                break;
              }
              case 0x10:
              {
                if (c & 0x20)
                {
                  // conflicts:
                  // ENCODING.LDRH_i_T2            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx1xxxxxxxxxxxxxxxxxxxxxxx
                  // ENCODING.LDRH_i_T3_off        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx0xxxxxxxxxxx1100xxxxxxxx
                  // ENCODING.LDRH_i_T3_post       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx0xxxxxxxxxxx10x1xxxxxxxx
                  // ENCODING.LDRH_i_T3_pre        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx0xxxxxxxxxxx11x1xxxxxxxx
                  // ENCODING.LDRH_l_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxx1111xxxxxxxxxxxxxxxx
                  // ENCODING.LDRH_r_T2            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx0xxxxxxxxxxx000000xxxxxx
                  // ENCODING.LDRHT_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx0xxxxxxxxxxx1110xxxxxxxx
                  // ENCODING.PLDW_i_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx1xxxxxxx1111xxxxxxxxxxxx
                  // ENCODING.PLDW_i_T2            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx0xxxxxxx11111100xxxxxxxx
                  // ENCODING.PLDW_r_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx0xxxxxxx1111000000xxxxxx
                  // Rn!=0b1111
                  if ((opcode & 0x000f0000) != 0x000f0000)
                  {
                    if (c & 0x80)
                    {
                      // Rt!=0b1111
                      if ((opcode & 0x0000f000) != 0x0000f000)
                      {
                        // ENCODING.LDRH_i_T2
                        return 284;
                      }
                      else
                      {
                        // ENCODING.PLDW_i_T1
                        return 434;
                      }
                    }
                    else
                    {
                      // the following switch contains 4 case.
                      switch (b & 0x0d)
                      {
                        case 0x00:
                        {
                          // Rt!=0b1111
                          if ((opcode & 0x0000f000) != 0x0000f000)
                          {
                            // ENCODING.LDRH_r_T2
                            return 294;
                          }
                          else
                          {
                            // ENCODING.PLDW_r_T1
                            return 444;
                          }
                          break;
                        }
                        case 0x09:
                        {
                          // ENCODING.LDRH_i_T3_post
                          return 286;
                          break;
                        }
                        case 0x0c:
                        {
                          if (b & 0x02)
                          {
                            // ENCODING.LDRHT_T1
                            return 297;
                          }
                          else
                          {
                            // Rt!=0b1111
                            if ((opcode & 0x0000f000) != 0x0000f000)
                            {
                              // ENCODING.LDRH_i_T3_off
                              return 285;
                            }
                            else
                            {
                              // ENCODING.PLDW_i_T2
                              return 436;
                            }
                          }
                          break;
                        }
                        case 0x0d:
                        {
                          // ENCODING.LDRH_i_T3_pre
                          return 287;
                          break;
                        }
                        default: break;
                      }
                    }
                  }
                  else
                  {
                    // ENCODING.LDRH_l_T1
                    return 289;
                  }
                }
                else
                {
                  // conflicts:
                  // ENCODING.LDRB_i_T2            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx1xxxxxxxxxxxxxxxxxxxxxxx
                  // ENCODING.LDRB_i_T3_off        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx0xxxxxxxxxxx1100xxxxxxxx
                  // ENCODING.LDRB_i_T3_post       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx0xxxxxxxxxxx10x1xxxxxxxx
                  // ENCODING.LDRB_i_T3_pre        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx0xxxxxxxxxxx11x1xxxxxxxx
                  // ENCODING.LDRB_l_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxx1111xxxxxxxxxxxxxxxx
                  // ENCODING.LDRB_r_T2            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx0xxxxxxxxxxx000000xxxxxx
                  // ENCODING.LDRBT_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx0xxxxxxxxxxx1110xxxxxxxx
                  // ENCODING.PLD_i_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx1xxxxxxx1111xxxxxxxxxxxx
                  // ENCODING.PLD_i_T2             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx0xxxxxxx11111100xxxxxxxx
                  // ENCODING.PLD_l_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxx11111111xxxxxxxxxxxx
                  // ENCODING.PLD_r_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx0xxxxxxx1111000000xxxxxx
                  // Rn!=0b1111
                  if ((opcode & 0x000f0000) != 0x000f0000)
                  {
                    if (c & 0x80)
                    {
                      // Rt!=0b1111
                      if ((opcode & 0x0000f000) != 0x0000f000)
                      {
                        // ENCODING.LDRB_i_T2
                        return 247;
                      }
                      else
                      {
                        // ENCODING.PLD_i_T1
                        return 433;
                      }
                    }
                    else
                    {
                      // the following switch contains 4 case.
                      switch (b & 0x0d)
                      {
                        case 0x00:
                        {
                          // Rt!=0b1111
                          if ((opcode & 0x0000f000) != 0x0000f000)
                          {
                            // ENCODING.LDRB_r_T2
                            return 257;
                          }
                          else
                          {
                            // ENCODING.PLD_r_T1
                            return 443;
                          }
                          break;
                        }
                        case 0x09:
                        {
                          // ENCODING.LDRB_i_T3_post
                          return 249;
                          break;
                        }
                        case 0x0c:
                        {
                          if (b & 0x02)
                          {
                            // ENCODING.LDRBT_T1
                            return 260;
                          }
                          else
                          {
                            // Rt!=0b1111
                            if ((opcode & 0x0000f000) != 0x0000f000)
                            {
                              // ENCODING.LDRB_i_T3_off
                              return 248;
                            }
                            else
                            {
                              // ENCODING.PLD_i_T2
                              return 435;
                            }
                          }
                          break;
                        }
                        case 0x0d:
                        {
                          // ENCODING.LDRB_i_T3_pre
                          return 250;
                          break;
                        }
                        default: break;
                      }
                    }
                  }
                  else
                  {
                    // Rt!=0b1111
                    if ((opcode & 0x0000f000) != 0x0000f000)
                    {
                      // ENCODING.LDRB_l_T1
                      return 252;
                    }
                    else
                    {
                      // ENCODING.PLD_l_T1
                      return 438;
                    }
                  }
                }
                break;
              }
              case 0x11:
              {
                if (c & 0x20)
                {
                  // conflicts:
                  // ENCODING.LDRSH_i_T1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx1xxxxxxxxxxxxxxxxxxxxxxx
                  // ENCODING.LDRSH_i_T2_off       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx0xxxxxxxxxxx1100xxxxxxxx
                  // ENCODING.LDRSH_i_T2_post      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx0xxxxxxxxxxx10x1xxxxxxxx
                  // ENCODING.LDRSH_i_T2_pre       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx0xxxxxxxxxxx11x1xxxxxxxx
                  // ENCODING.LDRSH_l_T1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxx1111xxxxxxxxxxxxxxxx
                  // ENCODING.LDRSH_r_T2           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx0xxxxxxxxxxx000000xxxxxx
                  // ENCODING.LDRSHT_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx0xxxxxxxxxxx1110xxxxxxxx
                  // Rn!=0b1111
                  if ((opcode & 0x000f0000) != 0x000f0000)
                  {
                    if (c & 0x80)
                    {
                      // ENCODING.LDRSH_i_T1
                      return 318;
                    }
                    else
                    {
                      // the following switch contains 4 case.
                      switch (b & 0x0d)
                      {
                        case 0x00:
                        {
                          // ENCODING.LDRSH_r_T2
                          return 328;
                          break;
                        }
                        case 0x09:
                        {
                          // ENCODING.LDRSH_i_T2_post
                          return 320;
                          break;
                        }
                        case 0x0c:
                        {
                          if (b & 0x02)
                          {
                            // ENCODING.LDRSHT_T1
                            return 331;
                          }
                          else
                          {
                            // ENCODING.LDRSH_i_T2_off
                            return 319;
                          }
                          break;
                        }
                        case 0x0d:
                        {
                          // ENCODING.LDRSH_i_T2_pre
                          return 321;
                          break;
                        }
                        default: break;
                      }
                    }
                  }
                  else
                  {
                    // ENCODING.LDRSH_l_T1
                    return 323;
                  }
                }
                else
                {
                  // conflicts:
                  // ENCODING.LDRSB_i_T1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx1xxxxxxxxxxxxxxxxxxxxxxx
                  // ENCODING.LDRSB_i_T2_off       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx0xxxxxxxxxxx1100xxxxxxxx
                  // ENCODING.LDRSB_i_T2_post      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx0xxxxxxxxxxx10x1xxxxxxxx
                  // ENCODING.LDRSB_i_T2_pre       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx0xxxxxxxxxxx11x1xxxxxxxx
                  // ENCODING.LDRSB_l_T1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxx1111xxxxxxxxxxxxxxxx
                  // ENCODING.LDRSB_r_T2           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx0xxxxxxxxxxx000000xxxxxx
                  // ENCODING.LDRSBT_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx0xxxxxxxxxxx1110xxxxxxxx
                  // ENCODING.PLI_i_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx1xxxxxxx1111xxxxxxxxxxxx
                  // ENCODING.PLI_i_T2             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx0xxxxxxx11111100xxxxxxxx
                  // ENCODING.PLI_i_T3             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxx11111111xxxxxxxxxxxx
                  // ENCODING.PLI_r_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx0xxxxxxx1111000000xxxxxx
                  // Rn!=0b1111
                  if ((opcode & 0x000f0000) != 0x000f0000)
                  {
                    if (c & 0x80)
                    {
                      // Rt!=0b1111
                      if ((opcode & 0x0000f000) != 0x0000f000)
                      {
                        // ENCODING.LDRSB_i_T1
                        return 301;
                      }
                      else
                      {
                        // ENCODING.PLI_i_T1
                        return 446;
                      }
                    }
                    else
                    {
                      // the following switch contains 4 case.
                      switch (b & 0x0d)
                      {
                        case 0x00:
                        {
                          // Rt!=0b1111
                          if ((opcode & 0x0000f000) != 0x0000f000)
                          {
                            // ENCODING.LDRSB_r_T2
                            return 311;
                          }
                          else
                          {
                            // ENCODING.PLI_r_T1
                            return 451;
                          }
                          break;
                        }
                        case 0x09:
                        {
                          // ENCODING.LDRSB_i_T2_post
                          return 303;
                          break;
                        }
                        case 0x0c:
                        {
                          if (b & 0x02)
                          {
                            // ENCODING.LDRSBT_T1
                            return 314;
                          }
                          else
                          {
                            // Rt!=0b1111
                            if ((opcode & 0x0000f000) != 0x0000f000)
                            {
                              // ENCODING.LDRSB_i_T2_off
                              return 302;
                            }
                            else
                            {
                              // ENCODING.PLI_i_T2
                              return 447;
                            }
                          }
                          break;
                        }
                        case 0x0d:
                        {
                          // ENCODING.LDRSB_i_T2_pre
                          return 304;
                          break;
                        }
                        default: break;
                      }
                    }
                  }
                  else
                  {
                    // Rt!=0b1111
                    if ((opcode & 0x0000f000) != 0x0000f000)
                    {
                      // ENCODING.LDRSB_l_T1
                      return 306;
                    }
                    else
                    {
                      // ENCODING.PLI_i_T3
                      return 448;
                    }
                  }
                }
                break;
              }
              default: break;
            }
          }
        }
        else
        {
          // the following switch contains 4 case.
          switch (d & 0x11)
          {
            case 0x00:
            {
              if (c & 0x40)
              {
                if (c & 0x20)
                {
                  // ENCODING.STRD_i_T1_post
                  return 727;
                }
                else
                {
                  if (c & 0x80)
                  {
                    // the following switch contains 10 case.
                    switch ((a & 0xf0) - 64)
                    {
                      case 0x00:
                      {
                        // ENCODING.STREXB_T1
                        return 735;
                        break;
                      }
                      case 0x10:
                      {
                        // ENCODING.STREXH_T1
                        return 739;
                        break;
                      }
                      case 0x30:
                      {
                        // ENCODING.STREXD_T1
                        return 737;
                        break;
                      }
                      case 0x40:
                      {
                        // ENCODING.STLB_T1
                        return 674;
                        break;
                      }
                      case 0x50:
                      {
                        // ENCODING.STLH_T1
                        return 684;
                        break;
                      }
                      case 0x60:
                      {
                        // ENCODING.STL_T1
                        return 672;
                        break;
                      }
                      case 0x80:
                      {
                        // ENCODING.STLEXB_T1
                        return 678;
                        break;
                      }
                      case 0x90:
                      {
                        // ENCODING.STLEXH_T1
                        return 682;
                        break;
                      }
                      case 0xa0:
                      {
                        // ENCODING.STLEX_T1
                        return 676;
                        break;
                      }
                      case 0xb0:
                      {
                        // ENCODING.STLEXD_T1
                        return 680;
                        break;
                      }
                      default: break;
                    }
                  }
                  else
                  {
                    // ENCODING.STREX_T1
                    return 733;
                  }
                }
              }
              else
              {
                if (b & 0x80)
                {
                  // ENCODING.SRS_T1_AS
                  return 647;
                }
                else
                {
                  // ENCODING.STM_T2
                  return 687;
                }
              }
              break;
            }
            case 0x01:
            {
              if (c & 0x40)
              {
                if (c & 0x20)
                {
                  // ENCODING.STRD_i_T1_pre
                  return 728;
                }
                else
                {
                  // ENCODING.STRD_i_T1_off
                  return 726;
                }
              }
              else
              {
                if (b & 0x80)
                {
                  // ENCODING.SRS_T2_AS
                  return 648;
                }
                else
                {
                  // ENCODING.STMDB_T1
                  return 691;
                }
              }
              break;
            }
            case 0x10:
            {
              // the following switch contains 6 case.
              switch (c & 0xe0)
              {
                case 0x00:
                {
                  // the following switch contains 4 case.
                  switch (b & 0x0d)
                  {
                    case 0x00:
                    {
                      // ENCODING.STRB_r_T2
                      return 719;
                      break;
                    }
                    case 0x09:
                    {
                      // ENCODING.STRB_i_T3_post
                      return 713;
                      break;
                    }
                    case 0x0c:
                    {
                      if (b & 0x02)
                      {
                        // ENCODING.STRBT_T1
                        return 722;
                      }
                      else
                      {
                        // ENCODING.STRB_i_T3_offn
                        return 712;
                      }
                      break;
                    }
                    case 0x0d:
                    {
                      // ENCODING.STRB_i_T3_pre
                      return 714;
                      break;
                    }
                    default: break;
                  }
                  break;
                }
                case 0x20:
                {
                  // the following switch contains 4 case.
                  switch (b & 0x0d)
                  {
                    case 0x00:
                    {
                      // ENCODING.STRH_r_T2
                      return 752;
                      break;
                    }
                    case 0x09:
                    {
                      // ENCODING.STRH_i_T3_post
                      return 746;
                      break;
                    }
                    case 0x0c:
                    {
                      if (b & 0x02)
                      {
                        // ENCODING.STRHT_T1
                        return 755;
                      }
                      else
                      {
                        // ENCODING.STRH_i_T3_offn
                        return 745;
                      }
                      break;
                    }
                    case 0x0d:
                    {
                      // ENCODING.STRH_i_T3_pre
                      return 747;
                      break;
                    }
                    default: break;
                  }
                  break;
                }
                case 0x40:
                {
                  // the following switch contains 4 case.
                  switch (b & 0x0d)
                  {
                    case 0x00:
                    {
                      // ENCODING.STR_r_T2
                      return 706;
                      break;
                    }
                    case 0x09:
                    {
                      // ENCODING.STR_i_T4_post
                      return 700;
                      break;
                    }
                    case 0x0c:
                    {
                      if (b & 0x02)
                      {
                        // ENCODING.STRT_T1
                        return 758;
                      }
                      else
                      {
                        // ENCODING.STR_i_T4_off
                        return 699;
                      }
                      break;
                    }
                    case 0x0d:
                    {
                      // ENCODING.STR_i_T4_pre
                      return 701;
                      break;
                    }
                    default: break;
                  }
                  break;
                }
                case 0x80:
                {
                  // ENCODING.STRB_i_T2
                  return 711;
                  break;
                }
                case 0xa0:
                {
                  // ENCODING.STRH_i_T2
                  return 744;
                  break;
                }
                case 0xc0:
                {
                  // ENCODING.STR_i_T3
                  return 698;
                  break;
                }
                default: break;
              }
              break;
            }
            case 0x11:
            {
              if (b & 0x02)
              {
                if (b & 0x01)
                {
                  if (b & 0x04)
                  {
                    if (b & 0x08)
                    {
                      // conflicts:
                      // ENCODING.VLD4_a_T1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx1x1xxxxxxxxxxxxxxxxx1111
                      // ENCODING.VLD4_a_T1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx1x1xxxxxxxxxxxxxxxxx1101
                      // ENCODING.VLD4_a_T1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx1x1xxxxxxxxxxxxxxxxxxxxx
                      // Rm!=0b11x1
                      if ((opcode & 0x0000000d) != 0x0000000d)
                      {
                        // ENCODING.VLD4_a_T1_postr
                        return 1538;
                      }
                      else
                      {
                        if (a & 0x02)
                        {
                          // ENCODING.VLD4_a_T1_nowb
                          return 1536;
                        }
                        else
                        {
                          // ENCODING.VLD4_a_T1_posti
                          return 1537;
                        }
                      }
                    }
                    else
                    {
                      // the following switch contains 4 case.
                      switch (c & 0xa0)
                      {
                        case 0x00:
                        {
                          // conflicts:
                          // ENCODING.VST1_m_T1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1111
                          // ENCODING.VST1_m_T1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1101
                          // ENCODING.VST1_m_T1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                          // Rm!=0b11x1
                          if ((opcode & 0x0000000d) != 0x0000000d)
                          {
                            // ENCODING.VST1_m_T1_postr
                            return 2111;
                          }
                          else
                          {
                            if (a & 0x02)
                            {
                              // ENCODING.VST1_m_T1_nowb
                              return 2109;
                            }
                            else
                            {
                              // ENCODING.VST1_m_T1_posti
                              return 2110;
                            }
                          }
                          break;
                        }
                        case 0x20:
                        {
                          // conflicts:
                          // ENCODING.VLD1_m_T1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1111
                          // ENCODING.VLD1_m_T1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1101
                          // ENCODING.VLD1_m_T1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                          // Rm!=0b11x1
                          if ((opcode & 0x0000000d) != 0x0000000d)
                          {
                            // ENCODING.VLD1_m_T1_postr
                            return 1439;
                          }
                          else
                          {
                            if (a & 0x02)
                            {
                              // ENCODING.VLD1_m_T1_nowb
                              return 1437;
                            }
                            else
                            {
                              // ENCODING.VLD1_m_T1_posti
                              return 1438;
                            }
                          }
                          break;
                        }
                        case 0x80:
                        {
                          // conflicts:
                          // ENCODING.VST4_1_T2_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1111
                          // ENCODING.VST4_1_T2_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1101
                          // ENCODING.VST4_1_T2_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                          // Rm!=0b11x1
                          if ((opcode & 0x0000000d) != 0x0000000d)
                          {
                            // ENCODING.VST4_1_T2_postr
                            return 2188;
                          }
                          else
                          {
                            if (a & 0x02)
                            {
                              // ENCODING.VST4_1_T2_nowb
                              return 2186;
                            }
                            else
                            {
                              // ENCODING.VST4_1_T2_posti
                              return 2187;
                            }
                          }
                          break;
                        }
                        case 0xa0:
                        {
                          // conflicts:
                          // ENCODING.VLD4_1_T2_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1111
                          // ENCODING.VLD4_1_T2_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1101
                          // ENCODING.VLD4_1_T2_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                          // Rm!=0b11x1
                          if ((opcode & 0x0000000d) != 0x0000000d)
                          {
                            // ENCODING.VLD4_1_T2_postr
                            return 1529;
                          }
                          else
                          {
                            if (a & 0x02)
                            {
                              // ENCODING.VLD4_1_T2_nowb
                              return 1527;
                            }
                            else
                            {
                              // ENCODING.VLD4_1_T2_posti
                              return 1528;
                            }
                          }
                          break;
                        }
                        default: break;
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x08)
                    {
                      if (c & 0x20)
                      {
                        // conflicts:
                        // ENCODING.VLD4_1_T3_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx1xxxxxxxxxxxxxxxxxxx1111
                        // ENCODING.VLD4_1_T3_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx1xxxxxxxxxxxxxxxxxxx1101
                        // ENCODING.VLD4_1_T3_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx1xxxxxxxxxxxxxxxxxxxxxxx
                        // Rm!=0b11x1
                        if ((opcode & 0x0000000d) != 0x0000000d)
                        {
                          // ENCODING.VLD4_1_T3_postr
                          return 1532;
                        }
                        else
                        {
                          if (a & 0x02)
                          {
                            // ENCODING.VLD4_1_T3_nowb
                            return 1530;
                          }
                          else
                          {
                            // ENCODING.VLD4_1_T3_posti
                            return 1531;
                          }
                        }
                      }
                      else
                      {
                        // conflicts:
                        // ENCODING.VST4_1_T3_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx1xxxxxxxxxxxxxxxxxxx1111
                        // ENCODING.VST4_1_T3_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx1xxxxxxxxxxxxxxxxxxxxxxx
                        // ENCODING.VST4_1_T3_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx1xxxxxxxxxxxxxxxxxxx1101
                        // Rm!=0b11x1
                        if ((opcode & 0x0000000d) != 0x0000000d)
                        {
                          // ENCODING.VST4_1_T3_postr
                          return 2190;
                        }
                        else
                        {
                          if (a & 0x02)
                          {
                            // ENCODING.VST4_1_T3_nowb
                            return 2189;
                          }
                          else
                          {
                            // ENCODING.VST4_1_T3_posti
                            return 2191;
                          }
                        }
                      }
                    }
                    else
                    {
                      // the following switch contains 4 case.
                      switch (c & 0xa0)
                      {
                        case 0x00:
                        {
                          // conflicts:
                          // ENCODING.VST2_m_T2_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1111
                          // ENCODING.VST2_m_T2_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1101
                          // ENCODING.VST2_m_T2_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                          // Rm!=0b11x1
                          if ((opcode & 0x0000000d) != 0x0000000d)
                          {
                            // ENCODING.VST2_m_T2_postr
                            return 2150;
                          }
                          else
                          {
                            if (a & 0x02)
                            {
                              // ENCODING.VST2_m_T2_nowb
                              return 2148;
                            }
                            else
                            {
                              // ENCODING.VST2_m_T2_posti
                              return 2149;
                            }
                          }
                          break;
                        }
                        case 0x20:
                        {
                          // conflicts:
                          // ENCODING.VLD2_m_T2_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1111
                          // ENCODING.VLD2_m_T2_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1101
                          // ENCODING.VLD2_m_T2_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                          // Rm!=0b11x1
                          if ((opcode & 0x0000000d) != 0x0000000d)
                          {
                            // ENCODING.VLD2_m_T2_postr
                            return 1484;
                          }
                          else
                          {
                            if (a & 0x02)
                            {
                              // ENCODING.VLD2_m_T2_nowb
                              return 1482;
                            }
                            else
                            {
                              // ENCODING.VLD2_m_T2_posti
                              return 1483;
                            }
                          }
                          break;
                        }
                        case 0x80:
                        {
                          // conflicts:
                          // ENCODING.VST4_1_T1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1111
                          // ENCODING.VST4_1_T1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1101
                          // ENCODING.VST4_1_T1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                          // Rm!=0b11x1
                          if ((opcode & 0x0000000d) != 0x0000000d)
                          {
                            // ENCODING.VST4_1_T1_postr
                            return 2185;
                          }
                          else
                          {
                            if (a & 0x02)
                            {
                              // ENCODING.VST4_1_T1_nowb
                              return 2183;
                            }
                            else
                            {
                              // ENCODING.VST4_1_T1_posti
                              return 2184;
                            }
                          }
                          break;
                        }
                        case 0xa0:
                        {
                          // conflicts:
                          // ENCODING.VLD4_1_T1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1111
                          // ENCODING.VLD4_1_T1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1101
                          // ENCODING.VLD4_1_T1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                          // Rm!=0b11x1
                          if ((opcode & 0x0000000d) != 0x0000000d)
                          {
                            // ENCODING.VLD4_1_T1_postr
                            return 1526;
                          }
                          else
                          {
                            if (a & 0x02)
                            {
                              // ENCODING.VLD4_1_T1_nowb
                              return 1524;
                            }
                            else
                            {
                              // ENCODING.VLD4_1_T1_posti
                              return 1525;
                            }
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
                  if (b & 0x04)
                  {
                    if (b & 0x08)
                    {
                      // conflicts:
                      // ENCODING.VLD3_a_T1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx1x1xxxxxxxxxxxxxxxx01111
                      // ENCODING.VLD3_a_T1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx1x1xxxxxxxxxxxxxxxx01101
                      // ENCODING.VLD3_a_T1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx1x1xxxxxxxxxxxxxxxx0xxxx
                      // Rm!=0b11x1
                      if ((opcode & 0x0000000d) != 0x0000000d)
                      {
                        // ENCODING.VLD3_a_T1_postr
                        return 1508;
                      }
                      else
                      {
                        if (a & 0x02)
                        {
                          // ENCODING.VLD3_a_T1_nowb
                          return 1506;
                        }
                        else
                        {
                          // ENCODING.VLD3_a_T1_posti
                          return 1507;
                        }
                      }
                    }
                    else
                    {
                      // the following switch contains 4 case.
                      switch (c & 0xa0)
                      {
                        case 0x00:
                        {
                          // conflicts:
                          // ENCODING.VST1_m_T3_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1111
                          // ENCODING.VST1_m_T3_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1101
                          // ENCODING.VST1_m_T3_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                          // Rm!=0b11x1
                          if ((opcode & 0x0000000d) != 0x0000000d)
                          {
                            // ENCODING.VST1_m_T3_postr
                            return 2117;
                          }
                          else
                          {
                            if (a & 0x02)
                            {
                              // ENCODING.VST1_m_T3_nowb
                              return 2115;
                            }
                            else
                            {
                              // ENCODING.VST1_m_T3_posti
                              return 2116;
                            }
                          }
                          break;
                        }
                        case 0x20:
                        {
                          // conflicts:
                          // ENCODING.VLD1_m_T3_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1111
                          // ENCODING.VLD1_m_T3_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1101
                          // ENCODING.VLD1_m_T3_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                          // Rm!=0b11x1
                          if ((opcode & 0x0000000d) != 0x0000000d)
                          {
                            // ENCODING.VLD1_m_T3_postr
                            return 1445;
                          }
                          else
                          {
                            if (a & 0x02)
                            {
                              // ENCODING.VLD1_m_T3_nowb
                              return 1443;
                            }
                            else
                            {
                              // ENCODING.VLD1_m_T3_posti
                              return 1444;
                            }
                          }
                          break;
                        }
                        case 0x80:
                        {
                          // conflicts:
                          // ENCODING.VST3_1_T2_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1111
                          // ENCODING.VST3_1_T2_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1101
                          // ENCODING.VST3_1_T2_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                          // Rm!=0b11x1
                          if ((opcode & 0x0000000d) != 0x0000000d)
                          {
                            // ENCODING.VST3_1_T2_postr
                            return 2165;
                          }
                          else
                          {
                            if (a & 0x02)
                            {
                              // ENCODING.VST3_1_T2_nowb
                              return 2163;
                            }
                            else
                            {
                              // ENCODING.VST3_1_T2_posti
                              return 2164;
                            }
                          }
                          break;
                        }
                        case 0xa0:
                        {
                          // conflicts:
                          // ENCODING.VLD3_1_T2_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1111
                          // ENCODING.VLD3_1_T2_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1101
                          // ENCODING.VLD3_1_T2_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                          // Rm!=0b11x1
                          if ((opcode & 0x0000000d) != 0x0000000d)
                          {
                            // ENCODING.VLD3_1_T2_postr
                            return 1499;
                          }
                          else
                          {
                            if (a & 0x02)
                            {
                              // ENCODING.VLD3_1_T2_nowb
                              return 1497;
                            }
                            else
                            {
                              // ENCODING.VLD3_1_T2_posti
                              return 1498;
                            }
                          }
                          break;
                        }
                        default: break;
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x08)
                    {
                      // the following switch contains 4 case.
                      switch (c & 0xa0)
                      {
                        case 0x00:
                        {
                          // conflicts:
                          // ENCODING.VST1_m_T2_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1111
                          // ENCODING.VST1_m_T2_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1101
                          // ENCODING.VST1_m_T2_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                          // Rm!=0b11x1
                          if ((opcode & 0x0000000d) != 0x0000000d)
                          {
                            // ENCODING.VST1_m_T2_postr
                            return 2114;
                          }
                          else
                          {
                            if (a & 0x02)
                            {
                              // ENCODING.VST1_m_T2_nowb
                              return 2112;
                            }
                            else
                            {
                              // ENCODING.VST1_m_T2_posti
                              return 2113;
                            }
                          }
                          break;
                        }
                        case 0x20:
                        {
                          // conflicts:
                          // ENCODING.VLD1_m_T2_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1111
                          // ENCODING.VLD1_m_T2_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1101
                          // ENCODING.VLD1_m_T2_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                          // Rm!=0b11x1
                          if ((opcode & 0x0000000d) != 0x0000000d)
                          {
                            // ENCODING.VLD1_m_T2_postr
                            return 1442;
                          }
                          else
                          {
                            if (a & 0x02)
                            {
                              // ENCODING.VLD1_m_T2_nowb
                              return 1440;
                            }
                            else
                            {
                              // ENCODING.VLD1_m_T2_posti
                              return 1441;
                            }
                          }
                          break;
                        }
                        case 0x80:
                        {
                          // conflicts:
                          // ENCODING.VST3_1_T3_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1111
                          // ENCODING.VST3_1_T3_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1101
                          // ENCODING.VST3_1_T3_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                          // Rm!=0b11x1
                          if ((opcode & 0x0000000d) != 0x0000000d)
                          {
                            // ENCODING.VST3_1_T3_postr
                            return 2168;
                          }
                          else
                          {
                            if (a & 0x02)
                            {
                              // ENCODING.VST3_1_T3_nowb
                              return 2166;
                            }
                            else
                            {
                              // ENCODING.VST3_1_T3_posti
                              return 2167;
                            }
                          }
                          break;
                        }
                        case 0xa0:
                        {
                          // conflicts:
                          // ENCODING.VLD3_1_T3_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1111
                          // ENCODING.VLD3_1_T3_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1101
                          // ENCODING.VLD3_1_T3_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                          // Rm!=0b11x1
                          if ((opcode & 0x0000000d) != 0x0000000d)
                          {
                            // ENCODING.VLD3_1_T3_postr
                            return 1502;
                          }
                          else
                          {
                            if (a & 0x02)
                            {
                              // ENCODING.VLD3_1_T3_nowb
                              return 1500;
                            }
                            else
                            {
                              // ENCODING.VLD3_1_T3_posti
                              return 1501;
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
                      switch (c & 0xa0)
                      {
                        case 0x00:
                        {
                          // conflicts:
                          // ENCODING.VST1_m_T4_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1111
                          // ENCODING.VST1_m_T4_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1101
                          // ENCODING.VST1_m_T4_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                          // Rm!=0b11x1
                          if ((opcode & 0x0000000d) != 0x0000000d)
                          {
                            // ENCODING.VST1_m_T4_postr
                            return 2120;
                          }
                          else
                          {
                            if (a & 0x02)
                            {
                              // ENCODING.VST1_m_T4_nowb
                              return 2118;
                            }
                            else
                            {
                              // ENCODING.VST1_m_T4_posti
                              return 2119;
                            }
                          }
                          break;
                        }
                        case 0x20:
                        {
                          // conflicts:
                          // ENCODING.VLD1_m_T4_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1111
                          // ENCODING.VLD1_m_T4_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1101
                          // ENCODING.VLD1_m_T4_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                          // Rm!=0b11x1
                          if ((opcode & 0x0000000d) != 0x0000000d)
                          {
                            // ENCODING.VLD1_m_T4_postr
                            return 1448;
                          }
                          else
                          {
                            if (a & 0x02)
                            {
                              // ENCODING.VLD1_m_T4_nowb
                              return 1446;
                            }
                            else
                            {
                              // ENCODING.VLD1_m_T4_posti
                              return 1447;
                            }
                          }
                          break;
                        }
                        case 0x80:
                        {
                          // conflicts:
                          // ENCODING.VST3_1_T1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1111
                          // ENCODING.VST3_1_T1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1101
                          // ENCODING.VST3_1_T1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                          // Rm!=0b11x1
                          if ((opcode & 0x0000000d) != 0x0000000d)
                          {
                            // ENCODING.VST3_1_T1_postr
                            return 2162;
                          }
                          else
                          {
                            if (a & 0x02)
                            {
                              // ENCODING.VST3_1_T1_nowb
                              return 2160;
                            }
                            else
                            {
                              // ENCODING.VST3_1_T1_posti
                              return 2161;
                            }
                          }
                          break;
                        }
                        case 0xa0:
                        {
                          // conflicts:
                          // ENCODING.VLD3_1_T1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1111
                          // ENCODING.VLD3_1_T1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1101
                          // ENCODING.VLD3_1_T1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                          // Rm!=0b11x1
                          if ((opcode & 0x0000000d) != 0x0000000d)
                          {
                            // ENCODING.VLD3_1_T1_postr
                            return 1496;
                          }
                          else
                          {
                            if (a & 0x02)
                            {
                              // ENCODING.VLD3_1_T1_nowb
                              return 1494;
                            }
                            else
                            {
                              // ENCODING.VLD3_1_T1_posti
                              return 1495;
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
                if (b & 0x04)
                {
                  if (b & 0x08)
                  {
                    if (b & 0x01)
                    {
                      // conflicts:
                      // ENCODING.VLD2_a_T1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx1x1xxxxxxxxxxxxxxxxx1111
                      // ENCODING.VLD2_a_T1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx1x1xxxxxxxxxxxxxxxxx1101
                      // ENCODING.VLD2_a_T1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx1x1xxxxxxxxxxxxxxxxxxxxx
                      // Rm!=0b11x1
                      if ((opcode & 0x0000000d) != 0x0000000d)
                      {
                        // ENCODING.VLD2_a_T1_postr
                        return 1472;
                      }
                      else
                      {
                        if (a & 0x02)
                        {
                          // ENCODING.VLD2_a_T1_nowb
                          return 1470;
                        }
                        else
                        {
                          // ENCODING.VLD2_a_T1_posti
                          return 1471;
                        }
                      }
                    }
                    else
                    {
                      // conflicts:
                      // ENCODING.VLD1_a_T1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx1x1xxxxxxxxxxxxxxxxx1111
                      // ENCODING.VLD1_a_T1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx1x1xxxxxxxxxxxxxxxxx1101
                      // ENCODING.VLD1_a_T1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxx1x1xxxxxxxxxxxxxxxxxxxxx
                      // Rm!=0b11x1
                      if ((opcode & 0x0000000d) != 0x0000000d)
                      {
                        // ENCODING.VLD1_a_T1_postr
                        return 1424;
                      }
                      else
                      {
                        if (a & 0x02)
                        {
                          // ENCODING.VLD1_a_T1_nowb
                          return 1422;
                        }
                        else
                        {
                          // ENCODING.VLD1_a_T1_posti
                          return 1423;
                        }
                      }
                    }
                  }
                  else
                  {
                    // the following switch contains 4 case.
                    switch (c & 0xa0)
                    {
                      case 0x00:
                      {
                        // conflicts:
                        // ENCODING.VST3_m_T1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1111
                        // ENCODING.VST3_m_T1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1101
                        // ENCODING.VST3_m_T1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                        // Rm!=0b11x1
                        if ((opcode & 0x0000000d) != 0x0000000d)
                        {
                          // ENCODING.VST3_m_T1_postr
                          return 2174;
                        }
                        else
                        {
                          if (a & 0x02)
                          {
                            // ENCODING.VST3_m_T1_nowb
                            return 2172;
                          }
                          else
                          {
                            // ENCODING.VST3_m_T1_posti
                            return 2173;
                          }
                        }
                        break;
                      }
                      case 0x20:
                      {
                        // conflicts:
                        // ENCODING.VLD3_m_T1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1111
                        // ENCODING.VLD3_m_T1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1101
                        // ENCODING.VLD3_m_T1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                        // Rm!=0b11x1
                        if ((opcode & 0x0000000d) != 0x0000000d)
                        {
                          // ENCODING.VLD3_m_T1_postr
                          return 1514;
                        }
                        else
                        {
                          if (a & 0x02)
                          {
                            // ENCODING.VLD3_m_T1_nowb
                            return 1512;
                          }
                          else
                          {
                            // ENCODING.VLD3_m_T1_posti
                            return 1513;
                          }
                        }
                        break;
                      }
                      case 0x80:
                      {
                        if (b & 0x01)
                        {
                          // conflicts:
                          // ENCODING.VST2_1_T2_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1111
                          // ENCODING.VST2_1_T2_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1101
                          // ENCODING.VST2_1_T2_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                          // Rm!=0b11x1
                          if ((opcode & 0x0000000d) != 0x0000000d)
                          {
                            // ENCODING.VST2_1_T2_postr
                            return 2135;
                          }
                          else
                          {
                            if (a & 0x02)
                            {
                              // ENCODING.VST2_1_T2_nowb
                              return 2133;
                            }
                            else
                            {
                              // ENCODING.VST2_1_T2_posti
                              return 2134;
                            }
                          }
                        }
                        else
                        {
                          // conflicts:
                          // ENCODING.VST1_1_T2_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1111
                          // ENCODING.VST1_1_T2_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1101
                          // ENCODING.VST1_1_T2_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                          // Rm!=0b11x1
                          if ((opcode & 0x0000000d) != 0x0000000d)
                          {
                            // ENCODING.VST1_1_T2_postr
                            return 2093;
                          }
                          else
                          {
                            if (a & 0x02)
                            {
                              // ENCODING.VST1_1_T2_nowb
                              return 2091;
                            }
                            else
                            {
                              // ENCODING.VST1_1_T2_posti
                              return 2092;
                            }
                          }
                        }
                        break;
                      }
                      case 0xa0:
                      {
                        if (b & 0x01)
                        {
                          // conflicts:
                          // ENCODING.VLD2_1_T2_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1111
                          // ENCODING.VLD2_1_T2_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1101
                          // ENCODING.VLD2_1_T2_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                          // Rm!=0b11x1
                          if ((opcode & 0x0000000d) != 0x0000000d)
                          {
                            // ENCODING.VLD2_1_T2_postr
                            return 1463;
                          }
                          else
                          {
                            if (a & 0x02)
                            {
                              // ENCODING.VLD2_1_T2_nowb
                              return 1461;
                            }
                            else
                            {
                              // ENCODING.VLD2_1_T2_posti
                              return 1462;
                            }
                          }
                        }
                        else
                        {
                          // conflicts:
                          // ENCODING.VLD1_1_T2_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1111
                          // ENCODING.VLD1_1_T2_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1101
                          // ENCODING.VLD1_1_T2_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                          // Rm!=0b11x1
                          if ((opcode & 0x0000000d) != 0x0000000d)
                          {
                            // ENCODING.VLD1_1_T2_postr
                            return 1415;
                          }
                          else
                          {
                            if (a & 0x02)
                            {
                              // ENCODING.VLD1_1_T2_nowb
                              return 1413;
                            }
                            else
                            {
                              // ENCODING.VLD1_1_T2_posti
                              return 1414;
                            }
                          }
                        }
                        break;
                      }
                      default: break;
                    }
                  }
                }
                else
                {
                  if (b & 0x08)
                  {
                    // the following switch contains 4 case.
                    switch (c & 0xa0)
                    {
                      case 0x00:
                      {
                        // conflicts:
                        // ENCODING.VST2_m_T1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1111
                        // ENCODING.VST2_m_T1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1101
                        // ENCODING.VST2_m_T1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                        // Rm!=0b11x1
                        if ((opcode & 0x0000000d) != 0x0000000d)
                        {
                          // ENCODING.VST2_m_T1_postr
                          return 2147;
                        }
                        else
                        {
                          if (a & 0x02)
                          {
                            // ENCODING.VST2_m_T1_nowb
                            return 2145;
                          }
                          else
                          {
                            // ENCODING.VST2_m_T1_posti
                            return 2146;
                          }
                        }
                        break;
                      }
                      case 0x20:
                      {
                        // conflicts:
                        // ENCODING.VLD2_m_T1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1111
                        // ENCODING.VLD2_m_T1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1101
                        // ENCODING.VLD2_m_T1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                        // Rm!=0b11x1
                        if ((opcode & 0x0000000d) != 0x0000000d)
                        {
                          // ENCODING.VLD2_m_T1_postr
                          return 1481;
                        }
                        else
                        {
                          if (a & 0x02)
                          {
                            // ENCODING.VLD2_m_T1_nowb
                            return 1479;
                          }
                          else
                          {
                            // ENCODING.VLD2_m_T1_posti
                            return 1480;
                          }
                        }
                        break;
                      }
                      case 0x80:
                      {
                        if (b & 0x01)
                        {
                          // conflicts:
                          // ENCODING.VST2_1_T3_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1111
                          // ENCODING.VST2_1_T3_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1101
                          // ENCODING.VST2_1_T3_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                          // Rm!=0b11x1
                          if ((opcode & 0x0000000d) != 0x0000000d)
                          {
                            // ENCODING.VST2_1_T3_postr
                            return 2138;
                          }
                          else
                          {
                            if (a & 0x02)
                            {
                              // ENCODING.VST2_1_T3_nowb
                              return 2136;
                            }
                            else
                            {
                              // ENCODING.VST2_1_T3_posti
                              return 2137;
                            }
                          }
                        }
                        else
                        {
                          // conflicts:
                          // ENCODING.VST1_1_T3_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1111
                          // ENCODING.VST1_1_T3_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1101
                          // ENCODING.VST1_1_T3_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                          // Rm!=0b11x1
                          if ((opcode & 0x0000000d) != 0x0000000d)
                          {
                            // ENCODING.VST1_1_T3_postr
                            return 2096;
                          }
                          else
                          {
                            if (a & 0x02)
                            {
                              // ENCODING.VST1_1_T3_nowb
                              return 2094;
                            }
                            else
                            {
                              // ENCODING.VST1_1_T3_posti
                              return 2095;
                            }
                          }
                        }
                        break;
                      }
                      case 0xa0:
                      {
                        if (b & 0x01)
                        {
                          // conflicts:
                          // ENCODING.VLD2_1_T3_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1111
                          // ENCODING.VLD2_1_T3_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1101
                          // ENCODING.VLD2_1_T3_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                          // Rm!=0b11x1
                          if ((opcode & 0x0000000d) != 0x0000000d)
                          {
                            // ENCODING.VLD2_1_T3_postr
                            return 1466;
                          }
                          else
                          {
                            if (a & 0x02)
                            {
                              // ENCODING.VLD2_1_T3_nowb
                              return 1464;
                            }
                            else
                            {
                              // ENCODING.VLD2_1_T3_posti
                              return 1465;
                            }
                          }
                        }
                        else
                        {
                          // conflicts:
                          // ENCODING.VLD1_1_T3_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1111
                          // ENCODING.VLD1_1_T3_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1101
                          // ENCODING.VLD1_1_T3_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                          // Rm!=0b11x1
                          if ((opcode & 0x0000000d) != 0x0000000d)
                          {
                            // ENCODING.VLD1_1_T3_postr
                            return 1418;
                          }
                          else
                          {
                            if (a & 0x02)
                            {
                              // ENCODING.VLD1_1_T3_nowb
                              return 1416;
                            }
                            else
                            {
                              // ENCODING.VLD1_1_T3_posti
                              return 1417;
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
                    // the following switch contains 4 case.
                    switch (c & 0xa0)
                    {
                      case 0x00:
                      {
                        // conflicts:
                        // ENCODING.VST4_m_T1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1111
                        // ENCODING.VST4_m_T1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1101
                        // ENCODING.VST4_m_T1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                        // Rm!=0b11x1
                        if ((opcode & 0x0000000d) != 0x0000000d)
                        {
                          // ENCODING.VST4_m_T1_postr
                          return 2197;
                        }
                        else
                        {
                          if (a & 0x02)
                          {
                            // ENCODING.VST4_m_T1_nowb
                            return 2195;
                          }
                          else
                          {
                            // ENCODING.VST4_m_T1_posti
                            return 2196;
                          }
                        }
                        break;
                      }
                      case 0x20:
                      {
                        // conflicts:
                        // ENCODING.VLD4_m_T1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1111
                        // ENCODING.VLD4_m_T1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1101
                        // ENCODING.VLD4_m_T1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                        // Rm!=0b11x1
                        if ((opcode & 0x0000000d) != 0x0000000d)
                        {
                          // ENCODING.VLD4_m_T1_postr
                          return 1544;
                        }
                        else
                        {
                          if (a & 0x02)
                          {
                            // ENCODING.VLD4_m_T1_nowb
                            return 1542;
                          }
                          else
                          {
                            // ENCODING.VLD4_m_T1_posti
                            return 1543;
                          }
                        }
                        break;
                      }
                      case 0x80:
                      {
                        if (b & 0x01)
                        {
                          // conflicts:
                          // ENCODING.VST2_1_T1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1111
                          // ENCODING.VST2_1_T1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1101
                          // ENCODING.VST2_1_T1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                          // Rm!=0b11x1
                          if ((opcode & 0x0000000d) != 0x0000000d)
                          {
                            // ENCODING.VST2_1_T1_postr
                            return 2132;
                          }
                          else
                          {
                            if (a & 0x02)
                            {
                              // ENCODING.VST2_1_T1_nowb
                              return 2130;
                            }
                            else
                            {
                              // ENCODING.VST2_1_T1_posti
                              return 2131;
                            }
                          }
                        }
                        else
                        {
                          // conflicts:
                          // ENCODING.VST1_1_T1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1111
                          // ENCODING.VST1_1_T1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1101
                          // ENCODING.VST1_1_T1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                          // Rm!=0b11x1
                          if ((opcode & 0x0000000d) != 0x0000000d)
                          {
                            // ENCODING.VST1_1_T1_postr
                            return 2090;
                          }
                          else
                          {
                            if (a & 0x02)
                            {
                              // ENCODING.VST1_1_T1_nowb
                              return 2088;
                            }
                            else
                            {
                              // ENCODING.VST1_1_T1_posti
                              return 2089;
                            }
                          }
                        }
                        break;
                      }
                      case 0xa0:
                      {
                        if (b & 0x01)
                        {
                          // conflicts:
                          // ENCODING.VLD2_1_T1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1111
                          // ENCODING.VLD2_1_T1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1101
                          // ENCODING.VLD2_1_T1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                          // Rm!=0b11x1
                          if ((opcode & 0x0000000d) != 0x0000000d)
                          {
                            // ENCODING.VLD2_1_T1_postr
                            return 1460;
                          }
                          else
                          {
                            if (a & 0x02)
                            {
                              // ENCODING.VLD2_1_T1_nowb
                              return 1458;
                            }
                            else
                            {
                              // ENCODING.VLD2_1_T1_posti
                              return 1459;
                            }
                          }
                        }
                        else
                        {
                          // conflicts:
                          // ENCODING.VLD1_1_T1_nowb       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1111
                          // ENCODING.VLD1_1_T1_posti      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxx1101
                          // ENCODING.VLD1_1_T1_postr      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                          // Rm!=0b11x1
                          if ((opcode & 0x0000000d) != 0x0000000d)
                          {
                            // ENCODING.VLD1_1_T1_postr
                            return 1412;
                          }
                          else
                          {
                            if (a & 0x02)
                            {
                              // ENCODING.VLD1_1_T1_nowb
                              return 1410;
                            }
                            else
                            {
                              // ENCODING.VLD1_1_T1_posti
                              return 1411;
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
            default: break;
          }
        }
        break;
      }
      case 0x02:
      {
        if (c & 0x10)
        {
          if (c & 0x80)
          {
            if (c & 0x20)
            {
              if (b & 0x80)
              {
                if (a & 0x10)
                {
                  // ENCODING.UDIV_T1
                  return 839;
                }
                else
                {
                  // ENCODING.CLZ_T1
                  return 113;
                }
              }
              else
              {
                // conflicts:
                // ENCODING.CMP_r_T3_RRX         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxx1x0xxxxxxx00011110011xxxx
                // ENCODING.CMP_r_T3             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxx1x0xxxxxxxxxx1111xxxxxxxx
                // ENCODING.SUBS_r_T2_RRX        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxx1x0xxxxxxx000xxxx0011xxxx
                // ENCODING.SUBS_r_T2            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxx1x0xxxxxxxxxxxxxxxxxxxxxx
                // ENCODING.SUBS_SP_r_T1_RRX     : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxx1x0xx1101x000xxxx0011xxxx
                // ENCODING.SUBS_SP_r_T1         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxx1x0xx1101xxxxxxxxxxxxxxxx
                // imm3:imm2:stype!=0b0000011
                if ((opcode & 0x000070f0) != 0x00000030)
                {
                  // Rd!=0b1111
                  if ((opcode & 0x00000f00) != 0x00000f00)
                  {
                    // Rn!=0b1101
                    if ((opcode & 0x000f0000) != 0x000d0000)
                    {
                      // ENCODING.SUBS_r_T2
                      return 775;
                    }
                    else
                    {
                      // ENCODING.SUBS_SP_r_T1
                      return 791;
                    }
                  }
                  else
                  {
                    // ENCODING.CMP_r_T3
                    return 130;
                  }
                }
                else
                {
                  // Rd!=0b1111
                  if ((opcode & 0x00000f00) != 0x00000f00)
                  {
                    // Rn!=0b1101
                    if ((opcode & 0x000f0000) != 0x000d0000)
                    {
                      // ENCODING.SUBS_r_T2_RRX
                      return 774;
                    }
                    else
                    {
                      // ENCODING.SUBS_SP_r_T1_RRX
                      return 790;
                    }
                  }
                  else
                  {
                    // ENCODING.CMP_r_T3_RRX
                    return 129;
                  }
                }
              }
            }
            else
            {
              if (c & 0x40)
              {
                // the following switch contains 3 case.
                switch ((d & 0x11) - 1)
                {
                  case 0x00:
                  {
                    // conflicts:
                    // ENCODING.RSBS_r_T1_RRX        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx0000xxxx0011xxxx
                    // ENCODING.RSBS_r_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx0xxxxxxxxxxxxxxx
                    // imm3:imm2:stype!=0b0000011
                    if ((opcode & 0x000070f0) != 0x00000030)
                    {
                      // ENCODING.RSBS_r_T1
                      return 505;
                    }
                    else
                    {
                      // ENCODING.RSBS_r_T1_RRX
                      return 504;
                    }
                    break;
                  }
                  case 0x0f:
                  {
                    // the following switch contains 9 case.
                    switch (a & 0xf0)
                    {
                      case 0x00:
                      {
                        // ENCODING.SSUB16_T1
                        return 660;
                        break;
                      }
                      case 0x10:
                      {
                        // ENCODING.QSUB16_T1
                        return 473;
                        break;
                      }
                      case 0x20:
                      {
                        // ENCODING.SHSUB16_T1
                        return 564;
                        break;
                      }
                      case 0x40:
                      {
                        // ENCODING.USUB16_T1
                        return 885;
                        break;
                      }
                      case 0x50:
                      {
                        // ENCODING.UQSUB16_T1
                        return 869;
                        break;
                      }
                      case 0x60:
                      {
                        // ENCODING.UHSUB16_T1
                        return 849;
                        break;
                      }
                      case 0x80:
                      {
                        // ENCODING.CRC32CB_T1
                        return 153;
                        break;
                      }
                      case 0x90:
                      {
                        // ENCODING.CRC32CH_T1
                        return 154;
                        break;
                      }
                      case 0xa0:
                      {
                        // ENCODING.CRC32CW_T1
                        return 155;
                        break;
                      }
                      default: break;
                    }
                    break;
                  }
                  case 0x10:
                  {
                    if (a & 0x10)
                    {
                      // ENCODING.SMLSLDX_T1
                      return 607;
                    }
                    else
                    {
                      // ENCODING.SMLSLD_T1
                      return 606;
                    }
                    break;
                  }
                  default: break;
                }
              }
              else
              {
                if (b & 0x80)
                {
                  if (a & 0x10)
                  {
                    if (a & 0x20)
                    {
                      if (a & 0x40)
                      {
                        // ENCODING.SDIV_T1
                        return 542;
                      }
                      else
                      {
                        // ENCODING.REVSH_T2
                        return 486;
                      }
                    }
                    else
                    {
                      // the following switch contains 3 case.
                      switch (a & 0xc0)
                      {
                        case 0x00:
                        {
                          // ENCODING.QADD16_T1
                          return 459;
                          break;
                        }
                        case 0x40:
                        {
                          // ENCODING.UQADD16_T1
                          return 861;
                          break;
                        }
                        case 0x80:
                        {
                          // ENCODING.REV16_T2
                          return 483;
                          break;
                        }
                        default: break;
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
                        // ENCODING.SADD16_T1
                        return 517;
                        break;
                      }
                      case 0x20:
                      {
                        // ENCODING.SHADD16_T1
                        return 556;
                        break;
                      }
                      case 0x40:
                      {
                        // ENCODING.UADD16_T1
                        return 828;
                        break;
                      }
                      case 0x60:
                      {
                        // ENCODING.UHADD16_T1
                        return 841;
                        break;
                      }
                      case 0x80:
                      {
                        // ENCODING.REV_T2
                        return 480;
                        break;
                      }
                      case 0xa0:
                      {
                        // ENCODING.RBIT_T1
                        return 477;
                        break;
                      }
                      default: break;
                    }
                  }
                }
                else
                {
                  // conflicts:
                  // ENCODING.EORS_r_T2_RRX        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxx0xxxxxxxxx000xxxx0011xxxx
                  // ENCODING.EORS_r_T2            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxx0xxxxxxxxxxxxxxxxxxxxxxxx
                  // ENCODING.TEQ_r_T1_RRX         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxx0xxxxxxxxx00011110011xxxx
                  // ENCODING.TEQ_r_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxx0xxxxxxxxxxxx1111xxxxxxxx
                  // imm3:imm2:stype!=0b0000011
                  if ((opcode & 0x000070f0) != 0x00000030)
                  {
                    // Rd!=0b1111
                    if ((opcode & 0x00000f00) != 0x00000f00)
                    {
                      // ENCODING.EORS_r_T2
                      return 179;
                    }
                    else
                    {
                      // ENCODING.TEQ_r_T1
                      return 815;
                    }
                  }
                  else
                  {
                    // Rd!=0b1111
                    if ((opcode & 0x00000f00) != 0x00000f00)
                    {
                      // ENCODING.EORS_r_T2_RRX
                      return 178;
                    }
                    else
                    {
                      // ENCODING.TEQ_r_T1_RRX
                      return 814;
                    }
                  }
                }
              }
            }
          }
          else
          {
            // the following switch contains 4 case.
            switch (d & 0x11)
            {
              case 0x00:
              {
                // the following switch contains 4 case.
                switch (c & 0x60)
                {
                  case 0x00:
                  {
                    // conflicts:
                    // ENCODING.ANDS_r_T2_RRX        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx0000xxxx0011xxxx
                    // ENCODING.ANDS_r_T2            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx0xxxxxxxxxxxxxxx
                    // ENCODING.TST_r_T2_RRX         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx000011110011xxxx
                    // ENCODING.TST_r_T2             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx0xxx1111xxxxxxxx
                    // imm3:imm2:stype!=0b0000011
                    if ((opcode & 0x000070f0) != 0x00000030)
                    {
                      // Rd!=0b1111
                      if ((opcode & 0x00000f00) != 0x00000f00)
                      {
                        // ENCODING.ANDS_r_T2
                        return 69;
                      }
                      else
                      {
                        // ENCODING.TST_r_T2
                        return 825;
                      }
                    }
                    else
                    {
                      // Rd!=0b1111
                      if ((opcode & 0x00000f00) != 0x00000f00)
                      {
                        // ENCODING.ANDS_r_T2_RRX
                        return 68;
                      }
                      else
                      {
                        // ENCODING.TST_r_T2_RRX
                        return 824;
                      }
                    }
                    break;
                  }
                  case 0x20:
                  {
                    // conflicts:
                    // ENCODING.BICS_r_T2_RRX        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx0000xxxx0011xxxx
                    // ENCODING.BICS_r_T2            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx0xxxxxxxxxxxxxxx
                    // imm3:imm2:stype!=0b0000011
                    if ((opcode & 0x000070f0) != 0x00000030)
                    {
                      // ENCODING.BICS_r_T2
                      return 93;
                    }
                    else
                    {
                      // ENCODING.BICS_r_T2_RRX
                      return 92;
                    }
                    break;
                  }
                  case 0x40:
                  {
                    // conflicts:
                    // ENCODING.MOVS_r_T3_RRX        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxx11110000xxxx0011xxxx
                    // ENCODING.MOVS_r_T3            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxx11110xxxxxxxxxxxxxxx
                    // ENCODING.ORRS_r_T2_RRX        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx0000xxxx0011xxxx
                    // ENCODING.ORRS_r_T2            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx0xxxxxxxxxxxxxxx
                    // imm3:imm2:stype!=0b0000011
                    if ((opcode & 0x000070f0) != 0x00000030)
                    {
                      // Rn!=0b1111
                      if ((opcode & 0x000f0000) != 0x000f0000)
                      {
                        // ENCODING.ORRS_r_T2
                        return 424;
                      }
                      else
                      {
                        // ENCODING.MOVS_r_T3
                        return 360;
                      }
                    }
                    else
                    {
                      // Rn!=0b1111
                      if ((opcode & 0x000f0000) != 0x000f0000)
                      {
                        // ENCODING.ORRS_r_T2_RRX
                        return 423;
                      }
                      else
                      {
                        // ENCODING.MOVS_r_T3_RRX
                        return 359;
                      }
                    }
                    break;
                  }
                  case 0x60:
                  {
                    // conflicts:
                    // ENCODING.MVNS_r_T2_RRX        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxx11110000xxxx0011xxxx
                    // ENCODING.MVNS_r_T2            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxx11110xxxxxxxxxxxxxxx
                    // ENCODING.ORNS_r_T1_RRX        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx0000xxxx0011xxxx
                    // ENCODING.ORNS_r_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx0xxxxxxxxxxxxxxx
                    // imm3:imm2:stype!=0b0000011
                    if ((opcode & 0x000070f0) != 0x00000030)
                    {
                      // Rn!=0b1111
                      if ((opcode & 0x000f0000) != 0x000f0000)
                      {
                        // ENCODING.ORNS_r_T1
                        return 411;
                      }
                      else
                      {
                        // ENCODING.MVNS_r_T2
                        return 400;
                      }
                    }
                    else
                    {
                      // Rn!=0b1111
                      if ((opcode & 0x000f0000) != 0x000f0000)
                      {
                        // ENCODING.ORNS_r_T1_RRX
                        return 410;
                      }
                      else
                      {
                        // ENCODING.MVNS_r_T2_RRX
                        return 399;
                      }
                    }
                    break;
                  }
                  default: break;
                }
                break;
              }
              case 0x01:
              {
                // the following switch contains 3 case.
                switch (c & 0x60)
                {
                  case 0x00:
                  {
                    // conflicts:
                    // ENCODING.ADDS_r_T3_RRX        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx0000xxxx0011xxxx
                    // ENCODING.ADDS_r_T3            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx0xxxxxxxxxxxxxxx
                    // ENCODING.ADDS_SP_r_T3_RRX     : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxx11010000xxxx0011xxxx
                    // ENCODING.ADDS_SP_r_T3         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxx11010xxxxxxxxxxxxxxx
                    // ENCODING.CMN_r_T2_RRX         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx000011110011xxxx
                    // ENCODING.CMN_r_T2             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx0xxx1111xxxxxxxx
                    // imm3:imm2:stype!=0b0000011
                    if ((opcode & 0x000070f0) != 0x00000030)
                    {
                      // Rd!=0b1111
                      if ((opcode & 0x00000f00) != 0x00000f00)
                      {
                        // Rn!=0b1101
                        if ((opcode & 0x000f0000) != 0x000d0000)
                        {
                          // ENCODING.ADDS_r_T3
                          return 32;
                        }
                        else
                        {
                          // ENCODING.ADDS_SP_r_T3
                          return 51;
                        }
                      }
                      else
                      {
                        // ENCODING.CMN_r_T2
                        return 120;
                      }
                    }
                    else
                    {
                      // Rd!=0b1111
                      if ((opcode & 0x00000f00) != 0x00000f00)
                      {
                        // Rn!=0b1101
                        if ((opcode & 0x000f0000) != 0x000d0000)
                        {
                          // ENCODING.ADDS_r_T3_RRX
                          return 31;
                        }
                        else
                        {
                          // ENCODING.ADDS_SP_r_T3_RRX
                          return 50;
                        }
                      }
                      else
                      {
                        // ENCODING.CMN_r_T2_RRX
                        return 119;
                      }
                    }
                    break;
                  }
                  case 0x40:
                  {
                    // conflicts:
                    // ENCODING.ADCS_r_T2_RRX        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx0000xxxx0011xxxx
                    // ENCODING.ADCS_r_T2            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx0xxxxxxxxxxxxxxx
                    // imm3:imm2:stype!=0b0000011
                    if ((opcode & 0x000070f0) != 0x00000030)
                    {
                      // ENCODING.ADCS_r_T2
                      return 13;
                    }
                    else
                    {
                      // ENCODING.ADCS_r_T2_RRX
                      return 12;
                    }
                    break;
                  }
                  case 0x60:
                  {
                    // conflicts:
                    // ENCODING.SBCS_r_T2_RRX        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx0000xxxx0011xxxx
                    // ENCODING.SBCS_r_T2            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx0xxxxxxxxxxxxxxx
                    // imm3:imm2:stype!=0b0000011
                    if ((opcode & 0x000070f0) != 0x00000030)
                    {
                      // ENCODING.SBCS_r_T2
                      return 536;
                    }
                    else
                    {
                      // ENCODING.SBCS_r_T2_RRX
                      return 535;
                    }
                    break;
                  }
                  default: break;
                }
                break;
              }
              case 0x10:
              {
                if (a & 0x80)
                {
                  // the following switch contains 3 case.
                  switch (c & 0x60)
                  {
                    case 0x00:
                    {
                      // conflicts:
                      // ENCODING.UXTAH_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx1111xxxxxxxxxxxx
                      // ENCODING.UXTH_T2              : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxx11111111xxxxxxxxxxxx
                      // Rn!=0b1111
                      if ((opcode & 0x000f0000) != 0x000f0000)
                      {
                        // ENCODING.UXTAH_T1
                        return 893;
                      }
                      else
                      {
                        // ENCODING.UXTH_T2
                        return 901;
                      }
                      break;
                    }
                    case 0x20:
                    {
                      // conflicts:
                      // ENCODING.UXTAB16_T1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx1111xxxxxxxxxxxx
                      // ENCODING.UXTB16_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxx11111111xxxxxxxxxxxx
                      // Rn!=0b1111
                      if ((opcode & 0x000f0000) != 0x000f0000)
                      {
                        // ENCODING.UXTAB16_T1
                        return 891;
                      }
                      else
                      {
                        // ENCODING.UXTB16_T1
                        return 898;
                      }
                      break;
                    }
                    case 0x40:
                    {
                      // conflicts:
                      // ENCODING.UXTAB_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx1111xxxxxxxxxxxx
                      // ENCODING.UXTB_T2              : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxx11111111xxxxxxxxxxxx
                      // Rn!=0b1111
                      if ((opcode & 0x000f0000) != 0x000f0000)
                      {
                        // ENCODING.UXTAB_T1
                        return 889;
                      }
                      else
                      {
                        // ENCODING.UXTB_T2
                        return 896;
                      }
                      break;
                    }
                    default: break;
                  }
                }
                else
                {
                  // ENCODING.MOVS_rr_T2
                  return 367;
                }
                break;
              }
              case 0x11:
              {
                if (a & 0x10)
                {
                  if (a & 0x20)
                  {
                    // conflicts:
                    // ENCODING.SMLATT_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxx00xxxxxxxxxxxxx00xxxxxx
                    // ENCODING.SMULTT_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxx00xxxxx1111xxxx00xxxxxx
                    // Ra!=0b1111
                    if ((opcode & 0x0000f000) != 0x0000f000)
                    {
                      // ENCODING.SMLATT_T1
                      return 576;
                    }
                    else
                    {
                      // ENCODING.SMULTT_T1
                      return 631;
                    }
                  }
                  else
                  {
                    // the following switch contains 3 case.
                    switch (c & 0x60)
                    {
                      case 0x00:
                      {
                        // conflicts:
                        // ENCODING.SMLABT_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxx00xxxxxx
                        // ENCODING.SMULBT_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx1111xxxx00xxxxxx
                        // Ra!=0b1111
                        if ((opcode & 0x0000f000) != 0x0000f000)
                        {
                          // ENCODING.SMLABT_T1
                          return 574;
                        }
                        else
                        {
                          // ENCODING.SMULBT_T1
                          return 629;
                        }
                        break;
                      }
                      case 0x20:
                      {
                        // conflicts:
                        // ENCODING.SMLAWT_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxx00xxxxxx
                        // ENCODING.SMULWT_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx1111xxxx00xxxxxx
                        // Ra!=0b1111
                        if ((opcode & 0x0000f000) != 0x0000f000)
                        {
                          // ENCODING.SMLAWT_T1
                          return 599;
                        }
                        else
                        {
                          // ENCODING.SMULWT_T1
                          return 638;
                        }
                        break;
                      }
                      case 0x40:
                      {
                        // conflicts:
                        // ENCODING.SMMLAR_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxx00xxxxxx
                        // ENCODING.SMMULR_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx1111xxxx00xxxxxx
                        // Ra!=0b1111
                        if ((opcode & 0x0000f000) != 0x0000f000)
                        {
                          // ENCODING.SMMLAR_T1
                          return 611;
                        }
                        else
                        {
                          // ENCODING.SMMULR_T1
                          return 619;
                        }
                        break;
                      }
                      default: break;
                    }
                  }
                }
                else
                {
                  if (a & 0x20)
                  {
                    // conflicts:
                    // ENCODING.SMLATB_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxx00xxxxxxxxxxxxx00xxxxxx
                    // ENCODING.SMULTB_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxx00xxxxx1111xxxx00xxxxxx
                    // Ra!=0b1111
                    if ((opcode & 0x0000f000) != 0x0000f000)
                    {
                      // ENCODING.SMLATB_T1
                      return 575;
                    }
                    else
                    {
                      // ENCODING.SMULTB_T1
                      return 630;
                    }
                  }
                  else
                  {
                    // the following switch contains 4 case.
                    switch (c & 0x60)
                    {
                      case 0x00:
                      {
                        // conflicts:
                        // ENCODING.SMLABB_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxx00xxxxxx
                        // ENCODING.SMULBB_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx1111xxxx00xxxxxx
                        // Ra!=0b1111
                        if ((opcode & 0x0000f000) != 0x0000f000)
                        {
                          // ENCODING.SMLABB_T1
                          return 573;
                        }
                        else
                        {
                          // ENCODING.SMULBB_T1
                          return 628;
                        }
                        break;
                      }
                      case 0x20:
                      {
                        // conflicts:
                        // ENCODING.SMLAWB_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxx00xxxxxx
                        // ENCODING.SMULWB_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx1111xxxx00xxxxxx
                        // Ra!=0b1111
                        if ((opcode & 0x0000f000) != 0x0000f000)
                        {
                          // ENCODING.SMLAWB_T1
                          return 598;
                        }
                        else
                        {
                          // ENCODING.SMULWB_T1
                          return 637;
                        }
                        break;
                      }
                      case 0x40:
                      {
                        // conflicts:
                        // ENCODING.SMMLA_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxx00xxxxxx
                        // ENCODING.SMMUL_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx1111xxxx00xxxxxx
                        // Ra!=0b1111
                        if ((opcode & 0x0000f000) != 0x0000f000)
                        {
                          // ENCODING.SMMLA_T1
                          return 610;
                        }
                        else
                        {
                          // ENCODING.SMMUL_T1
                          return 618;
                        }
                        break;
                      }
                      case 0x60:
                      {
                        // conflicts:
                        // ENCODING.USAD8_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx1111xxxx00xxxxxx
                        // ENCODING.USADA8_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxx00xxxxxx
                        // Ra!=0b1111
                        if ((opcode & 0x0000f000) != 0x0000f000)
                        {
                          // ENCODING.USADA8_T1
                          return 875;
                        }
                        else
                        {
                          // ENCODING.USAD8_T1
                          return 873;
                        }
                        break;
                      }
                      default: break;
                    }
                  }
                }
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
            if (c & 0x20)
            {
              if (c & 0x40)
              {
                if (a & 0x10)
                {
                  if (a & 0x40)
                  {
                    // ENCODING.UQSAX_T1
                    return 867;
                  }
                  else
                  {
                    // ENCODING.QSAX_T1
                    return 469;
                  }
                }
                else
                {
                  if (a & 0x20)
                  {
                    if (a & 0x40)
                    {
                      if (d & 0x01)
                      {
                        // ENCODING.UMAAL_T1
                        return 853;
                      }
                      else
                      {
                        // ENCODING.UHSAX_T1
                        return 847;
                      }
                    }
                    else
                    {
                      // ENCODING.SHSAX_T1
                      return 562;
                    }
                  }
                  else
                  {
                    if (a & 0x40)
                    {
                      // ENCODING.USAX_T1
                      return 883;
                    }
                    else
                    {
                      if (d & 0x01)
                      {
                        // ENCODING.UMLAL_T1
                        return 856;
                      }
                      else
                      {
                        // ENCODING.SSAX_T1
                        return 656;
                      }
                    }
                  }
                }
              }
              else
              {
                // the following switch contains 3 case.
                switch ((d & 0x11) - 1)
                {
                  case 0x00:
                  {
                    // conflicts:
                    // ENCODING.SUB_r_T2_RRX         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx0000xxxx0011xxxx
                    // ENCODING.SUB_r_T2             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx0xxxxxxxxxxxxxxx
                    // ENCODING.SUB_SP_r_T1_RRX      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxx11010000xxxx0011xxxx
                    // ENCODING.SUB_SP_r_T1          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxx11010xxxxxxxxxxxxxxx
                    // imm3:imm2:stype!=0b0000011
                    if ((opcode & 0x000070f0) != 0x00000030)
                    {
                      // Rn!=0b1101
                      if ((opcode & 0x000f0000) != 0x000d0000)
                      {
                        // ENCODING.SUB_r_T2
                        return 773;
                      }
                      else
                      {
                        // ENCODING.SUB_SP_r_T1
                        return 789;
                      }
                    }
                    else
                    {
                      // Rn!=0b1101
                      if ((opcode & 0x000f0000) != 0x000d0000)
                      {
                        // ENCODING.SUB_r_T2_RRX
                        return 772;
                      }
                      else
                      {
                        // ENCODING.SUB_SP_r_T1_RRX
                        return 788;
                      }
                    }
                    break;
                  }
                  case 0x0f:
                  {
                    // the following switch contains 7 case.
                    switch (a & 0xf0)
                    {
                      case 0x00:
                      {
                        // ENCODING.SASX_T1
                        return 521;
                        break;
                      }
                      case 0x10:
                      {
                        // ENCODING.QASX_T1
                        return 463;
                        break;
                      }
                      case 0x20:
                      {
                        // ENCODING.SHASX_T1
                        return 560;
                        break;
                      }
                      case 0x40:
                      {
                        // ENCODING.UASX_T1
                        return 832;
                        break;
                      }
                      case 0x50:
                      {
                        // ENCODING.UQASX_T1
                        return 865;
                        break;
                      }
                      case 0x60:
                      {
                        // ENCODING.UHASX_T1
                        return 845;
                        break;
                      }
                      case 0x80:
                      {
                        // ENCODING.SEL_T1
                        return 544;
                        break;
                      }
                      default: break;
                    }
                    break;
                  }
                  case 0x10:
                  {
                    // ENCODING.UMULL_T1
                    return 859;
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
                // the following switch contains 4 case.
                switch (d & 0x11)
                {
                  case 0x00:
                  {
                    if (a & 0x20)
                    {
                      // ENCODING.PKHTB_T1
                      return 430;
                    }
                    else
                    {
                      // ENCODING.PKHBT_T1
                      return 429;
                    }
                    break;
                  }
                  case 0x01:
                  {
                    // conflicts:
                    // ENCODING.RSB_r_T1_RRX         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx0000xxxx0011xxxx
                    // ENCODING.RSB_r_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx0xxxxxxxxxxxxxxx
                    // imm3:imm2:stype!=0b0000011
                    if ((opcode & 0x000070f0) != 0x00000030)
                    {
                      // ENCODING.RSB_r_T1
                      return 503;
                    }
                    else
                    {
                      // ENCODING.RSB_r_T1_RRX
                      return 502;
                    }
                    break;
                  }
                  case 0x10:
                  {
                    // the following switch contains 9 case.
                    switch (a & 0xf0)
                    {
                      case 0x00:
                      {
                        // ENCODING.SSUB8_T1
                        return 662;
                        break;
                      }
                      case 0x10:
                      {
                        // ENCODING.QSUB8_T1
                        return 475;
                        break;
                      }
                      case 0x20:
                      {
                        // ENCODING.SHSUB8_T1
                        return 566;
                        break;
                      }
                      case 0x40:
                      {
                        // ENCODING.USUB8_T1
                        return 887;
                        break;
                      }
                      case 0x50:
                      {
                        // ENCODING.UQSUB8_T1
                        return 871;
                        break;
                      }
                      case 0x60:
                      {
                        // ENCODING.UHSUB8_T1
                        return 851;
                        break;
                      }
                      case 0x80:
                      {
                        // ENCODING.CRC32B_T1
                        return 147;
                        break;
                      }
                      case 0x90:
                      {
                        // ENCODING.CRC32H_T1
                        return 148;
                        break;
                      }
                      case 0xa0:
                      {
                        // ENCODING.CRC32W_T1
                        return 149;
                        break;
                      }
                      default: break;
                    }
                    break;
                  }
                  case 0x11:
                  {
                    // the following switch contains 7 case.
                    switch (a & 0xf0)
                    {
                      case 0x00:
                      {
                        // ENCODING.SMLAL_T1
                        return 583;
                        break;
                      }
                      case 0x80:
                      {
                        // ENCODING.SMLALBB_T1
                        return 588;
                        break;
                      }
                      case 0x90:
                      {
                        // ENCODING.SMLALBT_T1
                        return 589;
                        break;
                      }
                      case 0xa0:
                      {
                        // ENCODING.SMLALTB_T1
                        return 590;
                        break;
                      }
                      case 0xb0:
                      {
                        // ENCODING.SMLALTT_T1
                        return 591;
                        break;
                      }
                      case 0xc0:
                      {
                        // ENCODING.SMLALD_T1
                        return 594;
                        break;
                      }
                      case 0xd0:
                      {
                        // ENCODING.SMLALDX_T1
                        return 595;
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
                // the following switch contains 3 case.
                switch (d & 0x11)
                {
                  case 0x00:
                  {
                    // conflicts:
                    // ENCODING.EOR_r_T2_RRX         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx0000xxxx0011xxxx
                    // ENCODING.EOR_r_T2             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx0xxxxxxxxxxxxxxx
                    // imm3:imm2:stype!=0b0000011
                    if ((opcode & 0x000070f0) != 0x00000030)
                    {
                      // ENCODING.EOR_r_T2
                      return 177;
                    }
                    else
                    {
                      // ENCODING.EOR_r_T2_RRX
                      return 176;
                    }
                    break;
                  }
                  case 0x10:
                  {
                    // the following switch contains 10 case.
                    switch (a & 0xf0)
                    {
                      case 0x00:
                      {
                        // ENCODING.SADD8_T1
                        return 519;
                        break;
                      }
                      case 0x10:
                      {
                        // ENCODING.QADD8_T1
                        return 461;
                        break;
                      }
                      case 0x20:
                      {
                        // ENCODING.SHADD8_T1
                        return 558;
                        break;
                      }
                      case 0x40:
                      {
                        // ENCODING.UADD8_T1
                        return 830;
                        break;
                      }
                      case 0x50:
                      {
                        // ENCODING.UQADD8_T1
                        return 863;
                        break;
                      }
                      case 0x60:
                      {
                        // ENCODING.UHADD8_T1
                        return 843;
                        break;
                      }
                      case 0x80:
                      {
                        // ENCODING.QADD_T1
                        return 457;
                        break;
                      }
                      case 0x90:
                      {
                        // ENCODING.QDADD_T1
                        return 465;
                        break;
                      }
                      case 0xa0:
                      {
                        // ENCODING.QSUB_T1
                        return 471;
                        break;
                      }
                      case 0xb0:
                      {
                        // ENCODING.QDSUB_T1
                        return 467;
                        break;
                      }
                      default: break;
                    }
                    break;
                  }
                  case 0x11:
                  {
                    // ENCODING.SMULL_T1
                    return 634;
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
            switch (d & 0x11)
            {
              case 0x00:
              {
                // the following switch contains 4 case.
                switch (c & 0x60)
                {
                  case 0x00:
                  {
                    // conflicts:
                    // ENCODING.AND_r_T2_RRX         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx0000xxxx0011xxxx
                    // ENCODING.AND_r_T2             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx0xxxxxxxxxxxxxxx
                    // imm3:imm2:stype!=0b0000011
                    if ((opcode & 0x000070f0) != 0x00000030)
                    {
                      // ENCODING.AND_r_T2
                      return 67;
                    }
                    else
                    {
                      // ENCODING.AND_r_T2_RRX
                      return 66;
                    }
                    break;
                  }
                  case 0x20:
                  {
                    // conflicts:
                    // ENCODING.BIC_r_T2_RRX         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx0000xxxx0011xxxx
                    // ENCODING.BIC_r_T2             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx0xxxxxxxxxxxxxxx
                    // imm3:imm2:stype!=0b0000011
                    if ((opcode & 0x000070f0) != 0x00000030)
                    {
                      // ENCODING.BIC_r_T2
                      return 91;
                    }
                    else
                    {
                      // ENCODING.BIC_r_T2_RRX
                      return 90;
                    }
                    break;
                  }
                  case 0x40:
                  {
                    // conflicts:
                    // ENCODING.MOV_r_T3_RRX         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxx11110000xxxx0011xxxx
                    // ENCODING.MOV_r_T3             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxx11110xxxxxxxxxxxxxxx
                    // ENCODING.ORR_r_T2_RRX         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx0000xxxx0011xxxx
                    // ENCODING.ORR_r_T2             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx0xxxxxxxxxxxxxxx
                    // imm3:imm2:stype!=0b0000011
                    if ((opcode & 0x000070f0) != 0x00000030)
                    {
                      // Rn!=0b1111
                      if ((opcode & 0x000f0000) != 0x000f0000)
                      {
                        // ENCODING.ORR_r_T2
                        return 422;
                      }
                      else
                      {
                        // ENCODING.MOV_r_T3
                        return 358;
                      }
                    }
                    else
                    {
                      // Rn!=0b1111
                      if ((opcode & 0x000f0000) != 0x000f0000)
                      {
                        // ENCODING.ORR_r_T2_RRX
                        return 421;
                      }
                      else
                      {
                        // ENCODING.MOV_r_T3_RRX
                        return 357;
                      }
                    }
                    break;
                  }
                  case 0x60:
                  {
                    // conflicts:
                    // ENCODING.MVN_r_T2_RRX         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxx11110000xxxx0011xxxx
                    // ENCODING.MVN_r_T2             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxx11110xxxxxxxxxxxxxxx
                    // ENCODING.ORN_r_T1_RRX         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx0000xxxx0011xxxx
                    // ENCODING.ORN_r_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx0xxxxxxxxxxxxxxx
                    // imm3:imm2:stype!=0b0000011
                    if ((opcode & 0x000070f0) != 0x00000030)
                    {
                      // Rn!=0b1111
                      if ((opcode & 0x000f0000) != 0x000f0000)
                      {
                        // ENCODING.ORN_r_T1
                        return 409;
                      }
                      else
                      {
                        // ENCODING.MVN_r_T2
                        return 398;
                      }
                    }
                    else
                    {
                      // Rn!=0b1111
                      if ((opcode & 0x000f0000) != 0x000f0000)
                      {
                        // ENCODING.ORN_r_T1_RRX
                        return 408;
                      }
                      else
                      {
                        // ENCODING.MVN_r_T2_RRX
                        return 397;
                      }
                    }
                    break;
                  }
                  default: break;
                }
                break;
              }
              case 0x01:
              {
                // the following switch contains 3 case.
                switch (c & 0x60)
                {
                  case 0x00:
                  {
                    // conflicts:
                    // ENCODING.ADD_r_T3_RRX         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx0000xxxx0011xxxx
                    // ENCODING.ADD_r_T3             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx0xxxxxxxxxxxxxxx
                    // ENCODING.ADD_SP_r_T3_RRX      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxx11010000xxxx0011xxxx
                    // ENCODING.ADD_SP_r_T3          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxx11010xxxxxxxxxxxxxxx
                    // imm3:imm2:stype!=0b0000011
                    if ((opcode & 0x000070f0) != 0x00000030)
                    {
                      // Rn!=0b1101
                      if ((opcode & 0x000f0000) != 0x000d0000)
                      {
                        // ENCODING.ADD_r_T3
                        return 30;
                      }
                      else
                      {
                        // ENCODING.ADD_SP_r_T3
                        return 49;
                      }
                    }
                    else
                    {
                      // Rn!=0b1101
                      if ((opcode & 0x000f0000) != 0x000d0000)
                      {
                        // ENCODING.ADD_r_T3_RRX
                        return 29;
                      }
                      else
                      {
                        // ENCODING.ADD_SP_r_T3_RRX
                        return 48;
                      }
                    }
                    break;
                  }
                  case 0x40:
                  {
                    // conflicts:
                    // ENCODING.ADC_r_T2_RRX         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx0000xxxx0011xxxx
                    // ENCODING.ADC_r_T2             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx0xxxxxxxxxxxxxxx
                    // imm3:imm2:stype!=0b0000011
                    if ((opcode & 0x000070f0) != 0x00000030)
                    {
                      // ENCODING.ADC_r_T2
                      return 11;
                    }
                    else
                    {
                      // ENCODING.ADC_r_T2_RRX
                      return 10;
                    }
                    break;
                  }
                  case 0x60:
                  {
                    // conflicts:
                    // ENCODING.SBC_r_T2_RRX         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx0000xxxx0011xxxx
                    // ENCODING.SBC_r_T2             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx0xxxxxxxxxxxxxxx
                    // imm3:imm2:stype!=0b0000011
                    if ((opcode & 0x000070f0) != 0x00000030)
                    {
                      // ENCODING.SBC_r_T2
                      return 534;
                    }
                    else
                    {
                      // ENCODING.SBC_r_T2_RRX
                      return 533;
                    }
                    break;
                  }
                  default: break;
                }
                break;
              }
              case 0x10:
              {
                if (a & 0x80)
                {
                  // the following switch contains 3 case.
                  switch (c & 0x60)
                  {
                    case 0x00:
                    {
                      // conflicts:
                      // ENCODING.SXTAH_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx1111xxxxxxxxxxxx
                      // ENCODING.SXTH_T2              : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxx11111111xxxxxxxxxxxx
                      // Rn!=0b1111
                      if ((opcode & 0x000f0000) != 0x000f0000)
                      {
                        // ENCODING.SXTAH_T1
                        return 799;
                      }
                      else
                      {
                        // ENCODING.SXTH_T2
                        return 807;
                      }
                      break;
                    }
                    case 0x20:
                    {
                      // conflicts:
                      // ENCODING.SXTAB16_T1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx1111xxxxxxxxxxxx
                      // ENCODING.SXTB16_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxx11111111xxxxxxxxxxxx
                      // Rn!=0b1111
                      if ((opcode & 0x000f0000) != 0x000f0000)
                      {
                        // ENCODING.SXTAB16_T1
                        return 797;
                      }
                      else
                      {
                        // ENCODING.SXTB16_T1
                        return 804;
                      }
                      break;
                    }
                    case 0x40:
                    {
                      // conflicts:
                      // ENCODING.SXTAB_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx1111xxxxxxxxxxxx
                      // ENCODING.SXTB_T2              : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxx11111111xxxxxxxxxxxx
                      // Rn!=0b1111
                      if ((opcode & 0x000f0000) != 0x000f0000)
                      {
                        // ENCODING.SXTAB_T1
                        return 795;
                      }
                      else
                      {
                        // ENCODING.SXTB_T2
                        return 802;
                      }
                      break;
                    }
                    default: break;
                  }
                }
                else
                {
                  // ENCODING.MOV_rr_T2
                  return 368;
                }
                break;
              }
              case 0x11:
              {
                if (a & 0x10)
                {
                  // the following switch contains 4 case.
                  switch (c & 0x60)
                  {
                    case 0x00:
                    {
                      // ENCODING.MLS_T1
                      return 343;
                      break;
                    }
                    case 0x20:
                    {
                      // conflicts:
                      // ENCODING.SMLADX_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxx000xxxxx
                      // ENCODING.SMUADX_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx1111xxxx000xxxxx
                      // Ra!=0b1111
                      if ((opcode & 0x0000f000) != 0x0000f000)
                      {
                        // ENCODING.SMLADX_T1
                        return 580;
                      }
                      else
                      {
                        // ENCODING.SMUADX_T1
                        return 623;
                      }
                      break;
                    }
                    case 0x40:
                    {
                      // conflicts:
                      // ENCODING.SMLSDX_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxx000xxxxx
                      // ENCODING.SMUSDX_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx1111xxxx000xxxxx
                      // Ra!=0b1111
                      if ((opcode & 0x0000f000) != 0x0000f000)
                      {
                        // ENCODING.SMLSDX_T1
                        return 603;
                      }
                      else
                      {
                        // ENCODING.SMUSDX_T1
                        return 642;
                      }
                      break;
                    }
                    case 0x60:
                    {
                      // ENCODING.SMMLSR_T1
                      return 615;
                      break;
                    }
                    default: break;
                  }
                }
                else
                {
                  // the following switch contains 4 case.
                  switch (c & 0x60)
                  {
                    case 0x00:
                    {
                      // conflicts:
                      // ENCODING.MLA_T1               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxx000xxxxx
                      // ENCODING.MUL_T2               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx1111xxxx000xxxxx
                      // Ra!=0b1111
                      if ((opcode & 0x0000f000) != 0x0000f000)
                      {
                        // ENCODING.MLA_T1
                        return 341;
                      }
                      else
                      {
                        // ENCODING.MUL_T2
                        return 387;
                      }
                      break;
                    }
                    case 0x20:
                    {
                      // conflicts:
                      // ENCODING.SMLAD_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxx000xxxxx
                      // ENCODING.SMUAD_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx1111xxxx000xxxxx
                      // Ra!=0b1111
                      if ((opcode & 0x0000f000) != 0x0000f000)
                      {
                        // ENCODING.SMLAD_T1
                        return 579;
                      }
                      else
                      {
                        // ENCODING.SMUAD_T1
                        return 622;
                      }
                      break;
                    }
                    case 0x40:
                    {
                      // conflicts:
                      // ENCODING.SMLSD_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxx000xxxxx
                      // ENCODING.SMUSD_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxx1111xxxx000xxxxx
                      // Ra!=0b1111
                      if ((opcode & 0x0000f000) != 0x0000f000)
                      {
                        // ENCODING.SMLSD_T1
                        return 602;
                      }
                      else
                      {
                        // ENCODING.SMUSD_T1
                        return 641;
                      }
                      break;
                    }
                    case 0x60:
                    {
                      // ENCODING.SMMLS_T1
                      return 614;
                      break;
                    }
                    default: break;
                  }
                }
                break;
              }
              default: break;
            }
          }
        }
        break;
      }
      case 0x04:
      {
        if (b & 0x02)
        {
          if (b & 0x04)
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
                    // ENCODING.STC_T1_pre
                    return 669;
                  }
                  else
                  {
                    // ENCODING.STC_T1_post
                    return 668;
                  }
                }
                else
                {
                  if (d & 0x01)
                  {
                    // ENCODING.STC_T1_off
                    return 667;
                  }
                  else
                  {
                    // ENCODING.STC_T1_unind
                    return 670;
                  }
                }
                break;
              }
              case 0x10:
              {
                // conflicts:
                // ENCODING.LDC_i_T1_off         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxx1xx0xxxxx01011xx0xxxxxxxx
                // ENCODING.LDC_i_T1_post        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxx0xx1xxxxx01011xx0xxxxxxxx
                // ENCODING.LDC_i_T1_pre         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxx1xx1xxxxx01011xx0xxxxxxxx
                // ENCODING.LDC_i_T1_unind       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxx01x0xxxxx01011xx0xxxxxxxx
                // ENCODING.LDC_l_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxxxxxxx111101011xx0xxxxxxxx
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
                        // ENCODING.LDC_i_T1_pre
                        return 213;
                      }
                      else
                      {
                        // ENCODING.LDC_i_T1_post
                        return 212;
                      }
                    }
                    else
                    {
                      if (d & 0x01)
                      {
                        // ENCODING.LDC_i_T1_off
                        return 211;
                      }
                      else
                      {
                        // ENCODING.LDC_i_T1_unind
                        return 214;
                      }
                    }
                  }
                  else
                  {
                    // ENCODING.LDC_l_T1
                    return 216;
                  }
                }
                else
                {
                  if (c & 0x20)
                  {
                    if (d & 0x01)
                    {
                      // ENCODING.LDC_i_T1_pre
                      return 213;
                    }
                    else
                    {
                      // ENCODING.LDC_i_T1_post
                      return 212;
                    }
                  }
                  else
                  {
                    // ENCODING.LDC_i_T1_off
                    return 211;
                  }
                }
                break;
              }
              case 0x40:
              {
                // ENCODING.MCRR_T1
                return 338;
                break;
              }
              case 0x50:
              {
                // ENCODING.MRRC_T1
                return 374;
                break;
              }
              default: break;
            }
          }
          else
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
                      // ENCODING.FLDMDBX_T1
                      return 984;
                    }
                    else
                    {
                      // ENCODING.VLDMDB_T1
                      return 1549;
                    }
                  }
                  else
                  {
                    // conflicts:
                    // ENCODING.VLDR_T1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxxxxxxxxxxxxxxxxxxxxxxxxxxx
                    // ENCODING.VLDR_l_T1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxxxxxxx1111xxxxxxxxxxxxxxxx
                    // Rn!=0b1111
                    if ((opcode & 0x000f0000) != 0x000f0000)
                    {
                      // ENCODING.VLDR_T1_D
                      return 1558;
                    }
                    else
                    {
                      // ENCODING.VLDR_l_T1_D
                      return 1564;
                    }
                  }
                }
                else
                {
                  if (c & 0x80)
                  {
                    if (a & 0x01)
                    {
                      // ENCODING.FLDMIAX_T1
                      return 985;
                    }
                    else
                    {
                      // ENCODING.VLDM_T1
                      return 1550;
                    }
                  }
                  else
                  {
                    // ENCODING.VMOV_d_T1
                    return 1650;
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
                      // ENCODING.FSTMDBX_T1
                      return 988;
                    }
                    else
                    {
                      // ENCODING.VSTMDB_T1
                      return 2202;
                    }
                  }
                  else
                  {
                    // ENCODING.VSTR_T1_D
                    return 2211;
                  }
                }
                else
                {
                  if (c & 0x80)
                  {
                    if (a & 0x01)
                    {
                      // ENCODING.FSTMIAX_T1
                      return 989;
                    }
                    else
                    {
                      // ENCODING.VSTM_T1
                      return 2203;
                    }
                  }
                  else
                  {
                    // ENCODING.VMOV_tod_T1
                    return 1649;
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
                    // ENCODING.VLDMDB_T2
                    return 1551;
                  }
                  else
                  {
                    // conflicts:
                    // ENCODING.VLDR_T1_S            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxxxxxxxxxxxxxxxxxxxxxxxxxxx
                    // ENCODING.VLDR_l_T1_S          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxxxxxxx1111xxxxxxxxxxxxxxxx
                    // Rn!=0b1111
                    if ((opcode & 0x000f0000) != 0x000f0000)
                    {
                      // ENCODING.VLDR_T1_S
                      return 1557;
                    }
                    else
                    {
                      // ENCODING.VLDR_l_T1_S
                      return 1563;
                    }
                  }
                }
                else
                {
                  if (c & 0x80)
                  {
                    // ENCODING.VLDM_T2
                    return 1552;
                  }
                  else
                  {
                    // ENCODING.VMOV_ss_T1
                    return 1692;
                  }
                }
              }
              else
              {
                if (d & 0x01)
                {
                  if (c & 0x20)
                  {
                    // ENCODING.VSTMDB_T2
                    return 2204;
                  }
                  else
                  {
                    // ENCODING.VSTR_T1_S
                    return 2210;
                  }
                }
                else
                {
                  if (c & 0x80)
                  {
                    // ENCODING.VSTM_T2
                    return 2205;
                  }
                  else
                  {
                    // ENCODING.VMOV_toss_T1
                    return 1691;
                  }
                }
              }
            }
          }
        }
        else
        {
          if (b & 0x01)
          {
            if (b & 0x04)
            {
              if (a & 0x10)
              {
                if (a & 0x40)
                {
                  // ENCODING.VUDOT_T1_Q
                  return 2255;
                }
                else
                {
                  // ENCODING.VUDOT_T1_D
                  return 2254;
                }
              }
              else
              {
                if (a & 0x40)
                {
                  // the following switch contains 3 case.
                  switch (c & 0xa0)
                  {
                    case 0x00:
                    {
                      // ENCODING.VDOT_T1_Q
                      return 1318;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.VSDOT_T1_Q
                      return 2012;
                      break;
                    }
                    case 0xa0:
                    {
                      // ENCODING.VUSDOT_T1_Q
                      return 2265;
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
                      // ENCODING.VDOT_T1_D
                      return 1317;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.VSDOT_T1_D
                      return 2011;
                      break;
                    }
                    case 0xa0:
                    {
                      // ENCODING.VUSDOT_T1_D
                      return 2264;
                      break;
                    }
                    default: break;
                  }
                }
              }
            }
            else
            {
              if (c & 0x10)
              {
                // conflicts:
                // ENCODING.VLDR_T1_H            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxx1xx0xxxxxxxxxxxxxxxxxxxxx
                // ENCODING.VLDR_l_T1_H          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxx1xx0x1111xxxxxxxxxxxxxxxx
                // Rn!=0b1111
                if ((opcode & 0x000f0000) != 0x000f0000)
                {
                  // ENCODING.VLDR_T1_H
                  return 1556;
                }
                else
                {
                  // ENCODING.VLDR_l_T1_H
                  return 1562;
                }
              }
              else
              {
                // ENCODING.VSTR_T1_H
                return 2209;
              }
            }
          }
          else
          {
            if (a & 0x10)
            {
              if (b & 0x04)
              {
                // ENCODING.VUMMLA_T1_Q
                return 2261;
              }
              else
              {
                // the following switch contains 3 case.
                switch (c & 0x90)
                {
                  case 0x00:
                  {
                    // ENCODING.VFMAL_T1_D
                    return 1353;
                    break;
                  }
                  case 0x10:
                  {
                    // conflicts:
                    // ENCODING.VFMA_bf_T1_Q         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx1xxxxxxxxx1xxxxxxxxxxx
                    // ENCODING.VFMAL_T1_Q           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx0xx1xxxxxxxxx1xxxx1xxxxxx
                    if ((opcode & 0xffb00f50) == 0xfc300850)
                    {
                      // ENCODING.VFMAL_T1_Q
                      return 1354;
                    }
                    else
                    {
                      // ENCODING.VFMA_bf_T1_Q
                      return 1348;
                    }
                    break;
                  }
                  case 0x80:
                  {
                    if (a & 0x40)
                    {
                      // ENCODING.VFMSL_T1_Q
                      return 1372;
                    }
                    else
                    {
                      // ENCODING.VFMSL_T1_D
                      return 1371;
                    }
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
                if (b & 0x04)
                {
                  // the following switch contains 3 case.
                  switch (c & 0xa0)
                  {
                    case 0x00:
                    {
                      // ENCODING.VMMLA_T1_Q
                      return 1646;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.VSMMLA_T1_Q
                      return 2064;
                      break;
                    }
                    case 0xa0:
                    {
                      // ENCODING.VUSMMLA_T1_Q
                      return 2271;
                      break;
                    }
                    default: break;
                  }
                }
                else
                {
                  if (c & 0x20)
                  {
                    // ENCODING.VCMLA_T1_Q
                    return 1152;
                  }
                  else
                  {
                    // ENCODING.VCADD_T1_Q
                    return 1096;
                  }
                }
              }
              else
              {
                if (c & 0x20)
                {
                  // ENCODING.VCMLA_T1_D
                  return 1151;
                }
                else
                {
                  // ENCODING.VCADD_T1_D
                  return 1095;
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
          if (b & 0x08)
          {
            if (b & 0x04)
            {
              if (d & 0x01)
              {
                if (a & 0x40)
                {
                  if (c & 0x80)
                  {
                    // conflicts:
                    // ENCODING.VCVT_xs_T1_Q         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxx0xxxxxxx
                    // ENCODING.VMOV_i_T4_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxx000xxxxxxxxxxx0x0xxxxx
                    // ENCODING.VMOV_i_T5_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxx000xxxxxxxxx100x1xxxxx
                    // ENCODING.VMVN_i_T3_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxx000xxxxxxxxx0x0x1xxxxx
                    // imm6!=0b000xxx
                    if ((opcode & 0x00380000) != 0x00000000)
                    {
                      // ENCODING.VCVT_xs_T1_Q
                      return 1224;
                    }
                    else
                    {
                      if (a & 0x20)
                      {
                        if (b & 0x02)
                        {
                          // ENCODING.VMOV_i_T5_Q
                          return 1676;
                        }
                        else
                        {
                          // ENCODING.VMVN_i_T3_Q
                          return 1736;
                        }
                      }
                      else
                      {
                        // ENCODING.VMOV_i_T4_Q
                        return 1674;
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x01)
                    {
                      if (b & 0x02)
                      {
                        if (c & 0x20)
                        {
                          if (d & 0x10)
                          {
                            // ENCODING.VMINNM_T1_Q
                            return 1597;
                          }
                          else
                          {
                            // ENCODING.VRSQRTS_T1_Q
                            return 2002;
                          }
                        }
                        else
                        {
                          if (d & 0x10)
                          {
                            // ENCODING.VMAXNM_T1_Q
                            return 1579;
                          }
                          else
                          {
                            // ENCODING.VRECPS_T1_Q
                            return 1902;
                          }
                        }
                      }
                      else
                      {
                        if (c & 0x20)
                        {
                          // ENCODING.VMLS_f_T1_Q
                          return 1629;
                        }
                        else
                        {
                          if (d & 0x10)
                          {
                            // ENCODING.VMUL_f_T1_Q
                            return 1709;
                          }
                          else
                          {
                            // ENCODING.VMLA_f_T1_Q
                            return 1607;
                          }
                        }
                      }
                    }
                    else
                    {
                      if (b & 0x02)
                      {
                        if (c & 0x20)
                        {
                          // ENCODING.VACGT_T1_Q
                          return 1044;
                        }
                        else
                        {
                          // ENCODING.VACGE_T1_Q
                          return 1040;
                        }
                      }
                      else
                      {
                        if (d & 0x10)
                        {
                          // ENCODING.VQRDMLSH_T1_Q
                          return 1854;
                        }
                        else
                        {
                          if (c & 0x20)
                          {
                            // ENCODING.VFMS_T1_Q
                            return 1365;
                          }
                          else
                          {
                            // ENCODING.VFMA_T1_Q
                            return 1343;
                          }
                        }
                      }
                    }
                  }
                }
                else
                {
                  if (c & 0x80)
                  {
                    // conflicts:
                    // ENCODING.VCVT_xs_T1_D         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxxxx0xxxxxxx
                    // ENCODING.VMOV_i_T4_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxx000xxxxxxxxxxx0x0xxxxx
                    // ENCODING.VMOV_i_T5_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxx000xxxxxxxxx100x1xxxxx
                    // ENCODING.VMVN_i_T3_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxx000xxxxxxxxx0x0x1xxxxx
                    // imm6!=0b000xxx
                    if ((opcode & 0x00380000) != 0x00000000)
                    {
                      // ENCODING.VCVT_xs_T1_D
                      return 1223;
                    }
                    else
                    {
                      if (a & 0x20)
                      {
                        if (b & 0x02)
                        {
                          // ENCODING.VMOV_i_T5_D
                          return 1675;
                        }
                        else
                        {
                          // ENCODING.VMVN_i_T3_D
                          return 1735;
                        }
                      }
                      else
                      {
                        // ENCODING.VMOV_i_T4_D
                        return 1673;
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x01)
                    {
                      if (b & 0x02)
                      {
                        if (c & 0x20)
                        {
                          if (d & 0x10)
                          {
                            // ENCODING.VMINNM_T1_D
                            return 1596;
                          }
                          else
                          {
                            // ENCODING.VRSQRTS_T1_D
                            return 2001;
                          }
                        }
                        else
                        {
                          if (d & 0x10)
                          {
                            // ENCODING.VMAXNM_T1_D
                            return 1578;
                          }
                          else
                          {
                            // ENCODING.VRECPS_T1_D
                            return 1901;
                          }
                        }
                      }
                      else
                      {
                        if (c & 0x20)
                        {
                          // ENCODING.VMLS_f_T1_D
                          return 1628;
                        }
                        else
                        {
                          if (d & 0x10)
                          {
                            // ENCODING.VMUL_f_T1_D
                            return 1708;
                          }
                          else
                          {
                            // ENCODING.VMLA_f_T1_D
                            return 1606;
                          }
                        }
                      }
                    }
                    else
                    {
                      if (b & 0x02)
                      {
                        if (c & 0x20)
                        {
                          // ENCODING.VACGT_T1_D
                          return 1043;
                        }
                        else
                        {
                          // ENCODING.VACGE_T1_D
                          return 1039;
                        }
                      }
                      else
                      {
                        if (d & 0x10)
                        {
                          // ENCODING.VQRDMLSH_T1_D
                          return 1853;
                        }
                        else
                        {
                          if (c & 0x20)
                          {
                            // ENCODING.VFMS_T1_D
                            return 1364;
                          }
                          else
                          {
                            // ENCODING.VFMA_T1_D
                            return 1342;
                          }
                        }
                      }
                    }
                  }
                }
              }
              else
              {
                if (b & 0x02)
                {
                  if (c & 0x10)
                  {
                    // ENCODING.MRC_T1
                    return 372;
                  }
                  else
                  {
                    // ENCODING.MCR_T1
                    return 336;
                  }
                }
                else
                {
                  if (a & 0x40)
                  {
                    if (c & 0x20)
                    {
                      // ENCODING.VUDOT_s_T1_Q
                      return 2259;
                    }
                    else
                    {
                      // ENCODING.VSUDOT_s_T1_Q
                      return 2235;
                    }
                  }
                  else
                  {
                    if (c & 0x20)
                    {
                      // ENCODING.VUDOT_s_T1_D
                      return 2258;
                    }
                    else
                    {
                      // ENCODING.VSUDOT_s_T1_D
                      return 2234;
                    }
                  }
                }
              }
            }
            else
            {
              if (b & 0x01)
              {
                if (d & 0x01)
                {
                  if (c & 0x80)
                  {
                    if (a & 0x40)
                    {
                      // conflicts:
                      // ENCODING.VBIC_i_T2_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxx000xxxxxxxxxxx0x1xxxxx
                      // ENCODING.VORR_i_T2_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxx000xxxxxxxxxxx0x0xxxxx
                      // ENCODING.VQRSHRN_T1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxx0x0xxxxxxx
                      // imm6!=0b000xxx
                      if ((opcode & 0x00380000) != 0x00000000)
                      {
                        // ENCODING.VQRSHRN_T1
                        return 1871;
                      }
                      else
                      {
                        if (a & 0x20)
                        {
                          // ENCODING.VBIC_i_T2_Q
                          return 1076;
                        }
                        else
                        {
                          // ENCODING.VORR_i_T2_Q
                          return 1780;
                        }
                      }
                    }
                    else
                    {
                      // conflicts:
                      // ENCODING.VBIC_i_T2_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxx000xxxxxxxxxxx0x1xxxxx
                      // ENCODING.VORR_i_T2_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxx000xxxxxxxxxxx0x0xxxxx
                      // ENCODING.VQSHRN_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxx0x0xxxxxxx
                      // imm6!=0b000xxx
                      if ((opcode & 0x00380000) != 0x00000000)
                      {
                        // ENCODING.VQSHRN_T1
                        return 1887;
                      }
                      else
                      {
                        if (a & 0x20)
                        {
                          // ENCODING.VBIC_i_T2_D
                          return 1075;
                        }
                        else
                        {
                          // ENCODING.VORR_i_T2_D
                          return 1779;
                        }
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x02)
                    {
                      if (d & 0x10)
                      {
                        if (a & 0x40)
                        {
                          // ENCODING.VQRDMLAH_T1_Q
                          return 1846;
                        }
                        else
                        {
                          // ENCODING.VQRDMLAH_T1_D
                          return 1845;
                        }
                      }
                      else
                      {
                        // ENCODING.VPADD_i_T1
                        return 1792;
                      }
                    }
                    else
                    {
                      if (a & 0x40)
                      {
                        // ENCODING.VMUL_i_T1_Q
                        return 1716;
                      }
                      else
                      {
                        // ENCODING.VMUL_i_T1_D
                        return 1715;
                      }
                    }
                  }
                }
                else
                {
                  if (b & 0x02)
                  {
                    if (c & 0x10)
                    {
                      // ENCODING.VMOV_sr_T1
                      return 1688;
                    }
                    else
                    {
                      if (c & 0x80)
                      {
                        // ENCODING.VDUP_r_T1
                        return 1324;
                      }
                      else
                      {
                        // ENCODING.VMOV_rs_T1
                        return 1682;
                      }
                    }
                  }
                  else
                  {
                    if (c & 0x10)
                    {
                      // ENCODING.VMOV_h_T1
                      return 1654;
                    }
                    else
                    {
                      // ENCODING.VMOV_toh_T1
                      return 1653;
                    }
                  }
                }
              }
              else
              {
                if (c & 0x80)
                {
                  if (a & 0x40)
                  {
                    // conflicts:
                    // ENCODING.VMOV_i_T3_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx1xx000xxxxxxxxxxx0x0xxxxx
                    // ENCODING.VMVN_i_T2_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx1xx000xxxxxxxxxxx0x1xxxxx
                    // ENCODING.VQRSHRUN_T1          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xxxxxxxxxxxxxx0x0xxxxxxx
                    // ENCODING.VRSHRN_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxx1xxxxxxxxxxxxxx0x0xxxxxxx
                    // imm6!=0b000xxx
                    if ((opcode & 0x00380000) != 0x00000000)
                    {
                      if (d & 0x10)
                      {
                        // ENCODING.VQRSHRUN_T1
                        return 1872;
                      }
                      else
                      {
                        // ENCODING.VRSHRN_T1
                        return 1994;
                      }
                    }
                    else
                    {
                      if (a & 0x20)
                      {
                        // ENCODING.VMVN_i_T2_Q
                        return 1734;
                      }
                      else
                      {
                        // ENCODING.VMOV_i_T3_Q
                        return 1672;
                      }
                    }
                  }
                  else
                  {
                    if (d & 0x01)
                    {
                      // conflicts:
                      // ENCODING.VMOV_i_T3_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxx000xxxxxxxxxxxxx0xxxxx
                      // ENCODING.VMOVL_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxx000xxxxxx1xxxxxxxxx
                      // ENCODING.VMVN_i_T2_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxx000xxxxxxxxxxxxx1xxxxx
                      // ENCODING.VQSHRUN_T1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxxxx0xxxxxxxxx
                      // ENCODING.VSHLL_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxxxx1xxxxxxxxx
                      // ENCODING.VSHRN_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxxxxxxxxxxxxxxxxx0xxxxxxxxx
                      // imm3H!=0b000
                      if ((opcode & 0x00380000) != 0x00000000)
                      {
                        if (b & 0x02)
                        {
                          if (((opcode & 0xef870fd0) == 0xef800a10) && ((opcode & 0x00380000) != 0x00000000))
                          {
                            // ENCODING.VMOVL_T1
                            return 1694;
                          }
                          else
                          {
                            // ENCODING.VSHLL_T1
                            return 2051;
                          }
                        }
                        else
                        {
                          if (d & 0x10)
                          {
                            // ENCODING.VQSHRUN_T1
                            return 1888;
                          }
                          else
                          {
                            // ENCODING.VSHRN_T1
                            return 2058;
                          }
                        }
                      }
                      else
                      {
                        if (a & 0x20)
                        {
                          // ENCODING.VMVN_i_T2_D
                          return 1733;
                        }
                        else
                        {
                          // ENCODING.VMOV_i_T3_D
                          return 1671;
                        }
                      }
                    }
                    else
                    {
                      if (c & 0x10)
                      {
                        // ENCODING.VMRS_T1_AS
                        return 1700;
                      }
                      else
                      {
                        // ENCODING.VMSR_T1_AS
                        return 1702;
                      }
                    }
                  }
                }
                else
                {
                  if (b & 0x02)
                  {
                    if (d & 0x01)
                    {
                      // ENCODING.VPMIN_i_T1
                      return 1804;
                    }
                    else
                    {
                      if (c & 0x10)
                      {
                        // ENCODING.VMOV_s_T1
                        return 1686;
                      }
                      else
                      {
                        // ENCODING.VMOV_tos_T1
                        return 1685;
                      }
                    }
                  }
                  else
                  {
                    // the following switch contains 3 case.
                    switch ((d & 0x11) - 1)
                    {
                      case 0x00:
                      {
                        if (a & 0x40)
                        {
                          // ENCODING.VTST_T1_Q
                          return 2251;
                        }
                        else
                        {
                          // ENCODING.VTST_T1_D
                          return 2250;
                        }
                        break;
                      }
                      case 0x0f:
                      {
                        // the following switch contains 3 case.
                        switch (c & 0x30)
                        {
                          case 0x00:
                          {
                            if (a & 0x40)
                            {
                              // ENCODING.VFMAL_s_T1_Q
                              return 1358;
                            }
                            else
                            {
                              // ENCODING.VFMAL_s_T1_D
                              return 1357;
                            }
                            break;
                          }
                          case 0x10:
                          {
                            if (a & 0x40)
                            {
                              // ENCODING.VFMSL_s_T1_Q
                              return 1376;
                            }
                            else
                            {
                              // ENCODING.VFMSL_s_T1_D
                              return 1375;
                            }
                            break;
                          }
                          case 0x30:
                          {
                            // ENCODING.VFMA_bfs_T1_Q
                            return 1350;
                            break;
                          }
                          default: break;
                        }
                        break;
                      }
                      case 0x10:
                      {
                        if (a & 0x40)
                        {
                          // ENCODING.VCEQ_r_T1_Q
                          return 1106;
                        }
                        else
                        {
                          // ENCODING.VCEQ_r_T1_D
                          return 1105;
                        }
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
            if (a & 0x40)
            {
              if (b & 0x01)
              {
                if (c & 0x80)
                {
                  // conflicts:
                  // ENCODING.VBIC_i_T1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx1xx000xxxxxxxxxxx0x1xxxxx
                  // ENCODING.VORR_i_T1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx1xx000xxxxxxxxxxx0x0xxxxx
                  // ENCODING.VQSHL_i_T1_Q         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx1xxxxxxxxxxxxx11xxxxxxxxx
                  // ENCODING.VRSRA_T1_Q           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx1xxxxxxxxxxxxx01xxxxxxxxx
                  // ENCODING.VSHL_i_T1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxx1xxxxxxxxxxxxx10xxxxxxxxx
                  // ENCODING.VSLI_T1_Q            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xxxxxxxxxxxxx10xxxxxxxxx
                  // ENCODING.VSRA_T1_Q            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx1xxxxxxxxxxxxx00xxxxxxxxx
                  // imm6:L!=0b000xxx0
                  if ((opcode & 0x00380080) != 0x00000000)
                  {
                    // the following switch contains 4 case.
                    switch (b & 0x06)
                    {
                      case 0x00:
                      {
                        // ENCODING.VSRA_T1_Q
                        return 2074;
                        break;
                      }
                      case 0x02:
                      {
                        // ENCODING.VRSRA_T1_Q
                        return 2006;
                        break;
                      }
                      case 0x04:
                      {
                        if (d & 0x10)
                        {
                          // ENCODING.VSLI_T1_Q
                          return 2062;
                        }
                        else
                        {
                          // ENCODING.VSHL_i_T1_Q
                          return 2044;
                        }
                        break;
                      }
                      case 0x06:
                      {
                        // ENCODING.VQSHL_i_T1_Q
                        return 1878;
                        break;
                      }
                      default: break;
                    }
                  }
                  else
                  {
                    if (a & 0x20)
                    {
                      // ENCODING.VBIC_i_T1_Q
                      return 1074;
                    }
                    else
                    {
                      // ENCODING.VORR_i_T1_Q
                      return 1778;
                    }
                  }
                }
                else
                {
                  // the following switch contains 4 case.
                  switch (b & 0x06)
                  {
                    case 0x00:
                    {
                      if (c & 0x10)
                      {
                        if (c & 0x20)
                        {
                          if (d & 0x10)
                          {
                            // ENCODING.VBIF_T1_Q
                            return 1084;
                          }
                          else
                          {
                            // ENCODING.VORN_r_T1_Q
                            return 1772;
                          }
                        }
                        else
                        {
                          if (d & 0x10)
                          {
                            // ENCODING.VBSL_T1_Q
                            return 1092;
                          }
                          else
                          {
                            // ENCODING.VBIC_r_T1_Q
                            return 1080;
                          }
                        }
                      }
                      else
                      {
                        if (c & 0x20)
                        {
                          if (d & 0x10)
                          {
                            // ENCODING.VBIT_T1_Q
                            return 1088;
                          }
                          else
                          {
                            // ENCODING.VORR_r_T1_Q
                            return 1784;
                          }
                        }
                        else
                        {
                          if (d & 0x10)
                          {
                            // ENCODING.VEOR_T1_Q
                            return 1332;
                          }
                          else
                          {
                            // ENCODING.VAND_r_T1_Q
                            return 1068;
                          }
                        }
                      }
                      break;
                    }
                    case 0x02:
                    {
                      // ENCODING.VCGE_r_T1_Q
                      return 1118;
                      break;
                    }
                    case 0x04:
                    {
                      // ENCODING.VQRSHL_T1_Q
                      return 1868;
                      break;
                    }
                    case 0x06:
                    {
                      // ENCODING.VABA_T1_Q
                      return 1014;
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
                  // conflicts:
                  // ENCODING.VMOV_i_T1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx1xx000xxxxxxxxxxx0x0xxxxx
                  // ENCODING.VMVN_i_T1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx1xx000xxxxxxxxxxx0x1xxxxx
                  // ENCODING.VQSHLU_i_T1_Q        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xxxxxxxxxxxxx11xxxxxxxxx
                  // ENCODING.VRSHR_T1_Q           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx1xxxxxxxxxxxxx01xxxxxxxxx
                  // ENCODING.VSHR_T1_Q            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx1xxxxxxxxxxxxx00xxxxxxxxx
                  // ENCODING.VSRI_T1_Q            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xxxxxxxxxxxxx10xxxxxxxxx
                  // imm6:L!=0b000xxx0
                  if ((opcode & 0x00380080) != 0x00000000)
                  {
                    // the following switch contains 4 case.
                    switch (b & 0x06)
                    {
                      case 0x00:
                      {
                        // ENCODING.VSHR_T1_Q
                        return 2056;
                        break;
                      }
                      case 0x02:
                      {
                        // ENCODING.VRSHR_T1_Q
                        return 1992;
                        break;
                      }
                      case 0x04:
                      {
                        // ENCODING.VSRI_T1_Q
                        return 2078;
                        break;
                      }
                      case 0x06:
                      {
                        // ENCODING.VQSHLU_i_T1_Q
                        return 1880;
                        break;
                      }
                      default: break;
                    }
                  }
                  else
                  {
                    if (a & 0x20)
                    {
                      // ENCODING.VMVN_i_T1_Q
                      return 1732;
                    }
                    else
                    {
                      // ENCODING.VMOV_i_T1_Q
                      return 1667;
                    }
                  }
                }
                else
                {
                  // the following switch contains 4 case.
                  switch (b & 0x06)
                  {
                    case 0x00:
                    {
                      // ENCODING.VQADD_T1_Q
                      return 1812;
                      break;
                    }
                    case 0x02:
                    {
                      // ENCODING.VQSUB_T1_Q
                      return 1892;
                      break;
                    }
                    case 0x04:
                    {
                      // ENCODING.VQSHL_r_T1_Q
                      return 1884;
                      break;
                    }
                    case 0x06:
                    {
                      // ENCODING.VMIN_i_T1_Q
                      return 1590;
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
                if (c & 0x80)
                {
                  // conflicts:
                  // ENCODING.VBIC_i_T1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx1xx000xxxxxxxxxxx0x1xxxxx
                  // ENCODING.VORR_i_T1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx1xx000xxxxxxxxxxx0x0xxxxx
                  // ENCODING.VQSHL_i_T1_D         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx1xxxxxxxxxxxxx11xxxxxxxxx
                  // ENCODING.VRSRA_T1_D           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx1xxxxxxxxxxxxx01xxxxxxxxx
                  // ENCODING.VSHL_i_T1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxx1xxxxxxxxxxxxx10xxxxxxxxx
                  // ENCODING.VSLI_T1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xxxxxxxxxxxxx10xxxxxxxxx
                  // ENCODING.VSRA_T1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx1xxxxxxxxxxxxx00xxxxxxxxx
                  // imm6:L!=0b000xxx0
                  if ((opcode & 0x00380080) != 0x00000000)
                  {
                    // the following switch contains 4 case.
                    switch (b & 0x06)
                    {
                      case 0x00:
                      {
                        // ENCODING.VSRA_T1_D
                        return 2073;
                        break;
                      }
                      case 0x02:
                      {
                        // ENCODING.VRSRA_T1_D
                        return 2005;
                        break;
                      }
                      case 0x04:
                      {
                        if (d & 0x10)
                        {
                          // ENCODING.VSLI_T1_D
                          return 2061;
                        }
                        else
                        {
                          // ENCODING.VSHL_i_T1_D
                          return 2043;
                        }
                        break;
                      }
                      case 0x06:
                      {
                        // ENCODING.VQSHL_i_T1_D
                        return 1877;
                        break;
                      }
                      default: break;
                    }
                  }
                  else
                  {
                    if (a & 0x20)
                    {
                      // ENCODING.VBIC_i_T1_D
                      return 1073;
                    }
                    else
                    {
                      // ENCODING.VORR_i_T1_D
                      return 1777;
                    }
                  }
                }
                else
                {
                  // the following switch contains 4 case.
                  switch (b & 0x06)
                  {
                    case 0x00:
                    {
                      if (c & 0x10)
                      {
                        if (c & 0x20)
                        {
                          if (d & 0x10)
                          {
                            // ENCODING.VBIF_T1_D
                            return 1083;
                          }
                          else
                          {
                            // ENCODING.VORN_r_T1_D
                            return 1771;
                          }
                        }
                        else
                        {
                          if (d & 0x10)
                          {
                            // ENCODING.VBSL_T1_D
                            return 1091;
                          }
                          else
                          {
                            // ENCODING.VBIC_r_T1_D
                            return 1079;
                          }
                        }
                      }
                      else
                      {
                        if (c & 0x20)
                        {
                          if (d & 0x10)
                          {
                            // ENCODING.VBIT_T1_D
                            return 1087;
                          }
                          else
                          {
                            // ENCODING.VORR_r_T1_D
                            return 1783;
                          }
                        }
                        else
                        {
                          if (d & 0x10)
                          {
                            // ENCODING.VEOR_T1_D
                            return 1331;
                          }
                          else
                          {
                            // ENCODING.VAND_r_T1_D
                            return 1067;
                          }
                        }
                      }
                      break;
                    }
                    case 0x02:
                    {
                      // ENCODING.VCGE_r_T1_D
                      return 1117;
                      break;
                    }
                    case 0x04:
                    {
                      // ENCODING.VQRSHL_T1_D
                      return 1867;
                      break;
                    }
                    case 0x06:
                    {
                      // ENCODING.VABA_T1_D
                      return 1013;
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
                  // conflicts:
                  // ENCODING.VMOV_i_T1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx1xx000xxxxxxxxxxx0x0xxxxx
                  // ENCODING.VMVN_i_T1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx1xx000xxxxxxxxxxx0x1xxxxx
                  // ENCODING.VQSHLU_i_T1_D        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xxxxxxxxxxxxx11xxxxxxxxx
                  // ENCODING.VRSHR_T1_D           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx1xxxxxxxxxxxxx01xxxxxxxxx
                  // ENCODING.VSHR_T1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxx1xxxxxxxxxxxxx00xxxxxxxxx
                  // ENCODING.VSRI_T1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxx1xxxxxxxxxxxxx10xxxxxxxxx
                  // imm6:L!=0b000xxx0
                  if ((opcode & 0x00380080) != 0x00000000)
                  {
                    // the following switch contains 4 case.
                    switch (b & 0x06)
                    {
                      case 0x00:
                      {
                        // ENCODING.VSHR_T1_D
                        return 2055;
                        break;
                      }
                      case 0x02:
                      {
                        // ENCODING.VRSHR_T1_D
                        return 1991;
                        break;
                      }
                      case 0x04:
                      {
                        // ENCODING.VSRI_T1_D
                        return 2077;
                        break;
                      }
                      case 0x06:
                      {
                        // ENCODING.VQSHLU_i_T1_D
                        return 1879;
                        break;
                      }
                      default: break;
                    }
                  }
                  else
                  {
                    if (a & 0x20)
                    {
                      // ENCODING.VMVN_i_T1_D
                      return 1731;
                    }
                    else
                    {
                      // ENCODING.VMOV_i_T1_D
                      return 1666;
                    }
                  }
                }
                else
                {
                  // the following switch contains 4 case.
                  switch (b & 0x06)
                  {
                    case 0x00:
                    {
                      // ENCODING.VQADD_T1_D
                      return 1811;
                      break;
                    }
                    case 0x02:
                    {
                      // ENCODING.VQSUB_T1_D
                      return 1891;
                      break;
                    }
                    case 0x04:
                    {
                      // ENCODING.VQSHL_r_T1_D
                      return 1883;
                      break;
                    }
                    case 0x06:
                    {
                      // ENCODING.VMIN_i_T1_D
                      return 1589;
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
          if (c & 0x80)
          {
            if (d & 0x01)
            {
              // conflicts:
              // ENCODING.AESD_T1              : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx00xxxx001101xxxxxx
              // ENCODING.AESE_T1              : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx00xxxx001100xxxxxx
              // ENCODING.AESIMC_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx00xxxx001111xxxxxx
              // ENCODING.AESMC_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx00xxxx001110xxxxxx
              // ENCODING.SHA1H_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx01xxxx001011xxxxxx
              // ENCODING.SHA1SU1_T1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx10xxxx001110xxxxxx
              // ENCODING.SHA256SU0_T1         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx10xxxx001111xxxxxx
              // ENCODING.VABAL_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxx0101x0xxxxxx
              // ENCODING.VABDL_i_T1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxx0111x0xxxxxx
              // ENCODING.VABS_T1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx01xxxx0x1100xxxxxx
              // ENCODING.VABS_T1_Q            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx01xxxx0x1101xxxxxx
              // ENCODING.VADDHN_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxxxxxxxxxxxxxxx0100x0xxxxxx
              // ENCODING.VADDL_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxx0000x0xxxxxx
              // ENCODING.VADDW_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxx0001x0xxxxxx
              // ENCODING.VCEQ_i_T1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx01xxxx0x0100xxxxxx
              // ENCODING.VCEQ_i_T1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx01xxxx0x0101xxxxxx
              // ENCODING.VCGE_i_T1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx01xxxx0x0010xxxxxx
              // ENCODING.VCGE_i_T1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx01xxxx0x0011xxxxxx
              // ENCODING.VCGT_i_T1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx01xxxx0x0000xxxxxx
              // ENCODING.VCGT_i_T1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx01xxxx0x0001xxxxxx
              // ENCODING.VCLE_i_T1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx01xxxx0x0110xxxxxx
              // ENCODING.VCLE_i_T1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx01xxxx0x0111xxxxxx
              // ENCODING.VCLS_T1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx00xxxx010000xxxxxx
              // ENCODING.VCLS_T1_Q            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx00xxxx010001xxxxxx
              // ENCODING.VCLT_i_T1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx01xxxx0x1000xxxxxx
              // ENCODING.VCLT_i_T1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx01xxxx0x1001xxxxxx
              // ENCODING.VCLZ_T1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx00xxxx010010xxxxxx
              // ENCODING.VCLZ_T1_Q            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx00xxxx010011xxxxxx
              // ENCODING.VCNT_T1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx00xxxx010100xxxxxx
              // ENCODING.VCNT_T1_Q            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx00xxxx010101xxxxxx
              // ENCODING.VCVT_bfs_T1          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx110110xxxx011001xxxxxx
              // ENCODING.VCVT_sh_T1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx10xxxx011100xxxxxx
              // ENCODING.VCVT_hs_T1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx10xxxx011000xxxxxx
              // ENCODING.VCVT_is_T1_D         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx11xxxx011xx0xxxxxx
              // ENCODING.VCVT_is_T1_Q         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx11xxxx011xx1xxxxxx
              // ENCODING.VCVTA_asimd_T1_D     : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx11xxxx0000x0xxxxxx
              // ENCODING.VCVTA_asimd_T1_Q     : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx11xxxx0000x1xxxxxx
              // ENCODING.VCVTM_asimd_T1_D     : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx11xxxx0011x0xxxxxx
              // ENCODING.VCVTM_asimd_T1_Q     : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx11xxxx0011x1xxxxxx
              // ENCODING.VCVTN_asimd_T1_D     : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx11xxxx0001x0xxxxxx
              // ENCODING.VCVTN_asimd_T1_Q     : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx11xxxx0001x1xxxxxx
              // ENCODING.VCVTP_asimd_T1_D     : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx11xxxx0010x0xxxxxx
              // ENCODING.VCVTP_asimd_T1_Q     : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx11xxxx0010x1xxxxxx
              // ENCODING.VDUP_s_T1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xxxxxxxx110000xxxxxx
              // ENCODING.VDUP_s_T1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xxxxxxxx110001xxxxxx
              // ENCODING.VEXT_T1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxxxxx11xxxxxxxxxxxxx0xxxxxx
              // ENCODING.VEXT_T1_Q            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxxxxx11xxxxxxxxxxxxx1xxxxxx
              // ENCODING.VMLA_s_T1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxxxxxxxxxxxxxxx000xx1xxxxxx
              // ENCODING.VMLA_s_T1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx000xx1xxxxxx
              // ENCODING.VMLAL_i_T1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxx1000x0xxxxxx
              // ENCODING.VMLAL_s_T1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxx0010x1xxxxxx
              // ENCODING.VMLS_s_T1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxxxxxxxxxxxxxxx010xx1xxxxxx
              // ENCODING.VMLS_s_T1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx010xx1xxxxxx
              // ENCODING.VMLSL_i_T1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxx1010x0xxxxxx
              // ENCODING.VMLSL_s_T1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxx0110x1xxxxxx
              // ENCODING.VMOVN_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx10xxxx001000xxxxxx
              // ENCODING.VMUL_s_T1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxxxxxxxxxxxxxxx100xx1xxxxxx
              // ENCODING.VMUL_s_T1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx100xx1xxxxxx
              // ENCODING.VMULL_i_T1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxx11x0x0xxxxxx
              // ENCODING.VMULL_s_T1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxx1010x1xxxxxx
              // ENCODING.VMVN_r_T1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx00xxxx010110xxxxxx
              // ENCODING.VMVN_r_T1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx00xxxx010111xxxxxx
              // ENCODING.VNEG_T1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx01xxxx0x1110xxxxxx
              // ENCODING.VNEG_T1_Q            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx01xxxx0x1111xxxxxx
              // ENCODING.VPADAL_T1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx00xxxx0110x0xxxxxx
              // ENCODING.VPADAL_T1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx00xxxx0110x1xxxxxx
              // ENCODING.VPADDL_T1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx00xxxx0010x0xxxxxx
              // ENCODING.VPADDL_T1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx00xxxx0010x1xxxxxx
              // ENCODING.VQABS_T1_D           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx00xxxx011100xxxxxx
              // ENCODING.VQABS_T1_Q           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx00xxxx011101xxxxxx
              // ENCODING.VQDMLAL_T1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxxxxxxxxxxxxxxx1001x0xxxxxx
              // ENCODING.VQDMLAL_T2           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxxxxxxxxxxxxxxx0011x1xxxxxx
              // ENCODING.VQDMLSL_T1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxxxxxxxxxxxxxxx1011x0xxxxxx
              // ENCODING.VQDMLSL_T2           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxxxxxxxxxxxxxxx0111x1xxxxxx
              // ENCODING.VQDMULH_T2_D         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxxxxxxxxxxxxxxx1100x1xxxxxx
              // ENCODING.VQDMULH_T2_Q         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx1100x1xxxxxx
              // ENCODING.VQDMULL_T1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxxxxxxxxxxxxxxx1101x0xxxxxx
              // ENCODING.VQDMULL_T2           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxxxxxxxxxxxxxxx1011x1xxxxxx
              // ENCODING.VQMOVN_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx10xxxx00101xxxxxxx
              // ENCODING.VQMOVUN_T1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx10xxxx001001xxxxxx
              // ENCODING.VQNEG_T1_D           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx00xxxx011110xxxxxx
              // ENCODING.VQNEG_T1_Q           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx00xxxx011111xxxxxx
              // ENCODING.VQRDMLAH_T2_D        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxxxxxxxxxxxxxxx1110x1xxxxxx
              // ENCODING.VQRDMLAH_T2_Q        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx1110x1xxxxxx
              // ENCODING.VQRDMLSH_T2_D        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxxxxxxxxxxxxxxx1111x1xxxxxx
              // ENCODING.VQRDMLSH_T2_Q        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx1111x1xxxxxx
              // ENCODING.VQRDMULH_T2_D        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxxxxxxxxxxxxxxx1101x1xxxxxx
              // ENCODING.VQRDMULH_T2_Q        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx1101x1xxxxxx
              // ENCODING.VRADDHN_T1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0100x0xxxxxx
              // ENCODING.VRECPE_T1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx11xxxx010x00xxxxxx
              // ENCODING.VRECPE_T1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx11xxxx010x01xxxxxx
              // ENCODING.VREV16_T1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx00xxxx000100xxxxxx
              // ENCODING.VREV16_T1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx00xxxx000101xxxxxx
              // ENCODING.VREV32_T1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx00xxxx000010xxxxxx
              // ENCODING.VREV32_T1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx00xxxx000011xxxxxx
              // ENCODING.VREV64_T1_D          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx00xxxx000000xxxxxx
              // ENCODING.VREV64_T1_Q          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx00xxxx000001xxxxxx
              // ENCODING.VRINTA_asimd_T1_D    : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx10xxxx010100xxxxxx
              // ENCODING.VRINTA_asimd_T1_Q    : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx10xxxx010101xxxxxx
              // ENCODING.VRINTM_asimd_T1_D    : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx10xxxx011010xxxxxx
              // ENCODING.VRINTM_asimd_T1_Q    : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx10xxxx011011xxxxxx
              // ENCODING.VRINTN_asimd_T1_D    : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx10xxxx010000xxxxxx
              // ENCODING.VRINTN_asimd_T1_Q    : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx10xxxx010001xxxxxx
              // ENCODING.VRINTP_asimd_T1_D    : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx10xxxx011110xxxxxx
              // ENCODING.VRINTP_asimd_T1_Q    : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx10xxxx011111xxxxxx
              // ENCODING.VRINTX_asimd_T1_D    : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx10xxxx010010xxxxxx
              // ENCODING.VRINTX_asimd_T1_Q    : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx10xxxx010011xxxxxx
              // ENCODING.VRINTZ_asimd_T1_D    : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx10xxxx010110xxxxxx
              // ENCODING.VRINTZ_asimd_T1_Q    : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx10xxxx010111xxxxxx
              // ENCODING.VRSQRTE_T1_D         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx11xxxx010x10xxxxxx
              // ENCODING.VRSQRTE_T1_Q         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx11xxxx010x11xxxxxx
              // ENCODING.VRSUBHN_T1           : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxx0110x0xxxxxx
              // ENCODING.VSHLL_T2             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx10xxxx001100xxxxxx
              // ENCODING.VSUBHN_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxxxxxxxxxxxxxxx0110x0xxxxxx
              // ENCODING.VSUBL_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxx0010x0xxxxxx
              // ENCODING.VSUBW_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx111xxxxxxxxxxxxxxxxx0011x0xxxxxx
              // ENCODING.VSWP_T1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx110010xxxx000000xxxxxx
              // ENCODING.VSWP_T1_Q            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx110010xxxx000001xxxxxx
              // ENCODING.VTBL_T1              : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xxxxxxxx10xxx0xxxxxx
              // ENCODING.VTBX_T1              : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xxxxxxxx10xxx1xxxxxx
              // ENCODING.VTRN_T1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx10xxxx000010xxxxxx
              // ENCODING.VTRN_T1_Q            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx10xxxx000011xxxxxx
              // ENCODING.VUZP_T1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx10xxxx000100xxxxxx
              // ENCODING.VUZP_T1_Q            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx10xxxx000101xxxxxx
              // ENCODING.VZIP_T1_D            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx10xxxx000110xxxxxx
              // ENCODING.VZIP_T1_Q            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxx11xx10xxxx000111xxxxxx
              // size!=0b11
              if ((opcode & 0x00300000) != 0x00300000)
              {
                if (a & 0x40)
                {
                  // the following switch contains 8 case.
                  switch (b & 0x0e)
                  {
                    case 0x00:
                    {
                      if (d & 0x10)
                      {
                        // ENCODING.VMLA_s_T1_Q
                        return 1618;
                      }
                      else
                      {
                        // ENCODING.VMLA_s_T1_D
                        return 1617;
                      }
                      break;
                    }
                    case 0x02:
                    {
                      if (b & 0x01)
                      {
                        // ENCODING.VQDMLAL_T2
                        return 1816;
                      }
                      else
                      {
                        // ENCODING.VMLAL_s_T1
                        return 1622;
                      }
                      break;
                    }
                    case 0x04:
                    {
                      if (d & 0x10)
                      {
                        // ENCODING.VMLS_s_T1_Q
                        return 1640;
                      }
                      else
                      {
                        // ENCODING.VMLS_s_T1_D
                        return 1639;
                      }
                      break;
                    }
                    case 0x06:
                    {
                      if (b & 0x01)
                      {
                        // ENCODING.VQDMLSL_T2
                        return 1820;
                      }
                      else
                      {
                        // ENCODING.VMLSL_s_T1
                        return 1644;
                      }
                      break;
                    }
                    case 0x08:
                    {
                      if (d & 0x10)
                      {
                        // ENCODING.VMUL_s_T1_Q
                        return 1720;
                      }
                      else
                      {
                        // ENCODING.VMUL_s_T1_D
                        return 1719;
                      }
                      break;
                    }
                    case 0x0a:
                    {
                      if (b & 0x01)
                      {
                        // ENCODING.VQDMULL_T2
                        return 1832;
                      }
                      else
                      {
                        // ENCODING.VMULL_s_T1
                        return 1724;
                      }
                      break;
                    }
                    case 0x0c:
                    {
                      if (b & 0x01)
                      {
                        if (d & 0x10)
                        {
                          // ENCODING.VQRDMULH_T2_Q
                          return 1864;
                        }
                        else
                        {
                          // ENCODING.VQRDMULH_T2_D
                          return 1863;
                        }
                      }
                      else
                      {
                        if (d & 0x10)
                        {
                          // ENCODING.VQDMULH_T2_Q
                          return 1828;
                        }
                        else
                        {
                          // ENCODING.VQDMULH_T2_D
                          return 1827;
                        }
                      }
                      break;
                    }
                    case 0x0e:
                    {
                      if (b & 0x01)
                      {
                        if (d & 0x10)
                        {
                          // ENCODING.VQRDMLSH_T2_Q
                          return 1856;
                        }
                        else
                        {
                          // ENCODING.VQRDMLSH_T2_D
                          return 1855;
                        }
                      }
                      else
                      {
                        if (d & 0x10)
                        {
                          // ENCODING.VQRDMLAH_T2_Q
                          return 1848;
                        }
                        else
                        {
                          // ENCODING.VQRDMLAH_T2_D
                          return 1847;
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
                        // ENCODING.VSUBL_T1
                        return 2229;
                      }
                      else
                      {
                        // ENCODING.VADDL_T1
                        return 1062;
                      }
                      break;
                    }
                    case 0x01:
                    {
                      if (b & 0x02)
                      {
                        // ENCODING.VSUBW_T1
                        return 2231;
                      }
                      else
                      {
                        // ENCODING.VADDW_T1
                        return 1064;
                      }
                      break;
                    }
                    case 0x04:
                    {
                      if (b & 0x02)
                      {
                        if (d & 0x10)
                        {
                          // ENCODING.VRSUBHN_T1
                          return 2008;
                        }
                        else
                        {
                          // ENCODING.VSUBHN_T1
                          return 2227;
                        }
                      }
                      else
                      {
                        if (d & 0x10)
                        {
                          // ENCODING.VRADDHN_T1
                          return 1894;
                        }
                        else
                        {
                          // ENCODING.VADDHN_T1
                          return 1060;
                        }
                      }
                      break;
                    }
                    case 0x05:
                    {
                      if (b & 0x02)
                      {
                        // ENCODING.VABDL_i_T1
                        return 1026;
                      }
                      else
                      {
                        // ENCODING.VABAL_T1
                        return 1016;
                      }
                      break;
                    }
                    case 0x08:
                    {
                      if (b & 0x02)
                      {
                        // ENCODING.VMLSL_i_T1
                        return 1642;
                      }
                      else
                      {
                        // ENCODING.VMLAL_i_T1
                        return 1620;
                      }
                      break;
                    }
                    case 0x09:
                    {
                      if (b & 0x02)
                      {
                        // ENCODING.VQDMLSL_T1
                        return 1819;
                      }
                      else
                      {
                        // ENCODING.VQDMLAL_T1
                        return 1815;
                      }
                      break;
                    }
                    case 0x0c:
                    {
                      // ENCODING.VMULL_i_T1
                      return 1722;
                      break;
                    }
                    case 0x0d:
                    {
                      // ENCODING.VQDMULL_T1
                      return 1831;
                      break;
                    }
                    default: break;
                  }
                }
              }
              else
              {
                if (d & 0x10)
                {
                  if (b & 0x08)
                  {
                    if (a & 0x40)
                    {
                      if (b & 0x04)
                      {
                        // ENCODING.VDUP_s_T1_Q
                        return 1328;
                      }
                      else
                      {
                        // ENCODING.VTBX_T1
                        return 2243;
                      }
                    }
                    else
                    {
                      if (b & 0x04)
                      {
                        // ENCODING.VDUP_s_T1_D
                        return 1327;
                      }
                      else
                      {
                        // ENCODING.VTBL_T1
                        return 2242;
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
                                // ENCODING.VPADDL_T1_Q
                                return 1796;
                                break;
                              }
                              case 0x01:
                              {
                                if (a & 0x80)
                                {
                                  // ENCODING.AESIMC_T1
                                  return 979;
                                }
                                else
                                {
                                  // ENCODING.AESD_T1
                                  return 975;
                                }
                                break;
                              }
                              case 0x04:
                              {
                                // ENCODING.VPADAL_T1_Q
                                return 1788;
                                break;
                              }
                              case 0x05:
                              {
                                if (a & 0x80)
                                {
                                  // ENCODING.VQNEG_T1_Q
                                  return 1840;
                                }
                                else
                                {
                                  // ENCODING.VQABS_T1_Q
                                  return 1808;
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
                                // ENCODING.VPADDL_T1_D
                                return 1795;
                                break;
                              }
                              case 0x01:
                              {
                                if (a & 0x80)
                                {
                                  // ENCODING.AESMC_T1
                                  return 981;
                                }
                                else
                                {
                                  // ENCODING.AESE_T1
                                  return 977;
                                }
                                break;
                              }
                              case 0x04:
                              {
                                // ENCODING.VPADAL_T1_D
                                return 1787;
                                break;
                              }
                              case 0x05:
                              {
                                if (a & 0x80)
                                {
                                  // ENCODING.VQNEG_T1_D
                                  return 1839;
                                }
                                else
                                {
                                  // ENCODING.VQABS_T1_D
                                  return 1807;
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
                                // ENCODING.VNEG_T1_Q
                                return 1747;
                              }
                              else
                              {
                                // ENCODING.SHA1H_T1
                                return 993;
                              }
                            }
                            else
                            {
                              if (b & 0x01)
                              {
                                // ENCODING.VABS_T1_Q
                                return 1033;
                              }
                              else
                              {
                                // ENCODING.VCLT_i_T1_Q
                                return 1144;
                              }
                            }
                          }
                          else
                          {
                            if (a & 0x80)
                            {
                              // ENCODING.VNEG_T1_D
                              return 1746;
                            }
                            else
                            {
                              if (b & 0x01)
                              {
                                // ENCODING.VABS_T1_D
                                return 1032;
                              }
                              else
                              {
                                // ENCODING.VCLT_i_T1_D
                                return 1143;
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
                                // ENCODING.VQMOVN_T1
                                return 1835;
                                break;
                              }
                              case 0x01:
                              {
                                if (a & 0x40)
                                {
                                  // ENCODING.SHA256SU0_T1
                                  return 1007;
                                }
                                else
                                {
                                  // ENCODING.SHA1SU1_T1
                                  return 1001;
                                }
                                break;
                              }
                              case 0x04:
                              {
                                if (a & 0x40)
                                {
                                  // ENCODING.VRINTM_asimd_T1_Q
                                  return 1932;
                                }
                                else
                                {
                                  // ENCODING.VRINTM_asimd_T1_D
                                  return 1931;
                                }
                                break;
                              }
                              case 0x05:
                              {
                                if (a & 0x40)
                                {
                                  // ENCODING.VRINTP_asimd_T1_Q
                                  return 1952;
                                }
                                else
                                {
                                  // ENCODING.VRINTP_asimd_T1_D
                                  return 1951;
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
                                // ENCODING.VCVT_bfs_T1
                                return 1190;
                              }
                              else
                              {
                                // ENCODING.VQMOVUN_T1
                                return 1836;
                              }
                            }
                            else
                            {
                              // the following switch contains 4 case.
                              switch (b & 0x05)
                              {
                                case 0x00:
                                {
                                  // ENCODING.VMOVN_T1
                                  return 1696;
                                  break;
                                }
                                case 0x01:
                                {
                                  // ENCODING.VSHLL_T2
                                  return 2052;
                                  break;
                                }
                                case 0x04:
                                {
                                  // ENCODING.VCVT_hs_T1
                                  return 1198;
                                  break;
                                }
                                case 0x05:
                                {
                                  // ENCODING.VCVT_sh_T1
                                  return 1197;
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
                              // ENCODING.VCVT_is_T1_Q
                              return 1202;
                            }
                            else
                            {
                              if (b & 0x01)
                              {
                                // ENCODING.VCVTM_asimd_T1_Q
                                return 1260;
                              }
                              else
                              {
                                // ENCODING.VCVTP_asimd_T1_Q
                                return 1280;
                              }
                            }
                          }
                          else
                          {
                            if (b & 0x04)
                            {
                              // ENCODING.VCVT_is_T1_D
                              return 1201;
                            }
                            else
                            {
                              if (b & 0x01)
                              {
                                // ENCODING.VCVTM_asimd_T1_D
                                return 1259;
                              }
                              else
                              {
                                // ENCODING.VCVTP_asimd_T1_D
                                return 1279;
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
                                  // ENCODING.VREV32_T1_Q
                                  return 1910;
                                  break;
                                }
                                case 0x04:
                                {
                                  // ENCODING.VCLZ_T1_Q
                                  return 1148;
                                  break;
                                }
                                case 0x05:
                                {
                                  // ENCODING.VMVN_r_T1_Q
                                  return 1740;
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
                                  // ENCODING.VREV64_T1_Q
                                  return 1914;
                                  break;
                                }
                                case 0x01:
                                {
                                  // ENCODING.VREV16_T1_Q
                                  return 1906;
                                  break;
                                }
                                case 0x04:
                                {
                                  // ENCODING.VCLS_T1_Q
                                  return 1140;
                                  break;
                                }
                                case 0x05:
                                {
                                  // ENCODING.VCNT_T1_Q
                                  return 1188;
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
                                // ENCODING.VCLE_i_T1_Q
                                return 1136;
                              }
                              else
                              {
                                // ENCODING.VCGE_i_T1_Q
                                return 1112;
                              }
                            }
                            else
                            {
                              if (b & 0x01)
                              {
                                // ENCODING.VCEQ_i_T1_Q
                                return 1100;
                              }
                              else
                              {
                                // ENCODING.VCGT_i_T1_Q
                                return 1124;
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
                                  // ENCODING.VTRN_T1_Q
                                  return 2247;
                                  break;
                                }
                                case 0x01:
                                {
                                  // ENCODING.VZIP_T1_Q
                                  return 2279;
                                  break;
                                }
                                case 0x04:
                                {
                                  // ENCODING.VRINTX_asimd_T1_Q
                                  return 1968;
                                  break;
                                }
                                case 0x05:
                                {
                                  // ENCODING.VRINTZ_asimd_T1_Q
                                  return 1978;
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
                                  // ENCODING.VSWP_T1_Q
                                  return 2239;
                                  break;
                                }
                                case 0x01:
                                {
                                  // ENCODING.VUZP_T1_Q
                                  return 2275;
                                  break;
                                }
                                case 0x04:
                                {
                                  // ENCODING.VRINTN_asimd_T1_Q
                                  return 1942;
                                  break;
                                }
                                case 0x05:
                                {
                                  // ENCODING.VRINTA_asimd_T1_Q
                                  return 1922;
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
                                // ENCODING.VRSQRTE_T1_Q
                                return 1998;
                              }
                              else
                              {
                                // ENCODING.VRECPE_T1_Q
                                return 1898;
                              }
                            }
                            else
                            {
                              if (b & 0x01)
                              {
                                // ENCODING.VCVTN_asimd_T1_Q
                                return 1270;
                              }
                              else
                              {
                                // ENCODING.VCVTA_asimd_T1_Q
                                return 1240;
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
                                  // ENCODING.VREV32_T1_D
                                  return 1909;
                                  break;
                                }
                                case 0x04:
                                {
                                  // ENCODING.VCLZ_T1_D
                                  return 1147;
                                  break;
                                }
                                case 0x05:
                                {
                                  // ENCODING.VMVN_r_T1_D
                                  return 1739;
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
                                  // ENCODING.VREV64_T1_D
                                  return 1913;
                                  break;
                                }
                                case 0x01:
                                {
                                  // ENCODING.VREV16_T1_D
                                  return 1905;
                                  break;
                                }
                                case 0x04:
                                {
                                  // ENCODING.VCLS_T1_D
                                  return 1139;
                                  break;
                                }
                                case 0x05:
                                {
                                  // ENCODING.VCNT_T1_D
                                  return 1187;
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
                                // ENCODING.VCLE_i_T1_D
                                return 1135;
                              }
                              else
                              {
                                // ENCODING.VCGE_i_T1_D
                                return 1111;
                              }
                            }
                            else
                            {
                              if (b & 0x01)
                              {
                                // ENCODING.VCEQ_i_T1_D
                                return 1099;
                              }
                              else
                              {
                                // ENCODING.VCGT_i_T1_D
                                return 1123;
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
                                  // ENCODING.VTRN_T1_D
                                  return 2246;
                                  break;
                                }
                                case 0x01:
                                {
                                  // ENCODING.VZIP_T1_D
                                  return 2278;
                                  break;
                                }
                                case 0x04:
                                {
                                  // ENCODING.VRINTX_asimd_T1_D
                                  return 1967;
                                  break;
                                }
                                case 0x05:
                                {
                                  // ENCODING.VRINTZ_asimd_T1_D
                                  return 1977;
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
                                  // ENCODING.VSWP_T1_D
                                  return 2238;
                                  break;
                                }
                                case 0x01:
                                {
                                  // ENCODING.VUZP_T1_D
                                  return 2274;
                                  break;
                                }
                                case 0x04:
                                {
                                  // ENCODING.VRINTN_asimd_T1_D
                                  return 1941;
                                  break;
                                }
                                case 0x05:
                                {
                                  // ENCODING.VRINTA_asimd_T1_D
                                  return 1921;
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
                                // ENCODING.VRSQRTE_T1_D
                                return 1997;
                              }
                              else
                              {
                                // ENCODING.VRECPE_T1_D
                                return 1897;
                              }
                            }
                            else
                            {
                              if (b & 0x01)
                              {
                                // ENCODING.VCVTN_asimd_T1_D
                                return 1269;
                              }
                              else
                              {
                                // ENCODING.VCVTA_asimd_T1_D
                                return 1239;
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
                    // ENCODING.VEXT_T1_Q
                    return 1336;
                  }
                  else
                  {
                    // ENCODING.VEXT_T1_D
                    return 1335;
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
                    if (c & 0x10)
                    {
                      if (c & 0x20)
                      {
                        if (c & 0x02)
                        {
                          if (c & 0x04)
                          {
                            if (c & 0x08)
                            {
                              if (d & 0x10)
                              {
                                if (c & 0x01)
                                {
                                  // ENCODING.VCVTM_vfp_T1_D
                                  return 1266;
                                }
                                else
                                {
                                  // ENCODING.VCVTP_vfp_T1_D
                                  return 1286;
                                }
                              }
                              else
                              {
                                // ENCODING.VCVT_xv_T1_D
                                return 1236;
                              }
                            }
                            else
                            {
                              if (a & 0x80)
                              {
                                if (c & 0x01)
                                {
                                  // ENCODING.VCVT_sd_T1
                                  return 1194;
                                }
                                else
                                {
                                  // ENCODING.VRINTZ_vfp_T1_D
                                  return 1984;
                                }
                              }
                              else
                              {
                                if (c & 0x01)
                                {
                                  // ENCODING.VRINTX_vfp_T1_D
                                  return 1974;
                                }
                                else
                                {
                                  // ENCODING.VRINTR_vfp_T1_D
                                  return 1964;
                                }
                              }
                            }
                          }
                          else
                          {
                            if (c & 0x08)
                            {
                              if (d & 0x10)
                              {
                                if (c & 0x01)
                                {
                                  // ENCODING.VRINTM_vfp_T1_D
                                  return 1938;
                                }
                                else
                                {
                                  // ENCODING.VRINTP_vfp_T1_D
                                  return 1958;
                                }
                              }
                              else
                              {
                                // ENCODING.VCVT_toxv_T1_D
                                return 1235;
                              }
                            }
                            else
                            {
                              if (a & 0x80)
                              {
                                if (c & 0x01)
                                {
                                  // ENCODING.VCVTT_T1_HD
                                  return 1306;
                                }
                                else
                                {
                                  // ENCODING.VCVTT_T1_DH
                                  return 1304;
                                }
                              }
                              else
                              {
                                if (c & 0x01)
                                {
                                  // ENCODING.VCVTB_T1_HD
                                  return 1254;
                                }
                                else
                                {
                                  // ENCODING.VCVTB_T1_DH
                                  return 1252;
                                }
                              }
                            }
                          }
                        }
                        else
                        {
                          if (c & 0x01)
                          {
                            if (c & 0x04)
                            {
                              if (c & 0x08)
                              {
                                if (d & 0x10)
                                {
                                  // ENCODING.VCVTN_vfp_T1_D
                                  return 1276;
                                }
                                else
                                {
                                  if (a & 0x80)
                                  {
                                    // ENCODING.VCVT_siv_T1_D
                                    return 1214;
                                  }
                                  else
                                  {
                                    // ENCODING.VCVTR_siv_T1_D
                                    return 1298;
                                  }
                                }
                              }
                              else
                              {
                                if (a & 0x80)
                                {
                                  // ENCODING.VCMPE_T2_D
                                  return 1184;
                                }
                                else
                                {
                                  // ENCODING.VCMP_T2_D
                                  return 1172;
                                }
                              }
                            }
                            else
                            {
                              if (a & 0x80)
                              {
                                if (c & 0x08)
                                {
                                  // ENCODING.VJCVT_T1
                                  return 1400;
                                }
                                else
                                {
                                  // ENCODING.VSQRT_T1_D
                                  return 2070;
                                }
                              }
                              else
                              {
                                if (c & 0x08)
                                {
                                  // ENCODING.VRINTN_vfp_T1_D
                                  return 1948;
                                }
                                else
                                {
                                  // ENCODING.VNEG_T2_D
                                  return 1750;
                                }
                              }
                            }
                          }
                          else
                          {
                            if (c & 0x04)
                            {
                              if (c & 0x08)
                              {
                                if (d & 0x10)
                                {
                                  // ENCODING.VCVTA_vfp_T1_D
                                  return 1246;
                                }
                                else
                                {
                                  if (a & 0x80)
                                  {
                                    // ENCODING.VCVT_uiv_T1_D
                                    return 1213;
                                  }
                                  else
                                  {
                                    // ENCODING.VCVTR_uiv_T1_D
                                    return 1297;
                                  }
                                }
                              }
                              else
                              {
                                if (a & 0x80)
                                {
                                  // ENCODING.VCMPE_T1_D
                                  return 1181;
                                }
                                else
                                {
                                  // ENCODING.VCMP_T1_D
                                  return 1169;
                                }
                              }
                            }
                            else
                            {
                              if (c & 0x08)
                              {
                                if (d & 0x10)
                                {
                                  // ENCODING.VRINTA_vfp_T1_D
                                  return 1928;
                                }
                                else
                                {
                                  // ENCODING.VCVT_vi_T1_D
                                  return 1220;
                                }
                              }
                              else
                              {
                                if (a & 0x80)
                                {
                                  // ENCODING.VABS_T2_D
                                  return 1036;
                                }
                                else
                                {
                                  // ENCODING.VMOV_r_T2_D
                                  return 1680;
                                }
                              }
                            }
                          }
                        }
                      }
                      else
                      {
                        // ENCODING.VFNMA_T1_D
                        return 1382;
                      }
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.VFMS_T2_D
                        return 1368;
                      }
                      else
                      {
                        // ENCODING.VMINNM_T2_D
                        return 1600;
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x04)
                    {
                      // ENCODING.VUSDOT_s_T1_Q
                      return 2269;
                    }
                    else
                    {
                      if (c & 0x10)
                      {
                        if (c & 0x20)
                        {
                          if (c & 0x02)
                          {
                            if (c & 0x04)
                            {
                              if (c & 0x08)
                              {
                                if (d & 0x10)
                                {
                                  if (c & 0x01)
                                  {
                                    // ENCODING.VCVTM_vfp_T1_H
                                    return 1264;
                                  }
                                  else
                                  {
                                    // ENCODING.VCVTP_vfp_T1_H
                                    return 1284;
                                  }
                                }
                                else
                                {
                                  // ENCODING.VCVT_xv_T1_H
                                  return 1232;
                                }
                              }
                              else
                              {
                                if (a & 0x80)
                                {
                                  // ENCODING.VRINTZ_vfp_T1_H
                                  return 1982;
                                }
                                else
                                {
                                  if (c & 0x01)
                                  {
                                    // ENCODING.VRINTX_vfp_T1_H
                                    return 1972;
                                  }
                                  else
                                  {
                                    // ENCODING.VRINTR_vfp_T1_H
                                    return 1962;
                                  }
                                }
                              }
                            }
                            else
                            {
                              if (c & 0x08)
                              {
                                if (d & 0x10)
                                {
                                  if (c & 0x01)
                                  {
                                    // ENCODING.VRINTM_vfp_T1_H
                                    return 1936;
                                  }
                                  else
                                  {
                                    // ENCODING.VRINTP_vfp_T1_H
                                    return 1956;
                                  }
                                }
                                else
                                {
                                  // ENCODING.VCVT_toxv_T1_H
                                  return 1231;
                                }
                              }
                              else
                              {
                                if (a & 0x80)
                                {
                                  // ENCODING.VCVTT_T1_bfs
                                  return 1308;
                                }
                                else
                                {
                                  // ENCODING.VCVTB_T1_bfs
                                  return 1256;
                                }
                              }
                            }
                          }
                          else
                          {
                            if (c & 0x01)
                            {
                              if (c & 0x04)
                              {
                                if (c & 0x08)
                                {
                                  if (d & 0x10)
                                  {
                                    // ENCODING.VCVTN_vfp_T1_H
                                    return 1274;
                                  }
                                  else
                                  {
                                    if (a & 0x80)
                                    {
                                      // ENCODING.VCVT_siv_T1_H
                                      return 1210;
                                    }
                                    else
                                    {
                                      // ENCODING.VCVTR_siv_T1_H
                                      return 1294;
                                    }
                                  }
                                }
                                else
                                {
                                  if (a & 0x80)
                                  {
                                    // ENCODING.VCMPE_T2_H
                                    return 1182;
                                  }
                                  else
                                  {
                                    // ENCODING.VCMP_T2_H
                                    return 1170;
                                  }
                                }
                              }
                              else
                              {
                                if (a & 0x80)
                                {
                                  // ENCODING.VSQRT_T1_H
                                  return 2068;
                                }
                                else
                                {
                                  if (c & 0x08)
                                  {
                                    // ENCODING.VRINTN_vfp_T1_H
                                    return 1946;
                                  }
                                  else
                                  {
                                    // ENCODING.VNEG_T2_H
                                    return 1748;
                                  }
                                }
                              }
                            }
                            else
                            {
                              if (c & 0x04)
                              {
                                if (c & 0x08)
                                {
                                  if (d & 0x10)
                                  {
                                    // ENCODING.VCVTA_vfp_T1_H
                                    return 1244;
                                  }
                                  else
                                  {
                                    if (a & 0x80)
                                    {
                                      // ENCODING.VCVT_uiv_T1_H
                                      return 1209;
                                    }
                                    else
                                    {
                                      // ENCODING.VCVTR_uiv_T1_H
                                      return 1293;
                                    }
                                  }
                                }
                                else
                                {
                                  if (a & 0x80)
                                  {
                                    // ENCODING.VCMPE_T1_H
                                    return 1179;
                                  }
                                  else
                                  {
                                    // ENCODING.VCMP_T1_H
                                    return 1167;
                                  }
                                }
                              }
                              else
                              {
                                if (c & 0x08)
                                {
                                  if (d & 0x10)
                                  {
                                    // ENCODING.VRINTA_vfp_T1_H
                                    return 1926;
                                  }
                                  else
                                  {
                                    // ENCODING.VCVT_vi_T1_H
                                    return 1218;
                                  }
                                }
                                else
                                {
                                  // ENCODING.VABS_T2_H
                                  return 1034;
                                }
                              }
                            }
                          }
                        }
                        else
                        {
                          // ENCODING.VFNMA_T1_H
                          return 1380;
                        }
                      }
                      else
                      {
                        if (c & 0x20)
                        {
                          // ENCODING.VFMS_T2_H
                          return 1366;
                        }
                        else
                        {
                          // ENCODING.VMINNM_T2_H
                          return 1598;
                        }
                      }
                    }
                  }
                }
                else
                {
                  if (b & 0x02)
                  {
                    if (c & 0x10)
                    {
                      if (c & 0x20)
                      {
                        if (c & 0x02)
                        {
                          if (c & 0x04)
                          {
                            if (c & 0x08)
                            {
                              if (d & 0x10)
                              {
                                if (c & 0x01)
                                {
                                  // ENCODING.VCVTM_vfp_T1_S
                                  return 1265;
                                }
                                else
                                {
                                  // ENCODING.VCVTP_vfp_T1_S
                                  return 1285;
                                }
                              }
                              else
                              {
                                // ENCODING.VCVT_xv_T1_S
                                return 1234;
                              }
                            }
                            else
                            {
                              if (a & 0x80)
                              {
                                if (c & 0x01)
                                {
                                  // ENCODING.VCVT_ds_T1
                                  return 1193;
                                }
                                else
                                {
                                  // ENCODING.VRINTZ_vfp_T1_S
                                  return 1983;
                                }
                              }
                              else
                              {
                                if (c & 0x01)
                                {
                                  // ENCODING.VRINTX_vfp_T1_S
                                  return 1973;
                                }
                                else
                                {
                                  // ENCODING.VRINTR_vfp_T1_S
                                  return 1963;
                                }
                              }
                            }
                          }
                          else
                          {
                            if (c & 0x08)
                            {
                              if (d & 0x10)
                              {
                                if (c & 0x01)
                                {
                                  // ENCODING.VRINTM_vfp_T1_S
                                  return 1937;
                                }
                                else
                                {
                                  // ENCODING.VRINTP_vfp_T1_S
                                  return 1957;
                                }
                              }
                              else
                              {
                                // ENCODING.VCVT_toxv_T1_S
                                return 1233;
                              }
                            }
                            else
                            {
                              if (a & 0x80)
                              {
                                if (c & 0x01)
                                {
                                  // ENCODING.VCVTT_T1_HS
                                  return 1305;
                                }
                                else
                                {
                                  // ENCODING.VCVTT_T1_SH
                                  return 1303;
                                }
                              }
                              else
                              {
                                if (c & 0x01)
                                {
                                  // ENCODING.VCVTB_T1_HS
                                  return 1253;
                                }
                                else
                                {
                                  // ENCODING.VCVTB_T1_SH
                                  return 1251;
                                }
                              }
                            }
                          }
                        }
                        else
                        {
                          if (c & 0x01)
                          {
                            if (c & 0x04)
                            {
                              if (c & 0x08)
                              {
                                if (d & 0x10)
                                {
                                  // ENCODING.VCVTN_vfp_T1_S
                                  return 1275;
                                }
                                else
                                {
                                  if (a & 0x80)
                                  {
                                    // ENCODING.VCVT_siv_T1_S
                                    return 1212;
                                  }
                                  else
                                  {
                                    // ENCODING.VCVTR_siv_T1_S
                                    return 1296;
                                  }
                                }
                              }
                              else
                              {
                                if (a & 0x80)
                                {
                                  // ENCODING.VCMPE_T2_S
                                  return 1183;
                                }
                                else
                                {
                                  // ENCODING.VCMP_T2_S
                                  return 1171;
                                }
                              }
                            }
                            else
                            {
                              if (a & 0x80)
                              {
                                // ENCODING.VSQRT_T1_S
                                return 2069;
                              }
                              else
                              {
                                if (c & 0x08)
                                {
                                  // ENCODING.VRINTN_vfp_T1_S
                                  return 1947;
                                }
                                else
                                {
                                  // ENCODING.VNEG_T2_S
                                  return 1749;
                                }
                              }
                            }
                          }
                          else
                          {
                            if (c & 0x04)
                            {
                              if (c & 0x08)
                              {
                                if (d & 0x10)
                                {
                                  // ENCODING.VCVTA_vfp_T1_S
                                  return 1245;
                                }
                                else
                                {
                                  if (a & 0x80)
                                  {
                                    // ENCODING.VCVT_uiv_T1_S
                                    return 1211;
                                  }
                                  else
                                  {
                                    // ENCODING.VCVTR_uiv_T1_S
                                    return 1295;
                                  }
                                }
                              }
                              else
                              {
                                if (a & 0x80)
                                {
                                  // ENCODING.VCMPE_T1_S
                                  return 1180;
                                }
                                else
                                {
                                  // ENCODING.VCMP_T1_S
                                  return 1168;
                                }
                              }
                            }
                            else
                            {
                              if (c & 0x08)
                              {
                                if (d & 0x10)
                                {
                                  // ENCODING.VRINTA_vfp_T1_S
                                  return 1927;
                                }
                                else
                                {
                                  // ENCODING.VCVT_vi_T1_S
                                  return 1219;
                                }
                              }
                              else
                              {
                                if (a & 0x80)
                                {
                                  if (d & 0x10)
                                  {
                                    // ENCODING.VINS_T1
                                    return 1398;
                                  }
                                  else
                                  {
                                    // ENCODING.VABS_T2_S
                                    return 1035;
                                  }
                                }
                                else
                                {
                                  if (d & 0x10)
                                  {
                                    // ENCODING.VMOVX_T1
                                    return 1698;
                                  }
                                  else
                                  {
                                    // ENCODING.VMOV_r_T2_S
                                    return 1679;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      else
                      {
                        // ENCODING.VFNMA_T1_S
                        return 1381;
                      }
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.VFMS_T2_S
                        return 1367;
                      }
                      else
                      {
                        // ENCODING.VMINNM_T2_S
                        return 1599;
                      }
                    }
                  }
                  else
                  {
                    // ENCODING.VCMLA_s_T1_QS
                    return 1160;
                  }
                }
              }
              else
              {
                if (b & 0x01)
                {
                  if (b & 0x02)
                  {
                    if (c & 0x10)
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.VMOV_i_T2_D
                        return 1670;
                      }
                      else
                      {
                        // ENCODING.VFNMS_T1_D
                        return 1388;
                      }
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.VFMA_T2_D
                        return 1346;
                      }
                      else
                      {
                        if (d & 0x10)
                        {
                          // ENCODING.VMAXNM_T2_D
                          return 1582;
                        }
                        else
                        {
                          // ENCODING.VDIV_T1_D
                          return 1314;
                        }
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x04)
                    {
                      // ENCODING.VUSDOT_s_T1_D
                      return 2268;
                    }
                    else
                    {
                      if (c & 0x10)
                      {
                        if (c & 0x20)
                        {
                          // ENCODING.VMOV_i_T2_H
                          return 1668;
                        }
                        else
                        {
                          // ENCODING.VFNMS_T1_H
                          return 1386;
                        }
                      }
                      else
                      {
                        if (c & 0x20)
                        {
                          // ENCODING.VFMA_T2_H
                          return 1344;
                        }
                        else
                        {
                          if (d & 0x10)
                          {
                            // ENCODING.VMAXNM_T2_H
                            return 1580;
                          }
                          else
                          {
                            // ENCODING.VDIV_T1_H
                            return 1312;
                          }
                        }
                      }
                    }
                  }
                }
                else
                {
                  if (b & 0x02)
                  {
                    if (c & 0x10)
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.VMOV_i_T2_S
                        return 1669;
                      }
                      else
                      {
                        // ENCODING.VFNMS_T1_S
                        return 1387;
                      }
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.VFMA_T2_S
                        return 1345;
                      }
                      else
                      {
                        if (d & 0x10)
                        {
                          // ENCODING.VMAXNM_T2_S
                          return 1581;
                        }
                        else
                        {
                          // ENCODING.VDIV_T1_S
                          return 1313;
                        }
                      }
                    }
                  }
                  else
                  {
                    // ENCODING.VCMLA_s_T1_DS
                    return 1158;
                  }
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
                if (a & 0x40)
                {
                  if (b & 0x04)
                  {
                    if (b & 0x08)
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.VMIN_f_T1_Q
                        return 1586;
                      }
                      else
                      {
                        // ENCODING.VMAX_f_T1_Q
                        return 1568;
                      }
                    }
                    else
                    {
                      // ENCODING.VABD_i_T1_Q
                      return 1024;
                    }
                  }
                  else
                  {
                    if (b & 0x08)
                    {
                      // the following switch contains 3 case.
                      switch (d & 0x11)
                      {
                        case 0x00:
                        {
                          // the following switch contains 4 case.
                          switch (c & 0x30)
                          {
                            case 0x00:
                            {
                              // ENCODING.VMLS_f_T2_D
                              return 1632;
                              break;
                            }
                            case 0x10:
                            {
                              // ENCODING.VNMLA_T1_D
                              return 1756;
                              break;
                            }
                            case 0x20:
                            {
                              // ENCODING.VNMUL_T1_D
                              return 1768;
                              break;
                            }
                            case 0x30:
                            {
                              // ENCODING.VSUB_f_T2_D
                              return 2221;
                              break;
                            }
                            default: break;
                          }
                          break;
                        }
                        case 0x01:
                        {
                          // ENCODING.VQDMULH_T1_Q
                          return 1826;
                          break;
                        }
                        case 0x11:
                        {
                          // ENCODING.VQRDMULH_T1_Q
                          return 1862;
                          break;
                        }
                        default: break;
                      }
                    }
                    else
                    {
                      // ENCODING.VCGT_r_T1_Q
                      return 1130;
                    }
                  }
                }
                else
                {
                  if (b & 0x04)
                  {
                    if (b & 0x08)
                    {
                      if (c & 0x20)
                      {
                        if (d & 0x10)
                        {
                          // ENCODING.VPMIN_f_T1
                          return 1802;
                        }
                        else
                        {
                          // ENCODING.VMIN_f_T1_D
                          return 1585;
                        }
                      }
                      else
                      {
                        if (d & 0x10)
                        {
                          // ENCODING.VPMAX_f_T1
                          return 1798;
                        }
                        else
                        {
                          // ENCODING.VMAX_f_T1_D
                          return 1567;
                        }
                      }
                    }
                    else
                    {
                      // ENCODING.VABD_i_T1_D
                      return 1023;
                    }
                  }
                  else
                  {
                    if (b & 0x08)
                    {
                      // the following switch contains 4 case.
                      switch (d & 0x11)
                      {
                        case 0x00:
                        {
                          // the following switch contains 4 case.
                          switch (c & 0x30)
                          {
                            case 0x00:
                            {
                              // ENCODING.VMLA_f_T2_D
                              return 1610;
                              break;
                            }
                            case 0x10:
                            {
                              // ENCODING.VNMLS_T1_D
                              return 1762;
                              break;
                            }
                            case 0x20:
                            {
                              // ENCODING.VMUL_f_T2_D
                              return 1712;
                              break;
                            }
                            case 0x30:
                            {
                              // ENCODING.VADD_f_T2_D
                              return 1054;
                              break;
                            }
                            default: break;
                          }
                          break;
                        }
                        case 0x01:
                        {
                          // ENCODING.VQDMULH_T1_D
                          return 1825;
                          break;
                        }
                        case 0x10:
                        {
                          // the following switch contains 4 case.
                          switch (c & 0x30)
                          {
                            case 0x00:
                            {
                              // ENCODING.VSELEQ_T1_D
                              return 2029;
                              break;
                            }
                            case 0x10:
                            {
                              // ENCODING.VSELVS_T1_D
                              return 2038;
                              break;
                            }
                            case 0x20:
                            {
                              // ENCODING.VSELGE_T1_D
                              return 2032;
                              break;
                            }
                            case 0x30:
                            {
                              // ENCODING.VSELGT_T1_D
                              return 2035;
                              break;
                            }
                            default: break;
                          }
                          break;
                        }
                        case 0x11:
                        {
                          // ENCODING.VQRDMULH_T1_D
                          return 1861;
                          break;
                        }
                        default: break;
                      }
                    }
                    else
                    {
                      // ENCODING.VCGT_r_T1_D
                      return 1129;
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
                    if (c & 0x20)
                    {
                      if (a & 0x40)
                      {
                        // the following switch contains 3 case.
                        switch ((d & 0x11) - 1)
                        {
                          case 0x00:
                          {
                            // ENCODING.VSUB_f_T1_Q
                            return 2218;
                            break;
                          }
                          case 0x0f:
                          {
                            // ENCODING.VSDOT_s_T1_Q
                            return 2016;
                            break;
                          }
                          case 0x10:
                          {
                            // ENCODING.VABD_f_T1_Q
                            return 1020;
                            break;
                          }
                          default: break;
                        }
                      }
                      else
                      {
                        // the following switch contains 3 case.
                        switch ((d & 0x11) - 1)
                        {
                          case 0x00:
                          {
                            // ENCODING.VSUB_f_T1_D
                            return 2217;
                            break;
                          }
                          case 0x0f:
                          {
                            // ENCODING.VSDOT_s_T1_D
                            return 2015;
                            break;
                          }
                          case 0x10:
                          {
                            // ENCODING.VABD_f_T1_D
                            return 1019;
                            break;
                          }
                          default: break;
                        }
                      }
                    }
                    else
                    {
                      // the following switch contains 3 case.
                      switch ((d & 0x11) - 1)
                      {
                        case 0x00:
                        {
                          if (a & 0x40)
                          {
                            // ENCODING.VADD_f_T1_Q
                            return 1051;
                          }
                          else
                          {
                            // ENCODING.VADD_f_T1_D
                            return 1050;
                          }
                          break;
                        }
                        case 0x0f:
                        {
                          if (a & 0x40)
                          {
                            // ENCODING.VDOT_s_T1_Q
                            return 1322;
                          }
                          else
                          {
                            // ENCODING.VDOT_s_T1_D
                            return 1321;
                          }
                          break;
                        }
                        case 0x10:
                        {
                          // ENCODING.VPADD_f_T1
                          return 1790;
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
                      // ENCODING.VRSHL_T1_Q
                      return 1988;
                    }
                    else
                    {
                      // ENCODING.VRSHL_T1_D
                      return 1987;
                    }
                  }
                }
                else
                {
                  if (a & 0x40)
                  {
                    if (b & 0x08)
                    {
                      // the following switch contains 3 case.
                      switch (d & 0x11)
                      {
                        case 0x00:
                        {
                          // the following switch contains 4 case.
                          switch (c & 0x30)
                          {
                            case 0x00:
                            {
                              // ENCODING.VMLS_f_T2_H
                              return 1630;
                              break;
                            }
                            case 0x10:
                            {
                              // ENCODING.VNMLA_T1_H
                              return 1754;
                              break;
                            }
                            case 0x20:
                            {
                              // ENCODING.VNMUL_T1_H
                              return 1766;
                              break;
                            }
                            case 0x30:
                            {
                              // ENCODING.VSUB_f_T2_H
                              return 2219;
                              break;
                            }
                            default: break;
                          }
                          break;
                        }
                        case 0x01:
                        {
                          // ENCODING.VMLA_i_T1_Q
                          return 1614;
                          break;
                        }
                        case 0x11:
                        {
                          // ENCODING.VMLS_i_T1_Q
                          return 1636;
                          break;
                        }
                        default: break;
                      }
                    }
                    else
                    {
                      // ENCODING.VRHADD_T1_Q
                      return 1918;
                    }
                  }
                  else
                  {
                    if (b & 0x08)
                    {
                      // the following switch contains 4 case.
                      switch (d & 0x11)
                      {
                        case 0x00:
                        {
                          // the following switch contains 4 case.
                          switch (c & 0x30)
                          {
                            case 0x00:
                            {
                              // ENCODING.VMLA_f_T2_H
                              return 1608;
                              break;
                            }
                            case 0x10:
                            {
                              // ENCODING.VNMLS_T1_H
                              return 1760;
                              break;
                            }
                            case 0x20:
                            {
                              // ENCODING.VMUL_f_T2_H
                              return 1710;
                              break;
                            }
                            case 0x30:
                            {
                              // ENCODING.VADD_f_T2_H
                              return 1052;
                              break;
                            }
                            default: break;
                          }
                          break;
                        }
                        case 0x01:
                        {
                          // ENCODING.VMLA_i_T1_D
                          return 1613;
                          break;
                        }
                        case 0x10:
                        {
                          // the following switch contains 4 case.
                          switch (c & 0x30)
                          {
                            case 0x00:
                            {
                              // ENCODING.VSELEQ_T1_H
                              return 2030;
                              break;
                            }
                            case 0x10:
                            {
                              // ENCODING.VSELVS_T1_H
                              return 2039;
                              break;
                            }
                            case 0x20:
                            {
                              // ENCODING.VSELGE_T1_H
                              return 2033;
                              break;
                            }
                            case 0x30:
                            {
                              // ENCODING.VSELGT_T1_H
                              return 2036;
                              break;
                            }
                            default: break;
                          }
                          break;
                        }
                        case 0x11:
                        {
                          // ENCODING.VMLS_i_T1_D
                          return 1635;
                          break;
                        }
                        default: break;
                      }
                    }
                    else
                    {
                      // ENCODING.VRHADD_T1_D
                      return 1917;
                    }
                  }
                }
              }
            }
            else
            {
              if (b & 0x02)
              {
                if (a & 0x40)
                {
                  if (b & 0x04)
                  {
                    if (b & 0x08)
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.VCGT_r_T2_Q
                        return 1132;
                      }
                      else
                      {
                        if (d & 0x10)
                        {
                          // ENCODING.VCGE_r_T2_Q
                          return 1120;
                        }
                        else
                        {
                          // ENCODING.VCEQ_r_T2_Q
                          return 1108;
                        }
                      }
                    }
                    else
                    {
                      // ENCODING.VMAX_i_T1_Q
                      return 1572;
                    }
                  }
                  else
                  {
                    if (b & 0x08)
                    {
                      // the following switch contains 4 case.
                      switch (c & 0x30)
                      {
                        case 0x00:
                        {
                          // ENCODING.VMLS_f_T2_S
                          return 1631;
                          break;
                        }
                        case 0x10:
                        {
                          // ENCODING.VNMLA_T1_S
                          return 1755;
                          break;
                        }
                        case 0x20:
                        {
                          // ENCODING.VNMUL_T1_S
                          return 1767;
                          break;
                        }
                        case 0x30:
                        {
                          // ENCODING.VSUB_f_T2_S
                          return 2220;
                          break;
                        }
                        default: break;
                      }
                    }
                    else
                    {
                      // ENCODING.VHSUB_T1_Q
                      return 1396;
                    }
                  }
                }
                else
                {
                  if (b & 0x04)
                  {
                    if (b & 0x08)
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.VCGT_r_T2_D
                        return 1131;
                      }
                      else
                      {
                        if (d & 0x10)
                        {
                          // ENCODING.VCGE_r_T2_D
                          return 1119;
                        }
                        else
                        {
                          // ENCODING.VCEQ_r_T2_D
                          return 1107;
                        }
                      }
                    }
                    else
                    {
                      // ENCODING.VMAX_i_T1_D
                      return 1571;
                    }
                  }
                  else
                  {
                    if (b & 0x08)
                    {
                      if (d & 0x01)
                      {
                        // ENCODING.VPMAX_i_T1
                        return 1800;
                      }
                      else
                      {
                        if (c & 0x10)
                        {
                          if (c & 0x20)
                          {
                            if (d & 0x10)
                            {
                              // ENCODING.VSELGT_T1_S
                              return 2037;
                            }
                            else
                            {
                              // ENCODING.VADD_f_T2_S
                              return 1053;
                            }
                          }
                          else
                          {
                            if (d & 0x10)
                            {
                              // ENCODING.VSELVS_T1_S
                              return 2040;
                            }
                            else
                            {
                              // ENCODING.VNMLS_T1_S
                              return 1761;
                            }
                          }
                        }
                        else
                        {
                          if (c & 0x20)
                          {
                            if (d & 0x10)
                            {
                              // ENCODING.VSELGE_T1_S
                              return 2034;
                            }
                            else
                            {
                              // ENCODING.VMUL_f_T2_S
                              return 1711;
                            }
                          }
                          else
                          {
                            if (d & 0x10)
                            {
                              // ENCODING.VSELEQ_T1_S
                              return 2031;
                            }
                            else
                            {
                              // ENCODING.VMLA_f_T2_S
                              return 1609;
                            }
                          }
                        }
                      }
                    }
                    else
                    {
                      // ENCODING.VHSUB_T1_D
                      return 1395;
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
                    if (c & 0x10)
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.SHA1SU0_T1
                        return 999;
                      }
                      else
                      {
                        if (d & 0x10)
                        {
                          // ENCODING.SHA256H2_T1
                          return 1005;
                        }
                        else
                        {
                          // ENCODING.SHA1P_T1
                          return 997;
                        }
                      }
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        if (d & 0x10)
                        {
                          // ENCODING.SHA256SU1_T1
                          return 1009;
                        }
                        else
                        {
                          // ENCODING.SHA1M_T1
                          return 995;
                        }
                      }
                      else
                      {
                        if (d & 0x10)
                        {
                          // ENCODING.SHA256H_T1
                          return 1003;
                        }
                        else
                        {
                          // ENCODING.SHA1C_T1
                          return 991;
                        }
                      }
                    }
                  }
                  else
                  {
                    if (a & 0x40)
                    {
                      // ENCODING.VSHL_r_T1_Q
                      return 2048;
                    }
                    else
                    {
                      // ENCODING.VSHL_r_T1_D
                      return 2047;
                    }
                  }
                }
                else
                {
                  if (a & 0x40)
                  {
                    if (b & 0x08)
                    {
                      // the following switch contains 3 case.
                      switch ((d & 0x11) - 1)
                      {
                        case 0x00:
                        {
                          // ENCODING.VADD_i_T1_Q
                          return 1058;
                          break;
                        }
                        case 0x0f:
                        {
                          // ENCODING.VCMLA_s_T1_QH
                          return 1159;
                          break;
                        }
                        case 0x10:
                        {
                          // ENCODING.VSUB_i_T1_Q
                          return 2225;
                          break;
                        }
                        default: break;
                      }
                    }
                    else
                    {
                      // ENCODING.VHADD_T1_Q
                      return 1392;
                    }
                  }
                  else
                  {
                    if (b & 0x08)
                    {
                      // the following switch contains 3 case.
                      switch ((d & 0x11) - 1)
                      {
                        case 0x00:
                        {
                          // ENCODING.VADD_i_T1_D
                          return 1057;
                          break;
                        }
                        case 0x0f:
                        {
                          // ENCODING.VCMLA_s_T1_DH
                          return 1157;
                          break;
                        }
                        case 0x10:
                        {
                          // ENCODING.VSUB_i_T1_D
                          return 2224;
                          break;
                        }
                        default: break;
                      }
                    }
                    else
                    {
                      // ENCODING.VHADD_T1_D
                      return 1391;
                    }
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
  }
  else
  {
    if (b & 0x80)
    {
      // the following switch contains 4 case.
      switch (b & 0x50)
      {
        case 0x00:
        {
          // conflicts:
          // ENCODING.B_T3                 : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxxxxxxxxxxxxxx
          // ENCODING.BXJ_T1               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x0111100xxxxxx0x111100000000
          // ENCODING.CLREX_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x01110111111xx0x111100101111
          // ENCODING.CPS_T2_AS            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x01110101111xx0x0001xxxxxxxx
          // ENCODING.CPSID_T2_AS          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x01110101111xx0x0110xxxxxxxx
          // ENCODING.CPSID_T2_ASM         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x01110101111xx0x0111xxxxxxxx
          // ENCODING.CPSIE_T2_AS          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x01110101111xx0x0100xxxxxxxx
          // ENCODING.CPSIE_T2_ASM         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x01110101111xx0x0101xxxxxxxx
          // ENCODING.CSDB_T1              : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x01110101111xx0x000000010100
          // ENCODING.DBG_T1               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x01110101111xx0x00001111xxxx
          // ENCODING.DCPS1_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x11110001111xx0x000000000001
          // ENCODING.DCPS2_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x11110001111xx0x000000000010
          // ENCODING.DCPS3_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x11110001111xx0x000000000011
          // ENCODING.DMB_T1               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x01110111111xx0x11110101xxxx
          // ENCODING.DSB_T1               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x01110111111xx0x11110100xxxx
          // ENCODING.ERET_T1              : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x01111011110xx0x111100000000
          // ENCODING.ESB_T1               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x01110101111xx0x000000010000
          // ENCODING.HVC_T1               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x1111110xxxxxx0xxxxxxxxxxxxx
          // ENCODING.ISB_T1               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x01110111111xx0x11110110xxxx
          // ENCODING.MRS_T1_AS            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x011111x1111xx0xxxxx00000000
          // ENCODING.MRS_br_T1_AS         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x011111xxxxxxx0xxxxx001x0000
          // ENCODING.MSR_br_T1_AS         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x011100xxxxxxx0xxxxx001x0000
          // ENCODING.MSR_r_T1_AS          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x011100xxxxxxx0xxxxx00000000
          // ENCODING.NOP_T2               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x01110101111xx0x000000000000
          // ENCODING.PSSBB_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x01110111111xx0x111101000100
          // ENCODING.SB_T1                : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x01110111111xx0x111101110000
          // ENCODING.SEV_T2               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x01110101111xx0x000000000100
          // ENCODING.SEVL_T2              : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x01110101111xx0x000000000101
          // ENCODING.SMC_T1_AS            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x1111111xxxxxx0x000000000000
          // ENCODING.SSBB_T1              : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x01110111111xx0x111101000000
          // ENCODING.SUBS_PC_T5_AS        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x01111011110xx0x1111xxxxxxxx
          // ENCODING.TSB_T1               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x01110101111xx0x000000010010
          // ENCODING.UDF_T2               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x1111111xxxxxx1xxxxxxxxxxxxx
          // ENCODING.WFE_T2               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x01110101111xx0x000000000010
          // ENCODING.WFI_T2               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x01110101111xx0x000000000011
          // ENCODING.YIELD_T2             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x01110101111xx0x000000000001
          // option!=0b0x00
          if ((opcode & 0x0000000b) != 0x00000000)
          {
            // imm8!=0b00000000
            if ((opcode & 0x000000ff) != 0x00000000)
            {
              // cond!=0b111x
              if ((opcode & 0x03800000) != 0x03800000)
              {
                // ENCODING.B_T3
                return 75;
              }
              else
              {
                if (b & 0x20)
                {
                  // ENCODING.UDF_T2
                  return 837;
                }
                else
                {
                  if (c & 0x10)
                  {
                    if (c & 0x01)
                    {
                      // the following switch contains 4 case.
                      switch ((a & 0x70) - 32)
                      {
                        case 0x00:
                        {
                          // ENCODING.CLREX_T1
                          return 111;
                          break;
                        }
                        case 0x20:
                        {
                          // ENCODING.DSB_T1
                          return 166;
                          break;
                        }
                        case 0x30:
                        {
                          // ENCODING.DMB_T1
                          return 164;
                          break;
                        }
                        case 0x40:
                        {
                          // ENCODING.ISB_T1
                          return 191;
                          break;
                        }
                        default: break;
                      }
                    }
                    else
                    {
                      // ENCODING.SUBS_PC_T5_AS
                      return 766;
                    }
                  }
                  else
                  {
                    if (c & 0x20)
                    {
                      if (c & 0x40)
                      {
                        // ENCODING.HVC_T1
                        return 189;
                      }
                      else
                      {
                        // the following switch contains 6 case.
                        switch (b & 0x07)
                        {
                          case 0x00:
                          {
                            // the following switch contains 3 case.
                            switch (a & 0xf0)
                            {
                              case 0x00:
                              {
                                // the following switch contains 4 case.
                                switch ((a & 0x07) - 1)
                                {
                                  case 0x00:
                                  {
                                    // ENCODING.YIELD_T2
                                    return 910;
                                    break;
                                  }
                                  case 0x01:
                                  {
                                    // ENCODING.WFE_T2
                                    return 904;
                                    break;
                                  }
                                  case 0x02:
                                  {
                                    // ENCODING.WFI_T2
                                    return 907;
                                    break;
                                  }
                                  case 0x04:
                                  {
                                    // ENCODING.SEVL_T2
                                    return 554;
                                    break;
                                  }
                                  default: break;
                                }
                                break;
                              }
                              case 0x10:
                              {
                                // ENCODING.TSB_T1
                                return 818;
                                break;
                              }
                              case 0xf0:
                              {
                                // ENCODING.DBG_T1
                                return 159;
                                break;
                              }
                              default: break;
                            }
                            break;
                          }
                          case 0x01:
                          {
                            // ENCODING.CPS_T2_AS
                            return 139;
                            break;
                          }
                          case 0x04:
                          {
                            // ENCODING.CPSIE_T2_AS
                            return 142;
                            break;
                          }
                          case 0x05:
                          {
                            // ENCODING.CPSIE_T2_ASM
                            return 143;
                            break;
                          }
                          case 0x06:
                          {
                            // ENCODING.CPSID_T2_AS
                            return 140;
                            break;
                          }
                          case 0x07:
                          {
                            // ENCODING.CPSID_T2_ASM
                            return 141;
                            break;
                          }
                          default: break;
                        }
                      }
                    }
                    else
                    {
                      // the following switch contains 3 case.
                      switch ((a & 0x03) - 1)
                      {
                        case 0x00:
                        {
                          // ENCODING.DCPS1_T1
                          return 160;
                          break;
                        }
                        case 0x01:
                        {
                          // ENCODING.DCPS2_T1
                          return 161;
                          break;
                        }
                        case 0x02:
                        {
                          // ENCODING.DCPS3_T1
                          return 162;
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
              // cond!=0b111x
              if ((opcode & 0x03800000) != 0x03800000)
              {
                // ENCODING.B_T3
                return 75;
              }
              else
              {
                if (b & 0x20)
                {
                  // ENCODING.UDF_T2
                  return 837;
                }
                else
                {
                  if (c & 0x10)
                  {
                    // the following switch contains 3 case.
                    switch (a & 0x30)
                    {
                      case 0x00:
                      {
                        // ENCODING.DSB_T1
                        return 166;
                        break;
                      }
                      case 0x10:
                      {
                        // ENCODING.DMB_T1
                        return 164;
                        break;
                      }
                      case 0x20:
                      {
                        // ENCODING.ISB_T1
                        return 191;
                        break;
                      }
                      default: break;
                    }
                  }
                  else
                  {
                    if (c & 0x40)
                    {
                      // ENCODING.HVC_T1
                      return 189;
                    }
                    else
                    {
                      // the following switch contains 6 case.
                      switch (b & 0x07)
                      {
                        case 0x00:
                        {
                          // ENCODING.DBG_T1
                          return 159;
                          break;
                        }
                        case 0x01:
                        {
                          // ENCODING.CPS_T2_AS
                          return 139;
                          break;
                        }
                        case 0x04:
                        {
                          // ENCODING.CPSIE_T2_AS
                          return 142;
                          break;
                        }
                        case 0x05:
                        {
                          // ENCODING.CPSIE_T2_ASM
                          return 143;
                          break;
                        }
                        case 0x06:
                        {
                          // ENCODING.CPSID_T2_AS
                          return 140;
                          break;
                        }
                        case 0x07:
                        {
                          // ENCODING.CPSID_T2_ASM
                          return 141;
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
            // imm8!=0b00000000
            if ((opcode & 0x000000ff) != 0x00000000)
            {
              // cond!=0b111x
              if ((opcode & 0x03800000) != 0x03800000)
              {
                // ENCODING.B_T3
                return 75;
              }
              else
              {
                if (b & 0x20)
                {
                  // ENCODING.UDF_T2
                  return 837;
                }
                else
                {
                  if (c & 0x20)
                  {
                    if (c & 0x40)
                    {
                      if (d & 0x04)
                      {
                        // ENCODING.HVC_T1
                        return 189;
                      }
                      else
                      {
                        // ENCODING.MRS_br_T1_AS
                        return 378;
                      }
                    }
                    else
                    {
                      if (b & 0x01)
                      {
                        if (b & 0x02)
                        {
                          if (b & 0x08)
                          {
                            // the following switch contains 4 case.
                            switch (a & 0x30)
                            {
                              case 0x00:
                              {
                                if (a & 0x04)
                                {
                                  // ENCODING.PSSBB_T1
                                  return 454;
                                }
                                else
                                {
                                  // ENCODING.SSBB_T1
                                  return 658;
                                }
                                break;
                              }
                              case 0x10:
                              {
                                // ENCODING.DMB_T1
                                return 164;
                                break;
                              }
                              case 0x20:
                              {
                                // ENCODING.ISB_T1
                                return 191;
                                break;
                              }
                              case 0x30:
                              {
                                // ENCODING.SB_T1
                                return 523;
                                break;
                              }
                              default: break;
                            }
                          }
                          else
                          {
                            // ENCODING.CPSID_T2_ASM
                            return 141;
                          }
                        }
                        else
                        {
                          if (b & 0x04)
                          {
                            // ENCODING.CPSIE_T2_ASM
                            return 143;
                          }
                          else
                          {
                            // ENCODING.CPS_T2_AS
                            return 139;
                          }
                        }
                      }
                      else
                      {
                        // the following switch contains 3 case.
                        switch (b & 0x06)
                        {
                          case 0x00:
                          {
                            // the following switch contains 3 case.
                            switch (a & 0xf0)
                            {
                              case 0x00:
                              {
                                // ENCODING.SEV_T2
                                return 551;
                                break;
                              }
                              case 0x10:
                              {
                                if (a & 0x04)
                                {
                                  // ENCODING.CSDB_T1
                                  return 157;
                                }
                                else
                                {
                                  // ENCODING.ESB_T1
                                  return 185;
                                }
                                break;
                              }
                              case 0xf0:
                              {
                                // ENCODING.DBG_T1
                                return 159;
                                break;
                              }
                              default: break;
                            }
                            break;
                          }
                          case 0x04:
                          {
                            // ENCODING.CPSIE_T2_AS
                            return 142;
                            break;
                          }
                          case 0x06:
                          {
                            // ENCODING.CPSID_T2_AS
                            return 140;
                            break;
                          }
                          default: break;
                        }
                      }
                    }
                  }
                  else
                  {
                    if (c & 0x40)
                    {
                      // ENCODING.SUBS_PC_T5_AS
                      return 766;
                    }
                    else
                    {
                      // ENCODING.MSR_br_T1_AS
                      return 380;
                    }
                  }
                }
              }
            }
            else
            {
              // cond!=0b111x
              if ((opcode & 0x03800000) != 0x03800000)
              {
                // ENCODING.B_T3
                return 75;
              }
              else
              {
                if (b & 0x20)
                {
                  // ENCODING.UDF_T2
                  return 837;
                }
                else
                {
                  if (c & 0x20)
                  {
                    if (c & 0x40)
                    {
                      if (d & 0x04)
                      {
                        if (c & 0x10)
                        {
                          // ENCODING.SMC_T1_AS
                          return 568;
                        }
                        else
                        {
                          // ENCODING.HVC_T1
                          return 189;
                        }
                      }
                      else
                      {
                        if (a & 0x20)
                        {
                          // ENCODING.MRS_br_T1_AS
                          return 378;
                        }
                        else
                        {
                          // ENCODING.MRS_T1_AS
                          return 376;
                        }
                      }
                    }
                    else
                    {
                      if (b & 0x01)
                      {
                        if (b & 0x02)
                        {
                          if (b & 0x08)
                          {
                            if (a & 0x10)
                            {
                              // ENCODING.DMB_T1
                              return 164;
                            }
                            else
                            {
                              // ENCODING.ISB_T1
                              return 191;
                            }
                          }
                          else
                          {
                            // ENCODING.CPSID_T2_ASM
                            return 141;
                          }
                        }
                        else
                        {
                          if (b & 0x04)
                          {
                            // ENCODING.CPSIE_T2_ASM
                            return 143;
                          }
                          else
                          {
                            // ENCODING.CPS_T2_AS
                            return 139;
                          }
                        }
                      }
                      else
                      {
                        // the following switch contains 3 case.
                        switch (b & 0x06)
                        {
                          case 0x00:
                          {
                            if (a & 0x10)
                            {
                              // ENCODING.DBG_T1
                              return 159;
                            }
                            else
                            {
                              // ENCODING.NOP_T2
                              return 405;
                            }
                            break;
                          }
                          case 0x04:
                          {
                            // ENCODING.CPSIE_T2_AS
                            return 142;
                            break;
                          }
                          case 0x06:
                          {
                            // ENCODING.CPSID_T2_AS
                            return 140;
                            break;
                          }
                          default: break;
                        }
                      }
                    }
                  }
                  else
                  {
                    if (a & 0x20)
                    {
                      // ENCODING.MSR_br_T1_AS
                      return 380;
                    }
                    else
                    {
                      if (c & 0x40)
                      {
                        if (c & 0x10)
                        {
                          // ENCODING.ERET_T1
                          return 183;
                        }
                        else
                        {
                          // ENCODING.BXJ_T1
                          return 107;
                        }
                      }
                      else
                      {
                        // ENCODING.MSR_r_T1_AS
                        return 383;
                      }
                    }
                  }
                }
              }
            }
          }
          break;
        }
        case 0x10:
        {
          // ENCODING.B_T4
          return 76;
          break;
        }
        case 0x40:
        {
          // ENCODING.BL_i_T2
          return 101;
          break;
        }
        case 0x50:
        {
          // ENCODING.BL_i_T1
          return 100;
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
          if (c & 0x40)
          {
            if (d & 0x01)
            {
              // ENCODING.SBCS_i_T1
              return 527;
            }
            else
            {
              // conflicts:
              // ENCODING.MVNS_i_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xx0xxxxx1111xxxxxxxxxxxxxxxx
              // ENCODING.ORNS_i_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xx0xxxxxxxxxxxxxxxxxxxxxxxxx
              // Rn!=0b1111
              if ((opcode & 0x000f0000) != 0x000f0000)
              {
                // ENCODING.ORNS_i_T1
                return 406;
              }
              else
              {
                // ENCODING.MVNS_i_T1
                return 391;
              }
            }
          }
          else
          {
            if (c & 0x80)
            {
              // conflicts:
              // ENCODING.CMP_i_T2             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xx01xxxxxxxxxxxx1111xxxxxxxx
              // ENCODING.SUBS_i_T3            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xx01xxxxxxxxxxxxxxxxxxxxxxxx
              // ENCODING.SUBS_SP_i_T2         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xx01xxxx1101xxxxxxxxxxxxxxxx
              // Rd!=0b1111
              if ((opcode & 0x00000f00) != 0x00000f00)
              {
                // Rn!=0b1101
                if ((opcode & 0x000f0000) != 0x000d0000)
                {
                  // ENCODING.SUBS_i_T3
                  return 764;
                }
                else
                {
                  // ENCODING.SUBS_SP_i_T2
                  return 782;
                }
              }
              else
              {
                // ENCODING.CMP_i_T2
                return 124;
              }
            }
            else
            {
              // ENCODING.BICS_i_T1
              return 84;
            }
          }
        }
        else
        {
          if (c & 0x40)
          {
            if (c & 0x80)
            {
              // ENCODING.RSBS_i_T2
              return 497;
            }
            else
            {
              if (d & 0x01)
              {
                // ENCODING.ADCS_i_T1
                return 4;
              }
              else
              {
                // conflicts:
                // ENCODING.MOVS_i_T2            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xx0xxxxx1111xxxxxxxxxxxxxxxx
                // ENCODING.ORRS_i_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xx0xxxxxxxxxxxxxxxxxxxxxxxxx
                // Rn!=0b1111
                if ((opcode & 0x000f0000) != 0x000f0000)
                {
                  // ENCODING.ORRS_i_T1
                  return 415;
                }
                else
                {
                  // ENCODING.MOVS_i_T2
                  return 349;
                }
              }
            }
          }
          else
          {
            if (c & 0x80)
            {
              // conflicts:
              // ENCODING.EORS_i_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xx00xxxxxxxxxxxxxxxxxxxxxxxx
              // ENCODING.TEQ_i_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xx00xxxxxxxxxxxx1111xxxxxxxx
              // Rd!=0b1111
              if ((opcode & 0x00000f00) != 0x00000f00)
              {
                // ENCODING.EORS_i_T1
                return 170;
              }
              else
              {
                // ENCODING.TEQ_i_T1
                return 811;
              }
            }
            else
            {
              if (d & 0x01)
              {
                // conflicts:
                // ENCODING.ADDS_i_T3            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xx0xxxxxxxxxxxxxxxxxxxxxxxxx
                // ENCODING.ADDS_SP_i_T3         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xx0xxxxx1101xxxxxxxxxxxxxxxx
                // ENCODING.CMN_i_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xx0xxxxxxxxxxxxx1111xxxxxxxx
                // Rd!=0b1111
                if ((opcode & 0x00000f00) != 0x00000f00)
                {
                  // Rn!=0b1101
                  if ((opcode & 0x000f0000) != 0x000d0000)
                  {
                    // ENCODING.ADDS_i_T3
                    return 21;
                  }
                  else
                  {
                    // ENCODING.ADDS_SP_i_T3
                    return 40;
                  }
                }
                else
                {
                  // ENCODING.CMN_i_T1
                  return 115;
                }
              }
              else
              {
                // conflicts:
                // ENCODING.ANDS_i_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xx0xxxxxxxxxxxxxxxxxxxxxxxxx
                // ENCODING.TST_i_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xx0xxxxxxxxxxxxx1111xxxxxxxx
                // Rd!=0b1111
                if ((opcode & 0x00000f00) != 0x00000f00)
                {
                  // ENCODING.ANDS_i_T1
                  return 60;
                }
                else
                {
                  // ENCODING.TST_i_T1
                  return 820;
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
            // the following switch contains 3 case.
            switch (d & 0x03)
            {
              case 0x00:
              {
                // conflicts:
                // ENCODING.MVN_i_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxx1111xxxxxxxxxxxxxxxx
                // ENCODING.ORN_i_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxx0xxxxxxxxxxxxxxxxxxxxxxx
                // Rn!=0b1111
                if ((opcode & 0x000f0000) != 0x000f0000)
                {
                  // ENCODING.ORN_i_T1
                  return 407;
                }
                else
                {
                  // ENCODING.MVN_i_T1
                  return 390;
                }
                break;
              }
              case 0x01:
              {
                // ENCODING.SBC_i_T1
                return 526;
                break;
              }
              case 0x03:
              {
                // conflicts:
                // ENCODING.BFC_T1               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x0xx0xxx1111xxxxxxxxxx0xxxxx
                // ENCODING.BFI_T1               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x0xx0xxxxxxxxxxxxxxxxx0xxxxx
                // Rn!=0b1111
                if ((opcode & 0x000f0000) != 0x000f0000)
                {
                  // ENCODING.BFI_T1
                  return 80;
                }
                else
                {
                  // ENCODING.BFC_T1
                  return 78;
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
              // the following switch contains 3 case.
              switch ((d & 0x03) - 1)
              {
                case 0x00:
                {
                  // conflicts:
                  // ENCODING.SUB_i_T3             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxxxxxxxxxxxxxx
                  // ENCODING.SUB_SP_i_T2          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxx1101xxxxxxxxxxxxxxxx
                  // Rn!=0b1101
                  if ((opcode & 0x000f0000) != 0x000d0000)
                  {
                    // ENCODING.SUB_i_T3
                    return 763;
                  }
                  else
                  {
                    // ENCODING.SUB_SP_i_T2
                    return 781;
                  }
                  break;
                }
                case 0x01:
                {
                  // conflicts:
                  // ENCODING.ADR_T2               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxx1111xxxxxxxxxxxxxxxx
                  // ENCODING.SUB_i_T4             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxxxxxxxxxxxxxx
                  // ENCODING.SUB_SP_i_T3          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxx1101xxxxxxxxxxxxxxxx
                  // Rn!=0b11x1
                  if ((opcode & 0x000d0000) != 0x000d0000)
                  {
                    // ENCODING.SUB_i_T4
                    return 765;
                  }
                  else
                  {
                    if (c & 0x02)
                    {
                      // ENCODING.ADR_T2
                      return 55;
                    }
                    else
                    {
                      // ENCODING.SUB_SP_i_T3
                      return 783;
                    }
                  }
                  break;
                }
                case 0x02:
                {
                  // conflicts:
                  // ENCODING.USAT_T1_ASR          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x0xxxxxxxxxxxxxxxxxxxx0xxxxx
                  // ENCODING.USAT16_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x0xxxxxxxxxxx000xxxx0000xxxx
                  // imm3:imm2!=0b00000
                  if ((opcode & 0x000070c0) != 0x00000000)
                  {
                    // ENCODING.USAT_T1_ASR
                    return 878;
                  }
                  else
                  {
                    // ENCODING.USAT16_T1
                    return 881;
                  }
                  break;
                }
                default: break;
              }
            }
            else
            {
              if (d & 0x01)
              {
                // conflicts:
                // ENCODING.SSAT_T1_ASR          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x01xxxxxxxxxxxxxxxxxxx0xxxxx
                // ENCODING.SSAT16_T1            : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111x01xxxxxxxxxx000xxxx0000xxxx
                // imm3:imm2!=0b00000
                if ((opcode & 0x000070c0) != 0x00000000)
                {
                  // ENCODING.SSAT_T1_ASR
                  return 651;
                }
                else
                {
                  // ENCODING.SSAT16_T1
                  return 654;
                }
              }
              else
              {
                // ENCODING.BIC_i_T1
                return 83;
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
              // the following switch contains 3 case.
              switch ((d & 0x03) - 1)
              {
                case 0x00:
                {
                  // ENCODING.RSB_i_T2
                  return 496;
                  break;
                }
                case 0x01:
                {
                  // ENCODING.MOVT_T1
                  return 370;
                  break;
                }
                case 0x02:
                {
                  // ENCODING.UBFX_T1
                  return 834;
                  break;
                }
                default: break;
              }
            }
            else
            {
              // the following switch contains 4 case.
              switch (d & 0x03)
              {
                case 0x00:
                {
                  // conflicts:
                  // ENCODING.MOV_i_T2             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxx1111xxxxxxxxxxxxxxxx
                  // ENCODING.ORR_i_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxxxxxxxxxxxxxx
                  // Rn!=0b1111
                  if ((opcode & 0x000f0000) != 0x000f0000)
                  {
                    // ENCODING.ORR_i_T1
                    return 414;
                  }
                  else
                  {
                    // ENCODING.MOV_i_T2
                    return 348;
                  }
                  break;
                }
                case 0x01:
                {
                  // ENCODING.ADC_i_T1
                  return 3;
                  break;
                }
                case 0x02:
                {
                  // ENCODING.MOV_i_T3
                  return 350;
                  break;
                }
                case 0x03:
                {
                  // ENCODING.SBFX_T1
                  return 540;
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
              if (d & 0x01)
              {
                // ENCODING.USAT_T1_LSL
                return 879;
              }
              else
              {
                // ENCODING.EOR_i_T1
                return 169;
              }
            }
            else
            {
              // the following switch contains 4 case.
              switch (d & 0x03)
              {
                case 0x00:
                {
                  // ENCODING.AND_i_T1
                  return 59;
                  break;
                }
                case 0x01:
                {
                  // conflicts:
                  // ENCODING.ADD_i_T3             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxxxxxxxxxxxxxx
                  // ENCODING.ADD_SP_i_T3          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxx1101xxxxxxxxxxxxxxxx
                  // Rn!=0b1101
                  if ((opcode & 0x000f0000) != 0x000d0000)
                  {
                    // ENCODING.ADD_i_T3
                    return 20;
                  }
                  else
                  {
                    // ENCODING.ADD_SP_i_T3
                    return 39;
                  }
                  break;
                }
                case 0x02:
                {
                  // conflicts:
                  // ENCODING.ADD_i_T4             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxxxxxxxxxxxxxxxxxxxxx
                  // ENCODING.ADD_SP_i_T4          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxx1101xxxxxxxxxxxxxxxx
                  // ENCODING.ADR_T3               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxx1111xxxxxxxxxxxxxxxx
                  // Rn!=0b11x1
                  if ((opcode & 0x000d0000) != 0x000d0000)
                  {
                    // ENCODING.ADD_i_T4
                    return 22;
                  }
                  else
                  {
                    if (c & 0x02)
                    {
                      // ENCODING.ADR_T3
                      return 56;
                    }
                    else
                    {
                      // ENCODING.ADD_SP_i_T4
                      return 41;
                    }
                  }
                  break;
                }
                case 0x03:
                {
                  // ENCODING.SSAT_T1_LSL
                  return 652;
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
  return 0;
};

