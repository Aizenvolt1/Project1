#include "EnemyFire.h"
#include "Graphics.h"


void EnemyFire::CreateFire(int efirey,Graphics &gfx)
{
	if (createfire == true)
	{
		gfx.PutPixel(enemyfirex, -5 + efirey, 255, 255, 255);
		gfx.PutPixel(enemyfirex, -4 + efirey, 255, 255, 255);
		gfx.PutPixel(enemyfirex, -3 + efirey, 255, 255, 255);
	}
}
int EnemyFire::GetEFx()
{
	return enemyfirex;
}
int EnemyFire::GetEFy()
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
void EnemyFire::SetEFx(int efx)
{
}
void EnemyFire::SetEFy(int efy)
{
	enemyfirey = efy;
}
void EnemyFire::UpdateEF()
{
	enemyfirey += enemyfirevy;
}
void EnemyFire::EnemyInit(int in_x)
{
	enemyfirex = in_x;
}