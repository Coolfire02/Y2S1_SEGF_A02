#pragma once

#include "CakeDecorator.h"

class ChocolateCake : public CakeDecorator
{
public:

	static const int DECORATOR_FEE = 10;

	ChocolateCake(Cake* baseCake) : CakeDecorator(baseCake) {}
	std::string Serve()
	{
		return m_Cake->Serve() + " decorated with Chocolate";
	}

	float price()
	{
		return m_Cake->price() + DECORATOR_FEE;
	}
};

