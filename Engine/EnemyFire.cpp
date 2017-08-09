#include "EnemyFire.h"
#include "Graphics.h"

void EnemyFire::CreateFire(int r, int g, int b,Graphics &gfx)
{
	const int in_x = (int)pos.x;
	const int in_y = (int)pos.y;
	for(int i=-6;i<-1;i++)
	gfx.PutPixel(in_x, i + in_y, r, g, b);
}
Vec2 EnemyFire::GetPos() const
{
	return pos;
}
float EnemyFire::GetEFx() const
{
	return pos.x;
}
float EnemyFire::GetEFy() const
{
	return pos.y;
}
bool EnemyFire::GetCF() const
{
	return createfire;
}
void EnemyFire::SetCF(bool cf)
{
	createfire = cf;
}
void EnemyFire::SetEFy(float efy)
{
	pos.y = efy;
}
void EnemyFire::UpdateEF(float dt)
{
	pos.y += vel.y*dt*60.0f;
}
void EnemyFire::EnemyInit(float in_x)
{
	pos.x = in_x;
}

bool EnemyFire::Player_Collide(Vec2 &pos_in,Graphics &gfx)
{
	const int in_x = (int)pos_in.x;
	const int in_y = (int)pos_in.y;
	int k = 0;
	int x;
	int y;
	bool finish = false;
	if (GetCF() == true)
	{
		for (y = -10; y <= 10; y++)
		{
			for (x = -k; x <= k; x++)
			{
				if ((in_x + x) == (int)pos.x && ((in_y + y) >= ((int)pos.y - 6) && (in_y + y) <= ((int)pos.y - 2)))
					finish = true;
			}
			k++;
		}
	}
	return finish;
}