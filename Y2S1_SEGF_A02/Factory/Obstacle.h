#pragma once
#include <string>

class Obstacle
{
public:
	enum OBSTACLE_TYPE {
		OB_TEST,
		OB_NOU,
		OB_HIII,
		OB_COUNT
	};

private:
	const OBSTACLE_TYPE ob;
	int stack;

public:
	Obstacle(OBSTACLE_TYPE obType, int stack) : ob(obType), stack(stack) {};
	OBSTACLE_TYPE getObstacleType() { return ob; }
	int getStack() { return stack; }
	std::string toString() {
		std::string enumStr;
		switch (ob)
		{
		case OB_TEST: enumStr = "OB_TEST"; break;
		case OB_NOU: enumStr = "OB_NOU"; break;
		case OB_HIII: enumStr = "OB_HIII"; break;
		default: enumStr = "INVALID"; break;
		}

		return "ObjectType-Obstacle[ob: " + enumStr + ", stack: " + std::to_string(stack) + "]";
	}
};

