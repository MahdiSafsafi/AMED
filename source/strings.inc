static const char* amed_arm_arch_variant_map[] =
{
  /* AMED_ARM_ARCH_VARIANT_NONE */ "NONE",
  /* AMED_ARM_ARCH_VARIANT_ARMv8 */ "ARMv8",
  /* AMED_ARM_ARCH_VARIANT_ARMv8v1 */ "ARMv8v1",
  /* AMED_ARM_ARCH_VARIANT_ARMv8v2 */ "ARMv8v2",
  /* AMED_ARM_ARCH_VARIANT_ARMv8v3 */ "ARMv8v3",
  /* AMED_ARM_ARCH_VARIANT_ARMv8v4 */ "ARMv8v4",
  /* AMED_ARM_ARCH_VARIANT_ARMv8v5 */ "ARMv8v5",
  /* AMED_ARM_ARCH_VARIANT_ARMv8v6 */ "ARMv8v6",
};

const char* amed_arm_arch_variant_to_string(uint32_t value)
{
  assert(value >= AMED_ARM_ARCH_VARIANT_NONE && value <= AMED_ARM_ARCH_VARIANT_ARMv8v6);
  return amed_arm_arch_variant_map[value];
}

static const char* amed_isa_map[] =
{
  /* AMED_ISA_NONE */ "NONE",
  /* AMED_ISA_ARM */ "ARM",
  /* AMED_ISA_THUMB */ "THUMB",
};

const char* amed_isa_to_string(uint32_t value)
{
  assert(value >= AMED_ISA_NONE && value <= AMED_ISA_THUMB);
  return amed_isa_map[value];
}

static const char* amed_isaform_map[] =
{
  /* AMED_ISAFORM_NONE */ "NONE",
  /* AMED_ISAFORM_T16 */ "T16",
  /* AMED_ISAFORM_T32 */ "T32",
  /* AMED_ISAFORM_A32 */ "A32",
  /* AMED_ISAFORM_A64 */ "A64",
};

const char* amed_isaform_to_string(uint32_t value)
{
  assert(value >= AMED_ISAFORM_NONE && value <= AMED_ISAFORM_A64);
  return amed_isaform_map[value];
}

static const char* amed_arm_condition_map[] =
{
  /* AMED_ARM_CONDITION_NONE */ "NONE",
  /* AMED_ARM_CONDITION_EQ */ "EQ",
  /* AMED_ARM_CONDITION_NE */ "NE",
  /* AMED_ARM_CONDITION_CS */ "CS",
  /* AMED_ARM_CONDITION_CC */ "CC",
  /* AMED_ARM_CONDITION_MI */ "MI",
  /* AMED_ARM_CONDITION_PL */ "PL",
  /* AMED_ARM_CONDITION_VS */ "VS",
  /* AMED_ARM_CONDITION_VC */ "VC",
  /* AMED_ARM_CONDITION_HI */ "HI",
  /* AMED_ARM_CONDITION_LS */ "LS",
  /* AMED_ARM_CONDITION_GE */ "GE",
  /* AMED_ARM_CONDITION_LT */ "LT",
  /* AMED_ARM_CONDITION_GT */ "GT",
  /* AMED_ARM_CONDITION_LE */ "LE",
  /* AMED_ARM_CONDITION_AL */ "AL",
  /* AMED_ARM_CONDITION_NV */ "NV",
  /* AMED_ARM_CONDITION_HS */ "HS",
  /* AMED_ARM_CONDITION_LO */ "LO",
};

const char* amed_arm_condition_to_string(uint32_t value)
{
  assert(value >= AMED_ARM_CONDITION_NONE && value <= AMED_ARM_CONDITION_LO);
  return amed_arm_condition_map[value];
}

static const char* amed_shift_map[] =
{
  /* AMED_SHIFT_NONE */ "NONE",
  /* AMED_SHIFT_ASR */ "ASR",
  /* AMED_SHIFT_LSL */ "LSL",
  /* AMED_SHIFT_LSR */ "LSR",
  /* AMED_SHIFT_MSL */ "MSL",
  /* AMED_SHIFT_ROR */ "ROR",
  /* AMED_SHIFT_RRX */ "RRX",
  /* AMED_SHIFT_MUL */ "MUL",
  /* AMED_SHIFT_SXTB */ "SXTB",
  /* AMED_SHIFT_SXTH */ "SXTH",
  /* AMED_SHIFT_SXTW */ "SXTW",
  /* AMED_SHIFT_SXTX */ "SXTX",
  /* AMED_SHIFT_UXTB */ "UXTB",
  /* AMED_SHIFT_UXTH */ "UXTH",
  /* AMED_SHIFT_UXTW */ "UXTW",
  /* AMED_SHIFT_UXTX */ "UXTX",
};

const char* amed_shift_to_string(uint32_t value)
{
  assert(value >= AMED_SHIFT_NONE && value <= AMED_SHIFT_UXTX);
  return amed_shift_map[value];
}

static const char* amed_endian_map[] =
{
  /* AMED_ENDIAN_NONE */ "NONE",
  /* AMED_ENDIAN_LE */ "LE",
  /* AMED_ENDIAN_BE */ "BE",
};

const char* amed_endian_to_string(uint32_t value)
{
  assert(value >= AMED_ENDIAN_NONE && value <= AMED_ENDIAN_BE);
  return amed_endian_map[value];
}

static const char* amed_mem_access_map[] =
{
  /* AMED_MEM_ACCESS_NONE */ "NONE",
  /* AMED_MEM_ACCESS_ACQUIRE */ "ACQUIRE",
  /* AMED_MEM_ACCESS_RELEASE */ "RELEASE",
  /* AMED_MEM_ACCESS_LORELEASE */ "LORELEASE",
  /* AMED_MEM_ACCESS_LOACQUIRE */ "LOACQUIRE",
  /* AMED_MEM_ACCESS_ATOMIC */ "ATOMIC",
  /* AMED_MEM_ACCESS_ATOMIC_RELEASE */ "ATOMIC_RELEASE",
  /* AMED_MEM_ACCESS_ATOMIC_ACQUIRE */ "ATOMIC_ACQUIRE",
  /* AMED_MEM_ACCESS_UNPRIVILEGED */ "UNPRIVILEGED",
};

const char* amed_mem_access_to_string(uint32_t value)
{
  assert(value >= AMED_MEM_ACCESS_NONE && value <= AMED_MEM_ACCESS_UNPRIVILEGED);
  return amed_mem_access_map[value];
}

static const char* amed_datatype_map[] =
{
  /* AMED_DATATYPE_NONE */ "NONE",
  /* AMED_DATATYPE_F16 */ "F16",
  /* AMED_DATATYPE_BF16 */ "BF16",
  /* AMED_DATATYPE_F32 */ "F32",
  /* AMED_DATATYPE_F64 */ "F64",
  /* AMED_DATATYPE_F80 */ "F80",
  /* AMED_DATATYPE_BCD80 */ "BCD80",
  /* AMED_DATATYPE_I8 */ "I8",
  /* AMED_DATATYPE_I16 */ "I16",
  /* AMED_DATATYPE_I32 */ "I32",
  /* AMED_DATATYPE_I64 */ "I64",
  /* AMED_DATATYPE_I128 */ "I128",
  /* AMED_DATATYPE_I256 */ "I256",
  /* AMED_DATATYPE_S8 */ "S8",
  /* AMED_DATATYPE_S16 */ "S16",
  /* AMED_DATATYPE_S32 */ "S32",
  /* AMED_DATATYPE_S64 */ "S64",
  /* AMED_DATATYPE_U8 */ "U8",
  /* AMED_DATATYPE_U16 */ "U16",
  /* AMED_DATATYPE_U32 */ "U32",
  /* AMED_DATATYPE_U64 */ "U64",
  /* AMED_DATATYPE_U128 */ "U128",
  /* AMED_DATATYPE_U256 */ "U256",
  /* AMED_DATATYPE_P8 */ "P8",
  /* AMED_DATATYPE_P64 */ "P64",
  /* AMED_DATATYPE_IX */ "IX",
  /* AMED_DATATYPE_SX */ "SX",
  /* AMED_DATATYPE_UX */ "UX",
};

const char* amed_datatype_to_string(uint32_t value)
{
  assert(value >= AMED_DATATYPE_NONE && value <= AMED_DATATYPE_UX);
  return amed_datatype_map[value];
}

static const char* amed_arm_barrier_map[] =
{
  /* AMED_ARM_BARRIER_NONE */ "NONE",
  /* AMED_ARM_BARRIER_SY */ "SY",
  /* AMED_ARM_BARRIER_ST */ "ST",
  /* AMED_ARM_BARRIER_SYST */ "SYST",
  /* AMED_ARM_BARRIER_LD */ "LD",
  /* AMED_ARM_BARRIER_ISH */ "ISH",
  /* AMED_ARM_BARRIER_ISHST */ "ISHST",
  /* AMED_ARM_BARRIER_ISHLD */ "ISHLD",
  /* AMED_ARM_BARRIER_NSH */ "NSH",
  /* AMED_ARM_BARRIER_NSHST */ "NSHST",
  /* AMED_ARM_BARRIER_NSHLD */ "NSHLD",
  /* AMED_ARM_BARRIER_OSH */ "OSH",
  /* AMED_ARM_BARRIER_OSHST */ "OSHST",
  /* AMED_ARM_BARRIER_OSHLD */ "OSHLD",
};

const char* amed_arm_barrier_to_string(uint32_t value)
{
  assert(value >= AMED_ARM_BARRIER_NONE && value <= AMED_ARM_BARRIER_OSHLD);
  return amed_arm_barrier_map[value];
}

static const char* amed_arm_cspace_map[] =
{
  /* AMED_ARM_CSPACE_NONE */ "NONE",
  /* AMED_ARM_CSPACE_C0 */ "C0",
  /* AMED_ARM_CSPACE_C1 */ "C1",
  /* AMED_ARM_CSPACE_C2 */ "C2",
  /* AMED_ARM_CSPACE_C3 */ "C3",
  /* AMED_ARM_CSPACE_C4 */ "C4",
  /* AMED_ARM_CSPACE_C5 */ "C5",
  /* AMED_ARM_CSPACE_C6 */ "C6",
  /* AMED_ARM_CSPACE_C7 */ "C7",
  /* AMED_ARM_CSPACE_C8 */ "C8",
  /* AMED_ARM_CSPACE_C9 */ "C9",
  /* AMED_ARM_CSPACE_C10 */ "C10",
  /* AMED_ARM_CSPACE_C11 */ "C11",
  /* AMED_ARM_CSPACE_C12 */ "C12",
  /* AMED_ARM_CSPACE_C13 */ "C13",
  /* AMED_ARM_CSPACE_C14 */ "C14",
  /* AMED_ARM_CSPACE_C15 */ "C15",
};

const char* amed_arm_cspace_to_string(uint32_t value)
{
  assert(value >= AMED_ARM_CSPACE_NONE && value <= AMED_ARM_CSPACE_C15);
  return amed_arm_cspace_map[value];
}

static const char* amed_arm_pspace_map[] =
{
  /* AMED_ARM_PSPACE_NONE */ "NONE",
  /* AMED_ARM_PSPACE_P0 */ "P0",
  /* AMED_ARM_PSPACE_P1 */ "P1",
  /* AMED_ARM_PSPACE_P2 */ "P2",
  /* AMED_ARM_PSPACE_P3 */ "P3",
  /* AMED_ARM_PSPACE_P4 */ "P4",
  /* AMED_ARM_PSPACE_P5 */ "P5",
  /* AMED_ARM_PSPACE_P6 */ "P6",
  /* AMED_ARM_PSPACE_P7 */ "P7",
  /* AMED_ARM_PSPACE_P8 */ "P8",
  /* AMED_ARM_PSPACE_P9 */ "P9",
  /* AMED_ARM_PSPACE_P10 */ "P10",
  /* AMED_ARM_PSPACE_P11 */ "P11",
  /* AMED_ARM_PSPACE_P12 */ "P12",
  /* AMED_ARM_PSPACE_P13 */ "P13",
  /* AMED_ARM_PSPACE_P14 */ "P14",
  /* AMED_ARM_PSPACE_P15 */ "P15",
};

const char* amed_arm_pspace_to_string(uint32_t value)
{
  assert(value >= AMED_ARM_PSPACE_NONE && value <= AMED_ARM_PSPACE_P15);
  return amed_arm_pspace_map[value];
}

static const char* amed_category_map[] =
{
  /* AMED_CATEGORY_ADVSIMD */ "ADVSIMD",
  /* AMED_CATEGORY_APP */ "APP",
  /* AMED_CATEGORY_ARITHMETIC */ "ARITHMETIC",
  /* AMED_CATEGORY_ATOMIC */ "ATOMIC",
  /* AMED_CATEGORY_BINARY */ "BINARY",
  /* AMED_CATEGORY_BITFIELD */ "BITFIELD",
  /* AMED_CATEGORY_BITWISE */ "BITWISE",
  /* AMED_CATEGORY_BRANCH */ "BRANCH",
  /* AMED_CATEGORY_BROADCASTING */ "BROADCASTING",
  /* AMED_CATEGORY_CALL */ "CALL",
  /* AMED_CATEGORY_CARITHMETIC */ "CARITHMETIC",
  /* AMED_CATEGORY_CARRY */ "CARRY",
  /* AMED_CATEGORY_COMPARISON */ "COMPARISON",
  /* AMED_CATEGORY_COMPLEX */ "COMPLEX",
  /* AMED_CATEGORY_CONDITIONALLY */ "CONDITIONALLY",
  /* AMED_CATEGORY_CONTROL_FLOW */ "CONTROL_FLOW",
  /* AMED_CATEGORY_CONVERSION */ "CONVERSION",
  /* AMED_CATEGORY_CRYPTO */ "CRYPTO",
  /* AMED_CATEGORY_DATA_TRANSFER */ "DATA_TRANSFER",
  /* AMED_CATEGORY_DEBUG */ "DEBUG",
  /* AMED_CATEGORY_DECIMAL */ "DECIMAL",
  /* AMED_CATEGORY_DOT_PRODUCT */ "DOT_PRODUCT",
  /* AMED_CATEGORY_EMATH */ "EMATH",
  /* AMED_CATEGORY_EXCEPTION */ "EXCEPTION",
  /* AMED_CATEGORY_EXTRACTION */ "EXTRACTION",
  /* AMED_CATEGORY_FAR */ "FAR",
  /* AMED_CATEGORY_FLOAT */ "FLOAT",
  /* AMED_CATEGORY_FPSIMD */ "FPSIMD",
  /* AMED_CATEGORY_FUSED_OP */ "FUSED_OP",
  /* AMED_CATEGORY_GENERAL */ "GENERAL",
  /* AMED_CATEGORY_HALT */ "HALT",
  /* AMED_CATEGORY_HALVING */ "HALVING",
  /* AMED_CATEGORY_HINT */ "HINT",
  /* AMED_CATEGORY_INC_DEC */ "INC_DEC",
  /* AMED_CATEGORY_INSERTION */ "INSERTION",
  /* AMED_CATEGORY_LOAD */ "LOAD",
  /* AMED_CATEGORY_LOGICAL */ "LOGICAL",
  /* AMED_CATEGORY_LOGICAL_FP */ "LOGICAL_FP",
  /* AMED_CATEGORY_MASK */ "MASK",
  /* AMED_CATEGORY_MATH */ "MATH",
  /* AMED_CATEGORY_MIN_MAX */ "MIN_MAX",
  /* AMED_CATEGORY_MISC */ "MISC",
  /* AMED_CATEGORY_NEAR */ "NEAR",
  /* AMED_CATEGORY_NOP */ "NOP",
  /* AMED_CATEGORY_OS */ "OS",
  /* AMED_CATEGORY_PAC */ "PAC",
  /* AMED_CATEGORY_POLYNOMIAL */ "POLYNOMIAL",
  /* AMED_CATEGORY_PREFETCH */ "PREFETCH",
  /* AMED_CATEGORY_RANDOM */ "RANDOM",
  /* AMED_CATEGORY_RET */ "RET",
  /* AMED_CATEGORY_ROTATE_LEFT */ "ROTATE_LEFT",
  /* AMED_CATEGORY_ROTATE_RIGHT */ "ROTATE_RIGHT",
  /* AMED_CATEGORY_ROUNDING */ "ROUNDING",
  /* AMED_CATEGORY_SATURATING */ "SATURATING",
  /* AMED_CATEGORY_SELECTION */ "SELECTION",
  /* AMED_CATEGORY_SET */ "SET",
  /* AMED_CATEGORY_SETCC */ "SETCC",
  /* AMED_CATEGORY_SHIFT_LEFT */ "SHIFT_LEFT",
  /* AMED_CATEGORY_SHIFT_RIGHT */ "SHIFT_RIGHT",
  /* AMED_CATEGORY_SHORT */ "SHORT",
  /* AMED_CATEGORY_SIGNED */ "SIGNED",
  /* AMED_CATEGORY_SIGN_EXTEND */ "SIGN_EXTEND",
  /* AMED_CATEGORY_SIMD */ "SIMD",
  /* AMED_CATEGORY_STACK_TRANSFER */ "STACK_TRANSFER",
  /* AMED_CATEGORY_STAT */ "STAT",
  /* AMED_CATEGORY_STORE */ "STORE",
  /* AMED_CATEGORY_STRING */ "STRING",
  /* AMED_CATEGORY_SVE */ "SVE",
  /* AMED_CATEGORY_SWIZZLE */ "SWIZZLE",
  /* AMED_CATEGORY_SYSCALL */ "SYSCALL",
  /* AMED_CATEGORY_SYSRET */ "SYSRET",
  /* AMED_CATEGORY_SYSTEM */ "SYSTEM",
  /* AMED_CATEGORY_TABLE_LOOKUP */ "TABLE_LOOKUP",
  /* AMED_CATEGORY_TAGS */ "TAGS",
  /* AMED_CATEGORY_TRIGONOMETRIC */ "TRIGONOMETRIC",
  /* AMED_CATEGORY_UNCONDITIONALLY */ "UNCONDITIONALLY",
  /* AMED_CATEGORY_UNDEFINED */ "UNDEFINED",
  /* AMED_CATEGORY_UNSIGNED */ "UNSIGNED",
  /* AMED_CATEGORY_VAES */ "VAES",
};

const char* amed_category_to_string(uint32_t value)
{
  assert(value >= AMED_CATEGORY_ADVSIMD && value <= AMED_CATEGORY_VAES);
  return amed_category_map[value];
}

