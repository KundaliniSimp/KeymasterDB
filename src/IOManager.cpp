#include "IOManager.h"

IOManager::IOManager() {}

std::string IOManager::get_user_input() {

	std::string user_input = "";

	std::getline(std::cin, user_input);

	return user_input;
}

std::vector<std::string> IOManager::parse_user_input(const std::string& user_input) {

	std::vector<std::string> parsed_input;
	std::string current_part_buffer;

	for (unsigned long i = 0; i < user_input.length(); ++i) {

		bool is_space = isspace(user_input[i]);

		if (is_space && current_part_buffer.length() > 0) {
			parsed_input.push_back(current_part_buffer);
			current_part_buffer = "";
		}
		else if (!is_space) {
			current_part_buffer += user_input[i];
		}
	}

	if (should_flush_buffer(current_part_buffer)) {
		parsed_input.push_back(current_part_buffer);
	}

	return parsed_input;
}

bool IOManager::should_flush_buffer(const std::string& current_part_buffer) {

	return current_part_buffer.length() > 0;
}

void IOManager::to_uppercase(std::string& input) {

	for (unsigned long i = 0; i < input.length(); ++i) {
		input[i] = toupper(input[i]);
	}
}

void IOManager::to_lowercase(std::string& input) {

	for (unsigned long i = 0; i < input.length(); ++i) {
		input[i] = toupper(input[i]);
	}
}