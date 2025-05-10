#pragma once
#ifndef KQL_H
#define KQL_H

#include "km_common.h"

namespace keytools {

	class KQL {

	public:

		static QueryCore get_core_enum(const std::string& core_token);
		static bool is_core_token(const std::string& token);
		static bool is_syntax_valid(const std::vector<std::string>& tokens);

		static const std::shared_ptr<std::array<std::string, 7>>& core_tokens();

	};
}

#endif