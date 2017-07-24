#include "Graphics.h"
#include "Player.h"

void Player::DrawCross(int r, int g, int b,Graphics &gfx)
{
	gfx.PutPixel(-10 + x, y, r, g, b);
	gfx.PutPixel(-9 + x, y, r, g, b);
	gfx.PutPixel(-8 + x, y, r, g, b);
	gfx.PutPixel(-7 + x, y, r, g, b);
	gfx.PutPixel(-6 + x, y, r, g, b);
	gfx.PutPixel(-5 + x, y, r, g, b);
	gfx.PutPixel(-4 + x, y, r, g, b);
	gfx.PutPixel(-3 + x, y, r, g, b);
	gfx.PutPixel(-2 + x, y, r, g, b);
	gfx.PutPixel(-1 + x, y, r, g, b);
	gfx.PutPixel(0 + x, y, r, g, b);
	gfx.PutPixel(1 + x, y, r, g, b);
	gfx.PutPixel(2 + x, y, r, g, b);
	gfx.PutPixel(3 + x, y, r, g, b);
	gfx.PutPixel(4 + x, y, r, g, b);
	gfx.PutPixel(5 + x, y, r, g, b);
	gfx.PutPixel(6 + x, y, r, g, b);
	gfx.PutPixel(7 + x, y, r, g, b);
	gfx.PutPixel(8 + x, y, r, g, b);
	gfx.PutPixel(9 + x, y, r, g, b);
	gfx.PutPixel(10 + x, y, r, g, b);
	gfx.PutPixel(x, -10 + y, r, g, b);
	gfx.PutPixel(x, -9 + y, r, g, b);
	gfx.PutPixel(x, -8 + y, r, g, b);
	gfx.PutPixel(x, -7 + y, r, g, b);
	gfx.PutPixel(x, -6 + y, r, g, b);
	gfx.PutPixel(x, -5 + y, r, g, b);
	gfx.PutPixel(x, -4 + y, r, g, b);
	gfx.PutPixel(x, -3 + y, r, g, b);
	gfx.PutPixel(x, -2 + y, r, g, b);
	gfx.PutPixel(x, -1 + y, r, g, b);
	gfx.PutPixel(x, 0 + y, r, g, b);
	gfx.PutPixel(x, 1 + y, r, g, b);
	gfx.PutPixel(x, 2 + y, r, g, b);
	gfx.PutPixel(x, 3 + y, r, g, b);
	gfx.PutPixel(x, 4 + y, r, g, b);
	gfx.PutPixel(x, 5 + y, r, g, b);
	gfx.PutPixel(x, 6 + y, r, g, b);
	gfx.PutPixel(x, 7 + y, r, g, b);
	gfx.PutPixel(x, 8 + y, r, g, b); 
	gfx.PutPixel(x, 9 + y, r, g, b);
	gfx.PutPixel(x, 10 + y, r, g, b);
}
