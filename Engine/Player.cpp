#include "Graphics.h"
#include "Player.h"

void Player::DrawTriangle(int r, int g, int b,Graphics &gfx)
{
	const int in_x = (int)pos.x;
	const int in_y = (int)pos.y;
	int x;
	int y;
	int k = 0;
	for (y = -10; y <= 10; y++)
	{
		for (x =-k ; x<=k;x++)
		{
			gfx.PutPixel(x + in_x,y + in_y, r, g, b);
		}
		k++;
	}
}

void Player::UpdateP(const Keyboard & kbd,Graphics &gfx,float dt,int &Descount,int &stage,int &objectnumber,bool &isOver)
{
	if (Descount < objectnumber)
	{
		if (kbd.KeyIsPressed(VK_LEFT))
		{
			if ((int)pos.x - 20 <= 2)
			{
				pos.x = 20;
			}
			else if ((int)pos.x - 20 > 0)
			{
				pos.x -= 2.0f*dt*60.0f;
			}
		}
		if (kbd.KeyIsPressed(VK_RIGHT))
		{
			if ((int)pos.x + 20 >= gfx.ScreenWidth - 2)
			{
				pos.x = (float)gfx.ScreenWidth - 20.0f;
			}
			else if ((int)pos.x + 20 < gfx.ScreenWidth)
			{
				pos.x += 2.0f*dt*60.0f;
			}
		}
	}
	else
	{
		pos.y -= vel.y*dt*60.0f;
		if (pos.y - 10 < 0)
		{
			stage++;
			isOver = true;
			pos = Vec2(400.0f, 550.0f);
		}
		Descount = 0;
	}
}
 
void Player::SetPos(const Vec2 &pos_in)
{
	pos = pos_in;
}
Vec2 Player::GetPos() const
{
	return pos;
}
float Player::GetPx() const
{
	return pos.x;
}

float Player::GetPy() const
{
	return pos.y;
}

void Player::SetInhi(bool inhi)
{
	inhibitV=inhi;
}

bool Player::GetInhi() const
{
	return inhibitV;
}

