#include "Object.h"
#include "Fire.h"
#include "Graphics.h"
#include "Game.h"


void Object::Init(float in_x, float in_y, float in_vx)
{
	x = in_x;
	y = in_y;
	vx = in_vx;
}

void Object::Object_Collide(Fire &fire)
{

	if ((fire.GetFx() >=x - 10) && (fire.GetFx() <= x + 10) && (fire.GetFy() >= y - 10) && (fire.GetFy() <= y + 10))
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
			gfx.PutPixel(i + (int)x, (int)y+j, r, g, b);
			}
		}
	}
}

float Object::GetOx()
{
	return x;
}

float Object::GetOy()
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

void Object::Update(Graphics &gfx,float dt)
{
	x += vx*dt*60.0f;
	Border_Collide(x, y, vx,gfx);
	
}

void Object::Border_Collide(float & x, float & y, float & vx,Graphics &gfx)
{
	if (x + 10.0f >= (float)gfx.ScreenWidth)
	{
		if (y < 500.0f)
		{
			y += 30.0;
			x = (float)gfx.ScreenWidth - 11.0f;
			vx = -vx;
		}
		else
		{
			x = (float)gfx.ScreenWidth - 11.0f;
			vx = -vx;
		}
	}
	if (x - 10.0f < 0.0f)
	{
		if (y < 500.0f)
		{
			y += 30.0f;
			x = 10.0f;
			vx = -vx;
		}
		else
		{
			x = 10.0f;
			vx = -vx;
		}
	}
}
