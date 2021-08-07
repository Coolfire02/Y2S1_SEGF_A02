#pragma once
#include "CakeDecorator.h"

class StrawberryCake : public CakeDecorator
{
public:

	static const int DECORATOR_FEE = 80;

	StrawberryCake(Cake* baseCake) : CakeDecorator(baseCake) {}
	std::string Serve()
	{
		return m_Cake->Serve() + " decorated with Strawberry";
	}

	float price()
	{
		return m_Cake->price() + DECORATOR_FEE;
	}
};
