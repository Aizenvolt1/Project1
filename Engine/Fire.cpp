#include "Fire.h"
#include "Player.h"
#include "Graphics.h"

void Fire::DrawFire(float x,float y,Graphics &gfx)
{
	if (firebor == false)
	{
		gfx.PutPixel((int)x,-5 + (int)y, 255, 255, 255);
		gfx.PutPixel((int)x,-4 + (int)y, 255, 255, 255);
		gfx.PutPixel((int)x,-3 + (int)y, 255, 255, 255);
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

void Fire::FireUpdate()
{
	firey += firevy;
}
