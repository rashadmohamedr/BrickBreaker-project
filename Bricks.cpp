#include "Bricks.h"


////////////////////////////////////////////////////  class brick  ///////////////////////////////////////
brick::brick(point r_uprleft, int r_width, int r_height, game* r_pGame):
	collidable(r_uprleft, r_width, r_height, r_pGame)
{
}

////////////////////////////////////////////////////  class normalBrick  /////////////////////////////////
normalBrick::normalBrick(point r_uprleft, int r_width, int r_height, game* r_pGame) :
	brick(r_uprleft, r_width, r_height, r_pGame)
{
	imageName = "C:\Users\rashad\Downloads\CIE 202\Project Startup Code\images\Bricks\NormalBrick.jpg";
}

void normalBrick::collisionAction()
{
	//TODO: Add collision action logic
	strength--;
	//score++;
	if (!strength) {
		//delete brick
	}
}

////////////////////////////////////////////////////  class hardBrick  /////////////////////////////////
hardBrick::hardBrick(point r_uprleft, int r_width, int r_height, game* r_pGame):
	brick(r_uprleft, r_width, r_height, r_pGame)
{
	imageName = ".\images\Bricks\NormalBrick.jpg";
}

void hardBrick::collisionAction()
{
	//TODO: Add collision action logic
	strength--;
	//score++;
	if (!strength) {
		//delete brick
	}
}

