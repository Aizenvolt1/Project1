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
	if (firey - (float)5< 0)
	{
		return  firebor = true;
	}
	else
		return firebor = false;
}

float Fire::GetFx()
{
	return firex;
}

float Fire::GetFy()
{
	return firey;
}

bool Fire::GetBor()
{
	return firebor;
}

void Fire::SetFx(float fx)
{
	firex = fx;
}

void Fire::SetFy(float fy)
{
	firey = fy;
}

void Fire::FireUpdate(float dt)
{
	firey += firevy*dt*60.0f;
}
