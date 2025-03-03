#ifndef GAME__H__
#define GAME__H__

#include <SFML/Graphics.hpp>
#include "constants.h"

class Game  
{
	private:
		sf::RenderWindow window;

	public:
		void run(); 
		
		void processEvents();
		void update();
		void render();

		Game(); 
};

#endif
