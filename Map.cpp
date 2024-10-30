#include "./Map.h"

using namespace mapNamespace;
using namespace std;

Map::Map(int blocksNumber) {

	blocks.reserve(blocksNumber);
	for (int i = 0; i < blocksNumber; i++)
	{
		Block currentBlock = Block(2, 4);
		currentBlock.pos.x = i * currentBlock.width + 1;
		currentBlock.pos.y = currentBlock.length + 1;
		blocks.push_back(currentBlock);
	}
}


void Map::printAll() {

	for (Block bl : blocks)
	{
		string x = to_string(bl.pos.x);
		string y = to_string(bl.pos.y);
		cout << "x:" + x + "y:" + y + "          ";
	}
}


