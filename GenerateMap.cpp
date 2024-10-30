#include "./GenerateMap.h"


vector<Block> GenerateMap::GenerateBlock()
{
	Map mainMap(4);
	mainMap.printAll();

	vector<Block> lines = mainMap.blocks;

	for (int i = 0; i < 4; i++)
	{
		line[i] = Vertex(Vector2f(lines[i].pos.x * 100, lines[i].pos.y * 100));
		line[i].color = Color::Red;
	}

	return lines;

}


