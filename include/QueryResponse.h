#pragma once
#ifndef QUERY_RESULT_H
#define QUERY_RESULT_H

#include "km_common.h"

struct QueryResponse {
	
	std::string literal;
	WranglerCall internal_call;
	time_t time_created;
};

#endif