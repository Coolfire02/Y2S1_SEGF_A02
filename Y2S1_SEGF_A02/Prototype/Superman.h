#pragma once

#include <iostream>
#include "Action.h"

class Superman : public Action {
public:
	std::string Iam() {
		return "Superman";
	}
	Action* clone() {
		return new Superman();
	}
};
