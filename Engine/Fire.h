#pragma once
#include "Player.h"
#include "Graphics.h"

class Fire
{
public:
	void Fire::DrawFire(float x, float y, Graphics &gfx);
	bool Fire::Border_Collide(Graphics &gfx);
	float GetFx();
	float GetFy();
	bool GetBor();
	void SetFx(float fx);
	void SetFy(float fy);
	void FireUpdate(float dt);
private:
	float firex=0.0f;
	float firey=0.0f;
	float firevy =-5.0f;
	bool firebor = false;
};