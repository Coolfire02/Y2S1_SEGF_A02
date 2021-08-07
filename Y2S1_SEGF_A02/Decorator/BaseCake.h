#pragma once

#include "Cake.h"

class BaseCake : public Cake
{
public:
	std::string Serve() { return "Cake served"; }
	float price() { return 12.50f; };
};

