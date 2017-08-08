#include "Object.h"
#include "Fire.h"
#include "Graphics.h"
#include "Game.h"


void Object::Init(const Vec2 &pos_in, float vx)
{
	pos = pos_in;
	vel.x = vx;
}

void Object::Object_Collide(Fire &fire)
{

	if ((fire.GetFx() >=pos.x - 10) && (fire.GetFx() <= pos.x + 10) && (fire.GetFy() >= pos.y - 10) && (fire.GetFy() <= pos.y + 10))
	{
		Destroy = true;
		fire.SetPos(Vec2(1.00f, 1.00f));
		SetPos(Vec2(100.0f, 570.0f));
	}

}

void Object::DrawBox(int r, int g, int b,Graphics &gfx)
{
	const int in_x = (int)pos.x;
	const int in_y = (int)pos.y;
	int x;
	int y;
	int k = 10;
	for (y = -10; y <= 10; y++)
	{
		for (x = -k; x <= k; x++)
		{
			gfx.PutPixel(x + in_x, y + in_y, r, g, b);
		}
		k--;
	}
}

Vec2 Object::GetPos() const
{
	return pos;
}

Vec2 Object::GetVel() const
{
	return vel;
}

void Object::SetPos(const Vec2 & pos_in)
{
	pos = pos_in;
}

float Object::GetOx() const
{
	return pos.x;
}

float Object::GetOy() const
{
	return pos.y;
}

bool Object::GetDes() const
{
	return Destroy;
}

void Object::SetDes(bool setdes)
{
	Destroy = setdes;
}

void Object::Update(Graphics &gfx, float dt)
{
	if (GetDes() == false)
	{
		pos.x += vel.x*dt*60.0f;
		Border_Collide(pos.x, pos.y, vel.x, gfx);
	}
}

void Object::Border_Collide(float & x, float & y, float & vx,Graphics &gfx)
{
	if (pos.x + 10.0f >= (float)gfx.ScreenWidth)
	{
		if (pos.y < 500.0f)
		{
			pos.y += 30.0;
			pos.x = (float)gfx.ScreenWidth - 11.0f;
			vel.x = -vel.x;
		}
		else
		{
			pos.x = (float)gfx.ScreenWidth - 11.0f;
			vel. x = -vel.x;
		}
	}
	if (pos.x - 10.0f < 0.0f)
	{
		if (pos.y < 500.0f)
		{
			pos.y += 30.0f;
			pos.x = 10.0f;
			vel.x = -vel.x;
		}
		else
		{
			pos.x = 10.0f;
			vel.x = -vel.x;
		}
	}
}
