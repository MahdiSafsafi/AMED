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
aarch64_lookup_a64(uint32_t opcode)
{
  unsigned char a = (opcode >> 0 ) & 0xff;
  unsigned char b = (opcode >> 8 ) & 0xff;
  unsigned char c = (opcode >> 16) & 0xff;
  unsigned char d = (opcode >> 24) & 0xff;
  
  // the following switch contains 8 case.
  switch (d & 0x1c)
  {
    case 0x00:
    {
      // ENCODING.UDF_only_perm_undef
      return 581;
      break;
    }
    case 0x04:
    {
      // the following switch contains 16 case.
      switch (d & 0xe1)
      {
        case 0x00:
        {
          if (b & 0x20)
          {
            if (b & 0x40)
            {
              if (b & 0x80)
              {
                if (c & 0x20)
                {
                  if (b & 0x04)
                  {
                    if (b & 0x08)
                    {
                      // the following switch contains 8 case.
                      switch (c & 0xd0)
                      {
                        case 0x00:
                        {
                          // ENCODING.uqdecb_r_rs_uw
                          return 2712;
                          break;
                        }
                        case 0x10:
                        {
                          // ENCODING.uqdecb_r_rs_x
                          return 2713;
                          break;
                        }
                        case 0x40:
                        {
                          // ENCODING.uqdech_r_rs_uw
                          return 2717;
                          break;
                        }
                        case 0x50:
                        {
                          // ENCODING.uqdech_r_rs_x
                          return 2718;
                          break;
                        }
                        case 0x80:
                        {
                          // ENCODING.uqdecw_r_rs_uw
                          return 2723;
                          break;
                        }
                        case 0x90:
                        {
                          // ENCODING.uqdecw_r_rs_x
                          return 2724;
                          break;
                        }
                        case 0xc0:
                        {
                          // ENCODING.uqdecd_r_rs_uw
                          return 2714;
                          break;
                        }
                        case 0xd0:
                        {
                          // ENCODING.uqdecd_r_rs_x
                          return 2715;
                          break;
                        }
                        default: break;
                      }
                    }
                    else
                    {
                      if (b & 0x10)
                      {
                        // the following switch contains 8 case.
                        switch (c & 0xd0)
                        {
                          case 0x00:
                          {
                            // ENCODING.uqincb_r_rs_uw
                            return 2726;
                            break;
                          }
                          case 0x10:
                          {
                            // ENCODING.uqincb_r_rs_x
                            return 2727;
                            break;
                          }
                          case 0x40:
                          {
                            // ENCODING.uqinch_r_rs_uw
                            return 2731;
                            break;
                          }
                          case 0x50:
                          {
                            // ENCODING.uqinch_r_rs_x
                            return 2732;
                            break;
                          }
                          case 0x80:
                          {
                            // ENCODING.uqincw_r_rs_uw
                            return 2737;
                            break;
                          }
                          case 0x90:
                          {
                            // ENCODING.uqincw_r_rs_x
                            return 2738;
                            break;
                          }
                          case 0xc0:
                          {
                            // ENCODING.uqincd_r_rs_uw
                            return 2728;
                            break;
                          }
                          case 0xd0:
                          {
                            // ENCODING.uqincd_r_rs_x
                            return 2729;
                            break;
                          }
                          default: break;
                        }
                      }
                      else
                      {
                        // the following switch contains 4 case.
                        switch (c & 0xc0)
                        {
                          case 0x00:
                          {
                            // ENCODING.decb_r_rs_
                            return 1871;
                            break;
                          }
                          case 0x40:
                          {
                            // ENCODING.dech_r_rs_
                            return 1873;
                            break;
                          }
                          case 0x80:
                          {
                            // ENCODING.decw_r_rs_
                            return 1874;
                            break;
                          }
                          case 0xc0:
                          {
                            // ENCODING.decd_r_rs_
                            return 1872;
                            break;
                          }
                          default: break;
                        }
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x08)
                    {
                      // the following switch contains 8 case.
                      switch (c & 0xd0)
                      {
                        case 0x00:
                        {
                          // ENCODING.sqdecb_r_rs_sx
                          return 2450;
                          break;
                        }
                        case 0x10:
                        {
                          // ENCODING.sqdecb_r_rs_x
                          return 2451;
                          break;
                        }
                        case 0x40:
                        {
                          // ENCODING.sqdech_r_rs_sx
                          return 2455;
                          break;
                        }
                        case 0x50:
                        {
                          // ENCODING.sqdech_r_rs_x
                          return 2456;
                          break;
                        }
                        case 0x80:
                        {
                          // ENCODING.sqdecw_r_rs_sx
                          return 2461;
                          break;
                        }
                        case 0x90:
                        {
                          // ENCODING.sqdecw_r_rs_x
                          return 2462;
                          break;
                        }
                        case 0xc0:
                        {
                          // ENCODING.sqdecd_r_rs_sx
                          return 2452;
                          break;
                        }
                        case 0xd0:
                        {
                          // ENCODING.sqdecd_r_rs_x
                          return 2453;
                          break;
                        }
                        default: break;
                      }
                    }
                    else
                    {
                      if (b & 0x10)
                      {
                        // the following switch contains 8 case.
                        switch (c & 0xd0)
                        {
                          case 0x00:
                          {
                            // ENCODING.sqincb_r_rs_sx
                            return 2488;
                            break;
                          }
                          case 0x10:
                          {
                            // ENCODING.sqincb_r_rs_x
                            return 2489;
                            break;
                          }
                          case 0x40:
                          {
                            // ENCODING.sqinch_r_rs_sx
                            return 2493;
                            break;
                          }
                          case 0x50:
                          {
                            // ENCODING.sqinch_r_rs_x
                            return 2494;
                            break;
                          }
                          case 0x80:
                          {
                            // ENCODING.sqincw_r_rs_sx
                            return 2499;
                            break;
                          }
                          case 0x90:
                          {
                            // ENCODING.sqincw_r_rs_x
                            return 2500;
                            break;
                          }
                          case 0xc0:
                          {
                            // ENCODING.sqincd_r_rs_sx
                            return 2490;
                            break;
                          }
                          case 0xd0:
                          {
                            // ENCODING.sqincd_r_rs_x
                            return 2491;
                            break;
                          }
                          default: break;
                        }
                      }
                      else
                      {
                        // the following switch contains 8 case.
                        switch (c & 0xd0)
                        {
                          case 0x00:
                          {
                            // ENCODING.cntb_r_s_
                            return 1859;
                            break;
                          }
                          case 0x10:
                          {
                            // ENCODING.incb_r_rs_
                            return 2024;
                            break;
                          }
                          case 0x40:
                          {
                            // ENCODING.cnth_r_s_
                            return 1861;
                            break;
                          }
                          case 0x50:
                          {
                            // ENCODING.inch_r_rs_
                            return 2026;
                            break;
                          }
                          case 0x80:
                          {
                            // ENCODING.cntw_r_s_
                            return 1862;
                            break;
                          }
                          case 0x90:
                          {
                            // ENCODING.incw_r_rs_
                            return 2027;
                            break;
                          }
                          case 0xc0:
                          {
                            // ENCODING.cntd_r_s_
                            return 1860;
                            break;
                          }
                          case 0xd0:
                          {
                            // ENCODING.incd_r_rs_
                            return 2025;
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
                  // ENCODING.msb_z_p_zzz_
                  return 2297;
                }
              }
              else
              {
                if (c & 0x20)
                {
                  // the following switch contains 6 case.
                  switch (b & 0x1c)
                  {
                    case 0x00:
                    {
                      // ENCODING.mul_z_zz_
                      return 2300;
                      break;
                    }
                    case 0x04:
                    {
                      // ENCODING.pmul_z_zz_
                      return 2322;
                      break;
                    }
                    case 0x08:
                    {
                      // ENCODING.smulh_z_zz_
                      return 2436;
                      break;
                    }
                    case 0x0c:
                    {
                      // ENCODING.umulh_z_zz_
                      return 2702;
                      break;
                    }
                    case 0x10:
                    {
                      // ENCODING.sqdmulh_z_zz_
                      return 2478;
                      break;
                    }
                    case 0x14:
                    {
                      // ENCODING.sqrdmulh_z_zz_
                      return 2514;
                      break;
                    }
                    default: break;
                  }
                }
                else
                {
                  // ENCODING.mls_z_p_zzz_
                  return 2291;
                }
              }
            }
            else
            {
              if (b & 0x80)
              {
                if (c & 0x20)
                {
                  if (b & 0x10)
                  {
                    // the following switch contains 3 case.
                    switch (b & 0x0c)
                    {
                      case 0x00:
                      {
                        // ENCODING.ftssel_z_zz_
                        return 2021;
                        break;
                      }
                      case 0x08:
                      {
                        // ENCODING.fexpa_z_z_
                        return 1950;
                        break;
                      }
                      case 0x0c:
                      {
                        // ENCODING.movprfx_z_z_
                        return 2296;
                        break;
                      }
                      default: break;
                    }
                  }
                  else
                  {
                    if (c & 0x80)
                    {
                      // ENCODING.adr_z_az_sd_same_scaled
                      return 1766;
                    }
                    else
                    {
                      if (c & 0x40)
                      {
                        // ENCODING.adr_z_az_d_u32_scaled
                        return 1768;
                      }
                      else
                      {
                        // ENCODING.adr_z_az_d_s32_scaled
                        return 1767;
                      }
                    }
                  }
                }
                else
                {
                  // the following switch contains 15 case.
                  switch (c & 0x0f)
                  {
                    case 0x00:
                    {
                      // ENCODING.sxtb_z_p_z_
                      return 2641;
                      break;
                    }
                    case 0x01:
                    {
                      // ENCODING.uxtb_z_p_z_
                      return 2775;
                      break;
                    }
                    case 0x02:
                    {
                      // ENCODING.sxth_z_p_z_
                      return 2642;
                      break;
                    }
                    case 0x03:
                    {
                      // ENCODING.uxth_z_p_z_
                      return 2776;
                      break;
                    }
                    case 0x04:
                    {
                      // ENCODING.sxtw_z_p_z_
                      return 2643;
                      break;
                    }
                    case 0x05:
                    {
                      // ENCODING.uxtw_z_p_z_
                      return 2777;
                      break;
                    }
                    case 0x06:
                    {
                      // ENCODING.abs_z_p_z_
                      return 1755;
                      break;
                    }
                    case 0x07:
                    {
                      // ENCODING.neg_z_p_z_
                      return 2307;
                      break;
                    }
                    case 0x08:
                    {
                      // ENCODING.cls_z_p_z_
                      return 1826;
                      break;
                    }
                    case 0x09:
                    {
                      // ENCODING.clz_z_p_z_
                      return 1827;
                      break;
                    }
                    case 0x0a:
                    {
                      // ENCODING.cnt_z_p_z_
                      return 1858;
                      break;
                    }
                    case 0x0b:
                    {
                      // ENCODING.cnot_z_p_z_
                      return 1857;
                      break;
                    }
                    case 0x0c:
                    {
                      // ENCODING.fabs_z_p_z_
                      return 1896;
                      break;
                    }
                    case 0x0d:
                    {
                      // ENCODING.fneg_z_p_z_
                      return 1995;
                      break;
                    }
                    case 0x0e:
                    {
                      // ENCODING.not_z_p_z_
                      return 2311;
                      break;
                    }
                    default: break;
                  }
                }
              }
              else
              {
                if (c & 0x20)
                {
                  // the following switch contains 4 case.
                  switch (b & 0x0c)
                  {
                    case 0x00:
                    {
                      // the following switch contains 4 case.
                      switch (c & 0xc0)
                      {
                        case 0x00:
                        {
                          // ENCODING.and_z_zz_
                          return 1777;
                          break;
                        }
                        case 0x40:
                        {
                          // ENCODING.orr_z_zz_
                          return 2318;
                          break;
                        }
                        case 0x80:
                        {
                          // ENCODING.eor_z_zz_
                          return 1889;
                          break;
                        }
                        case 0xc0:
                        {
                          // ENCODING.bic_z_zz_
                          return 1802;
                          break;
                        }
                        default: break;
                      }
                      break;
                    }
                    case 0x04:
                    {
                      // ENCODING.xar_z_zzi_
                      return 2795;
                      break;
                    }
                    case 0x08:
                    {
                      if (c & 0x40)
                      {
                        // ENCODING.bcax_z_zzz_
                        return 1786;
                      }
                      else
                      {
                        // ENCODING.eor3_z_zzz_
                        return 1884;
                      }
                      break;
                    }
                    case 0x0c:
                    {
                      // the following switch contains 4 case.
                      switch (c & 0xc0)
                      {
                        case 0x00:
                        {
                          // ENCODING.bsl_z_zzz_
                          return 1815;
                          break;
                        }
                        case 0x40:
                        {
                          // ENCODING.bsl1n_z_zzz_
                          return 1813;
                          break;
                        }
                        case 0x80:
                        {
                          // ENCODING.bsl2n_z_zzz_
                          return 1814;
                          break;
                        }
                        case 0xc0:
                        {
                          // ENCODING.nbsl_z_zzz_
                          return 2306;
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
                  // the following switch contains 6 case.
                  switch (c & 0x1a)
                  {
                    case 0x00:
                    {
                      if (c & 0x01)
                      {
                        // ENCODING.uaddv_r_p_z_
                        return 2662;
                      }
                      else
                      {
                        // ENCODING.saddv_r_p_z_
                        return 2386;
                      }
                      break;
                    }
                    case 0x08:
                    {
                      if (c & 0x01)
                      {
                        // ENCODING.umaxv_r_p_z_
                        return 2683;
                      }
                      else
                      {
                        // ENCODING.smaxv_r_p_z_
                        return 2417;
                      }
                      break;
                    }
                    case 0x0a:
                    {
                      if (c & 0x01)
                      {
                        // ENCODING.uminv_r_p_z_
                        return 2687;
                      }
                      else
                      {
                        // ENCODING.sminv_r_p_z_
                        return 2421;
                      }
                      break;
                    }
                    case 0x10:
                    {
                      // ENCODING.movprfx_z_p_z_
                      return 2295;
                      break;
                    }
                    case 0x18:
                    {
                      if (c & 0x01)
                      {
                        // ENCODING.eorv_r_p_z_
                        return 1892;
                      }
                      else
                      {
                        // ENCODING.orv_r_p_z_
                        return 2319;
                      }
                      break;
                    }
                    case 0x1a:
                    {
                      // ENCODING.andv_r_p_z_
                      return 1778;
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
            if (b & 0x40)
            {
              if (b & 0x80)
              {
                if (c & 0x20)
                {
                  if (b & 0x04)
                  {
                    if (b & 0x08)
                    {
                      // the following switch contains 3 case.
                      switch ((c & 0xc0) - 64)
                      {
                        case 0x00:
                        {
                          // ENCODING.uqdech_z_zs_
                          return 2719;
                          break;
                        }
                        case 0x40:
                        {
                          // ENCODING.uqdecw_z_zs_
                          return 2725;
                          break;
                        }
                        case 0x80:
                        {
                          // ENCODING.uqdecd_z_zs_
                          return 2716;
                          break;
                        }
                        default: break;
                      }
                    }
                    else
                    {
                      // the following switch contains 6 case.
                      switch ((c & 0xd0) - 64)
                      {
                        case 0x00:
                        {
                          // ENCODING.uqinch_z_zs_
                          return 2733;
                          break;
                        }
                        case 0x10:
                        {
                          // ENCODING.dech_z_zs_
                          return 1876;
                          break;
                        }
                        case 0x40:
                        {
                          // ENCODING.uqincw_z_zs_
                          return 2739;
                          break;
                        }
                        case 0x50:
                        {
                          // ENCODING.decw_z_zs_
                          return 1877;
                          break;
                        }
                        case 0x80:
                        {
                          // ENCODING.uqincd_z_zs_
                          return 2730;
                          break;
                        }
                        case 0x90:
                        {
                          // ENCODING.decd_z_zs_
                          return 1875;
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
                      // the following switch contains 3 case.
                      switch ((c & 0xc0) - 64)
                      {
                        case 0x00:
                        {
                          // ENCODING.sqdech_z_zs_
                          return 2457;
                          break;
                        }
                        case 0x40:
                        {
                          // ENCODING.sqdecw_z_zs_
                          return 2463;
                          break;
                        }
                        case 0x80:
                        {
                          // ENCODING.sqdecd_z_zs_
                          return 2454;
                          break;
                        }
                        default: break;
                      }
                    }
                    else
                    {
                      // the following switch contains 6 case.
                      switch ((c & 0xd0) - 64)
                      {
                        case 0x00:
                        {
                          // ENCODING.sqinch_z_zs_
                          return 2495;
                          break;
                        }
                        case 0x10:
                        {
                          // ENCODING.inch_z_zs_
                          return 2029;
                          break;
                        }
                        case 0x40:
                        {
                          // ENCODING.sqincw_z_zs_
                          return 2501;
                          break;
                        }
                        case 0x50:
                        {
                          // ENCODING.incw_z_zs_
                          return 2030;
                          break;
                        }
                        case 0x80:
                        {
                          // ENCODING.sqincd_z_zs_
                          return 2492;
                          break;
                        }
                        case 0x90:
                        {
                          // ENCODING.incd_z_zs_
                          return 2028;
                          break;
                        }
                        default: break;
                      }
                    }
                  }
                }
                else
                {
                  // ENCODING.mad_z_p_zzz_
                  return 2285;
                }
              }
              else
              {
                if (c & 0x20)
                {
                  // the following switch contains 3 case.
                  switch (b & 0x18)
                  {
                    case 0x00:
                    {
                      if (b & 0x04)
                      {
                        // ENCODING.index_z_ri_
                        return 2035;
                      }
                      else
                      {
                        // ENCODING.index_z_ii_
                        return 2033;
                      }
                      break;
                    }
                    case 0x08:
                    {
                      if (b & 0x04)
                      {
                        // ENCODING.index_z_rr_
                        return 2036;
                      }
                      else
                      {
                        // ENCODING.index_z_ir_
                        return 2034;
                      }
                      break;
                    }
                    case 0x10:
                    {
                      // the following switch contains 3 case.
                      switch (c & 0xc0)
                      {
                        case 0x00:
                        {
                          // ENCODING.addvl_r_ri_
                          return 1765;
                          break;
                        }
                        case 0x40:
                        {
                          // ENCODING.addpl_r_ri_
                          return 1764;
                          break;
                        }
                        case 0x80:
                        {
                          // ENCODING.rdvl_r_i_
                          return 2366;
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
                  // ENCODING.mla_z_p_zzz_
                  return 2287;
                }
              }
            }
            else
            {
              if (b & 0x80)
              {
                if (c & 0x20)
                {
                  // the following switch contains 6 case.
                  switch (b & 0x1c)
                  {
                    case 0x00:
                    {
                      // ENCODING.asr_z_zw_
                      return 1783;
                      break;
                    }
                    case 0x04:
                    {
                      // ENCODING.lsr_z_zw_
                      return 2283;
                      break;
                    }
                    case 0x0c:
                    {
                      // ENCODING.lsl_z_zw_
                      return 2277;
                      break;
                    }
                    case 0x10:
                    {
                      // ENCODING.asr_z_zi_
                      return 1782;
                      break;
                    }
                    case 0x14:
                    {
                      // ENCODING.lsr_z_zi_
                      return 2282;
                      break;
                    }
                    case 0x1c:
                    {
                      // ENCODING.lsl_z_zi_
                      return 2276;
                      break;
                    }
                    default: break;
                  }
                }
                else
                {
                  // the following switch contains 18 case.
                  switch (c & 0x1f)
                  {
                    case 0x00:
                    {
                      // ENCODING.asr_z_p_zi_
                      return 1779;
                      break;
                    }
                    case 0x01:
                    {
                      // ENCODING.lsr_z_p_zi_
                      return 2279;
                      break;
                    }
                    case 0x03:
                    {
                      // ENCODING.lsl_z_p_zi_
                      return 2273;
                      break;
                    }
                    case 0x04:
                    {
                      // ENCODING.asrd_z_p_zi_
                      return 1784;
                      break;
                    }
                    case 0x06:
                    {
                      // ENCODING.sqshl_z_p_zi_
                      return 2524;
                      break;
                    }
                    case 0x07:
                    {
                      // ENCODING.uqshl_z_p_zi_
                      return 2744;
                      break;
                    }
                    case 0x0c:
                    {
                      // ENCODING.srshr_z_p_zi_
                      return 2544;
                      break;
                    }
                    case 0x0d:
                    {
                      // ENCODING.urshr_z_p_zi_
                      return 2759;
                      break;
                    }
                    case 0x0f:
                    {
                      // ENCODING.sqshlu_z_p_zi_
                      return 2527;
                      break;
                    }
                    case 0x10:
                    {
                      // ENCODING.asr_z_p_zz_
                      return 1781;
                      break;
                    }
                    case 0x11:
                    {
                      // ENCODING.lsr_z_p_zz_
                      return 2281;
                      break;
                    }
                    case 0x13:
                    {
                      // ENCODING.lsl_z_p_zz_
                      return 2275;
                      break;
                    }
                    case 0x14:
                    {
                      // ENCODING.asrr_z_p_zz_
                      return 1785;
                      break;
                    }
                    case 0x15:
                    {
                      // ENCODING.lsrr_z_p_zz_
                      return 2284;
                      break;
                    }
                    case 0x17:
                    {
                      // ENCODING.lslr_z_p_zz_
                      return 2278;
                      break;
                    }
                    case 0x18:
                    {
                      // ENCODING.asr_z_p_zw_
                      return 1780;
                      break;
                    }
                    case 0x19:
                    {
                      // ENCODING.lsr_z_p_zw_
                      return 2280;
                      break;
                    }
                    case 0x1b:
                    {
                      // ENCODING.lsl_z_p_zw_
                      return 2274;
                      break;
                    }
                    default: break;
                  }
                }
              }
              else
              {
                if (c & 0x20)
                {
                  // the following switch contains 6 case.
                  switch (b & 0x1c)
                  {
                    case 0x00:
                    {
                      // ENCODING.add_z_zz_
                      return 1760;
                      break;
                    }
                    case 0x04:
                    {
                      // ENCODING.sub_z_zz_
                      return 2632;
                      break;
                    }
                    case 0x10:
                    {
                      // ENCODING.sqadd_z_zz_
                      return 2448;
                      break;
                    }
                    case 0x14:
                    {
                      // ENCODING.uqadd_z_zz_
                      return 2711;
                      break;
                    }
                    case 0x18:
                    {
                      // ENCODING.sqsub_z_zz_
                      return 2534;
                      break;
                    }
                    case 0x1c:
                    {
                      // ENCODING.uqsub_z_zz_
                      return 2751;
                      break;
                    }
                    default: break;
                  }
                }
                else
                {
                  // the following switch contains 20 case.
                  switch (c & 0x1f)
                  {
                    case 0x00:
                    {
                      // ENCODING.add_z_p_zz_
                      return 1758;
                      break;
                    }
                    case 0x01:
                    {
                      // ENCODING.sub_z_p_zz_
                      return 2630;
                      break;
                    }
                    case 0x03:
                    {
                      // ENCODING.subr_z_p_zz_
                      return 2635;
                      break;
                    }
                    case 0x08:
                    {
                      // ENCODING.smax_z_p_zz_
                      return 2414;
                      break;
                    }
                    case 0x09:
                    {
                      // ENCODING.umax_z_p_zz_
                      return 2680;
                      break;
                    }
                    case 0x0a:
                    {
                      // ENCODING.smin_z_p_zz_
                      return 2418;
                      break;
                    }
                    case 0x0b:
                    {
                      // ENCODING.umin_z_p_zz_
                      return 2684;
                      break;
                    }
                    case 0x0c:
                    {
                      // ENCODING.sabd_z_p_zz_
                      return 2379;
                      break;
                    }
                    case 0x0d:
                    {
                      // ENCODING.uabd_z_p_zz_
                      return 2656;
                      break;
                    }
                    case 0x10:
                    {
                      // ENCODING.mul_z_p_zz_
                      return 2298;
                      break;
                    }
                    case 0x12:
                    {
                      // ENCODING.smulh_z_p_zz_
                      return 2435;
                      break;
                    }
                    case 0x13:
                    {
                      // ENCODING.umulh_z_p_zz_
                      return 2701;
                      break;
                    }
                    case 0x14:
                    {
                      // ENCODING.sdiv_z_p_zz_
                      return 2398;
                      break;
                    }
                    case 0x15:
                    {
                      // ENCODING.udiv_z_p_zz_
                      return 2672;
                      break;
                    }
                    case 0x16:
                    {
                      // ENCODING.sdivr_z_p_zz_
                      return 2399;
                      break;
                    }
                    case 0x17:
                    {
                      // ENCODING.udivr_z_p_zz_
                      return 2673;
                      break;
                    }
                    case 0x18:
                    {
                      // ENCODING.orr_z_p_zz_
                      return 2316;
                      break;
                    }
                    case 0x19:
                    {
                      // ENCODING.eor_z_p_zz_
                      return 1887;
                      break;
                    }
                    case 0x1a:
                    {
                      // ENCODING.and_z_p_zz_
                      return 1775;
                      break;
                    }
                    case 0x1b:
                    {
                      // ENCODING.bic_z_p_zz_
                      return 1801;
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
        case 0x01:
        {
          if (c & 0x20)
          {
            // the following switch contains 4 case.
            switch (b & 0xc0)
            {
              case 0x00:
              {
                if (b & 0x20)
                {
                  // the following switch contains 5 case.
                  switch (b & 0x1c)
                  {
                    case 0x00:
                    {
                      // ENCODING.dup_z_zi_
                      return 1882;
                      break;
                    }
                    case 0x08:
                    {
                      // ENCODING.tbl_z_zz_2
                      return 2645;
                      break;
                    }
                    case 0x0c:
                    {
                      // ENCODING.tbx_z_zz_
                      return 2646;
                      break;
                    }
                    case 0x10:
                    {
                      // ENCODING.tbl_z_zz_1
                      return 2644;
                      break;
                    }
                    case 0x18:
                    {
                      // the following switch contains 8 case.
                      switch (c & 0x1f)
                      {
                        case 0x00:
                        {
                          // ENCODING.dup_z_r_
                          return 1881;
                          break;
                        }
                        case 0x04:
                        {
                          // ENCODING.insr_z_r_
                          return 2037;
                          break;
                        }
                        case 0x10:
                        {
                          // ENCODING.sunpklo_z_z_
                          return 2639;
                          break;
                        }
                        case 0x11:
                        {
                          // ENCODING.sunpkhi_z_z_
                          return 2638;
                          break;
                        }
                        case 0x12:
                        {
                          // ENCODING.uunpklo_z_z_
                          return 2774;
                          break;
                        }
                        case 0x13:
                        {
                          // ENCODING.uunpkhi_z_z_
                          return 2773;
                          break;
                        }
                        case 0x14:
                        {
                          // ENCODING.insr_z_v_
                          return 2038;
                          break;
                        }
                        case 0x18:
                        {
                          // ENCODING.rev_z_z_
                          return 2368;
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
                  switch (c & 0xc0)
                  {
                    case 0x00:
                    {
                      // ENCODING.ext_z_zi_des
                      return 1894;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.ext_z_zi_con
                      return 1893;
                      break;
                    }
                    case 0x80:
                    {
                      // the following switch contains 6 case.
                      switch (b & 0x1c)
                      {
                        case 0x00:
                        {
                          // ENCODING.zip1_z_zz_q
                          return 2801;
                          break;
                        }
                        case 0x04:
                        {
                          // ENCODING.zip2_z_zz_q
                          return 2799;
                          break;
                        }
                        case 0x08:
                        {
                          // ENCODING.uzp1_z_zz_q
                          return 2781;
                          break;
                        }
                        case 0x0c:
                        {
                          // ENCODING.uzp2_z_zz_q
                          return 2783;
                          break;
                        }
                        case 0x18:
                        {
                          // ENCODING.trn1_z_zz_q
                          return 2650;
                          break;
                        }
                        case 0x1c:
                        {
                          // ENCODING.trn2_z_zz_q
                          return 2652;
                          break;
                        }
                        default: break;
                      }
                      break;
                    }
                    default: break;
                  }
                }
                break;
              }
              case 0x40:
              {
                // the following switch contains 12 case.
                switch (b & 0x3c)
                {
                  case 0x00:
                  {
                    if (c & 0x10)
                    {
                      // the following switch contains 3 case.
                      switch (c & 0x05)
                      {
                        case 0x00:
                        {
                          // ENCODING.punpklo_p_p_
                          return 2358;
                          break;
                        }
                        case 0x01:
                        {
                          // ENCODING.punpkhi_p_p_
                          return 2357;
                          break;
                        }
                        case 0x04:
                        {
                          // ENCODING.rev_p_p_
                          return 2367;
                          break;
                        }
                        default: break;
                      }
                    }
                    else
                    {
                      // ENCODING.zip1_p_pp_
                      return 2797;
                    }
                    break;
                  }
                  case 0x04:
                  {
                    // ENCODING.zip2_p_pp_
                    return 2796;
                    break;
                  }
                  case 0x08:
                  {
                    // ENCODING.uzp1_p_pp_
                    return 2778;
                    break;
                  }
                  case 0x0c:
                  {
                    // ENCODING.uzp2_p_pp_
                    return 2779;
                    break;
                  }
                  case 0x10:
                  {
                    // ENCODING.trn1_p_pp_
                    return 2647;
                    break;
                  }
                  case 0x14:
                  {
                    // ENCODING.trn2_p_pp_
                    return 2648;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.zip1_z_zz_
                    return 2800;
                    break;
                  }
                  case 0x24:
                  {
                    // ENCODING.zip2_z_zz_
                    return 2798;
                    break;
                  }
                  case 0x28:
                  {
                    // ENCODING.uzp1_z_zz_
                    return 2780;
                    break;
                  }
                  case 0x2c:
                  {
                    // ENCODING.uzp2_z_zz_
                    return 2782;
                    break;
                  }
                  case 0x30:
                  {
                    // ENCODING.trn1_z_zz_
                    return 2649;
                    break;
                  }
                  case 0x34:
                  {
                    // ENCODING.trn2_z_zz_
                    return 2651;
                    break;
                  }
                  default: break;
                }
                break;
              }
              case 0x80:
              {
                if (b & 0x20)
                {
                  // the following switch contains 5 case.
                  switch (c & 0x19)
                  {
                    case 0x00:
                    {
                      // ENCODING.lasta_r_p_z_
                      return 2039;
                      break;
                    }
                    case 0x01:
                    {
                      // ENCODING.lastb_r_p_z_
                      return 2041;
                      break;
                    }
                    case 0x08:
                    {
                      // ENCODING.cpy_z_p_r_
                      return 1867;
                      break;
                    }
                    case 0x10:
                    {
                      // ENCODING.clasta_r_p_z_
                      return 1820;
                      break;
                    }
                    case 0x11:
                    {
                      // ENCODING.clastb_r_p_z_
                      return 1823;
                      break;
                    }
                    default: break;
                  }
                }
                else
                {
                  // the following switch contains 14 case.
                  switch (c & 0x0f)
                  {
                    case 0x00:
                    {
                      // ENCODING.cpy_z_p_v_
                      return 1868;
                      break;
                    }
                    case 0x01:
                    {
                      // ENCODING.compact_z_p_z_
                      return 1864;
                      break;
                    }
                    case 0x02:
                    {
                      // ENCODING.lasta_v_p_z_
                      return 2040;
                      break;
                    }
                    case 0x03:
                    {
                      // ENCODING.lastb_v_p_z_
                      return 2042;
                      break;
                    }
                    case 0x04:
                    {
                      // ENCODING.revb_z_z_
                      return 2369;
                      break;
                    }
                    case 0x05:
                    {
                      // ENCODING.revh_z_z_
                      return 2370;
                      break;
                    }
                    case 0x06:
                    {
                      // ENCODING.revw_z_z_
                      return 2371;
                      break;
                    }
                    case 0x07:
                    {
                      // ENCODING.rbit_z_p_z_
                      return 2362;
                      break;
                    }
                    case 0x08:
                    {
                      // ENCODING.clasta_z_p_zz_
                      return 1822;
                      break;
                    }
                    case 0x09:
                    {
                      // ENCODING.clastb_z_p_zz_
                      return 1825;
                      break;
                    }
                    case 0x0a:
                    {
                      // ENCODING.clasta_v_p_z_
                      return 1821;
                      break;
                    }
                    case 0x0b:
                    {
                      // ENCODING.clastb_v_p_z_
                      return 1824;
                      break;
                    }
                    case 0x0c:
                    {
                      // ENCODING.splice_z_p_zz_des
                      return 2444;
                      break;
                    }
                    case 0x0d:
                    {
                      // ENCODING.splice_z_p_zz_con
                      return 2443;
                      break;
                    }
                    default: break;
                  }
                }
                break;
              }
              case 0xc0:
              {
                // ENCODING.sel_z_p_zz_
                return 2404;
                break;
              }
              default: break;
            }
          }
          else
          {
            if (c & 0x10)
            {
              // the following switch contains 3 case.
              switch (b & 0xc0)
              {
                case 0x00:
                {
                  // ENCODING.cpy_z_o_i_
                  return 1865;
                  break;
                }
                case 0x40:
                {
                  // ENCODING.cpy_z_p_i_
                  return 1866;
                  break;
                }
                case 0xc0:
                {
                  // ENCODING.fcpy_z_p_i_
                  return 1920;
                  break;
                }
                default: break;
              }
            }
            else
            {
              // the following switch contains 4 case.
              switch (c & 0xc0)
              {
                case 0x00:
                {
                  // ENCODING.orr_z_zi_
                  return 2317;
                  break;
                }
                case 0x40:
                {
                  // ENCODING.eor_z_zi_
                  return 1888;
                  break;
                }
                case 0x80:
                {
                  // ENCODING.and_z_zi_
                  return 1776;
                  break;
                }
                case 0xc0:
                {
                  // ENCODING.dupm_z_i_
                  return 1883;
                  break;
                }
                default: break;
              }
            }
          }
          break;
        }
        case 0x20:
        {
          if (a & 0x10)
          {
            if (b & 0x20)
            {
              if (c & 0x20)
              {
                // ENCODING.cmpls_p_p_zi_
                return 1839;
              }
              else
              {
                // the following switch contains 4 case.
                switch (b & 0xc0)
                {
                  case 0x00:
                  {
                    // ENCODING.cmpne_p_p_zw_
                    return 1850;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.cmple_p_p_zw_
                    return 1847;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.cmpne_p_p_zz_
                    return 1856;
                    break;
                  }
                  case 0xc0:
                  {
                    // ENCODING.cmpls_p_p_zw_
                    return 1849;
                    break;
                  }
                  default: break;
                }
              }
            }
            else
            {
              if (c & 0x20)
              {
                // ENCODING.cmphi_p_p_zi_
                return 1834;
              }
              else
              {
                // the following switch contains 4 case.
                switch (b & 0xc0)
                {
                  case 0x00:
                  {
                    // ENCODING.cmphi_p_p_zz_
                    return 1854;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.cmpgt_p_p_zw_
                    return 1842;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.cmpgt_p_p_zz_
                    return 1852;
                    break;
                  }
                  case 0xc0:
                  {
                    // ENCODING.cmphi_p_p_zw_
                    return 1844;
                    break;
                  }
                  default: break;
                }
              }
            }
          }
          else
          {
            if (b & 0x20)
            {
              if (c & 0x20)
              {
                // ENCODING.cmplo_p_p_zi_
                return 1838;
              }
              else
              {
                // the following switch contains 4 case.
                switch (b & 0xc0)
                {
                  case 0x00:
                  {
                    // ENCODING.cmpeq_p_p_zw_
                    return 1841;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.cmplt_p_p_zw_
                    return 1846;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.cmpeq_p_p_zz_
                    return 1851;
                    break;
                  }
                  case 0xc0:
                  {
                    // ENCODING.cmplo_p_p_zw_
                    return 1848;
                    break;
                  }
                  default: break;
                }
              }
            }
            else
            {
              if (c & 0x20)
              {
                // ENCODING.cmphs_p_p_zi_
                return 1835;
              }
              else
              {
                // the following switch contains 4 case.
                switch (b & 0xc0)
                {
                  case 0x00:
                  {
                    // ENCODING.cmphs_p_p_zz_
                    return 1855;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.cmpge_p_p_zw_
                    return 1843;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.cmpge_p_p_zz_
                    return 1853;
                    break;
                  }
                  case 0xc0:
                  {
                    // ENCODING.cmphs_p_p_zw_
                    return 1845;
                    break;
                  }
                  default: break;
                }
              }
            }
          }
          break;
        }
        case 0x21:
        {
          if (b & 0x40)
          {
            if (b & 0x80)
            {
              // the following switch contains 4 case.
              switch (c & 0x30)
              {
                case 0x00:
                {
                  if (a & 0x10)
                  {
                    if (c & 0x40)
                    {
                      // ENCODING.brkpbs_p_p_pp_
                      return 1812;
                    }
                    else
                    {
                      // ENCODING.brkpb_p_p_pp_
                      return 1811;
                    }
                  }
                  else
                  {
                    if (c & 0x40)
                    {
                      // ENCODING.brkpas_p_p_pp_
                      return 1810;
                    }
                    else
                    {
                      // ENCODING.brkpa_p_p_pp_
                      return 1809;
                    }
                  }
                  break;
                }
                case 0x10:
                {
                  // the following switch contains 3 case.
                  switch (c & 0x09)
                  {
                    case 0x00:
                    {
                      // ENCODING.ptest_p_p_
                      return 2354;
                      break;
                    }
                    case 0x08:
                    {
                      // the following switch contains 4 case.
                      switch (b & 0x34)
                      {
                        case 0x00:
                        {
                          // ENCODING.pfirst_p_p_p_
                          return 2321;
                          break;
                        }
                        case 0x20:
                        {
                          // ENCODING.ptrue_p_s_
                          return 2355;
                          break;
                        }
                        case 0x24:
                        {
                          // ENCODING.pfalse_p_
                          return 2320;
                          break;
                        }
                        case 0x30:
                        {
                          if (c & 0x40)
                          {
                            // ENCODING.rdffrs_p_p_f_
                            return 2365;
                          }
                          else
                          {
                            // ENCODING.rdffr_p_p_f_
                            return 2364;
                          }
                          break;
                        }
                        default: break;
                      }
                      break;
                    }
                    case 0x09:
                    {
                      // the following switch contains 3 case.
                      switch ((b & 0x34) - 4)
                      {
                        case 0x00:
                        {
                          // ENCODING.pnext_p_p_p_
                          return 2325;
                          break;
                        }
                        case 0x1c:
                        {
                          // ENCODING.ptrues_p_s_
                          return 2356;
                          break;
                        }
                        case 0x2c:
                        {
                          // ENCODING.rdffr_p_f_
                          return 2363;
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
                case 0x20:
                {
                  // the following switch contains 11 case.
                  switch (c & 0x0f)
                  {
                    case 0x00:
                    {
                      // ENCODING.add_z_zi_
                      return 1759;
                      break;
                    }
                    case 0x01:
                    {
                      // ENCODING.sub_z_zi_
                      return 2631;
                      break;
                    }
                    case 0x03:
                    {
                      // ENCODING.subr_z_zi_
                      return 2636;
                      break;
                    }
                    case 0x04:
                    {
                      // ENCODING.sqadd_z_zi_
                      return 2447;
                      break;
                    }
                    case 0x05:
                    {
                      // ENCODING.uqadd_z_zi_
                      return 2710;
                      break;
                    }
                    case 0x06:
                    {
                      // ENCODING.sqsub_z_zi_
                      return 2533;
                      break;
                    }
                    case 0x07:
                    {
                      // ENCODING.uqsub_z_zi_
                      return 2750;
                      break;
                    }
                    case 0x08:
                    {
                      // ENCODING.smax_z_zi_
                      return 2415;
                      break;
                    }
                    case 0x09:
                    {
                      // ENCODING.umax_z_zi_
                      return 2681;
                      break;
                    }
                    case 0x0a:
                    {
                      // ENCODING.smin_z_zi_
                      return 2419;
                      break;
                    }
                    case 0x0b:
                    {
                      // ENCODING.umin_z_zi_
                      return 2685;
                      break;
                    }
                    default: break;
                  }
                  break;
                }
                case 0x30:
                {
                  // the following switch contains 3 case.
                  switch (c & 0x09)
                  {
                    case 0x00:
                    {
                      // ENCODING.mul_z_zi_
                      return 2299;
                      break;
                    }
                    case 0x08:
                    {
                      // ENCODING.dup_z_i_
                      return 1880;
                      break;
                    }
                    case 0x09:
                    {
                      // ENCODING.fdup_z_i_
                      return 1949;
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
              if (b & 0x02)
              {
                if (a & 0x10)
                {
                  // the following switch contains 3 case.
                  switch (c & 0xc0)
                  {
                    case 0x00:
                    {
                      // ENCODING.sel_p_p_pp_
                      return 2403;
                      break;
                    }
                    case 0x80:
                    {
                      // ENCODING.nand_p_p_pp_z
                      return 2304;
                      break;
                    }
                    case 0xc0:
                    {
                      // ENCODING.nands_p_p_pp_z
                      return 2305;
                      break;
                    }
                    default: break;
                  }
                }
                else
                {
                  // the following switch contains 4 case.
                  switch (c & 0xc0)
                  {
                    case 0x00:
                    {
                      // ENCODING.eor_p_p_pp_z
                      return 1885;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.eors_p_p_pp_z
                      return 1886;
                      break;
                    }
                    case 0x80:
                    {
                      // ENCODING.nor_p_p_pp_z
                      return 2309;
                      break;
                    }
                    case 0xc0:
                    {
                      // ENCODING.nors_p_p_pp_z
                      return 2310;
                      break;
                    }
                    default: break;
                  }
                }
              }
              else
              {
                // the following switch contains 8 case.
                switch (c & 0xd0)
                {
                  case 0x00:
                  {
                    if (a & 0x10)
                    {
                      // ENCODING.bic_p_p_pp_z
                      return 1799;
                    }
                    else
                    {
                      // ENCODING.and_p_p_pp_z
                      return 1773;
                    }
                    break;
                  }
                  case 0x10:
                  {
                    if (c & 0x08)
                    {
                      // ENCODING.brkn_p_p_pp_
                      return 1807;
                    }
                    else
                    {
                      // ENCODING.brka_p_p_p_
                      return 1803;
                    }
                    break;
                  }
                  case 0x40:
                  {
                    if (a & 0x10)
                    {
                      // ENCODING.bics_p_p_pp_z
                      return 1800;
                    }
                    else
                    {
                      // ENCODING.ands_p_p_pp_z
                      return 1774;
                    }
                    break;
                  }
                  case 0x50:
                  {
                    if (c & 0x08)
                    {
                      // ENCODING.brkns_p_p_pp_
                      return 1808;
                    }
                    else
                    {
                      // ENCODING.brkas_p_p_p_z
                      return 1804;
                    }
                    break;
                  }
                  case 0x80:
                  {
                    if (a & 0x10)
                    {
                      // ENCODING.orn_p_p_pp_z
                      return 2312;
                    }
                    else
                    {
                      // ENCODING.orr_p_p_pp_z
                      return 2314;
                    }
                    break;
                  }
                  case 0x90:
                  {
                    // ENCODING.brkb_p_p_p_
                    return 1805;
                    break;
                  }
                  case 0xc0:
                  {
                    if (a & 0x10)
                    {
                      // ENCODING.orns_p_p_pp_z
                      return 2313;
                    }
                    else
                    {
                      // ENCODING.orrs_p_p_pp_z
                      return 2315;
                    }
                    break;
                  }
                  case 0xd0:
                  {
                    // ENCODING.brkbs_p_p_p_z
                    return 1806;
                    break;
                  }
                  default: break;
                }
              }
            }
          }
          else
          {
            if (b & 0x80)
            {
              if (c & 0x20)
              {
                // the following switch contains 7 case.
                switch (c & 0x0f)
                {
                  case 0x00:
                  {
                    // ENCODING.cntp_r_p_p_
                    return 1863;
                    break;
                  }
                  case 0x08:
                  {
                    // the following switch contains 4 case.
                    switch (b & 0x1c)
                    {
                      case 0x00:
                      {
                        // ENCODING.sqincp_z_p_z_
                        return 2498;
                        break;
                      }
                      case 0x08:
                      {
                        // ENCODING.sqincp_r_p_r_sx
                        return 2496;
                        break;
                      }
                      case 0x0c:
                      {
                        // ENCODING.sqincp_r_p_r_x
                        return 2497;
                        break;
                      }
                      case 0x10:
                      {
                        // ENCODING.wrffr_f_p_
                        return 2794;
                        break;
                      }
                      default: break;
                    }
                    break;
                  }
                  case 0x09:
                  {
                    // the following switch contains 3 case.
                    switch (b & 0x0c)
                    {
                      case 0x00:
                      {
                        // ENCODING.uqincp_z_p_z_
                        return 2736;
                        break;
                      }
                      case 0x08:
                      {
                        // ENCODING.uqincp_r_p_r_uw
                        return 2734;
                        break;
                      }
                      case 0x0c:
                      {
                        // ENCODING.uqincp_r_p_r_x
                        return 2735;
                        break;
                      }
                      default: break;
                    }
                    break;
                  }
                  case 0x0a:
                  {
                    // the following switch contains 3 case.
                    switch (b & 0x0c)
                    {
                      case 0x00:
                      {
                        // ENCODING.sqdecp_z_p_z_
                        return 2460;
                        break;
                      }
                      case 0x08:
                      {
                        // ENCODING.sqdecp_r_p_r_sx
                        return 2458;
                        break;
                      }
                      case 0x0c:
                      {
                        // ENCODING.sqdecp_r_p_r_x
                        return 2459;
                        break;
                      }
                      default: break;
                    }
                    break;
                  }
                  case 0x0b:
                  {
                    // the following switch contains 3 case.
                    switch (b & 0x0c)
                    {
                      case 0x00:
                      {
                        // ENCODING.uqdecp_z_p_z_
                        return 2722;
                        break;
                      }
                      case 0x08:
                      {
                        // ENCODING.uqdecp_r_p_r_uw
                        return 2720;
                        break;
                      }
                      case 0x0c:
                      {
                        // ENCODING.uqdecp_r_p_r_x
                        return 2721;
                        break;
                      }
                      default: break;
                    }
                    break;
                  }
                  case 0x0c:
                  {
                    // the following switch contains 3 case.
                    switch (b & 0x18)
                    {
                      case 0x00:
                      {
                        // ENCODING.incp_z_p_z_
                        return 2032;
                        break;
                      }
                      case 0x08:
                      {
                        // ENCODING.incp_r_p_r_
                        return 2031;
                        break;
                      }
                      case 0x10:
                      {
                        // ENCODING.setffr_f_
                        return 2405;
                        break;
                      }
                      default: break;
                    }
                    break;
                  }
                  case 0x0d:
                  {
                    if (b & 0x08)
                    {
                      // ENCODING.decp_r_p_r_
                      return 1878;
                    }
                    else
                    {
                      // ENCODING.decp_z_p_z_
                      return 1879;
                    }
                    break;
                  }
                  default: break;
                }
              }
              else
              {
                if (a & 0x10)
                {
                  // ENCODING.cmpne_p_p_zi_
                  return 1840;
                }
                else
                {
                  // ENCODING.cmpeq_p_p_zi_
                  return 1831;
                }
              }
            }
            else
            {
              if (a & 0x10)
              {
                if (b & 0x20)
                {
                  if (c & 0x20)
                  {
                    if (b & 0x10)
                    {
                      // ENCODING.whilerw_p_rr_
                      return 2792;
                    }
                    else
                    {
                      // ENCODING.ctermne_rr_
                      return 1870;
                    }
                  }
                  else
                  {
                    // ENCODING.cmple_p_p_zi_
                    return 1837;
                  }
                }
                else
                {
                  if (c & 0x20)
                  {
                    // the following switch contains 4 case.
                    switch (b & 0x0c)
                    {
                      case 0x00:
                      {
                        // ENCODING.whilegt_p_p_rr_
                        return 2785;
                        break;
                      }
                      case 0x04:
                      {
                        // ENCODING.whilele_p_p_rr_
                        return 2788;
                        break;
                      }
                      case 0x08:
                      {
                        // ENCODING.whilehi_p_p_rr_
                        return 2786;
                        break;
                      }
                      case 0x0c:
                      {
                        // ENCODING.whilels_p_p_rr_
                        return 2790;
                        break;
                      }
                      default: break;
                    }
                  }
                  else
                  {
                    // ENCODING.cmpgt_p_p_zi_
                    return 1832;
                  }
                }
              }
              else
              {
                if (b & 0x20)
                {
                  if (c & 0x20)
                  {
                    if (b & 0x10)
                    {
                      // ENCODING.whilewr_p_rr_
                      return 2793;
                    }
                    else
                    {
                      // ENCODING.ctermeq_rr_
                      return 1869;
                    }
                  }
                  else
                  {
                    // ENCODING.cmplt_p_p_zi_
                    return 1836;
                  }
                }
                else
                {
                  if (c & 0x20)
                  {
                    // the following switch contains 4 case.
                    switch (b & 0x0c)
                    {
                      case 0x00:
                      {
                        // ENCODING.whilege_p_p_rr_
                        return 2784;
                        break;
                      }
                      case 0x04:
                      {
                        // ENCODING.whilelt_p_p_rr_
                        return 2791;
                        break;
                      }
                      case 0x08:
                      {
                        // ENCODING.whilehs_p_p_rr_
                        return 2787;
                        break;
                      }
                      case 0x0c:
                      {
                        // ENCODING.whilelo_p_p_rr_
                        return 2789;
                        break;
                      }
                      default: break;
                    }
                  }
                  else
                  {
                    // ENCODING.cmpge_p_p_zi_
                    return 1833;
                  }
                }
              }
            }
          }
          break;
        }
        case 0x40:
        {
          if (b & 0x20)
          {
            if (b & 0x40)
            {
              if (b & 0x10)
              {
                if (b & 0x80)
                {
                  if (b & 0x04)
                  {
                    if (c & 0x80)
                    {
                      if (c & 0x40)
                      {
                        // ENCODING.sqrdmulh_z_zzi_d
                        return 2517;
                      }
                      else
                      {
                        // ENCODING.sqrdmulh_z_zzi_s
                        return 2516;
                      }
                    }
                    else
                    {
                      // ENCODING.sqrdmulh_z_zzi_h
                      return 2515;
                    }
                  }
                  else
                  {
                    if (b & 0x08)
                    {
                      if (c & 0x80)
                      {
                        if (c & 0x40)
                        {
                          // ENCODING.mul_z_zzi_d
                          return 2303;
                        }
                        else
                        {
                          // ENCODING.mul_z_zzi_s
                          return 2302;
                        }
                      }
                      else
                      {
                        // ENCODING.mul_z_zzi_h
                        return 2301;
                      }
                    }
                    else
                    {
                      if (c & 0x80)
                      {
                        if (c & 0x40)
                        {
                          // ENCODING.sqdmulh_z_zzi_d
                          return 2481;
                        }
                        else
                        {
                          // ENCODING.sqdmulh_z_zzi_s
                          return 2480;
                        }
                      }
                      else
                      {
                        // ENCODING.sqdmulh_z_zzi_h
                        return 2479;
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
                      // ENCODING.sqrdcmlah_z_zzzi_s
                      return 2505;
                    }
                    else
                    {
                      // ENCODING.sqrdcmlah_z_zzzi_h
                      return 2504;
                    }
                  }
                  else
                  {
                    // the following switch contains 3 case.
                    switch (b & 0x0c)
                    {
                      case 0x00:
                      {
                        // ENCODING.sqrdmlah_z_zzz_
                        return 2506;
                        break;
                      }
                      case 0x04:
                      {
                        // ENCODING.sqrdmlsh_z_zzz_
                        return 2510;
                        break;
                      }
                      case 0x08:
                      {
                        // ENCODING.usdot_z_zzz_s
                        return 2762;
                        break;
                      }
                      default: break;
                    }
                  }
                }
              }
              else
              {
                if (b & 0x80)
                {
                  if (b & 0x04)
                  {
                    if (c & 0x40)
                    {
                      // ENCODING.sqdmullt_z_zzi_d
                      return 2487;
                    }
                    else
                    {
                      // ENCODING.sqdmullt_z_zzi_s
                      return 2486;
                    }
                  }
                  else
                  {
                    if (c & 0x40)
                    {
                      // ENCODING.sqdmullb_z_zzi_d
                      return 2484;
                    }
                    else
                    {
                      // ENCODING.sqdmullb_z_zzi_s
                      return 2483;
                    }
                  }
                }
                else
                {
                  if (c & 0x20)
                  {
                    if (c & 0x40)
                    {
                      // ENCODING.cmla_z_zzzi_s
                      return 1830;
                    }
                    else
                    {
                      // ENCODING.cmla_z_zzzi_h
                      return 1829;
                    }
                  }
                  else
                  {
                    // the following switch contains 4 case.
                    switch (b & 0x0c)
                    {
                      case 0x00:
                      {
                        // ENCODING.sqdmlalb_z_zzz_
                        return 2464;
                        break;
                      }
                      case 0x04:
                      {
                        // ENCODING.sqdmlalt_z_zzz_
                        return 2468;
                        break;
                      }
                      case 0x08:
                      {
                        // ENCODING.sqdmlslb_z_zzz_
                        return 2471;
                        break;
                      }
                      case 0x0c:
                      {
                        // ENCODING.sqdmlslt_z_zzz_
                        return 2475;
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
              if (b & 0x80)
              {
                if (c & 0x20)
                {
                  if (b & 0x04)
                  {
                    if (b & 0x10)
                    {
                      if (c & 0x40)
                      {
                        // ENCODING.umlslt_z_zzzi_d
                        return 2699;
                      }
                      else
                      {
                        // ENCODING.umlslt_z_zzzi_s
                        return 2698;
                      }
                    }
                    else
                    {
                      if (c & 0x40)
                      {
                        // ENCODING.smlslt_z_zzzi_d
                        return 2433;
                      }
                      else
                      {
                        // ENCODING.smlslt_z_zzzi_s
                        return 2432;
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x10)
                    {
                      if (c & 0x40)
                      {
                        // ENCODING.umlslb_z_zzzi_d
                        return 2696;
                      }
                      else
                      {
                        // ENCODING.umlslb_z_zzzi_s
                        return 2695;
                      }
                    }
                    else
                    {
                      if (c & 0x40)
                      {
                        // ENCODING.smlslb_z_zzzi_d
                        return 2430;
                      }
                      else
                      {
                        // ENCODING.smlslb_z_zzzi_s
                        return 2429;
                      }
                    }
                  }
                }
                else
                {
                  // the following switch contains 11 case.
                  switch (c & 0x1f)
                  {
                    case 0x00:
                    {
                      // ENCODING.urecpe_z_p_z_
                      return 2755;
                      break;
                    }
                    case 0x01:
                    {
                      // ENCODING.ursqrte_z_p_z_
                      return 2760;
                      break;
                    }
                    case 0x04:
                    {
                      // ENCODING.sadalp_z_p_z_
                      return 2382;
                      break;
                    }
                    case 0x05:
                    {
                      // ENCODING.uadalp_z_p_z_
                      return 2659;
                      break;
                    }
                    case 0x08:
                    {
                      // ENCODING.sqabs_z_p_z_
                      return 2445;
                      break;
                    }
                    case 0x09:
                    {
                      // ENCODING.sqneg_z_p_z_
                      return 2502;
                      break;
                    }
                    case 0x11:
                    {
                      // ENCODING.addp_z_p_zz_
                      return 1763;
                      break;
                    }
                    case 0x14:
                    {
                      // ENCODING.smaxp_z_p_zz_
                      return 2416;
                      break;
                    }
                    case 0x15:
                    {
                      // ENCODING.umaxp_z_p_zz_
                      return 2682;
                      break;
                    }
                    case 0x16:
                    {
                      // ENCODING.sminp_z_p_zz_
                      return 2420;
                      break;
                    }
                    case 0x17:
                    {
                      // ENCODING.uminp_z_p_zz_
                      return 2686;
                      break;
                    }
                    default: break;
                  }
                }
              }
              else
              {
                if (b & 0x10)
                {
                  if (c & 0x20)
                  {
                    if (b & 0x04)
                    {
                      if (c & 0x40)
                      {
                        // ENCODING.sqdmlslt_z_zzzi_d
                        return 2477;
                      }
                      else
                      {
                        // ENCODING.sqdmlslt_z_zzzi_s
                        return 2476;
                      }
                    }
                    else
                    {
                      if (c & 0x40)
                      {
                        // ENCODING.sqdmlslb_z_zzzi_d
                        return 2473;
                      }
                      else
                      {
                        // ENCODING.sqdmlslb_z_zzzi_s
                        return 2472;
                      }
                    }
                  }
                  else
                  {
                    // ENCODING.sqrdcmlah_z_zzz_
                    return 2503;
                  }
                }
                else
                {
                  if (c & 0x20)
                  {
                    if (b & 0x04)
                    {
                      if (c & 0x40)
                      {
                        // ENCODING.sqdmlalt_z_zzzi_d
                        return 2470;
                      }
                      else
                      {
                        // ENCODING.sqdmlalt_z_zzzi_s
                        return 2469;
                      }
                    }
                    else
                    {
                      if (c & 0x40)
                      {
                        // ENCODING.sqdmlalb_z_zzzi_d
                        return 2466;
                      }
                      else
                      {
                        // ENCODING.sqdmlalb_z_zzzi_s
                        return 2465;
                      }
                    }
                  }
                  else
                  {
                    // ENCODING.cmla_z_zzz_
                    return 1828;
                  }
                }
              }
            }
          }
          else
          {
            if (b & 0x40)
            {
              if (b & 0x10)
              {
                if (b & 0x04)
                {
                  if (b & 0x80)
                  {
                    if (c & 0x40)
                    {
                      // ENCODING.umullt_z_zzi_d
                      return 2708;
                    }
                    else
                    {
                      // ENCODING.umullt_z_zzi_s
                      return 2707;
                    }
                  }
                  else
                  {
                    if (b & 0x08)
                    {
                      // ENCODING.umlslt_z_zzz_
                      return 2697;
                    }
                    else
                    {
                      // ENCODING.smlslt_z_zzz_
                      return 2431;
                    }
                  }
                }
                else
                {
                  if (b & 0x80)
                  {
                    if (c & 0x40)
                    {
                      // ENCODING.umullb_z_zzi_d
                      return 2705;
                    }
                    else
                    {
                      // ENCODING.umullb_z_zzi_s
                      return 2704;
                    }
                  }
                  else
                  {
                    if (b & 0x08)
                    {
                      // ENCODING.umlslb_z_zzz_
                      return 2694;
                    }
                    else
                    {
                      // ENCODING.smlslb_z_zzz_
                      return 2428;
                    }
                  }
                }
              }
              else
              {
                if (b & 0x80)
                {
                  if (b & 0x04)
                  {
                    if (c & 0x40)
                    {
                      // ENCODING.smullt_z_zzi_d
                      return 2442;
                    }
                    else
                    {
                      // ENCODING.smullt_z_zzi_s
                      return 2441;
                    }
                  }
                  else
                  {
                    if (c & 0x40)
                    {
                      // ENCODING.smullb_z_zzi_d
                      return 2439;
                    }
                    else
                    {
                      // ENCODING.smullb_z_zzi_s
                      return 2438;
                    }
                  }
                }
                else
                {
                  if (c & 0x20)
                  {
                    if (c & 0x40)
                    {
                      // ENCODING.cdot_z_zzzi_d
                      return 1819;
                    }
                    else
                    {
                      // ENCODING.cdot_z_zzzi_s
                      return 1818;
                    }
                  }
                  else
                  {
                    // the following switch contains 4 case.
                    switch (b & 0x0c)
                    {
                      case 0x00:
                      {
                        // ENCODING.smlalb_z_zzz_
                        return 2422;
                        break;
                      }
                      case 0x04:
                      {
                        // ENCODING.smlalt_z_zzz_
                        return 2425;
                        break;
                      }
                      case 0x08:
                      {
                        // ENCODING.umlalb_z_zzz_
                        return 2688;
                        break;
                      }
                      case 0x0c:
                      {
                        // ENCODING.umlalt_z_zzz_
                        return 2691;
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
              if (b & 0x80)
              {
                if (c & 0x20)
                {
                  if (b & 0x04)
                  {
                    if (b & 0x10)
                    {
                      if (c & 0x40)
                      {
                        // ENCODING.umlalt_z_zzzi_d
                        return 2693;
                      }
                      else
                      {
                        // ENCODING.umlalt_z_zzzi_s
                        return 2692;
                      }
                    }
                    else
                    {
                      if (c & 0x40)
                      {
                        // ENCODING.smlalt_z_zzzi_d
                        return 2427;
                      }
                      else
                      {
                        // ENCODING.smlalt_z_zzzi_s
                        return 2426;
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x10)
                    {
                      if (c & 0x40)
                      {
                        // ENCODING.umlalb_z_zzzi_d
                        return 2690;
                      }
                      else
                      {
                        // ENCODING.umlalb_z_zzzi_s
                        return 2689;
                      }
                    }
                    else
                    {
                      if (c & 0x40)
                      {
                        // ENCODING.smlalb_z_zzzi_d
                        return 2424;
                      }
                      else
                      {
                        // ENCODING.smlalb_z_zzzi_s
                        return 2423;
                      }
                    }
                  }
                }
                else
                {
                  // the following switch contains 28 case.
                  switch ((c & 0x1f) - 2)
                  {
                    case 0x00:
                    {
                      // ENCODING.srshl_z_p_zz_
                      return 2542;
                      break;
                    }
                    case 0x01:
                    {
                      // ENCODING.urshl_z_p_zz_
                      return 2757;
                      break;
                    }
                    case 0x04:
                    {
                      // ENCODING.srshlr_z_p_zz_
                      return 2543;
                      break;
                    }
                    case 0x05:
                    {
                      // ENCODING.urshlr_z_p_zz_
                      return 2758;
                      break;
                    }
                    case 0x06:
                    {
                      // ENCODING.sqshl_z_p_zz_
                      return 2525;
                      break;
                    }
                    case 0x07:
                    {
                      // ENCODING.uqshl_z_p_zz_
                      return 2745;
                      break;
                    }
                    case 0x08:
                    {
                      // ENCODING.sqrshl_z_p_zz_
                      return 2518;
                      break;
                    }
                    case 0x09:
                    {
                      // ENCODING.uqrshl_z_p_zz_
                      return 2740;
                      break;
                    }
                    case 0x0a:
                    {
                      // ENCODING.sqshlr_z_p_zz_
                      return 2526;
                      break;
                    }
                    case 0x0b:
                    {
                      // ENCODING.uqshlr_z_p_zz_
                      return 2746;
                      break;
                    }
                    case 0x0c:
                    {
                      // ENCODING.sqrshlr_z_p_zz_
                      return 2519;
                      break;
                    }
                    case 0x0d:
                    {
                      // ENCODING.uqrshlr_z_p_zz_
                      return 2741;
                      break;
                    }
                    case 0x0e:
                    {
                      // ENCODING.shadd_z_p_zz_
                      return 2406;
                      break;
                    }
                    case 0x0f:
                    {
                      // ENCODING.uhadd_z_p_zz_
                      return 2677;
                      break;
                    }
                    case 0x10:
                    {
                      // ENCODING.shsub_z_p_zz_
                      return 2409;
                      break;
                    }
                    case 0x11:
                    {
                      // ENCODING.uhsub_z_p_zz_
                      return 2678;
                      break;
                    }
                    case 0x12:
                    {
                      // ENCODING.srhadd_z_p_zz_
                      return 2540;
                      break;
                    }
                    case 0x13:
                    {
                      // ENCODING.urhadd_z_p_zz_
                      return 2756;
                      break;
                    }
                    case 0x14:
                    {
                      // ENCODING.shsubr_z_p_zz_
                      return 2410;
                      break;
                    }
                    case 0x15:
                    {
                      // ENCODING.uhsubr_z_p_zz_
                      return 2679;
                      break;
                    }
                    case 0x16:
                    {
                      // ENCODING.sqadd_z_p_zz_
                      return 2446;
                      break;
                    }
                    case 0x17:
                    {
                      // ENCODING.uqadd_z_p_zz_
                      return 2709;
                      break;
                    }
                    case 0x18:
                    {
                      // ENCODING.sqsub_z_p_zz_
                      return 2532;
                      break;
                    }
                    case 0x19:
                    {
                      // ENCODING.uqsub_z_p_zz_
                      return 2749;
                      break;
                    }
                    case 0x1a:
                    {
                      // ENCODING.suqadd_z_p_zz_
                      return 2640;
                      break;
                    }
                    case 0x1b:
                    {
                      // ENCODING.usqadd_z_p_zz_
                      return 2767;
                      break;
                    }
                    case 0x1c:
                    {
                      // ENCODING.sqsubr_z_p_zz_
                      return 2535;
                      break;
                    }
                    case 0x1d:
                    {
                      // ENCODING.uqsubr_z_p_zz_
                      return 2752;
                      break;
                    }
                    default: break;
                  }
                }
              }
              else
              {
                if (b & 0x10)
                {
                  if (c & 0x20)
                  {
                    if (b & 0x04)
                    {
                      if (b & 0x08)
                      {
                        // ENCODING.sudot_z_zzzi_s
                        return 2637;
                      }
                      else
                      {
                        if (c & 0x80)
                        {
                          if (c & 0x40)
                          {
                            // ENCODING.sqrdmlsh_z_zzzi_d
                            return 2513;
                          }
                          else
                          {
                            // ENCODING.sqrdmlsh_z_zzzi_s
                            return 2512;
                          }
                        }
                        else
                        {
                          // ENCODING.sqrdmlsh_z_zzzi_h
                          return 2511;
                        }
                      }
                    }
                    else
                    {
                      if (b & 0x08)
                      {
                        // ENCODING.usdot_z_zzzi_s
                        return 2763;
                      }
                      else
                      {
                        if (c & 0x80)
                        {
                          if (c & 0x40)
                          {
                            // ENCODING.sqrdmlah_z_zzzi_d
                            return 2509;
                          }
                          else
                          {
                            // ENCODING.sqrdmlah_z_zzzi_s
                            return 2508;
                          }
                        }
                        else
                        {
                          // ENCODING.sqrdmlah_z_zzzi_h
                          return 2507;
                        }
                      }
                    }
                  }
                  else
                  {
                    // ENCODING.cdot_z_zzz_
                    return 1817;
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
                        if (c & 0x80)
                        {
                          if (c & 0x40)
                          {
                            // ENCODING.mls_z_zzzi_d
                            return 2294;
                          }
                          else
                          {
                            // ENCODING.mls_z_zzzi_s
                            return 2293;
                          }
                        }
                        else
                        {
                          // ENCODING.mls_z_zzzi_h
                          return 2292;
                        }
                      }
                      else
                      {
                        // ENCODING.sqdmlslbt_z_zzz_
                        return 2474;
                      }
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        if (c & 0x40)
                        {
                          // ENCODING.udot_z_zzzi_d
                          return 2676;
                        }
                        else
                        {
                          // ENCODING.udot_z_zzzi_s
                          return 2675;
                        }
                      }
                      else
                      {
                        // ENCODING.udot_z_zzz_
                        return 2674;
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x08)
                    {
                      if (c & 0x20)
                      {
                        if (c & 0x80)
                        {
                          if (c & 0x40)
                          {
                            // ENCODING.mla_z_zzzi_d
                            return 2290;
                          }
                          else
                          {
                            // ENCODING.mla_z_zzzi_s
                            return 2289;
                          }
                        }
                        else
                        {
                          // ENCODING.mla_z_zzzi_h
                          return 2288;
                        }
                      }
                      else
                      {
                        // ENCODING.sqdmlalbt_z_zzz_
                        return 2467;
                      }
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        if (c & 0x40)
                        {
                          // ENCODING.sdot_z_zzzi_d
                          return 2402;
                        }
                        else
                        {
                          // ENCODING.sdot_z_zzzi_s
                          return 2401;
                        }
                      }
                      else
                      {
                        // ENCODING.sdot_z_zzz_
                        return 2400;
                      }
                    }
                  }
                }
              }
            }
          }
          break;
        }
        case 0x41:
        {
          if (b & 0x20)
          {
            if (b & 0x04)
            {
              if (b & 0x08)
              {
                if (b & 0x10)
                {
                  if (b & 0x40)
                  {
                    if (b & 0x80)
                    {
                      // ENCODING.uaba_z_zzz_
                      return 2653;
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.rsubhnt_z_zz_
                        return 2375;
                      }
                      else
                      {
                        // ENCODING.umullt_z_zz_
                        return 2706;
                      }
                    }
                  }
                  else
                  {
                    if (c & 0x20)
                    {
                      // ENCODING.uqrshrnt_z_zi_
                      return 2743;
                    }
                    else
                    {
                      // ENCODING.uabdlt_z_zz_
                      return 2658;
                    }
                  }
                }
                else
                {
                  if (b & 0x40)
                  {
                    if (b & 0x80)
                    {
                      // ENCODING.ursra_z_zi_
                      return 2761;
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.raddhnt_z_zz_
                        return 2360;
                      }
                      else
                      {
                        // ENCODING.pmullt_z_zz_
                        return 2324;
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x80)
                    {
                      // ENCODING.ushllt_z_zi_
                      return 2765;
                    }
                    else
                    {
                      // ENCODING.sqrshrnt_z_zi_
                      return 2521;
                    }
                  }
                }
              }
              else
              {
                if (b & 0x10)
                {
                  if (b & 0x40)
                  {
                    if (b & 0x80)
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.rax1_z_zz_
                        return 2361;
                      }
                      else
                      {
                        // ENCODING.sli_z_zzi_
                        return 2411;
                      }
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.subhnt_z_zz_
                        return 2634;
                      }
                      else
                      {
                        // ENCODING.smullt_z_zz_
                        return 2440;
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x80)
                    {
                      // ENCODING.bdep_z_zz_
                      return 1787;
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.uqshrnt_z_zi_
                        return 2748;
                      }
                      else
                      {
                        // ENCODING.sabdlt_z_zz_
                        return 2381;
                      }
                    }
                  }
                }
                else
                {
                  if (b & 0x40)
                  {
                    if (b & 0x80)
                    {
                      if (c & 0x20)
                      {
                        if (c & 0x02)
                        {
                          // ENCODING.aesd_z_zz_
                          return 1769;
                        }
                        else
                        {
                          // ENCODING.aesimc_z_z_
                          return 1771;
                        }
                      }
                      else
                      {
                        // ENCODING.usra_z_zi_
                        return 2768;
                      }
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.addhnt_z_zz_
                        return 1762;
                      }
                      else
                      {
                        // ENCODING.sqdmullt_z_zz_
                        return 2485;
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x80)
                    {
                      // ENCODING.sshllt_z_zi_
                      return 2547;
                    }
                    else
                    {
                      // ENCODING.sqshrnt_z_zi_
                      return 2529;
                    }
                  }
                }
              }
            }
            else
            {
              if (b & 0x08)
              {
                if (b & 0x10)
                {
                  if (b & 0x40)
                  {
                    if (b & 0x80)
                    {
                      // ENCODING.saba_z_zzz_
                      return 2376;
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.rsubhnb_z_zz_
                        return 2374;
                      }
                      else
                      {
                        // ENCODING.umullb_z_zz_
                        return 2703;
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x80)
                    {
                      // ENCODING.bgrp_z_zz_
                      return 1798;
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.uqrshrnb_z_zi_
                        return 2742;
                      }
                      else
                      {
                        // ENCODING.uabdlb_z_zz_
                        return 2657;
                      }
                    }
                  }
                }
                else
                {
                  if (b & 0x40)
                  {
                    if (b & 0x80)
                    {
                      // ENCODING.srsra_z_zi_
                      return 2545;
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.raddhnb_z_zz_
                        return 2359;
                      }
                      else
                      {
                        // ENCODING.pmullb_z_zz_
                        return 2323;
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x80)
                    {
                      // ENCODING.ushllb_z_zi_
                      return 2764;
                    }
                    else
                    {
                      // ENCODING.sqrshrnb_z_zi_
                      return 2520;
                    }
                  }
                }
              }
              else
              {
                if (b & 0x10)
                {
                  if (b & 0x40)
                  {
                    if (b & 0x80)
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.sm4ekey_z_zz_
                        return 2413;
                      }
                      else
                      {
                        // ENCODING.sri_z_zzi_
                        return 2541;
                      }
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.subhnb_z_zz_
                        return 2633;
                      }
                      else
                      {
                        // ENCODING.smullb_z_zz_
                        return 2437;
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x80)
                    {
                      // ENCODING.bext_z_zz_
                      return 1788;
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.uqshrnb_z_zi_
                        return 2747;
                      }
                      else
                      {
                        // ENCODING.sabdlb_z_zz_
                        return 2380;
                      }
                    }
                  }
                }
                else
                {
                  if (b & 0x40)
                  {
                    if (b & 0x80)
                    {
                      if (c & 0x20)
                      {
                        // the following switch contains 3 case.
                        switch (c & 0x03)
                        {
                          case 0x00:
                          {
                            // ENCODING.aesmc_z_z_
                            return 1772;
                            break;
                          }
                          case 0x02:
                          {
                            // ENCODING.aese_z_zz_
                            return 1770;
                            break;
                          }
                          case 0x03:
                          {
                            // ENCODING.sm4e_z_zz_
                            return 2412;
                            break;
                          }
                          default: break;
                        }
                      }
                      else
                      {
                        // ENCODING.ssra_z_zi_
                        return 2548;
                      }
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.addhnb_z_zz_
                        return 1761;
                      }
                      else
                      {
                        // ENCODING.sqdmullb_z_zz_
                        return 2482;
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x80)
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.histseg_z_zz_
                        return 2023;
                      }
                      else
                      {
                        // ENCODING.sshllb_z_zi_
                        return 2546;
                      }
                    }
                    else
                    {
                      // ENCODING.sqshrnb_z_zi_
                      return 2528;
                    }
                  }
                }
              }
            }
          }
          else
          {
            if (b & 0x40)
            {
              if (b & 0x80)
              {
                if (c & 0x20)
                {
                  // ENCODING.histcnt_z_p_zz_
                  return 2022;
                }
                else
                {
                  // the following switch contains 4 case.
                  switch (b & 0x18)
                  {
                    case 0x00:
                    {
                      if (b & 0x04)
                      {
                        // ENCODING.sabalt_z_zzz_
                        return 2378;
                      }
                      else
                      {
                        // ENCODING.sabalb_z_zzz_
                        return 2377;
                      }
                      break;
                    }
                    case 0x08:
                    {
                      if (b & 0x04)
                      {
                        // ENCODING.uabalt_z_zzz_
                        return 2655;
                      }
                      else
                      {
                        // ENCODING.uabalb_z_zzz_
                        return 2654;
                      }
                      break;
                    }
                    case 0x10:
                    {
                      if (b & 0x04)
                      {
                        if (c & 0x80)
                        {
                          // ENCODING.sbclt_z_zzz_
                          return 2390;
                        }
                        else
                        {
                          // ENCODING.adclt_z_zzz_
                          return 1757;
                        }
                      }
                      else
                      {
                        if (c & 0x80)
                        {
                          // ENCODING.sbclb_z_zzz_
                          return 2389;
                        }
                        else
                        {
                          // ENCODING.adclb_z_zzz_
                          return 1756;
                        }
                      }
                      break;
                    }
                    case 0x18:
                    {
                      if (c & 0x01)
                      {
                        // ENCODING.sqcadd_z_zz_
                        return 2449;
                      }
                      else
                      {
                        // ENCODING.cadd_z_zz_
                        return 1816;
                      }
                      break;
                    }
                    default: break;
                  }
                }
              }
              else
              {
                if (b & 0x04)
                {
                  if (b & 0x08)
                  {
                    if (b & 0x10)
                    {
                      // ENCODING.usubwt_z_zz_
                      return 2772;
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.uqxtnt_z_zz_
                        return 2754;
                      }
                      else
                      {
                        // ENCODING.uaddwt_z_zz_
                        return 2664;
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x10)
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.sqxtunt_z_zz_
                        return 2539;
                      }
                      else
                      {
                        // ENCODING.ssubwt_z_zz_
                        return 2554;
                      }
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.sqxtnt_z_zz_
                        return 2537;
                      }
                      else
                      {
                        // ENCODING.saddwt_z_zz_
                        return 2388;
                      }
                    }
                  }
                }
                else
                {
                  if (b & 0x08)
                  {
                    if (b & 0x10)
                    {
                      // ENCODING.usubwb_z_zz_
                      return 2771;
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.uqxtnb_z_zz_
                        return 2753;
                      }
                      else
                      {
                        // ENCODING.uaddwb_z_zz_
                        return 2663;
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x10)
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.sqxtunb_z_zz_
                        return 2538;
                      }
                      else
                      {
                        // ENCODING.ssubwb_z_zz_
                        return 2553;
                      }
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.sqxtnb_z_zz_
                        return 2536;
                      }
                      else
                      {
                        // ENCODING.saddwb_z_zz_
                        return 2387;
                      }
                    }
                  }
                }
              }
            }
            else
            {
              if (b & 0x80)
              {
                if (c & 0x20)
                {
                  if (a & 0x10)
                  {
                    // ENCODING.nmatch_p_p_zz_
                    return 2308;
                  }
                  else
                  {
                    // ENCODING.match_p_p_zz_
                    return 2286;
                  }
                }
                else
                {
                  // the following switch contains 6 case.
                  switch (b & 0x1c)
                  {
                    case 0x00:
                    {
                      // ENCODING.saddlbt_z_zz_
                      return 2384;
                      break;
                    }
                    case 0x08:
                    {
                      // ENCODING.ssublbt_z_zz_
                      return 2550;
                      break;
                    }
                    case 0x0c:
                    {
                      // ENCODING.ssubltb_z_zz_
                      return 2552;
                      break;
                    }
                    case 0x10:
                    {
                      // ENCODING.eorbt_z_zz_
                      return 1890;
                      break;
                    }
                    case 0x14:
                    {
                      // ENCODING.eortb_z_zz_
                      return 1891;
                      break;
                    }
                    case 0x18:
                    {
                      // the following switch contains 3 case.
                      switch (c & 0xc0)
                      {
                        case 0x00:
                        {
                          // ENCODING.smmla_z_zzz_
                          return 2434;
                          break;
                        }
                        case 0x80:
                        {
                          // ENCODING.usmmla_z_zzz_
                          return 2766;
                          break;
                        }
                        case 0xc0:
                        {
                          // ENCODING.ummla_z_zzz_
                          return 2700;
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
              else
              {
                if (b & 0x04)
                {
                  if (b & 0x08)
                  {
                    if (b & 0x10)
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.rshrnt_z_zi_
                        return 2373;
                      }
                      else
                      {
                        // ENCODING.usublt_z_zz_
                        return 2770;
                      }
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.sqrshrunt_z_zi_
                        return 2523;
                      }
                      else
                      {
                        // ENCODING.uaddlt_z_zz_
                        return 2661;
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x10)
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.shrnt_z_zi_
                        return 2408;
                      }
                      else
                      {
                        // ENCODING.ssublt_z_zz_
                        return 2551;
                      }
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.sqshrunt_z_zi_
                        return 2531;
                      }
                      else
                      {
                        // ENCODING.saddlt_z_zz_
                        return 2385;
                      }
                    }
                  }
                }
                else
                {
                  if (b & 0x08)
                  {
                    if (b & 0x10)
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.rshrnb_z_zi_
                        return 2372;
                      }
                      else
                      {
                        // ENCODING.usublb_z_zz_
                        return 2769;
                      }
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.sqrshrunb_z_zi_
                        return 2522;
                      }
                      else
                      {
                        // ENCODING.uaddlb_z_zz_
                        return 2660;
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x10)
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.shrnb_z_zi_
                        return 2407;
                      }
                      else
                      {
                        // ENCODING.ssublb_z_zz_
                        return 2549;
                      }
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.sqshrunb_z_zi_
                        return 2530;
                      }
                      else
                      {
                        // ENCODING.saddlb_z_zz_
                        return 2383;
                      }
                    }
                  }
                }
              }
            }
          }
          break;
        }
        case 0x60:
        {
          if (b & 0x80)
          {
            if (b & 0x20)
            {
              if (b & 0x40)
              {
                // the following switch contains 3 case.
                switch ((c & 0xc0) - 64)
                {
                  case 0x00:
                  {
                    // ENCODING.bfmmla_z_zzz_
                    return 1797;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.fmmla_z_zzz_s
                    return 1985;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.fmmla_z_zzz_d
                    return 1986;
                    break;
                  }
                  default: break;
                }
              }
              else
              {
                // the following switch contains 4 case.
                switch (c & 0xe0)
                {
                  case 0x00:
                  {
                    // ENCODING.fcvtxnt_z_p_z_d2s
                    return 1932;
                    break;
                  }
                  case 0x80:
                  {
                    // the following switch contains 3 case.
                    switch (c & 0x03)
                    {
                      case 0x00:
                      {
                        // ENCODING.fcvtnt_z_p_z_s2h
                        return 1929;
                        break;
                      }
                      case 0x01:
                      {
                        // ENCODING.fcvtlt_z_p_z_h2s
                        return 1927;
                        break;
                      }
                      case 0x02:
                      {
                        // ENCODING.bfcvtnt_z_p_z_s2bf
                        return 1790;
                        break;
                      }
                      default: break;
                    }
                    break;
                  }
                  case 0xa0:
                  {
                    if (b & 0x04)
                    {
                      // ENCODING.fmlslt_z_zzz_
                      return 1983;
                    }
                    else
                    {
                      // ENCODING.fmlslb_z_zzz_
                      return 1981;
                    }
                    break;
                  }
                  case 0xc0:
                  {
                    if (c & 0x01)
                    {
                      // ENCODING.fcvtlt_z_p_z_s2d
                      return 1928;
                    }
                    else
                    {
                      // ENCODING.fcvtnt_z_p_z_d2s
                      return 1930;
                    }
                    break;
                  }
                  default: break;
                }
              }
            }
            else
            {
              if (c & 0x20)
              {
                if (b & 0x04)
                {
                  if (c & 0x40)
                  {
                    // ENCODING.bfmlalt_z_zzz_
                    return 1795;
                  }
                  else
                  {
                    // ENCODING.fmlalt_z_zzz_
                    return 1975;
                  }
                }
                else
                {
                  // the following switch contains 3 case.
                  switch ((c & 0xc0) - 64)
                  {
                    case 0x00:
                    {
                      // ENCODING.bfdot_z_zzz_
                      return 1791;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.fmlalb_z_zzz_
                      return 1973;
                      break;
                    }
                    case 0x80:
                    {
                      // ENCODING.bfmlalb_z_zzz_
                      return 1793;
                      break;
                    }
                    default: break;
                  }
                }
              }
              else
              {
                // the following switch contains 4 case.
                switch (c & 0x16)
                {
                  case 0x00:
                  {
                    // ENCODING.fcadd_z_p_zz_
                    return 1905;
                    break;
                  }
                  case 0x10:
                  {
                    // ENCODING.faddp_z_p_zz_
                    return 1903;
                    break;
                  }
                  case 0x14:
                  {
                    if (c & 0x01)
                    {
                      // ENCODING.fminnmp_z_p_zz_
                      return 1965;
                    }
                    else
                    {
                      // ENCODING.fmaxnmp_z_p_zz_
                      return 1957;
                    }
                    break;
                  }
                  case 0x16:
                  {
                    if (c & 0x01)
                    {
                      // ENCODING.fminp_z_p_zz_
                      return 1967;
                    }
                    else
                    {
                      // ENCODING.fmaxp_z_p_zz_
                      return 1959;
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
            if (c & 0x20)
            {
              if (b & 0x10)
              {
                if (c & 0x40)
                {
                  // ENCODING.fcmla_z_zzzi_s
                  return 1919;
                }
                else
                {
                  // ENCODING.fcmla_z_zzzi_h
                  return 1918;
                }
              }
              else
              {
                if (b & 0x04)
                {
                  if (b & 0x20)
                  {
                    // ENCODING.fmlslt_z_zzzi_s
                    return 1984;
                  }
                  else
                  {
                    if (b & 0x40)
                    {
                      if (c & 0x40)
                      {
                        // ENCODING.bfmlalt_z_zzzi_
                        return 1796;
                      }
                      else
                      {
                        // ENCODING.fmlalt_z_zzzi_s
                        return 1976;
                      }
                    }
                    else
                    {
                      if (c & 0x80)
                      {
                        if (c & 0x40)
                        {
                          // ENCODING.fmls_z_zzzi_d
                          return 1980;
                        }
                        else
                        {
                          // ENCODING.fmls_z_zzzi_s
                          return 1979;
                        }
                      }
                      else
                      {
                        // ENCODING.fmls_z_zzzi_h
                        return 1978;
                      }
                    }
                  }
                }
                else
                {
                  if (b & 0x20)
                  {
                    if (b & 0x40)
                    {
                      // ENCODING.fmlslb_z_zzzi_s
                      return 1982;
                    }
                    else
                    {
                      if (c & 0x80)
                      {
                        if (c & 0x40)
                        {
                          // ENCODING.fmul_z_zzi_d
                          return 1993;
                        }
                        else
                        {
                          // ENCODING.fmul_z_zzi_s
                          return 1992;
                        }
                      }
                      else
                      {
                        // ENCODING.fmul_z_zzi_h
                        return 1991;
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x40)
                    {
                      // the following switch contains 3 case.
                      switch ((c & 0xc0) - 64)
                      {
                        case 0x00:
                        {
                          // ENCODING.bfdot_z_zzzi_
                          return 1792;
                          break;
                        }
                        case 0x40:
                        {
                          // ENCODING.fmlalb_z_zzzi_s
                          return 1974;
                          break;
                        }
                        case 0x80:
                        {
                          // ENCODING.bfmlalb_z_zzzi_
                          return 1794;
                          break;
                        }
                        default: break;
                      }
                    }
                    else
                    {
                      if (c & 0x80)
                      {
                        if (c & 0x40)
                        {
                          // ENCODING.fmla_z_zzzi_d
                          return 1972;
                        }
                        else
                        {
                          // ENCODING.fmla_z_zzzi_s
                          return 1971;
                        }
                      }
                      else
                      {
                        // ENCODING.fmla_z_zzzi_h
                        return 1970;
                      }
                    }
                  }
                }
              }
            }
            else
            {
              // ENCODING.fcmla_z_p_zzz_
              return 1917;
            }
          }
          break;
        }
        case 0x61:
        {
          if (b & 0x20)
          {
            if (b & 0x40)
            {
              if (b & 0x80)
              {
                if (c & 0x20)
                {
                  // ENCODING.fnmsb_z_p_zzz_
                  return 1999;
                }
                else
                {
                  // ENCODING.facgt_p_p_zz_
                  return 1897;
                }
              }
              else
              {
                if (c & 0x20)
                {
                  // ENCODING.fnmls_z_p_zzz_
                  return 1998;
                }
                else
                {
                  if (a & 0x10)
                  {
                    // ENCODING.fcmne_p_p_zz_
                    return 1915;
                  }
                  else
                  {
                    // ENCODING.fcmeq_p_p_zz_
                    return 1912;
                  }
                }
              }
            }
            else
            {
              if (b & 0x80)
              {
                if (c & 0x20)
                {
                  // ENCODING.fmsb_z_p_zzz_
                  return 1987;
                }
                else
                {
                  // the following switch contains 8 case.
                  switch (c & 0x19)
                  {
                    case 0x00:
                    {
                      // the following switch contains 4 case.
                      switch (c & 0x06)
                      {
                        case 0x00:
                        {
                          // ENCODING.frintn_z_p_z_
                          return 2006;
                          break;
                        }
                        case 0x02:
                        {
                          // ENCODING.frintm_z_p_z_
                          return 2008;
                          break;
                        }
                        case 0x04:
                        {
                          // ENCODING.frinta_z_p_z_
                          return 2005;
                          break;
                        }
                        case 0x06:
                        {
                          // ENCODING.frintx_z_p_z_
                          return 2004;
                          break;
                        }
                        default: break;
                      }
                      break;
                    }
                    case 0x01:
                    {
                      // the following switch contains 3 case.
                      switch (c & 0x06)
                      {
                        case 0x00:
                        {
                          // ENCODING.frintp_z_p_z_
                          return 2009;
                          break;
                        }
                        case 0x02:
                        {
                          // ENCODING.frintz_z_p_z_
                          return 2007;
                          break;
                        }
                        case 0x06:
                        {
                          // ENCODING.frinti_z_p_z_
                          return 2003;
                          break;
                        }
                        default: break;
                      }
                      break;
                    }
                    case 0x08:
                    {
                      // the following switch contains 3 case.
                      switch (c & 0x06)
                      {
                        case 0x00:
                        {
                          if (c & 0x40)
                          {
                            // ENCODING.fcvt_z_p_z_d2h
                            return 1925;
                          }
                          else
                          {
                            // ENCODING.fcvt_z_p_z_s2h
                            return 1923;
                          }
                          break;
                        }
                        case 0x02:
                        {
                          // the following switch contains 3 case.
                          switch (c & 0xc0)
                          {
                            case 0x00:
                            {
                              // ENCODING.fcvtx_z_p_z_d2s
                              return 1931;
                              break;
                            }
                            case 0x80:
                            {
                              // ENCODING.bfcvt_z_p_z_s2bf
                              return 1789;
                              break;
                            }
                            case 0xc0:
                            {
                              // ENCODING.fcvt_z_p_z_d2s
                              return 1926;
                              break;
                            }
                            default: break;
                          }
                          break;
                        }
                        case 0x04:
                        {
                          // ENCODING.frecpx_z_p_z_
                          return 2002;
                          break;
                        }
                        default: break;
                      }
                      break;
                    }
                    case 0x09:
                    {
                      // the following switch contains 3 case.
                      switch (c & 0x06)
                      {
                        case 0x00:
                        {
                          if (c & 0x40)
                          {
                            // ENCODING.fcvt_z_p_z_h2d
                            return 1922;
                          }
                          else
                          {
                            // ENCODING.fcvt_z_p_z_h2s
                            return 1921;
                          }
                          break;
                        }
                        case 0x02:
                        {
                          // ENCODING.fcvt_z_p_z_s2d
                          return 1924;
                          break;
                        }
                        case 0x04:
                        {
                          // ENCODING.fsqrt_z_p_z_
                          return 2013;
                          break;
                        }
                        default: break;
                      }
                      break;
                    }
                    case 0x10:
                    {
                      // the following switch contains 7 case.
                      switch ((c & 0xc6) - 66)
                      {
                        case 0x00:
                        {
                          // ENCODING.scvtf_z_p_z_h2fp16
                          return 2391;
                          break;
                        }
                        case 0x02:
                        {
                          // ENCODING.scvtf_z_p_z_w2fp16
                          return 2392;
                          break;
                        }
                        case 0x04:
                        {
                          // ENCODING.scvtf_z_p_z_x2fp16
                          return 2395;
                          break;
                        }
                        case 0x42:
                        {
                          // ENCODING.scvtf_z_p_z_w2s
                          return 2393;
                          break;
                        }
                        case 0x7e:
                        {
                          // ENCODING.scvtf_z_p_z_w2d
                          return 2394;
                          break;
                        }
                        case 0x82:
                        {
                          // ENCODING.scvtf_z_p_z_x2s
                          return 2396;
                          break;
                        }
                        case 0x84:
                        {
                          // ENCODING.scvtf_z_p_z_x2d
                          return 2397;
                          break;
                        }
                        default: break;
                      }
                      break;
                    }
                    case 0x11:
                    {
                      // the following switch contains 7 case.
                      switch ((c & 0xc6) - 66)
                      {
                        case 0x00:
                        {
                          // ENCODING.ucvtf_z_p_z_h2fp16
                          return 2665;
                          break;
                        }
                        case 0x02:
                        {
                          // ENCODING.ucvtf_z_p_z_w2fp16
                          return 2666;
                          break;
                        }
                        case 0x04:
                        {
                          // ENCODING.ucvtf_z_p_z_x2fp16
                          return 2669;
                          break;
                        }
                        case 0x42:
                        {
                          // ENCODING.ucvtf_z_p_z_w2s
                          return 2667;
                          break;
                        }
                        case 0x7e:
                        {
                          // ENCODING.ucvtf_z_p_z_w2d
                          return 2668;
                          break;
                        }
                        case 0x82:
                        {
                          // ENCODING.ucvtf_z_p_z_x2s
                          return 2670;
                          break;
                        }
                        case 0x84:
                        {
                          // ENCODING.ucvtf_z_p_z_x2d
                          return 2671;
                          break;
                        }
                        default: break;
                      }
                      break;
                    }
                    case 0x18:
                    {
                      // the following switch contains 4 case.
                      switch (c & 0xc0)
                      {
                        case 0x00:
                        {
                          // ENCODING.flogb_z_p_z_
                          return 1951;
                          break;
                        }
                        case 0x40:
                        {
                          // the following switch contains 3 case.
                          switch ((c & 0x06) - 2)
                          {
                            case 0x00:
                            {
                              // ENCODING.fcvtzs_z_p_z_fp162h
                              return 1933;
                              break;
                            }
                            case 0x02:
                            {
                              // ENCODING.fcvtzs_z_p_z_fp162w
                              return 1934;
                              break;
                            }
                            case 0x04:
                            {
                              // ENCODING.fcvtzs_z_p_z_fp162x
                              return 1935;
                              break;
                            }
                            default: break;
                          }
                          break;
                        }
                        case 0x80:
                        {
                          // ENCODING.fcvtzs_z_p_z_s2w
                          return 1936;
                          break;
                        }
                        case 0xc0:
                        {
                          // the following switch contains 3 case.
                          switch (c & 0x06)
                          {
                            case 0x00:
                            {
                              // ENCODING.fcvtzs_z_p_z_d2w
                              return 1938;
                              break;
                            }
                            case 0x04:
                            {
                              // ENCODING.fcvtzs_z_p_z_s2x
                              return 1937;
                              break;
                            }
                            case 0x06:
                            {
                              // ENCODING.fcvtzs_z_p_z_d2x
                              return 1939;
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
                    case 0x19:
                    {
                      // the following switch contains 7 case.
                      switch ((c & 0xc6) - 66)
                      {
                        case 0x00:
                        {
                          // ENCODING.fcvtzu_z_p_z_fp162h
                          return 1940;
                          break;
                        }
                        case 0x02:
                        {
                          // ENCODING.fcvtzu_z_p_z_fp162w
                          return 1941;
                          break;
                        }
                        case 0x04:
                        {
                          // ENCODING.fcvtzu_z_p_z_fp162x
                          return 1942;
                          break;
                        }
                        case 0x42:
                        {
                          // ENCODING.fcvtzu_z_p_z_s2w
                          return 1943;
                          break;
                        }
                        case 0x7e:
                        {
                          // ENCODING.fcvtzu_z_p_z_d2w
                          return 1945;
                          break;
                        }
                        case 0x82:
                        {
                          // ENCODING.fcvtzu_z_p_z_s2x
                          return 1944;
                          break;
                        }
                        case 0x84:
                        {
                          // ENCODING.fcvtzu_z_p_z_d2x
                          return 1946;
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
              else
              {
                if (c & 0x20)
                {
                  // ENCODING.fmls_z_p_zzz_
                  return 1977;
                }
                else
                {
                  // the following switch contains 12 case.
                  switch (c & 0x1f)
                  {
                    case 0x00:
                    {
                      // ENCODING.faddv_v_p_z_
                      return 1904;
                      break;
                    }
                    case 0x04:
                    {
                      // ENCODING.fmaxnmv_v_p_z_
                      return 1958;
                      break;
                    }
                    case 0x05:
                    {
                      // ENCODING.fminnmv_v_p_z_
                      return 1966;
                      break;
                    }
                    case 0x06:
                    {
                      // ENCODING.fmaxv_v_p_z_
                      return 1960;
                      break;
                    }
                    case 0x07:
                    {
                      // ENCODING.fminv_v_p_z_
                      return 1968;
                      break;
                    }
                    case 0x0e:
                    {
                      // ENCODING.frecpe_z_z_
                      return 2000;
                      break;
                    }
                    case 0x0f:
                    {
                      // ENCODING.frsqrte_z_z_
                      return 2010;
                      break;
                    }
                    case 0x10:
                    {
                      if (a & 0x10)
                      {
                        // ENCODING.fcmgt_p_p_z0_
                        return 1907;
                      }
                      else
                      {
                        // ENCODING.fcmge_p_p_z0_
                        return 1908;
                      }
                      break;
                    }
                    case 0x11:
                    {
                      if (a & 0x10)
                      {
                        // ENCODING.fcmle_p_p_z0_
                        return 1910;
                      }
                      else
                      {
                        // ENCODING.fcmlt_p_p_z0_
                        return 1909;
                      }
                      break;
                    }
                    case 0x12:
                    {
                      // ENCODING.fcmeq_p_p_z0_
                      return 1906;
                      break;
                    }
                    case 0x13:
                    {
                      // ENCODING.fcmne_p_p_z0_
                      return 1911;
                      break;
                    }
                    case 0x18:
                    {
                      // ENCODING.fadda_v_p_z_
                      return 1902;
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
            if (b & 0x40)
            {
              if (b & 0x80)
              {
                if (c & 0x20)
                {
                  // ENCODING.fnmad_z_p_zzz_
                  return 1996;
                }
                else
                {
                  if (a & 0x10)
                  {
                    // ENCODING.facge_p_p_zz_
                    return 1898;
                  }
                  else
                  {
                    // ENCODING.fcmuo_p_p_zz_
                    return 1916;
                  }
                }
              }
              else
              {
                if (c & 0x20)
                {
                  // ENCODING.fnmla_z_p_zzz_
                  return 1997;
                }
                else
                {
                  if (a & 0x10)
                  {
                    // ENCODING.fcmgt_p_p_zz_
                    return 1913;
                  }
                  else
                  {
                    // ENCODING.fcmge_p_p_zz_
                    return 1914;
                  }
                }
              }
            }
            else
            {
              if (b & 0x80)
              {
                if (c & 0x20)
                {
                  // ENCODING.fmad_z_p_zzz_
                  return 1952;
                }
                else
                {
                  // the following switch contains 4 case.
                  switch (c & 0x18)
                  {
                    case 0x00:
                    {
                      // the following switch contains 8 case.
                      switch (c & 0x07)
                      {
                        case 0x00:
                        {
                          // ENCODING.fadd_z_p_zz_
                          return 1900;
                          break;
                        }
                        case 0x01:
                        {
                          // ENCODING.fsub_z_p_zz_
                          return 2015;
                          break;
                        }
                        case 0x02:
                        {
                          // ENCODING.fmul_z_p_zz_
                          return 1989;
                          break;
                        }
                        case 0x03:
                        {
                          // ENCODING.fsubr_z_p_zz_
                          return 2018;
                          break;
                        }
                        case 0x04:
                        {
                          // ENCODING.fmaxnm_z_p_zz_
                          return 1956;
                          break;
                        }
                        case 0x05:
                        {
                          // ENCODING.fminnm_z_p_zz_
                          return 1964;
                          break;
                        }
                        case 0x06:
                        {
                          // ENCODING.fmax_z_p_zz_
                          return 1954;
                          break;
                        }
                        case 0x07:
                        {
                          // ENCODING.fmin_z_p_zz_
                          return 1962;
                          break;
                        }
                        default: break;
                      }
                      break;
                    }
                    case 0x08:
                    {
                      // the following switch contains 5 case.
                      switch (c & 0x07)
                      {
                        case 0x00:
                        {
                          // ENCODING.fabd_z_p_zz_
                          return 1895;
                          break;
                        }
                        case 0x01:
                        {
                          // ENCODING.fscale_z_p_zz_
                          return 2012;
                          break;
                        }
                        case 0x02:
                        {
                          // ENCODING.fmulx_z_p_zz_
                          return 1994;
                          break;
                        }
                        case 0x04:
                        {
                          // ENCODING.fdivr_z_p_zz_
                          return 1948;
                          break;
                        }
                        case 0x05:
                        {
                          // ENCODING.fdiv_z_p_zz_
                          return 1947;
                          break;
                        }
                        default: break;
                      }
                      break;
                    }
                    case 0x10:
                    {
                      // ENCODING.ftmad_z_zzi_
                      return 2019;
                      break;
                    }
                    case 0x18:
                    {
                      // the following switch contains 8 case.
                      switch (c & 0x07)
                      {
                        case 0x00:
                        {
                          // ENCODING.fadd_z_p_zs_
                          return 1899;
                          break;
                        }
                        case 0x01:
                        {
                          // ENCODING.fsub_z_p_zs_
                          return 2014;
                          break;
                        }
                        case 0x02:
                        {
                          // ENCODING.fmul_z_p_zs_
                          return 1988;
                          break;
                        }
                        case 0x03:
                        {
                          // ENCODING.fsubr_z_p_zs_
                          return 2017;
                          break;
                        }
                        case 0x04:
                        {
                          // ENCODING.fmaxnm_z_p_zs_
                          return 1955;
                          break;
                        }
                        case 0x05:
                        {
                          // ENCODING.fminnm_z_p_zs_
                          return 1963;
                          break;
                        }
                        case 0x06:
                        {
                          // ENCODING.fmax_z_p_zs_
                          return 1953;
                          break;
                        }
                        case 0x07:
                        {
                          // ENCODING.fmin_z_p_zs_
                          return 1961;
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
              else
              {
                if (c & 0x20)
                {
                  // ENCODING.fmla_z_p_zzz_
                  return 1969;
                }
                else
                {
                  // the following switch contains 6 case.
                  switch (b & 0x1c)
                  {
                    case 0x00:
                    {
                      // ENCODING.fadd_z_zz_
                      return 1901;
                      break;
                    }
                    case 0x04:
                    {
                      // ENCODING.fsub_z_zz_
                      return 2016;
                      break;
                    }
                    case 0x08:
                    {
                      // ENCODING.fmul_z_zz_
                      return 1990;
                      break;
                    }
                    case 0x0c:
                    {
                      // ENCODING.ftsmul_z_zz_
                      return 2020;
                      break;
                    }
                    case 0x18:
                    {
                      // ENCODING.frecps_z_zz_
                      return 2001;
                      break;
                    }
                    case 0x1c:
                    {
                      // ENCODING.frsqrts_z_zz_
                      return 2011;
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
        case 0x80:
        {
          if (b & 0x20)
          {
            if (b & 0x40)
            {
              if (b & 0x80)
              {
                // the following switch contains 4 case.
                switch (c & 0xc0)
                {
                  case 0x00:
                  {
                    if (c & 0x20)
                    {
                      // ENCODING.ldff1b_z_p_ai_s
                      return 2175;
                    }
                    else
                    {
                      // ENCODING.prfb_i_p_ai_s
                      return 2326;
                    }
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.ld1rb_z_p_bi_u64
                    return 2080;
                    break;
                  }
                  case 0x80:
                  {
                    if (c & 0x20)
                    {
                      // ENCODING.ldff1h_z_p_ai_s
                      return 2190;
                    }
                    else
                    {
                      // ENCODING.prfh_i_p_ai_s
                      return 2340;
                    }
                    break;
                  }
                  case 0xc0:
                  {
                    // ENCODING.ld1rh_z_p_bi_u64
                    return 2084;
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
                    // ENCODING.ldff1b_z_p_bz_s_x32_unscaled
                    return 2182;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.prfd_i_p_bz_s_x32_scaled
                    return 2337;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.ldff1h_z_p_bz_s_x32_unscaled
                    return 2198;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.ldff1h_z_p_bz_s_x32_scaled
                    return 2195;
                    break;
                  }
                  default: break;
                }
              }
            }
            else
            {
              if (b & 0x80)
              {
                // the following switch contains 4 case.
                switch (c & 0xc0)
                {
                  case 0x00:
                  {
                    if (c & 0x20)
                    {
                      // ENCODING.ldff1sb_z_p_ai_s
                      return 2201;
                    }
                    else
                    {
                      // ENCODING.ldnt1b_z_p_ar_s_x32_unscaled
                      return 2251;
                    }
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.ld1rb_z_p_bi_u16
                    return 2078;
                    break;
                  }
                  case 0x80:
                  {
                    if (c & 0x20)
                    {
                      // ENCODING.ldff1sh_z_p_ai_s
                      return 2209;
                    }
                    else
                    {
                      // ENCODING.ldnt1h_z_p_ar_s_x32_unscaled
                      return 2258;
                    }
                    break;
                  }
                  case 0xc0:
                  {
                    // ENCODING.ld1rh_z_p_bi_u16
                    return 2082;
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
                    // ENCODING.ldff1sb_z_p_bz_s_x32_unscaled
                    return 2207;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.prfh_i_p_bz_s_x32_scaled
                    return 2344;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.ldff1sh_z_p_bz_s_x32_unscaled
                    return 2216;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.ldff1sh_z_p_bz_s_x32_scaled
                    return 2213;
                    break;
                  }
                  default: break;
                }
              }
            }
          }
          else
          {
            if (b & 0x40)
            {
              if (b & 0x80)
              {
                // the following switch contains 4 case.
                switch (c & 0xc0)
                {
                  case 0x00:
                  {
                    if (c & 0x20)
                    {
                      // ENCODING.ld1b_z_p_ai_s
                      return 2043;
                    }
                    else
                    {
                      // ENCODING.prfb_i_p_br_s
                      return 2329;
                    }
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.ld1rb_z_p_bi_u32
                    return 2079;
                    break;
                  }
                  case 0x80:
                  {
                    if (c & 0x20)
                    {
                      // ENCODING.ld1h_z_p_ai_s
                      return 2063;
                    }
                    else
                    {
                      // ENCODING.prfh_i_p_br_s
                      return 2343;
                    }
                    break;
                  }
                  case 0xc0:
                  {
                    // ENCODING.ld1rh_z_p_bi_u32
                    return 2083;
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
                    // ENCODING.ld1b_z_p_bz_s_x32_unscaled
                    return 2054;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.prfw_i_p_bz_s_x32_scaled
                    return 2351;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.ld1h_z_p_bz_s_x32_unscaled
                    return 2074;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.ld1h_z_p_bz_s_x32_scaled
                    return 2071;
                    break;
                  }
                  default: break;
                }
              }
            }
            else
            {
              if (b & 0x80)
              {
                // the following switch contains 4 case.
                switch (c & 0xc0)
                {
                  case 0x00:
                  {
                    if (c & 0x20)
                    {
                      // ENCODING.ld1sb_z_p_ai_s
                      return 2109;
                    }
                    else
                    {
                      // ENCODING.ldnt1sb_z_p_ar_s_x32_unscaled
                      return 2262;
                    }
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.ld1rb_z_p_bi_u8
                    return 2077;
                    break;
                  }
                  case 0x80:
                  {
                    if (c & 0x20)
                    {
                      // ENCODING.ld1sh_z_p_ai_s
                      return 2120;
                    }
                    else
                    {
                      // ENCODING.ldnt1sh_z_p_ar_s_x32_unscaled
                      return 2264;
                    }
                    break;
                  }
                  case 0xc0:
                  {
                    // ENCODING.ld1rsw_z_p_bi_s64
                    return 2106;
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
                    // ENCODING.ld1sb_z_p_bz_s_x32_unscaled
                    return 2118;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.prfb_i_p_bz_s_x32_scaled
                    return 2330;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.ld1sh_z_p_bz_s_x32_unscaled
                    return 2129;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.ld1sh_z_p_bz_s_x32_scaled
                    return 2126;
                    break;
                  }
                  default: break;
                }
              }
            }
          }
          break;
        }
        case 0x81:
        {
          if (b & 0x20)
          {
            if (b & 0x40)
            {
              if (b & 0x80)
              {
                // the following switch contains 4 case.
                switch (c & 0xc0)
                {
                  case 0x00:
                  {
                    if (c & 0x20)
                    {
                      // ENCODING.ldff1w_z_p_ai_s
                      return 2225;
                    }
                    else
                    {
                      // ENCODING.prfw_i_p_ai_s
                      return 2347;
                    }
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.ld1rw_z_p_bi_u64
                    return 2108;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.prfd_i_p_ai_s
                    return 2333;
                    break;
                  }
                  case 0xc0:
                  {
                    // ENCODING.ld1rd_z_p_bi_u64
                    return 2081;
                    break;
                  }
                  default: break;
                }
              }
              else
              {
                if (c & 0x80)
                {
                  // ENCODING.prfd_i_p_bi_s
                  return 2335;
                }
                else
                {
                  if (c & 0x20)
                  {
                    // ENCODING.ldff1w_z_p_bz_s_x32_scaled
                    return 2229;
                  }
                  else
                  {
                    // ENCODING.ldff1w_z_p_bz_s_x32_unscaled
                    return 2232;
                  }
                }
              }
            }
            else
            {
              if (b & 0x80)
              {
                // the following switch contains 3 case.
                switch (c & 0xc0)
                {
                  case 0x00:
                  {
                    // ENCODING.ldnt1w_z_p_ar_s_x32_unscaled
                    return 2267;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.ld1rsh_z_p_bi_s32
                    return 2104;
                    break;
                  }
                  case 0xc0:
                  {
                    // ENCODING.ld1rsb_z_p_bi_s32
                    return 2102;
                    break;
                  }
                  default: break;
                }
              }
              else
              {
                // ENCODING.prfh_i_p_bi_s
                return 2342;
              }
            }
          }
          else
          {
            if (b & 0x40)
            {
              if (b & 0x80)
              {
                // the following switch contains 4 case.
                switch (c & 0xc0)
                {
                  case 0x00:
                  {
                    if (c & 0x20)
                    {
                      // ENCODING.ld1w_z_p_ai_s
                      return 2139;
                    }
                    else
                    {
                      // ENCODING.prfw_i_p_br_s
                      return 2350;
                    }
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.ld1rw_z_p_bi_u32
                    return 2107;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.prfd_i_p_br_s
                    return 2336;
                    break;
                  }
                  case 0xc0:
                  {
                    // ENCODING.ld1rsb_z_p_bi_s16
                    return 2101;
                    break;
                  }
                  default: break;
                }
              }
              else
              {
                if (c & 0x80)
                {
                  if (c & 0x40)
                  {
                    // ENCODING.prfw_i_p_bi_s
                    return 2349;
                  }
                  else
                  {
                    // ENCODING.ldr_z_bi_
                    return 2272;
                  }
                }
                else
                {
                  if (c & 0x20)
                  {
                    // ENCODING.ld1w_z_p_bz_s_x32_scaled
                    return 2145;
                  }
                  else
                  {
                    // ENCODING.ld1w_z_p_bz_s_x32_unscaled
                    return 2148;
                  }
                }
              }
            }
            else
            {
              if (b & 0x80)
              {
                if (c & 0x80)
                {
                  // ENCODING.ld1rsb_z_p_bi_s64
                  return 2103;
                }
                else
                {
                  // ENCODING.ld1rsh_z_p_bi_s64
                  return 2105;
                }
              }
              else
              {
                if (c & 0x40)
                {
                  // ENCODING.prfb_i_p_bi_s
                  return 2328;
                }
                else
                {
                  // ENCODING.ldr_p_bi_
                  return 2271;
                }
              }
            }
          }
          break;
        }
        case 0xa0:
        {
          if (b & 0x20)
          {
            if (b & 0x40)
            {
              if (b & 0x80)
              {
                // the following switch contains 8 case.
                switch (c & 0xe0)
                {
                  case 0x00:
                  {
                    // ENCODING.ldnt1b_z_p_bi_contiguous
                    return 2253;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.ld2b_z_p_bi_contiguous
                    return 2151;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.ld3b_z_p_bi_contiguous
                    return 2159;
                    break;
                  }
                  case 0x60:
                  {
                    // ENCODING.ld4b_z_p_bi_contiguous
                    return 2167;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.ldnt1h_z_p_bi_contiguous
                    return 2260;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.ld2h_z_p_bi_contiguous
                    return 2155;
                    break;
                  }
                  case 0xc0:
                  {
                    // ENCODING.ld3h_z_p_bi_contiguous
                    return 2163;
                    break;
                  }
                  case 0xe0:
                  {
                    // ENCODING.ld4h_z_p_bi_contiguous
                    return 2171;
                    break;
                  }
                  default: break;
                }
              }
              else
              {
                // the following switch contains 8 case.
                switch (c & 0xe0)
                {
                  case 0x00:
                  {
                    // ENCODING.ldff1b_z_p_br_u8
                    return 2177;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.ldff1b_z_p_br_u16
                    return 2178;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.ldff1b_z_p_br_u32
                    return 2179;
                    break;
                  }
                  case 0x60:
                  {
                    // ENCODING.ldff1b_z_p_br_u64
                    return 2180;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.ldff1sw_z_p_br_s64
                    return 2220;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.ldff1h_z_p_br_u16
                    return 2192;
                    break;
                  }
                  case 0xc0:
                  {
                    // ENCODING.ldff1h_z_p_br_u32
                    return 2193;
                    break;
                  }
                  case 0xe0:
                  {
                    // ENCODING.ldff1h_z_p_br_u64
                    return 2194;
                    break;
                  }
                  default: break;
                }
              }
            }
            else
            {
              if (b & 0x80)
              {
                // the following switch contains 16 case.
                switch (c & 0xf0)
                {
                  case 0x00:
                  {
                    // ENCODING.ld1b_z_p_bi_u8
                    return 2045;
                    break;
                  }
                  case 0x10:
                  {
                    // ENCODING.ldnf1b_z_p_bi_u8
                    return 2235;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.ld1b_z_p_bi_u16
                    return 2046;
                    break;
                  }
                  case 0x30:
                  {
                    // ENCODING.ldnf1b_z_p_bi_u16
                    return 2236;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.ld1b_z_p_bi_u32
                    return 2047;
                    break;
                  }
                  case 0x50:
                  {
                    // ENCODING.ldnf1b_z_p_bi_u32
                    return 2237;
                    break;
                  }
                  case 0x60:
                  {
                    // ENCODING.ld1b_z_p_bi_u64
                    return 2048;
                    break;
                  }
                  case 0x70:
                  {
                    // ENCODING.ldnf1b_z_p_bi_u64
                    return 2238;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.ld1sw_z_p_bi_s64
                    return 2133;
                    break;
                  }
                  case 0x90:
                  {
                    // ENCODING.ldnf1sw_z_p_bi_s64
                    return 2248;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.ld1h_z_p_bi_u16
                    return 2065;
                    break;
                  }
                  case 0xb0:
                  {
                    // ENCODING.ldnf1h_z_p_bi_u16
                    return 2240;
                    break;
                  }
                  case 0xc0:
                  {
                    // ENCODING.ld1h_z_p_bi_u32
                    return 2066;
                    break;
                  }
                  case 0xd0:
                  {
                    // ENCODING.ldnf1h_z_p_bi_u32
                    return 2241;
                    break;
                  }
                  case 0xe0:
                  {
                    // ENCODING.ld1h_z_p_bi_u64
                    return 2067;
                    break;
                  }
                  case 0xf0:
                  {
                    // ENCODING.ldnf1h_z_p_bi_u64
                    return 2242;
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
                    // ENCODING.ld1rqb_z_p_bi_u8
                    return 2093;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.ld1rob_z_p_bi_u8
                    return 2085;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.ld1rqh_z_p_bi_u16
                    return 2097;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.ld1roh_z_p_bi_u16
                    return 2089;
                    break;
                  }
                  default: break;
                }
              }
            }
          }
          else
          {
            if (b & 0x40)
            {
              if (b & 0x80)
              {
                // the following switch contains 8 case.
                switch (c & 0xe0)
                {
                  case 0x00:
                  {
                    // ENCODING.ldnt1b_z_p_br_contiguous
                    return 2254;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.ld2b_z_p_br_contiguous
                    return 2152;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.ld3b_z_p_br_contiguous
                    return 2160;
                    break;
                  }
                  case 0x60:
                  {
                    // ENCODING.ld4b_z_p_br_contiguous
                    return 2168;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.ldnt1h_z_p_br_contiguous
                    return 2261;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.ld2h_z_p_br_contiguous
                    return 2156;
                    break;
                  }
                  case 0xc0:
                  {
                    // ENCODING.ld3h_z_p_br_contiguous
                    return 2164;
                    break;
                  }
                  case 0xe0:
                  {
                    // ENCODING.ld4h_z_p_br_contiguous
                    return 2172;
                    break;
                  }
                  default: break;
                }
              }
              else
              {
                // the following switch contains 8 case.
                switch (c & 0xe0)
                {
                  case 0x00:
                  {
                    // ENCODING.ld1b_z_p_br_u8
                    return 2049;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.ld1b_z_p_br_u16
                    return 2050;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.ld1b_z_p_br_u32
                    return 2051;
                    break;
                  }
                  case 0x60:
                  {
                    // ENCODING.ld1b_z_p_br_u64
                    return 2052;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.ld1sw_z_p_br_s64
                    return 2134;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.ld1h_z_p_br_u16
                    return 2068;
                    break;
                  }
                  case 0xc0:
                  {
                    // ENCODING.ld1h_z_p_br_u32
                    return 2069;
                    break;
                  }
                  case 0xe0:
                  {
                    // ENCODING.ld1h_z_p_br_u64
                    return 2070;
                    break;
                  }
                  default: break;
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
                  // ENCODING.ld1rqb_z_p_br_contiguous
                  return 2094;
                  break;
                }
                case 0x20:
                {
                  // ENCODING.ld1rob_z_p_br_contiguous
                  return 2086;
                  break;
                }
                case 0x80:
                {
                  // ENCODING.ld1rqh_z_p_br_contiguous
                  return 2098;
                  break;
                }
                case 0xa0:
                {
                  // ENCODING.ld1roh_z_p_br_contiguous
                  return 2090;
                  break;
                }
                default: break;
              }
            }
          }
          break;
        }
        case 0xa1:
        {
          if (b & 0x20)
          {
            if (b & 0x40)
            {
              if (b & 0x80)
              {
                // the following switch contains 8 case.
                switch (c & 0xe0)
                {
                  case 0x00:
                  {
                    // ENCODING.ldnt1w_z_p_bi_contiguous
                    return 2269;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.ld2w_z_p_bi_contiguous
                    return 2157;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.ld3w_z_p_bi_contiguous
                    return 2165;
                    break;
                  }
                  case 0x60:
                  {
                    // ENCODING.ld4w_z_p_bi_contiguous
                    return 2173;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.ldnt1d_z_p_bi_contiguous
                    return 2256;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.ld2d_z_p_bi_contiguous
                    return 2153;
                    break;
                  }
                  case 0xc0:
                  {
                    // ENCODING.ld3d_z_p_bi_contiguous
                    return 2161;
                    break;
                  }
                  case 0xe0:
                  {
                    // ENCODING.ld4d_z_p_bi_contiguous
                    return 2169;
                    break;
                  }
                  default: break;
                }
              }
              else
              {
                // the following switch contains 8 case.
                switch (c & 0xe0)
                {
                  case 0x00:
                  {
                    // ENCODING.ldff1sh_z_p_br_s64
                    return 2212;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.ldff1sh_z_p_br_s32
                    return 2211;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.ldff1w_z_p_br_u32
                    return 2227;
                    break;
                  }
                  case 0x60:
                  {
                    // ENCODING.ldff1w_z_p_br_u64
                    return 2228;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.ldff1sb_z_p_br_s64
                    return 2205;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.ldff1sb_z_p_br_s32
                    return 2204;
                    break;
                  }
                  case 0xc0:
                  {
                    // ENCODING.ldff1sb_z_p_br_s16
                    return 2203;
                    break;
                  }
                  case 0xe0:
                  {
                    // ENCODING.ldff1d_z_p_br_u64
                    return 2185;
                    break;
                  }
                  default: break;
                }
              }
            }
            else
            {
              if (b & 0x80)
              {
                // the following switch contains 16 case.
                switch (c & 0xf0)
                {
                  case 0x00:
                  {
                    // ENCODING.ld1sh_z_p_bi_s64
                    return 2123;
                    break;
                  }
                  case 0x10:
                  {
                    // ENCODING.ldnf1sh_z_p_bi_s64
                    return 2247;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.ld1sh_z_p_bi_s32
                    return 2122;
                    break;
                  }
                  case 0x30:
                  {
                    // ENCODING.ldnf1sh_z_p_bi_s32
                    return 2246;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.ld1w_z_p_bi_u32
                    return 2141;
                    break;
                  }
                  case 0x50:
                  {
                    // ENCODING.ldnf1w_z_p_bi_u32
                    return 2249;
                    break;
                  }
                  case 0x60:
                  {
                    // ENCODING.ld1w_z_p_bi_u64
                    return 2142;
                    break;
                  }
                  case 0x70:
                  {
                    // ENCODING.ldnf1w_z_p_bi_u64
                    return 2250;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.ld1sb_z_p_bi_s64
                    return 2113;
                    break;
                  }
                  case 0x90:
                  {
                    // ENCODING.ldnf1sb_z_p_bi_s64
                    return 2245;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.ld1sb_z_p_bi_s32
                    return 2112;
                    break;
                  }
                  case 0xb0:
                  {
                    // ENCODING.ldnf1sb_z_p_bi_s32
                    return 2244;
                    break;
                  }
                  case 0xc0:
                  {
                    // ENCODING.ld1sb_z_p_bi_s16
                    return 2111;
                    break;
                  }
                  case 0xd0:
                  {
                    // ENCODING.ldnf1sb_z_p_bi_s16
                    return 2243;
                    break;
                  }
                  case 0xe0:
                  {
                    // ENCODING.ld1d_z_p_bi_u64
                    return 2057;
                    break;
                  }
                  case 0xf0:
                  {
                    // ENCODING.ldnf1d_z_p_bi_u64
                    return 2239;
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
                    // ENCODING.ld1rqw_z_p_bi_u32
                    return 2099;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.ld1row_z_p_bi_u32
                    return 2091;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.ld1rqd_z_p_bi_u64
                    return 2095;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.ld1rod_z_p_bi_u64
                    return 2087;
                    break;
                  }
                  default: break;
                }
              }
            }
          }
          else
          {
            if (b & 0x40)
            {
              if (b & 0x80)
              {
                // the following switch contains 8 case.
                switch (c & 0xe0)
                {
                  case 0x00:
                  {
                    // ENCODING.ldnt1w_z_p_br_contiguous
                    return 2270;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.ld2w_z_p_br_contiguous
                    return 2158;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.ld3w_z_p_br_contiguous
                    return 2166;
                    break;
                  }
                  case 0x60:
                  {
                    // ENCODING.ld4w_z_p_br_contiguous
                    return 2174;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.ldnt1d_z_p_br_contiguous
                    return 2257;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.ld2d_z_p_br_contiguous
                    return 2154;
                    break;
                  }
                  case 0xc0:
                  {
                    // ENCODING.ld3d_z_p_br_contiguous
                    return 2162;
                    break;
                  }
                  case 0xe0:
                  {
                    // ENCODING.ld4d_z_p_br_contiguous
                    return 2170;
                    break;
                  }
                  default: break;
                }
              }
              else
              {
                // the following switch contains 8 case.
                switch (c & 0xe0)
                {
                  case 0x00:
                  {
                    // ENCODING.ld1sh_z_p_br_s64
                    return 2125;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.ld1sh_z_p_br_s32
                    return 2124;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.ld1w_z_p_br_u32
                    return 2143;
                    break;
                  }
                  case 0x60:
                  {
                    // ENCODING.ld1w_z_p_br_u64
                    return 2144;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.ld1sb_z_p_br_s64
                    return 2116;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.ld1sb_z_p_br_s32
                    return 2115;
                    break;
                  }
                  case 0xc0:
                  {
                    // ENCODING.ld1sb_z_p_br_s16
                    return 2114;
                    break;
                  }
                  case 0xe0:
                  {
                    // ENCODING.ld1d_z_p_br_u64
                    return 2058;
                    break;
                  }
                  default: break;
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
                  // ENCODING.ld1rqw_z_p_br_contiguous
                  return 2100;
                  break;
                }
                case 0x20:
                {
                  // ENCODING.ld1row_z_p_br_contiguous
                  return 2092;
                  break;
                }
                case 0x80:
                {
                  // ENCODING.ld1rqd_z_p_br_contiguous
                  return 2096;
                  break;
                }
                case 0xa0:
                {
                  // ENCODING.ld1rod_z_p_br_contiguous
                  return 2088;
                  break;
                }
                default: break;
              }
            }
          }
          break;
        }
        case 0xc0:
        {
          if (b & 0x20)
          {
            if (b & 0x40)
            {
              if (b & 0x80)
              {
                // the following switch contains 8 case.
                switch (c & 0xe0)
                {
                  case 0x00:
                  {
                    // ENCODING.prfb_i_p_ai_d
                    return 2327;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.ldff1b_z_p_ai_d
                    return 2176;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.ldff1b_z_p_bz_d_64_unscaled
                    return 2183;
                    break;
                  }
                  case 0x60:
                  {
                    // ENCODING.prfd_i_p_bz_d_64_scaled
                    return 2339;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.prfh_i_p_ai_d
                    return 2341;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.ldff1h_z_p_ai_d
                    return 2191;
                    break;
                  }
                  case 0xc0:
                  {
                    // ENCODING.ldff1h_z_p_bz_d_64_unscaled
                    return 2200;
                    break;
                  }
                  case 0xe0:
                  {
                    // ENCODING.ldff1h_z_p_bz_d_64_scaled
                    return 2199;
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
                    // ENCODING.ldff1b_z_p_bz_d_x32_unscaled
                    return 2181;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.prfd_i_p_bz_d_x32_scaled
                    return 2338;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.ldff1h_z_p_bz_d_x32_unscaled
                    return 2197;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.ldff1h_z_p_bz_d_x32_scaled
                    return 2196;
                    break;
                  }
                  default: break;
                }
              }
            }
            else
            {
              if (b & 0x80)
              {
                // the following switch contains 6 case.
                switch ((c & 0xe0) - 32)
                {
                  case 0x00:
                  {
                    // ENCODING.ldff1sb_z_p_ai_d
                    return 2202;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.ldff1sb_z_p_bz_d_64_unscaled
                    return 2208;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.prfh_i_p_bz_d_64_scaled
                    return 2346;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.ldff1sh_z_p_ai_d
                    return 2210;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.ldff1sh_z_p_bz_d_64_unscaled
                    return 2218;
                    break;
                  }
                  case 0xc0:
                  {
                    // ENCODING.ldff1sh_z_p_bz_d_64_scaled
                    return 2217;
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
                    // ENCODING.ldff1sb_z_p_bz_d_x32_unscaled
                    return 2206;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.prfh_i_p_bz_d_x32_scaled
                    return 2345;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.ldff1sh_z_p_bz_d_x32_unscaled
                    return 2215;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.ldff1sh_z_p_bz_d_x32_scaled
                    return 2214;
                    break;
                  }
                  default: break;
                }
              }
            }
          }
          else
          {
            if (b & 0x40)
            {
              if (b & 0x80)
              {
                // the following switch contains 8 case.
                switch (c & 0xe0)
                {
                  case 0x00:
                  {
                    // ENCODING.ldnt1b_z_p_ar_d_64_unscaled
                    return 2252;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.ld1b_z_p_ai_d
                    return 2044;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.ld1b_z_p_bz_d_64_unscaled
                    return 2055;
                    break;
                  }
                  case 0x60:
                  {
                    // ENCODING.prfw_i_p_bz_d_64_scaled
                    return 2353;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.ldnt1h_z_p_ar_d_64_unscaled
                    return 2259;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.ld1h_z_p_ai_d
                    return 2064;
                    break;
                  }
                  case 0xc0:
                  {
                    // ENCODING.ld1h_z_p_bz_d_64_unscaled
                    return 2076;
                    break;
                  }
                  case 0xe0:
                  {
                    // ENCODING.ld1h_z_p_bz_d_64_scaled
                    return 2075;
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
                    // ENCODING.ld1b_z_p_bz_d_x32_unscaled
                    return 2053;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.prfw_i_p_bz_d_x32_scaled
                    return 2352;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.ld1h_z_p_bz_d_x32_unscaled
                    return 2073;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.ld1h_z_p_bz_d_x32_scaled
                    return 2072;
                    break;
                  }
                  default: break;
                }
              }
            }
            else
            {
              if (b & 0x80)
              {
                // the following switch contains 8 case.
                switch (c & 0xe0)
                {
                  case 0x00:
                  {
                    // ENCODING.ldnt1sb_z_p_ar_d_64_unscaled
                    return 2263;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.ld1sb_z_p_ai_d
                    return 2110;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.ld1sb_z_p_bz_d_64_unscaled
                    return 2119;
                    break;
                  }
                  case 0x60:
                  {
                    // ENCODING.prfb_i_p_bz_d_64_scaled
                    return 2332;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.ldnt1sh_z_p_ar_d_64_unscaled
                    return 2265;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.ld1sh_z_p_ai_d
                    return 2121;
                    break;
                  }
                  case 0xc0:
                  {
                    // ENCODING.ld1sh_z_p_bz_d_64_unscaled
                    return 2131;
                    break;
                  }
                  case 0xe0:
                  {
                    // ENCODING.ld1sh_z_p_bz_d_64_scaled
                    return 2130;
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
                    // ENCODING.ld1sb_z_p_bz_d_x32_unscaled
                    return 2117;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.prfb_i_p_bz_d_x32_scaled
                    return 2331;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.ld1sh_z_p_bz_d_x32_unscaled
                    return 2128;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.ld1sh_z_p_bz_d_x32_scaled
                    return 2127;
                    break;
                  }
                  default: break;
                }
              }
            }
          }
          break;
        }
        case 0xc1:
        {
          if (b & 0x20)
          {
            if (b & 0x40)
            {
              if (b & 0x80)
              {
                // the following switch contains 8 case.
                switch (c & 0xe0)
                {
                  case 0x00:
                  {
                    // ENCODING.prfw_i_p_ai_d
                    return 2348;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.ldff1w_z_p_ai_d
                    return 2226;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.ldff1w_z_p_bz_d_64_unscaled
                    return 2234;
                    break;
                  }
                  case 0x60:
                  {
                    // ENCODING.ldff1w_z_p_bz_d_64_scaled
                    return 2233;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.prfd_i_p_ai_d
                    return 2334;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.ldff1d_z_p_ai_d
                    return 2184;
                    break;
                  }
                  case 0xc0:
                  {
                    // ENCODING.ldff1d_z_p_bz_d_64_unscaled
                    return 2189;
                    break;
                  }
                  case 0xe0:
                  {
                    // ENCODING.ldff1d_z_p_bz_d_64_scaled
                    return 2188;
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
                    // ENCODING.ldff1w_z_p_bz_d_x32_unscaled
                    return 2231;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.ldff1w_z_p_bz_d_x32_scaled
                    return 2230;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.ldff1d_z_p_bz_d_x32_unscaled
                    return 2187;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.ldff1d_z_p_bz_d_x32_scaled
                    return 2186;
                    break;
                  }
                  default: break;
                }
              }
            }
            else
            {
              if (b & 0x80)
              {
                // the following switch contains 3 case.
                switch ((c & 0x60) - 32)
                {
                  case 0x00:
                  {
                    // ENCODING.ldff1sw_z_p_ai_d
                    return 2219;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.ldff1sw_z_p_bz_d_64_unscaled
                    return 2224;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.ldff1sw_z_p_bz_d_64_scaled
                    return 2223;
                    break;
                  }
                  default: break;
                }
              }
              else
              {
                if (c & 0x20)
                {
                  // ENCODING.ldff1sw_z_p_bz_d_x32_scaled
                  return 2221;
                }
                else
                {
                  // ENCODING.ldff1sw_z_p_bz_d_x32_unscaled
                  return 2222;
                }
              }
            }
          }
          else
          {
            if (b & 0x40)
            {
              if (b & 0x80)
              {
                // the following switch contains 8 case.
                switch (c & 0xe0)
                {
                  case 0x00:
                  {
                    // ENCODING.ldnt1w_z_p_ar_d_64_unscaled
                    return 2268;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.ld1w_z_p_ai_d
                    return 2140;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.ld1w_z_p_bz_d_64_unscaled
                    return 2150;
                    break;
                  }
                  case 0x60:
                  {
                    // ENCODING.ld1w_z_p_bz_d_64_scaled
                    return 2149;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.ldnt1d_z_p_ar_d_64_unscaled
                    return 2255;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.ld1d_z_p_ai_d
                    return 2056;
                    break;
                  }
                  case 0xc0:
                  {
                    // ENCODING.ld1d_z_p_bz_d_64_unscaled
                    return 2062;
                    break;
                  }
                  case 0xe0:
                  {
                    // ENCODING.ld1d_z_p_bz_d_64_scaled
                    return 2061;
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
                    // ENCODING.ld1w_z_p_bz_d_x32_unscaled
                    return 2147;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.ld1w_z_p_bz_d_x32_scaled
                    return 2146;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.ld1d_z_p_bz_d_x32_unscaled
                    return 2060;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.ld1d_z_p_bz_d_x32_scaled
                    return 2059;
                    break;
                  }
                  default: break;
                }
              }
            }
            else
            {
              if (b & 0x80)
              {
                // the following switch contains 4 case.
                switch (c & 0x60)
                {
                  case 0x00:
                  {
                    // ENCODING.ldnt1sw_z_p_ar_d_64_unscaled
                    return 2266;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.ld1sw_z_p_ai_d
                    return 2132;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.ld1sw_z_p_bz_d_64_unscaled
                    return 2138;
                    break;
                  }
                  case 0x60:
                  {
                    // ENCODING.ld1sw_z_p_bz_d_64_scaled
                    return 2137;
                    break;
                  }
                  default: break;
                }
              }
              else
              {
                if (c & 0x20)
                {
                  // ENCODING.ld1sw_z_p_bz_d_x32_scaled
                  return 2135;
                }
                else
                {
                  // ENCODING.ld1sw_z_p_bz_d_x32_unscaled
                  return 2136;
                }
              }
            }
          }
          break;
        }
        case 0xe0:
        {
          if (b & 0x20)
          {
            if (b & 0x40)
            {
              if (b & 0x80)
              {
                // the following switch contains 4 case.
                switch (c & 0x90)
                {
                  case 0x00:
                  {
                    // ENCODING.st1b_z_p_bi_
                    return 2557;
                    break;
                  }
                  case 0x10:
                  {
                    // the following switch contains 4 case.
                    switch (c & 0x60)
                    {
                      case 0x00:
                      {
                        // ENCODING.stnt1b_z_p_bi_contiguous
                        return 2615;
                        break;
                      }
                      case 0x20:
                      {
                        // ENCODING.st2b_z_p_bi_contiguous
                        return 2589;
                        break;
                      }
                      case 0x40:
                      {
                        // ENCODING.st3b_z_p_bi_contiguous
                        return 2597;
                        break;
                      }
                      case 0x60:
                      {
                        // ENCODING.st4b_z_p_bi_contiguous
                        return 2605;
                        break;
                      }
                      default: break;
                    }
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.st1h_z_p_bi_
                    return 2571;
                    break;
                  }
                  case 0x90:
                  {
                    // the following switch contains 4 case.
                    switch (c & 0x60)
                    {
                      case 0x00:
                      {
                        // ENCODING.stnt1h_z_p_bi_contiguous
                        return 2622;
                        break;
                      }
                      case 0x20:
                      {
                        // ENCODING.st2h_z_p_bi_contiguous
                        return 2593;
                        break;
                      }
                      case 0x40:
                      {
                        // ENCODING.st3h_z_p_bi_contiguous
                        return 2601;
                        break;
                      }
                      case 0x60:
                      {
                        // ENCODING.st4h_z_p_bi_contiguous
                        return 2609;
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
                // the following switch contains 8 case.
                switch (c & 0xe0)
                {
                  case 0x00:
                  {
                    // ENCODING.stnt1b_z_p_br_contiguous
                    return 2616;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.st2b_z_p_br_contiguous
                    return 2590;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.st3b_z_p_br_contiguous
                    return 2598;
                    break;
                  }
                  case 0x60:
                  {
                    // ENCODING.st4b_z_p_br_contiguous
                    return 2606;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.stnt1h_z_p_br_contiguous
                    return 2623;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.st2h_z_p_br_contiguous
                    return 2594;
                    break;
                  }
                  case 0xc0:
                  {
                    // ENCODING.st3h_z_p_br_contiguous
                    return 2602;
                    break;
                  }
                  case 0xe0:
                  {
                    // ENCODING.st4h_z_p_br_contiguous
                    return 2610;
                    break;
                  }
                  default: break;
                }
              }
            }
            else
            {
              if (b & 0x80)
              {
                // the following switch contains 7 case.
                switch (c & 0xe0)
                {
                  case 0x00:
                  {
                    // ENCODING.st1b_z_p_bz_d_64_unscaled
                    return 2561;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.st1b_z_p_ai_d
                    return 2556;
                    break;
                  }
                  case 0x60:
                  {
                    // ENCODING.st1b_z_p_ai_s
                    return 2555;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.st1h_z_p_bz_d_64_unscaled
                    return 2578;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.st1h_z_p_bz_d_64_scaled
                    return 2577;
                    break;
                  }
                  case 0xc0:
                  {
                    // ENCODING.st1h_z_p_ai_d
                    return 2570;
                    break;
                  }
                  case 0xe0:
                  {
                    // ENCODING.st1h_z_p_ai_s
                    return 2569;
                    break;
                  }
                  default: break;
                }
              }
              else
              {
                // the following switch contains 4 case.
                switch (c & 0xc0)
                {
                  case 0x00:
                  {
                    // ENCODING.stnt1b_z_p_ar_d_64_unscaled
                    return 2614;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.stnt1b_z_p_ar_s_x32_unscaled
                    return 2613;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.stnt1h_z_p_ar_d_64_unscaled
                    return 2621;
                    break;
                  }
                  case 0xc0:
                  {
                    // ENCODING.stnt1h_z_p_ar_s_x32_unscaled
                    return 2620;
                    break;
                  }
                  default: break;
                }
              }
            }
          }
          else
          {
            if (b & 0x80)
            {
              // the following switch contains 6 case.
              switch (c & 0xe0)
              {
                case 0x00:
                {
                  // ENCODING.st1b_z_p_bz_d_x32_unscaled
                  return 2559;
                  break;
                }
                case 0x40:
                {
                  // ENCODING.st1b_z_p_bz_s_x32_unscaled
                  return 2560;
                  break;
                }
                case 0x80:
                {
                  // ENCODING.st1h_z_p_bz_d_x32_unscaled
                  return 2575;
                  break;
                }
                case 0xa0:
                {
                  // ENCODING.st1h_z_p_bz_d_x32_scaled
                  return 2574;
                  break;
                }
                case 0xc0:
                {
                  // ENCODING.st1h_z_p_bz_s_x32_unscaled
                  return 2576;
                  break;
                }
                case 0xe0:
                {
                  // ENCODING.st1h_z_p_bz_s_x32_scaled
                  return 2573;
                  break;
                }
                default: break;
              }
            }
            else
            {
              if (c & 0x80)
              {
                // ENCODING.st1h_z_p_br_
                return 2572;
              }
              else
              {
                // ENCODING.st1b_z_p_br_
                return 2558;
              }
            }
          }
          break;
        }
        case 0xe1:
        {
          if (b & 0x20)
          {
            if (b & 0x40)
            {
              if (b & 0x80)
              {
                // the following switch contains 4 case.
                switch (c & 0x90)
                {
                  case 0x00:
                  {
                    // ENCODING.st1w_z_p_bi_
                    return 2581;
                    break;
                  }
                  case 0x10:
                  {
                    // the following switch contains 4 case.
                    switch (c & 0x60)
                    {
                      case 0x00:
                      {
                        // ENCODING.stnt1w_z_p_bi_contiguous
                        return 2626;
                        break;
                      }
                      case 0x20:
                      {
                        // ENCODING.st2w_z_p_bi_contiguous
                        return 2595;
                        break;
                      }
                      case 0x40:
                      {
                        // ENCODING.st3w_z_p_bi_contiguous
                        return 2603;
                        break;
                      }
                      case 0x60:
                      {
                        // ENCODING.st4w_z_p_bi_contiguous
                        return 2611;
                        break;
                      }
                      default: break;
                    }
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.st1d_z_p_bi_
                    return 2563;
                    break;
                  }
                  case 0x90:
                  {
                    // the following switch contains 4 case.
                    switch (c & 0x60)
                    {
                      case 0x00:
                      {
                        // ENCODING.stnt1d_z_p_bi_contiguous
                        return 2618;
                        break;
                      }
                      case 0x20:
                      {
                        // ENCODING.st2d_z_p_bi_contiguous
                        return 2591;
                        break;
                      }
                      case 0x40:
                      {
                        // ENCODING.st3d_z_p_bi_contiguous
                        return 2599;
                        break;
                      }
                      case 0x60:
                      {
                        // ENCODING.st4d_z_p_bi_contiguous
                        return 2607;
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
                // the following switch contains 8 case.
                switch (c & 0xe0)
                {
                  case 0x00:
                  {
                    // ENCODING.stnt1w_z_p_br_contiguous
                    return 2627;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.st2w_z_p_br_contiguous
                    return 2596;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.st3w_z_p_br_contiguous
                    return 2604;
                    break;
                  }
                  case 0x60:
                  {
                    // ENCODING.st4w_z_p_br_contiguous
                    return 2612;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.stnt1d_z_p_br_contiguous
                    return 2619;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.st2d_z_p_br_contiguous
                    return 2592;
                    break;
                  }
                  case 0xc0:
                  {
                    // ENCODING.st3d_z_p_br_contiguous
                    return 2600;
                    break;
                  }
                  case 0xe0:
                  {
                    // ENCODING.st4d_z_p_br_contiguous
                    return 2608;
                    break;
                  }
                  default: break;
                }
              }
            }
            else
            {
              if (b & 0x80)
              {
                // the following switch contains 7 case.
                switch (c & 0xe0)
                {
                  case 0x00:
                  {
                    // ENCODING.st1w_z_p_bz_d_64_unscaled
                    return 2588;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.st1w_z_p_bz_d_64_scaled
                    return 2587;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.st1w_z_p_ai_d
                    return 2580;
                    break;
                  }
                  case 0x60:
                  {
                    // ENCODING.st1w_z_p_ai_s
                    return 2579;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.st1d_z_p_bz_d_64_unscaled
                    return 2568;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.st1d_z_p_bz_d_64_scaled
                    return 2567;
                    break;
                  }
                  case 0xc0:
                  {
                    // ENCODING.st1d_z_p_ai_d
                    return 2562;
                    break;
                  }
                  default: break;
                }
              }
              else
              {
                // the following switch contains 3 case.
                switch (c & 0xc0)
                {
                  case 0x00:
                  {
                    // ENCODING.stnt1w_z_p_ar_d_64_unscaled
                    return 2625;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.stnt1w_z_p_ar_s_x32_unscaled
                    return 2624;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.stnt1d_z_p_ar_d_64_unscaled
                    return 2617;
                    break;
                  }
                  default: break;
                }
              }
            }
          }
          else
          {
            if (b & 0x80)
            {
              // the following switch contains 6 case.
              switch (c & 0xe0)
              {
                case 0x00:
                {
                  // ENCODING.st1w_z_p_bz_d_x32_unscaled
                  return 2585;
                  break;
                }
                case 0x20:
                {
                  // ENCODING.st1w_z_p_bz_d_x32_scaled
                  return 2584;
                  break;
                }
                case 0x40:
                {
                  // ENCODING.st1w_z_p_bz_s_x32_unscaled
                  return 2586;
                  break;
                }
                case 0x60:
                {
                  // ENCODING.st1w_z_p_bz_s_x32_scaled
                  return 2583;
                  break;
                }
                case 0x80:
                {
                  // ENCODING.st1d_z_p_bz_d_x32_unscaled
                  return 2566;
                  break;
                }
                case 0xa0:
                {
                  // ENCODING.st1d_z_p_bz_d_x32_scaled
                  return 2565;
                  break;
                }
                default: break;
              }
            }
            else
            {
              if (b & 0x40)
              {
                if (c & 0x80)
                {
                  if (c & 0x40)
                  {
                    // ENCODING.st1d_z_p_br_
                    return 2564;
                  }
                  else
                  {
                    // ENCODING.str_z_bi_
                    return 2629;
                  }
                }
                else
                {
                  // ENCODING.st1w_z_p_br_
                  return 2582;
                }
              }
              else
              {
                // ENCODING.str_p_bi_
                return 2628;
              }
            }
          }
          break;
        }
        default: break;
      }
      break;
    }
    case 0x08:
    {
      // the following switch contains 26 case.
      switch (d & 0xe3)
      {
        case 0x00:
        {
          if (b & 0x80)
          {
            // the following switch contains 8 case.
            switch (c & 0xe0)
            {
              case 0x00:
              {
                // ENCODING.STLXRB_SR32_ldstexcl
                return 490;
                break;
              }
              case 0x20:
              {
                // ENCODING.CASPL_CP32_ldstexcl
                return 85;
                break;
              }
              case 0x40:
              {
                // ENCODING.LDAXRB_LR32_ldstexcl
                return 187;
                break;
              }
              case 0x60:
              {
                // ENCODING.CASPAL_CP32_ldstexcl
                return 84;
                break;
              }
              case 0x80:
              {
                // ENCODING.STLRB_SL32_ldstexcl
                return 480;
                break;
              }
              case 0xa0:
              {
                // ENCODING.CASLB_C32_ldstexcl
                return 77;
                break;
              }
              case 0xc0:
              {
                // ENCODING.LDARB_LR32_ldstexcl
                return 181;
                break;
              }
              case 0xe0:
              {
                // ENCODING.CASALB_C32_ldstexcl
                return 75;
                break;
              }
              default: break;
            }
          }
          else
          {
            // the following switch contains 8 case.
            switch (c & 0xe0)
            {
              case 0x00:
              {
                // ENCODING.STXRB_SR32_ldstexcl
                return 529;
                break;
              }
              case 0x20:
              {
                // ENCODING.CASP_CP32_ldstexcl
                return 82;
                break;
              }
              case 0x40:
              {
                // ENCODING.LDXRB_LR32_ldstexcl
                return 386;
                break;
              }
              case 0x60:
              {
                // ENCODING.CASPA_CP32_ldstexcl
                return 83;
                break;
              }
              case 0x80:
              {
                // ENCODING.STLLRB_SL32_ldstexcl
                return 476;
                break;
              }
              case 0xa0:
              {
                // ENCODING.CASB_C32_ldstexcl
                return 76;
                break;
              }
              case 0xc0:
              {
                // ENCODING.LDLARB_LR32_ldstexcl
                return 225;
                break;
              }
              case 0xe0:
              {
                // ENCODING.CASAB_C32_ldstexcl
                return 74;
                break;
              }
              default: break;
            }
          }
          break;
        }
        case 0x02:
        {
          if (c & 0x20)
          {
            // ENCODING.BIC_32_log_shift
            return 49;
          }
          else
          {
            // ENCODING.AND_32_log_shift
            return 22;
          }
          break;
        }
        case 0x03:
        {
          if (c & 0x20)
          {
            // ENCODING.ADD_32_addsub_ext
            return 5;
          }
          else
          {
            // ENCODING.ADD_32_addsub_shift
            return 9;
          }
          break;
        }
        case 0x20:
        {
          // the following switch contains 4 case.
          switch (c & 0xc0)
          {
            case 0x00:
            {
              // ENCODING.STNP_32_ldstnapair_offs
              return 492;
              break;
            }
            case 0x40:
            {
              // ENCODING.LDNP_32_ldstnapair_offs
              return 227;
              break;
            }
            case 0x80:
            {
              // ENCODING.STP_32_ldstpair_post
              return 494;
              break;
            }
            case 0xc0:
            {
              // ENCODING.LDP_32_ldstpair_post
              return 229;
              break;
            }
            default: break;
          }
          break;
        }
        case 0x21:
        {
          // the following switch contains 4 case.
          switch (c & 0xc0)
          {
            case 0x00:
            {
              // ENCODING.STP_32_ldstpair_off
              return 498;
              break;
            }
            case 0x40:
            {
              // ENCODING.LDP_32_ldstpair_off
              return 233;
              break;
            }
            case 0x80:
            {
              // ENCODING.STP_32_ldstpair_pre
              return 496;
              break;
            }
            case 0xc0:
            {
              // ENCODING.LDP_32_ldstpair_pre
              return 231;
              break;
            }
            default: break;
          }
          break;
        }
        case 0x22:
        {
          if (c & 0x20)
          {
            // ENCODING.ORN_32_log_shift
            return 406;
          }
          else
          {
            // ENCODING.ORR_32_log_shift
            return 410;
          }
          break;
        }
        case 0x23:
        {
          if (c & 0x20)
          {
            // ENCODING.ADDS_32S_addsub_ext
            return 12;
          }
          else
          {
            // ENCODING.ADDS_32_addsub_shift
            return 16;
          }
          break;
        }
        case 0x40:
        {
          if (b & 0x80)
          {
            // the following switch contains 8 case.
            switch (c & 0xe0)
            {
              case 0x00:
              {
                // ENCODING.STLXRH_SR32_ldstexcl
                return 491;
                break;
              }
              case 0x20:
              {
                // ENCODING.CASPL_CP64_ldstexcl
                return 89;
                break;
              }
              case 0x40:
              {
                // ENCODING.LDAXRH_LR32_ldstexcl
                return 188;
                break;
              }
              case 0x60:
              {
                // ENCODING.CASPAL_CP64_ldstexcl
                return 88;
                break;
              }
              case 0x80:
              {
                // ENCODING.STLRH_SL32_ldstexcl
                return 481;
                break;
              }
              case 0xa0:
              {
                // ENCODING.CASLH_C32_ldstexcl
                return 81;
                break;
              }
              case 0xc0:
              {
                // ENCODING.LDARH_LR32_ldstexcl
                return 182;
                break;
              }
              case 0xe0:
              {
                // ENCODING.CASALH_C32_ldstexcl
                return 79;
                break;
              }
              default: break;
            }
          }
          else
          {
            // the following switch contains 8 case.
            switch (c & 0xe0)
            {
              case 0x00:
              {
                // ENCODING.STXRH_SR32_ldstexcl
                return 530;
                break;
              }
              case 0x20:
              {
                // ENCODING.CASP_CP64_ldstexcl
                return 86;
                break;
              }
              case 0x40:
              {
                // ENCODING.LDXRH_LR32_ldstexcl
                return 387;
                break;
              }
              case 0x60:
              {
                // ENCODING.CASPA_CP64_ldstexcl
                return 87;
                break;
              }
              case 0x80:
              {
                // ENCODING.STLLRH_SL32_ldstexcl
                return 477;
                break;
              }
              case 0xa0:
              {
                // ENCODING.CASH_C32_ldstexcl
                return 80;
                break;
              }
              case 0xc0:
              {
                // ENCODING.LDLARH_LR32_ldstexcl
                return 226;
                break;
              }
              case 0xe0:
              {
                // ENCODING.CASAH_C32_ldstexcl
                return 78;
                break;
              }
              default: break;
            }
          }
          break;
        }
        case 0x42:
        {
          if (c & 0x20)
          {
            // ENCODING.EON_32_log_shift
            return 132;
          }
          else
          {
            // ENCODING.EOR_32_log_shift
            return 136;
          }
          break;
        }
        case 0x43:
        {
          if (c & 0x20)
          {
            // ENCODING.SUB_32_addsub_ext
            return 538;
          }
          else
          {
            // ENCODING.SUB_32_addsub_shift
            return 542;
          }
          break;
        }
        case 0x60:
        {
          if (c & 0x40)
          {
            // ENCODING.LDPSW_64_ldstpair_post
            return 235;
          }
          else
          {
            // ENCODING.STGP_64_ldstpair_post
            return 471;
          }
          break;
        }
        case 0x61:
        {
          // the following switch contains 4 case.
          switch (c & 0xc0)
          {
            case 0x00:
            {
              // ENCODING.STGP_64_ldstpair_off
              return 473;
              break;
            }
            case 0x40:
            {
              // ENCODING.LDPSW_64_ldstpair_off
              return 237;
              break;
            }
            case 0x80:
            {
              // ENCODING.STGP_64_ldstpair_pre
              return 472;
              break;
            }
            case 0xc0:
            {
              // ENCODING.LDPSW_64_ldstpair_pre
              return 236;
              break;
            }
            default: break;
          }
          break;
        }
        case 0x62:
        {
          if (c & 0x20)
          {
            // ENCODING.BICS_32_log_shift
            return 51;
          }
          else
          {
            // ENCODING.ANDS_32_log_shift
            return 26;
          }
          break;
        }
        case 0x63:
        {
          if (c & 0x20)
          {
            // ENCODING.SUBS_32S_addsub_ext
            return 547;
          }
          else
          {
            // ENCODING.SUBS_32_addsub_shift
            return 551;
          }
          break;
        }
        case 0x80:
        {
          if (b & 0x80)
          {
            // the following switch contains 8 case.
            switch (c & 0xe0)
            {
              case 0x00:
              {
                // ENCODING.STLXR_SR32_ldstexcl
                return 488;
                break;
              }
              case 0x20:
              {
                // ENCODING.STLXP_SP32_ldstexcl
                return 486;
                break;
              }
              case 0x40:
              {
                // ENCODING.LDAXR_LR32_ldstexcl
                return 185;
                break;
              }
              case 0x60:
              {
                // ENCODING.LDAXP_LP32_ldstexcl
                return 183;
                break;
              }
              case 0x80:
              {
                // ENCODING.STLR_SL32_ldstexcl
                return 478;
                break;
              }
              case 0xa0:
              {
                // ENCODING.CASL_C32_ldstexcl
                return 69;
                break;
              }
              case 0xc0:
              {
                // ENCODING.LDAR_LR32_ldstexcl
                return 179;
                break;
              }
              case 0xe0:
              {
                // ENCODING.CASAL_C32_ldstexcl
                return 68;
                break;
              }
              default: break;
            }
          }
          else
          {
            // the following switch contains 8 case.
            switch (c & 0xe0)
            {
              case 0x00:
              {
                // ENCODING.STXR_SR32_ldstexcl
                return 527;
                break;
              }
              case 0x20:
              {
                // ENCODING.STXP_SP32_ldstexcl
                return 525;
                break;
              }
              case 0x40:
              {
                // ENCODING.LDXR_LR32_ldstexcl
                return 384;
                break;
              }
              case 0x60:
              {
                // ENCODING.LDXP_LP32_ldstexcl
                return 382;
                break;
              }
              case 0x80:
              {
                // ENCODING.STLLR_SL32_ldstexcl
                return 474;
                break;
              }
              case 0xa0:
              {
                // ENCODING.CAS_C32_ldstexcl
                return 66;
                break;
              }
              case 0xc0:
              {
                // ENCODING.LDLAR_LR32_ldstexcl
                return 223;
                break;
              }
              case 0xe0:
              {
                // ENCODING.CASA_C32_ldstexcl
                return 67;
                break;
              }
              default: break;
            }
          }
          break;
        }
        case 0x82:
        {
          if (c & 0x20)
          {
            // ENCODING.BIC_64_log_shift
            return 50;
          }
          else
          {
            // ENCODING.AND_64_log_shift
            return 23;
          }
          break;
        }
        case 0x83:
        {
          if (c & 0x20)
          {
            // ENCODING.ADD_64_addsub_ext
            return 6;
          }
          else
          {
            // ENCODING.ADD_64_addsub_shift
            return 10;
          }
          break;
        }
        case 0xa0:
        {
          // the following switch contains 4 case.
          switch (c & 0xc0)
          {
            case 0x00:
            {
              // ENCODING.STNP_64_ldstnapair_offs
              return 493;
              break;
            }
            case 0x40:
            {
              // ENCODING.LDNP_64_ldstnapair_offs
              return 228;
              break;
            }
            case 0x80:
            {
              // ENCODING.STP_64_ldstpair_post
              return 495;
              break;
            }
            case 0xc0:
            {
              // ENCODING.LDP_64_ldstpair_post
              return 230;
              break;
            }
            default: break;
          }
          break;
        }
        case 0xa1:
        {
          // the following switch contains 4 case.
          switch (c & 0xc0)
          {
            case 0x00:
            {
              // ENCODING.STP_64_ldstpair_off
              return 499;
              break;
            }
            case 0x40:
            {
              // ENCODING.LDP_64_ldstpair_off
              return 234;
              break;
            }
            case 0x80:
            {
              // ENCODING.STP_64_ldstpair_pre
              return 497;
              break;
            }
            case 0xc0:
            {
              // ENCODING.LDP_64_ldstpair_pre
              return 232;
              break;
            }
            default: break;
          }
          break;
        }
        case 0xa2:
        {
          if (c & 0x20)
          {
            // ENCODING.ORN_64_log_shift
            return 407;
          }
          else
          {
            // ENCODING.ORR_64_log_shift
            return 411;
          }
          break;
        }
        case 0xa3:
        {
          if (c & 0x20)
          {
            // ENCODING.ADDS_64S_addsub_ext
            return 13;
          }
          else
          {
            // ENCODING.ADDS_64_addsub_shift
            return 17;
          }
          break;
        }
        case 0xc0:
        {
          if (b & 0x80)
          {
            // the following switch contains 8 case.
            switch (c & 0xe0)
            {
              case 0x00:
              {
                // ENCODING.STLXR_SR64_ldstexcl
                return 489;
                break;
              }
              case 0x20:
              {
                // ENCODING.STLXP_SP64_ldstexcl
                return 487;
                break;
              }
              case 0x40:
              {
                // ENCODING.LDAXR_LR64_ldstexcl
                return 186;
                break;
              }
              case 0x60:
              {
                // ENCODING.LDAXP_LP64_ldstexcl
                return 184;
                break;
              }
              case 0x80:
              {
                // ENCODING.STLR_SL64_ldstexcl
                return 479;
                break;
              }
              case 0xa0:
              {
                // ENCODING.CASL_C64_ldstexcl
                return 73;
                break;
              }
              case 0xc0:
              {
                // ENCODING.LDAR_LR64_ldstexcl
                return 180;
                break;
              }
              case 0xe0:
              {
                // ENCODING.CASAL_C64_ldstexcl
                return 72;
                break;
              }
              default: break;
            }
          }
          else
          {
            // the following switch contains 8 case.
            switch (c & 0xe0)
            {
              case 0x00:
              {
                // ENCODING.STXR_SR64_ldstexcl
                return 528;
                break;
              }
              case 0x20:
              {
                // ENCODING.STXP_SP64_ldstexcl
                return 526;
                break;
              }
              case 0x40:
              {
                // ENCODING.LDXR_LR64_ldstexcl
                return 385;
                break;
              }
              case 0x60:
              {
                // ENCODING.LDXP_LP64_ldstexcl
                return 383;
                break;
              }
              case 0x80:
              {
                // ENCODING.STLLR_SL64_ldstexcl
                return 475;
                break;
              }
              case 0xa0:
              {
                // ENCODING.CAS_C64_ldstexcl
                return 70;
                break;
              }
              case 0xc0:
              {
                // ENCODING.LDLAR_LR64_ldstexcl
                return 224;
                break;
              }
              case 0xe0:
              {
                // ENCODING.CASA_C64_ldstexcl
                return 71;
                break;
              }
              default: break;
            }
          }
          break;
        }
        case 0xc2:
        {
          if (c & 0x20)
          {
            // ENCODING.EON_64_log_shift
            return 133;
          }
          else
          {
            // ENCODING.EOR_64_log_shift
            return 137;
          }
          break;
        }
        case 0xc3:
        {
          if (c & 0x20)
          {
            // ENCODING.SUB_64_addsub_ext
            return 539;
          }
          else
          {
            // ENCODING.SUB_64_addsub_shift
            return 543;
          }
          break;
        }
        case 0xe2:
        {
          if (c & 0x20)
          {
            // ENCODING.BICS_64_log_shift
            return 52;
          }
          else
          {
            // ENCODING.ANDS_64_log_shift
            return 27;
          }
          break;
        }
        case 0xe3:
        {
          if (c & 0x20)
          {
            // ENCODING.SUBS_64S_addsub_ext
            return 548;
          }
          else
          {
            // ENCODING.SUBS_64_addsub_shift
            return 552;
          }
          break;
        }
        default: break;
      }
      break;
    }
    case 0x0c:
    {
      // the following switch contains 11 case.
      switch (d & 0xa3)
      {
        case 0x00:
        {
          if (b & 0x10)
          {
            // the following switch contains 4 case.
            switch (c & 0xc0)
            {
              case 0x00:
              {
                // ENCODING.ST1_asisdlse_R1_1v
                return 1532;
                break;
              }
              case 0x40:
              {
                // ENCODING.LD1_asisdlse_R1_1v
                return 1229;
                break;
              }
              case 0x80:
              {
                // conflicts:
                // ENCODING.ST1_asisdlsep_I1_i1  : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx011111011xxxxxxxxxxxxx
                // ENCODING.ST1_asisdlsep_R1_r1  : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxx011xxxxxxxxxxxxx
                // Rm!=0b11111
                if ((opcode & 0x001f0000) != 0x001f0000)
                {
                  // ENCODING.ST1_asisdlsep_R1_r1
                  return 1537;
                }
                else
                {
                  // ENCODING.ST1_asisdlsep_I1_i1
                  return 1536;
                }
                break;
              }
              case 0xc0:
              {
                // conflicts:
                // ENCODING.LD1_asisdlsep_I1_i1  : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx011111011xxxxxxxxxxxxx
                // ENCODING.LD1_asisdlsep_R1_r1  : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxx011xxxxxxxxxxxxx
                // Rm!=0b11111
                if ((opcode & 0x001f0000) != 0x001f0000)
                {
                  // ENCODING.LD1_asisdlsep_R1_r1
                  return 1234;
                }
                else
                {
                  // ENCODING.LD1_asisdlsep_I1_i1
                  return 1233;
                }
                break;
              }
              default: break;
            }
          }
          else
          {
            if (b & 0x20)
            {
              if (b & 0x40)
              {
                // the following switch contains 4 case.
                switch (c & 0xc0)
                {
                  case 0x00:
                  {
                    // ENCODING.ST1_asisdlse_R3_3v
                    return 1534;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.LD1_asisdlse_R3_3v
                    return 1231;
                    break;
                  }
                  case 0x80:
                  {
                    // conflicts:
                    // ENCODING.ST1_asisdlsep_I3_i3  : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0111110xxxxxxxxxxxxxxx
                    // ENCODING.ST1_asisdlsep_R3_r3  : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxx0xxxxxxxxxxxxxxx
                    // Rm!=0b11111
                    if ((opcode & 0x001f0000) != 0x001f0000)
                    {
                      // ENCODING.ST1_asisdlsep_R3_r3
                      return 1541;
                    }
                    else
                    {
                      // ENCODING.ST1_asisdlsep_I3_i3
                      return 1540;
                    }
                    break;
                  }
                  case 0xc0:
                  {
                    // conflicts:
                    // ENCODING.LD1_asisdlsep_I3_i3  : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0111110xxxxxxxxxxxxxxx
                    // ENCODING.LD1_asisdlsep_R3_r3  : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxx0xxxxxxxxxxxxxxx
                    // Rm!=0b11111
                    if ((opcode & 0x001f0000) != 0x001f0000)
                    {
                      // ENCODING.LD1_asisdlsep_R3_r3
                      return 1238;
                    }
                    else
                    {
                      // ENCODING.LD1_asisdlsep_I3_i3
                      return 1237;
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
                  switch (c & 0xc0)
                  {
                    case 0x00:
                    {
                      // ENCODING.ST1_asisdlse_R2_2v
                      return 1533;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.LD1_asisdlse_R2_2v
                      return 1230;
                      break;
                    }
                    case 0x80:
                    {
                      // conflicts:
                      // ENCODING.ST1_asisdlsep_I2_i2  : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx011111xxxxxxxxxxxxxxxx
                      // ENCODING.ST1_asisdlsep_R2_r2  : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxxxxxxxxxxxxxx
                      // Rm!=0b11111
                      if ((opcode & 0x001f0000) != 0x001f0000)
                      {
                        // ENCODING.ST1_asisdlsep_R2_r2
                        return 1539;
                      }
                      else
                      {
                        // ENCODING.ST1_asisdlsep_I2_i2
                        return 1538;
                      }
                      break;
                    }
                    case 0xc0:
                    {
                      // conflicts:
                      // ENCODING.LD1_asisdlsep_I2_i2  : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx011111xxxxxxxxxxxxxxxx
                      // ENCODING.LD1_asisdlsep_R2_r2  : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxxxxxxxxxxxxxx
                      // Rm!=0b11111
                      if ((opcode & 0x001f0000) != 0x001f0000)
                      {
                        // ENCODING.LD1_asisdlsep_R2_r2
                        return 1236;
                      }
                      else
                      {
                        // ENCODING.LD1_asisdlsep_I2_i2
                        return 1235;
                      }
                      break;
                    }
                    default: break;
                  }
                }
                else
                {
                  // the following switch contains 4 case.
                  switch (c & 0xc0)
                  {
                    case 0x00:
                    {
                      // ENCODING.ST1_asisdlse_R4_4v
                      return 1535;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.LD1_asisdlse_R4_4v
                      return 1232;
                      break;
                    }
                    case 0x80:
                    {
                      // conflicts:
                      // ENCODING.ST1_asisdlsep_I4_i4  : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx011111xxxxxxxxxxxxxxxx
                      // ENCODING.ST1_asisdlsep_R4_r4  : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxxxxxxxxxxxxxx
                      // Rm!=0b11111
                      if ((opcode & 0x001f0000) != 0x001f0000)
                      {
                        // ENCODING.ST1_asisdlsep_R4_r4
                        return 1543;
                      }
                      else
                      {
                        // ENCODING.ST1_asisdlsep_I4_i4
                        return 1542;
                      }
                      break;
                    }
                    case 0xc0:
                    {
                      // conflicts:
                      // ENCODING.LD1_asisdlsep_I4_i4  : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx011111xxxxxxxxxxxxxxxx
                      // ENCODING.LD1_asisdlsep_R4_r4  : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxxxxxxxxxxxxxx
                      // Rm!=0b11111
                      if ((opcode & 0x001f0000) != 0x001f0000)
                      {
                        // ENCODING.LD1_asisdlsep_R4_r4
                        return 1240;
                      }
                      else
                      {
                        // ENCODING.LD1_asisdlsep_I4_i4
                        return 1239;
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
              if (b & 0x40)
              {
                // the following switch contains 4 case.
                switch (c & 0xc0)
                {
                  case 0x00:
                  {
                    // ENCODING.ST3_asisdlse_R3
                    return 1571;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.LD3_asisdlse_R3
                    return 1274;
                    break;
                  }
                  case 0x80:
                  {
                    // conflicts:
                    // ENCODING.ST3_asisdlsep_I3_i   : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0111110xxxxxxxxxxxxxxx
                    // ENCODING.ST3_asisdlsep_R3_r   : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxx0xxxxxxxxxxxxxxx
                    // Rm!=0b11111
                    if ((opcode & 0x001f0000) != 0x001f0000)
                    {
                      // ENCODING.ST3_asisdlsep_R3_r
                      return 1573;
                    }
                    else
                    {
                      // ENCODING.ST3_asisdlsep_I3_i
                      return 1572;
                    }
                    break;
                  }
                  case 0xc0:
                  {
                    // conflicts:
                    // ENCODING.LD3_asisdlsep_I3_i   : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0111110xxxxxxxxxxxxxxx
                    // ENCODING.LD3_asisdlsep_R3_r   : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxx0xxxxxxxxxxxxxxx
                    // Rm!=0b11111
                    if ((opcode & 0x001f0000) != 0x001f0000)
                    {
                      // ENCODING.LD3_asisdlsep_R3_r
                      return 1276;
                    }
                    else
                    {
                      // ENCODING.LD3_asisdlsep_I3_i
                      return 1275;
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
                  switch (c & 0xc0)
                  {
                    case 0x00:
                    {
                      // ENCODING.ST2_asisdlse_R2
                      return 1556;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.LD2_asisdlse_R2
                      return 1256;
                      break;
                    }
                    case 0x80:
                    {
                      // conflicts:
                      // ENCODING.ST2_asisdlsep_I2_i   : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx011111xxxxxxxxxxxxxxxx
                      // ENCODING.ST2_asisdlsep_R2_r   : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxxxxxxxxxxxxxx
                      // Rm!=0b11111
                      if ((opcode & 0x001f0000) != 0x001f0000)
                      {
                        // ENCODING.ST2_asisdlsep_R2_r
                        return 1558;
                      }
                      else
                      {
                        // ENCODING.ST2_asisdlsep_I2_i
                        return 1557;
                      }
                      break;
                    }
                    case 0xc0:
                    {
                      // conflicts:
                      // ENCODING.LD2_asisdlsep_I2_i   : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx011111xxxxxxxxxxxxxxxx
                      // ENCODING.LD2_asisdlsep_R2_r   : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxxxxxxxxxxxxxx
                      // Rm!=0b11111
                      if ((opcode & 0x001f0000) != 0x001f0000)
                      {
                        // ENCODING.LD2_asisdlsep_R2_r
                        return 1258;
                      }
                      else
                      {
                        // ENCODING.LD2_asisdlsep_I2_i
                        return 1257;
                      }
                      break;
                    }
                    default: break;
                  }
                }
                else
                {
                  // the following switch contains 4 case.
                  switch (c & 0xc0)
                  {
                    case 0x00:
                    {
                      // ENCODING.ST4_asisdlse_R4
                      return 1586;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.LD4_asisdlse_R4
                      return 1292;
                      break;
                    }
                    case 0x80:
                    {
                      // conflicts:
                      // ENCODING.ST4_asisdlsep_I4_i   : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx011111xxxxxxxxxxxxxxxx
                      // ENCODING.ST4_asisdlsep_R4_r   : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxxxxxxxxxxxxxx
                      // Rm!=0b11111
                      if ((opcode & 0x001f0000) != 0x001f0000)
                      {
                        // ENCODING.ST4_asisdlsep_R4_r
                        return 1588;
                      }
                      else
                      {
                        // ENCODING.ST4_asisdlsep_I4_i
                        return 1587;
                      }
                      break;
                    }
                    case 0xc0:
                    {
                      // conflicts:
                      // ENCODING.LD4_asisdlsep_I4_i   : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx011111xxxxxxxxxxxxxxxx
                      // ENCODING.LD4_asisdlsep_R4_r   : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxxxxxxxxxxxxxx
                      // Rm!=0b11111
                      if ((opcode & 0x001f0000) != 0x001f0000)
                      {
                        // ENCODING.LD4_asisdlsep_R4_r
                        return 1294;
                      }
                      else
                      {
                        // ENCODING.LD4_asisdlsep_I4_i
                        return 1293;
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
        case 0x01:
        {
          if (b & 0x20)
          {
            if (b & 0x40)
            {
              if (b & 0x80)
              {
                // the following switch contains 4 case.
                switch (c & 0xa0)
                {
                  case 0x00:
                  {
                    // ENCODING.LD3R_asisdlso_R3
                    return 1289;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.LD4R_asisdlso_R4
                    return 1307;
                    break;
                  }
                  case 0x80:
                  {
                    // conflicts:
                    // ENCODING.LD3R_asisdlsop_R3_i  : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1x11111xxx0xxxxxxxxxxxx
                    // ENCODING.LD3R_asisdlsop_RX3_r : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xxxxxxxxx0xxxxxxxxxxxx
                    // Rm!=0b11111
                    if ((opcode & 0x001f0000) != 0x001f0000)
                    {
                      // ENCODING.LD3R_asisdlsop_RX3_r
                      return 1291;
                    }
                    else
                    {
                      // ENCODING.LD3R_asisdlsop_R3_i
                      return 1290;
                    }
                    break;
                  }
                  case 0xa0:
                  {
                    // conflicts:
                    // ENCODING.LD4R_asisdlsop_R4_i  : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1x11111xxx0xxxxxxxxxxxx
                    // ENCODING.LD4R_asisdlsop_RX4_r : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xxxxxxxxx0xxxxxxxxxxxx
                    // Rm!=0b11111
                    if ((opcode & 0x001f0000) != 0x001f0000)
                    {
                      // ENCODING.LD4R_asisdlsop_RX4_r
                      return 1309;
                    }
                    else
                    {
                      // ENCODING.LD4R_asisdlsop_R4_i
                      return 1308;
                    }
                    break;
                  }
                  default: break;
                }
              }
              else
              {
                // the following switch contains 8 case.
                switch (c & 0xe0)
                {
                  case 0x00:
                  {
                    // ENCODING.ST3_asisdlso_H3_3h
                    return 1575;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.ST4_asisdlso_H4_4h
                    return 1590;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.LD3_asisdlso_H3_3h
                    return 1278;
                    break;
                  }
                  case 0x60:
                  {
                    // ENCODING.LD4_asisdlso_H4_4h
                    return 1296;
                    break;
                  }
                  case 0x80:
                  {
                    // conflicts:
                    // ENCODING.ST3_asisdlsop_H3_i3h : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx11111xxxxx0xxxxxxxxxx
                    // ENCODING.ST3_asisdlsop_HX3_r3h : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxxx
                    // Rm!=0b11111
                    if ((opcode & 0x001f0000) != 0x001f0000)
                    {
                      // ENCODING.ST3_asisdlsop_HX3_r3h
                      return 1581;
                    }
                    else
                    {
                      // ENCODING.ST3_asisdlsop_H3_i3h
                      return 1580;
                    }
                    break;
                  }
                  case 0xa0:
                  {
                    // conflicts:
                    // ENCODING.ST4_asisdlsop_H4_i4h : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx11111xxxxx0xxxxxxxxxx
                    // ENCODING.ST4_asisdlsop_HX4_r4h : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxxx
                    // Rm!=0b11111
                    if ((opcode & 0x001f0000) != 0x001f0000)
                    {
                      // ENCODING.ST4_asisdlsop_HX4_r4h
                      return 1596;
                    }
                    else
                    {
                      // ENCODING.ST4_asisdlsop_H4_i4h
                      return 1595;
                    }
                    break;
                  }
                  case 0xc0:
                  {
                    // conflicts:
                    // ENCODING.LD3_asisdlsop_H3_i3h : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx11111xxxxx0xxxxxxxxxx
                    // ENCODING.LD3_asisdlsop_HX3_r3h : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxxx
                    // Rm!=0b11111
                    if ((opcode & 0x001f0000) != 0x001f0000)
                    {
                      // ENCODING.LD3_asisdlsop_HX3_r3h
                      return 1284;
                    }
                    else
                    {
                      // ENCODING.LD3_asisdlsop_H3_i3h
                      return 1283;
                    }
                    break;
                  }
                  case 0xe0:
                  {
                    // conflicts:
                    // ENCODING.LD4_asisdlsop_H4_i4h : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx11111xxxxx0xxxxxxxxxx
                    // ENCODING.LD4_asisdlsop_HX4_r4h : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxxx
                    // Rm!=0b11111
                    if ((opcode & 0x001f0000) != 0x001f0000)
                    {
                      // ENCODING.LD4_asisdlsop_HX4_r4h
                      return 1302;
                    }
                    else
                    {
                      // ENCODING.LD4_asisdlsop_H4_i4h
                      return 1301;
                    }
                    break;
                  }
                  default: break;
                }
              }
            }
            else
            {
              if (b & 0x80)
              {
                if (b & 0x04)
                {
                  // the following switch contains 8 case.
                  switch (c & 0xe0)
                  {
                    case 0x00:
                    {
                      // ENCODING.ST3_asisdlso_D3_3d
                      return 1577;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.ST4_asisdlso_D4_4d
                      return 1592;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.LD3_asisdlso_D3_3d
                      return 1280;
                      break;
                    }
                    case 0x60:
                    {
                      // ENCODING.LD4_asisdlso_D4_4d
                      return 1298;
                      break;
                    }
                    case 0x80:
                    {
                      // conflicts:
                      // ENCODING.ST3_asisdlsop_D3_i3d : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx11111xxx00xxxxxxxxxxx
                      // ENCODING.ST3_asisdlsop_DX3_r3d : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxxxxxxxxxx
                      // Rm!=0b11111
                      if ((opcode & 0x001f0000) != 0x001f0000)
                      {
                        // ENCODING.ST3_asisdlsop_DX3_r3d
                        return 1585;
                      }
                      else
                      {
                        // ENCODING.ST3_asisdlsop_D3_i3d
                        return 1584;
                      }
                      break;
                    }
                    case 0xa0:
                    {
                      // conflicts:
                      // ENCODING.ST4_asisdlsop_D4_i4d : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx11111xxx00xxxxxxxxxxx
                      // ENCODING.ST4_asisdlsop_DX4_r4d : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxxxxxxxxxx
                      // Rm!=0b11111
                      if ((opcode & 0x001f0000) != 0x001f0000)
                      {
                        // ENCODING.ST4_asisdlsop_DX4_r4d
                        return 1600;
                      }
                      else
                      {
                        // ENCODING.ST4_asisdlsop_D4_i4d
                        return 1599;
                      }
                      break;
                    }
                    case 0xc0:
                    {
                      // conflicts:
                      // ENCODING.LD3_asisdlsop_D3_i3d : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx11111xxx00xxxxxxxxxxx
                      // ENCODING.LD3_asisdlsop_DX3_r3d : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxxxxxxxxxx
                      // Rm!=0b11111
                      if ((opcode & 0x001f0000) != 0x001f0000)
                      {
                        // ENCODING.LD3_asisdlsop_DX3_r3d
                        return 1288;
                      }
                      else
                      {
                        // ENCODING.LD3_asisdlsop_D3_i3d
                        return 1287;
                      }
                      break;
                    }
                    case 0xe0:
                    {
                      // conflicts:
                      // ENCODING.LD4_asisdlsop_D4_i4d : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx11111xxx00xxxxxxxxxxx
                      // ENCODING.LD4_asisdlsop_DX4_r4d : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxxxxxxxxxx
                      // Rm!=0b11111
                      if ((opcode & 0x001f0000) != 0x001f0000)
                      {
                        // ENCODING.LD4_asisdlsop_DX4_r4d
                        return 1306;
                      }
                      else
                      {
                        // ENCODING.LD4_asisdlsop_D4_i4d
                        return 1305;
                      }
                      break;
                    }
                    default: break;
                  }
                }
                else
                {
                  // the following switch contains 8 case.
                  switch (c & 0xe0)
                  {
                    case 0x00:
                    {
                      // ENCODING.ST3_asisdlso_S3_3s
                      return 1576;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.ST4_asisdlso_S4_4s
                      return 1591;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.LD3_asisdlso_S3_3s
                      return 1279;
                      break;
                    }
                    case 0x60:
                    {
                      // ENCODING.LD4_asisdlso_S4_4s
                      return 1297;
                      break;
                    }
                    case 0x80:
                    {
                      // conflicts:
                      // ENCODING.ST3_asisdlsop_S3_i3s : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx11111xxxx0xxxxxxxxxxx
                      // ENCODING.ST3_asisdlsop_SX3_r3s : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxxxx
                      // Rm!=0b11111
                      if ((opcode & 0x001f0000) != 0x001f0000)
                      {
                        // ENCODING.ST3_asisdlsop_SX3_r3s
                        return 1583;
                      }
                      else
                      {
                        // ENCODING.ST3_asisdlsop_S3_i3s
                        return 1582;
                      }
                      break;
                    }
                    case 0xa0:
                    {
                      // conflicts:
                      // ENCODING.ST4_asisdlsop_S4_i4s : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx11111xxxx0xxxxxxxxxxx
                      // ENCODING.ST4_asisdlsop_SX4_r4s : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxxxx
                      // Rm!=0b11111
                      if ((opcode & 0x001f0000) != 0x001f0000)
                      {
                        // ENCODING.ST4_asisdlsop_SX4_r4s
                        return 1598;
                      }
                      else
                      {
                        // ENCODING.ST4_asisdlsop_S4_i4s
                        return 1597;
                      }
                      break;
                    }
                    case 0xc0:
                    {
                      // conflicts:
                      // ENCODING.LD3_asisdlsop_S3_i3s : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx11111xxxx0xxxxxxxxxxx
                      // ENCODING.LD3_asisdlsop_SX3_r3s : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxxxx
                      // Rm!=0b11111
                      if ((opcode & 0x001f0000) != 0x001f0000)
                      {
                        // ENCODING.LD3_asisdlsop_SX3_r3s
                        return 1286;
                      }
                      else
                      {
                        // ENCODING.LD3_asisdlsop_S3_i3s
                        return 1285;
                      }
                      break;
                    }
                    case 0xe0:
                    {
                      // conflicts:
                      // ENCODING.LD4_asisdlsop_S4_i4s : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx11111xxxx0xxxxxxxxxxx
                      // ENCODING.LD4_asisdlsop_SX4_r4s : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxxxx
                      // Rm!=0b11111
                      if ((opcode & 0x001f0000) != 0x001f0000)
                      {
                        // ENCODING.LD4_asisdlsop_SX4_r4s
                        return 1304;
                      }
                      else
                      {
                        // ENCODING.LD4_asisdlsop_S4_i4s
                        return 1303;
                      }
                      break;
                    }
                    default: break;
                  }
                }
              }
              else
              {
                // the following switch contains 8 case.
                switch (c & 0xe0)
                {
                  case 0x00:
                  {
                    // ENCODING.ST3_asisdlso_B3_3b
                    return 1574;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.ST4_asisdlso_B4_4b
                    return 1589;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.LD3_asisdlso_B3_3b
                    return 1277;
                    break;
                  }
                  case 0x60:
                  {
                    // ENCODING.LD4_asisdlso_B4_4b
                    return 1295;
                    break;
                  }
                  case 0x80:
                  {
                    // conflicts:
                    // ENCODING.ST3_asisdlsop_B3_i3b : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx11111xxxxxxxxxxxxxxxx
                    // ENCODING.ST3_asisdlsop_BX3_r3b : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                    // Rm!=0b11111
                    if ((opcode & 0x001f0000) != 0x001f0000)
                    {
                      // ENCODING.ST3_asisdlsop_BX3_r3b
                      return 1579;
                    }
                    else
                    {
                      // ENCODING.ST3_asisdlsop_B3_i3b
                      return 1578;
                    }
                    break;
                  }
                  case 0xa0:
                  {
                    // conflicts:
                    // ENCODING.ST4_asisdlsop_B4_i4b : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx11111xxxxxxxxxxxxxxxx
                    // ENCODING.ST4_asisdlsop_BX4_r4b : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                    // Rm!=0b11111
                    if ((opcode & 0x001f0000) != 0x001f0000)
                    {
                      // ENCODING.ST4_asisdlsop_BX4_r4b
                      return 1594;
                    }
                    else
                    {
                      // ENCODING.ST4_asisdlsop_B4_i4b
                      return 1593;
                    }
                    break;
                  }
                  case 0xc0:
                  {
                    // conflicts:
                    // ENCODING.LD3_asisdlsop_B3_i3b : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx11111xxxxxxxxxxxxxxxx
                    // ENCODING.LD3_asisdlsop_BX3_r3b : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                    // Rm!=0b11111
                    if ((opcode & 0x001f0000) != 0x001f0000)
                    {
                      // ENCODING.LD3_asisdlsop_BX3_r3b
                      return 1282;
                    }
                    else
                    {
                      // ENCODING.LD3_asisdlsop_B3_i3b
                      return 1281;
                    }
                    break;
                  }
                  case 0xe0:
                  {
                    // conflicts:
                    // ENCODING.LD4_asisdlsop_B4_i4b : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx11111xxxxxxxxxxxxxxxx
                    // ENCODING.LD4_asisdlsop_BX4_r4b : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                    // Rm!=0b11111
                    if ((opcode & 0x001f0000) != 0x001f0000)
                    {
                      // ENCODING.LD4_asisdlsop_BX4_r4b
                      return 1300;
                    }
                    else
                    {
                      // ENCODING.LD4_asisdlsop_B4_i4b
                      return 1299;
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
            if (b & 0x40)
            {
              if (b & 0x80)
              {
                // the following switch contains 4 case.
                switch (c & 0xa0)
                {
                  case 0x00:
                  {
                    // ENCODING.LD1R_asisdlso_R1
                    return 1253;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.LD2R_asisdlso_R2
                    return 1271;
                    break;
                  }
                  case 0x80:
                  {
                    // conflicts:
                    // ENCODING.LD1R_asisdlsop_R1_i  : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1x11111xxx0xxxxxxxxxxxx
                    // ENCODING.LD1R_asisdlsop_RX1_r : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xxxxxxxxx0xxxxxxxxxxxx
                    // Rm!=0b11111
                    if ((opcode & 0x001f0000) != 0x001f0000)
                    {
                      // ENCODING.LD1R_asisdlsop_RX1_r
                      return 1255;
                    }
                    else
                    {
                      // ENCODING.LD1R_asisdlsop_R1_i
                      return 1254;
                    }
                    break;
                  }
                  case 0xa0:
                  {
                    // conflicts:
                    // ENCODING.LD2R_asisdlsop_R2_i  : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1x11111xxx0xxxxxxxxxxxx
                    // ENCODING.LD2R_asisdlsop_RX2_r : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xxxxxxxxx0xxxxxxxxxxxx
                    // Rm!=0b11111
                    if ((opcode & 0x001f0000) != 0x001f0000)
                    {
                      // ENCODING.LD2R_asisdlsop_RX2_r
                      return 1273;
                    }
                    else
                    {
                      // ENCODING.LD2R_asisdlsop_R2_i
                      return 1272;
                    }
                    break;
                  }
                  default: break;
                }
              }
              else
              {
                // the following switch contains 8 case.
                switch (c & 0xe0)
                {
                  case 0x00:
                  {
                    // ENCODING.ST1_asisdlso_H1_1h
                    return 1545;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.ST2_asisdlso_H2_2h
                    return 1560;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.LD1_asisdlso_H1_1h
                    return 1242;
                    break;
                  }
                  case 0x60:
                  {
                    // ENCODING.LD2_asisdlso_H2_2h
                    return 1260;
                    break;
                  }
                  case 0x80:
                  {
                    // conflicts:
                    // ENCODING.ST1_asisdlsop_H1_i1h : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx11111xxxxx0xxxxxxxxxx
                    // ENCODING.ST1_asisdlsop_HX1_r1h : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxxx
                    // Rm!=0b11111
                    if ((opcode & 0x001f0000) != 0x001f0000)
                    {
                      // ENCODING.ST1_asisdlsop_HX1_r1h
                      return 1551;
                    }
                    else
                    {
                      // ENCODING.ST1_asisdlsop_H1_i1h
                      return 1550;
                    }
                    break;
                  }
                  case 0xa0:
                  {
                    // conflicts:
                    // ENCODING.ST2_asisdlsop_H2_i2h : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx11111xxxxx0xxxxxxxxxx
                    // ENCODING.ST2_asisdlsop_HX2_r2h : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxxx
                    // Rm!=0b11111
                    if ((opcode & 0x001f0000) != 0x001f0000)
                    {
                      // ENCODING.ST2_asisdlsop_HX2_r2h
                      return 1566;
                    }
                    else
                    {
                      // ENCODING.ST2_asisdlsop_H2_i2h
                      return 1565;
                    }
                    break;
                  }
                  case 0xc0:
                  {
                    // conflicts:
                    // ENCODING.LD1_asisdlsop_H1_i1h : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx11111xxxxx0xxxxxxxxxx
                    // ENCODING.LD1_asisdlsop_HX1_r1h : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxxx
                    // Rm!=0b11111
                    if ((opcode & 0x001f0000) != 0x001f0000)
                    {
                      // ENCODING.LD1_asisdlsop_HX1_r1h
                      return 1248;
                    }
                    else
                    {
                      // ENCODING.LD1_asisdlsop_H1_i1h
                      return 1247;
                    }
                    break;
                  }
                  case 0xe0:
                  {
                    // conflicts:
                    // ENCODING.LD2_asisdlsop_H2_i2h : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx11111xxxxx0xxxxxxxxxx
                    // ENCODING.LD2_asisdlsop_HX2_r2h : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxxx
                    // Rm!=0b11111
                    if ((opcode & 0x001f0000) != 0x001f0000)
                    {
                      // ENCODING.LD2_asisdlsop_HX2_r2h
                      return 1266;
                    }
                    else
                    {
                      // ENCODING.LD2_asisdlsop_H2_i2h
                      return 1265;
                    }
                    break;
                  }
                  default: break;
                }
              }
            }
            else
            {
              if (b & 0x80)
              {
                if (b & 0x04)
                {
                  // the following switch contains 8 case.
                  switch (c & 0xe0)
                  {
                    case 0x00:
                    {
                      // ENCODING.ST1_asisdlso_D1_1d
                      return 1547;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.ST2_asisdlso_D2_2d
                      return 1562;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.LD1_asisdlso_D1_1d
                      return 1244;
                      break;
                    }
                    case 0x60:
                    {
                      // ENCODING.LD2_asisdlso_D2_2d
                      return 1262;
                      break;
                    }
                    case 0x80:
                    {
                      // conflicts:
                      // ENCODING.ST1_asisdlsop_D1_i1d : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx11111xxx00xxxxxxxxxxx
                      // ENCODING.ST1_asisdlsop_DX1_r1d : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxxxxxxxxxx
                      // Rm!=0b11111
                      if ((opcode & 0x001f0000) != 0x001f0000)
                      {
                        // ENCODING.ST1_asisdlsop_DX1_r1d
                        return 1555;
                      }
                      else
                      {
                        // ENCODING.ST1_asisdlsop_D1_i1d
                        return 1554;
                      }
                      break;
                    }
                    case 0xa0:
                    {
                      // conflicts:
                      // ENCODING.ST2_asisdlsop_D2_i2d : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx11111xxx00xxxxxxxxxxx
                      // ENCODING.ST2_asisdlsop_DX2_r2d : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxxxxxxxxxx
                      // Rm!=0b11111
                      if ((opcode & 0x001f0000) != 0x001f0000)
                      {
                        // ENCODING.ST2_asisdlsop_DX2_r2d
                        return 1570;
                      }
                      else
                      {
                        // ENCODING.ST2_asisdlsop_D2_i2d
                        return 1569;
                      }
                      break;
                    }
                    case 0xc0:
                    {
                      // conflicts:
                      // ENCODING.LD1_asisdlsop_D1_i1d : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx11111xxx00xxxxxxxxxxx
                      // ENCODING.LD1_asisdlsop_DX1_r1d : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxxxxxxxxxx
                      // Rm!=0b11111
                      if ((opcode & 0x001f0000) != 0x001f0000)
                      {
                        // ENCODING.LD1_asisdlsop_DX1_r1d
                        return 1252;
                      }
                      else
                      {
                        // ENCODING.LD1_asisdlsop_D1_i1d
                        return 1251;
                      }
                      break;
                    }
                    case 0xe0:
                    {
                      // conflicts:
                      // ENCODING.LD2_asisdlsop_D2_i2d : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx11111xxx00xxxxxxxxxxx
                      // ENCODING.LD2_asisdlsop_DX2_r2d : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxxxxxxxxxx
                      // Rm!=0b11111
                      if ((opcode & 0x001f0000) != 0x001f0000)
                      {
                        // ENCODING.LD2_asisdlsop_DX2_r2d
                        return 1270;
                      }
                      else
                      {
                        // ENCODING.LD2_asisdlsop_D2_i2d
                        return 1269;
                      }
                      break;
                    }
                    default: break;
                  }
                }
                else
                {
                  // the following switch contains 8 case.
                  switch (c & 0xe0)
                  {
                    case 0x00:
                    {
                      // ENCODING.ST1_asisdlso_S1_1s
                      return 1546;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.ST2_asisdlso_S2_2s
                      return 1561;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.LD1_asisdlso_S1_1s
                      return 1243;
                      break;
                    }
                    case 0x60:
                    {
                      // ENCODING.LD2_asisdlso_S2_2s
                      return 1261;
                      break;
                    }
                    case 0x80:
                    {
                      // conflicts:
                      // ENCODING.ST1_asisdlsop_S1_i1s : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx11111xxxx0xxxxxxxxxxx
                      // ENCODING.ST1_asisdlsop_SX1_r1s : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxxxx
                      // Rm!=0b11111
                      if ((opcode & 0x001f0000) != 0x001f0000)
                      {
                        // ENCODING.ST1_asisdlsop_SX1_r1s
                        return 1553;
                      }
                      else
                      {
                        // ENCODING.ST1_asisdlsop_S1_i1s
                        return 1552;
                      }
                      break;
                    }
                    case 0xa0:
                    {
                      // conflicts:
                      // ENCODING.ST2_asisdlsop_S2_i2s : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx11111xxxx0xxxxxxxxxxx
                      // ENCODING.ST2_asisdlsop_SX2_r2s : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxxxx
                      // Rm!=0b11111
                      if ((opcode & 0x001f0000) != 0x001f0000)
                      {
                        // ENCODING.ST2_asisdlsop_SX2_r2s
                        return 1568;
                      }
                      else
                      {
                        // ENCODING.ST2_asisdlsop_S2_i2s
                        return 1567;
                      }
                      break;
                    }
                    case 0xc0:
                    {
                      // conflicts:
                      // ENCODING.LD1_asisdlsop_S1_i1s : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx11111xxxx0xxxxxxxxxxx
                      // ENCODING.LD1_asisdlsop_SX1_r1s : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxxxx
                      // Rm!=0b11111
                      if ((opcode & 0x001f0000) != 0x001f0000)
                      {
                        // ENCODING.LD1_asisdlsop_SX1_r1s
                        return 1250;
                      }
                      else
                      {
                        // ENCODING.LD1_asisdlsop_S1_i1s
                        return 1249;
                      }
                      break;
                    }
                    case 0xe0:
                    {
                      // conflicts:
                      // ENCODING.LD2_asisdlsop_S2_i2s : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx11111xxxx0xxxxxxxxxxx
                      // ENCODING.LD2_asisdlsop_SX2_r2s : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxxxx
                      // Rm!=0b11111
                      if ((opcode & 0x001f0000) != 0x001f0000)
                      {
                        // ENCODING.LD2_asisdlsop_SX2_r2s
                        return 1268;
                      }
                      else
                      {
                        // ENCODING.LD2_asisdlsop_S2_i2s
                        return 1267;
                      }
                      break;
                    }
                    default: break;
                  }
                }
              }
              else
              {
                // the following switch contains 8 case.
                switch (c & 0xe0)
                {
                  case 0x00:
                  {
                    // ENCODING.ST1_asisdlso_B1_1b
                    return 1544;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.ST2_asisdlso_B2_2b
                    return 1559;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.LD1_asisdlso_B1_1b
                    return 1241;
                    break;
                  }
                  case 0x60:
                  {
                    // ENCODING.LD2_asisdlso_B2_2b
                    return 1259;
                    break;
                  }
                  case 0x80:
                  {
                    // conflicts:
                    // ENCODING.ST1_asisdlsop_B1_i1b : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx11111xxxxxxxxxxxxxxxx
                    // ENCODING.ST1_asisdlsop_BX1_r1b : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                    // Rm!=0b11111
                    if ((opcode & 0x001f0000) != 0x001f0000)
                    {
                      // ENCODING.ST1_asisdlsop_BX1_r1b
                      return 1549;
                    }
                    else
                    {
                      // ENCODING.ST1_asisdlsop_B1_i1b
                      return 1548;
                    }
                    break;
                  }
                  case 0xa0:
                  {
                    // conflicts:
                    // ENCODING.ST2_asisdlsop_B2_i2b : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx11111xxxxxxxxxxxxxxxx
                    // ENCODING.ST2_asisdlsop_BX2_r2b : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                    // Rm!=0b11111
                    if ((opcode & 0x001f0000) != 0x001f0000)
                    {
                      // ENCODING.ST2_asisdlsop_BX2_r2b
                      return 1564;
                    }
                    else
                    {
                      // ENCODING.ST2_asisdlsop_B2_i2b
                      return 1563;
                    }
                    break;
                  }
                  case 0xc0:
                  {
                    // conflicts:
                    // ENCODING.LD1_asisdlsop_B1_i1b : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx11111xxxxxxxxxxxxxxxx
                    // ENCODING.LD1_asisdlsop_BX1_r1b : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                    // Rm!=0b11111
                    if ((opcode & 0x001f0000) != 0x001f0000)
                    {
                      // ENCODING.LD1_asisdlsop_BX1_r1b
                      return 1246;
                    }
                    else
                    {
                      // ENCODING.LD1_asisdlsop_B1_i1b
                      return 1245;
                    }
                    break;
                  }
                  case 0xe0:
                  {
                    // conflicts:
                    // ENCODING.LD2_asisdlsop_B2_i2b : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx11111xxxxxxxxxxxxxxxx
                    // ENCODING.LD2_asisdlsop_BX2_r2b : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                    // Rm!=0b11111
                    if ((opcode & 0x001f0000) != 0x001f0000)
                    {
                      // ENCODING.LD2_asisdlsop_BX2_r2b
                      return 1264;
                    }
                    else
                    {
                      // ENCODING.LD2_asisdlsop_B2_i2b
                      return 1263;
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
        case 0x02:
        {
          if (b & 0x04)
          {
            if (b & 0x08)
            {
              if (b & 0x10)
              {
                if (b & 0x20)
                {
                  if (b & 0x40)
                  {
                    if (b & 0x80)
                    {
                      if (c & 0x80)
                      {
                        // ENCODING.FRSQRTS_asimdsame_only
                        return 1216;
                      }
                      else
                      {
                        // ENCODING.FRECPS_asimdsame_only
                        return 1159;
                      }
                    }
                    else
                    {
                      // ENCODING.SABA_asimdsame_only
                      return 1383;
                    }
                  }
                  else
                  {
                    if (b & 0x80)
                    {
                      // ENCODING.ADDP_asimdsame_only
                      return 765;
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.CMGE_asimdsame_only
                        return 793;
                      }
                      else
                      {
                        // the following switch contains 3 case.
                        switch (c & 0xc0)
                        {
                          case 0x00:
                          {
                            if (d & 0x40)
                            {
                              // ENCODING.UMOV_asimdins_X_x
                              return 1698;
                            }
                            else
                            {
                              // ENCODING.UMOV_asimdins_W_w
                              return 1697;
                            }
                            break;
                          }
                          case 0x40:
                          {
                            // ENCODING.FRECPS_asimdsamefp16_only
                            return 1158;
                            break;
                          }
                          case 0xc0:
                          {
                            // ENCODING.FRSQRTS_asimdsamefp16_only
                            return 1215;
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
                  if (b & 0x40)
                  {
                    if (b & 0x80)
                    {
                      // ENCODING.FMULX_asimdsame_only
                      return 1137;
                    }
                    else
                    {
                      // ENCODING.SQRSHL_asimdsame_only
                      return 1493;
                    }
                  }
                  else
                  {
                    if (b & 0x80)
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.MUL_asimdsame_only
                        return 1362;
                      }
                      else
                      {
                        // ENCODING.USDOT_asimdsame2_D
                        return 1727;
                      }
                    }
                    else
                    {
                      // the following switch contains 6 case.
                      switch (c & 0xe0)
                      {
                        case 0x00:
                        {
                          // ENCODING.INS_asimdins_IR_r
                          return 1228;
                          break;
                        }
                        case 0x20:
                        {
                          // ENCODING.AND_asimdsame_only
                          return 771;
                          break;
                        }
                        case 0x40:
                        {
                          // ENCODING.FMULX_asimdsamefp16_only
                          return 1136;
                          break;
                        }
                        case 0x60:
                        {
                          // ENCODING.BIC_asimdsame_only
                          return 782;
                          break;
                        }
                        case 0xa0:
                        {
                          // ENCODING.ORR_asimdsame_only
                          return 1372;
                          break;
                        }
                        case 0xe0:
                        {
                          // ENCODING.ORN_asimdsame_only
                          return 1369;
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
                if (b & 0x20)
                {
                  if (b & 0x40)
                  {
                    if (b & 0x80)
                    {
                      if (c & 0x80)
                      {
                        // ENCODING.FMLSL_asimdsame_F
                        return 1097;
                      }
                      else
                      {
                        // ENCODING.FMLAL_asimdsame_F
                        return 1087;
                      }
                    }
                    else
                    {
                      // ENCODING.SMIN_asimdsame_only
                      return 1446;
                    }
                  }
                  else
                  {
                    if (b & 0x80)
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.SMINP_asimdsame_only
                        return 1447;
                      }
                      else
                      {
                        // ENCODING.USMMLA_asimdsame2_G
                        return 1733;
                      }
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.SQSUB_asimdsame_only
                        return 1509;
                      }
                      else
                      {
                        if (d & 0x40)
                        {
                          // ENCODING.SMOV_asimdins_X_x
                          return 1455;
                        }
                        else
                        {
                          // ENCODING.SMOV_asimdins_W_w
                          return 1454;
                        }
                      }
                    }
                  }
                }
                else
                {
                  if (b & 0x40)
                  {
                    if (b & 0x80)
                    {
                      if (c & 0x80)
                      {
                        // ENCODING.FMLS_asimdsame_only
                        return 1094;
                      }
                      else
                      {
                        // ENCODING.FMLA_asimdsame_only
                        return 1084;
                      }
                    }
                    else
                    {
                      // ENCODING.SQSHL_asimdsame_only
                      return 1501;
                    }
                  }
                  else
                  {
                    if (b & 0x80)
                    {
                      // ENCODING.CMTST_asimdsame_only
                      return 809;
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.SQADD_asimdsame_only
                        return 1461;
                      }
                      else
                      {
                        // the following switch contains 3 case.
                        switch (c & 0xc0)
                        {
                          case 0x00:
                          {
                            // ENCODING.DUP_asimdins_DR_r
                            return 813;
                            break;
                          }
                          case 0x40:
                          {
                            // ENCODING.FMLA_asimdsamefp16_only
                            return 1083;
                            break;
                          }
                          case 0xc0:
                          {
                            // ENCODING.FMLS_asimdsamefp16_only
                            return 1093;
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
              if (b & 0x10)
              {
                if (b & 0x20)
                {
                  if (b & 0x40)
                  {
                    if (b & 0x80)
                    {
                      if (c & 0x80)
                      {
                        // ENCODING.FMIN_asimdsame_only
                        return 1058;
                      }
                      else
                      {
                        // ENCODING.FMAX_asimdsame_only
                        return 1036;
                      }
                    }
                    else
                    {
                      // ENCODING.SABD_asimdsame_only
                      return 1385;
                    }
                  }
                  else
                  {
                    if (b & 0x80)
                    {
                      // ENCODING.SQDMULH_asimdsame_only
                      return 1473;
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.CMGT_asimdsame_only
                        return 797;
                      }
                      else
                      {
                        if (c & 0x80)
                        {
                          // ENCODING.FMIN_asimdsamefp16_only
                          return 1057;
                        }
                        else
                        {
                          // ENCODING.FMAX_asimdsamefp16_only
                          return 1035;
                        }
                      }
                    }
                  }
                }
                else
                {
                  if (b & 0x40)
                  {
                    if (b & 0x80)
                    {
                      if (c & 0x80)
                      {
                        // ENCODING.FSUB_asimdsame_only
                        return 1223;
                      }
                      else
                      {
                        // ENCODING.FADD_asimdsame_only
                        return 835;
                      }
                    }
                    else
                    {
                      // ENCODING.SRSHL_asimdsame_only
                      return 1518;
                    }
                  }
                  else
                  {
                    if (b & 0x80)
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.MLA_asimdsame_only
                        return 1352;
                      }
                      else
                      {
                        // ENCODING.SDOT_asimdsame2_D
                        return 1411;
                      }
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.SRHADD_asimdsame_only
                        return 1514;
                      }
                      else
                      {
                        if (c & 0x80)
                        {
                          // ENCODING.FSUB_asimdsamefp16_only
                          return 1222;
                        }
                        else
                        {
                          // ENCODING.FADD_asimdsamefp16_only
                          return 834;
                        }
                      }
                    }
                  }
                }
              }
              else
              {
                if (b & 0x20)
                {
                  if (b & 0x40)
                  {
                    if (b & 0x80)
                    {
                      // ENCODING.FCMEQ_asimdsame_only
                      return 853;
                    }
                    else
                    {
                      // ENCODING.SMAX_asimdsame_only
                      return 1443;
                    }
                  }
                  else
                  {
                    if (b & 0x80)
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.SMAXP_asimdsame_only
                        return 1444;
                      }
                      else
                      {
                        // ENCODING.SMMLA_asimdsame2_G
                        return 1453;
                      }
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.SHSUB_asimdsame_only
                        return 1431;
                      }
                      else
                      {
                        // ENCODING.FCMEQ_asimdsamefp16_only
                        return 852;
                      }
                    }
                  }
                }
                else
                {
                  if (b & 0x40)
                  {
                    if (b & 0x80)
                    {
                      if (c & 0x80)
                      {
                        // ENCODING.FMINNM_asimdsame_only
                        return 1063;
                      }
                      else
                      {
                        // ENCODING.FMAXNM_asimdsame_only
                        return 1041;
                      }
                    }
                    else
                    {
                      // ENCODING.SSHL_asimdsame_only
                      return 1524;
                    }
                  }
                  else
                  {
                    if (b & 0x80)
                    {
                      // ENCODING.ADD_asimdsame_only
                      return 762;
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.SHADD_asimdsame_only
                        return 1426;
                      }
                      else
                      {
                        // the following switch contains 3 case.
                        switch (c & 0xc0)
                        {
                          case 0x00:
                          {
                            // ENCODING.DUP_asimdins_DV_v
                            return 812;
                            break;
                          }
                          case 0x40:
                          {
                            // ENCODING.FMAXNM_asimdsamefp16_only
                            return 1040;
                            break;
                          }
                          case 0xc0:
                          {
                            // ENCODING.FMINNM_asimdsamefp16_only
                            return 1062;
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
          }
          else
          {
            if (b & 0x08)
            {
              if (b & 0x10)
              {
                if (b & 0x20)
                {
                  if (b & 0x40)
                  {
                    if (b & 0x80)
                    {
                      // the following switch contains 5 case.
                      switch ((c & 0x99) - 1)
                      {
                        case 0x00:
                        {
                          // ENCODING.FRINT64Z_asimdmisc_R
                          return 1171;
                          break;
                        }
                        case 0x0f:
                        {
                          // ENCODING.FMAXV_asimdall_only_H
                          return 1055;
                          break;
                        }
                        case 0x7f:
                        {
                          // ENCODING.FABS_asimdmisc_R
                          return 822;
                          break;
                        }
                        case 0x8f:
                        {
                          // ENCODING.FMINV_asimdall_only_H
                          return 1077;
                          break;
                        }
                        case 0x97:
                        {
                          // ENCODING.FABS_asimdmiscfp16_R
                          return 821;
                          break;
                        }
                        default: break;
                      }
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // the following switch contains 3 case.
                        switch (c & 0x09)
                        {
                          case 0x00:
                          {
                            // ENCODING.SQABS_asimdmisc_R
                            return 1459;
                            break;
                          }
                          case 0x01:
                          {
                            // ENCODING.FCVTL_asimdmisc_L
                            return 926;
                            break;
                          }
                          case 0x08:
                          {
                            // ENCODING.AESIMC_B_cryptoaes
                            return 769;
                            break;
                          }
                          default: break;
                        }
                      }
                      else
                      {
                        // ENCODING.ZIP2_asimdperm_only
                        return 1745;
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x80)
                    {
                      // the following switch contains 4 case.
                      switch (c & 0x19)
                      {
                        case 0x00:
                        {
                          // ENCODING.ABS_asimdmisc_R
                          return 760;
                          break;
                        }
                        case 0x01:
                        {
                          if (c & 0x80)
                          {
                            // ENCODING.FCVTZS_asimdmisc_R
                            return 995;
                          }
                          else
                          {
                            // ENCODING.FCVTMS_asimdmisc_R
                            return 930;
                          }
                          break;
                        }
                        case 0x11:
                        {
                          // ENCODING.ADDV_asimdall_only
                          return 766;
                          break;
                        }
                        case 0x19:
                        {
                          if (c & 0x80)
                          {
                            // ENCODING.FCVTZS_asimdmiscfp16_R
                            return 994;
                          }
                          else
                          {
                            // ENCODING.FCVTMS_asimdmiscfp16_R
                            return 929;
                          }
                          break;
                        }
                        default: break;
                      }
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        if (c & 0x10)
                        {
                          // ENCODING.SADDLV_asimdall_only
                          return 1390;
                        }
                        else
                        {
                          // ENCODING.SUQADD_asimdmisc_R
                          return 1644;
                        }
                      }
                      else
                      {
                        // ENCODING.ZIP1_asimdperm_only
                        return 1744;
                      }
                    }
                  }
                }
                else
                {
                  if (b & 0x40)
                  {
                    if (b & 0x80)
                    {
                      // the following switch contains 6 case.
                      switch ((c & 0x99) - 1)
                      {
                        case 0x00:
                        {
                          // ENCODING.SCVTF_asimdmisc_R
                          return 1397;
                          break;
                        }
                        case 0x18:
                        {
                          // ENCODING.SCVTF_asimdmiscfp16_R
                          return 1396;
                          break;
                        }
                        case 0x7f:
                        {
                          // ENCODING.FCMEQ_asimdmisc_FZ
                          return 857;
                          break;
                        }
                        case 0x80:
                        {
                          // ENCODING.FRECPE_asimdmisc_R
                          return 1155;
                          break;
                        }
                        case 0x97:
                        {
                          // ENCODING.FCMEQ_asimdmiscfp16_FZ
                          return 856;
                          break;
                        }
                        case 0x98:
                        {
                          // ENCODING.FRECPE_asimdmiscfp16_R
                          return 1154;
                          break;
                        }
                        default: break;
                      }
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        if (c & 0x08)
                        {
                          // ENCODING.AESD_B_cryptoaes
                          return 767;
                        }
                        else
                        {
                          // ENCODING.CNT_asimdmisc_R
                          return 810;
                        }
                      }
                      else
                      {
                        // ENCODING.UZP2_asimdperm_only
                        return 1741;
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x80)
                    {
                      // the following switch contains 3 case.
                      switch (c & 0x19)
                      {
                        case 0x00:
                        {
                          // ENCODING.CMEQ_asimdmisc_Z
                          return 791;
                          break;
                        }
                        case 0x01:
                        {
                          if (c & 0x80)
                          {
                            // ENCODING.FRINTZ_asimdmisc_R
                            return 1205;
                          }
                          else
                          {
                            // ENCODING.FRINTM_asimdmisc_R
                            return 1185;
                          }
                          break;
                        }
                        case 0x19:
                        {
                          if (c & 0x80)
                          {
                            // ENCODING.FRINTZ_asimdmiscfp16_R
                            return 1204;
                          }
                          else
                          {
                            // ENCODING.FRINTM_asimdmiscfp16_R
                            return 1184;
                          }
                          break;
                        }
                        default: break;
                      }
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.REV16_asimdmisc_R
                        return 1378;
                      }
                      else
                      {
                        // ENCODING.UZP1_asimdperm_only
                        return 1740;
                      }
                    }
                  }
                }
              }
              else
              {
                if (b & 0x20)
                {
                  if (b & 0x40)
                  {
                    if (b & 0x80)
                    {
                      // the following switch contains 3 case.
                      switch ((c & 0x99) - 1)
                      {
                        case 0x00:
                        {
                          // ENCODING.FRINT32Z_asimdmisc_R
                          return 1165;
                          break;
                        }
                        case 0x7f:
                        {
                          // ENCODING.FCMLT_asimdmisc_FZ
                          return 884;
                          break;
                        }
                        case 0x97:
                        {
                          // ENCODING.FCMLT_asimdmiscfp16_FZ
                          return 883;
                          break;
                        }
                        default: break;
                      }
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // the following switch contains 3 case.
                        switch (c & 0x09)
                        {
                          case 0x00:
                          {
                            // ENCODING.SADALP_asimdmisc_P
                            return 1387;
                            break;
                          }
                          case 0x01:
                          {
                            if (c & 0x80)
                            {
                              // ENCODING.BFCVTN_asimdmisc_4S
                              return 774;
                            }
                            else
                            {
                              // ENCODING.FCVTN_asimdmisc_N
                              return 947;
                            }
                            break;
                          }
                          case 0x08:
                          {
                            // ENCODING.AESMC_B_cryptoaes
                            return 770;
                            break;
                          }
                          default: break;
                        }
                      }
                      else
                      {
                        // ENCODING.TRN2_asimdperm_only
                        return 1654;
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x80)
                    {
                      // the following switch contains 5 case.
                      switch (c & 0x19)
                      {
                        case 0x00:
                        {
                          // ENCODING.CMLT_asimdmisc_Z
                          return 807;
                          break;
                        }
                        case 0x01:
                        {
                          if (c & 0x80)
                          {
                            // ENCODING.FCVTPS_asimdmisc_R
                            return 971;
                          }
                          else
                          {
                            // ENCODING.FCVTNS_asimdmisc_R
                            return 951;
                          }
                          break;
                        }
                        case 0x10:
                        {
                          // ENCODING.SMAXV_asimdall_only
                          return 1445;
                          break;
                        }
                        case 0x11:
                        {
                          // ENCODING.SMINV_asimdall_only
                          return 1448;
                          break;
                        }
                        case 0x19:
                        {
                          if (c & 0x80)
                          {
                            // ENCODING.FCVTPS_asimdmiscfp16_R
                            return 970;
                          }
                          else
                          {
                            // ENCODING.FCVTNS_asimdmiscfp16_R
                            return 950;
                          }
                          break;
                        }
                        default: break;
                      }
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        if (c & 0x01)
                        {
                          // ENCODING.XTN_asimdmisc_N
                          return 1743;
                        }
                        else
                        {
                          // ENCODING.SADDLP_asimdmisc_P
                          return 1389;
                        }
                      }
                      else
                      {
                        // ENCODING.TRN1_asimdperm_only
                        return 1653;
                      }
                    }
                  }
                }
                else
                {
                  if (b & 0x40)
                  {
                    if (b & 0x80)
                    {
                      // the following switch contains 7 case.
                      switch ((c & 0x99) - 1)
                      {
                        case 0x00:
                        {
                          // ENCODING.FCVTAS_asimdmisc_R
                          return 909;
                          break;
                        }
                        case 0x0f:
                        {
                          // ENCODING.FMAXNMV_asimdall_only_H
                          return 1049;
                          break;
                        }
                        case 0x18:
                        {
                          // ENCODING.FCVTAS_asimdmiscfp16_R
                          return 908;
                          break;
                        }
                        case 0x7f:
                        {
                          // ENCODING.FCMGT_asimdmisc_FZ
                          return 873;
                          break;
                        }
                        case 0x80:
                        {
                          // ENCODING.URECPE_asimdmisc_R
                          return 1717;
                          break;
                        }
                        case 0x8f:
                        {
                          // ENCODING.FMINNMV_asimdall_only_H
                          return 1071;
                          break;
                        }
                        case 0x97:
                        {
                          // ENCODING.FCMGT_asimdmiscfp16_FZ
                          return 872;
                          break;
                        }
                        default: break;
                      }
                    }
                    else
                    {
                      // the following switch contains 3 case.
                      switch (c & 0x09)
                      {
                        case 0x00:
                        {
                          // ENCODING.CLS_asimdmisc_R
                          return 786;
                          break;
                        }
                        case 0x01:
                        {
                          // ENCODING.SQXTN_asimdmisc_N
                          return 1511;
                          break;
                        }
                        case 0x08:
                        {
                          // ENCODING.AESE_B_cryptoaes
                          return 768;
                          break;
                        }
                        default: break;
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x80)
                    {
                      // the following switch contains 3 case.
                      switch (c & 0x19)
                      {
                        case 0x00:
                        {
                          // ENCODING.CMGT_asimdmisc_Z
                          return 799;
                          break;
                        }
                        case 0x01:
                        {
                          if (c & 0x80)
                          {
                            // ENCODING.FRINTP_asimdmisc_R
                            return 1195;
                          }
                          else
                          {
                            // ENCODING.FRINTN_asimdmisc_R
                            return 1190;
                          }
                          break;
                        }
                        case 0x19:
                        {
                          if (c & 0x80)
                          {
                            // ENCODING.FRINTP_asimdmiscfp16_R
                            return 1194;
                          }
                          else
                          {
                            // ENCODING.FRINTN_asimdmiscfp16_R
                            return 1189;
                          }
                          break;
                        }
                        default: break;
                      }
                    }
                    else
                    {
                      // ENCODING.REV64_asimdmisc_R
                      return 1380;
                    }
                  }
                }
              }
            }
            else
            {
              if (b & 0x10)
              {
                if (b & 0x20)
                {
                  if (b & 0x40)
                  {
                    if (c & 0x20)
                    {
                      // ENCODING.SABDL_asimddiff_L
                      return 1386;
                    }
                    else
                    {
                      // ENCODING.TBX_asimdtbl_L4_4
                      return 1651;
                    }
                  }
                  else
                  {
                    if (b & 0x80)
                    {
                      // ENCODING.SQDMLSL_asimddiff_L
                      return 1469;
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.SSUBW_asimddiff_W
                        return 1531;
                      }
                      else
                      {
                        // ENCODING.TBX_asimdtbl_L2_2
                        return 1649;
                      }
                    }
                  }
                }
                else
                {
                  if (b & 0x40)
                  {
                    if (b & 0x80)
                    {
                      // ENCODING.SQDMULL_asimddiff_L
                      return 1477;
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.SABAL_asimddiff_L
                        return 1384;
                      }
                      else
                      {
                        // ENCODING.TBX_asimdtbl_L3_3
                        return 1650;
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x80)
                    {
                      // ENCODING.SQDMLAL_asimddiff_L
                      return 1465;
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.SADDW_asimddiff_W
                        return 1391;
                      }
                      else
                      {
                        // ENCODING.TBX_asimdtbl_L1_1
                        return 1652;
                      }
                    }
                  }
                }
              }
              else
              {
                if (b & 0x20)
                {
                  if (b & 0x40)
                  {
                    if (b & 0x80)
                    {
                      // ENCODING.PMULL_asimddiff_L
                      return 1374;
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.SUBHN_asimddiff_N
                        return 1641;
                      }
                      else
                      {
                        // ENCODING.TBL_asimdtbl_L4_4
                        return 1647;
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x80)
                    {
                      // ENCODING.SMLSL_asimddiff_L
                      return 1452;
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.SSUBL_asimddiff_L
                        return 1530;
                      }
                      else
                      {
                        // ENCODING.TBL_asimdtbl_L2_2
                        return 1645;
                      }
                    }
                  }
                }
                else
                {
                  if (b & 0x40)
                  {
                    if (b & 0x80)
                    {
                      // ENCODING.SMULL_asimddiff_L
                      return 1457;
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.ADDHN_asimddiff_N
                        return 763;
                      }
                      else
                      {
                        // ENCODING.TBL_asimdtbl_L3_3
                        return 1646;
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x80)
                    {
                      // ENCODING.SMLAL_asimddiff_L
                      return 1450;
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.SADDL_asimddiff_L
                        return 1388;
                      }
                      else
                      {
                        // ENCODING.TBL_asimdtbl_L1_1
                        return 1648;
                      }
                    }
                  }
                }
              }
            }
          }
          break;
        }
        case 0x03:
        {
          // the following switch contains 4 case.
          switch (b & 0x84)
          {
            case 0x00:
            {
              // the following switch contains 8 case.
              switch (b & 0x70)
              {
                case 0x00:
                {
                  // ENCODING.FMLAL_asimdelem_LH
                  return 1085;
                  break;
                }
                case 0x10:
                {
                  if (c & 0x80)
                  {
                    // ENCODING.FMLA_asimdelem_R_SD
                    return 1082;
                  }
                  else
                  {
                    // ENCODING.FMLA_asimdelem_RH_H
                    return 1081;
                  }
                  break;
                }
                case 0x20:
                {
                  // ENCODING.SMLAL_asimdelem_L
                  return 1449;
                  break;
                }
                case 0x30:
                {
                  // ENCODING.SQDMLAL_asimdelem_L
                  return 1463;
                  break;
                }
                case 0x40:
                {
                  // ENCODING.FMLSL_asimdelem_LH
                  return 1095;
                  break;
                }
                case 0x50:
                {
                  if (c & 0x80)
                  {
                    // ENCODING.FMLS_asimdelem_R_SD
                    return 1092;
                  }
                  else
                  {
                    // ENCODING.FMLS_asimdelem_RH_H
                    return 1091;
                  }
                  break;
                }
                case 0x60:
                {
                  // ENCODING.SMLSL_asimdelem_L
                  return 1451;
                  break;
                }
                case 0x70:
                {
                  // ENCODING.SQDMLSL_asimdelem_L
                  return 1467;
                  break;
                }
                default: break;
              }
              break;
            }
            case 0x04:
            {
              if (b & 0x10)
              {
                // conflicts:
                // ENCODING.ORR_asimdimm_L_sl    : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00000xxxxxxxxxxxxxxxxxxx
                // ENCODING.SHL_asimdshf_R       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxx10xxxxxxxxxxxxx
                // ENCODING.SQSHL_asimdshf_R     : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxx11xxxxxxxxxxxxx
                // ENCODING.SRSRA_asimdshf_R     : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxx01xxxxxxxxxxxxx
                // ENCODING.SSRA_asimdshf_R      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxx00xxxxxxxxxxxxx
                // immh!=0b0000
                if ((opcode & 0x00780000) != 0x00000000)
                {
                  // the following switch contains 4 case.
                  switch (b & 0x60)
                  {
                    case 0x00:
                    {
                      // ENCODING.SSRA_asimdshf_R
                      return 1529;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.SRSRA_asimdshf_R
                      return 1522;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.SHL_asimdshf_R
                      return 1428;
                      break;
                    }
                    case 0x60:
                    {
                      // ENCODING.SQSHL_asimdshf_R
                      return 1499;
                      break;
                    }
                    default: break;
                  }
                }
                else
                {
                  // ENCODING.ORR_asimdimm_L_sl
                  return 1371;
                }
              }
              else
              {
                // conflicts:
                // ENCODING.MOVI_asimdimm_L_sl   : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00000xxxxxxxxxxxxxxxxxxx
                // ENCODING.SRSHR_asimdshf_R     : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxx01xxxxxxxxxxxxx
                // ENCODING.SSHR_asimdshf_R      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxx00xxxxxxxxxxxxx
                // immh!=0b0000
                if ((opcode & 0x00780000) != 0x00000000)
                {
                  if (b & 0x20)
                  {
                    // ENCODING.SRSHR_asimdshf_R
                    return 1520;
                  }
                  else
                  {
                    // ENCODING.SSHR_asimdshf_R
                    return 1527;
                  }
                }
                else
                {
                  // ENCODING.MOVI_asimdimm_L_sl
                  return 1357;
                }
              }
              break;
            }
            case 0x80:
            {
              // the following switch contains 8 case.
              switch (b & 0x70)
              {
                case 0x00:
                {
                  // ENCODING.MUL_asimdelem_R
                  return 1361;
                  break;
                }
                case 0x10:
                {
                  if (c & 0x80)
                  {
                    // ENCODING.FMUL_asimdelem_R_SD
                    return 1124;
                  }
                  else
                  {
                    // ENCODING.FMUL_asimdelem_RH_H
                    return 1123;
                  }
                  break;
                }
                case 0x20:
                {
                  // ENCODING.SMULL_asimdelem_L
                  return 1456;
                  break;
                }
                case 0x30:
                {
                  // ENCODING.SQDMULL_asimdelem_L
                  return 1475;
                  break;
                }
                case 0x40:
                {
                  // ENCODING.SQDMULH_asimdelem_R
                  return 1471;
                  break;
                }
                case 0x50:
                {
                  // ENCODING.SQRDMULH_asimdelem_R
                  return 1489;
                  break;
                }
                case 0x60:
                {
                  // ENCODING.SDOT_asimdelem_D
                  return 1410;
                  break;
                }
                case 0x70:
                {
                  // the following switch contains 4 case.
                  switch (c & 0xc0)
                  {
                    case 0x00:
                    {
                      // ENCODING.SUDOT_asimdelem_D
                      return 1642;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.BFDOT_asimdelem_E
                      return 775;
                      break;
                    }
                    case 0x80:
                    {
                      // ENCODING.USDOT_asimdelem_D
                      return 1726;
                      break;
                    }
                    case 0xc0:
                    {
                      // ENCODING.BFMLAL_asimdelem_F
                      return 777;
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
            case 0x84:
            {
              // the following switch contains 4 case.
              switch (b & 0x48)
              {
                case 0x00:
                {
                  if (b & 0x10)
                  {
                    // conflicts:
                    // ENCODING.ORR_asimdimm_L_hl    : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00000xxxxxxxxxxxxxxxxxxx
                    // ENCODING.SQSHRN_asimdshf_N    : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxx0xxxxxxxxxxxxx
                    // immh!=0b0000
                    if ((opcode & 0x00780000) != 0x00000000)
                    {
                      // ENCODING.SQSHRN_asimdshf_N
                      return 1505;
                    }
                    else
                    {
                      // ENCODING.ORR_asimdimm_L_hl
                      return 1370;
                    }
                  }
                  else
                  {
                    // conflicts:
                    // ENCODING.MOVI_asimdimm_L_hl   : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00000xxxxxxxxxxxxxxxxxxx
                    // ENCODING.SHRN_asimdshf_N      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxx0xxxxxxxxxxxxx
                    // ENCODING.SSHLL_asimdshf_L     : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxx1xxxxxxxxxxxxx
                    // immh!=0b0000
                    if ((opcode & 0x00780000) != 0x00000000)
                    {
                      if (b & 0x20)
                      {
                        // ENCODING.SSHLL_asimdshf_L
                        return 1525;
                      }
                      else
                      {
                        // ENCODING.SHRN_asimdshf_N
                        return 1430;
                      }
                    }
                    else
                    {
                      // ENCODING.MOVI_asimdimm_L_hl
                      return 1356;
                    }
                  }
                  break;
                }
                case 0x08:
                {
                  if (b & 0x10)
                  {
                    // ENCODING.SQRSHRN_asimdshf_N
                    return 1495;
                  }
                  else
                  {
                    // ENCODING.RSHRN_asimdshf_N
                    return 1381;
                  }
                  break;
                }
                case 0x40:
                {
                  if (b & 0x20)
                  {
                    if (b & 0x10)
                    {
                      // ENCODING.FMOV_asimdimm_S_s
                      return 1100;
                    }
                    else
                    {
                      // conflicts:
                      // ENCODING.MOVI_asimdimm_N_b    : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00000xxxxxxxxxxxxxxxxxxx
                      // ENCODING.SCVTF_asimdshf_C     : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxxxxxxxxxxxxxxxx
                      // immh!=0b0000
                      if ((opcode & 0x00780000) != 0x00000000)
                      {
                        // ENCODING.SCVTF_asimdshf_C
                        return 1393;
                      }
                      else
                      {
                        // ENCODING.MOVI_asimdimm_N_b
                        return 1355;
                      }
                    }
                  }
                  else
                  {
                    // ENCODING.MOVI_asimdimm_M_sm
                    return 1358;
                  }
                  break;
                }
                case 0x48:
                {
                  // conflicts:
                  // ENCODING.FCVTZS_asimdshf_C    : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxx11xxxxxxxxxxxx
                  // ENCODING.FMOV_asimdimm_H_h    : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00000xxxxx11xxxxxxxxxxxx
                  // immh!=0b0000
                  if ((opcode & 0x00780000) != 0x00000000)
                  {
                    // ENCODING.FCVTZS_asimdshf_C
                    return 991;
                  }
                  else
                  {
                    // ENCODING.FMOV_asimdimm_H_h
                    return 1099;
                  }
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
        case 0x20:
        {
          if (c & 0x40)
          {
            if (c & 0x80)
            {
              if (d & 0x40)
              {
                // ENCODING.LDP_D_ldstpair_post
                return 1314;
              }
              else
              {
                // ENCODING.LDP_S_ldstpair_post
                return 1313;
              }
            }
            else
            {
              if (d & 0x40)
              {
                // ENCODING.LDNP_D_ldstnapair_offs
                return 1311;
              }
              else
              {
                // ENCODING.LDNP_S_ldstnapair_offs
                return 1310;
              }
            }
          }
          else
          {
            if (c & 0x80)
            {
              if (d & 0x40)
              {
                // ENCODING.STP_D_ldstpair_post
                return 1605;
              }
              else
              {
                // ENCODING.STP_S_ldstpair_post
                return 1604;
              }
            }
            else
            {
              if (d & 0x40)
              {
                // ENCODING.STNP_D_ldstnapair_offs
                return 1602;
              }
              else
              {
                // ENCODING.STNP_S_ldstnapair_offs
                return 1601;
              }
            }
          }
          break;
        }
        case 0x21:
        {
          if (c & 0x40)
          {
            if (c & 0x80)
            {
              if (d & 0x40)
              {
                // ENCODING.LDP_D_ldstpair_pre
                return 1317;
              }
              else
              {
                // ENCODING.LDP_S_ldstpair_pre
                return 1316;
              }
            }
            else
            {
              if (d & 0x40)
              {
                // ENCODING.LDP_D_ldstpair_off
                return 1320;
              }
              else
              {
                // ENCODING.LDP_S_ldstpair_off
                return 1319;
              }
            }
          }
          else
          {
            if (c & 0x80)
            {
              if (d & 0x40)
              {
                // ENCODING.STP_D_ldstpair_pre
                return 1608;
              }
              else
              {
                // ENCODING.STP_S_ldstpair_pre
                return 1607;
              }
            }
            else
            {
              if (d & 0x40)
              {
                // ENCODING.STP_D_ldstpair_off
                return 1611;
              }
              else
              {
                // ENCODING.STP_S_ldstpair_off
                return 1610;
              }
            }
          }
          break;
        }
        case 0x22:
        {
          if (b & 0x04)
          {
            if (b & 0x80)
            {
              if (b & 0x20)
              {
                if (b & 0x08)
                {
                  if (b & 0x10)
                  {
                    // the following switch contains 3 case.
                    switch (c & 0xa0)
                    {
                      case 0x00:
                      {
                        // ENCODING.BFDOT_asimdsame2_D
                        return 776;
                        break;
                      }
                      case 0x20:
                      {
                        // ENCODING.FDIV_asimdsame_only
                        return 1027;
                        break;
                      }
                      case 0x80:
                      {
                        // ENCODING.BFMLAL_asimdsame2_F_
                        return 778;
                        break;
                      }
                      default: break;
                    }
                  }
                  else
                  {
                    if (b & 0x40)
                    {
                      // the following switch contains 3 case.
                      switch (c & 0xa0)
                      {
                        case 0x00:
                        {
                          // ENCODING.BFMMLA_asimdsame2_E
                          return 779;
                          break;
                        }
                        case 0x20:
                        {
                          // ENCODING.FACGE_asimdsame_only
                          return 829;
                          break;
                        }
                        case 0xa0:
                        {
                          // ENCODING.FACGT_asimdsame_only
                          return 833;
                          break;
                        }
                        default: break;
                      }
                    }
                    else
                    {
                      // ENCODING.UMINP_asimdsame_only
                      return 1690;
                    }
                  }
                }
                else
                {
                  if (b & 0x40)
                  {
                    if (c & 0x20)
                    {
                      if (b & 0x10)
                      {
                        if (c & 0x80)
                        {
                          // ENCODING.FMINP_asimdsame_only
                          return 1076;
                        }
                        else
                        {
                          // ENCODING.FMAXP_asimdsame_only
                          return 1054;
                        }
                      }
                      else
                      {
                        if (c & 0x80)
                        {
                          // ENCODING.FCMGT_asimdsame_only
                          return 869;
                        }
                        else
                        {
                          // ENCODING.FCMGE_asimdsame_only
                          return 861;
                        }
                      }
                    }
                    else
                    {
                      // ENCODING.FCADD_asimdsame2_C
                      return 843;
                    }
                  }
                  else
                  {
                    if (b & 0x10)
                    {
                      // ENCODING.SQRDMULH_asimdsame_only
                      return 1491;
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.UMAXP_asimdsame_only
                        return 1687;
                      }
                      else
                      {
                        // ENCODING.UMMLA_asimdsame2_G
                        return 1696;
                      }
                    }
                  }
                }
              }
              else
              {
                if (b & 0x40)
                {
                  if (c & 0x20)
                  {
                    if (b & 0x08)
                    {
                      if (b & 0x10)
                      {
                        // ENCODING.FMUL_asimdsame_only
                        return 1126;
                      }
                      else
                      {
                        if (c & 0x80)
                        {
                          // ENCODING.FMLSL2_asimdsame_F
                          return 1098;
                        }
                        else
                        {
                          // ENCODING.FMLAL2_asimdsame_F
                          return 1088;
                        }
                      }
                    }
                    else
                    {
                      if (b & 0x10)
                      {
                        if (c & 0x80)
                        {
                          // ENCODING.FABD_asimdsame_only
                          return 820;
                        }
                        else
                        {
                          // ENCODING.FADDP_asimdsame_only
                          return 842;
                        }
                      }
                      else
                      {
                        if (c & 0x80)
                        {
                          // ENCODING.FMINNMP_asimdsame_only
                          return 1070;
                        }
                        else
                        {
                          // ENCODING.FMAXNMP_asimdsame_only
                          return 1048;
                        }
                      }
                    }
                  }
                  else
                  {
                    // ENCODING.FCMLA_asimdsame2_C
                    return 876;
                  }
                }
                else
                {
                  if (b & 0x08)
                  {
                    if (b & 0x10)
                    {
                      // ENCODING.PMUL_asimdsame_only
                      return 1373;
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.CMEQ_asimdsame_only
                        return 789;
                      }
                      else
                      {
                        // ENCODING.SQRDMLSH_asimdsame2_only
                        return 1487;
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x10)
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.MLS_asimdsame_only
                        return 1354;
                      }
                      else
                      {
                        // ENCODING.UDOT_asimdsame2_D
                        return 1683;
                      }
                    }
                    else
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.SUB_asimdsame_only
                        return 1640;
                      }
                      else
                      {
                        // ENCODING.SQRDMLAH_asimdsame2_only
                        return 1483;
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
                // the following switch contains 16 case.
                switch (b & 0x78)
                {
                  case 0x00:
                  {
                    // ENCODING.UHADD_asimdsame_only
                    return 1684;
                    break;
                  }
                  case 0x08:
                  {
                    // ENCODING.UQADD_asimdsame_only
                    return 1702;
                    break;
                  }
                  case 0x10:
                  {
                    // ENCODING.URHADD_asimdsame_only
                    return 1718;
                    break;
                  }
                  case 0x18:
                  {
                    // the following switch contains 4 case.
                    switch (c & 0xc0)
                    {
                      case 0x00:
                      {
                        // ENCODING.EOR_asimdsame_only
                        return 815;
                        break;
                      }
                      case 0x40:
                      {
                        // ENCODING.BSL_asimdsame_only
                        return 785;
                        break;
                      }
                      case 0x80:
                      {
                        // ENCODING.BIT_asimdsame_only
                        return 784;
                        break;
                      }
                      case 0xc0:
                      {
                        // ENCODING.BIF_asimdsame_only
                        return 783;
                        break;
                      }
                      default: break;
                    }
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.UHSUB_asimdsame_only
                    return 1685;
                    break;
                  }
                  case 0x28:
                  {
                    // ENCODING.UQSUB_asimdsame_only
                    return 1714;
                    break;
                  }
                  case 0x30:
                  {
                    // ENCODING.CMHI_asimdsame_only
                    return 801;
                    break;
                  }
                  case 0x38:
                  {
                    // ENCODING.CMHS_asimdsame_only
                    return 803;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.USHL_asimdsame_only
                    return 1729;
                    break;
                  }
                  case 0x48:
                  {
                    // ENCODING.UQSHL_asimdsame_only
                    return 1710;
                    break;
                  }
                  case 0x50:
                  {
                    // ENCODING.URSHL_asimdsame_only
                    return 1720;
                    break;
                  }
                  case 0x58:
                  {
                    // ENCODING.UQRSHL_asimdsame_only
                    return 1704;
                    break;
                  }
                  case 0x60:
                  {
                    // ENCODING.UMAX_asimdsame_only
                    return 1686;
                    break;
                  }
                  case 0x68:
                  {
                    // ENCODING.UMIN_asimdsame_only
                    return 1689;
                    break;
                  }
                  case 0x70:
                  {
                    // ENCODING.UABD_asimdsame_only
                    return 1657;
                    break;
                  }
                  case 0x78:
                  {
                    // ENCODING.UABA_asimdsame_only
                    return 1655;
                    break;
                  }
                  default: break;
                }
              }
              else
              {
                // the following switch contains 3 case.
                switch (c & 0xc0)
                {
                  case 0x00:
                  {
                    // ENCODING.INS_asimdins_IV_v
                    return 1227;
                    break;
                  }
                  case 0x40:
                  {
                    // the following switch contains 7 case.
                    switch (b & 0x38)
                    {
                      case 0x00:
                      {
                        // ENCODING.FMAXNMP_asimdsamefp16_only
                        return 1047;
                        break;
                      }
                      case 0x10:
                      {
                        // ENCODING.FADDP_asimdsamefp16_only
                        return 841;
                        break;
                      }
                      case 0x18:
                      {
                        // ENCODING.FMUL_asimdsamefp16_only
                        return 1125;
                        break;
                      }
                      case 0x20:
                      {
                        // ENCODING.FCMGE_asimdsamefp16_only
                        return 860;
                        break;
                      }
                      case 0x28:
                      {
                        // ENCODING.FACGE_asimdsamefp16_only
                        return 828;
                        break;
                      }
                      case 0x30:
                      {
                        // ENCODING.FMAXP_asimdsamefp16_only
                        return 1053;
                        break;
                      }
                      case 0x38:
                      {
                        // ENCODING.FDIV_asimdsamefp16_only
                        return 1026;
                        break;
                      }
                      default: break;
                    }
                    break;
                  }
                  case 0xc0:
                  {
                    // the following switch contains 5 case.
                    switch (b & 0x38)
                    {
                      case 0x00:
                      {
                        // ENCODING.FMINNMP_asimdsamefp16_only
                        return 1069;
                        break;
                      }
                      case 0x10:
                      {
                        // ENCODING.FABD_asimdsamefp16_only
                        return 819;
                        break;
                      }
                      case 0x20:
                      {
                        // ENCODING.FCMGT_asimdsamefp16_only
                        return 868;
                        break;
                      }
                      case 0x28:
                      {
                        // ENCODING.FACGT_asimdsamefp16_only
                        return 832;
                        break;
                      }
                      case 0x30:
                      {
                        // ENCODING.FMINP_asimdsamefp16_only
                        return 1075;
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
            if (b & 0x80)
            {
              // the following switch contains 11 case.
              switch (b & 0x78)
              {
                case 0x00:
                {
                  // ENCODING.UMLAL_asimddiff_L
                  return 1693;
                  break;
                }
                case 0x08:
                {
                  // the following switch contains 3 case.
                  switch (c & 0x19)
                  {
                    case 0x00:
                    {
                      // ENCODING.CMGE_asimdmisc_Z
                      return 795;
                      break;
                    }
                    case 0x01:
                    {
                      // ENCODING.FRINTA_asimdmisc_R
                      return 1175;
                      break;
                    }
                    case 0x19:
                    {
                      // ENCODING.FRINTA_asimdmiscfp16_R
                      return 1174;
                      break;
                    }
                    default: break;
                  }
                  break;
                }
                case 0x18:
                {
                  // the following switch contains 3 case.
                  switch (c & 0x19)
                  {
                    case 0x00:
                    {
                      // ENCODING.CMLE_asimdmisc_Z
                      return 805;
                      break;
                    }
                    case 0x01:
                    {
                      if (c & 0x80)
                      {
                        // ENCODING.FRINTI_asimdmisc_R
                        return 1180;
                      }
                      else
                      {
                        // ENCODING.FRINTX_asimdmisc_R
                        return 1200;
                      }
                      break;
                    }
                    case 0x19:
                    {
                      if (c & 0x80)
                      {
                        // ENCODING.FRINTI_asimdmiscfp16_R
                        return 1179;
                      }
                      else
                      {
                        // ENCODING.FRINTX_asimdmiscfp16_R
                        return 1199;
                      }
                      break;
                    }
                    default: break;
                  }
                  break;
                }
                case 0x20:
                {
                  // ENCODING.UMLSL_asimddiff_L
                  return 1695;
                  break;
                }
                case 0x28:
                {
                  // the following switch contains 4 case.
                  switch ((c & 0x19) - 1)
                  {
                    case 0x00:
                    {
                      if (c & 0x80)
                      {
                        // ENCODING.FCVTPU_asimdmisc_R
                        return 981;
                      }
                      else
                      {
                        // ENCODING.FCVTNU_asimdmisc_R
                        return 961;
                      }
                      break;
                    }
                    case 0x0f:
                    {
                      // ENCODING.UMAXV_asimdall_only
                      return 1688;
                      break;
                    }
                    case 0x10:
                    {
                      // ENCODING.UMINV_asimdall_only
                      return 1691;
                      break;
                    }
                    case 0x18:
                    {
                      if (c & 0x80)
                      {
                        // ENCODING.FCVTPU_asimdmiscfp16_R
                        return 980;
                      }
                      else
                      {
                        // ENCODING.FCVTNU_asimdmiscfp16_R
                        return 960;
                      }
                      break;
                    }
                    default: break;
                  }
                  break;
                }
                case 0x38:
                {
                  // the following switch contains 3 case.
                  switch (c & 0x19)
                  {
                    case 0x00:
                    {
                      // ENCODING.NEG_asimdmisc_R
                      return 1367;
                      break;
                    }
                    case 0x01:
                    {
                      if (c & 0x80)
                      {
                        // ENCODING.FCVTZU_asimdmisc_R
                        return 1013;
                      }
                      else
                      {
                        // ENCODING.FCVTMU_asimdmisc_R
                        return 940;
                      }
                      break;
                    }
                    case 0x19:
                    {
                      if (c & 0x80)
                      {
                        // ENCODING.FCVTZU_asimdmiscfp16_R
                        return 1012;
                      }
                      else
                      {
                        // ENCODING.FCVTMU_asimdmiscfp16_R
                        return 939;
                      }
                      break;
                    }
                    default: break;
                  }
                  break;
                }
                case 0x40:
                {
                  // ENCODING.UMULL_asimddiff_L
                  return 1700;
                  break;
                }
                case 0x48:
                {
                  // the following switch contains 7 case.
                  switch ((c & 0x99) - 1)
                  {
                    case 0x00:
                    {
                      // ENCODING.FCVTAU_asimdmisc_R
                      return 919;
                      break;
                    }
                    case 0x0f:
                    {
                      // ENCODING.FMAXNMV_asimdall_only_SD
                      return 1050;
                      break;
                    }
                    case 0x18:
                    {
                      // ENCODING.FCVTAU_asimdmiscfp16_R
                      return 918;
                      break;
                    }
                    case 0x7f:
                    {
                      // ENCODING.FCMGE_asimdmisc_FZ
                      return 865;
                      break;
                    }
                    case 0x80:
                    {
                      // ENCODING.URSQRTE_asimdmisc_R
                      return 1723;
                      break;
                    }
                    case 0x8f:
                    {
                      // ENCODING.FMINNMV_asimdall_only_SD
                      return 1072;
                      break;
                    }
                    case 0x97:
                    {
                      // ENCODING.FCMGE_asimdmiscfp16_FZ
                      return 864;
                      break;
                    }
                    default: break;
                  }
                  break;
                }
                case 0x58:
                {
                  // the following switch contains 6 case.
                  switch ((c & 0x99) - 1)
                  {
                    case 0x00:
                    {
                      // ENCODING.UCVTF_asimdmisc_R
                      return 1669;
                      break;
                    }
                    case 0x18:
                    {
                      // ENCODING.UCVTF_asimdmiscfp16_R
                      return 1668;
                      break;
                    }
                    case 0x7f:
                    {
                      // ENCODING.FCMLE_asimdmisc_FZ
                      return 880;
                      break;
                    }
                    case 0x80:
                    {
                      // ENCODING.FRSQRTE_asimdmisc_R
                      return 1212;
                      break;
                    }
                    case 0x97:
                    {
                      // ENCODING.FCMLE_asimdmiscfp16_FZ
                      return 879;
                      break;
                    }
                    case 0x98:
                    {
                      // ENCODING.FRSQRTE_asimdmiscfp16_R
                      return 1211;
                      break;
                    }
                    default: break;
                  }
                  break;
                }
                case 0x68:
                {
                  // ENCODING.FRINT32X_asimdmisc_R
                  return 1162;
                  break;
                }
                case 0x78:
                {
                  // the following switch contains 7 case.
                  switch ((c & 0x99) - 1)
                  {
                    case 0x00:
                    {
                      // ENCODING.FRINT64X_asimdmisc_R
                      return 1168;
                      break;
                    }
                    case 0x0f:
                    {
                      // ENCODING.FMAXV_asimdall_only_SD
                      return 1056;
                      break;
                    }
                    case 0x7f:
                    {
                      // ENCODING.FNEG_asimdmisc_R
                      return 1139;
                      break;
                    }
                    case 0x80:
                    {
                      // ENCODING.FSQRT_asimdmisc_R
                      return 1218;
                      break;
                    }
                    case 0x8f:
                    {
                      // ENCODING.FMINV_asimdall_only_SD
                      return 1078;
                      break;
                    }
                    case 0x97:
                    {
                      // ENCODING.FNEG_asimdmiscfp16_R
                      return 1138;
                      break;
                    }
                    case 0x98:
                    {
                      // ENCODING.FSQRT_asimdmiscfp16_R
                      return 1217;
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
              if (c & 0x20)
              {
                // the following switch contains 15 case.
                switch (b & 0x78)
                {
                  case 0x00:
                  {
                    // ENCODING.UADDL_asimddiff_L
                    return 1660;
                    break;
                  }
                  case 0x08:
                  {
                    // ENCODING.REV32_asimdmisc_R
                    return 1379;
                    break;
                  }
                  case 0x10:
                  {
                    // ENCODING.UADDW_asimddiff_W
                    return 1663;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.USUBL_asimddiff_L
                    return 1738;
                    break;
                  }
                  case 0x28:
                  {
                    if (c & 0x01)
                    {
                      // ENCODING.SQXTUN_asimdmisc_N
                      return 1513;
                    }
                    else
                    {
                      // ENCODING.UADDLP_asimdmisc_P
                      return 1661;
                    }
                    break;
                  }
                  case 0x30:
                  {
                    // ENCODING.USUBW_asimddiff_W
                    return 1739;
                    break;
                  }
                  case 0x38:
                  {
                    // the following switch contains 3 case.
                    switch (c & 0x11)
                    {
                      case 0x00:
                      {
                        // ENCODING.USQADD_asimdmisc_R
                        return 1735;
                        break;
                      }
                      case 0x01:
                      {
                        // ENCODING.SHLL_asimdmisc_S
                        return 1429;
                        break;
                      }
                      case 0x10:
                      {
                        // ENCODING.UADDLV_asimdall_only
                        return 1662;
                        break;
                      }
                      default: break;
                    }
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.RADDHN_asimddiff_N
                    return 1375;
                    break;
                  }
                  case 0x48:
                  {
                    if (c & 0x01)
                    {
                      // ENCODING.UQXTN_asimdmisc_N
                      return 1716;
                    }
                    else
                    {
                      // ENCODING.CLZ_asimdmisc_R
                      return 787;
                    }
                    break;
                  }
                  case 0x50:
                  {
                    // ENCODING.UABAL_asimddiff_L
                    return 1656;
                    break;
                  }
                  case 0x58:
                  {
                    if (c & 0x40)
                    {
                      // ENCODING.RBIT_asimdmisc_R
                      return 1377;
                    }
                    else
                    {
                      // ENCODING.NOT_asimdmisc_R
                      return 1368;
                    }
                    break;
                  }
                  case 0x60:
                  {
                    // ENCODING.RSUBHN_asimddiff_N
                    return 1382;
                    break;
                  }
                  case 0x68:
                  {
                    if (c & 0x01)
                    {
                      // ENCODING.FCVTXN_asimdmisc_N
                      return 989;
                    }
                    else
                    {
                      // ENCODING.UADALP_asimdmisc_P
                      return 1659;
                    }
                    break;
                  }
                  case 0x70:
                  {
                    // ENCODING.UABDL_asimddiff_L
                    return 1658;
                    break;
                  }
                  case 0x78:
                  {
                    // ENCODING.SQNEG_asimdmisc_R
                    return 1479;
                    break;
                  }
                  default: break;
                }
              }
              else
              {
                // ENCODING.EXT_asimdext_only
                return 816;
              }
            }
          }
          break;
        }
        case 0x23:
        {
          // the following switch contains 4 case.
          switch (b & 0x84)
          {
            case 0x00:
            {
              if (b & 0x10)
              {
                if (c & 0x40)
                {
                  // ENCODING.FCMLA_asimdelem_C_H
                  return 874;
                }
                else
                {
                  // ENCODING.FCMLA_asimdelem_C_S
                  return 875;
                }
              }
              else
              {
                // the following switch contains 4 case.
                switch (b & 0x60)
                {
                  case 0x00:
                  {
                    // ENCODING.MLA_asimdelem_R
                    return 1351;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.UMLAL_asimdelem_L
                    return 1692;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.MLS_asimdelem_R
                    return 1353;
                    break;
                  }
                  case 0x60:
                  {
                    // ENCODING.UMLSL_asimdelem_L
                    return 1694;
                    break;
                  }
                  default: break;
                }
              }
              break;
            }
            case 0x04:
            {
              if (b & 0x10)
              {
                // conflicts:
                // ENCODING.BIC_asimdimm_L_sl    : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00000xxxxxxxxxxxxxxxxxxx
                // ENCODING.SLI_asimdshf_R       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxx10xxxxxxxxxxxxx
                // ENCODING.UQSHL_asimdshf_R     : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxx11xxxxxxxxxxxxx
                // ENCODING.URSRA_asimdshf_R     : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxx01xxxxxxxxxxxxx
                // ENCODING.USRA_asimdshf_R      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxx00xxxxxxxxxxxxx
                // immh!=0b0000
                if ((opcode & 0x00780000) != 0x00000000)
                {
                  // the following switch contains 4 case.
                  switch (b & 0x60)
                  {
                    case 0x00:
                    {
                      // ENCODING.USRA_asimdshf_R
                      return 1737;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.URSRA_asimdshf_R
                      return 1725;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.SLI_asimdshf_R
                      return 1433;
                      break;
                    }
                    case 0x60:
                    {
                      // ENCODING.UQSHL_asimdshf_R
                      return 1708;
                      break;
                    }
                    default: break;
                  }
                }
                else
                {
                  // ENCODING.BIC_asimdimm_L_sl
                  return 781;
                }
              }
              else
              {
                // conflicts:
                // ENCODING.MVNI_asimdimm_L_sl   : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00000xxxxxxxxxxxxxxxxxxx
                // ENCODING.SQSHLU_asimdshf_R    : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxx11xxxxxxxxxxxxx
                // ENCODING.SRI_asimdshf_R       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxx10xxxxxxxxxxxxx
                // ENCODING.URSHR_asimdshf_R     : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxx01xxxxxxxxxxxxx
                // ENCODING.USHR_asimdshf_R      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxx00xxxxxxxxxxxxx
                // immh!=0b0000
                if ((opcode & 0x00780000) != 0x00000000)
                {
                  // the following switch contains 4 case.
                  switch (b & 0x60)
                  {
                    case 0x00:
                    {
                      // ENCODING.USHR_asimdshf_R
                      return 1732;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.URSHR_asimdshf_R
                      return 1722;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.SRI_asimdshf_R
                      return 1516;
                      break;
                    }
                    case 0x60:
                    {
                      // ENCODING.SQSHLU_asimdshf_R
                      return 1503;
                      break;
                    }
                    default: break;
                  }
                }
                else
                {
                  // ENCODING.MVNI_asimdimm_L_sl
                  return 1364;
                }
              }
              break;
            }
            case 0x80:
            {
              // the following switch contains 7 case.
              switch (b & 0x70)
              {
                case 0x00:
                {
                  // ENCODING.FMLAL2_asimdelem_LH
                  return 1086;
                  break;
                }
                case 0x10:
                {
                  if (c & 0x80)
                  {
                    // ENCODING.FMULX_asimdelem_R_SD
                    return 1133;
                  }
                  else
                  {
                    // ENCODING.FMULX_asimdelem_RH_H
                    return 1132;
                  }
                  break;
                }
                case 0x20:
                {
                  // ENCODING.UMULL_asimdelem_L
                  return 1699;
                  break;
                }
                case 0x40:
                {
                  // ENCODING.FMLSL2_asimdelem_LH
                  return 1096;
                  break;
                }
                case 0x50:
                {
                  // ENCODING.SQRDMLAH_asimdelem_R
                  return 1481;
                  break;
                }
                case 0x60:
                {
                  // ENCODING.UDOT_asimdelem_D
                  return 1682;
                  break;
                }
                case 0x70:
                {
                  // ENCODING.SQRDMLSH_asimdelem_R
                  return 1485;
                  break;
                }
                default: break;
              }
              break;
            }
            case 0x84:
            {
              // the following switch contains 4 case.
              switch (b & 0x48)
              {
                case 0x00:
                {
                  if (b & 0x10)
                  {
                    // conflicts:
                    // ENCODING.BIC_asimdimm_L_hl    : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00000xxxxxxxxxxxxxxxxxxx
                    // ENCODING.UQSHRN_asimdshf_N    : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxx0xxxxxxxxxxxxx
                    // immh!=0b0000
                    if ((opcode & 0x00780000) != 0x00000000)
                    {
                      // ENCODING.UQSHRN_asimdshf_N
                      return 1712;
                    }
                    else
                    {
                      // ENCODING.BIC_asimdimm_L_hl
                      return 780;
                    }
                  }
                  else
                  {
                    // conflicts:
                    // ENCODING.MVNI_asimdimm_L_hl   : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00000xxxxxxxxxxxxxxxxxxx
                    // ENCODING.SQSHRUN_asimdshf_N   : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxx0xxxxxxxxxxxxx
                    // ENCODING.USHLL_asimdshf_L     : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxx1xxxxxxxxxxxxx
                    // immh!=0b0000
                    if ((opcode & 0x00780000) != 0x00000000)
                    {
                      if (b & 0x20)
                      {
                        // ENCODING.USHLL_asimdshf_L
                        return 1730;
                      }
                      else
                      {
                        // ENCODING.SQSHRUN_asimdshf_N
                        return 1507;
                      }
                    }
                    else
                    {
                      // ENCODING.MVNI_asimdimm_L_hl
                      return 1363;
                    }
                  }
                  break;
                }
                case 0x08:
                {
                  if (b & 0x10)
                  {
                    // ENCODING.UQRSHRN_asimdshf_N
                    return 1706;
                  }
                  else
                  {
                    // ENCODING.SQRSHRUN_asimdshf_N
                    return 1497;
                  }
                  break;
                }
                case 0x40:
                {
                  if (b & 0x20)
                  {
                    if (b & 0x10)
                    {
                      // ENCODING.FMOV_asimdimm_D2_d
                      return 1101;
                    }
                    else
                    {
                      // conflicts:
                      // ENCODING.MOVI_asimdimm_D_ds   : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxx00000xxxxxxxxxxxxxxxxxxx
                      // ENCODING.MOVI_asimdimm_D2_d   : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xxxxxx00000xxxxxxxxxxxxxxxxxxx
                      // ENCODING.UCVTF_asimdshf_C     : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0xxxxxxxxxxxxxxxxxxxxxxx
                      // immh!=0b0000
                      if ((opcode & 0x00780000) != 0x00000000)
                      {
                        // ENCODING.UCVTF_asimdshf_C
                        return 1665;
                      }
                      else
                      {
                        if (d & 0x40)
                        {
                          // ENCODING.MOVI_asimdimm_D2_d
                          return 1360;
                        }
                        else
                        {
                          // ENCODING.MOVI_asimdimm_D_ds
                          return 1359;
                        }
                      }
                    }
                  }
                  else
                  {
                    // ENCODING.MVNI_asimdimm_M_sm
                    return 1365;
                  }
                  break;
                }
                case 0x48:
                {
                  // ENCODING.FCVTZU_asimdshf_C
                  return 1009;
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
        case 0x82:
        {
          // the following switch contains 6 case.
          switch (c & 0xe0)
          {
            case 0x00:
            {
              // ENCODING.EOR3_VVV16_crypto4
              return 814;
              break;
            }
            case 0x20:
            {
              // ENCODING.BCAX_VVV16_crypto4
              return 772;
              break;
            }
            case 0x40:
            {
              if (b & 0x80)
              {
                // the following switch contains 4 case.
                switch (b & 0x0c)
                {
                  case 0x00:
                  {
                    // ENCODING.SM3TT1A_VVV4_crypto3_imm2
                    return 1437;
                    break;
                  }
                  case 0x04:
                  {
                    // ENCODING.SM3TT1B_VVV4_crypto3_imm2
                    return 1438;
                    break;
                  }
                  case 0x08:
                  {
                    // ENCODING.SM3TT2A_VVV4_crypto3_imm2
                    return 1439;
                    break;
                  }
                  case 0x0c:
                  {
                    // ENCODING.SM3TT2B_VVV_crypto3_imm2
                    return 1440;
                    break;
                  }
                  default: break;
                }
              }
              else
              {
                // ENCODING.SM3SS1_VVV4_crypto4
                return 1436;
              }
              break;
            }
            case 0x60:
            {
              // the following switch contains 7 case.
              switch (b & 0x4c)
              {
                case 0x00:
                {
                  // ENCODING.SHA512H_QQV_cryptosha512_3
                  return 1423;
                  break;
                }
                case 0x04:
                {
                  // ENCODING.SHA512H2_QQV_cryptosha512_3
                  return 1422;
                  break;
                }
                case 0x08:
                {
                  // ENCODING.SHA512SU1_VVV2_cryptosha512_3
                  return 1425;
                  break;
                }
                case 0x0c:
                {
                  // ENCODING.RAX1_VVV2_cryptosha512_3
                  return 1376;
                  break;
                }
                case 0x40:
                {
                  // ENCODING.SM3PARTW1_VVV4_cryptosha512_3
                  return 1434;
                  break;
                }
                case 0x44:
                {
                  // ENCODING.SM3PARTW2_VVV4_cryptosha512_3
                  return 1435;
                  break;
                }
                case 0x48:
                {
                  // ENCODING.SM4EKEY_VVV4_cryptosha512_3
                  return 1442;
                  break;
                }
                default: break;
              }
              break;
            }
            case 0x80:
            {
              // ENCODING.XAR_VVV2_crypto3_imm6
              return 1742;
              break;
            }
            case 0xc0:
            {
              if (b & 0x04)
              {
                // ENCODING.SM4E_VV4_cryptosha512_2
                return 1441;
              }
              else
              {
                // ENCODING.SHA512SU0_VV2_cryptosha512_2
                return 1424;
              }
              break;
            }
            default: break;
          }
          break;
        }
        case 0xa0:
        {
          // the following switch contains 4 case.
          switch (c & 0xc0)
          {
            case 0x00:
            {
              // ENCODING.STNP_Q_ldstnapair_offs
              return 1603;
              break;
            }
            case 0x40:
            {
              // ENCODING.LDNP_Q_ldstnapair_offs
              return 1312;
              break;
            }
            case 0x80:
            {
              // ENCODING.STP_Q_ldstpair_post
              return 1606;
              break;
            }
            case 0xc0:
            {
              // ENCODING.LDP_Q_ldstpair_post
              return 1315;
              break;
            }
            default: break;
          }
          break;
        }
        case 0xa1:
        {
          // the following switch contains 4 case.
          switch (c & 0xc0)
          {
            case 0x00:
            {
              // ENCODING.STP_Q_ldstpair_off
              return 1612;
              break;
            }
            case 0x40:
            {
              // ENCODING.LDP_Q_ldstpair_off
              return 1321;
              break;
            }
            case 0x80:
            {
              // ENCODING.STP_Q_ldstpair_pre
              return 1609;
              break;
            }
            case 0xc0:
            {
              // ENCODING.LDP_Q_ldstpair_pre
              return 1318;
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
    case 0x10:
    {
      // the following switch contains 8 case.
      switch (d & 0x83)
      {
        case 0x00:
        {
          // ENCODING.ADR_only_pcreladdr
          return 18;
          break;
        }
        case 0x01:
        {
          // the following switch contains 4 case.
          switch (d & 0x60)
          {
            case 0x00:
            {
              // ENCODING.ADD_32_addsub_imm
              return 7;
              break;
            }
            case 0x20:
            {
              // ENCODING.ADDS_32S_addsub_imm
              return 14;
              break;
            }
            case 0x40:
            {
              // ENCODING.SUB_32_addsub_imm
              return 540;
              break;
            }
            case 0x60:
            {
              // ENCODING.SUBS_32S_addsub_imm
              return 549;
              break;
            }
            default: break;
          }
          break;
        }
        case 0x02:
        {
          if (c & 0x80)
          {
            // the following switch contains 3 case.
            switch (d & 0x60)
            {
              case 0x00:
              {
                // ENCODING.MOVN_32_movewide
                return 396;
                break;
              }
              case 0x40:
              {
                // ENCODING.MOVZ_32_movewide
                return 398;
                break;
              }
              case 0x60:
              {
                // ENCODING.MOVK_32_movewide
                return 394;
                break;
              }
              default: break;
            }
          }
          else
          {
            // the following switch contains 4 case.
            switch (d & 0x60)
            {
              case 0x00:
              {
                // ENCODING.AND_32_log_imm
                return 20;
                break;
              }
              case 0x20:
              {
                // ENCODING.ORR_32_log_imm
                return 408;
                break;
              }
              case 0x40:
              {
                // ENCODING.EOR_32_log_imm
                return 134;
                break;
              }
              case 0x60:
              {
                // ENCODING.ANDS_32S_log_imm
                return 24;
                break;
              }
              default: break;
            }
          }
          break;
        }
        case 0x03:
        {
          if (c & 0x80)
          {
            // ENCODING.EXTR_32_extract
            return 142;
          }
          else
          {
            // the following switch contains 3 case.
            switch (d & 0x60)
            {
              case 0x00:
              {
                // ENCODING.SBFM_32M_bitfield
                return 451;
                break;
              }
              case 0x20:
              {
                // ENCODING.BFM_32M_bitfield
                return 47;
                break;
              }
              case 0x40:
              {
                // ENCODING.UBFM_32M_bitfield
                return 579;
                break;
              }
              default: break;
            }
          }
          break;
        }
        case 0x80:
        {
          // ENCODING.ADRP_only_pcreladdr
          return 19;
          break;
        }
        case 0x81:
        {
          if (c & 0x80)
          {
            if (d & 0x40)
            {
              // ENCODING.SUBG_64_addsub_immtags
              return 544;
            }
            else
            {
              // ENCODING.ADDG_64_addsub_immtags
              return 11;
            }
          }
          else
          {
            // the following switch contains 4 case.
            switch (d & 0x60)
            {
              case 0x00:
              {
                // ENCODING.ADD_64_addsub_imm
                return 8;
                break;
              }
              case 0x20:
              {
                // ENCODING.ADDS_64S_addsub_imm
                return 15;
                break;
              }
              case 0x40:
              {
                // ENCODING.SUB_64_addsub_imm
                return 541;
                break;
              }
              case 0x60:
              {
                // ENCODING.SUBS_64S_addsub_imm
                return 550;
                break;
              }
              default: break;
            }
          }
          break;
        }
        case 0x82:
        {
          if (c & 0x80)
          {
            // the following switch contains 3 case.
            switch (d & 0x60)
            {
              case 0x00:
              {
                // ENCODING.MOVN_64_movewide
                return 397;
                break;
              }
              case 0x40:
              {
                // ENCODING.MOVZ_64_movewide
                return 399;
                break;
              }
              case 0x60:
              {
                // ENCODING.MOVK_64_movewide
                return 395;
                break;
              }
              default: break;
            }
          }
          else
          {
            // the following switch contains 4 case.
            switch (d & 0x60)
            {
              case 0x00:
              {
                // ENCODING.AND_64_log_imm
                return 21;
                break;
              }
              case 0x20:
              {
                // ENCODING.ORR_64_log_imm
                return 409;
                break;
              }
              case 0x40:
              {
                // ENCODING.EOR_64_log_imm
                return 135;
                break;
              }
              case 0x60:
              {
                // ENCODING.ANDS_64S_log_imm
                return 25;
                break;
              }
              default: break;
            }
          }
          break;
        }
        case 0x83:
        {
          if (c & 0x80)
          {
            // ENCODING.EXTR_64_extract
            return 143;
          }
          else
          {
            // the following switch contains 3 case.
            switch (d & 0x60)
            {
              case 0x00:
              {
                // ENCODING.SBFM_64M_bitfield
                return 452;
                break;
              }
              case 0x20:
              {
                // ENCODING.BFM_64M_bitfield
                return 48;
                break;
              }
              case 0x40:
              {
                // ENCODING.UBFM_64M_bitfield
                return 580;
                break;
              }
              default: break;
            }
          }
          break;
        }
        default: break;
      }
      break;
    }
    case 0x14:
    {
      // the following switch contains 3 case.
      switch (d & 0x60)
      {
        case 0x00:
        {
          if (d & 0x80)
          {
            // ENCODING.BL_only_branch_imm
            return 53;
          }
          else
          {
            // ENCODING.B_only_branch_imm
            return 46;
          }
          break;
        }
        case 0x20:
        {
          // the following switch contains 4 case.
          switch (d & 0x03)
          {
            case 0x00:
            {
              if (d & 0x80)
              {
                // ENCODING.CBZ_64_compbranch
                return 93;
              }
              else
              {
                // ENCODING.CBZ_32_compbranch
                return 92;
              }
              break;
            }
            case 0x01:
            {
              if (d & 0x80)
              {
                // ENCODING.CBNZ_64_compbranch
                return 91;
              }
              else
              {
                // ENCODING.CBNZ_32_compbranch
                return 90;
              }
              break;
            }
            case 0x02:
            {
              // ENCODING.TBZ_only_testbranch
              return 573;
              break;
            }
            case 0x03:
            {
              // ENCODING.TBNZ_only_testbranch
              return 572;
              break;
            }
            default: break;
          }
          break;
        }
        case 0x40:
        {
          // the following switch contains 5 case.
          switch (d & 0x83)
          {
            case 0x00:
            {
              // ENCODING.B_only_condbranch
              return 45;
              break;
            }
            case 0x80:
            {
              if (a & 0x01)
              {
                if (a & 0x02)
                {
                  if (c & 0x20)
                  {
                    // ENCODING.DCPS3_DC_exception
                    return 127;
                  }
                  else
                  {
                    // ENCODING.SMC_EX_exception
                    return 460;
                  }
                }
                else
                {
                  if (c & 0x20)
                  {
                    // ENCODING.DCPS1_DC_exception
                    return 125;
                  }
                  else
                  {
                    // ENCODING.SVC_EX_exception
                    return 553;
                  }
                }
              }
              else
              {
                if (a & 0x02)
                {
                  if (c & 0x20)
                  {
                    // ENCODING.DCPS2_DC_exception
                    return 126;
                  }
                  else
                  {
                    // ENCODING.HVC_EX_exception
                    return 147;
                  }
                }
                else
                {
                  // the following switch contains 3 case.
                  switch ((c & 0x60) - 32)
                  {
                    case 0x00:
                    {
                      // ENCODING.BRK_EX_exception
                      return 64;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.HLT_EX_exception
                      return 146;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.TCANCEL_EX_exception
                      return 574;
                      break;
                    }
                    default: break;
                  }
                }
              }
              break;
            }
            case 0x81:
            {
              // the following switch contains 4 case.
              switch (c & 0x30)
              {
                case 0x00:
                {
                  if (c & 0x08)
                  {
                    // ENCODING.SYS_CR_systeminstrs
                    return 570;
                  }
                  else
                  {
                    // the following switch contains 3 case.
                    switch ((b & 0x70) - 32)
                    {
                      case 0x00:
                      {
                        // conflicts:
                        // ENCODING.AUTIA1716_HI_hints   : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxx0110xxx000110011111
                        // ENCODING.AUTIASP_HI_hints     : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxx0110xxx001110111111
                        // ENCODING.AUTIAZ_HI_hints      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxx0110xxx001110011111
                        // ENCODING.AUTIB1716_HI_hints   : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxx0110xxx000111011111
                        // ENCODING.AUTIBSP_HI_hints     : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxx0110xxx001111111111
                        // ENCODING.AUTIBZ_HI_hints      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxx0110xxx001111011111
                        // ENCODING.BTI_HB_hints         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxx0110xxx0100xx011111
                        // ENCODING.CSDB_HI_hints        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxx0110xxx001010011111
                        // ENCODING.DGH_HI_hints         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxx0110xxx000011011111
                        // ENCODING.ESB_HI_hints         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxx0110xxx001000011111
                        // ENCODING.HINT_HM_hints        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxx0110xxxxxxxxxx11111
                        // ENCODING.NOP_HI_hints         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxx0110xxx000000011111
                        // ENCODING.PACIA1716_HI_hints   : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxx0110xxx000100011111
                        // ENCODING.PACIASP_HI_hints     : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxx0110xxx001100111111
                        // ENCODING.PACIAZ_HI_hints      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxx0110xxx001100011111
                        // ENCODING.PACIB1716_HI_hints   : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxx0110xxx000101011111
                        // ENCODING.PACIBSP_HI_hints     : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxx0110xxx001101111111
                        // ENCODING.PACIBZ_HI_hints      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxx0110xxx001101011111
                        // ENCODING.PSB_HC_hints         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxx0110xxx001000111111
                        // ENCODING.SEV_HI_hints         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxx0110xxx000010011111
                        // ENCODING.SEVL_HI_hints        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxx0110xxx000010111111
                        // ENCODING.TSB_HC_hints         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxx0110xxx001001011111
                        // ENCODING.WFE_HI_hints         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxx0110xxx000001011111
                        // ENCODING.WFI_HI_hints         : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxx0110xxx000001111111
                        // ENCODING.XPACLRI_HI_hints     : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxx0110xxx000011111111
                        // ENCODING.YIELD_HI_hints       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxx0110xxx000000111111
                        if ((opcode & 0xffffffff) == 0xd503219f)
                        {
                          // ENCODING.AUTIA1716_HI_hints
                          return 36;
                        }
                        else
                        {
                          if ((opcode & 0xffffffff) == 0xd50323bf)
                          {
                            // ENCODING.AUTIASP_HI_hints
                            return 37;
                          }
                          else
                          {
                            if ((opcode & 0xffffffff) == 0xd503239f)
                            {
                              // ENCODING.AUTIAZ_HI_hints
                              return 38;
                            }
                            else
                            {
                              if ((opcode & 0xffffffff) == 0xd50321df)
                              {
                                // ENCODING.AUTIB1716_HI_hints
                                return 41;
                              }
                              else
                              {
                                if ((opcode & 0xffffffff) == 0xd50323ff)
                                {
                                  // ENCODING.AUTIBSP_HI_hints
                                  return 42;
                                }
                                else
                                {
                                  if ((opcode & 0xffffffff) == 0xd50323df)
                                  {
                                    // ENCODING.AUTIBZ_HI_hints
                                    return 43;
                                  }
                                  else
                                  {
                                    if ((opcode & 0xffffffff) == 0xd503229f)
                                    {
                                      // ENCODING.CSDB_HI_hints
                                      return 116;
                                    }
                                    else
                                    {
                                      if ((opcode & 0xffffffff) == 0xd50320df)
                                      {
                                        // ENCODING.DGH_HI_hints
                                        return 128;
                                      }
                                      else
                                      {
                                        if ((opcode & 0xffffffff) == 0xd503221f)
                                        {
                                          // ENCODING.ESB_HI_hints
                                          return 141;
                                        }
                                        else
                                        {
                                          if ((opcode & 0xffffffff) == 0xd503201f)
                                          {
                                            // ENCODING.NOP_HI_hints
                                            return 405;
                                          }
                                          else
                                          {
                                            if ((opcode & 0xffffffff) == 0xd503211f)
                                            {
                                              // ENCODING.PACIA1716_HI_hints
                                              return 419;
                                            }
                                            else
                                            {
                                              if ((opcode & 0xffffffff) == 0xd503233f)
                                              {
                                                // ENCODING.PACIASP_HI_hints
                                                return 420;
                                              }
                                              else
                                              {
                                                if ((opcode & 0xffffffff) == 0xd503231f)
                                                {
                                                  // ENCODING.PACIAZ_HI_hints
                                                  return 421;
                                                }
                                                else
                                                {
                                                  if ((opcode & 0xffffffff) == 0xd503215f)
                                                  {
                                                    // ENCODING.PACIB1716_HI_hints
                                                    return 424;
                                                  }
                                                  else
                                                  {
                                                    if ((opcode & 0xffffffff) == 0xd503237f)
                                                    {
                                                      // ENCODING.PACIBSP_HI_hints
                                                      return 425;
                                                    }
                                                    else
                                                    {
                                                      if ((opcode & 0xffffffff) == 0xd503235f)
                                                      {
                                                        // ENCODING.PACIBZ_HI_hints
                                                        return 426;
                                                      }
                                                      else
                                                      {
                                                        if ((opcode & 0xffffffff) == 0xd503223f)
                                                        {
                                                          // ENCODING.PSB_HC_hints
                                                          return 431;
                                                        }
                                                        else
                                                        {
                                                          if ((opcode & 0xffffffff) == 0xd503209f)
                                                          {
                                                            // ENCODING.SEV_HI_hints
                                                            return 457;
                                                          }
                                                          else
                                                          {
                                                            if ((opcode & 0xffffffff) == 0xd50320bf)
                                                            {
                                                              // ENCODING.SEVL_HI_hints
                                                              return 458;
                                                            }
                                                            else
                                                            {
                                                              if ((opcode & 0xffffffff) == 0xd503225f)
                                                              {
                                                                // ENCODING.TSB_HC_hints
                                                                return 576;
                                                              }
                                                              else
                                                              {
                                                                if ((opcode & 0xffffffff) == 0xd503205f)
                                                                {
                                                                  // ENCODING.WFE_HI_hints
                                                                  return 587;
                                                                }
                                                                else
                                                                {
                                                                  if ((opcode & 0xffffffff) == 0xd503207f)
                                                                  {
                                                                    // ENCODING.WFI_HI_hints
                                                                    return 588;
                                                                  }
                                                                  else
                                                                  {
                                                                    if ((opcode & 0xffffffff) == 0xd50320ff)
                                                                    {
                                                                      // ENCODING.XPACLRI_HI_hints
                                                                      return 592;
                                                                    }
                                                                    else
                                                                    {
                                                                      if ((opcode & 0xffffffff) == 0xd503203f)
                                                                      {
                                                                        // ENCODING.YIELD_HI_hints
                                                                        return 593;
                                                                      }
                                                                      else
                                                                      {
                                                                        if ((opcode & 0xffffff3f) == 0xd503241f)
                                                                        {
                                                                          // ENCODING.BTI_HB_hints
                                                                          return 65;
                                                                        }
                                                                        else
                                                                        {
                                                                          // ENCODING.HINT_HM_hints
                                                                          return 145;
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
                                }
                              }
                            }
                          }
                        }
                        break;
                      }
                      case 0x10:
                      {
                        // the following switch contains 6 case.
                        switch ((a & 0xe0) - 64)
                        {
                          case 0x00:
                          {
                            // ENCODING.CLREX_BN_barriers
                            return 103;
                            break;
                          }
                          case 0x20:
                          {
                            // ENCODING.TCOMMIT_only_barriers
                            return 575;
                            break;
                          }
                          case 0x40:
                          {
                            // conflicts:
                            // ENCODING.DSB_BO_barriers      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxx0110xxxxxxxxxx11111
                            // ENCODING.PSSBB_only_barriers  : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxx0110xxx0100xxx11111
                            // ENCODING.SSBB_only_barriers   : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxx0110xxx0000xxx11111
                            // CRm!=0b0x00
                            if ((opcode & 0x00000b00) != 0x00000000)
                            {
                              // ENCODING.DSB_BO_barriers
                              return 131;
                            }
                            else
                            {
                              if (b & 0x04)
                              {
                                // ENCODING.PSSBB_only_barriers
                                return 432;
                              }
                              else
                              {
                                // ENCODING.SSBB_only_barriers
                                return 463;
                              }
                            }
                            break;
                          }
                          case 0x60:
                          {
                            // ENCODING.DMB_BO_barriers
                            return 129;
                            break;
                          }
                          case 0x80:
                          {
                            // ENCODING.ISB_BI_barriers
                            return 149;
                            break;
                          }
                          case 0xa0:
                          {
                            // ENCODING.SB_only_barriers
                            return 446;
                            break;
                          }
                          default: break;
                        }
                        break;
                      }
                      case 0x20:
                      {
                        // conflicts:
                        // ENCODING.AXFLAG_M_pstate      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxx0000xxx000001011111
                        // ENCODING.CFINV_M_pstate       : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxx0000xxx000000011111
                        // ENCODING.MSR_SI_pstate        : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxxxxx0xxxxxxxxxx11111
                        // ENCODING.XAFLAG_M_pstate      : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00xxx0000xxx000000111111
                        if ((opcode & 0xffffffff) == 0xd500405f)
                        {
                          // ENCODING.AXFLAG_M_pstate
                          return 44;
                        }
                        else
                        {
                          if ((opcode & 0xffffffff) == 0xd500401f)
                          {
                            // ENCODING.CFINV_M_pstate
                            return 102;
                          }
                          else
                          {
                            if ((opcode & 0xffffffff) == 0xd500403f)
                            {
                              // ENCODING.XAFLAG_M_pstate
                              return 589;
                            }
                            else
                            {
                              // ENCODING.MSR_SI_pstate
                              return 401;
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
                case 0x10:
                {
                  // ENCODING.MSR_SR_systemmove
                  return 402;
                  break;
                }
                case 0x20:
                {
                  if (c & 0x08)
                  {
                    // ENCODING.SYSL_RC_systeminstrs
                    return 571;
                  }
                  else
                  {
                    if (b & 0x01)
                    {
                      // ENCODING.TTEST_BR_systemresult
                      return 578;
                    }
                    else
                    {
                      // ENCODING.TSTART_BR_systemresult
                      return 577;
                    }
                  }
                  break;
                }
                case 0x30:
                {
                  // ENCODING.MRS_RS_systemmove
                  return 400;
                  break;
                }
                default: break;
              }
              break;
            }
            case 0x82:
            {
              if (a & 0x01)
              {
                if (b & 0x04)
                {
                  // the following switch contains 4 case.
                  switch (c & 0xe0)
                  {
                    case 0x00:
                    {
                      // ENCODING.BRABZ_64_branch_reg
                      return 62;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.BLRABZ_64_branch_reg
                      return 57;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.RETAB_64E_branch_reg
                      return 437;
                      break;
                    }
                    case 0x80:
                    {
                      // ENCODING.ERETAB_64E_branch_reg
                      return 140;
                      break;
                    }
                    default: break;
                  }
                }
                else
                {
                  // the following switch contains 4 case.
                  switch (c & 0xe0)
                  {
                    case 0x00:
                    {
                      // ENCODING.BRAAZ_64_branch_reg
                      return 60;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.BLRAAZ_64_branch_reg
                      return 55;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.RETAA_64E_branch_reg
                      return 436;
                      break;
                    }
                    case 0x80:
                    {
                      // ENCODING.ERETAA_64E_branch_reg
                      return 139;
                      break;
                    }
                    default: break;
                  }
                }
              }
              else
              {
                // the following switch contains 5 case.
                switch (c & 0xe0)
                {
                  case 0x00:
                  {
                    // ENCODING.BR_64_branch_reg
                    return 59;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.BLR_64_branch_reg
                    return 54;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.RET_64R_branch_reg
                    return 435;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.ERET_64E_branch_reg
                    return 138;
                    break;
                  }
                  case 0xa0:
                  {
                    // ENCODING.DRPS_64E_branch_reg
                    return 130;
                    break;
                  }
                  default: break;
                }
              }
              break;
            }
            case 0x83:
            {
              if (b & 0x04)
              {
                if (c & 0x20)
                {
                  // ENCODING.BLRAB_64P_branch_reg
                  return 58;
                }
                else
                {
                  // ENCODING.BRAB_64P_branch_reg
                  return 63;
                }
              }
              else
              {
                if (c & 0x20)
                {
                  // ENCODING.BLRAA_64P_branch_reg
                  return 56;
                }
                else
                {
                  // ENCODING.BRAA_64P_branch_reg
                  return 61;
                }
              }
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
    case 0x18:
    {
      // the following switch contains 26 case.
      switch (d & 0xe3)
      {
        case 0x00:
        {
          // ENCODING.LDR_32_loadlit
          return 244;
          break;
        }
        case 0x01:
        {
          // the following switch contains 4 case.
          switch (c & 0xc0)
          {
            case 0x00:
            {
              // ENCODING.STLURB_32_ldapstl_unscaled
              return 484;
              break;
            }
            case 0x40:
            {
              // ENCODING.LDAPURB_32_ldapstl_unscaled
              return 172;
              break;
            }
            case 0x80:
            {
              // ENCODING.LDAPURSB_64_ldapstl_unscaled
              return 175;
              break;
            }
            case 0xc0:
            {
              // ENCODING.LDAPURSB_32_ldapstl_unscaled
              return 174;
              break;
            }
            default: break;
          }
          break;
        }
        case 0x02:
        {
          if (b & 0x04)
          {
            if (b & 0x08)
            {
              if (b & 0x20)
              {
                // ENCODING.RORV_32_dp_2src
                return 444;
              }
              else
              {
                // ENCODING.SDIV_32_dp_2src
                return 453;
              }
            }
            else
            {
              if (c & 0x40)
              {
                // the following switch contains 3 case.
                switch ((b & 0x70) - 32)
                {
                  case 0x00:
                  {
                    // ENCODING.LSRV_32_dp_2src
                    return 390;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.CRC32H_32C_dp_2src
                    return 109;
                    break;
                  }
                  case 0x30:
                  {
                    // ENCODING.CRC32CH_32C_dp_2src
                    return 113;
                    break;
                  }
                  default: break;
                }
              }
              else
              {
                // ENCODING.CSINC_32_condsel
                return 119;
              }
            }
          }
          else
          {
            if (b & 0x08)
            {
              // the following switch contains 4 case.
              switch (b & 0x70)
              {
                case 0x00:
                {
                  // ENCODING.UDIV_32_dp_2src
                  return 582;
                  break;
                }
                case 0x20:
                {
                  // ENCODING.ASRV_32_dp_2src
                  return 28;
                  break;
                }
                case 0x40:
                {
                  // ENCODING.CRC32W_32C_dp_2src
                  return 110;
                  break;
                }
                case 0x50:
                {
                  // ENCODING.CRC32CW_32C_dp_2src
                  return 114;
                  break;
                }
                default: break;
              }
            }
            else
            {
              // the following switch contains 3 case.
              switch (c & 0xc0)
              {
                case 0x00:
                {
                  // ENCODING.ADC_32_addsub_carry
                  return 1;
                  break;
                }
                case 0x80:
                {
                  // ENCODING.CSEL_32_condsel
                  return 117;
                  break;
                }
                case 0xc0:
                {
                  // the following switch contains 3 case.
                  switch ((b & 0x70) - 32)
                  {
                    case 0x00:
                    {
                      // ENCODING.LSLV_32_dp_2src
                      return 388;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.CRC32B_32C_dp_2src
                      return 108;
                      break;
                    }
                    case 0x30:
                    {
                      // ENCODING.CRC32CB_32C_dp_2src
                      return 112;
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
          break;
        }
        case 0x03:
        {
          if (b & 0x80)
          {
            // ENCODING.MSUB_32A_dp_3src
            return 403;
          }
          else
          {
            // ENCODING.MADD_32A_dp_3src
            return 392;
          }
          break;
        }
        case 0x20:
        {
          if (b & 0x04)
          {
            if (b & 0x08)
            {
              // the following switch contains 4 case.
              switch (c & 0xc0)
              {
                case 0x00:
                {
                  // ENCODING.STRB_32_ldst_immpre
                  return 509;
                  break;
                }
                case 0x40:
                {
                  // ENCODING.LDRB_32_ldst_immpre
                  return 253;
                  break;
                }
                case 0x80:
                {
                  // ENCODING.LDRSB_64_ldst_immpre
                  return 264;
                  break;
                }
                case 0xc0:
                {
                  // ENCODING.LDRSB_32_ldst_immpre
                  return 263;
                  break;
                }
                default: break;
              }
            }
            else
            {
              // the following switch contains 4 case.
              switch (c & 0xc0)
              {
                case 0x00:
                {
                  // ENCODING.STRB_32_ldst_immpost
                  return 508;
                  break;
                }
                case 0x40:
                {
                  // ENCODING.LDRB_32_ldst_immpost
                  return 252;
                  break;
                }
                case 0x80:
                {
                  // ENCODING.LDRSB_64_ldst_immpost
                  return 262;
                  break;
                }
                case 0xc0:
                {
                  // ENCODING.LDRSB_32_ldst_immpost
                  return 261;
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
              // the following switch contains 8 case.
              switch (c & 0xe0)
              {
                case 0x00:
                {
                  // ENCODING.STTRB_32_ldst_unpriv
                  return 519;
                  break;
                }
                case 0x20:
                {
                  // conflicts:
                  // ENCODING.STRB_32B_ldst_regoff : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                  // ENCODING.STRB_32BL_ldst_regoff : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx011xxxxxxxxxxxxx
                  // option!=0b011
                  if ((opcode & 0x0000e000) != 0x00006000)
                  {
                    // ENCODING.STRB_32B_ldst_regoff
                    return 511;
                  }
                  else
                  {
                    // ENCODING.STRB_32BL_ldst_regoff
                    return 512;
                  }
                  break;
                }
                case 0x40:
                {
                  // ENCODING.LDTRB_32_ldst_unpriv
                  return 334;
                  break;
                }
                case 0x60:
                {
                  // conflicts:
                  // ENCODING.LDRB_32B_ldst_regoff : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                  // ENCODING.LDRB_32BL_ldst_regoff : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx011xxxxxxxxxxxxx
                  // option!=0b011
                  if ((opcode & 0x0000e000) != 0x00006000)
                  {
                    // ENCODING.LDRB_32B_ldst_regoff
                    return 255;
                  }
                  else
                  {
                    // ENCODING.LDRB_32BL_ldst_regoff
                    return 256;
                  }
                  break;
                }
                case 0x80:
                {
                  // ENCODING.LDTRSB_64_ldst_unpriv
                  return 337;
                  break;
                }
                case 0xa0:
                {
                  // conflicts:
                  // ENCODING.LDRSB_64B_ldst_regoff : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                  // ENCODING.LDRSB_64BL_ldst_regoff : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx011xxxxxxxxxxxxx
                  // option!=0b011
                  if ((opcode & 0x0000e000) != 0x00006000)
                  {
                    // ENCODING.LDRSB_64B_ldst_regoff
                    return 269;
                  }
                  else
                  {
                    // ENCODING.LDRSB_64BL_ldst_regoff
                    return 270;
                  }
                  break;
                }
                case 0xc0:
                {
                  // ENCODING.LDTRSB_32_ldst_unpriv
                  return 336;
                  break;
                }
                case 0xe0:
                {
                  // conflicts:
                  // ENCODING.LDRSB_32B_ldst_regoff : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
                  // ENCODING.LDRSB_32BL_ldst_regoff : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx011xxxxxxxxxxxxx
                  // option!=0b011
                  if ((opcode & 0x0000e000) != 0x00006000)
                  {
                    // ENCODING.LDRSB_32B_ldst_regoff
                    return 267;
                  }
                  else
                  {
                    // ENCODING.LDRSB_32BL_ldst_regoff
                    return 268;
                  }
                  break;
                }
                default: break;
              }
            }
            else
            {
              // the following switch contains 8 case.
              switch (c & 0xe0)
              {
                case 0x00:
                {
                  // ENCODING.STURB_32_ldst_unscaled
                  return 523;
                  break;
                }
                case 0x20:
                {
                  // the following switch contains 9 case.
                  switch (b & 0xf0)
                  {
                    case 0x00:
                    {
                      // ENCODING.LDADDB_32_memop
                      return 160;
                      break;
                    }
                    case 0x10:
                    {
                      // ENCODING.LDCLRB_32_memop
                      return 199;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.LDEORB_32_memop
                      return 215;
                      break;
                    }
                    case 0x30:
                    {
                      // ENCODING.LDSETB_32_memop
                      return 294;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.LDSMAXB_32_memop
                      return 310;
                      break;
                    }
                    case 0x50:
                    {
                      // ENCODING.LDSMINB_32_memop
                      return 326;
                      break;
                    }
                    case 0x60:
                    {
                      // ENCODING.LDUMAXB_32_memop
                      return 351;
                      break;
                    }
                    case 0x70:
                    {
                      // ENCODING.LDUMINB_32_memop
                      return 367;
                      break;
                    }
                    case 0x80:
                    {
                      // ENCODING.SWPB_32_memop
                      return 564;
                      break;
                    }
                    default: break;
                  }
                  break;
                }
                case 0x40:
                {
                  // ENCODING.LDURB_32_ldst_unscaled
                  return 375;
                  break;
                }
                case 0x60:
                {
                  // the following switch contains 9 case.
                  switch (b & 0xf0)
                  {
                    case 0x00:
                    {
                      // ENCODING.LDADDLB_32_memop
                      return 161;
                      break;
                    }
                    case 0x10:
                    {
                      // ENCODING.LDCLRLB_32_memop
                      return 200;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.LDEORLB_32_memop
                      return 216;
                      break;
                    }
                    case 0x30:
                    {
                      // ENCODING.LDSETLB_32_memop
                      return 295;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.LDSMAXLB_32_memop
                      return 311;
                      break;
                    }
                    case 0x50:
                    {
                      // ENCODING.LDSMINLB_32_memop
                      return 327;
                      break;
                    }
                    case 0x60:
                    {
                      // ENCODING.LDUMAXLB_32_memop
                      return 352;
                      break;
                    }
                    case 0x70:
                    {
                      // ENCODING.LDUMINLB_32_memop
                      return 368;
                      break;
                    }
                    case 0x80:
                    {
                      // ENCODING.SWPLB_32_memop
                      return 565;
                      break;
                    }
                    default: break;
                  }
                  break;
                }
                case 0x80:
                {
                  // ENCODING.LDURSB_64_ldst_unscaled
                  return 378;
                  break;
                }
                case 0xa0:
                {
                  // the following switch contains 10 case.
                  switch (b & 0xf0)
                  {
                    case 0x00:
                    {
                      // ENCODING.LDADDAB_32_memop
                      return 158;
                      break;
                    }
                    case 0x10:
                    {
                      // ENCODING.LDCLRAB_32_memop
                      return 197;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.LDEORAB_32_memop
                      return 213;
                      break;
                    }
                    case 0x30:
                    {
                      // ENCODING.LDSETAB_32_memop
                      return 292;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.LDSMAXAB_32_memop
                      return 308;
                      break;
                    }
                    case 0x50:
                    {
                      // ENCODING.LDSMINAB_32_memop
                      return 324;
                      break;
                    }
                    case 0x60:
                    {
                      // ENCODING.LDUMAXAB_32_memop
                      return 349;
                      break;
                    }
                    case 0x70:
                    {
                      // ENCODING.LDUMINAB_32_memop
                      return 365;
                      break;
                    }
                    case 0x80:
                    {
                      // ENCODING.SWPAB_32_memop
                      return 562;
                      break;
                    }
                    case 0xc0:
                    {
                      // ENCODING.LDAPRB_32L_memop
                      return 168;
                      break;
                    }
                    default: break;
                  }
                  break;
                }
                case 0xc0:
                {
                  // ENCODING.LDURSB_32_ldst_unscaled
                  return 377;
                  break;
                }
                case 0xe0:
                {
                  // the following switch contains 9 case.
                  switch (b & 0xf0)
                  {
                    case 0x00:
                    {
                      // ENCODING.LDADDALB_32_memop
                      return 159;
                      break;
                    }
                    case 0x10:
                    {
                      // ENCODING.LDCLRALB_32_memop
                      return 198;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.LDEORALB_32_memop
                      return 214;
                      break;
                    }
                    case 0x30:
                    {
                      // ENCODING.LDSETALB_32_memop
                      return 293;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.LDSMAXALB_32_memop
                      return 309;
                      break;
                    }
                    case 0x50:
                    {
                      // ENCODING.LDSMINALB_32_memop
                      return 325;
                      break;
                    }
                    case 0x60:
                    {
                      // ENCODING.LDUMAXALB_32_memop
                      return 350;
                      break;
                    }
                    case 0x70:
                    {
                      // ENCODING.LDUMINALB_32_memop
                      return 366;
                      break;
                    }
                    case 0x80:
                    {
                      // ENCODING.SWPALB_32_memop
                      return 563;
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
          break;
        }
        case 0x21:
        {
          // the following switch contains 4 case.
          switch (c & 0xc0)
          {
            case 0x00:
            {
              // ENCODING.STRB_32_ldst_pos
              return 510;
              break;
            }
            case 0x40:
            {
              // ENCODING.LDRB_32_ldst_pos
              return 254;
              break;
            }
            case 0x80:
            {
              // ENCODING.LDRSB_64_ldst_pos
              return 266;
              break;
            }
            case 0xc0:
            {
              // ENCODING.LDRSB_32_ldst_pos
              return 265;
              break;
            }
            default: break;
          }
          break;
        }
        case 0x22:
        {
          if (b & 0x08)
          {
            if (c & 0x40)
            {
              // ENCODING.CCMN_32_condcmp_imm
              return 94;
            }
            else
            {
              if (b & 0x40)
              {
                // ENCODING.SETF16_only_setf
                return 456;
              }
              else
              {
                // ENCODING.SETF8_only_setf
                return 455;
              }
            }
          }
          else
          {
            if (c & 0x40)
            {
              // ENCODING.CCMN_32_condcmp_reg
              return 96;
            }
            else
            {
              // ENCODING.ADCS_32_addsub_carry
              return 3;
            }
          }
          break;
        }
        case 0x40:
        {
          // ENCODING.LDR_64_loadlit
          return 245;
          break;
        }
        case 0x41:
        {
          // the following switch contains 4 case.
          switch (c & 0xc0)
          {
            case 0x00:
            {
              // ENCODING.STLURH_32_ldapstl_unscaled
              return 485;
              break;
            }
            case 0x40:
            {
              // ENCODING.LDAPURH_32_ldapstl_unscaled
              return 173;
              break;
            }
            case 0x80:
            {
              // ENCODING.LDAPURSH_64_ldapstl_unscaled
              return 177;
              break;
            }
            case 0xc0:
            {
              // ENCODING.LDAPURSH_32_ldapstl_unscaled
              return 176;
              break;
            }
            default: break;
          }
          break;
        }
        case 0x42:
        {
          if (b & 0x04)
          {
            if (c & 0x40)
            {
              if (b & 0x10)
              {
                // ENCODING.CLS_32_dp_1src
                return 104;
              }
              else
              {
                // ENCODING.REV16_32_dp_1src
                return 440;
              }
            }
            else
            {
              // ENCODING.CSNEG_32_condsel
              return 123;
            }
          }
          else
          {
            if (b & 0x08)
            {
              // ENCODING.REV_32_dp_1src
              return 438;
            }
            else
            {
              // the following switch contains 3 case.
              switch (c & 0xc0)
              {
                case 0x00:
                {
                  // ENCODING.SBC_32_addsub_carry
                  return 447;
                  break;
                }
                case 0x80:
                {
                  // ENCODING.CSINV_32_condsel
                  return 121;
                  break;
                }
                case 0xc0:
                {
                  if (b & 0x10)
                  {
                    // ENCODING.CLZ_32_dp_1src
                    return 106;
                  }
                  else
                  {
                    // ENCODING.RBIT_32_dp_1src
                    return 433;
                  }
                  break;
                }
                default: break;
              }
            }
          }
          break;
        }
        case 0x60:
        {
          if (b & 0x04)
          {
            if (b & 0x08)
            {
              // the following switch contains 4 case.
              switch (c & 0xc0)
              {
                case 0x00:
                {
                  // ENCODING.STRH_32_ldst_immpre
                  return 514;
                  break;
                }
                case 0x40:
                {
                  // ENCODING.LDRH_32_ldst_immpre
                  return 258;
                  break;
                }
                case 0x80:
                {
                  // ENCODING.LDRSH_64_ldst_immpre
                  return 274;
                  break;
                }
                case 0xc0:
                {
                  // ENCODING.LDRSH_32_ldst_immpre
                  return 273;
                  break;
                }
                default: break;
              }
            }
            else
            {
              // the following switch contains 4 case.
              switch (c & 0xc0)
              {
                case 0x00:
                {
                  // ENCODING.STRH_32_ldst_immpost
                  return 513;
                  break;
                }
                case 0x40:
                {
                  // ENCODING.LDRH_32_ldst_immpost
                  return 257;
                  break;
                }
                case 0x80:
                {
                  // ENCODING.LDRSH_64_ldst_immpost
                  return 272;
                  break;
                }
                case 0xc0:
                {
                  // ENCODING.LDRSH_32_ldst_immpost
                  return 271;
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
              // the following switch contains 8 case.
              switch (c & 0xe0)
              {
                case 0x00:
                {
                  // ENCODING.STTRH_32_ldst_unpriv
                  return 520;
                  break;
                }
                case 0x20:
                {
                  // ENCODING.STRH_32_ldst_regoff
                  return 516;
                  break;
                }
                case 0x40:
                {
                  // ENCODING.LDTRH_32_ldst_unpriv
                  return 335;
                  break;
                }
                case 0x60:
                {
                  // ENCODING.LDRH_32_ldst_regoff
                  return 260;
                  break;
                }
                case 0x80:
                {
                  // ENCODING.LDTRSH_64_ldst_unpriv
                  return 339;
                  break;
                }
                case 0xa0:
                {
                  // ENCODING.LDRSH_64_ldst_regoff
                  return 278;
                  break;
                }
                case 0xc0:
                {
                  // ENCODING.LDTRSH_32_ldst_unpriv
                  return 338;
                  break;
                }
                case 0xe0:
                {
                  // ENCODING.LDRSH_32_ldst_regoff
                  return 277;
                  break;
                }
                default: break;
              }
            }
            else
            {
              // the following switch contains 8 case.
              switch (c & 0xe0)
              {
                case 0x00:
                {
                  // ENCODING.STURH_32_ldst_unscaled
                  return 524;
                  break;
                }
                case 0x20:
                {
                  // the following switch contains 9 case.
                  switch (b & 0xf0)
                  {
                    case 0x00:
                    {
                      // ENCODING.LDADDH_32_memop
                      return 164;
                      break;
                    }
                    case 0x10:
                    {
                      // ENCODING.LDCLRH_32_memop
                      return 203;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.LDEORH_32_memop
                      return 219;
                      break;
                    }
                    case 0x30:
                    {
                      // ENCODING.LDSETH_32_memop
                      return 298;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.LDSMAXH_32_memop
                      return 314;
                      break;
                    }
                    case 0x50:
                    {
                      // ENCODING.LDSMINH_32_memop
                      return 330;
                      break;
                    }
                    case 0x60:
                    {
                      // ENCODING.LDUMAXH_32_memop
                      return 355;
                      break;
                    }
                    case 0x70:
                    {
                      // ENCODING.LDUMINH_32_memop
                      return 371;
                      break;
                    }
                    case 0x80:
                    {
                      // ENCODING.SWPH_32_memop
                      return 568;
                      break;
                    }
                    default: break;
                  }
                  break;
                }
                case 0x40:
                {
                  // ENCODING.LDURH_32_ldst_unscaled
                  return 376;
                  break;
                }
                case 0x60:
                {
                  // the following switch contains 9 case.
                  switch (b & 0xf0)
                  {
                    case 0x00:
                    {
                      // ENCODING.LDADDLH_32_memop
                      return 165;
                      break;
                    }
                    case 0x10:
                    {
                      // ENCODING.LDCLRLH_32_memop
                      return 204;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.LDEORLH_32_memop
                      return 220;
                      break;
                    }
                    case 0x30:
                    {
                      // ENCODING.LDSETLH_32_memop
                      return 299;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.LDSMAXLH_32_memop
                      return 315;
                      break;
                    }
                    case 0x50:
                    {
                      // ENCODING.LDSMINLH_32_memop
                      return 331;
                      break;
                    }
                    case 0x60:
                    {
                      // ENCODING.LDUMAXLH_32_memop
                      return 356;
                      break;
                    }
                    case 0x70:
                    {
                      // ENCODING.LDUMINLH_32_memop
                      return 372;
                      break;
                    }
                    case 0x80:
                    {
                      // ENCODING.SWPLH_32_memop
                      return 569;
                      break;
                    }
                    default: break;
                  }
                  break;
                }
                case 0x80:
                {
                  // ENCODING.LDURSH_64_ldst_unscaled
                  return 380;
                  break;
                }
                case 0xa0:
                {
                  // the following switch contains 10 case.
                  switch (b & 0xf0)
                  {
                    case 0x00:
                    {
                      // ENCODING.LDADDAH_32_memop
                      return 162;
                      break;
                    }
                    case 0x10:
                    {
                      // ENCODING.LDCLRAH_32_memop
                      return 201;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.LDEORAH_32_memop
                      return 217;
                      break;
                    }
                    case 0x30:
                    {
                      // ENCODING.LDSETAH_32_memop
                      return 296;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.LDSMAXAH_32_memop
                      return 312;
                      break;
                    }
                    case 0x50:
                    {
                      // ENCODING.LDSMINAH_32_memop
                      return 328;
                      break;
                    }
                    case 0x60:
                    {
                      // ENCODING.LDUMAXAH_32_memop
                      return 353;
                      break;
                    }
                    case 0x70:
                    {
                      // ENCODING.LDUMINAH_32_memop
                      return 369;
                      break;
                    }
                    case 0x80:
                    {
                      // ENCODING.SWPAH_32_memop
                      return 566;
                      break;
                    }
                    case 0xc0:
                    {
                      // ENCODING.LDAPRH_32L_memop
                      return 169;
                      break;
                    }
                    default: break;
                  }
                  break;
                }
                case 0xc0:
                {
                  // ENCODING.LDURSH_32_ldst_unscaled
                  return 379;
                  break;
                }
                case 0xe0:
                {
                  // the following switch contains 9 case.
                  switch (b & 0xf0)
                  {
                    case 0x00:
                    {
                      // ENCODING.LDADDALH_32_memop
                      return 163;
                      break;
                    }
                    case 0x10:
                    {
                      // ENCODING.LDCLRALH_32_memop
                      return 202;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.LDEORALH_32_memop
                      return 218;
                      break;
                    }
                    case 0x30:
                    {
                      // ENCODING.LDSETALH_32_memop
                      return 297;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.LDSMAXALH_32_memop
                      return 313;
                      break;
                    }
                    case 0x50:
                    {
                      // ENCODING.LDSMINALH_32_memop
                      return 329;
                      break;
                    }
                    case 0x60:
                    {
                      // ENCODING.LDUMAXALH_32_memop
                      return 354;
                      break;
                    }
                    case 0x70:
                    {
                      // ENCODING.LDUMINALH_32_memop
                      return 370;
                      break;
                    }
                    case 0x80:
                    {
                      // ENCODING.SWPALH_32_memop
                      return 567;
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
          break;
        }
        case 0x61:
        {
          // the following switch contains 4 case.
          switch (c & 0xc0)
          {
            case 0x00:
            {
              // ENCODING.STRH_32_ldst_pos
              return 515;
              break;
            }
            case 0x40:
            {
              // ENCODING.LDRH_32_ldst_pos
              return 259;
              break;
            }
            case 0x80:
            {
              // ENCODING.LDRSH_64_ldst_pos
              return 276;
              break;
            }
            case 0xc0:
            {
              // ENCODING.LDRSH_32_ldst_pos
              return 275;
              break;
            }
            default: break;
          }
          break;
        }
        case 0x62:
        {
          if (b & 0x08)
          {
            // ENCODING.CCMP_32_condcmp_imm
            return 98;
          }
          else
          {
            if (c & 0x40)
            {
              // ENCODING.CCMP_32_condcmp_reg
              return 100;
            }
            else
            {
              // ENCODING.SBCS_32_addsub_carry
              return 449;
            }
          }
          break;
        }
        case 0x80:
        {
          // ENCODING.LDRSW_64_loadlit
          return 282;
          break;
        }
        case 0x81:
        {
          // the following switch contains 3 case.
          switch (c & 0xc0)
          {
            case 0x00:
            {
              // ENCODING.STLUR_32_ldapstl_unscaled
              return 482;
              break;
            }
            case 0x40:
            {
              // ENCODING.LDAPUR_32_ldapstl_unscaled
              return 170;
              break;
            }
            case 0x80:
            {
              // ENCODING.LDAPURSW_64_ldapstl_unscaled
              return 178;
              break;
            }
            default: break;
          }
          break;
        }
        case 0x82:
        {
          if (b & 0x04)
          {
            if (b & 0x08)
            {
              // the following switch contains 4 case.
              switch (b & 0x70)
              {
                case 0x00:
                {
                  // ENCODING.SDIV_64_dp_2src
                  return 454;
                  break;
                }
                case 0x20:
                {
                  // ENCODING.RORV_64_dp_2src
                  return 445;
                  break;
                }
                case 0x40:
                {
                  // ENCODING.CRC32X_64C_dp_2src
                  return 111;
                  break;
                }
                case 0x50:
                {
                  // ENCODING.CRC32CX_64C_dp_2src
                  return 115;
                  break;
                }
                default: break;
              }
            }
            else
            {
              if (c & 0x40)
              {
                if (b & 0x10)
                {
                  // ENCODING.GMI_64G_dp_2src
                  return 144;
                }
                else
                {
                  // ENCODING.LSRV_64_dp_2src
                  return 391;
                }
              }
              else
              {
                // ENCODING.CSINC_64_condsel
                return 120;
              }
            }
          }
          else
          {
            if (b & 0x08)
            {
              if (b & 0x20)
              {
                // ENCODING.ASRV_64_dp_2src
                return 29;
              }
              else
              {
                // ENCODING.UDIV_64_dp_2src
                return 583;
              }
            }
            else
            {
              // the following switch contains 3 case.
              switch (c & 0xc0)
              {
                case 0x00:
                {
                  // ENCODING.ADC_64_addsub_carry
                  return 2;
                  break;
                }
                case 0x80:
                {
                  // ENCODING.CSEL_64_condsel
                  return 118;
                  break;
                }
                case 0xc0:
                {
                  // the following switch contains 4 case.
                  switch (b & 0x30)
                  {
                    case 0x00:
                    {
                      // ENCODING.SUBP_64S_dp_2src
                      return 545;
                      break;
                    }
                    case 0x10:
                    {
                      // ENCODING.IRG_64I_dp_2src
                      return 148;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.LSLV_64_dp_2src
                      return 389;
                      break;
                    }
                    case 0x30:
                    {
                      // ENCODING.PACGA_64P_dp_2src
                      return 416;
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
          break;
        }
        case 0x83:
        {
          if (b & 0x80)
          {
            // the following switch contains 3 case.
            switch (c & 0xa0)
            {
              case 0x00:
              {
                // ENCODING.MSUB_64A_dp_3src
                return 404;
                break;
              }
              case 0x20:
              {
                // ENCODING.SMSUBL_64WA_dp_3src
                return 461;
                break;
              }
              case 0xa0:
              {
                // ENCODING.UMSUBL_64WA_dp_3src
                return 585;
                break;
              }
              default: break;
            }
          }
          else
          {
            // the following switch contains 5 case.
            switch (c & 0xe0)
            {
              case 0x00:
              {
                // ENCODING.MADD_64A_dp_3src
                return 393;
                break;
              }
              case 0x20:
              {
                // ENCODING.SMADDL_64WA_dp_3src
                return 459;
                break;
              }
              case 0x40:
              {
                // ENCODING.SMULH_64_dp_3src
                return 462;
                break;
              }
              case 0xa0:
              {
                // ENCODING.UMADDL_64WA_dp_3src
                return 584;
                break;
              }
              case 0xc0:
              {
                // ENCODING.UMULH_64_dp_3src
                return 586;
                break;
              }
              default: break;
            }
          }
          break;
        }
        case 0xa0:
        {
          if (b & 0x04)
          {
            if (b & 0x08)
            {
              // the following switch contains 3 case.
              switch (c & 0xc0)
              {
                case 0x00:
                {
                  // ENCODING.STR_32_ldst_immpre
                  return 502;
                  break;
                }
                case 0x40:
                {
                  // ENCODING.LDR_32_ldst_immpre
                  return 240;
                  break;
                }
                case 0x80:
                {
                  // ENCODING.LDRSW_64_ldst_immpre
                  return 280;
                  break;
                }
                default: break;
              }
            }
            else
            {
              // the following switch contains 3 case.
              switch (c & 0xc0)
              {
                case 0x00:
                {
                  // ENCODING.STR_32_ldst_immpost
                  return 500;
                  break;
                }
                case 0x40:
                {
                  // ENCODING.LDR_32_ldst_immpost
                  return 238;
                  break;
                }
                case 0x80:
                {
                  // ENCODING.LDRSW_64_ldst_immpost
                  return 279;
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
              // the following switch contains 6 case.
              switch (c & 0xe0)
              {
                case 0x00:
                {
                  // ENCODING.STTR_32_ldst_unpriv
                  return 517;
                  break;
                }
                case 0x20:
                {
                  // ENCODING.STR_32_ldst_regoff
                  return 506;
                  break;
                }
                case 0x40:
                {
                  // ENCODING.LDTR_32_ldst_unpriv
                  return 332;
                  break;
                }
                case 0x60:
                {
                  // ENCODING.LDR_32_ldst_regoff
                  return 246;
                  break;
                }
                case 0x80:
                {
                  // ENCODING.LDTRSW_64_ldst_unpriv
                  return 340;
                  break;
                }
                case 0xa0:
                {
                  // ENCODING.LDRSW_64_ldst_regoff
                  return 283;
                  break;
                }
                default: break;
              }
            }
            else
            {
              // the following switch contains 7 case.
              switch (c & 0xe0)
              {
                case 0x00:
                {
                  // ENCODING.STUR_32_ldst_unscaled
                  return 521;
                  break;
                }
                case 0x20:
                {
                  // the following switch contains 9 case.
                  switch (b & 0xf0)
                  {
                    case 0x00:
                    {
                      // ENCODING.LDADD_32_memop
                      return 150;
                      break;
                    }
                    case 0x10:
                    {
                      // ENCODING.LDCLR_32_memop
                      return 189;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.LDEOR_32_memop
                      return 205;
                      break;
                    }
                    case 0x30:
                    {
                      // ENCODING.LDSET_32_memop
                      return 284;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.LDSMAX_32_memop
                      return 300;
                      break;
                    }
                    case 0x50:
                    {
                      // ENCODING.LDSMIN_32_memop
                      return 316;
                      break;
                    }
                    case 0x60:
                    {
                      // ENCODING.LDUMAX_32_memop
                      return 341;
                      break;
                    }
                    case 0x70:
                    {
                      // ENCODING.LDUMIN_32_memop
                      return 357;
                      break;
                    }
                    case 0x80:
                    {
                      // ENCODING.SWP_32_memop
                      return 554;
                      break;
                    }
                    default: break;
                  }
                  break;
                }
                case 0x40:
                {
                  // ENCODING.LDUR_32_ldst_unscaled
                  return 373;
                  break;
                }
                case 0x60:
                {
                  // the following switch contains 9 case.
                  switch (b & 0xf0)
                  {
                    case 0x00:
                    {
                      // ENCODING.LDADDL_32_memop
                      return 153;
                      break;
                    }
                    case 0x10:
                    {
                      // ENCODING.LDCLRL_32_memop
                      return 192;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.LDEORL_32_memop
                      return 208;
                      break;
                    }
                    case 0x30:
                    {
                      // ENCODING.LDSETL_32_memop
                      return 287;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.LDSMAXL_32_memop
                      return 303;
                      break;
                    }
                    case 0x50:
                    {
                      // ENCODING.LDSMINL_32_memop
                      return 319;
                      break;
                    }
                    case 0x60:
                    {
                      // ENCODING.LDUMAXL_32_memop
                      return 344;
                      break;
                    }
                    case 0x70:
                    {
                      // ENCODING.LDUMINL_32_memop
                      return 360;
                      break;
                    }
                    case 0x80:
                    {
                      // ENCODING.SWPL_32_memop
                      return 557;
                      break;
                    }
                    default: break;
                  }
                  break;
                }
                case 0x80:
                {
                  // ENCODING.LDURSW_64_ldst_unscaled
                  return 381;
                  break;
                }
                case 0xa0:
                {
                  // the following switch contains 10 case.
                  switch (b & 0xf0)
                  {
                    case 0x00:
                    {
                      // ENCODING.LDADDA_32_memop
                      return 151;
                      break;
                    }
                    case 0x10:
                    {
                      // ENCODING.LDCLRA_32_memop
                      return 190;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.LDEORA_32_memop
                      return 206;
                      break;
                    }
                    case 0x30:
                    {
                      // ENCODING.LDSETA_32_memop
                      return 285;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.LDSMAXA_32_memop
                      return 301;
                      break;
                    }
                    case 0x50:
                    {
                      // ENCODING.LDSMINA_32_memop
                      return 317;
                      break;
                    }
                    case 0x60:
                    {
                      // ENCODING.LDUMAXA_32_memop
                      return 342;
                      break;
                    }
                    case 0x70:
                    {
                      // ENCODING.LDUMINA_32_memop
                      return 358;
                      break;
                    }
                    case 0x80:
                    {
                      // ENCODING.SWPA_32_memop
                      return 555;
                      break;
                    }
                    case 0xc0:
                    {
                      // ENCODING.LDAPR_32L_memop
                      return 166;
                      break;
                    }
                    default: break;
                  }
                  break;
                }
                case 0xe0:
                {
                  // the following switch contains 9 case.
                  switch (b & 0xf0)
                  {
                    case 0x00:
                    {
                      // ENCODING.LDADDAL_32_memop
                      return 152;
                      break;
                    }
                    case 0x10:
                    {
                      // ENCODING.LDCLRAL_32_memop
                      return 191;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.LDEORAL_32_memop
                      return 207;
                      break;
                    }
                    case 0x30:
                    {
                      // ENCODING.LDSETAL_32_memop
                      return 286;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.LDSMAXAL_32_memop
                      return 302;
                      break;
                    }
                    case 0x50:
                    {
                      // ENCODING.LDSMINAL_32_memop
                      return 318;
                      break;
                    }
                    case 0x60:
                    {
                      // ENCODING.LDUMAXAL_32_memop
                      return 343;
                      break;
                    }
                    case 0x70:
                    {
                      // ENCODING.LDUMINAL_32_memop
                      return 359;
                      break;
                    }
                    case 0x80:
                    {
                      // ENCODING.SWPAL_32_memop
                      return 556;
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
          break;
        }
        case 0xa1:
        {
          // the following switch contains 3 case.
          switch (c & 0xc0)
          {
            case 0x00:
            {
              // ENCODING.STR_32_ldst_pos
              return 504;
              break;
            }
            case 0x40:
            {
              // ENCODING.LDR_32_ldst_pos
              return 242;
              break;
            }
            case 0x80:
            {
              // ENCODING.LDRSW_64_ldst_pos
              return 281;
              break;
            }
            default: break;
          }
          break;
        }
        case 0xa2:
        {
          if (b & 0x04)
          {
            // ENCODING.RMIF_only_rmif
            return 443;
          }
          else
          {
            if (b & 0x08)
            {
              // ENCODING.CCMN_64_condcmp_imm
              return 95;
            }
            else
            {
              // the following switch contains 3 case.
              switch (c & 0xc0)
              {
                case 0x00:
                {
                  // ENCODING.ADCS_64_addsub_carry
                  return 4;
                  break;
                }
                case 0x40:
                {
                  // ENCODING.CCMN_64_condcmp_reg
                  return 97;
                  break;
                }
                case 0xc0:
                {
                  // ENCODING.SUBPS_64S_dp_2src
                  return 546;
                  break;
                }
                default: break;
              }
            }
          }
          break;
        }
        case 0xc0:
        {
          // ENCODING.PRFM_P_loadlit
          return 428;
          break;
        }
        case 0xc1:
        {
          if (b & 0x04)
          {
            if (b & 0x08)
            {
              // the following switch contains 4 case.
              switch (c & 0xc0)
              {
                case 0x00:
                {
                  // ENCODING.STG_64Spre_ldsttags
                  return 468;
                  break;
                }
                case 0x40:
                {
                  // ENCODING.STZG_64Spre_ldsttags
                  return 535;
                  break;
                }
                case 0x80:
                {
                  // ENCODING.ST2G_64Spre_ldsttags
                  return 465;
                  break;
                }
                case 0xc0:
                {
                  // ENCODING.STZ2G_64Spre_ldsttags
                  return 532;
                  break;
                }
                default: break;
              }
            }
            else
            {
              // the following switch contains 4 case.
              switch (c & 0xc0)
              {
                case 0x00:
                {
                  // ENCODING.STG_64Spost_ldsttags
                  return 467;
                  break;
                }
                case 0x40:
                {
                  // ENCODING.STZG_64Spost_ldsttags
                  return 534;
                  break;
                }
                case 0x80:
                {
                  // ENCODING.ST2G_64Spost_ldsttags
                  return 464;
                  break;
                }
                case 0xc0:
                {
                  // ENCODING.STZ2G_64Spost_ldsttags
                  return 531;
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
              switch (c & 0xc0)
              {
                case 0x00:
                {
                  // ENCODING.STG_64Soffset_ldsttags
                  return 469;
                  break;
                }
                case 0x40:
                {
                  // ENCODING.STZG_64Soffset_ldsttags
                  return 536;
                  break;
                }
                case 0x80:
                {
                  // ENCODING.ST2G_64Soffset_ldsttags
                  return 466;
                  break;
                }
                case 0xc0:
                {
                  // ENCODING.STZ2G_64Soffset_ldsttags
                  return 533;
                  break;
                }
                default: break;
              }
            }
            else
            {
              // the following switch contains 6 case.
              switch (c & 0xe0)
              {
                case 0x00:
                {
                  // ENCODING.STLUR_64_ldapstl_unscaled
                  return 483;
                  break;
                }
                case 0x20:
                {
                  // ENCODING.STZGM_64bulk_ldsttags
                  return 537;
                  break;
                }
                case 0x40:
                {
                  // ENCODING.LDAPUR_64_ldapstl_unscaled
                  return 171;
                  break;
                }
                case 0x60:
                {
                  // ENCODING.LDG_64Loffset_ldsttags
                  return 221;
                  break;
                }
                case 0xa0:
                {
                  // ENCODING.STGM_64bulk_ldsttags
                  return 470;
                  break;
                }
                case 0xe0:
                {
                  // ENCODING.LDGM_64bulk_ldsttags
                  return 222;
                  break;
                }
                default: break;
              }
            }
          }
          break;
        }
        case 0xc2:
        {
          if (b & 0x04)
          {
            if (b & 0x08)
            {
              if (b & 0x10)
              {
                if (b & 0x20)
                {
                  // ENCODING.AUTDZB_64Z_dp_1src
                  return 33;
                }
                else
                {
                  // ENCODING.AUTDB_64P_dp_1src
                  return 32;
                }
              }
              else
              {
                if (b & 0x20)
                {
                  // ENCODING.PACDZB_64Z_dp_1src
                  return 415;
                }
                else
                {
                  if (c & 0x01)
                  {
                    // ENCODING.PACDB_64P_dp_1src
                    return 414;
                  }
                  else
                  {
                    // ENCODING.REV_64_dp_1src
                    return 439;
                  }
                }
              }
            }
            else
            {
              if (c & 0x40)
              {
                if (b & 0x10)
                {
                  if (b & 0x20)
                  {
                    // ENCODING.AUTIZB_64Z_dp_1src
                    return 40;
                  }
                  else
                  {
                    if (c & 0x01)
                    {
                      // ENCODING.AUTIB_64P_dp_1src
                      return 39;
                    }
                    else
                    {
                      // ENCODING.CLS_64_dp_1src
                      return 105;
                    }
                  }
                }
                else
                {
                  if (b & 0x20)
                  {
                    // ENCODING.PACIZB_64Z_dp_1src
                    return 423;
                  }
                  else
                  {
                    if (b & 0x40)
                    {
                      // ENCODING.XPACD_64Z_dp_1src
                      return 590;
                    }
                    else
                    {
                      if (c & 0x01)
                      {
                        // ENCODING.PACIB_64P_dp_1src
                        return 422;
                      }
                      else
                      {
                        // ENCODING.REV16_64_dp_1src
                        return 441;
                      }
                    }
                  }
                }
              }
              else
              {
                // ENCODING.CSNEG_64_condsel
                return 124;
              }
            }
          }
          else
          {
            if (b & 0x08)
            {
              if (b & 0x10)
              {
                if (b & 0x20)
                {
                  // ENCODING.AUTDZA_64Z_dp_1src
                  return 31;
                }
                else
                {
                  // ENCODING.AUTDA_64P_dp_1src
                  return 30;
                }
              }
              else
              {
                if (b & 0x20)
                {
                  // ENCODING.PACDZA_64Z_dp_1src
                  return 413;
                }
                else
                {
                  if (c & 0x01)
                  {
                    // ENCODING.PACDA_64P_dp_1src
                    return 412;
                  }
                  else
                  {
                    // ENCODING.REV32_64_dp_1src
                    return 442;
                  }
                }
              }
            }
            else
            {
              // the following switch contains 3 case.
              switch (c & 0xc0)
              {
                case 0x00:
                {
                  // ENCODING.SBC_64_addsub_carry
                  return 448;
                  break;
                }
                case 0x80:
                {
                  // ENCODING.CSINV_64_condsel
                  return 122;
                  break;
                }
                case 0xc0:
                {
                  if (b & 0x10)
                  {
                    if (b & 0x20)
                    {
                      // ENCODING.AUTIZA_64Z_dp_1src
                      return 35;
                    }
                    else
                    {
                      if (c & 0x01)
                      {
                        // ENCODING.AUTIA_64P_dp_1src
                        return 34;
                      }
                      else
                      {
                        // ENCODING.CLZ_64_dp_1src
                        return 107;
                      }
                    }
                  }
                  else
                  {
                    if (b & 0x20)
                    {
                      // ENCODING.PACIZA_64Z_dp_1src
                      return 418;
                    }
                    else
                    {
                      if (b & 0x40)
                      {
                        // ENCODING.XPACI_64Z_dp_1src
                        return 591;
                      }
                      else
                      {
                        if (c & 0x01)
                        {
                          // ENCODING.PACIA_64P_dp_1src
                          return 417;
                        }
                        else
                        {
                          // ENCODING.RBIT_64_dp_1src
                          return 434;
                        }
                      }
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
        case 0xe0:
        {
          if (b & 0x04)
          {
            if (b & 0x08)
            {
              // the following switch contains 3 case.
              switch (c & 0xa0)
              {
                case 0x00:
                {
                  if (c & 0x40)
                  {
                    // ENCODING.LDR_64_ldst_immpre
                    return 241;
                  }
                  else
                  {
                    // ENCODING.STR_64_ldst_immpre
                    return 503;
                  }
                  break;
                }
                case 0x20:
                {
                  // ENCODING.LDRAA_64W_ldst_pac
                  return 249;
                  break;
                }
                case 0xa0:
                {
                  // ENCODING.LDRAB_64W_ldst_pac
                  return 251;
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
                  if (c & 0x40)
                  {
                    // ENCODING.LDR_64_ldst_immpost
                    return 239;
                  }
                  else
                  {
                    // ENCODING.STR_64_ldst_immpost
                    return 501;
                  }
                  break;
                }
                case 0x20:
                {
                  // ENCODING.LDRAA_64_ldst_pac
                  return 248;
                  break;
                }
                case 0xa0:
                {
                  // ENCODING.LDRAB_64_ldst_pac
                  return 250;
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
              // the following switch contains 5 case.
              switch (c & 0xe0)
              {
                case 0x00:
                {
                  // ENCODING.STTR_64_ldst_unpriv
                  return 518;
                  break;
                }
                case 0x20:
                {
                  // ENCODING.STR_64_ldst_regoff
                  return 507;
                  break;
                }
                case 0x40:
                {
                  // ENCODING.LDTR_64_ldst_unpriv
                  return 333;
                  break;
                }
                case 0x60:
                {
                  // ENCODING.LDR_64_ldst_regoff
                  return 247;
                  break;
                }
                case 0xa0:
                {
                  // ENCODING.PRFM_P_ldst_regoff
                  return 429;
                  break;
                }
                default: break;
              }
            }
            else
            {
              // the following switch contains 7 case.
              switch (c & 0xe0)
              {
                case 0x00:
                {
                  // ENCODING.STUR_64_ldst_unscaled
                  return 522;
                  break;
                }
                case 0x20:
                {
                  // the following switch contains 9 case.
                  switch (b & 0xf0)
                  {
                    case 0x00:
                    {
                      // ENCODING.LDADD_64_memop
                      return 154;
                      break;
                    }
                    case 0x10:
                    {
                      // ENCODING.LDCLR_64_memop
                      return 193;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.LDEOR_64_memop
                      return 209;
                      break;
                    }
                    case 0x30:
                    {
                      // ENCODING.LDSET_64_memop
                      return 288;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.LDSMAX_64_memop
                      return 304;
                      break;
                    }
                    case 0x50:
                    {
                      // ENCODING.LDSMIN_64_memop
                      return 320;
                      break;
                    }
                    case 0x60:
                    {
                      // ENCODING.LDUMAX_64_memop
                      return 345;
                      break;
                    }
                    case 0x70:
                    {
                      // ENCODING.LDUMIN_64_memop
                      return 361;
                      break;
                    }
                    case 0x80:
                    {
                      // ENCODING.SWP_64_memop
                      return 558;
                      break;
                    }
                    default: break;
                  }
                  break;
                }
                case 0x40:
                {
                  // ENCODING.LDUR_64_ldst_unscaled
                  return 374;
                  break;
                }
                case 0x60:
                {
                  // the following switch contains 9 case.
                  switch (b & 0xf0)
                  {
                    case 0x00:
                    {
                      // ENCODING.LDADDL_64_memop
                      return 157;
                      break;
                    }
                    case 0x10:
                    {
                      // ENCODING.LDCLRL_64_memop
                      return 196;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.LDEORL_64_memop
                      return 212;
                      break;
                    }
                    case 0x30:
                    {
                      // ENCODING.LDSETL_64_memop
                      return 291;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.LDSMAXL_64_memop
                      return 307;
                      break;
                    }
                    case 0x50:
                    {
                      // ENCODING.LDSMINL_64_memop
                      return 323;
                      break;
                    }
                    case 0x60:
                    {
                      // ENCODING.LDUMAXL_64_memop
                      return 348;
                      break;
                    }
                    case 0x70:
                    {
                      // ENCODING.LDUMINL_64_memop
                      return 364;
                      break;
                    }
                    case 0x80:
                    {
                      // ENCODING.SWPL_64_memop
                      return 561;
                      break;
                    }
                    default: break;
                  }
                  break;
                }
                case 0x80:
                {
                  // ENCODING.PRFUM_P_ldst_unscaled
                  return 430;
                  break;
                }
                case 0xa0:
                {
                  // the following switch contains 10 case.
                  switch (b & 0xf0)
                  {
                    case 0x00:
                    {
                      // ENCODING.LDADDA_64_memop
                      return 155;
                      break;
                    }
                    case 0x10:
                    {
                      // ENCODING.LDCLRA_64_memop
                      return 194;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.LDEORA_64_memop
                      return 210;
                      break;
                    }
                    case 0x30:
                    {
                      // ENCODING.LDSETA_64_memop
                      return 289;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.LDSMAXA_64_memop
                      return 305;
                      break;
                    }
                    case 0x50:
                    {
                      // ENCODING.LDSMINA_64_memop
                      return 321;
                      break;
                    }
                    case 0x60:
                    {
                      // ENCODING.LDUMAXA_64_memop
                      return 346;
                      break;
                    }
                    case 0x70:
                    {
                      // ENCODING.LDUMINA_64_memop
                      return 362;
                      break;
                    }
                    case 0x80:
                    {
                      // ENCODING.SWPA_64_memop
                      return 559;
                      break;
                    }
                    case 0xc0:
                    {
                      // ENCODING.LDAPR_64L_memop
                      return 167;
                      break;
                    }
                    default: break;
                  }
                  break;
                }
                case 0xe0:
                {
                  // the following switch contains 9 case.
                  switch (b & 0xf0)
                  {
                    case 0x00:
                    {
                      // ENCODING.LDADDAL_64_memop
                      return 156;
                      break;
                    }
                    case 0x10:
                    {
                      // ENCODING.LDCLRAL_64_memop
                      return 195;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.LDEORAL_64_memop
                      return 211;
                      break;
                    }
                    case 0x30:
                    {
                      // ENCODING.LDSETAL_64_memop
                      return 290;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.LDSMAXAL_64_memop
                      return 306;
                      break;
                    }
                    case 0x50:
                    {
                      // ENCODING.LDSMINAL_64_memop
                      return 322;
                      break;
                    }
                    case 0x60:
                    {
                      // ENCODING.LDUMAXAL_64_memop
                      return 347;
                      break;
                    }
                    case 0x70:
                    {
                      // ENCODING.LDUMINAL_64_memop
                      return 363;
                      break;
                    }
                    case 0x80:
                    {
                      // ENCODING.SWPAL_64_memop
                      return 560;
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
          break;
        }
        case 0xe1:
        {
          // the following switch contains 3 case.
          switch (c & 0xc0)
          {
            case 0x00:
            {
              // ENCODING.STR_64_ldst_pos
              return 505;
              break;
            }
            case 0x40:
            {
              // ENCODING.LDR_64_ldst_pos
              return 243;
              break;
            }
            case 0x80:
            {
              // ENCODING.PRFM_P_ldst_pos
              return 427;
              break;
            }
            default: break;
          }
          break;
        }
        case 0xe2:
        {
          if (b & 0x08)
          {
            // ENCODING.CCMP_64_condcmp_imm
            return 99;
          }
          else
          {
            if (c & 0x40)
            {
              // ENCODING.CCMP_64_condcmp_reg
              return 101;
            }
            else
            {
              // ENCODING.SBCS_64_addsub_carry
              return 450;
            }
          }
          break;
        }
        default: break;
      }
      break;
    }
    case 0x1c:
    {
      // the following switch contains 18 case.
      switch (d & 0xe3)
      {
        case 0x00:
        {
          // ENCODING.LDR_S_loadlit
          return 1337;
          break;
        }
        case 0x02:
        {
          // the following switch contains 6 case.
          switch (c & 0xe0)
          {
            case 0x00:
            {
              // the following switch contains 4 case.
              switch ((c & 0x1b) - 2)
              {
                case 0x00:
                {
                  // ENCODING.SCVTF_S32_float2fix
                  return 1399;
                  break;
                }
                case 0x01:
                {
                  // ENCODING.UCVTF_S32_float2fix
                  return 1671;
                  break;
                }
                case 0x16:
                {
                  // ENCODING.FCVTZS_32S_float2fix
                  return 998;
                  break;
                }
                case 0x17:
                {
                  // ENCODING.FCVTZU_32S_float2fix
                  return 1016;
                  break;
                }
                default: break;
              }
              break;
            }
            case 0x20:
            {
              // the following switch contains 4 case.
              switch (b & 0x0c)
              {
                case 0x00:
                {
                  if (b & 0x10)
                  {
                    // ENCODING.FMOV_S_floatimm
                    return 1116;
                  }
                  else
                  {
                    // the following switch contains 4 case.
                    switch (b & 0xe0)
                    {
                      case 0x00:
                      {
                        // the following switch contains 14 case.
                        switch (c & 0x1f)
                        {
                          case 0x00:
                          {
                            // ENCODING.FCVTNS_32S_float2int
                            return 954;
                            break;
                          }
                          case 0x01:
                          {
                            // ENCODING.FCVTNU_32S_float2int
                            return 964;
                            break;
                          }
                          case 0x02:
                          {
                            // ENCODING.SCVTF_S32_float2int
                            return 1405;
                            break;
                          }
                          case 0x03:
                          {
                            // ENCODING.UCVTF_S32_float2int
                            return 1677;
                            break;
                          }
                          case 0x04:
                          {
                            // ENCODING.FCVTAS_32S_float2int
                            return 912;
                            break;
                          }
                          case 0x05:
                          {
                            // ENCODING.FCVTAU_32S_float2int
                            return 922;
                            break;
                          }
                          case 0x06:
                          {
                            // ENCODING.FMOV_32S_float2int
                            return 1109;
                            break;
                          }
                          case 0x07:
                          {
                            // ENCODING.FMOV_S32_float2int
                            return 1108;
                            break;
                          }
                          case 0x08:
                          {
                            // ENCODING.FCVTPS_32S_float2int
                            return 974;
                            break;
                          }
                          case 0x09:
                          {
                            // ENCODING.FCVTPU_32S_float2int
                            return 984;
                            break;
                          }
                          case 0x10:
                          {
                            // ENCODING.FCVTMS_32S_float2int
                            return 933;
                            break;
                          }
                          case 0x11:
                          {
                            // ENCODING.FCVTMU_32S_float2int
                            return 943;
                            break;
                          }
                          case 0x18:
                          {
                            // ENCODING.FCVTZS_32S_float2int
                            return 1004;
                            break;
                          }
                          case 0x19:
                          {
                            // ENCODING.FCVTZU_32S_float2int
                            return 1022;
                            break;
                          }
                          default: break;
                        }
                        break;
                      }
                      case 0x20:
                      {
                        // the following switch contains 4 case.
                        switch (a & 0x18)
                        {
                          case 0x00:
                          {
                            // ENCODING.FCMP_S_floatcmp
                            return 887;
                            break;
                          }
                          case 0x08:
                          {
                            // ENCODING.FCMP_SZ_floatcmp
                            return 888;
                            break;
                          }
                          case 0x10:
                          {
                            // ENCODING.FCMPE_S_floatcmp
                            return 893;
                            break;
                          }
                          case 0x18:
                          {
                            // ENCODING.FCMPE_SZ_floatcmp
                            return 894;
                            break;
                          }
                          default: break;
                        }
                        break;
                      }
                      case 0x40:
                      {
                        // the following switch contains 8 case.
                        switch (c & 0x0f)
                        {
                          case 0x00:
                          {
                            // ENCODING.FMOV_S_floatdp1
                            return 1103;
                            break;
                          }
                          case 0x01:
                          {
                            // ENCODING.FNEG_S_floatdp1
                            return 1141;
                            break;
                          }
                          case 0x04:
                          {
                            // ENCODING.FRINTN_S_floatdp1
                            return 1192;
                            break;
                          }
                          case 0x05:
                          {
                            // ENCODING.FRINTM_S_floatdp1
                            return 1187;
                            break;
                          }
                          case 0x06:
                          {
                            // ENCODING.FRINTA_S_floatdp1
                            return 1177;
                            break;
                          }
                          case 0x07:
                          {
                            // ENCODING.FRINTX_S_floatdp1
                            return 1202;
                            break;
                          }
                          case 0x08:
                          {
                            // ENCODING.FRINT32Z_S_floatdp1
                            return 1166;
                            break;
                          }
                          case 0x09:
                          {
                            // ENCODING.FRINT64Z_S_floatdp1
                            return 1172;
                            break;
                          }
                          default: break;
                        }
                        break;
                      }
                      case 0xc0:
                      {
                        // the following switch contains 9 case.
                        switch (c & 0x0f)
                        {
                          case 0x00:
                          {
                            // ENCODING.FABS_S_floatdp1
                            return 824;
                            break;
                          }
                          case 0x01:
                          {
                            // ENCODING.FSQRT_S_floatdp1
                            return 1220;
                            break;
                          }
                          case 0x02:
                          {
                            // ENCODING.FCVT_DS_floatdp1
                            return 903;
                            break;
                          }
                          case 0x03:
                          {
                            // ENCODING.FCVT_HS_floatdp1
                            return 902;
                            break;
                          }
                          case 0x04:
                          {
                            // ENCODING.FRINTP_S_floatdp1
                            return 1197;
                            break;
                          }
                          case 0x05:
                          {
                            // ENCODING.FRINTZ_S_floatdp1
                            return 1207;
                            break;
                          }
                          case 0x07:
                          {
                            // ENCODING.FRINTI_S_floatdp1
                            return 1182;
                            break;
                          }
                          case 0x08:
                          {
                            // ENCODING.FRINT32X_S_floatdp1
                            return 1163;
                            break;
                          }
                          case 0x09:
                          {
                            // ENCODING.FRINT64X_S_floatdp1
                            return 1169;
                            break;
                          }
                          default: break;
                        }
                        break;
                      }
                      default: break;
                    }
                  }
                  break;
                }
                case 0x04:
                {
                  if (a & 0x10)
                  {
                    // ENCODING.FCCMPE_S_floatccmp
                    return 848;
                  }
                  else
                  {
                    // ENCODING.FCCMP_S_floatccmp
                    return 845;
                  }
                  break;
                }
                case 0x08:
                {
                  // the following switch contains 9 case.
                  switch (b & 0xf0)
                  {
                    case 0x00:
                    {
                      // ENCODING.FMUL_S_floatdp2
                      return 1128;
                      break;
                    }
                    case 0x10:
                    {
                      // ENCODING.FDIV_S_floatdp2
                      return 1029;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.FADD_S_floatdp2
                      return 837;
                      break;
                    }
                    case 0x30:
                    {
                      // ENCODING.FSUB_S_floatdp2
                      return 1225;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.FMAX_S_floatdp2
                      return 1038;
                      break;
                    }
                    case 0x50:
                    {
                      // ENCODING.FMIN_S_floatdp2
                      return 1060;
                      break;
                    }
                    case 0x60:
                    {
                      // ENCODING.FMAXNM_S_floatdp2
                      return 1043;
                      break;
                    }
                    case 0x70:
                    {
                      // ENCODING.FMINNM_S_floatdp2
                      return 1065;
                      break;
                    }
                    case 0x80:
                    {
                      // ENCODING.FNMUL_S_floatdp2
                      return 1150;
                      break;
                    }
                    default: break;
                  }
                  break;
                }
                case 0x0c:
                {
                  // ENCODING.FCSEL_S_floatsel
                  return 898;
                  break;
                }
                default: break;
              }
              break;
            }
            case 0x40:
            {
              // the following switch contains 4 case.
              switch ((c & 0x1b) - 2)
              {
                case 0x00:
                {
                  // ENCODING.SCVTF_D32_float2fix
                  return 1400;
                  break;
                }
                case 0x01:
                {
                  // ENCODING.UCVTF_D32_float2fix
                  return 1672;
                  break;
                }
                case 0x16:
                {
                  // ENCODING.FCVTZS_32D_float2fix
                  return 1000;
                  break;
                }
                case 0x17:
                {
                  // ENCODING.FCVTZU_32D_float2fix
                  return 1018;
                  break;
                }
                default: break;
              }
              break;
            }
            case 0x60:
            {
              // the following switch contains 4 case.
              switch (b & 0x0c)
              {
                case 0x00:
                {
                  if (b & 0x10)
                  {
                    // ENCODING.FMOV_D_floatimm
                    return 1117;
                  }
                  else
                  {
                    // the following switch contains 4 case.
                    switch (b & 0xe0)
                    {
                      case 0x00:
                      {
                        // the following switch contains 13 case.
                        switch (c & 0x1f)
                        {
                          case 0x00:
                          {
                            // ENCODING.FCVTNS_32D_float2int
                            return 956;
                            break;
                          }
                          case 0x01:
                          {
                            // ENCODING.FCVTNU_32D_float2int
                            return 966;
                            break;
                          }
                          case 0x02:
                          {
                            // ENCODING.SCVTF_D32_float2int
                            return 1406;
                            break;
                          }
                          case 0x03:
                          {
                            // ENCODING.UCVTF_D32_float2int
                            return 1678;
                            break;
                          }
                          case 0x04:
                          {
                            // ENCODING.FCVTAS_32D_float2int
                            return 914;
                            break;
                          }
                          case 0x05:
                          {
                            // ENCODING.FCVTAU_32D_float2int
                            return 924;
                            break;
                          }
                          case 0x08:
                          {
                            // ENCODING.FCVTPS_32D_float2int
                            return 976;
                            break;
                          }
                          case 0x09:
                          {
                            // ENCODING.FCVTPU_32D_float2int
                            return 986;
                            break;
                          }
                          case 0x10:
                          {
                            // ENCODING.FCVTMS_32D_float2int
                            return 935;
                            break;
                          }
                          case 0x11:
                          {
                            // ENCODING.FCVTMU_32D_float2int
                            return 945;
                            break;
                          }
                          case 0x18:
                          {
                            // ENCODING.FCVTZS_32D_float2int
                            return 1006;
                            break;
                          }
                          case 0x19:
                          {
                            // ENCODING.FCVTZU_32D_float2int
                            return 1024;
                            break;
                          }
                          case 0x1e:
                          {
                            // ENCODING.FJCVTZS_32D_float2int
                            return 1031;
                            break;
                          }
                          default: break;
                        }
                        break;
                      }
                      case 0x20:
                      {
                        // the following switch contains 4 case.
                        switch (a & 0x18)
                        {
                          case 0x00:
                          {
                            // ENCODING.FCMP_D_floatcmp
                            return 889;
                            break;
                          }
                          case 0x08:
                          {
                            // ENCODING.FCMP_DZ_floatcmp
                            return 890;
                            break;
                          }
                          case 0x10:
                          {
                            // ENCODING.FCMPE_D_floatcmp
                            return 895;
                            break;
                          }
                          case 0x18:
                          {
                            // ENCODING.FCMPE_DZ_floatcmp
                            return 896;
                            break;
                          }
                          default: break;
                        }
                        break;
                      }
                      case 0x40:
                      {
                        // the following switch contains 10 case.
                        switch (c & 0x0f)
                        {
                          case 0x00:
                          {
                            // ENCODING.FMOV_D_floatdp1
                            return 1104;
                            break;
                          }
                          case 0x01:
                          {
                            // ENCODING.FNEG_D_floatdp1
                            return 1142;
                            break;
                          }
                          case 0x02:
                          {
                            // ENCODING.FCVT_SD_floatdp1
                            return 905;
                            break;
                          }
                          case 0x03:
                          {
                            // ENCODING.BFCVT_BS_floatdp1
                            return 773;
                            break;
                          }
                          case 0x04:
                          {
                            // ENCODING.FRINTN_D_floatdp1
                            return 1193;
                            break;
                          }
                          case 0x05:
                          {
                            // ENCODING.FRINTM_D_floatdp1
                            return 1188;
                            break;
                          }
                          case 0x06:
                          {
                            // ENCODING.FRINTA_D_floatdp1
                            return 1178;
                            break;
                          }
                          case 0x07:
                          {
                            // ENCODING.FRINTX_D_floatdp1
                            return 1203;
                            break;
                          }
                          case 0x08:
                          {
                            // ENCODING.FRINT32Z_D_floatdp1
                            return 1167;
                            break;
                          }
                          case 0x09:
                          {
                            // ENCODING.FRINT64Z_D_floatdp1
                            return 1173;
                            break;
                          }
                          default: break;
                        }
                        break;
                      }
                      case 0xc0:
                      {
                        // the following switch contains 8 case.
                        switch (c & 0x0f)
                        {
                          case 0x00:
                          {
                            // ENCODING.FABS_D_floatdp1
                            return 825;
                            break;
                          }
                          case 0x01:
                          {
                            // ENCODING.FSQRT_D_floatdp1
                            return 1221;
                            break;
                          }
                          case 0x03:
                          {
                            // ENCODING.FCVT_HD_floatdp1
                            return 904;
                            break;
                          }
                          case 0x04:
                          {
                            // ENCODING.FRINTP_D_floatdp1
                            return 1198;
                            break;
                          }
                          case 0x05:
                          {
                            // ENCODING.FRINTZ_D_floatdp1
                            return 1208;
                            break;
                          }
                          case 0x07:
                          {
                            // ENCODING.FRINTI_D_floatdp1
                            return 1183;
                            break;
                          }
                          case 0x08:
                          {
                            // ENCODING.FRINT32X_D_floatdp1
                            return 1164;
                            break;
                          }
                          case 0x09:
                          {
                            // ENCODING.FRINT64X_D_floatdp1
                            return 1170;
                            break;
                          }
                          default: break;
                        }
                        break;
                      }
                      default: break;
                    }
                  }
                  break;
                }
                case 0x04:
                {
                  if (a & 0x10)
                  {
                    // ENCODING.FCCMPE_D_floatccmp
                    return 849;
                  }
                  else
                  {
                    // ENCODING.FCCMP_D_floatccmp
                    return 846;
                  }
                  break;
                }
                case 0x08:
                {
                  // the following switch contains 9 case.
                  switch (b & 0xf0)
                  {
                    case 0x00:
                    {
                      // ENCODING.FMUL_D_floatdp2
                      return 1129;
                      break;
                    }
                    case 0x10:
                    {
                      // ENCODING.FDIV_D_floatdp2
                      return 1030;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.FADD_D_floatdp2
                      return 838;
                      break;
                    }
                    case 0x30:
                    {
                      // ENCODING.FSUB_D_floatdp2
                      return 1226;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.FMAX_D_floatdp2
                      return 1039;
                      break;
                    }
                    case 0x50:
                    {
                      // ENCODING.FMIN_D_floatdp2
                      return 1061;
                      break;
                    }
                    case 0x60:
                    {
                      // ENCODING.FMAXNM_D_floatdp2
                      return 1044;
                      break;
                    }
                    case 0x70:
                    {
                      // ENCODING.FMINNM_D_floatdp2
                      return 1066;
                      break;
                    }
                    case 0x80:
                    {
                      // ENCODING.FNMUL_D_floatdp2
                      return 1151;
                      break;
                    }
                    default: break;
                  }
                  break;
                }
                case 0x0c:
                {
                  // ENCODING.FCSEL_D_floatsel
                  return 899;
                  break;
                }
                default: break;
              }
              break;
            }
            case 0xc0:
            {
              // the following switch contains 4 case.
              switch ((c & 0x1b) - 2)
              {
                case 0x00:
                {
                  // ENCODING.SCVTF_H32_float2fix
                  return 1398;
                  break;
                }
                case 0x01:
                {
                  // ENCODING.UCVTF_H32_float2fix
                  return 1670;
                  break;
                }
                case 0x16:
                {
                  // ENCODING.FCVTZS_32H_float2fix
                  return 996;
                  break;
                }
                case 0x17:
                {
                  // ENCODING.FCVTZU_32H_float2fix
                  return 1014;
                  break;
                }
                default: break;
              }
              break;
            }
            case 0xe0:
            {
              // the following switch contains 4 case.
              switch (b & 0x0c)
              {
                case 0x00:
                {
                  if (b & 0x10)
                  {
                    // ENCODING.FMOV_H_floatimm
                    return 1115;
                  }
                  else
                  {
                    // the following switch contains 4 case.
                    switch (b & 0xe0)
                    {
                      case 0x00:
                      {
                        // the following switch contains 14 case.
                        switch (c & 0x1f)
                        {
                          case 0x00:
                          {
                            // ENCODING.FCVTNS_32H_float2int
                            return 952;
                            break;
                          }
                          case 0x01:
                          {
                            // ENCODING.FCVTNU_32H_float2int
                            return 962;
                            break;
                          }
                          case 0x02:
                          {
                            // ENCODING.SCVTF_H32_float2int
                            return 1404;
                            break;
                          }
                          case 0x03:
                          {
                            // ENCODING.UCVTF_H32_float2int
                            return 1676;
                            break;
                          }
                          case 0x04:
                          {
                            // ENCODING.FCVTAS_32H_float2int
                            return 910;
                            break;
                          }
                          case 0x05:
                          {
                            // ENCODING.FCVTAU_32H_float2int
                            return 920;
                            break;
                          }
                          case 0x06:
                          {
                            // ENCODING.FMOV_32H_float2int
                            return 1105;
                            break;
                          }
                          case 0x07:
                          {
                            // ENCODING.FMOV_H32_float2int
                            return 1107;
                            break;
                          }
                          case 0x08:
                          {
                            // ENCODING.FCVTPS_32H_float2int
                            return 972;
                            break;
                          }
                          case 0x09:
                          {
                            // ENCODING.FCVTPU_32H_float2int
                            return 982;
                            break;
                          }
                          case 0x10:
                          {
                            // ENCODING.FCVTMS_32H_float2int
                            return 931;
                            break;
                          }
                          case 0x11:
                          {
                            // ENCODING.FCVTMU_32H_float2int
                            return 941;
                            break;
                          }
                          case 0x18:
                          {
                            // ENCODING.FCVTZS_32H_float2int
                            return 1002;
                            break;
                          }
                          case 0x19:
                          {
                            // ENCODING.FCVTZU_32H_float2int
                            return 1020;
                            break;
                          }
                          default: break;
                        }
                        break;
                      }
                      case 0x20:
                      {
                        // the following switch contains 4 case.
                        switch (a & 0x18)
                        {
                          case 0x00:
                          {
                            // ENCODING.FCMP_H_floatcmp
                            return 885;
                            break;
                          }
                          case 0x08:
                          {
                            // ENCODING.FCMP_HZ_floatcmp
                            return 886;
                            break;
                          }
                          case 0x10:
                          {
                            // ENCODING.FCMPE_H_floatcmp
                            return 891;
                            break;
                          }
                          case 0x18:
                          {
                            // ENCODING.FCMPE_HZ_floatcmp
                            return 892;
                            break;
                          }
                          default: break;
                        }
                        break;
                      }
                      case 0x40:
                      {
                        // the following switch contains 7 case.
                        switch (c & 0x07)
                        {
                          case 0x00:
                          {
                            // ENCODING.FMOV_H_floatdp1
                            return 1102;
                            break;
                          }
                          case 0x01:
                          {
                            // ENCODING.FNEG_H_floatdp1
                            return 1140;
                            break;
                          }
                          case 0x02:
                          {
                            // ENCODING.FCVT_SH_floatdp1
                            return 900;
                            break;
                          }
                          case 0x04:
                          {
                            // ENCODING.FRINTN_H_floatdp1
                            return 1191;
                            break;
                          }
                          case 0x05:
                          {
                            // ENCODING.FRINTM_H_floatdp1
                            return 1186;
                            break;
                          }
                          case 0x06:
                          {
                            // ENCODING.FRINTA_H_floatdp1
                            return 1176;
                            break;
                          }
                          case 0x07:
                          {
                            // ENCODING.FRINTX_H_floatdp1
                            return 1201;
                            break;
                          }
                          default: break;
                        }
                        break;
                      }
                      case 0xc0:
                      {
                        // the following switch contains 6 case.
                        switch (c & 0x07)
                        {
                          case 0x00:
                          {
                            // ENCODING.FABS_H_floatdp1
                            return 823;
                            break;
                          }
                          case 0x01:
                          {
                            // ENCODING.FSQRT_H_floatdp1
                            return 1219;
                            break;
                          }
                          case 0x02:
                          {
                            // ENCODING.FCVT_DH_floatdp1
                            return 901;
                            break;
                          }
                          case 0x04:
                          {
                            // ENCODING.FRINTP_H_floatdp1
                            return 1196;
                            break;
                          }
                          case 0x05:
                          {
                            // ENCODING.FRINTZ_H_floatdp1
                            return 1206;
                            break;
                          }
                          case 0x07:
                          {
                            // ENCODING.FRINTI_H_floatdp1
                            return 1181;
                            break;
                          }
                          default: break;
                        }
                        break;
                      }
                      default: break;
                    }
                  }
                  break;
                }
                case 0x04:
                {
                  if (a & 0x10)
                  {
                    // ENCODING.FCCMPE_H_floatccmp
                    return 847;
                  }
                  else
                  {
                    // ENCODING.FCCMP_H_floatccmp
                    return 844;
                  }
                  break;
                }
                case 0x08:
                {
                  // the following switch contains 9 case.
                  switch (b & 0xf0)
                  {
                    case 0x00:
                    {
                      // ENCODING.FMUL_H_floatdp2
                      return 1127;
                      break;
                    }
                    case 0x10:
                    {
                      // ENCODING.FDIV_H_floatdp2
                      return 1028;
                      break;
                    }
                    case 0x20:
                    {
                      // ENCODING.FADD_H_floatdp2
                      return 836;
                      break;
                    }
                    case 0x30:
                    {
                      // ENCODING.FSUB_H_floatdp2
                      return 1224;
                      break;
                    }
                    case 0x40:
                    {
                      // ENCODING.FMAX_H_floatdp2
                      return 1037;
                      break;
                    }
                    case 0x50:
                    {
                      // ENCODING.FMIN_H_floatdp2
                      return 1059;
                      break;
                    }
                    case 0x60:
                    {
                      // ENCODING.FMAXNM_H_floatdp2
                      return 1042;
                      break;
                    }
                    case 0x70:
                    {
                      // ENCODING.FMINNM_H_floatdp2
                      return 1064;
                      break;
                    }
                    case 0x80:
                    {
                      // ENCODING.FNMUL_H_floatdp2
                      return 1149;
                      break;
                    }
                    default: break;
                  }
                  break;
                }
                case 0x0c:
                {
                  // ENCODING.FCSEL_H_floatsel
                  return 897;
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
        case 0x03:
        {
          if (b & 0x80)
          {
            // the following switch contains 6 case.
            switch (c & 0xe0)
            {
              case 0x00:
              {
                // ENCODING.FMSUB_S_floatdp3
                return 1119;
                break;
              }
              case 0x20:
              {
                // ENCODING.FNMSUB_S_floatdp3
                return 1147;
                break;
              }
              case 0x40:
              {
                // ENCODING.FMSUB_D_floatdp3
                return 1120;
                break;
              }
              case 0x60:
              {
                // ENCODING.FNMSUB_D_floatdp3
                return 1148;
                break;
              }
              case 0xc0:
              {
                // ENCODING.FMSUB_H_floatdp3
                return 1118;
                break;
              }
              case 0xe0:
              {
                // ENCODING.FNMSUB_H_floatdp3
                return 1146;
                break;
              }
              default: break;
            }
          }
          else
          {
            // the following switch contains 6 case.
            switch (c & 0xe0)
            {
              case 0x00:
              {
                // ENCODING.FMADD_S_floatdp3
                return 1033;
                break;
              }
              case 0x20:
              {
                // ENCODING.FNMADD_S_floatdp3
                return 1144;
                break;
              }
              case 0x40:
              {
                // ENCODING.FMADD_D_floatdp3
                return 1034;
                break;
              }
              case 0x60:
              {
                // ENCODING.FNMADD_D_floatdp3
                return 1145;
                break;
              }
              case 0xc0:
              {
                // ENCODING.FMADD_H_floatdp3
                return 1032;
                break;
              }
              case 0xe0:
              {
                // ENCODING.FNMADD_H_floatdp3
                return 1143;
                break;
              }
              default: break;
            }
          }
          break;
        }
        case 0x20:
        {
          if (b & 0x04)
          {
            if (b & 0x08)
            {
              // the following switch contains 4 case.
              switch (c & 0xc0)
              {
                case 0x00:
                {
                  // ENCODING.STR_B_ldst_immpre
                  return 1618;
                  break;
                }
                case 0x40:
                {
                  // ENCODING.LDR_B_ldst_immpre
                  return 1327;
                  break;
                }
                case 0x80:
                {
                  // ENCODING.STR_Q_ldst_immpre
                  return 1622;
                  break;
                }
                case 0xc0:
                {
                  // ENCODING.LDR_Q_ldst_immpre
                  return 1331;
                  break;
                }
                default: break;
              }
            }
            else
            {
              // the following switch contains 4 case.
              switch (c & 0xc0)
              {
                case 0x00:
                {
                  // ENCODING.STR_B_ldst_immpost
                  return 1613;
                  break;
                }
                case 0x40:
                {
                  // ENCODING.LDR_B_ldst_immpost
                  return 1322;
                  break;
                }
                case 0x80:
                {
                  // ENCODING.STR_Q_ldst_immpost
                  return 1617;
                  break;
                }
                case 0xc0:
                {
                  // ENCODING.LDR_Q_ldst_immpost
                  return 1326;
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
              switch (c & 0xc0)
              {
                case 0x00:
                {
                  // conflicts:
                  // ENCODING.STR_B_ldst_regoff    : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xxxxxxxxxxxxxxxxxxxxx
                  // ENCODING.STR_BL_ldst_regoff   : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xxxxx011xxxxxxxxxxxxx
                  // option!=0b011
                  if ((opcode & 0x0000e000) != 0x00006000)
                  {
                    // ENCODING.STR_B_ldst_regoff
                    return 1628;
                  }
                  else
                  {
                    // ENCODING.STR_BL_ldst_regoff
                    return 1629;
                  }
                  break;
                }
                case 0x40:
                {
                  // conflicts:
                  // ENCODING.LDR_B_ldst_regoff    : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xxxxxxxxxxxxxxxxxxxxx
                  // ENCODING.LDR_BL_ldst_regoff   : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1xxxxx011xxxxxxxxxxxxx
                  // option!=0b011
                  if ((opcode & 0x0000e000) != 0x00006000)
                  {
                    // ENCODING.LDR_B_ldst_regoff
                    return 1340;
                  }
                  else
                  {
                    // ENCODING.LDR_BL_ldst_regoff
                    return 1341;
                  }
                  break;
                }
                case 0x80:
                {
                  // ENCODING.STR_Q_ldst_regoff
                  return 1633;
                  break;
                }
                case 0xc0:
                {
                  // ENCODING.LDR_Q_ldst_regoff
                  return 1345;
                  break;
                }
                default: break;
              }
            }
            else
            {
              // the following switch contains 4 case.
              switch (c & 0xc0)
              {
                case 0x00:
                {
                  // ENCODING.STUR_B_ldst_unscaled
                  return 1634;
                  break;
                }
                case 0x40:
                {
                  // ENCODING.LDUR_B_ldst_unscaled
                  return 1346;
                  break;
                }
                case 0x80:
                {
                  // ENCODING.STUR_Q_ldst_unscaled
                  return 1638;
                  break;
                }
                case 0xc0:
                {
                  // ENCODING.LDUR_Q_ldst_unscaled
                  return 1350;
                  break;
                }
                default: break;
              }
            }
          }
          break;
        }
        case 0x21:
        {
          // the following switch contains 4 case.
          switch (c & 0xc0)
          {
            case 0x00:
            {
              // ENCODING.STR_B_ldst_pos
              return 1623;
              break;
            }
            case 0x40:
            {
              // ENCODING.LDR_B_ldst_pos
              return 1332;
              break;
            }
            case 0x80:
            {
              // ENCODING.STR_Q_ldst_pos
              return 1627;
              break;
            }
            case 0xc0:
            {
              // ENCODING.LDR_Q_ldst_pos
              return 1336;
              break;
            }
            default: break;
          }
          break;
        }
        case 0x40:
        {
          // ENCODING.LDR_D_loadlit
          return 1338;
          break;
        }
        case 0x42:
        {
          if (b & 0x04)
          {
            if (b & 0x08)
            {
              if (b & 0x10)
              {
                if (b & 0x20)
                {
                  if (b & 0x40)
                  {
                    if (c & 0x80)
                    {
                      // ENCODING.FRSQRTS_asisdsame_only
                      return 1214;
                    }
                    else
                    {
                      // ENCODING.FRECPS_asisdsame_only
                      return 1157;
                    }
                  }
                  else
                  {
                    if (c & 0x20)
                    {
                      // ENCODING.CMGE_asisdsame_only
                      return 792;
                    }
                    else
                    {
                      if (c & 0x80)
                      {
                        // ENCODING.FRSQRTS_asisdsamefp16_only
                        return 1213;
                      }
                      else
                      {
                        // ENCODING.FRECPS_asisdsamefp16_only
                        return 1156;
                      }
                    }
                  }
                }
                else
                {
                  if (b & 0x40)
                  {
                    if (b & 0x80)
                    {
                      // ENCODING.FMULX_asisdsame_only
                      return 1135;
                    }
                    else
                    {
                      // ENCODING.SQRSHL_asisdsame_only
                      return 1492;
                    }
                  }
                  else
                  {
                    // ENCODING.FMULX_asisdsamefp16_only
                    return 1134;
                  }
                }
              }
              else
              {
                // the following switch contains 4 case.
                switch (b & 0xe0)
                {
                  case 0x00:
                  {
                    // ENCODING.SQADD_asisdsame_only
                    return 1460;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.SQSUB_asisdsame_only
                    return 1508;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.SQSHL_asisdsame_only
                    return 1500;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.CMTST_asisdsame_only
                    return 808;
                    break;
                  }
                  default: break;
                }
              }
            }
            else
            {
              if (b & 0x10)
              {
                // the following switch contains 3 case.
                switch ((b & 0xe0) - 32)
                {
                  case 0x00:
                  {
                    // ENCODING.CMGT_asisdsame_only
                    return 796;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.SRSHL_asisdsame_only
                    return 1517;
                    break;
                  }
                  case 0x80:
                  {
                    // ENCODING.SQDMULH_asisdsame_only
                    return 1472;
                    break;
                  }
                  default: break;
                }
              }
              else
              {
                if (b & 0x20)
                {
                  if (b & 0x40)
                  {
                    // ENCODING.FCMEQ_asisdsame_only
                    return 851;
                  }
                  else
                  {
                    // ENCODING.FCMEQ_asisdsamefp16_only
                    return 850;
                  }
                }
                else
                {
                  if (b & 0x40)
                  {
                    // ENCODING.SSHL_asisdsame_only
                    return 1523;
                  }
                  else
                  {
                    if (b & 0x80)
                    {
                      // ENCODING.ADD_asisdsame_only
                      return 761;
                    }
                    else
                    {
                      // ENCODING.DUP_asisdone_only
                      return 811;
                    }
                  }
                }
              }
            }
          }
          else
          {
            if (b & 0x08)
            {
              if (b & 0x10)
              {
                if (b & 0x20)
                {
                  if (b & 0x40)
                  {
                    if (b & 0x80)
                    {
                      // the following switch contains 4 case.
                      switch ((c & 0x99) - 16)
                      {
                        case 0x00:
                        {
                          // ENCODING.FMAXP_asisdpair_only_H
                          return 1051;
                          break;
                        }
                        case 0x71:
                        {
                          // ENCODING.FRECPX_asisdmisc_R
                          return 1161;
                          break;
                        }
                        case 0x80:
                        {
                          // ENCODING.FMINP_asisdpair_only_H
                          return 1073;
                          break;
                        }
                        case 0x89:
                        {
                          // ENCODING.FRECPX_asisdmiscfp16_R
                          return 1160;
                          break;
                        }
                        default: break;
                      }
                    }
                    else
                    {
                      // ENCODING.SQABS_asisdmisc_R
                      return 1458;
                    }
                  }
                  else
                  {
                    if (b & 0x80)
                    {
                      // the following switch contains 4 case.
                      switch (c & 0x19)
                      {
                        case 0x00:
                        {
                          // ENCODING.ABS_asisdmisc_R
                          return 759;
                          break;
                        }
                        case 0x01:
                        {
                          if (c & 0x80)
                          {
                            // ENCODING.FCVTZS_asisdmisc_R
                            return 993;
                          }
                          else
                          {
                            // ENCODING.FCVTMS_asisdmisc_R
                            return 928;
                          }
                          break;
                        }
                        case 0x11:
                        {
                          // ENCODING.ADDP_asisdpair_only
                          return 764;
                          break;
                        }
                        case 0x19:
                        {
                          if (c & 0x80)
                          {
                            // ENCODING.FCVTZS_asisdmiscfp16_R
                            return 992;
                          }
                          else
                          {
                            // ENCODING.FCVTMS_asisdmiscfp16_R
                            return 927;
                          }
                          break;
                        }
                        default: break;
                      }
                    }
                    else
                    {
                      // ENCODING.SUQADD_asisdmisc_R
                      return 1643;
                    }
                  }
                }
                else
                {
                  if (b & 0x40)
                  {
                    // the following switch contains 7 case.
                    switch ((c & 0x99) - 1)
                    {
                      case 0x00:
                      {
                        // ENCODING.SCVTF_asisdmisc_R
                        return 1395;
                        break;
                      }
                      case 0x0f:
                      {
                        // ENCODING.FADDP_asisdpair_only_H
                        return 839;
                        break;
                      }
                      case 0x18:
                      {
                        // ENCODING.SCVTF_asisdmiscfp16_R
                        return 1394;
                        break;
                      }
                      case 0x7f:
                      {
                        // ENCODING.FCMEQ_asisdmisc_FZ
                        return 855;
                        break;
                      }
                      case 0x80:
                      {
                        // ENCODING.FRECPE_asisdmisc_R
                        return 1153;
                        break;
                      }
                      case 0x97:
                      {
                        // ENCODING.FCMEQ_asisdmiscfp16_FZ
                        return 854;
                        break;
                      }
                      case 0x98:
                      {
                        // ENCODING.FRECPE_asisdmiscfp16_R
                        return 1152;
                        break;
                      }
                      default: break;
                    }
                  }
                  else
                  {
                    if (b & 0x80)
                    {
                      // ENCODING.CMEQ_asisdmisc_Z
                      return 790;
                    }
                    else
                    {
                      // ENCODING.SHA1SU1_VV_cryptosha2
                      return 1417;
                    }
                  }
                }
              }
              else
              {
                if (b & 0x20)
                {
                  if (b & 0x40)
                  {
                    if (c & 0x08)
                    {
                      // ENCODING.FCMLT_asisdmiscfp16_FZ
                      return 881;
                    }
                    else
                    {
                      // ENCODING.FCMLT_asisdmisc_FZ
                      return 882;
                    }
                  }
                  else
                  {
                    if (b & 0x80)
                    {
                      // the following switch contains 3 case.
                      switch (c & 0x19)
                      {
                        case 0x00:
                        {
                          // ENCODING.CMLT_asisdmisc_Z
                          return 806;
                          break;
                        }
                        case 0x01:
                        {
                          if (c & 0x80)
                          {
                            // ENCODING.FCVTPS_asisdmisc_R
                            return 969;
                          }
                          else
                          {
                            // ENCODING.FCVTNS_asisdmisc_R
                            return 949;
                          }
                          break;
                        }
                        case 0x19:
                        {
                          if (c & 0x80)
                          {
                            // ENCODING.FCVTPS_asisdmiscfp16_R
                            return 968;
                          }
                          else
                          {
                            // ENCODING.FCVTNS_asisdmiscfp16_R
                            return 948;
                          }
                          break;
                        }
                        default: break;
                      }
                    }
                    else
                    {
                      // ENCODING.SHA256SU0_VV_cryptosha2
                      return 1420;
                    }
                  }
                }
                else
                {
                  if (b & 0x40)
                  {
                    if (b & 0x80)
                    {
                      // the following switch contains 6 case.
                      switch ((c & 0x99) - 1)
                      {
                        case 0x00:
                        {
                          // ENCODING.FCVTAS_asisdmisc_R
                          return 907;
                          break;
                        }
                        case 0x0f:
                        {
                          // ENCODING.FMAXNMP_asisdpair_only_H
                          return 1045;
                          break;
                        }
                        case 0x18:
                        {
                          // ENCODING.FCVTAS_asisdmiscfp16_R
                          return 906;
                          break;
                        }
                        case 0x7f:
                        {
                          // ENCODING.FCMGT_asisdmisc_FZ
                          return 871;
                          break;
                        }
                        case 0x8f:
                        {
                          // ENCODING.FMINNMP_asisdpair_only_H
                          return 1067;
                          break;
                        }
                        case 0x97:
                        {
                          // ENCODING.FCMGT_asisdmiscfp16_FZ
                          return 870;
                          break;
                        }
                        default: break;
                      }
                    }
                    else
                    {
                      // ENCODING.SQXTN_asisdmisc_N
                      return 1510;
                    }
                  }
                  else
                  {
                    if (b & 0x80)
                    {
                      // ENCODING.CMGT_asisdmisc_Z
                      return 798;
                    }
                    else
                    {
                      // ENCODING.SHA1H_SS_cryptosha2
                      return 1413;
                    }
                  }
                }
              }
            }
            else
            {
              if (b & 0x10)
              {
                if (b & 0x20)
                {
                  if (b & 0x80)
                  {
                    // ENCODING.SQDMLSL_asisddiff_only
                    return 1468;
                  }
                  else
                  {
                    // ENCODING.SHA1SU0_VVV_cryptosha3
                    return 1416;
                  }
                }
                else
                {
                  if (b & 0x40)
                  {
                    if (b & 0x80)
                    {
                      // ENCODING.SQDMULL_asisddiff_only
                      return 1476;
                    }
                    else
                    {
                      // ENCODING.SHA256H2_QQV_cryptosha3
                      return 1418;
                    }
                  }
                  else
                  {
                    if (b & 0x80)
                    {
                      // ENCODING.SQDMLAL_asisddiff_only
                      return 1464;
                    }
                    else
                    {
                      // ENCODING.SHA1P_QSV_cryptosha3
                      return 1415;
                    }
                  }
                }
              }
              else
              {
                // the following switch contains 4 case.
                switch (b & 0x60)
                {
                  case 0x00:
                  {
                    // ENCODING.SHA1C_QSV_cryptosha3
                    return 1412;
                    break;
                  }
                  case 0x20:
                  {
                    // ENCODING.SHA1M_QSV_cryptosha3
                    return 1414;
                    break;
                  }
                  case 0x40:
                  {
                    // ENCODING.SHA256H_QQV_cryptosha3
                    return 1419;
                    break;
                  }
                  case 0x60:
                  {
                    // ENCODING.SHA256SU1_VVV_cryptosha3
                    return 1421;
                    break;
                  }
                  default: break;
                }
              }
            }
          }
          break;
        }
        case 0x43:
        {
          // the following switch contains 17 case.
          switch ((b & 0xf4) - 4)
          {
            case 0x00:
            {
              // ENCODING.SSHR_asisdshf_R
              return 1526;
              break;
            }
            case 0x0c:
            {
              if (c & 0x80)
              {
                // ENCODING.FMLA_asisdelem_R_SD
                return 1080;
              }
              else
              {
                // ENCODING.FMLA_asisdelem_RH_H
                return 1079;
              }
              break;
            }
            case 0x10:
            {
              // ENCODING.SSRA_asisdshf_R
              return 1528;
              break;
            }
            case 0x20:
            {
              // ENCODING.SRSHR_asisdshf_R
              return 1519;
              break;
            }
            case 0x2c:
            {
              // ENCODING.SQDMLAL_asisdelem_L
              return 1462;
              break;
            }
            case 0x30:
            {
              // ENCODING.SRSRA_asisdshf_R
              return 1521;
              break;
            }
            case 0x4c:
            {
              if (c & 0x80)
              {
                // ENCODING.FMLS_asisdelem_R_SD
                return 1090;
              }
              else
              {
                // ENCODING.FMLS_asisdelem_RH_H
                return 1089;
              }
              break;
            }
            case 0x50:
            {
              // ENCODING.SHL_asisdshf_R
              return 1427;
              break;
            }
            case 0x6c:
            {
              // ENCODING.SQDMLSL_asisdelem_L
              return 1466;
              break;
            }
            case 0x70:
            {
              // ENCODING.SQSHL_asisdshf_R
              return 1498;
              break;
            }
            case 0x8c:
            {
              if (c & 0x80)
              {
                // ENCODING.FMUL_asisdelem_R_SD
                return 1122;
              }
              else
              {
                // ENCODING.FMUL_asisdelem_RH_H
                return 1121;
              }
              break;
            }
            case 0x90:
            {
              if (b & 0x08)
              {
                // ENCODING.SQRSHRN_asisdshf_N
                return 1494;
              }
              else
              {
                // ENCODING.SQSHRN_asisdshf_N
                return 1504;
              }
              break;
            }
            case 0xac:
            {
              // ENCODING.SQDMULL_asisdelem_L
              return 1474;
              break;
            }
            case 0xbc:
            {
              // ENCODING.SQDMULH_asisdelem_R
              return 1470;
              break;
            }
            case 0xcc:
            {
              // ENCODING.SQRDMULH_asisdelem_R
              return 1488;
              break;
            }
            case 0xe0:
            {
              // ENCODING.SCVTF_asisdshf_C
              return 1392;
              break;
            }
            case 0xf0:
            {
              // ENCODING.FCVTZS_asisdshf_C
              return 990;
              break;
            }
            default: break;
          }
          break;
        }
        case 0x60:
        {
          if (b & 0x04)
          {
            if (b & 0x08)
            {
              if (c & 0x40)
              {
                // ENCODING.LDR_H_ldst_immpre
                return 1328;
              }
              else
              {
                // ENCODING.STR_H_ldst_immpre
                return 1619;
              }
            }
            else
            {
              if (c & 0x40)
              {
                // ENCODING.LDR_H_ldst_immpost
                return 1323;
              }
              else
              {
                // ENCODING.STR_H_ldst_immpost
                return 1614;
              }
            }
          }
          else
          {
            if (b & 0x08)
            {
              if (c & 0x40)
              {
                // ENCODING.LDR_H_ldst_regoff
                return 1342;
              }
              else
              {
                // ENCODING.STR_H_ldst_regoff
                return 1630;
              }
            }
            else
            {
              if (c & 0x40)
              {
                // ENCODING.LDUR_H_ldst_unscaled
                return 1347;
              }
              else
              {
                // ENCODING.STUR_H_ldst_unscaled
                return 1635;
              }
            }
          }
          break;
        }
        case 0x61:
        {
          if (c & 0x40)
          {
            // ENCODING.LDR_H_ldst_pos
            return 1333;
          }
          else
          {
            // ENCODING.STR_H_ldst_pos
            return 1624;
          }
          break;
        }
        case 0x62:
        {
          if (b & 0x04)
          {
            if (b & 0x08)
            {
              if (b & 0x10)
              {
                if (b & 0x20)
                {
                  // ENCODING.CMHS_asisdsame_only
                  return 802;
                }
                else
                {
                  // ENCODING.UQRSHL_asisdsame_only
                  return 1703;
                }
              }
              else
              {
                if (b & 0x20)
                {
                  if (b & 0x40)
                  {
                    if (c & 0x80)
                    {
                      // ENCODING.FACGT_asisdsame_only
                      return 831;
                    }
                    else
                    {
                      // ENCODING.FACGE_asisdsame_only
                      return 827;
                    }
                  }
                  else
                  {
                    if (c & 0x20)
                    {
                      // ENCODING.UQSUB_asisdsame_only
                      return 1713;
                    }
                    else
                    {
                      if (c & 0x80)
                      {
                        // ENCODING.FACGT_asisdsamefp16_only
                        return 830;
                      }
                      else
                      {
                        // ENCODING.FACGE_asisdsamefp16_only
                        return 826;
                      }
                    }
                  }
                }
                else
                {
                  if (b & 0x40)
                  {
                    // ENCODING.UQSHL_asisdsame_only
                    return 1709;
                  }
                  else
                  {
                    if (b & 0x80)
                    {
                      if (c & 0x20)
                      {
                        // ENCODING.CMEQ_asisdsame_only
                        return 788;
                      }
                      else
                      {
                        // ENCODING.SQRDMLSH_asisdsame2_only
                        return 1486;
                      }
                    }
                    else
                    {
                      // ENCODING.UQADD_asisdsame_only
                      return 1701;
                    }
                  }
                }
              }
            }
            else
            {
              if (b & 0x10)
              {
                if (b & 0x20)
                {
                  if (b & 0x80)
                  {
                    // ENCODING.SQRDMULH_asisdsame_only
                    return 1490;
                  }
                  else
                  {
                    // ENCODING.CMHI_asisdsame_only
                    return 800;
                  }
                }
                else
                {
                  if (b & 0x40)
                  {
                    if (b & 0x80)
                    {
                      // ENCODING.FABD_asisdsame_only
                      return 818;
                    }
                    else
                    {
                      // ENCODING.URSHL_asisdsame_only
                      return 1719;
                    }
                  }
                  else
                  {
                    // ENCODING.FABD_asisdsamefp16_only
                    return 817;
                  }
                }
              }
              else
              {
                if (b & 0x20)
                {
                  if (b & 0x40)
                  {
                    if (c & 0x80)
                    {
                      // ENCODING.FCMGT_asisdsame_only
                      return 867;
                    }
                    else
                    {
                      // ENCODING.FCMGE_asisdsame_only
                      return 859;
                    }
                  }
                  else
                  {
                    if (c & 0x80)
                    {
                      // ENCODING.FCMGT_asisdsamefp16_only
                      return 866;
                    }
                    else
                    {
                      // ENCODING.FCMGE_asisdsamefp16_only
                      return 858;
                    }
                  }
                }
                else
                {
                  if (b & 0x40)
                  {
                    // ENCODING.USHL_asisdsame_only
                    return 1728;
                  }
                  else
                  {
                    if (c & 0x20)
                    {
                      // ENCODING.SUB_asisdsame_only
                      return 1639;
                    }
                    else
                    {
                      // ENCODING.SQRDMLAH_asisdsame2_only
                      return 1482;
                    }
                  }
                }
              }
            }
          }
          else
          {
            if (b & 0x10)
            {
              if (b & 0x20)
              {
                if (b & 0x40)
                {
                  if (b & 0x80)
                  {
                    if (c & 0x80)
                    {
                      // ENCODING.FMINP_asisdpair_only_SD
                      return 1074;
                    }
                    else
                    {
                      // ENCODING.FMAXP_asisdpair_only_SD
                      return 1052;
                    }
                  }
                  else
                  {
                    // ENCODING.SQNEG_asisdmisc_R
                    return 1478;
                  }
                }
                else
                {
                  if (b & 0x80)
                  {
                    // the following switch contains 3 case.
                    switch (c & 0x19)
                    {
                      case 0x00:
                      {
                        // ENCODING.NEG_asisdmisc_R
                        return 1366;
                        break;
                      }
                      case 0x01:
                      {
                        if (c & 0x80)
                        {
                          // ENCODING.FCVTZU_asisdmisc_R
                          return 1011;
                        }
                        else
                        {
                          // ENCODING.FCVTMU_asisdmisc_R
                          return 938;
                        }
                        break;
                      }
                      case 0x19:
                      {
                        if (c & 0x80)
                        {
                          // ENCODING.FCVTZU_asisdmiscfp16_R
                          return 1010;
                        }
                        else
                        {
                          // ENCODING.FCVTMU_asisdmiscfp16_R
                          return 937;
                        }
                        break;
                      }
                      default: break;
                    }
                  }
                  else
                  {
                    // ENCODING.USQADD_asisdmisc_R
                    return 1734;
                  }
                }
              }
              else
              {
                if (b & 0x40)
                {
                  // the following switch contains 7 case.
                  switch ((c & 0x99) - 1)
                  {
                    case 0x00:
                    {
                      // ENCODING.UCVTF_asisdmisc_R
                      return 1667;
                      break;
                    }
                    case 0x0f:
                    {
                      // ENCODING.FADDP_asisdpair_only_SD
                      return 840;
                      break;
                    }
                    case 0x18:
                    {
                      // ENCODING.UCVTF_asisdmiscfp16_R
                      return 1666;
                      break;
                    }
                    case 0x7f:
                    {
                      // ENCODING.FCMLE_asisdmisc_FZ
                      return 878;
                      break;
                    }
                    case 0x80:
                    {
                      // ENCODING.FRSQRTE_asisdmisc_R
                      return 1210;
                      break;
                    }
                    case 0x97:
                    {
                      // ENCODING.FCMLE_asisdmiscfp16_FZ
                      return 877;
                      break;
                    }
                    case 0x98:
                    {
                      // ENCODING.FRSQRTE_asisdmiscfp16_R
                      return 1209;
                      break;
                    }
                    default: break;
                  }
                }
                else
                {
                  // ENCODING.CMLE_asisdmisc_Z
                  return 804;
                }
              }
            }
            else
            {
              if (b & 0x20)
              {
                if (b & 0x40)
                {
                  // ENCODING.FCVTXN_asisdmisc_N
                  return 988;
                }
                else
                {
                  if (b & 0x80)
                  {
                    // the following switch contains 4 case.
                    switch (c & 0x98)
                    {
                      case 0x00:
                      {
                        // ENCODING.FCVTNU_asisdmisc_R
                        return 959;
                        break;
                      }
                      case 0x18:
                      {
                        // ENCODING.FCVTNU_asisdmiscfp16_R
                        return 958;
                        break;
                      }
                      case 0x80:
                      {
                        // ENCODING.FCVTPU_asisdmisc_R
                        return 979;
                        break;
                      }
                      case 0x98:
                      {
                        // ENCODING.FCVTPU_asisdmiscfp16_R
                        return 978;
                        break;
                      }
                      default: break;
                    }
                  }
                  else
                  {
                    // ENCODING.SQXTUN_asisdmisc_N
                    return 1512;
                  }
                }
              }
              else
              {
                if (b & 0x40)
                {
                  if (b & 0x80)
                  {
                    // the following switch contains 6 case.
                    switch ((c & 0x99) - 1)
                    {
                      case 0x00:
                      {
                        // ENCODING.FCVTAU_asisdmisc_R
                        return 917;
                        break;
                      }
                      case 0x0f:
                      {
                        // ENCODING.FMAXNMP_asisdpair_only_SD
                        return 1046;
                        break;
                      }
                      case 0x18:
                      {
                        // ENCODING.FCVTAU_asisdmiscfp16_R
                        return 916;
                        break;
                      }
                      case 0x7f:
                      {
                        // ENCODING.FCMGE_asisdmisc_FZ
                        return 863;
                        break;
                      }
                      case 0x8f:
                      {
                        // ENCODING.FMINNMP_asisdpair_only_SD
                        return 1068;
                        break;
                      }
                      case 0x97:
                      {
                        // ENCODING.FCMGE_asisdmiscfp16_FZ
                        return 862;
                        break;
                      }
                      default: break;
                    }
                  }
                  else
                  {
                    // ENCODING.UQXTN_asisdmisc_N
                    return 1715;
                  }
                }
                else
                {
                  // ENCODING.CMGE_asisdmisc_Z
                  return 794;
                }
              }
            }
          }
          break;
        }
        case 0x63:
        {
          // the following switch contains 15 case.
          switch ((b & 0xf4) - 4)
          {
            case 0x00:
            {
              // ENCODING.USHR_asisdshf_R
              return 1731;
              break;
            }
            case 0x10:
            {
              // ENCODING.USRA_asisdshf_R
              return 1736;
              break;
            }
            case 0x20:
            {
              // ENCODING.URSHR_asisdshf_R
              return 1721;
              break;
            }
            case 0x30:
            {
              // ENCODING.URSRA_asisdshf_R
              return 1724;
              break;
            }
            case 0x40:
            {
              // ENCODING.SRI_asisdshf_R
              return 1515;
              break;
            }
            case 0x50:
            {
              // ENCODING.SLI_asisdshf_R
              return 1432;
              break;
            }
            case 0x60:
            {
              // ENCODING.SQSHLU_asisdshf_R
              return 1502;
              break;
            }
            case 0x70:
            {
              // ENCODING.UQSHL_asisdshf_R
              return 1707;
              break;
            }
            case 0x80:
            {
              if (b & 0x08)
              {
                // ENCODING.SQRSHRUN_asisdshf_N
                return 1496;
              }
              else
              {
                // ENCODING.SQSHRUN_asisdshf_N
                return 1506;
              }
              break;
            }
            case 0x8c:
            {
              if (c & 0x80)
              {
                // ENCODING.FMULX_asisdelem_R_SD
                return 1131;
              }
              else
              {
                // ENCODING.FMULX_asisdelem_RH_H
                return 1130;
              }
              break;
            }
            case 0x90:
            {
              if (b & 0x08)
              {
                // ENCODING.UQRSHRN_asisdshf_N
                return 1705;
              }
              else
              {
                // ENCODING.UQSHRN_asisdshf_N
                return 1711;
              }
              break;
            }
            case 0xcc:
            {
              // ENCODING.SQRDMLAH_asisdelem_R
              return 1480;
              break;
            }
            case 0xe0:
            {
              // ENCODING.UCVTF_asisdshf_C
              return 1664;
              break;
            }
            case 0xec:
            {
              // ENCODING.SQRDMLSH_asisdelem_R
              return 1484;
              break;
            }
            case 0xf0:
            {
              // ENCODING.FCVTZU_asisdshf_C
              return 1008;
              break;
            }
            default: break;
          }
          break;
        }
        case 0x80:
        {
          // ENCODING.LDR_Q_loadlit
          return 1339;
          break;
        }
        case 0x82:
        {
          // the following switch contains 54 case.
          switch ((c & 0xff) - 2)
          {
            case 0x00:
            {
              // ENCODING.SCVTF_S64_float2fix
              return 1402;
              break;
            }
            case 0x01:
            {
              // ENCODING.UCVTF_S64_float2fix
              return 1674;
              break;
            }
            case 0x16:
            {
              // ENCODING.FCVTZS_64S_float2fix
              return 999;
              break;
            }
            case 0x17:
            {
              // ENCODING.FCVTZU_64S_float2fix
              return 1017;
              break;
            }
            case 0x1e:
            {
              // ENCODING.FCVTNS_64S_float2int
              return 955;
              break;
            }
            case 0x1f:
            {
              // ENCODING.FCVTNU_64S_float2int
              return 965;
              break;
            }
            case 0x20:
            {
              // ENCODING.SCVTF_S64_float2int
              return 1408;
              break;
            }
            case 0x21:
            {
              // ENCODING.UCVTF_S64_float2int
              return 1680;
              break;
            }
            case 0x22:
            {
              // ENCODING.FCVTAS_64S_float2int
              return 913;
              break;
            }
            case 0x23:
            {
              // ENCODING.FCVTAU_64S_float2int
              return 923;
              break;
            }
            case 0x26:
            {
              // ENCODING.FCVTPS_64S_float2int
              return 975;
              break;
            }
            case 0x27:
            {
              // ENCODING.FCVTPU_64S_float2int
              return 985;
              break;
            }
            case 0x2e:
            {
              // ENCODING.FCVTMS_64S_float2int
              return 934;
              break;
            }
            case 0x2f:
            {
              // ENCODING.FCVTMU_64S_float2int
              return 944;
              break;
            }
            case 0x36:
            {
              // ENCODING.FCVTZS_64S_float2int
              return 1005;
              break;
            }
            case 0x37:
            {
              // ENCODING.FCVTZU_64S_float2int
              return 1023;
              break;
            }
            case 0x40:
            {
              // ENCODING.SCVTF_D64_float2fix
              return 1403;
              break;
            }
            case 0x41:
            {
              // ENCODING.UCVTF_D64_float2fix
              return 1675;
              break;
            }
            case 0x56:
            {
              // ENCODING.FCVTZS_64D_float2fix
              return 1001;
              break;
            }
            case 0x57:
            {
              // ENCODING.FCVTZU_64D_float2fix
              return 1019;
              break;
            }
            case 0x5e:
            {
              // ENCODING.FCVTNS_64D_float2int
              return 957;
              break;
            }
            case 0x5f:
            {
              // ENCODING.FCVTNU_64D_float2int
              return 967;
              break;
            }
            case 0x60:
            {
              // ENCODING.SCVTF_D64_float2int
              return 1409;
              break;
            }
            case 0x61:
            {
              // ENCODING.UCVTF_D64_float2int
              return 1681;
              break;
            }
            case 0x62:
            {
              // ENCODING.FCVTAS_64D_float2int
              return 915;
              break;
            }
            case 0x63:
            {
              // ENCODING.FCVTAU_64D_float2int
              return 925;
              break;
            }
            case 0x64:
            {
              // ENCODING.FMOV_64D_float2int
              return 1113;
              break;
            }
            case 0x65:
            {
              // ENCODING.FMOV_D64_float2int
              return 1111;
              break;
            }
            case 0x66:
            {
              // ENCODING.FCVTPS_64D_float2int
              return 977;
              break;
            }
            case 0x67:
            {
              // ENCODING.FCVTPU_64D_float2int
              return 987;
              break;
            }
            case 0x6e:
            {
              // ENCODING.FCVTMS_64D_float2int
              return 936;
              break;
            }
            case 0x6f:
            {
              // ENCODING.FCVTMU_64D_float2int
              return 946;
              break;
            }
            case 0x76:
            {
              // ENCODING.FCVTZS_64D_float2int
              return 1007;
              break;
            }
            case 0x77:
            {
              // ENCODING.FCVTZU_64D_float2int
              return 1025;
              break;
            }
            case 0xac:
            {
              // ENCODING.FMOV_64VX_float2int
              return 1114;
              break;
            }
            case 0xad:
            {
              // ENCODING.FMOV_V64I_float2int
              return 1112;
              break;
            }
            case 0xc0:
            {
              // ENCODING.SCVTF_H64_float2fix
              return 1401;
              break;
            }
            case 0xc1:
            {
              // ENCODING.UCVTF_H64_float2fix
              return 1673;
              break;
            }
            case 0xd6:
            {
              // ENCODING.FCVTZS_64H_float2fix
              return 997;
              break;
            }
            case 0xd7:
            {
              // ENCODING.FCVTZU_64H_float2fix
              return 1015;
              break;
            }
            case 0xde:
            {
              // ENCODING.FCVTNS_64H_float2int
              return 953;
              break;
            }
            case 0xdf:
            {
              // ENCODING.FCVTNU_64H_float2int
              return 963;
              break;
            }
            case 0xe0:
            {
              // ENCODING.SCVTF_H64_float2int
              return 1407;
              break;
            }
            case 0xe1:
            {
              // ENCODING.UCVTF_H64_float2int
              return 1679;
              break;
            }
            case 0xe2:
            {
              // ENCODING.FCVTAS_64H_float2int
              return 911;
              break;
            }
            case 0xe3:
            {
              // ENCODING.FCVTAU_64H_float2int
              return 921;
              break;
            }
            case 0xe4:
            {
              // ENCODING.FMOV_64H_float2int
              return 1106;
              break;
            }
            case 0xe5:
            {
              // ENCODING.FMOV_H64_float2int
              return 1110;
              break;
            }
            case 0xe6:
            {
              // ENCODING.FCVTPS_64H_float2int
              return 973;
              break;
            }
            case 0xe7:
            {
              // ENCODING.FCVTPU_64H_float2int
              return 983;
              break;
            }
            case 0xee:
            {
              // ENCODING.FCVTMS_64H_float2int
              return 932;
              break;
            }
            case 0xef:
            {
              // ENCODING.FCVTMU_64H_float2int
              return 942;
              break;
            }
            case 0xf6:
            {
              // ENCODING.FCVTZS_64H_float2int
              return 1003;
              break;
            }
            case 0xf7:
            {
              // ENCODING.FCVTZU_64H_float2int
              return 1021;
              break;
            }
            default: break;
          }
          break;
        }
        case 0xa0:
        {
          if (b & 0x04)
          {
            if (b & 0x08)
            {
              if (c & 0x40)
              {
                // ENCODING.LDR_S_ldst_immpre
                return 1329;
              }
              else
              {
                // ENCODING.STR_S_ldst_immpre
                return 1620;
              }
            }
            else
            {
              if (c & 0x40)
              {
                // ENCODING.LDR_S_ldst_immpost
                return 1324;
              }
              else
              {
                // ENCODING.STR_S_ldst_immpost
                return 1615;
              }
            }
          }
          else
          {
            if (b & 0x08)
            {
              if (c & 0x40)
              {
                // ENCODING.LDR_S_ldst_regoff
                return 1343;
              }
              else
              {
                // ENCODING.STR_S_ldst_regoff
                return 1631;
              }
            }
            else
            {
              if (c & 0x40)
              {
                // ENCODING.LDUR_S_ldst_unscaled
                return 1348;
              }
              else
              {
                // ENCODING.STUR_S_ldst_unscaled
                return 1636;
              }
            }
          }
          break;
        }
        case 0xa1:
        {
          if (c & 0x40)
          {
            // ENCODING.LDR_S_ldst_pos
            return 1334;
          }
          else
          {
            // ENCODING.STR_S_ldst_pos
            return 1625;
          }
          break;
        }
        case 0xe0:
        {
          if (b & 0x04)
          {
            if (b & 0x08)
            {
              if (c & 0x40)
              {
                // ENCODING.LDR_D_ldst_immpre
                return 1330;
              }
              else
              {
                // ENCODING.STR_D_ldst_immpre
                return 1621;
              }
            }
            else
            {
              if (c & 0x40)
              {
                // ENCODING.LDR_D_ldst_immpost
                return 1325;
              }
              else
              {
                // ENCODING.STR_D_ldst_immpost
                return 1616;
              }
            }
          }
          else
          {
            if (b & 0x08)
            {
              if (c & 0x40)
              {
                // ENCODING.LDR_D_ldst_regoff
                return 1344;
              }
              else
              {
                // ENCODING.STR_D_ldst_regoff
                return 1632;
              }
            }
            else
            {
              if (c & 0x40)
              {
                // ENCODING.LDUR_D_ldst_unscaled
                return 1349;
              }
              else
              {
                // ENCODING.STUR_D_ldst_unscaled
                return 1637;
              }
            }
          }
          break;
        }
        case 0xe1:
        {
          if (c & 0x40)
          {
            // ENCODING.LDR_D_ldst_pos
            return 1335;
          }
          else
          {
            // ENCODING.STR_D_ldst_pos
            return 1626;
          }
          break;
        }
        default: break;
      }
      break;
    }
    default: break;
  }
  return 0;
};

