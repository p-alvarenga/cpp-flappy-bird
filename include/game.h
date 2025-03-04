#ifndef GAME__H__
#define GAME__H__

#include <SFML/Graphics.hpp>

#include "def.h"
#include "player.h"
#include "components/texture-holder.h"

class Game  
{
	private:
		sf::RenderWindow window;
		TextureHolder texture_holder;
		Player player;

	public:
		void run(); 
		
		void processEvents();
		void update();
		void render();
	
		void handleKeyboardInput(); 

		Game(); 
};

#endif
