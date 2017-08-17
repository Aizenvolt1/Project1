#include "FrUpgrade.h"
#include "Graphics.h"
#include "Object.h"

void FrUpgrade::DrawFrUpgrade(int r, int g, int b, Graphics & gfx)
{
	const int in_x = (int)pos.x;
	const int in_y = (int)pos.y;
	for (int j = -5; j < 5; j++)
	{
		for (int i = -5; i < 5; i++)
		{
			gfx.PutPixel(i + in_x, j + in_y, r, g, b);
		}
	}
}

void FrUpgrade::SetPos(const Vec2 &pos_in)
{
	pos = pos_in;
}

Vec2 FrUpgrade::GetPos() const
{
	return pos;
}

void FrUpgrade::Border_Collide(float & x, float & y, float & vx, Graphics & gfx)
{
	if (pos.x + 10.0f >= (float)gfx.ScreenWidth)
	{
		if (pos.y < 250.0f)
		{
			pos.y += 30.0;
			pos.x = (float)gfx.ScreenWidth - 11.0f;
			vel.x = -vel.x;
		}
		else
		{
			pos.x = (float)gfx.ScreenWidth - 11.0f;
			vel.x = -vel.x;
		}
	}
	if (pos.x - 10.0f < 0.0f)
	{
		if (pos.y < 250.0f)
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

void FrUpgrade::Update(Graphics & gfx, float dt, Object& object)
{
	if (object.GetDes() == false)
	{
		pos.x += vel.x*dt*60.0f;
		Border_Collide(pos.x, pos.y, vel.x, gfx);
	}
	else if (object.GetDes() == true && pos.y<gfx.ScreenHeight - 8)
	{
		pos.y += 3.0f*dt*60.0f;
	}
	else if (object.GetDes() == true && pos.y > gfx.ScreenHeight - 8)
	{
		frupgradeDes = true;
		pos.y = gfx.ScreenHeight - 5;
	}
}

void FrUpgrade::SetVel(const Vec2 & vel_in)
{
	vel = vel_in;
}

bool FrUpgrade::GetDes() const
{
	return frupgradeDes;
}

void FrUpgrade::SetDes(bool setdes)
{
	frupgradeDes = setdes;
}

float FrUpgrade::GetUx() const
{
	return pos.x;
}

float FrUpgrade::GetUy() const
{
	return pos.y;
}

bool FrUpgrade::Player_Upgrade(Vec2 &pos_in)
{
	const int in_x = (int)pos_in.x;
	const int in_y = (int)pos_in.y;
	int k = 0;
	int x;
	int y;
	bool finish = false;
	for (y = -10; y <= 10; y++)
	{
		for (x = -k; x <= k; x++)
		{
			if (((in_x + x) >= ((int)pos.x - 5) && (in_x + x) <= ((int)pos.x + 4)) && ((in_y + y) >= ((int)pos.y - 5) && (in_y + y) <= ((int)pos.y + 4)))
				finish = true;
		}
		k++;
	}
	return finish;
}
