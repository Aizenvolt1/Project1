#include "Fire.h"
#include "Player.h"
#include "Graphics.h"

void Fire::DrawFire(int x,int y,Graphics &gfx)
{
	if (firebor == false)
	{
		gfx.PutPixel(x, -5 + y, 255, 255, 255);
		gfx.PutPixel(x, -4 + y, 255, 255, 255);
		gfx.PutPixel(x, -3 + y, 255, 255, 255);
	}
}
bool Fire::Border_Collide(Graphics &gfx)
{
	if (firey - 5< 0)
	{
		return  firebor = true;
	}
	else
		return firebor = false;
}

int Fire::GetFx()
{
	return firex;
}

int Fire::GetFy()
{
	return firey;
}

bool Fire::GetBor()
{
	return firebor;
}

void Fire::SetFx(int fx)
{
	firex = fx;
}

void Fire::SetFy(int fy)
{
	firey = fy;
}

void Fire::FireUpdate()
{
	firey += firevy;
}
