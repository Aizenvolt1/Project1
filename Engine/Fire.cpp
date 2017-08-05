#include "Fire.h"
#include "Player.h"
#include "Graphics.h"

void Fire::DrawFire(int r, int g, int b,float x,float y,Graphics &gfx)
{
	const int in_x = (int)x;
	const int in_y = (int)y;
	if (firebor == false)
	{
		for (int i = -7; i<-1; i++)
			gfx.PutPixel(in_x, i + in_y, r, g, b);
	}
}
bool Fire::Border_Collide(Graphics &gfx)
{
	if (pos.y - (float)7< 0)
	{
		return  firebor = true;
	}
	else
		return firebor = false;
}

Vec2 Fire::GetPos() const
{
	return pos;
}

float Fire::GetFx() const
{
	return pos.x;
}

float Fire::GetFy() const
{
	return pos.y;
}

bool Fire::GetBor() 
{
	return firebor;
}

void Fire::SetBor(bool fired)
{
	firebor=fired;
}

void Fire::SetPos(const Vec2 &pos_in)
{
	pos = pos_in;
}

void Fire::FireUpdate(float dt)
{
	pos.y += vel.y*dt*60.0f;
}
