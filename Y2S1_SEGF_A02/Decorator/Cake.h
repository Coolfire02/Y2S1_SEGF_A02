#pragma once

#include <string>

class Cake
{
public:
	virtual std::string Serve() = 0;
	virtual float price() = 0;
};

