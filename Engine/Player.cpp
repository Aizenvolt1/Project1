#include "Graphics.h"
#include "Player.h"

void Player::DrawCross(int r, int g, int b,Graphics &gfx)
{
	gfx.PutPixel(-10 + (int)x, (int)y, r, g, b);
	gfx.PutPixel(-9+ (int)x, (int)y, r, g, b);
	gfx.PutPixel(-8+ (int)x, (int)y, r, g, b);
	gfx.PutPixel(-7+ (int)x, (int)y, r, g, b);
	gfx.PutPixel(-6+ (int)x, (int)y, r, g, b);
	gfx.PutPixel(-5+ (int)x, (int)y, r, g, b);
	gfx.PutPixel(-4+ (int)x, (int)y, r, g, b);
	gfx.PutPixel(-3+ (int)x, (int)y, r, g, b);
	gfx.PutPixel(-2+ (int)x, (int)y, r, g, b);
	gfx.PutPixel(-1+ (int)x, (int)y, r, g, b);
	gfx.PutPixel(0 + (int)x, (int)y, r, g, b);
	gfx.PutPixel(1 + (int)x, (int)y, r, g, b);
	gfx.PutPixel(2 + (int)x, (int)y, r, g, b);
	gfx.PutPixel(3 + (int)x, (int)y, r, g, b);
	gfx.PutPixel(4 + (int)x, (int)y, r, g, b);
	gfx.PutPixel(5 + (int)x, (int)y, r, g, b);
	gfx.PutPixel(6 + (int)x, (int)y, r, g, b);
	gfx.PutPixel(7 + (int)x, (int)y, r, g, b);
	gfx.PutPixel(8 + (int)x, (int)y, r, g, b);
	gfx.PutPixel(9 + (int)x, (int)y, r, g, b);
	gfx.PutPixel(10 + (int)x, (int)y, r, g, b);
	gfx.PutPixel((int)x, -10 + (int)y, r, g, b);
	gfx.PutPixel((int)x, -9+ (int)y, r, g, b);
	gfx.PutPixel((int)x, -8+ (int)y, r, g, b);
	gfx.PutPixel((int)x, -7+ (int)y, r, g, b);
	gfx.PutPixel((int)x, -6+ (int)y, r, g, b);
	gfx.PutPixel((int)x, -5+ (int)y, r, g, b);
	gfx.PutPixel((int)x, -4+ (int)y, r, g, b);
	gfx.PutPixel((int)x, -3+ (int)y, r, g, b);
	gfx.PutPixel((int)x, -2+ (int)y, r, g, b);
	gfx.PutPixel((int)x, -1+ (int)y, r, g, b);
	gfx.PutPixel((int)x, 0+ (int)y, r, g, b);
	gfx.PutPixel((int)x, 1+ (int)y, r, g, b);
	gfx.PutPixel((int)x, 2+ (int)y, r, g, b);
	gfx.PutPixel((int)x, 3+ (int)y, r, g, b);
	gfx.PutPixel((int)x, 4+ (int)y, r, g, b);
	gfx.PutPixel((int)x, 5+ (int)y, r, g, b);
	gfx.PutPixel((int)x, 6+ (int)y, r, g, b);
	gfx.PutPixel((int)x, 7+ (int)y, r, g, b);
	gfx.PutPixel((int)x, 8+ (int)y, r, g, b); 
	gfx.PutPixel((int)x, 9+ (int)y, r, g, b);
	gfx.PutPixel((int)x, 10+ (int)y, r, g, b);
}

void Player::UpdateP(const Keyboard & kbd,Graphics &gfx)
{
	if (kbd.KeyIsPressed(VK_LEFT))
	{
		if (x - 10.0f <0.0f)
		{
			x = 11.0f;
		}
		else if(x-10>0)
		{
			x -= 2.0f;
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
			x += 2.0f;
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

