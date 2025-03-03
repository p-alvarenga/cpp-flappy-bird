#ifndef ENTITY__H__
#define ENTITY__H__

class Entity 
{
	private:
		sf::Sprite sprite;
		sf::RectangleShape hitbox;
		

	public:		
		void getSprite(); 

		Entity(); 
};


#endif 
