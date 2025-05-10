#pragma once
#ifndef QUERY_STATUS_H
#define QUERY_STATUS_H

enum QueryStatus {
	PENDING,
	IN_PROCESS,
	RESOLVED,
	REJECTED,
	SUSPENDED,
};

#endif 
