#pragma once

#include "Map.h"
#include "Field.h"
#include "Factory.h"
#include <string>

class Factory
{
public:
	static Field* BuildField(int field_no)
	{
		return new Field(field_no);
	}

	static Obstacle* BuildObstacle(Obstacle::OBSTACLE_TYPE type, int stack)
	{
		return new Obstacle(type, stack);
	}

	static Map* BuildMap()
	{
		return new Map();
	}

};

