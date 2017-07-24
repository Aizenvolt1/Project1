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