#pragma once

#include <iostream>
#include "Action.h"

class Batman : public Action {
public:
	std::string Iam() {
		return "Batman";
	}
	Action* clone() {
		return new Batman();
	}
};
