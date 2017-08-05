#include "EnemyFire.h"
#include "Graphics.h"


void EnemyFire::CreateFire(int r, int g, int b,Graphics &gfx)
{
	const int in_x = (int)pos.x;
	const int in_y = (int)pos.y;
	if (createfire == true)
	{
		for(int i=-6;i<-1;i++)
		gfx.PutPixel(in_x, i + in_y, r, g, b);
	}
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