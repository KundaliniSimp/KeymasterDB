#pragma once
#ifndef KQL_H
#define KQL_H

#include "km_common.h"

namespace KeyTools {

	class KQL {

	public:

		static QueryCore get_core_enum(const std::string& core_token);
		static bool is_core_token(const std::string& token);

		static const std::shared_ptr<std::array<std::string, 7>>& core_tokens();

	};
}

#endif