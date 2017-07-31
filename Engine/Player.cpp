#include "Graphics.h"
#include "Player.h"

void Player::DrawCross(int r, int g, int b,Graphics &gfx)
{
	const int in_x = (int)pos.x;
	const int in_y = (int)pos.y;
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
		if (pos.x - 10.0f <=2.0f)
		{
			pos.x = 11.0f;
		}
		else if(pos.x-10>0)
		{
			pos.x -= 2.0f*dt*60.0f;
		}
	}
	if (kbd.KeyIsPressed(VK_RIGHT))
	{
		if (pos.x + 10.0f >= (float)gfx.ScreenWidth)
		{
			pos.x = (float)gfx.ScreenWidth - 10.0f;
		}
		else if(pos.x + 10.0f < (float)gfx.ScreenWidth-3.0f)
		{
			pos.x += 2.0f*dt*60.0f;
		}
	}	
}
 
void Player::SetPos(const Vec2 &pos_in)
{
	pos = pos_in;
}
Vec2 Player::GetPos() const
{
	return pos;
}
float Player::GetPx() const
{
	return pos.x;
}

float Player::GetPy() const
{
	return pos.y;
}

void Player::SetInhi(bool inhi)
{
	inhibitV=inhi;
}

bool Player::GetInhi() const
{
	return inhibitV;
}

