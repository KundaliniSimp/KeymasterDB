#pragma once
#ifndef QUERY_H
#define	QUERY_H

#include "km_common.h"
#include "IOManager.h"
#include "KQL.h"
#include "QueryResponse.h"

class Query {

public:
	Query(const std::shared_ptr<IOManager>& io_manager_handle);

	void resolve();

	QueryStatus status();
	QueryCore core();
	QueryResponse response();

private:
	QueryStatus m_status;
	QueryCore m_core;
	QueryResponse m_response;

	std::vector<std::string> m_tokens;
	std::shared_ptr<IOManager> m_io_manager_handle;

	void create();
	void execute();
	void respond();

	void read_initial_input();
	void set_core(const std::string& core_token);


};

#endif
