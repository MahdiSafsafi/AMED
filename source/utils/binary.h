/*BEGIN_HEADER
*
* Copyright (C) 2020 Mahdi Safsafi.
*
* https://github.com/MahdiSafsafi/AMED
*
* See licence file 'LICENCE' for use and distribution rights.
*
*END_HEADER*/

/*============================================ binary utils. ============================================*/

static inline uint32_t replicate(int32_t bitvalue, int32_t count) 
{
	uint32_t result = (uint32_t)(-bitvalue);
	result >>= 32L - (uint32_t)count;
	return  result;
}

static inline uint64_t replicate64(int32_t bitvalue, int32_t count) 
{
	uint64_t result = (uint64_t)(-bitvalue);
	result >>= 64LL - (uint64_t)count;
	return  result;
}

static inline uint32_t ror(uint32_t value, uint32_t rotation)
{
	return ((value >> rotation) | (value << (32 - rotation)));
}

static inline uint64_t ror64(uint64_t value, int32_t rotation, int32_t datasize) 
{
	if (!rotation) return value;
	uint64_t result = (value >> rotation) | (value << (datasize - rotation));
	result &= replicate64(1, datasize);
	return result;
}

static inline int32_t sign_extend(uint32_t value, int i) 
{
	assert(i < 32);
	uint32_t result = value;
	if ((value >> i) & 0x1)
	{
		uint32_t mask = (uint32_t)(-1) << i;
		result |= mask;
	}
	return (int32_t)result;
}

static inline int64_t sign_extend64(uint64_t value, int i) 
{
	assert(i < 64);
	uint64_t result = value;
	if ((value >> i) & 0x1)
	{
		uint64_t mask = (uint64_t)(-1) << i;
		result |= mask;
	}
	return (int64_t)result;
}

static inline uint32_t get_masked_value(uint32_t value, uint32_t mask) {
	uint32_t result = 0;
	uint32_t pos = 0;
	value &= mask;
	while (mask && value) 
	{
		if (1 & mask) 	result |= (1 & value) << pos++;
		value >>= 1;
		mask >>= 1;
	}
	return result;
}

static inline int32_t get_hi_bit_pos(uint32_t value) 
{
	uint32_t result = 0;
	uint32_t i = 0;
	while (value) 
	{
		if (1 & value) result = i;
		i++;
		value >>= 1;
	}
	return result;
}

static inline int32_t get_bit_count(uint32_t value) 
{
	int32_t result = 0;
	while (value)
	{
		result += 1 & value;
		value >>= 1;
	}
	return result;
}

static inline int32_t get_bit_size(uint32_t value) 
{
	if (!value) return 1;
	int32_t result = 0;
	while (value) 
	{
		result++;
		value >>= 1;
	}
	return result;
}
