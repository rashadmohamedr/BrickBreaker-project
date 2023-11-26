#include "Paddle.h"
#include <iostream>
using namespace std;
paddle::paddle(int r_width, int r_height, game* r_pGame):drawable(paddlePlace, r_width, r_height, r_pGame) {
	paddlePlace.x = 600-(200/2);
	paddlePlace.y = 480;
}
void paddle::draw() const {
	window* pwind = pGame->getWind();
	pwind->SetPen(RED);
	pwind->SetBrush(RED);
	cout << config.paddleWidth << " " << paddlePlace.x << " " << paddlePlace.y << " " << paddlePlace.x + 150 << " " << paddlePlace.y + 40;
	pwind->DrawRectangle(paddlePlace.x, paddlePlace.y, paddlePlace.x + 200, paddlePlace.y + 40);
}