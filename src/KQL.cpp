#include "KQL.h"
#include "Utilities.h"

QueryCore keytools::KQL::get_core_enum(const std::string& core_token) {

	auto tokens = KQL::core_tokens();
	long token_index = keytools::Utilities::index_of(tokens, core_token);

	QueryCore core_enum = (QueryCore)token_index;

	return core_enum;
}

bool keytools::KQL::is_core_token(const std::string& token) {

	auto tokens = keytools::KQL::core_tokens();
	long token_index = keytools::Utilities::index_of(tokens, token);

	return token_index > -1;
}

bool keytools::KQL::is_syntax_valid(const std::vector<std::string>& tokens) {

	return false;
}

const std::shared_ptr<std::array<std::string, 7>>& keytools::KQL::core_tokens() {

	static auto tokens = std::make_shared<std::array<std::string, 7>>
						(std::array<std::string, 7> 
						{ "INSERT", "GET", "UPDATE", "REMOVE", "EXIT" });
	
	return tokens;
}