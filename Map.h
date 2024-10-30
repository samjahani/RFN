#include <iostream>
#include <vector>
#include <conio.h>
#include <string>

using namespace std;

struct Position
{
	float x;
	float y;
	Position(float xIn, float yIn) :
		x(xIn),
		y(yIn)
	{}
};

struct Block
{
	int length;
	int width;
	Position pos;
	
	Block(int lengthIn, int widthIn) :
		length(lengthIn),
		width(widthIn),
		pos(0, 0)
	{}

};

namespace mapNamespace
{
	class Map
	{
	public:
		vector<Block> blocks;
		
		Map(int blocksNumber);
		void printAll();
		struct MyStruct
		{

		};

	private:

	};
}