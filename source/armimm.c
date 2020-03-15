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
#include "amed.h"

static const double vfpimm_table[] = {
	/* 000 */ 2.0       , // a=0b0 bcd=0b000 efgh=0b0000
	/* 001 */ 2.125     , // a=0b0 bcd=0b000 efgh=0b0001
	/* 002 */ 2.25      , // a=0b0 bcd=0b000 efgh=0b0010
	/* 003 */ 2.375     , // a=0b0 bcd=0b000 efgh=0b0011
	/* 004 */ 2.5       , // a=0b0 bcd=0b000 efgh=0b0100
	/* 005 */ 2.625     , // a=0b0 bcd=0b000 efgh=0b0101
	/* 006 */ 2.75      , // a=0b0 bcd=0b000 efgh=0b0110
	/* 007 */ 2.875     , // a=0b0 bcd=0b000 efgh=0b0111
	/* 008 */ 3.0       , // a=0b0 bcd=0b000 efgh=0b1000
	/* 009 */ 3.125     , // a=0b0 bcd=0b000 efgh=0b1001
	/* 010 */ 3.25      , // a=0b0 bcd=0b000 efgh=0b1010
	/* 011 */ 3.375     , // a=0b0 bcd=0b000 efgh=0b1011
	/* 012 */ 3.5       , // a=0b0 bcd=0b000 efgh=0b1100
	/* 013 */ 3.625     , // a=0b0 bcd=0b000 efgh=0b1101
	/* 014 */ 3.75      , // a=0b0 bcd=0b000 efgh=0b1110
	/* 015 */ 3.875     , // a=0b0 bcd=0b000 efgh=0b1111
	/* 016 */ 4.0       , // a=0b0 bcd=0b001 efgh=0b0000
	/* 017 */ 4.25      , // a=0b0 bcd=0b001 efgh=0b0001
	/* 018 */ 4.5       , // a=0b0 bcd=0b001 efgh=0b0010
	/* 019 */ 4.75      , // a=0b0 bcd=0b001 efgh=0b0011
	/* 020 */ 5.0       , // a=0b0 bcd=0b001 efgh=0b0100
	/* 021 */ 5.25      , // a=0b0 bcd=0b001 efgh=0b0101
	/* 022 */ 5.5       , // a=0b0 bcd=0b001 efgh=0b0110
	/* 023 */ 5.75      , // a=0b0 bcd=0b001 efgh=0b0111
	/* 024 */ 6.0       , // a=0b0 bcd=0b001 efgh=0b1000
	/* 025 */ 6.25      , // a=0b0 bcd=0b001 efgh=0b1001
	/* 026 */ 6.5       , // a=0b0 bcd=0b001 efgh=0b1010
	/* 027 */ 6.75      , // a=0b0 bcd=0b001 efgh=0b1011
	/* 028 */ 7.0       , // a=0b0 bcd=0b001 efgh=0b1100
	/* 029 */ 7.25      , // a=0b0 bcd=0b001 efgh=0b1101
	/* 030 */ 7.5       , // a=0b0 bcd=0b001 efgh=0b1110
	/* 031 */ 7.75      , // a=0b0 bcd=0b001 efgh=0b1111
	/* 032 */ 8.0       , // a=0b0 bcd=0b010 efgh=0b0000
	/* 033 */ 8.5       , // a=0b0 bcd=0b010 efgh=0b0001
	/* 034 */ 9.0       , // a=0b0 bcd=0b010 efgh=0b0010
	/* 035 */ 9.5       , // a=0b0 bcd=0b010 efgh=0b0011
	/* 036 */ 10.0      , // a=0b0 bcd=0b010 efgh=0b0100
	/* 037 */ 10.5      , // a=0b0 bcd=0b010 efgh=0b0101
	/* 038 */ 11.0      , // a=0b0 bcd=0b010 efgh=0b0110
	/* 039 */ 11.5      , // a=0b0 bcd=0b010 efgh=0b0111
	/* 040 */ 12.0      , // a=0b0 bcd=0b010 efgh=0b1000
	/* 041 */ 12.5      , // a=0b0 bcd=0b010 efgh=0b1001
	/* 042 */ 13.0      , // a=0b0 bcd=0b010 efgh=0b1010
	/* 043 */ 13.5      , // a=0b0 bcd=0b010 efgh=0b1011
	/* 044 */ 14.0      , // a=0b0 bcd=0b010 efgh=0b1100
	/* 045 */ 14.5      , // a=0b0 bcd=0b010 efgh=0b1101
	/* 046 */ 15.0      , // a=0b0 bcd=0b010 efgh=0b1110
	/* 047 */ 15.5      , // a=0b0 bcd=0b010 efgh=0b1111
	/* 048 */ 16.0      , // a=0b0 bcd=0b011 efgh=0b0000
	/* 049 */ 17.0      , // a=0b0 bcd=0b011 efgh=0b0001
	/* 050 */ 18.0      , // a=0b0 bcd=0b011 efgh=0b0010
	/* 051 */ 19.0      , // a=0b0 bcd=0b011 efgh=0b0011
	/* 052 */ 20.0      , // a=0b0 bcd=0b011 efgh=0b0100
	/* 053 */ 21.0      , // a=0b0 bcd=0b011 efgh=0b0101
	/* 054 */ 22.0      , // a=0b0 bcd=0b011 efgh=0b0110
	/* 055 */ 23.0      , // a=0b0 bcd=0b011 efgh=0b0111
	/* 056 */ 24.0      , // a=0b0 bcd=0b011 efgh=0b1000
	/* 057 */ 25.0      , // a=0b0 bcd=0b011 efgh=0b1001
	/* 058 */ 26.0      , // a=0b0 bcd=0b011 efgh=0b1010
	/* 059 */ 27.0      , // a=0b0 bcd=0b011 efgh=0b1011
	/* 060 */ 28.0      , // a=0b0 bcd=0b011 efgh=0b1100
	/* 061 */ 29.0      , // a=0b0 bcd=0b011 efgh=0b1101
	/* 062 */ 30.0      , // a=0b0 bcd=0b011 efgh=0b1110
	/* 063 */ 31.0      , // a=0b0 bcd=0b011 efgh=0b1111
	/* 064 */ 0.125     , // a=0b0 bcd=0b100 efgh=0b0000
	/* 065 */ 0.1328125 , // a=0b0 bcd=0b100 efgh=0b0001
	/* 066 */ 0.140625  , // a=0b0 bcd=0b100 efgh=0b0010
	/* 067 */ 0.1484375 , // a=0b0 bcd=0b100 efgh=0b0011
	/* 068 */ 0.15625   , // a=0b0 bcd=0b100 efgh=0b0100
	/* 069 */ 0.1640625 , // a=0b0 bcd=0b100 efgh=0b0101
	/* 070 */ 0.171875  , // a=0b0 bcd=0b100 efgh=0b0110
	/* 071 */ 0.1796875 , // a=0b0 bcd=0b100 efgh=0b0111
	/* 072 */ 0.1875    , // a=0b0 bcd=0b100 efgh=0b1000
	/* 073 */ 0.1953125 , // a=0b0 bcd=0b100 efgh=0b1001
	/* 074 */ 0.203125  , // a=0b0 bcd=0b100 efgh=0b1010
	/* 075 */ 0.2109375 , // a=0b0 bcd=0b100 efgh=0b1011
	/* 076 */ 0.21875   , // a=0b0 bcd=0b100 efgh=0b1100
	/* 077 */ 0.2265625 , // a=0b0 bcd=0b100 efgh=0b1101
	/* 078 */ 0.234375  , // a=0b0 bcd=0b100 efgh=0b1110
	/* 079 */ 0.2421875 , // a=0b0 bcd=0b100 efgh=0b1111
	/* 080 */ 0.25      , // a=0b0 bcd=0b101 efgh=0b0000
	/* 081 */ 0.265625  , // a=0b0 bcd=0b101 efgh=0b0001
	/* 082 */ 0.28125   , // a=0b0 bcd=0b101 efgh=0b0010
	/* 083 */ 0.296875  , // a=0b0 bcd=0b101 efgh=0b0011
	/* 084 */ 0.3125    , // a=0b0 bcd=0b101 efgh=0b0100
	/* 085 */ 0.328125  , // a=0b0 bcd=0b101 efgh=0b0101
	/* 086 */ 0.34375   , // a=0b0 bcd=0b101 efgh=0b0110
	/* 087 */ 0.359375  , // a=0b0 bcd=0b101 efgh=0b0111
	/* 088 */ 0.375     , // a=0b0 bcd=0b101 efgh=0b1000
	/* 089 */ 0.390625  , // a=0b0 bcd=0b101 efgh=0b1001
	/* 090 */ 0.40625   , // a=0b0 bcd=0b101 efgh=0b1010
	/* 091 */ 0.421875  , // a=0b0 bcd=0b101 efgh=0b1011
	/* 092 */ 0.4375    , // a=0b0 bcd=0b101 efgh=0b1100
	/* 093 */ 0.453125  , // a=0b0 bcd=0b101 efgh=0b1101
	/* 094 */ 0.46875   , // a=0b0 bcd=0b101 efgh=0b1110
	/* 095 */ 0.484375  , // a=0b0 bcd=0b101 efgh=0b1111
	/* 096 */ 0.5       , // a=0b0 bcd=0b110 efgh=0b0000
	/* 097 */ 0.53125   , // a=0b0 bcd=0b110 efgh=0b0001
	/* 098 */ 0.5625    , // a=0b0 bcd=0b110 efgh=0b0010
	/* 099 */ 0.59375   , // a=0b0 bcd=0b110 efgh=0b0011
	/* 100 */ 0.625     , // a=0b0 bcd=0b110 efgh=0b0100
	/* 101 */ 0.65625   , // a=0b0 bcd=0b110 efgh=0b0101
	/* 102 */ 0.6875    , // a=0b0 bcd=0b110 efgh=0b0110
	/* 103 */ 0.71875   , // a=0b0 bcd=0b110 efgh=0b0111
	/* 104 */ 0.75      , // a=0b0 bcd=0b110 efgh=0b1000
	/* 105 */ 0.78125   , // a=0b0 bcd=0b110 efgh=0b1001
	/* 106 */ 0.8125    , // a=0b0 bcd=0b110 efgh=0b1010
	/* 107 */ 0.84375   , // a=0b0 bcd=0b110 efgh=0b1011
	/* 108 */ 0.875     , // a=0b0 bcd=0b110 efgh=0b1100
	/* 109 */ 0.90625   , // a=0b0 bcd=0b110 efgh=0b1101
	/* 110 */ 0.9375    , // a=0b0 bcd=0b110 efgh=0b1110
	/* 111 */ 0.96875   , // a=0b0 bcd=0b110 efgh=0b1111
	/* 112 */ 1.0       , // a=0b0 bcd=0b111 efgh=0b0000
	/* 113 */ 1.0625    , // a=0b0 bcd=0b111 efgh=0b0001
	/* 114 */ 1.125     , // a=0b0 bcd=0b111 efgh=0b0010
	/* 115 */ 1.1875    , // a=0b0 bcd=0b111 efgh=0b0011
	/* 116 */ 1.25      , // a=0b0 bcd=0b111 efgh=0b0100
	/* 117 */ 1.3125    , // a=0b0 bcd=0b111 efgh=0b0101
	/* 118 */ 1.375     , // a=0b0 bcd=0b111 efgh=0b0110
	/* 119 */ 1.4375    , // a=0b0 bcd=0b111 efgh=0b0111
	/* 120 */ 1.5       , // a=0b0 bcd=0b111 efgh=0b1000
	/* 121 */ 1.5625    , // a=0b0 bcd=0b111 efgh=0b1001
	/* 122 */ 1.625     , // a=0b0 bcd=0b111 efgh=0b1010
	/* 123 */ 1.6875    , // a=0b0 bcd=0b111 efgh=0b1011
	/* 124 */ 1.75      , // a=0b0 bcd=0b111 efgh=0b1100
	/* 125 */ 1.8125    , // a=0b0 bcd=0b111 efgh=0b1101
	/* 126 */ 1.875     , // a=0b0 bcd=0b111 efgh=0b1110
	/* 127 */ 1.9375    , // a=0b0 bcd=0b111 efgh=0b1111
	/* 128 */ -2.0      , // a=0b1 bcd=0b000 efgh=0b0000
	/* 129 */ -2.125    , // a=0b1 bcd=0b000 efgh=0b0001
	/* 130 */ -2.25     , // a=0b1 bcd=0b000 efgh=0b0010
	/* 131 */ -2.375    , // a=0b1 bcd=0b000 efgh=0b0011
	/* 132 */ -2.5      , // a=0b1 bcd=0b000 efgh=0b0100
	/* 133 */ -2.625    , // a=0b1 bcd=0b000 efgh=0b0101
	/* 134 */ -2.75     , // a=0b1 bcd=0b000 efgh=0b0110
	/* 135 */ -2.875    , // a=0b1 bcd=0b000 efgh=0b0111
	/* 136 */ -3.0      , // a=0b1 bcd=0b000 efgh=0b1000
	/* 137 */ -3.125    , // a=0b1 bcd=0b000 efgh=0b1001
	/* 138 */ -3.25     , // a=0b1 bcd=0b000 efgh=0b1010
	/* 139 */ -3.375    , // a=0b1 bcd=0b000 efgh=0b1011
	/* 140 */ -3.5      , // a=0b1 bcd=0b000 efgh=0b1100
	/* 141 */ -3.625    , // a=0b1 bcd=0b000 efgh=0b1101
	/* 142 */ -3.75     , // a=0b1 bcd=0b000 efgh=0b1110
	/* 143 */ -3.875    , // a=0b1 bcd=0b000 efgh=0b1111
	/* 144 */ -4.0      , // a=0b1 bcd=0b001 efgh=0b0000
	/* 145 */ -4.25     , // a=0b1 bcd=0b001 efgh=0b0001
	/* 146 */ -4.5      , // a=0b1 bcd=0b001 efgh=0b0010
	/* 147 */ -4.75     , // a=0b1 bcd=0b001 efgh=0b0011
	/* 148 */ -5.0      , // a=0b1 bcd=0b001 efgh=0b0100
	/* 149 */ -5.25     , // a=0b1 bcd=0b001 efgh=0b0101
	/* 150 */ -5.5      , // a=0b1 bcd=0b001 efgh=0b0110
	/* 151 */ -5.75     , // a=0b1 bcd=0b001 efgh=0b0111
	/* 152 */ -6.0      , // a=0b1 bcd=0b001 efgh=0b1000
	/* 153 */ -6.25     , // a=0b1 bcd=0b001 efgh=0b1001
	/* 154 */ -6.5      , // a=0b1 bcd=0b001 efgh=0b1010
	/* 155 */ -6.75     , // a=0b1 bcd=0b001 efgh=0b1011
	/* 156 */ -7.0      , // a=0b1 bcd=0b001 efgh=0b1100
	/* 157 */ -7.25     , // a=0b1 bcd=0b001 efgh=0b1101
	/* 158 */ -7.5      , // a=0b1 bcd=0b001 efgh=0b1110
	/* 159 */ -7.75     , // a=0b1 bcd=0b001 efgh=0b1111
	/* 160 */ -8.0      , // a=0b1 bcd=0b010 efgh=0b0000
	/* 161 */ -8.5      , // a=0b1 bcd=0b010 efgh=0b0001
	/* 162 */ -9.0      , // a=0b1 bcd=0b010 efgh=0b0010
	/* 163 */ -9.5      , // a=0b1 bcd=0b010 efgh=0b0011
	/* 164 */ -10.0     , // a=0b1 bcd=0b010 efgh=0b0100
	/* 165 */ -10.5     , // a=0b1 bcd=0b010 efgh=0b0101
	/* 166 */ -11.0     , // a=0b1 bcd=0b010 efgh=0b0110
	/* 167 */ -11.5     , // a=0b1 bcd=0b010 efgh=0b0111
	/* 168 */ -12.0     , // a=0b1 bcd=0b010 efgh=0b1000
	/* 169 */ -12.5     , // a=0b1 bcd=0b010 efgh=0b1001
	/* 170 */ -13.0     , // a=0b1 bcd=0b010 efgh=0b1010
	/* 171 */ -13.5     , // a=0b1 bcd=0b010 efgh=0b1011
	/* 172 */ -14.0     , // a=0b1 bcd=0b010 efgh=0b1100
	/* 173 */ -14.5     , // a=0b1 bcd=0b010 efgh=0b1101
	/* 174 */ -15.0     , // a=0b1 bcd=0b010 efgh=0b1110
	/* 175 */ -15.5     , // a=0b1 bcd=0b010 efgh=0b1111
	/* 176 */ -16.0     , // a=0b1 bcd=0b011 efgh=0b0000
	/* 177 */ -17.0     , // a=0b1 bcd=0b011 efgh=0b0001
	/* 178 */ -18.0     , // a=0b1 bcd=0b011 efgh=0b0010
	/* 179 */ -19.0     , // a=0b1 bcd=0b011 efgh=0b0011
	/* 180 */ -20.0     , // a=0b1 bcd=0b011 efgh=0b0100
	/* 181 */ -21.0     , // a=0b1 bcd=0b011 efgh=0b0101
	/* 182 */ -22.0     , // a=0b1 bcd=0b011 efgh=0b0110
	/* 183 */ -23.0     , // a=0b1 bcd=0b011 efgh=0b0111
	/* 184 */ -24.0     , // a=0b1 bcd=0b011 efgh=0b1000
	/* 185 */ -25.0     , // a=0b1 bcd=0b011 efgh=0b1001
	/* 186 */ -26.0     , // a=0b1 bcd=0b011 efgh=0b1010
	/* 187 */ -27.0     , // a=0b1 bcd=0b011 efgh=0b1011
	/* 188 */ -28.0     , // a=0b1 bcd=0b011 efgh=0b1100
	/* 189 */ -29.0     , // a=0b1 bcd=0b011 efgh=0b1101
	/* 190 */ -30.0     , // a=0b1 bcd=0b011 efgh=0b1110
	/* 191 */ -31.0     , // a=0b1 bcd=0b011 efgh=0b1111
	/* 192 */ -0.125    , // a=0b1 bcd=0b100 efgh=0b0000
	/* 193 */ -0.1328125, // a=0b1 bcd=0b100 efgh=0b0001
	/* 194 */ -0.140625 , // a=0b1 bcd=0b100 efgh=0b0010
	/* 195 */ -0.1484375, // a=0b1 bcd=0b100 efgh=0b0011
	/* 196 */ -0.15625  , // a=0b1 bcd=0b100 efgh=0b0100
	/* 197 */ -0.1640625, // a=0b1 bcd=0b100 efgh=0b0101
	/* 198 */ -0.171875 , // a=0b1 bcd=0b100 efgh=0b0110
	/* 199 */ -0.1796875, // a=0b1 bcd=0b100 efgh=0b0111
	/* 200 */ -0.1875   , // a=0b1 bcd=0b100 efgh=0b1000
	/* 201 */ -0.1953125, // a=0b1 bcd=0b100 efgh=0b1001
	/* 202 */ -0.203125 , // a=0b1 bcd=0b100 efgh=0b1010
	/* 203 */ -0.2109375, // a=0b1 bcd=0b100 efgh=0b1011
	/* 204 */ -0.21875  , // a=0b1 bcd=0b100 efgh=0b1100
	/* 205 */ -0.2265625, // a=0b1 bcd=0b100 efgh=0b1101
	/* 206 */ -0.234375 , // a=0b1 bcd=0b100 efgh=0b1110
	/* 207 */ -0.2421875, // a=0b1 bcd=0b100 efgh=0b1111
	/* 208 */ -0.25     , // a=0b1 bcd=0b101 efgh=0b0000
	/* 209 */ -0.265625 , // a=0b1 bcd=0b101 efgh=0b0001
	/* 210 */ -0.28125  , // a=0b1 bcd=0b101 efgh=0b0010
	/* 211 */ -0.296875 , // a=0b1 bcd=0b101 efgh=0b0011
	/* 212 */ -0.3125   , // a=0b1 bcd=0b101 efgh=0b0100
	/* 213 */ -0.328125 , // a=0b1 bcd=0b101 efgh=0b0101
	/* 214 */ -0.34375  , // a=0b1 bcd=0b101 efgh=0b0110
	/* 215 */ -0.359375 , // a=0b1 bcd=0b101 efgh=0b0111
	/* 216 */ -0.375    , // a=0b1 bcd=0b101 efgh=0b1000
	/* 217 */ -0.390625 , // a=0b1 bcd=0b101 efgh=0b1001
	/* 218 */ -0.40625  , // a=0b1 bcd=0b101 efgh=0b1010
	/* 219 */ -0.421875 , // a=0b1 bcd=0b101 efgh=0b1011
	/* 220 */ -0.4375   , // a=0b1 bcd=0b101 efgh=0b1100
	/* 221 */ -0.453125 , // a=0b1 bcd=0b101 efgh=0b1101
	/* 222 */ -0.46875  , // a=0b1 bcd=0b101 efgh=0b1110
	/* 223 */ -0.484375 , // a=0b1 bcd=0b101 efgh=0b1111
	/* 224 */ -0.5      , // a=0b1 bcd=0b110 efgh=0b0000
	/* 225 */ -0.53125  , // a=0b1 bcd=0b110 efgh=0b0001
	/* 226 */ -0.5625   , // a=0b1 bcd=0b110 efgh=0b0010
	/* 227 */ -0.59375  , // a=0b1 bcd=0b110 efgh=0b0011
	/* 228 */ -0.625    , // a=0b1 bcd=0b110 efgh=0b0100
	/* 229 */ -0.65625  , // a=0b1 bcd=0b110 efgh=0b0101
	/* 230 */ -0.6875   , // a=0b1 bcd=0b110 efgh=0b0110
	/* 231 */ -0.71875  , // a=0b1 bcd=0b110 efgh=0b0111
	/* 232 */ -0.75     , // a=0b1 bcd=0b110 efgh=0b1000
	/* 233 */ -0.78125  , // a=0b1 bcd=0b110 efgh=0b1001
	/* 234 */ -0.8125   , // a=0b1 bcd=0b110 efgh=0b1010
	/* 235 */ -0.84375  , // a=0b1 bcd=0b110 efgh=0b1011
	/* 236 */ -0.875    , // a=0b1 bcd=0b110 efgh=0b1100
	/* 237 */ -0.90625  , // a=0b1 bcd=0b110 efgh=0b1101
	/* 238 */ -0.9375   , // a=0b1 bcd=0b110 efgh=0b1110
	/* 239 */ -0.96875  , // a=0b1 bcd=0b110 efgh=0b1111
	/* 240 */ -1.0      , // a=0b1 bcd=0b111 efgh=0b0000
	/* 241 */ -1.0625   , // a=0b1 bcd=0b111 efgh=0b0001
	/* 242 */ -1.125    , // a=0b1 bcd=0b111 efgh=0b0010
	/* 243 */ -1.1875   , // a=0b1 bcd=0b111 efgh=0b0011
	/* 244 */ -1.25     , // a=0b1 bcd=0b111 efgh=0b0100
	/* 245 */ -1.3125   , // a=0b1 bcd=0b111 efgh=0b0101
	/* 246 */ -1.375    , // a=0b1 bcd=0b111 efgh=0b0110
	/* 247 */ -1.4375   , // a=0b1 bcd=0b111 efgh=0b0111
	/* 248 */ -1.5      , // a=0b1 bcd=0b111 efgh=0b1000
	/* 249 */ -1.5625   , // a=0b1 bcd=0b111 efgh=0b1001
	/* 250 */ -1.625    , // a=0b1 bcd=0b111 efgh=0b1010
	/* 251 */ -1.6875   , // a=0b1 bcd=0b111 efgh=0b1011
	/* 252 */ -1.75     , // a=0b1 bcd=0b111 efgh=0b1100
	/* 253 */ -1.8125   , // a=0b1 bcd=0b111 efgh=0b1101
	/* 254 */ -1.875    , // a=0b1 bcd=0b111 efgh=0b1110
	/* 255 */ -1.9375   , // a=0b1 bcd=0b111 efgh=0b1111
};

bool decode_vfp_imm(uint32_t encodedin, double* fpimm)
{
	bool ok = (encodedin >= 0) && (encodedin <= 0xff);
	const uint8_t byte = encodedin & 0xff;
	*fpimm = vfpimm_table[byte];
	return ok;
}

bool decode_advsimd_imm(uint32_t encodedin, uint64_t* imm, amed_datatype* outdt) 
{
	/* TODO: optimize me as vfp_expand_imm ! */
	uint32_t cmode = (encodedin & 0xf00) >> 8;
	uint32_t op = (encodedin & 0x1000) ? 1 : 0;
	unsigned char abcdefgh = encodedin & 0xff;
	const saturated[] = { 0x00, 0xff };
	amed_datatype dt = AMED_DATATYPE_NONE;
	bool ok = true;

	union {
		unsigned char bytes[8];
		uint64_t value;
		double fp64;
		float  fp32;
	}pattern = { 0 }; // <== all zero lanes are handled here !

	switch (cmode)
	{
	case 0:
	case 1:
		/* op=x cmode=000x pattern=[00000000 00000000 00000000 abcdefgh 00000000 00000000 00000000 abcdefgh] dt=I32 ; VBIC|VMOV|VMVN|VORR  */
		pattern.bytes[0] = abcdefgh;
		pattern.bytes[4] = abcdefgh;
		dt = AMED_DATATYPE_I32;
		break;
	case 2:
	case 3:
		/* op=x cmode=001x pattern=[00000000 00000000 abcdefgh 00000000 00000000 00000000 abcdefgh 00000000] dt=I32 ; VBIC|VMOV|VMVN|VORR abcdefgh!=0b00000000  */
		pattern.bytes[1] = abcdefgh;
		pattern.bytes[5] = abcdefgh;
		dt = AMED_DATATYPE_I32;
		break;
	case 4:
	case 5:
		/* op=x cmode=010x pattern=[00000000 abcdefgh 00000000 00000000 00000000 abcdefgh 00000000 00000000] dt=I32 ; VBIC|VMOV|VMVN|VORR abcdefgh!=0b00000000  */
		pattern.bytes[2] = abcdefgh;
		pattern.bytes[6] = abcdefgh;
		dt = AMED_DATATYPE_I32;
		break;
	case 6:
	case 7:
		/* op=x cmode=011x pattern=[abcdefgh 00000000 00000000 00000000 abcdefgh 00000000 00000000 00000000] dt=I32 ; VBIC|VMOV|VMVN|VORR abcdefgh!=0b00000000  */
		pattern.bytes[3] = abcdefgh;
		pattern.bytes[7] = abcdefgh;
		dt = AMED_DATATYPE_I32;
		break;
	case 8:
	case 9:
		/* op=x cmode=100x pattern=[00000000 abcdefgh 00000000 abcdefgh 00000000 abcdefgh 00000000 abcdefgh] dt=I16 ; VBIC|VMOV|VMVN|VORR  */
		pattern.bytes[0] = abcdefgh;
		pattern.bytes[2] = abcdefgh;
		pattern.bytes[4] = abcdefgh;
		pattern.bytes[6] = abcdefgh;
		dt = AMED_DATATYPE_I16;
		break;
	case 10:
	case 11:
		/* op=x cmode=101x pattern=[abcdefgh 00000000 abcdefgh 00000000 abcdefgh 00000000 abcdefgh 00000000] dt=I16 ; VBIC|VMOV|VMVN|VORR abcdefgh!=0b00000000  */
		pattern.bytes[1] = abcdefgh;
		pattern.bytes[3] = abcdefgh;
		pattern.bytes[5] = abcdefgh;
		pattern.bytes[7] = abcdefgh;
		dt = AMED_DATATYPE_I16;
		break;
	case 12:
		/* op=x cmode=1100 pattern=[00000000 00000000 abcdefgh 11111111 00000000 00000000 abcdefgh 11111111] dt=I32 ; abcdefgh!=0b00000000 VMOV|VMVN  */
		pattern.bytes[0] = 0xff;
		pattern.bytes[1] = abcdefgh;
		pattern.bytes[4] = 0xff;
		pattern.bytes[5] = abcdefgh;
		dt = AMED_DATATYPE_I32;
		break;
	case 13:
		/* op=x cmode=1101 pattern=[00000000 abcdefgh 11111111 11111111 00000000 abcdefgh 11111111 11111111] dt=I32 ; abcdefgh!=0b00000000 VMOV|VMVN  */
		pattern.bytes[0] = 0xff;
		pattern.bytes[1] = 0xff;
		pattern.bytes[2] = abcdefgh;
		pattern.bytes[4] = 0xff;
		pattern.bytes[5] = 0xff;
		pattern.bytes[6] = abcdefgh;
		dt = AMED_DATATYPE_I32;
		break;
	case 14:
		if (op) {
			/* op=1 cmode=1110 pattern=[aaaaaaaa bbbbbbbb cccccccc dddddddd eeeeeeee ffffffff gggggggg hhhhhhhh] dt=I64 ; VMOV  */
			pattern.bytes[7] = saturated[(abcdefgh & 0x80) >> 7]; // hhhhhhhh;
			pattern.bytes[6] = saturated[(abcdefgh & 0x40) >> 6]; // gggggggg;
			pattern.bytes[5] = saturated[(abcdefgh & 0x20) >> 5]; // ffffffff;
			pattern.bytes[4] = saturated[(abcdefgh & 0x10) >> 4]; // eeeeeeee;
			pattern.bytes[3] = saturated[(abcdefgh & 0x08) >> 3]; // dddddddd;
			pattern.bytes[2] = saturated[(abcdefgh & 0x04) >> 2]; // cccccccc;
			pattern.bytes[1] = saturated[(abcdefgh & 0x02) >> 1]; // bbbbbbbb;
			pattern.bytes[0] = saturated[(abcdefgh & 0x01) >> 0]; // aaaaaaaa;
			dt = AMED_DATATYPE_I64;
		}
		else {
			/* op=0 cmode=1110 pattern=[abcdefgh abcdefgh abcdefgh abcdefgh abcdefgh abcdefgh abcdefgh abcdefgh] dt=I8 ; VMOV  */
			pattern.bytes[0] = abcdefgh;
			pattern.bytes[1] = abcdefgh;
			pattern.bytes[2] = abcdefgh;
			pattern.bytes[3] = abcdefgh;
			pattern.bytes[4] = abcdefgh;
			pattern.bytes[5] = abcdefgh;
			pattern.bytes[6] = abcdefgh;
			pattern.bytes[7] = abcdefgh;
			dt = AMED_DATATYPE_I8;
		}
		break;
	case 15:
		if (op)
		{
			//if UsingAArch32() then ReservedEncoding();
			// imm64 = imm8<7>:NOT(imm8<6>) : Replicate(imm8<6>, 8) : imm8<5 : 0> : Zeros(48);
			// pattern=[aBbbbbbb bbcdefgh 00000000 00000000 00000000 00000000 00000000 00000000]
			uint8_t aBbbbbbb = (abcdefgh & 0x80) | (abcdefgh & 0x40 ? 0x3f : 0x40);
			uint8_t bbcdefgh = (abcdefgh & 0x3f) | (abcdefgh & 0x40 ? 0xc0 : 0x00);
			pattern.bytes[6] = bbcdefgh;
			pattern.bytes[7] = aBbbbbbb;
			dt = AMED_DATATYPE_F64;
		}
		else
		{
			/* op=0 cmode=1111 pattern=[aBbbbbbc defgh000 00000000 00000000 aBbbbbbc defgh000 00000000 00000000] dt=F32 ; VMOV B=NOT(b)  */

			// imm32 = imm8<7>:NOT(imm8<6>):Replicate(imm8<6>,5):imm8<5:0>:Zeros(19);
			// imm64 = Replicate(imm32, 2);

			// aBbbbbbc = a|Bbbbbb|c
			const uint8_t defgh000 = (abcdefgh & 0x1f) << 3;
			const uint8_t aBbbbbbc = (abcdefgh & 0x80) | (abcdefgh & 0x40 ? 0x3e : 0x40) | ((abcdefgh & 0x20) ? 1 : 0);

			pattern.bytes[2] = defgh000;
			pattern.bytes[3] = aBbbbbbc;
			pattern.bytes[6] = defgh000;
			pattern.bytes[7] = aBbbbbbc;
			dt = AMED_DATATYPE_F32;
		}
		break;
	}
	/* fix the immediate acording to the datatype */
	switch (dt)
	{
	case AMED_DATATYPE_I8:
		pattern.value &= 0xff;
		break;
	case AMED_DATATYPE_I16:
		pattern.value &= 0xffff;
		break;
	case AMED_DATATYPE_I32:
	case AMED_DATATYPE_F32:
		pattern.value &= 0xffffffff;
		break;
	case AMED_DATATYPE_I64:
		break;
	}
	*outdt = dt;
	*imm = pattern.value;
	return ok;
}

