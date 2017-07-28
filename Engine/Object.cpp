#include "Object.h"
#include "Fire.h"
#include "Graphics.h"
#include "Game.h"


void Object::Init(int in_x, int in_y, int in_vx)
{
	x = in_x;
	y = in_y;
	vx = in_vx;
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

int Object::GetOx()
{
	return x;
}

int Object::GetOy()
{
	return y;
}

bool Object::GetDes()
{
	return Destroy;
}

void Object::SetDes(bool setdes)
{
	Destroy = setdes;
}

void Object::Update(Graphics &gfx)
{
	x += vx;
	Border_Collide(x, y, vx,gfx);
	
}

void Object::Border_Collide(int & x, int & y, int & vx,Graphics &gfx)
{
	if (x + 10 >= gfx.ScreenWidth)
	{
		if (y < 500)
		{
			y += 30;
			x = gfx.ScreenWidth - 11;
			vx = -vx;
		}
		else
		{
			x = gfx.ScreenWidth - 11;
			vx = -vx;
		}
	}
	if (x - 10 < 0)
	{
		if (y < 500)
		{
			y += 30;
			x = 10;
			vx = -vx;
		}
		else
		{
			x = 10;
			vx = -vx;
		}
	}
}
