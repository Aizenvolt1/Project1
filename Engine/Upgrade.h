#pragma once
#include "Vec2.h"
#include "Graphics.h"

class Upgrade
{
public:
	void DrawUpgrade(int r, int g, int b, Graphics &gfx);
	void SetPos(const Vec2 &pos_in);
	Vec2 GetPos() const;
private:
	Vec2 pos;
	Vec2 vel = Vec2(0.0f, 2.0f);
};