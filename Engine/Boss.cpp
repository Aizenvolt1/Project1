#include "Boss.h"
#include "Graphics.h"


void Boss::DrawTriangle(int r, int g, int b, Graphics & gfx)
{
	const int in_x = (int)pos.x;
	const int in_y = (int)pos.y;
	int x;
	int y;
	int k = 20;
	for (y = -10; y <= 10; y++)
	{
		for (x = -k; x <= k; x++)
		{
			gfx.PutPixel(x + in_x, y + in_y, r, g, b);
		}
		k--;
		if (k == -1)
			break;
	}
}
void Boss::Init(const Vec2 &pos_in, float vx)
{
	pos = pos_in;
	vel.x = vx;
}

bool Boss::Object_Collide(Vec2 &pos_in)
{
	const int in_x = (int)pos_in.x;
	const int in_y = (int)pos_in.y;
	int k = 20;
	int x;
	int y;
	bool finish = false;
	for (y = -10; y <= 10; y++)
	{
		for (x = -k; x <= k; x++)
		{
			if ((((int)pos.x + x) == in_x) && (((int)pos.y + y) >= (in_y - 7) && ((int)pos.y + y) <= (in_y - 2)))
				finish = true;
		}
		k--;
		if (k == -1)
			break;
	}
	return finish;
}

void Boss::Border_Collide(float & x, float & y, float & vx, Graphics &gfx)
{
	if (pos.x + 20.0f >= (float)gfx.ScreenWidth -3)
	{
		if (pos.y < 500.0f)
		{
		/*	pos.y += 30.0;*/
			pos.x = (float)gfx.ScreenWidth - 21.0f;
			vel.x = -vel.x;
		}
		else
		{
			pos.x = (float)gfx.ScreenWidth - 21.0f;
			vel.x = -vel.x;
		}
	}
	if (pos.x - 20.0f < 3.0f)
	{
		if (pos.y < 500.0f)
		{
			/*pos.y += 30.0f;*/
			pos.x = 20.0f;
			vel.x = -vel.x;
		}
		else
		{
			pos.x = 10.0f;
			vel.x = -vel.x;
		}
	}
}

Vec2 Boss::GetPos() const
{
	return pos;
}

Vec2 Boss::GetVel() const
{
	return vel;
}

void Boss::SetPos(const Vec2 & pos_in)
{
	pos = pos_in;
}

float Boss::GetOx() const
{
	return pos.x;
}

float Boss::GetOy() const
{
	return pos.y;
}

bool Boss::GetDes() const
{
	return Destroy;
}

void Boss::SetDes(bool setdes)
{
	Destroy = setdes;
}

void Boss::Update(Graphics &gfx, float dt,int dir)
{
	if (GetDes() == false)
	{
		if(dir==1)
		pos.x -= vel.x*dt*60.0f;
		else if(dir==2)
		pos.x += vel.x*dt*60.0f;
		Border_Collide(pos.x, pos.y, vel.x, gfx);
	}
}

