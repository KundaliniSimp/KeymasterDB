#pragma once
#ifndef ENUMERATIONS_H
#define ENUMERATIONS_H

enum QueryCore {
	INVALID = -1,
	INSERT,
	GET,
	UPDATE,
	REMOVE,
	EXIT,
	NONE,
};

enum QueryStatus {
	PENDING,
	IN_PROCESS,
	RESOLVED,
	REJECTED,
	SUSPENDED,
};

#endif