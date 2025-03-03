#ifndef CONSTANTS__H__
#define CONSTANTS__H__

namespace def 
{
	namespace window 
	{
		constexpr int WIDTH = 720;
		constexpr int HEIGHT = 405;
		constexpr const char* TITLE = "Flappy Bird Game";
		constexpr int FRAMERATE = 60; 
		constexpr float TIME_PER_FRAME = 1.f / FRAMERATE; 
	}

	namespace physics 
	{
		constexpr float GRAVITY = 9.87f;
	}
}

#endif
