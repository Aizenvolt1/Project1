#include "Stars.h"

void Stars::DrawStars(int r, int g, int b, Graphics & gfx)
{
	const int in_x = (int)pos.x;
	const int in_y = (int)pos.y;
	gfx.PutPixel(in_x,in_y, r, g, b);
}

void Stars::SetPos(const Vec2 & pos_in)
{
	pos = pos_in;
}

void Stars::Update(Graphics &gfx,float dt)
{
	pos.y += vel.y*dt*60.0f;
	if ((int)pos.y + 1> gfx.ScreenHeight)
	{
		pos.y = 1;
	}
}
