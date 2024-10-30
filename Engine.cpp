#include <SFML/Graphics.hpp>
#include <iostream>
#include "./GenerateMap.h"

using namespace std;
using namespace sf;



class Engine
{
public:
	
	void Start() 
	{
		
	}

	void Update() 
	{
		vector<Block> line = GenerateMap::GenerateBlock();
	}

	void Run() 
	{
		RenderWindow window(VideoMode(800, 800), "Maze");

		
		Start();
		while (window.isOpen())
		{
			Event e;
			while (window.pollEvent(e))
			{
				if (e.type == sf::Event::Closed)
					window.close();
			}

			window.clear(sf::Color::Black);

			window.draw(line, 2, sf::Lines);

			window.display();
		}

		

	}



private:

};



int main() 
{
	Engine engin;
	engin.Run();
	return 0;
}


