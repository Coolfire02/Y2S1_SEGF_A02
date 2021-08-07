#pragma once

#include <vector>
#include "Field.h"
#include "Obstacle.h"

class Map
{
public:
	Map();
	~Map();
	void AddField(Field*);
	void AddObstacle(Obstacle*);
	std::string toString() {
		std::string str;
		for (auto f : fields)
		{
			str += f->toString() + "\n";
		}
		for (auto o : obstacles)
		{
			str += o->toString() + "\n";
		}
		return str;
	}
	std::vector<Field*> getFields() { return fields; }
	std::vector<Obstacle*> getObstacles() { return obstacles; }
private:
	std::vector<Field*> fields;
	std::vector<Obstacle*> obstacles;
};

