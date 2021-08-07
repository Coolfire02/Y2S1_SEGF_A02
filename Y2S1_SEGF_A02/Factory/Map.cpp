#include "Map.h"

void Map::AddField(Field* field)
{
	this->fields.push_back(field);
}

void Map::AddObstacle(Obstacle* obstacle)
{
	this->obstacles.push_back(obstacle);
}

Map::~Map()
{
	for (auto f : fields)
		delete f;
	for (auto o : obstacles)
		delete o;
}

Map::Map()
{

}
