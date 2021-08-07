#pragma once
#include <string>
class Action
{
public:
	virtual Action* clone() = 0;
	virtual std::string Iam() = 0;
};

