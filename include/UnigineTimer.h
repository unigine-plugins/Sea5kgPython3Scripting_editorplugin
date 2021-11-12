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


#pragma once

#include "UnigineBase.h"

/**
 * Unigine namespace.
 */
namespace Unigine {
	
	/**
	 * Unigine Timer.
	 */
	class Timer {
			
		public:
			
			/**
			 * Returns CPU clocks counter.
			 *
			 * @return CPU clocks counter.
			 */
			static UNIGINE_API long long getClock();
			
			/**
			 * Returns time in microseconds.
			 *
			 * @return Time in microseconds.
			 */
			static UNIGINE_API long long getTime();
			
			/**
			 * Returns time in seconds.
			 *
			 * @return Time in seconds.
			 */
			static UNIGINE_API long double getFloatTime();
			
			/**
			 * Suspends process execution in microseconds.
			 *
			 * @param usec Time in microseconds.
			 */
			UNIGINE_DEPRECATED(static UNIGINE_API void usleep(unsigned int usec));
			
			/**
			 * Microseconds to seconds.
			 */
			enum {
				CLOCKS_PER_SECOND = 1000000,
			};
	};
	
} /* namespace Unigine */
