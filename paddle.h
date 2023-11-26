#pragma once
#include "gameConfig.h"
#include "game.h"
#include "collidable.h"
#include "drawable.h"
class Paddle :public collidable
{
public:
	Paddle(point r_uprleft, int r_width, int r_height, game* r_pGame);
	void draw() const;
//	void move();
};

