#pragma once
#include "Player.h"
#include "Graphics.h"
#include "Vec2.h"

class Fire
{
public:
	void Fire::DrawFire(float x, float y, Graphics &gfx);
	bool Fire::Border_Collide(Graphics &gfx);
	Vec2 GetPos() const;
	void SetPos(const Vec2 &pos_in);
	float GetFx() const;
	float GetFy() const;
	bool GetBor() const;
	void FireUpdate(float dt);
private:
	Vec2 pos;
	Vec2 vel=Vec2(0.0f,-5.0f);
	bool firebor = false;
};