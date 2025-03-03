#include "../include/game.h"

Game::Game() : 
	window(sf::VideoMode(def::window::WIDTH, def::window::HEIGHT), def::window::TITLE)
{}

void Game::run() 
{
	sf::Clock clock;

	sf::Time delta = sf::Time::Zero;
	sf::Time time_per_frame = sf::seconds(def::window::TIME_PER_FRAME);

	while(window.isOpen())
	{
		delta += clock.restart();

		processEvents();
		render(); 

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
	window.draw(player.getSprite()); 

	return;
}
