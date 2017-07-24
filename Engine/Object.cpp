#include "Object.h"
#include "Fire.h"
#include "Graphics.h"
#include "Game.h"


void Object::Init(int in_x, int in_y, int in_vx, int in_vy)
{
	x = in_x;
	y = in_y;
	vx = in_vx;
	vy = in_vy;
}

void Object::Object_Collide(Fire &fire)
{

	if ((fire.firex >=x - 10) && (fire.firex <= x + 10) && (fire.firey >= y - 10) && (fire.firey <= y + 10))
	{
		Destroy = true;
	}

}

void Object::DrawBox(int r, int g, int b,Graphics &gfx)
{
	if (Destroy == false)
	{
		for (int j = -10; j < 11; j++)
		{
			for (int i = -10; i < 11; i++)
			{
			gfx.PutPixel(i + x, y+j, r, g, b);
			}
		}
	}
}

void Object::Update()
{
	x += vx;
}
