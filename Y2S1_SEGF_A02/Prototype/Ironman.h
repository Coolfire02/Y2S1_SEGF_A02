#pragma once

#include <iostream>
#include "Action.h"

class Ironman : public Action {
public:
	std::string Iam() {
		return "Ironman";
	}
	Action* clone() {
		return new Ironman();
	}
};
