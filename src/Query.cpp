#include "Query.h"

Query::Query(const std::shared_ptr<IOManager>& io_manager_handle) : m_io_manager_handle(io_manager_handle), 
																	m_core(QueryCore::NONE), 
																	m_status(QueryStatus::PENDING), 
																	m_response() {}

void Query::resolve() {

	this->create();
	this->execute();
	this->respond();
}

void Query::create() {

	this->read_initial_input();
	this->set_core(this->m_tokens.front());

}

void Query::execute() {}

void Query::respond() {}

void Query::read_initial_input() {

	std::string user_input = this->m_io_manager_handle->get_user_input();
	this->m_tokens = this->m_io_manager_handle->parse_user_input(user_input);
}

void Query::set_core(const std::string& core_token) {

	std::string core_token_upper = core_token;
	this->m_io_manager_handle->to_uppercase(core_token_upper);

	this->m_core = keytools::KQL::get_core_enum(core_token_upper);
}

QueryStatus Query::status() {

	return m_status;
}

QueryCore Query::core() {
	
	return m_core;
}

QueryResponse Query::response() {

	return m_response;
}