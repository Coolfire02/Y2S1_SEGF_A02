#include "MergeMap.h"

Map* MergeMap::CreateMap(Factory& factory)
{
	Map* map = factory.BuildMap();
	Field* first_field = factory.BuildField(1);
	Field* second_field = factory.BuildField(2);
	Obstacle* obstacle = factory.BuildObstacle(Obstacle::OB_TEST, 10);

	map->AddField(first_field);
	map->AddField(second_field);
	map->AddObstacle(obstacle);

	return map;
}
