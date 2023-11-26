#include "Paddle.h"
#include "game.h"
#include "collidable.h"
Paddle::Paddle(point r_uprleft, int r_width, int r_height, game* r_pGame)
	:drawable(point r_uprleft, int r_width, int r_height, game* r_pGame){}
void Paddle::draw() const {
	window* pwind = pGame->getWind();
	pwind->SetPen(BLACK);
	pwind->SetBrush(BLACK);
	pwind->DrawRectangle(uprLft.x, uprLft.y, uprLft.x + width, uprLft.y + height);
}