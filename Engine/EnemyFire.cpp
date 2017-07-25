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
void EnemyFire::EnemyInit(int in_x)
{
	enemyfirex = in_x;
}