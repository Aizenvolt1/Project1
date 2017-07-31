#include "EnemyFire.h"
#include "Graphics.h"


void EnemyFire::CreateFire(float efirey,Graphics &gfx)
{
	const int in_x = (int)enemyfirex;
	const int in_y = (int)enemyfirey;
	if (createfire == true)
	{
		gfx.PutPixel(in_x, -5 + in_y, 255, 255, 255);
		gfx.PutPixel(in_x, -4 + in_y, 255, 255, 255);
		gfx.PutPixel(in_x, -3 + in_y, 255, 255, 255);
	}
}
float EnemyFire::GetEFx()
{
	return enemyfirex;
}
float EnemyFire::GetEFy()
{
	return enemyfirey;
}
bool EnemyFire::GetCF()
{
	return createfire;
}
void EnemyFire::SetCF(bool cf)
{
	createfire = cf;
}
void EnemyFire::SetEFx(float efx)
{
}
void EnemyFire::SetEFy(float efy)
{
	enemyfirey = efy;
}
void EnemyFire::UpdateEF(float dt)
{
	enemyfirey += enemyfirevy*dt*60.0f;
}
void EnemyFire::EnemyInit(float in_x)
{
	enemyfirex = in_x;
}