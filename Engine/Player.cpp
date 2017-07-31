#include "Graphics.h"
#include "Player.h"

void Player::DrawCross(int r, int g, int b,Graphics &gfx)
{
	const int in_x = (int)x;
	const int in_y = (int)y;
	gfx.PutPixel(-10+ in_x, in_y, r, g, b);
	gfx.PutPixel(-9+ in_x, in_y, r, g, b);
	gfx.PutPixel(-8+ in_x, in_y, r, g, b);
	gfx.PutPixel(-7+ in_x, in_y, r, g, b);
	gfx.PutPixel(-6+ in_x, in_y, r, g, b);
	gfx.PutPixel(-5+ in_x, in_y, r, g, b);
	gfx.PutPixel(-4+ in_x, in_y, r, g, b);
	gfx.PutPixel(-3+ in_x, in_y, r, g, b);
	gfx.PutPixel(-2+ in_x, in_y, r, g, b);
	gfx.PutPixel(-1+ in_x, in_y, r, g, b);
	gfx.PutPixel(0 + in_x, in_y, r, g, b);
	gfx.PutPixel(1 + in_x, in_y, r, g, b);
	gfx.PutPixel(2 + in_x, in_y, r, g, b);
	gfx.PutPixel(3 + in_x, in_y, r, g, b);
	gfx.PutPixel(4 + in_x, in_y, r, g, b);
	gfx.PutPixel(5 + in_x, in_y, r, g, b);
	gfx.PutPixel(6 + in_x, in_y, r, g, b);
	gfx.PutPixel(7 + in_x, in_y, r, g, b);
	gfx.PutPixel(8 + in_x, in_y, r, g, b);
	gfx.PutPixel(9 + in_x, in_y, r, g, b);
	gfx.PutPixel(10 + in_x, in_y, r, g, b);
	gfx.PutPixel(in_x, -10 + in_y, r, g, b);
	gfx.PutPixel(in_x, -9+ in_y, r, g, b);
	gfx.PutPixel(in_x, -8+ in_y, r, g, b);
	gfx.PutPixel(in_x, -7+ in_y, r, g, b);
	gfx.PutPixel(in_x, -6+ in_y, r, g, b);
	gfx.PutPixel(in_x, -5+ in_y, r, g, b);
	gfx.PutPixel(in_x, -4+ in_y, r, g, b);
	gfx.PutPixel(in_x, -3+ in_y, r, g, b);
	gfx.PutPixel(in_x, -2+ in_y, r, g, b);
	gfx.PutPixel(in_x, -1+ in_y, r, g, b);
	gfx.PutPixel(in_x, 0+ in_y, r, g, b);
	gfx.PutPixel(in_x, 1+ in_y, r, g, b);
	gfx.PutPixel(in_x, 2+ in_y, r, g, b);
	gfx.PutPixel(in_x, 3+ in_y, r, g, b);
	gfx.PutPixel(in_x, 4+ in_y, r, g, b);
	gfx.PutPixel(in_x, 5+ in_y, r, g, b);
	gfx.PutPixel(in_x, 6+ in_y, r, g, b);
	gfx.PutPixel(in_x, 7+ in_y, r, g, b);
	gfx.PutPixel(in_x, 8+ in_y, r, g, b); 
	gfx.PutPixel(in_x, 9+ in_y, r, g, b);
	gfx.PutPixel(in_x, 10+ in_y, r, g, b);
}

void Player::UpdateP(const Keyboard & kbd,Graphics &gfx,float dt)
{
	if (kbd.KeyIsPressed(VK_LEFT))
	{
		if (x - 10.0f <=2.0f)
		{
			x = 11.0f;
		}
		else if(x-10>0)
		{
			x -= 2.0f*dt*60.0f;
		}
	}
	if (kbd.KeyIsPressed(VK_RIGHT))
	{
		if (x + 10.0f >= (float)gfx.ScreenWidth)
		{
			x = (float)gfx.ScreenWidth - 10.0f;
		}
		else if(x + 10.0f < (float)gfx.ScreenWidth-3.0f)
		{
			x += 2.0f*dt*60.0f;
		}
	}	
}

void Player::SetPxy(float inx,float iny)
{
	x = inx;
	y = iny;
}

float Player::GetPx()
{
	return x;
}

float Player::GetPy()
{
	return y;
}

void Player::SetInhi(bool inhi)
{
	inhibitV=inhi;
}

bool Player::GetInhi()
{
	return inhibitV;
}

