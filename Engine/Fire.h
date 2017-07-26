#pragma once
#include "Player.h"
#include "Graphics.h"

class Fire
{
public:
	void Fire::DrawFire(int x, int y, Graphics &gfx);
	bool Fire::Border_Collide(Graphics &gfx);
	bool firetrig = false;
	int firex=0;
	int firey=0;
	int firevx= 0;
	int firevy =-5;
	bool firebor = false;
};