#include "../include/game.h"

Game::Game() : 
	window(sf::VideoMode(def::window::WIDTH, def::window::HEIGHT), def::window::TITLE)
{
	try 
	{
		texture_holder.load(def::textures::player, def::textures::path::player);	
		player.setSprite(texture_holder.get(def::textures::player));
		
		player.setPosition(float(720/2),float(405/2)); 
	}
	catch (std::runtime_error* error) 
	{
		std::cout << "ERROR: " << error->what();
	}
}

void Game::run() 
{
	sf::Clock clock;

	sf::Time delta = sf::Time::Zero;
	sf::Time time_per_frame = sf::seconds(def::window::TIME_PER_FRAME);

	while(window.isOpen())
	{
		delta += clock.restart();

		processEvents();

		while (delta > time_per_frame) 
		{
			delta -= time_per_frame;	
			processEvents();
			update();
		}

		render();
	}
	return;
}

 
void Game::processEvents() 
{
	sf::Event ev;

	while (window.pollEvent(ev)) 
	{
		switch (ev.type) 
		{
			case sf::Event::Closed:
				window.close();
				break;
		}
	}

	return;
}

void Game::update() 
{
	return;
}

void Game::render() 
{
	window.clear(); 
	window.draw(player.getSprite()); 
	window.display();

	return;
}
