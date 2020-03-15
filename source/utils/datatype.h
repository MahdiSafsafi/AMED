/*BEGIN_HEADER
*
* Copyright (C) 2020 Mahdi Safsafi.
*
* https://github.com/MahdiSafsafi/AMED
*
* See licence file 'LICENCE' for use and distribution rights.
*
*END_HEADER*/


/*
	TODO: optimize me using table.
*/

static inline int16_t get_datatype_size(amed_datatype value)
{
	switch (value)
	{
	default: return 0;
	case AMED_DATATYPE_NONE: return 0;
	case AMED_DATATYPE_I8: return 8;
	case AMED_DATATYPE_I16: return 16;
	case AMED_DATATYPE_I32: return 32;
	case AMED_DATATYPE_I64: return 64;
	case AMED_DATATYPE_I128: return 128;
	case AMED_DATATYPE_I256: return 256;
	case AMED_DATATYPE_S8: return 8;
	case AMED_DATATYPE_S16: return 16;
	case AMED_DATATYPE_S32: return 32;
	case AMED_DATATYPE_S64: return 64;
	case AMED_DATATYPE_U8: return 8;
	case AMED_DATATYPE_U16: return 16;
	case AMED_DATATYPE_U32: return 32;
	case AMED_DATATYPE_U64: return 64;
	case AMED_DATATYPE_U128: return 128;
	case AMED_DATATYPE_U256: return 256;
	case AMED_DATATYPE_F16: return 16;
	case AMED_DATATYPE_BF16: return 16;
	case AMED_DATATYPE_F32: return 32;
	case AMED_DATATYPE_F64: return 64;
	case AMED_DATATYPE_F80: return 80;
	case AMED_DATATYPE_BCD80: return 80;
	case AMED_DATATYPE_P8: return 8;
	case AMED_DATATYPE_P64: return 64;
	}
}

static inline bool is_datatype_signed(uint8_t datatype)
{
	switch (datatype)
	{
	case AMED_DATATYPE_S8:
	case AMED_DATATYPE_S16:
	case AMED_DATATYPE_S32:
	case AMED_DATATYPE_S64:
	case AMED_DATATYPE_SX:
		return true;
	default:return false;
	}
}

static inline uint8_t get_normalized_datatype(uint8_t datatype, uint16_t size)
{
	switch (datatype)
	{
	case AMED_DATATYPE_SX:
		switch (size)
		{
		case 8: return AMED_DATATYPE_S8;
		case 16: return AMED_DATATYPE_S16;
		case 32: return AMED_DATATYPE_S32;
		case 64: return AMED_DATATYPE_S64;
		}
		break;
	case AMED_DATATYPE_NONE:
		switch (size)
		{
		case 8: return AMED_DATATYPE_I8;
		case 16: return AMED_DATATYPE_I16;
		case 32: return AMED_DATATYPE_I32;
		case 64: return AMED_DATATYPE_I64;
		}
		break;
	}
	return datatype;
}
