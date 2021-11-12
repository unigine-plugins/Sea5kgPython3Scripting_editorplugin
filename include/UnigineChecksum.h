/* Copyright (C) 2005-2021, UNIGINE. All rights reserved.
 *
 * This file is a part of the UNIGINE 2 SDK.
 *
 * Your use and / or redistribution of this software in source and / or
 * binary form, with or without modification, is subject to: (i) your
 * ongoing acceptance of and compliance with the terms and conditions of
 * the UNIGINE License Agreement; and (ii) your inclusion of this notice
 * in any version of this software that you use or redistribute.
 * A copy of the UNIGINE License Agreement is available by contacting
 * UNIGINE. at http://unigine.com/
 */


#include "UnigineBase.h"

namespace Unigine
{

class Checksum
{
public:
	/**
		* Calculates the 32-bit CRC checksum.
		*
		* @param data The input data pointer.
		* @param size The input data size in bytes.
		* @param big_endian Flag to control endianness of the result.
		* @return The 32-bit CRC checksum.
		*/
	static UNIGINE_API int CRC32(const void *data, int size, int big_endian = 1);

	/**
		* Calculates the 32-bit MD5 checksum.
		*
		* @param data The input data pointer.
		* @param size The input data size in bytes.
		* @param big_endian Flag to control endianness of the result.
		* @return The 32-bit MD5 checksum.
		*/
	static UNIGINE_API int MD5(const void *data, int size, int big_endian = 1);

	/**
		* Calculates the 128-bit MD5 checksum.
		*
		* @param value The 128-bit MD5 checksum (array of 4 unsigned int elements).
		* @param data The input data pointer.
		* @param size The input data size in bytes.
		* @param big_endian Flag to control endianness of the result.
		*/
	static UNIGINE_API void MD5(unsigned int *value, const void *data, int size, int big_endian = 1);

	/**
		* Calculates the 32-bit SHA1 checksum.
		*
		* @param data The input data pointer.
		* @param size The input data size in bytes.
		* @param big_endian Flag to control endianness of the result.
		* @return The 32-bit SHA1 checksum.
		*/
	static UNIGINE_API int SHA1(const void *data, int size, int big_endian = 1);

	/**
		* Calculates the 160-bit SHA1 checksum.
		*
		* @param value The 160-bit SHA1 checksum (array of 5 unsigned int elements).
		* @param data The input data pointer.
		* @param size The input data size in bytes.
		* @param big_endian Flag to control endianness of the result.
		*/
	static UNIGINE_API void SHA1(unsigned int *value, const void *data, int size, int big_endian = 1);

	/**
	* Calculates the 32-bit SHA256 checksum.
	*
	* @param data The input data pointer.
	* @param size The input data size in bytes.
	* @param big_endian Flag to control endianness of the result.
	* @return The 32-bit SHA256 checksum.
	*/
	static UNIGINE_API int SHA256(const void *data, int size, int big_endian = 1);

	/**
	* Calculates the 256-bit SHA256 checksum.
	*
	* @param value The 256-bit SHA256 checksum (array of 8 unsigned int elements).
	* @param data The input data pointer.
	* @param size The input data size in bytes.
	* @param big_endian Flag to control endianness of the result.
	*/
	static UNIGINE_API void SHA256(unsigned int *value, const void *data, int size, int big_endian = 1);
};
	
} /* namespace Unigine */
