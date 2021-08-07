#include <iostream>
#include "MergeMap.h"

int main(void)
{
	MergeMap mm;
	Factory f;
	Map* map = mm.CreateMap(f);

	std::cout
		<< "Created Map Via MergeMap.CreateMap(factory), \nTo String Result of Map:\n"
		<< map->toString() 
		<< std::endl;
}
