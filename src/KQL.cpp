#include "KQL.h"
#include "Utilities.h"

QueryCore KeyTools::KQL::get_core_enum(const std::string& core_token) {

	auto tokens = KQL::core_tokens();
	long token_index = KeyTools::Utilities::index_of(tokens, core_token);

	QueryCore core_enum = (QueryCore)token_index;

	return core_enum;
}

bool KeyTools::KQL::is_core_token(const std::string& token) {

	auto tokens = KeyTools::KQL::core_tokens();
	long token_index = KeyTools::Utilities::index_of(tokens, token);

	return token_index > -1;
}

const std::shared_ptr<std::array<std::string, 7>>& KeyTools::KQL::core_tokens() {

	static auto tokens = std::make_shared<std::array<std::string, 7>>
						(std::array<std::string, 7> 
						{ "INSERT", "GET", "UPDATE", "REMOVE", "EXIT", "NONE" });
	
	return tokens;
}