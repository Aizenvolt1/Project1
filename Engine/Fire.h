#pragma once
#include "Player.h"
#include "Graphics.h"

class Fire
{
public:
	void Fire::DrawFire(int x, int y, Graphics &gfx);
	bool Fire::Border_Collide(Graphics &gfx);
	int GetFx();
	int GetFy();
	bool GetBor();
	void SetFx(int fx);
	void SetFy(int fy);
	void FireUpdate();
private:
	int firex=0;
	int firey=0;
	int firevy =-5;
	bool firebor = false;
};