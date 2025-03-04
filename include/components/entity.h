#ifndef ENTITY__H__
#define ENTITY__H__

#include <SFML/Graphics.hpp>
#include <memory>
#include <iostream> // remove ?

//#include "def.h"

class Entity 
{
	private:
		sf::Sprite sprite;
		sf::RectangleShape hitbox;

	public:		
		inline const sf::Sprite& getSprite() const;
		Entity() = default; 
		
		void setSprite(sf::Texture& texture_ref); 
		
		void setPosition(sf::Vector2f& pos);
		void setPosition(float x, float y);
		void move(sf::Vector2f& movement);  

		//Entity(std::unique_ptr<sf::Texture> texture_ptr);
		// Entity constructor must have a overload to receive unique_ptr<sf::Texture>
};

const sf::Sprite& Entity::getSprite() const { return sprite; }

#endif 
