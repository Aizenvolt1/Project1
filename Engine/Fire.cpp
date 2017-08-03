#include "Fire.h"
#include "Player.h"
#include "Graphics.h"

void Fire::DrawFire(float x,float y,Graphics &gfx)
{
	const int in_x = (int)x;
	const int in_y = (int)y;
	if (firebor == false)
	{
		gfx.PutPixel(in_x,-5 + in_y, 255, 255, 255);
		gfx.PutPixel(in_x,-4 + in_y, 255, 255, 255);
		gfx.PutPixel(in_x,-3 + in_y, 255, 255, 255);
	}
}
bool Fire::Border_Collide(Graphics &gfx)
{
	if (pos.y - (float)5< 0)
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
