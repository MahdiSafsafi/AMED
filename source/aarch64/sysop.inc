static uint32_t SysOp(uint8_t op1, uint8_t CRn, uint8_t CRm, uint8_t op2)
{
    switch(op1)
    {
    default : break;
    case 0:
        switch(CRn)
        {
        default : break;
        case 7:
            switch(CRm)
            {
            default : break;
            case 1:
                switch(op2)
                {
                default : break;
                case 0:
                    // op1=0b000 CRn=0b0111 CRm=0b0001 op2=0b000
                    return Sys_IC; // IALLUIS
                }
                break;
            case 5:
                switch(op2)
                {
                default : break;
                case 0:
                    // op1=0b000 CRn=0b0111 CRm=0b0101 op2=0b000
                    return Sys_IC; // IALLU
                }
                break;
            case 6:
                switch(op2)
                {
                default : break;
                case 1:
                    // op1=0b000 CRn=0b0111 CRm=0b0110 op2=0b001
                    return Sys_DC; // IVAC
                case 2:
                    // op1=0b000 CRn=0b0111 CRm=0b0110 op2=0b010
                    return Sys_DC; // ISW
                case 3:
                    // op1=0b000 CRn=0b0111 CRm=0b0110 op2=0b011
                    return Sys_DC; // IGVAC
                case 4:
                    // op1=0b000 CRn=0b0111 CRm=0b0110 op2=0b100
                    return Sys_DC; // IGSW
                case 5:
                    // op1=0b000 CRn=0b0111 CRm=0b0110 op2=0b101
                    return Sys_DC; // IGDVAC
                case 6:
                    // op1=0b000 CRn=0b0111 CRm=0b0110 op2=0b110
                    return Sys_DC; // IGDSW
                }
                break;
            case 8:
                switch(op2)
                {
                default : break;
                case 0:
                    // op1=0b000 CRn=0b0111 CRm=0b1000 op2=0b000
                    return Sys_AT; // S1E1R
                case 1:
                    // op1=0b000 CRn=0b0111 CRm=0b1000 op2=0b001
                    return Sys_AT; // S1E1W
                case 2:
                    // op1=0b000 CRn=0b0111 CRm=0b1000 op2=0b010
                    return Sys_AT; // S1E0R
                case 3:
                    // op1=0b000 CRn=0b0111 CRm=0b1000 op2=0b011
                    return Sys_AT; // S1E0W
                }
                break;
            case 9:
                switch(op2)
                {
                default : break;
                case 0:
                    // op1=0b000 CRn=0b0111 CRm=0b1001 op2=0b000
                    return Sys_AT; // S1E1RP
                case 1:
                    // op1=0b000 CRn=0b0111 CRm=0b1001 op2=0b001
                    return Sys_AT; // S1E1WP
                }
                break;
            case 10:
                switch(op2)
                {
                default : break;
                case 2:
                    // op1=0b000 CRn=0b0111 CRm=0b1010 op2=0b010
                    return Sys_DC; // CSW
                case 4:
                    // op1=0b000 CRn=0b0111 CRm=0b1010 op2=0b100
                    return Sys_DC; // CGSW
                case 6:
                    // op1=0b000 CRn=0b0111 CRm=0b1010 op2=0b110
                    return Sys_DC; // CGDSW
                }
                break;
            case 14:
                switch(op2)
                {
                default : break;
                case 2:
                    // op1=0b000 CRn=0b0111 CRm=0b1110 op2=0b010
                    return Sys_DC; // CISW
                case 4:
                    // op1=0b000 CRn=0b0111 CRm=0b1110 op2=0b100
                    return Sys_DC; // CIGSW
                case 6:
                    // op1=0b000 CRn=0b0111 CRm=0b1110 op2=0b110
                    return Sys_DC; // CIGDSW
                }
                break;
            }
            break;
        case 8:
            switch(CRm)
            {
            default : break;
            case 1:
                switch(op2)
                {
                default : break;
                case 0:
                    // op1=0b000 CRn=0b1000 CRm=0b0001 op2=0b000
                    return Sys_TLBI; // VMALLE1OS
                case 1:
                    // op1=0b000 CRn=0b1000 CRm=0b0001 op2=0b001
                    return Sys_TLBI; // VAE1OS
                case 2:
                    // op1=0b000 CRn=0b1000 CRm=0b0001 op2=0b010
                    return Sys_TLBI; // ASIDE1OS
                case 3:
                    // op1=0b000 CRn=0b1000 CRm=0b0001 op2=0b011
                    return Sys_TLBI; // VAAE1OS
                case 5:
                    // op1=0b000 CRn=0b1000 CRm=0b0001 op2=0b101
                    return Sys_TLBI; // VALE1OS
                case 7:
                    // op1=0b000 CRn=0b1000 CRm=0b0001 op2=0b111
                    return Sys_TLBI; // VAALE1OS
                }
                break;
            case 2:
                switch(op2)
                {
                default : break;
                case 1:
                    // op1=0b000 CRn=0b1000 CRm=0b0010 op2=0b001
                    return Sys_TLBI; // RVAE1IS
                case 3:
                    // op1=0b000 CRn=0b1000 CRm=0b0010 op2=0b011
                    return Sys_TLBI; // RVAAE1IS
                case 5:
                    // op1=0b000 CRn=0b1000 CRm=0b0010 op2=0b101
                    return Sys_TLBI; // RVALE1IS
                case 7:
                    // op1=0b000 CRn=0b1000 CRm=0b0010 op2=0b111
                    return Sys_TLBI; // RVAALE1IS
                }
                break;
            case 3:
                switch(op2)
                {
                default : break;
                case 0:
                    // op1=0b000 CRn=0b1000 CRm=0b0011 op2=0b000
                    return Sys_TLBI; // VMALLE1IS
                case 1:
                    // op1=0b000 CRn=0b1000 CRm=0b0011 op2=0b001
                    return Sys_TLBI; // VAE1IS
                case 2:
                    // op1=0b000 CRn=0b1000 CRm=0b0011 op2=0b010
                    return Sys_TLBI; // ASIDE1IS
                case 3:
                    // op1=0b000 CRn=0b1000 CRm=0b0011 op2=0b011
                    return Sys_TLBI; // VAAE1IS
                case 5:
                    // op1=0b000 CRn=0b1000 CRm=0b0011 op2=0b101
                    return Sys_TLBI; // VALE1IS
                case 7:
                    // op1=0b000 CRn=0b1000 CRm=0b0011 op2=0b111
                    return Sys_TLBI; // VAALE1IS
                }
                break;
            case 5:
                switch(op2)
                {
                default : break;
                case 1:
                    // op1=0b000 CRn=0b1000 CRm=0b0101 op2=0b001
                    return Sys_TLBI; // RVAE1OS
                case 3:
                    // op1=0b000 CRn=0b1000 CRm=0b0101 op2=0b011
                    return Sys_TLBI; // RVAAE1OS
                case 5:
                    // op1=0b000 CRn=0b1000 CRm=0b0101 op2=0b101
                    return Sys_TLBI; // RVALE1OS
                case 7:
                    // op1=0b000 CRn=0b1000 CRm=0b0101 op2=0b111
                    return Sys_TLBI; // RVAALE1OS
                }
                break;
            case 6:
                switch(op2)
                {
                default : break;
                case 1:
                    // op1=0b000 CRn=0b1000 CRm=0b0110 op2=0b001
                    return Sys_TLBI; // RVAE1
                case 3:
                    // op1=0b000 CRn=0b1000 CRm=0b0110 op2=0b011
                    return Sys_TLBI; // RVAAE1
                case 5:
                    // op1=0b000 CRn=0b1000 CRm=0b0110 op2=0b101
                    return Sys_TLBI; // RVALE1
                case 7:
                    // op1=0b000 CRn=0b1000 CRm=0b0110 op2=0b111
                    return Sys_TLBI; // RVAALE1
                }
                break;
            case 7:
                switch(op2)
                {
                default : break;
                case 0:
                    // op1=0b000 CRn=0b1000 CRm=0b0111 op2=0b000
                    return Sys_TLBI; // VMALLE1
                case 1:
                    // op1=0b000 CRn=0b1000 CRm=0b0111 op2=0b001
                    return Sys_TLBI; // VAE1
                case 2:
                    // op1=0b000 CRn=0b1000 CRm=0b0111 op2=0b010
                    return Sys_TLBI; // ASIDE1
                case 3:
                    // op1=0b000 CRn=0b1000 CRm=0b0111 op2=0b011
                    return Sys_TLBI; // VAAE1
                case 5:
                    // op1=0b000 CRn=0b1000 CRm=0b0111 op2=0b101
                    return Sys_TLBI; // VALE1
                case 7:
                    // op1=0b000 CRn=0b1000 CRm=0b0111 op2=0b111
                    return Sys_TLBI; // VAALE1
                }
                break;
            }
            break;
        }
        break;
    case 3:
        switch(CRn)
        {
        default : break;
        case 7:
            switch(CRm)
            {
            default : break;
            case 4:
                switch(op2)
                {
                default : break;
                case 1:
                    // op1=0b011 CRn=0b0111 CRm=0b0100 op2=0b001
                    return Sys_DC; // ZVA
                case 3:
                    // op1=0b011 CRn=0b0111 CRm=0b0100 op2=0b011
                    return Sys_DC; // GVA
                case 4:
                    // op1=0b011 CRn=0b0111 CRm=0b0100 op2=0b100
                    return Sys_DC; // GZVA
                }
                break;
            case 5:
                switch(op2)
                {
                default : break;
                case 1:
                    // op1=0b011 CRn=0b0111 CRm=0b0101 op2=0b001
                    return Sys_IC; // IVAU
                }
                break;
            case 10:
                switch(op2)
                {
                default : break;
                case 1:
                    // op1=0b011 CRn=0b0111 CRm=0b1010 op2=0b001
                    return Sys_DC; // CVAC
                case 3:
                    // op1=0b011 CRn=0b0111 CRm=0b1010 op2=0b011
                    return Sys_DC; // CGVAC
                case 5:
                    // op1=0b011 CRn=0b0111 CRm=0b1010 op2=0b101
                    return Sys_DC; // CGDVAC
                }
                break;
            case 11:
                switch(op2)
                {
                default : break;
                case 1:
                    // op1=0b011 CRn=0b0111 CRm=0b1011 op2=0b001
                    return Sys_DC; // CVAU
                }
                break;
            case 12:
                switch(op2)
                {
                default : break;
                case 1:
                    // op1=0b011 CRn=0b0111 CRm=0b1100 op2=0b001
                    return Sys_DC; // CVAP
                case 3:
                    // op1=0b011 CRn=0b0111 CRm=0b1100 op2=0b011
                    return Sys_DC; // CGVAP
                case 5:
                    // op1=0b011 CRn=0b0111 CRm=0b1100 op2=0b101
                    return Sys_DC; // CGDVAP
                }
                break;
            case 13:
                switch(op2)
                {
                default : break;
                case 1:
                    // op1=0b011 CRn=0b0111 CRm=0b1101 op2=0b001
                    return Sys_DC; // CVADP
                case 3:
                    // op1=0b011 CRn=0b0111 CRm=0b1101 op2=0b011
                    return Sys_DC; // CGVADP
                case 5:
                    // op1=0b011 CRn=0b0111 CRm=0b1101 op2=0b101
                    return Sys_DC; // CGDVADP
                }
                break;
            case 14:
                switch(op2)
                {
                default : break;
                case 1:
                    // op1=0b011 CRn=0b0111 CRm=0b1110 op2=0b001
                    return Sys_DC; // CIVAC
                case 3:
                    // op1=0b011 CRn=0b0111 CRm=0b1110 op2=0b011
                    return Sys_DC; // CIGVAC
                case 5:
                    // op1=0b011 CRn=0b0111 CRm=0b1110 op2=0b101
                    return Sys_DC; // CIGDVAC
                }
                break;
            }
            break;
        }
        break;
    case 4:
        switch(CRn)
        {
        default : break;
        case 7:
            switch(CRm)
            {
            default : break;
            case 8:
                switch(op2)
                {
                default : break;
                case 0:
                    // op1=0b100 CRn=0b0111 CRm=0b1000 op2=0b000
                    return Sys_AT; // S1E2R
                case 1:
                    // op1=0b100 CRn=0b0111 CRm=0b1000 op2=0b001
                    return Sys_AT; // S1E2W
                case 4:
                    // op1=0b100 CRn=0b0111 CRm=0b1000 op2=0b100
                    return Sys_AT; // S12E1R
                case 5:
                    // op1=0b100 CRn=0b0111 CRm=0b1000 op2=0b101
                    return Sys_AT; // S12E1W
                case 6:
                    // op1=0b100 CRn=0b0111 CRm=0b1000 op2=0b110
                    return Sys_AT; // S12E0R
                case 7:
                    // op1=0b100 CRn=0b0111 CRm=0b1000 op2=0b111
                    return Sys_AT; // S12E0W
                }
                break;
            }
            break;
        case 8:
            switch(CRm)
            {
            default : break;
            case 0:
                switch(op2)
                {
                default : break;
                case 1:
                    // op1=0b100 CRn=0b1000 CRm=0b0000 op2=0b001
                    return Sys_TLBI; // IPAS2E1IS
                case 2:
                    // op1=0b100 CRn=0b1000 CRm=0b0000 op2=0b010
                    return Sys_TLBI; // RIPAS2E1IS
                case 5:
                    // op1=0b100 CRn=0b1000 CRm=0b0000 op2=0b101
                    return Sys_TLBI; // IPAS2LE1IS
                case 6:
                    // op1=0b100 CRn=0b1000 CRm=0b0000 op2=0b110
                    return Sys_TLBI; // RIPAS2LE1IS
                }
                break;
            case 1:
                switch(op2)
                {
                default : break;
                case 0:
                    // op1=0b100 CRn=0b1000 CRm=0b0001 op2=0b000
                    return Sys_TLBI; // ALLE2OS
                case 1:
                    // op1=0b100 CRn=0b1000 CRm=0b0001 op2=0b001
                    return Sys_TLBI; // VAE2OS
                case 4:
                    // op1=0b100 CRn=0b1000 CRm=0b0001 op2=0b100
                    return Sys_TLBI; // ALLE1OS
                case 5:
                    // op1=0b100 CRn=0b1000 CRm=0b0001 op2=0b101
                    return Sys_TLBI; // VALE2OS
                case 6:
                    // op1=0b100 CRn=0b1000 CRm=0b0001 op2=0b110
                    return Sys_TLBI; // VMALLS12E1OS
                }
                break;
            case 2:
                switch(op2)
                {
                default : break;
                case 1:
                    // op1=0b100 CRn=0b1000 CRm=0b0010 op2=0b001
                    return Sys_TLBI; // RVAE2IS
                case 5:
                    // op1=0b100 CRn=0b1000 CRm=0b0010 op2=0b101
                    return Sys_TLBI; // RVALE2IS
                }
                break;
            case 3:
                switch(op2)
                {
                default : break;
                case 0:
                    // op1=0b100 CRn=0b1000 CRm=0b0011 op2=0b000
                    return Sys_TLBI; // ALLE2IS
                case 1:
                    // op1=0b100 CRn=0b1000 CRm=0b0011 op2=0b001
                    return Sys_TLBI; // VAE2IS
                case 4:
                    // op1=0b100 CRn=0b1000 CRm=0b0011 op2=0b100
                    return Sys_TLBI; // ALLE1IS
                case 5:
                    // op1=0b100 CRn=0b1000 CRm=0b0011 op2=0b101
                    return Sys_TLBI; // VALE2IS
                case 6:
                    // op1=0b100 CRn=0b1000 CRm=0b0011 op2=0b110
                    return Sys_TLBI; // VMALLS12E1IS
                }
                break;
            case 4:
                switch(op2)
                {
                default : break;
                case 0:
                    // op1=0b100 CRn=0b1000 CRm=0b0100 op2=0b000
                    return Sys_TLBI; // IPAS2E1OS
                case 1:
                    // op1=0b100 CRn=0b1000 CRm=0b0100 op2=0b001
                    return Sys_TLBI; // IPAS2E1
                case 2:
                    // op1=0b100 CRn=0b1000 CRm=0b0100 op2=0b010
                    return Sys_TLBI; // RIPAS2E1
                case 3:
                    // op1=0b100 CRn=0b1000 CRm=0b0100 op2=0b011
                    return Sys_TLBI; // RIPAS2E1OS
                case 4:
                    // op1=0b100 CRn=0b1000 CRm=0b0100 op2=0b100
                    return Sys_TLBI; // IPAS2LE1OS
                case 5:
                    // op1=0b100 CRn=0b1000 CRm=0b0100 op2=0b101
                    return Sys_TLBI; // IPAS2LE1
                case 6:
                    // op1=0b100 CRn=0b1000 CRm=0b0100 op2=0b110
                    return Sys_TLBI; // RIPAS2LE1
                case 7:
                    // op1=0b100 CRn=0b1000 CRm=0b0100 op2=0b111
                    return Sys_TLBI; // RIPAS2LE1OS
                }
                break;
            case 5:
                switch(op2)
                {
                default : break;
                case 1:
                    // op1=0b100 CRn=0b1000 CRm=0b0101 op2=0b001
                    return Sys_TLBI; // RVAE2OS
                case 5:
                    // op1=0b100 CRn=0b1000 CRm=0b0101 op2=0b101
                    return Sys_TLBI; // RVALE2OS
                }
                break;
            case 6:
                switch(op2)
                {
                default : break;
                case 1:
                    // op1=0b100 CRn=0b1000 CRm=0b0110 op2=0b001
                    return Sys_TLBI; // RVAE2
                case 5:
                    // op1=0b100 CRn=0b1000 CRm=0b0110 op2=0b101
                    return Sys_TLBI; // RVALE2
                }
                break;
            case 7:
                switch(op2)
                {
                default : break;
                case 0:
                    // op1=0b100 CRn=0b1000 CRm=0b0111 op2=0b000
                    return Sys_TLBI; // ALLE2
                case 1:
                    // op1=0b100 CRn=0b1000 CRm=0b0111 op2=0b001
                    return Sys_TLBI; // VAE2
                case 4:
                    // op1=0b100 CRn=0b1000 CRm=0b0111 op2=0b100
                    return Sys_TLBI; // ALLE1
                case 5:
                    // op1=0b100 CRn=0b1000 CRm=0b0111 op2=0b101
                    return Sys_TLBI; // VALE2
                case 6:
                    // op1=0b100 CRn=0b1000 CRm=0b0111 op2=0b110
                    return Sys_TLBI; // VMALLS12E1
                }
                break;
            }
            break;
        }
        break;
    case 6:
        switch(CRn)
        {
        default : break;
        case 7:
            switch(CRm)
            {
            default : break;
            case 8:
                switch(op2)
                {
                default : break;
                case 0:
                    // op1=0b110 CRn=0b0111 CRm=0b1000 op2=0b000
                    return Sys_AT; // S1E3R
                case 1:
                    // op1=0b110 CRn=0b0111 CRm=0b1000 op2=0b001
                    return Sys_AT; // S1E3W
                }
                break;
            }
            break;
        case 8:
            switch(CRm)
            {
            default : break;
            case 1:
                switch(op2)
                {
                default : break;
                case 0:
                    // op1=0b110 CRn=0b1000 CRm=0b0001 op2=0b000
                    return Sys_TLBI; // ALLE3OS
                case 1:
                    // op1=0b110 CRn=0b1000 CRm=0b0001 op2=0b001
                    return Sys_TLBI; // VAE3OS
                case 5:
                    // op1=0b110 CRn=0b1000 CRm=0b0001 op2=0b101
                    return Sys_TLBI; // VALE3OS
                }
                break;
            case 2:
                switch(op2)
                {
                default : break;
                case 1:
                    // op1=0b110 CRn=0b1000 CRm=0b0010 op2=0b001
                    return Sys_TLBI; // RVAE3IS
                case 5:
                    // op1=0b110 CRn=0b1000 CRm=0b0010 op2=0b101
                    return Sys_TLBI; // RVALE3IS
                }
                break;
            case 3:
                switch(op2)
                {
                default : break;
                case 0:
                    // op1=0b110 CRn=0b1000 CRm=0b0011 op2=0b000
                    return Sys_TLBI; // ALLE3IS
                case 1:
                    // op1=0b110 CRn=0b1000 CRm=0b0011 op2=0b001
                    return Sys_TLBI; // VAE3IS
                case 5:
                    // op1=0b110 CRn=0b1000 CRm=0b0011 op2=0b101
                    return Sys_TLBI; // VALE3IS
                }
                break;
            case 5:
                switch(op2)
                {
                default : break;
                case 1:
                    // op1=0b110 CRn=0b1000 CRm=0b0101 op2=0b001
                    return Sys_TLBI; // RVAE3OS
                case 5:
                    // op1=0b110 CRn=0b1000 CRm=0b0101 op2=0b101
                    return Sys_TLBI; // RVALE3OS
                }
                break;
            case 6:
                switch(op2)
                {
                default : break;
                case 1:
                    // op1=0b110 CRn=0b1000 CRm=0b0110 op2=0b001
                    return Sys_TLBI; // RVAE3
                case 5:
                    // op1=0b110 CRn=0b1000 CRm=0b0110 op2=0b101
                    return Sys_TLBI; // RVALE3
                }
                break;
            case 7:
                switch(op2)
                {
                default : break;
                case 0:
                    // op1=0b110 CRn=0b1000 CRm=0b0111 op2=0b000
                    return Sys_TLBI; // ALLE3
                case 1:
                    // op1=0b110 CRn=0b1000 CRm=0b0111 op2=0b001
                    return Sys_TLBI; // VAE3
                case 5:
                    // op1=0b110 CRn=0b1000 CRm=0b0111 op2=0b101
                    return Sys_TLBI; // VALE3
                }
                break;
            }
            break;
        }
        break;
    }
    /* not an alias. */    return Sys_SYS;}
