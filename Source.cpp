#include <iostream>
#include <vector>
#include <conio.h>


struct Position
{
	float x;
	float y;
};

struct Block
{
	int length;
	int width;

	Block(int lengthIn, int widthIn):
		length(lengthIn),
		width(widthIn)
	{}

	Position pos;

};


class Map
{
public:
	Map(int blocksNumber) 
	{
		std::vector<Block> blocks;
		blocks.reserve(blocksNumber);

		for (int i = 0; i < blocksNumber; i++)
		{
			blocks.push_back(Block(2,4));
		}
	}


	void addBlock(Block b) 
	{

	}


private:

};


int main() 
{

	Map m1(4);



	return 0;
}