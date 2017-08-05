#pragma once
#include "Graphics.h"
#include "Vec2.h"

class Stars 
{
public:
	void DrawStars(int r, int g, int b,Graphics &gfx);
	void SetPos(const Vec2 &pos_in);
	void Update(Graphics &gfx, float dt);
private:
	Vec2 pos;
	Vec2 vel=Vec2(0.0f,1.0f);
};
