#include "EnemyFire.h"
#include "Graphics.h"


void EnemyFire::CreateFire(Graphics &gfx)
{
	const int in_x = (int)pos.x;
	const int in_y = (int)pos.y;
	if (createfire == true)
	{
		gfx.PutPixel(in_x, -5 + in_y, 255, 255, 255);
		gfx.PutPixel(in_x, -4 + in_y, 255, 255, 255);
		gfx.PutPixel(in_x, -3 + in_y, 255, 255, 255);
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