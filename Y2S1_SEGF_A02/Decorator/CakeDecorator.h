#pragma once

#include "Cake.h"

class CakeDecorator : public Cake
{
protected:
	Cake* m_Cake; 

public:
	CakeDecorator(Cake* baseCake) : m_Cake(baseCake) {}
};

