#pragma once
#ifndef UTILITIES_H
#define UTILITIES_H

#include "km_common.h"

namespace keytools {

	class Utilities {

	public:
		template <std::size_t N>
		static long index_of(const std::shared_ptr<std::array<std::string, N>>& to_search, const std::string& target) {

			for (unsigned long i = 0; i < to_search->size(); ++i) {
				if ((*to_search)[i] == target) {
					return i;
				}
			}

			return -1;
		}
	};

}

#endif