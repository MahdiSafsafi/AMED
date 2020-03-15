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
aarch32_lookup_t16(uint32_t opcode)
{
  unsigned char a = (opcode >> 0 ) & 0xff;
  unsigned char b = (opcode >> 8 ) & 0xff;
  unsigned char c = (opcode >> 16) & 0xff;
  unsigned char d = (opcode >> 24) & 0xff;
  
  // the following switch contains 8 case.
  switch (b & 0xe0)
  {
    case 0x00:
    {
      // conflicts:
      // ENCODING.ADD_i_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxxxxxxxx
      // ENCODING.ADD_r_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1100xxxxxxxxx
      // ENCODING.MOV_r_T2             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
      // ENCODING.SUB_i_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxxx
      // ENCODING.SUB_r_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1101xxxxxxxxx
      // op!=0b11
      if ((opcode & 0x00001800) != 0x00001800)
      {
        // ENCODING.MOV_r_T2
        return 356;
      }
      else
      {
        // the following switch contains 4 case.
        switch (b & 0x06)
        {
          case 0x00:
          {
            // ENCODING.ADD_r_T1
            return 27;
            break;
          }
          case 0x02:
          {
            // ENCODING.SUB_r_T1
            return 771;
            break;
          }
          case 0x04:
          {
            // ENCODING.ADD_i_T1
            return 18;
            break;
          }
          case 0x06:
          {
            // ENCODING.SUB_i_T1
            return 761;
            break;
          }
          default: break;
        }
      }
      break;
    }
    case 0x20:
    {
      // the following switch contains 4 case.
      switch (b & 0x18)
      {
        case 0x00:
        {
          // ENCODING.MOV_i_T1
          return 347;
          break;
        }
        case 0x08:
        {
          // ENCODING.CMP_i_T1
          return 123;
          break;
        }
        case 0x10:
        {
          // ENCODING.ADD_i_T2
          return 19;
          break;
        }
        case 0x18:
        {
          // ENCODING.SUB_i_T2
          return 762;
          break;
        }
        default: break;
      }
      break;
    }
    case 0x40:
    {
      // the following switch contains 4 case.
      switch (b & 0x18)
      {
        case 0x00:
        {
          // the following switch contains 8 case.
          switch (b & 0x07)
          {
            case 0x00:
            {
              // the following switch contains 4 case.
              switch (a & 0xc0)
              {
                case 0x00:
                {
                  // ENCODING.AND_r_T1
                  return 65;
                  break;
                }
                case 0x40:
                {
                  // ENCODING.EOR_r_T1
                  return 175;
                  break;
                }
                case 0x80:
                {
                  // ENCODING.MOV_rr_T1_LSL
                  return 364;
                  break;
                }
                case 0xc0:
                {
                  // ENCODING.MOV_rr_T1_LSR
                  return 365;
                  break;
                }
                default: break;
              }
              break;
            }
            case 0x01:
            {
              // the following switch contains 4 case.
              switch (a & 0xc0)
              {
                case 0x00:
                {
                  // ENCODING.MOV_rr_T1_ASR
                  return 363;
                  break;
                }
                case 0x40:
                {
                  // ENCODING.ADC_r_T1
                  return 9;
                  break;
                }
                case 0x80:
                {
                  // ENCODING.SBC_r_T1
                  return 532;
                  break;
                }
                case 0xc0:
                {
                  // ENCODING.MOV_rr_T1_ROR
                  return 366;
                  break;
                }
                default: break;
              }
              break;
            }
            case 0x02:
            {
              // the following switch contains 4 case.
              switch (a & 0xc0)
              {
                case 0x00:
                {
                  // ENCODING.TST_r_T1
                  return 823;
                  break;
                }
                case 0x40:
                {
                  // ENCODING.RSB_i_T1
                  return 495;
                  break;
                }
                case 0x80:
                {
                  // ENCODING.CMP_r_T1
                  return 127;
                  break;
                }
                case 0xc0:
                {
                  // ENCODING.CMN_r_T1
                  return 118;
                  break;
                }
                default: break;
              }
              break;
            }
            case 0x03:
            {
              // the following switch contains 4 case.
              switch (a & 0xc0)
              {
                case 0x00:
                {
                  // ENCODING.ORR_r_T1
                  return 420;
                  break;
                }
                case 0x40:
                {
                  // ENCODING.MUL_T1
                  return 386;
                  break;
                }
                case 0x80:
                {
                  // ENCODING.BIC_r_T1
                  return 89;
                  break;
                }
                case 0xc0:
                {
                  // ENCODING.MVN_r_T1
                  return 396;
                  break;
                }
                default: break;
              }
              break;
            }
            case 0x04:
            {
              // conflicts:
              // ENCODING.ADD_r_T2             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
              // ENCODING.ADD_SP_r_T1          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1101xxx
              // ENCODING.ADD_SP_r_T2          : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xxxx101
              // Rm!=0b1101
              if ((opcode & 0x00000078) != 0x00000068)
              {
                // DN:Rdn!=0b1101
                if ((opcode & 0x00000087) != 0x00000085)
                {
                  // ENCODING.ADD_r_T2
                  return 28;
                }
                else
                {
                  // ENCODING.ADD_SP_r_T2
                  return 47;
                }
              }
              else
              {
                // ENCODING.ADD_SP_r_T1
                return 46;
              }
              break;
            }
            case 0x05:
            {
              // ENCODING.CMP_r_T2
              return 128;
              break;
            }
            case 0x06:
            {
              // ENCODING.MOV_r_T1
              return 355;
              break;
            }
            case 0x07:
            {
              if (a & 0x80)
              {
                // ENCODING.BLX_r_T1
                return 103;
              }
              else
              {
                // ENCODING.BX_T1
                return 105;
              }
              break;
            }
            default: break;
          }
          break;
        }
        case 0x08:
        {
          // ENCODING.LDR_l_T1
          return 236;
          break;
        }
        case 0x10:
        {
          // the following switch contains 4 case.
          switch (b & 0x06)
          {
            case 0x00:
            {
              // ENCODING.STR_r_T1
              return 705;
              break;
            }
            case 0x02:
            {
              // ENCODING.STRH_r_T1
              return 751;
              break;
            }
            case 0x04:
            {
              // ENCODING.STRB_r_T1
              return 718;
              break;
            }
            case 0x06:
            {
              // ENCODING.LDRSB_r_T1
              return 310;
              break;
            }
            default: break;
          }
          break;
        }
        case 0x18:
        {
          // the following switch contains 4 case.
          switch (b & 0x06)
          {
            case 0x00:
            {
              // ENCODING.LDR_r_T1
              return 241;
              break;
            }
            case 0x02:
            {
              // ENCODING.LDRH_r_T1
              return 293;
              break;
            }
            case 0x04:
            {
              // ENCODING.LDRB_r_T1
              return 256;
              break;
            }
            case 0x06:
            {
              // ENCODING.LDRSH_r_T1
              return 327;
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
    case 0x60:
    {
      // the following switch contains 4 case.
      switch (b & 0x18)
      {
        case 0x00:
        {
          // ENCODING.STR_i_T1
          return 696;
          break;
        }
        case 0x08:
        {
          // ENCODING.LDR_i_T1
          return 229;
          break;
        }
        case 0x10:
        {
          // ENCODING.STRB_i_T1
          return 710;
          break;
        }
        case 0x18:
        {
          // ENCODING.LDRB_i_T1
          return 246;
          break;
        }
        default: break;
      }
      break;
    }
    case 0x80:
    {
      // the following switch contains 4 case.
      switch (b & 0x18)
      {
        case 0x00:
        {
          // ENCODING.STRH_i_T1
          return 743;
          break;
        }
        case 0x08:
        {
          // ENCODING.LDRH_i_T1
          return 283;
          break;
        }
        case 0x10:
        {
          // ENCODING.STR_i_T2
          return 697;
          break;
        }
        case 0x18:
        {
          // ENCODING.LDR_i_T2
          return 230;
          break;
        }
        default: break;
      }
      break;
    }
    case 0xa0:
    {
      // the following switch contains 4 case.
      switch (b & 0x18)
      {
        case 0x00:
        {
          // ENCODING.ADR_T1
          return 54;
          break;
        }
        case 0x08:
        {
          // ENCODING.ADD_SP_i_T1
          return 37;
          break;
        }
        case 0x10:
        {
          if (b & 0x04)
          {
            if (b & 0x02)
            {
              // the following switch contains 4 case.
              switch ((a & 0x70) - 16)
              {
                case 0x00:
                {
                  // ENCODING.SETPAN_T1
                  return 548;
                  break;
                }
                case 0x40:
                {
                  // ENCODING.SETEND_T1
                  return 546;
                  break;
                }
                case 0x50:
                {
                  // ENCODING.CPSIE_T1_AS
                  return 138;
                  break;
                }
                case 0x60:
                {
                  // ENCODING.CPSID_T1_AS
                  return 137;
                  break;
                }
                default: break;
              }
            }
            else
            {
              // ENCODING.PUSH_T1
              return 455;
            }
          }
          else
          {
            if (b & 0x01)
            {
              // ENCODING.CBZ_T1
              return 109;
            }
            else
            {
              if (a & 0x80)
              {
                if (b & 0x02)
                {
                  if (a & 0x40)
                  {
                    // ENCODING.UXTB_T1
                    return 895;
                  }
                  else
                  {
                    // ENCODING.UXTH_T1
                    return 900;
                  }
                }
                else
                {
                  // ENCODING.SUB_SP_i_T1
                  return 780;
                }
              }
              else
              {
                if (b & 0x02)
                {
                  if (a & 0x40)
                  {
                    // ENCODING.SXTB_T1
                    return 801;
                  }
                  else
                  {
                    // ENCODING.SXTH_T1
                    return 806;
                  }
                }
                else
                {
                  // ENCODING.ADD_SP_i_T2
                  return 38;
                }
              }
            }
          }
          break;
        }
        case 0x18:
        {
          if (b & 0x04)
          {
            if (b & 0x02)
            {
              if (b & 0x01)
              {
                // conflicts:
                // ENCODING.IT_T1                : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                // ENCODING.NOP_T1               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00000000
                // ENCODING.SEV_T1               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx01000000
                // ENCODING.SEVL_T1              : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx01010000
                // ENCODING.WFE_T1               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00100000
                // ENCODING.WFI_T1               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00110000
                // ENCODING.YIELD_T1             : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00010000
                // mask!=0b0000
                if ((opcode & 0x0000000f) != 0x00000000)
                {
                  // ENCODING.IT_T1
                  return 192;
                }
                else
                {
                  // the following switch contains 6 case.
                  switch (a & 0x70)
                  {
                    case 0x00:
                    {
                      // ENCODING.NOP_T1
                      return 404;
                      break;
                    }
                    case 0x10:
                    {
                      // ENCODING.YIELD_T1
                      return 909;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.WFE_T1
                      return 903;
                      break;
                    }
                    case 0x30:
                    {
                      // ENCODING.WFI_T1
                      return 906;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.SEV_T1
                      return 550;
                      break;
                    }
                    case 0x50:
                    {
                      // ENCODING.SEVL_T1
                      return 553;
                      break;
                    }
                    default: break;
                  }
                }
              }
              else
              {
                // ENCODING.BKPT_T1
                return 97;
              }
            }
            else
            {
              // ENCODING.POP_T1
              return 452;
            }
          }
          else
          {
            if (b & 0x01)
            {
              // ENCODING.CBNZ_T1
              return 108;
            }
            else
            {
              // the following switch contains 4 case.
              switch (a & 0xc0)
              {
                case 0x00:
                {
                  // ENCODING.REV_T1
                  return 479;
                  break;
                }
                case 0x40:
                {
                  // ENCODING.REV16_T1
                  return 482;
                  break;
                }
                case 0x80:
                {
                  // ENCODING.HLT_T1
                  return 187;
                  break;
                }
                case 0xc0:
                {
                  // ENCODING.REVSH_T1
                  return 485;
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
      break;
    }
    case 0xc0:
    {
      if (b & 0x10)
      {
        // conflicts:
        // ENCODING.B_T1                 : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
        // ENCODING.SVC_T1               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111xxxxxxxx
        // ENCODING.UDF_T1               : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1110xxxxxxxx
        // cond!=0b111x
        if ((opcode & 0x00000e00) != 0x00000e00)
        {
          // ENCODING.B_T1
          return 73;
        }
        else
        {
          if (b & 0x01)
          {
            // ENCODING.SVC_T1
            return 793;
          }
          else
          {
            // ENCODING.UDF_T1
            return 836;
          }
        }
      }
      else
      {
        if (b & 0x08)
        {
          // ENCODING.LDM_T1
          return 218;
        }
        else
        {
          // ENCODING.STM_T1
          return 686;
        }
      }
      break;
    }
    case 0xe0:
    {
      // ENCODING.B_T2
      return 74;
      break;
    }
    default: break;
  }
  return 0;
};

