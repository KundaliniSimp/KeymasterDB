#pragma once
#ifndef IOMANAGER_H
#define IOMANAGER_H

#include "km_common.h"

class IOManager {

public:
	IOManager();

	std::string get_user_input();
	std::vector<std::string> parse_user_input(const std::string& user_input);
	bool should_flush_buffer(const std::string& current_part_buffer);
	void to_uppercase(std::string& input);
	void to_lowercase(std::string& input);


};

#endif