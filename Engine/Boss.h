#pragma once
#include "Graphics.h"
#include "Vec2.h"

class Boss
{
public:
	void Init(const Vec2 &pos_in, float vx);
	bool Object_Collide(Vec2 &pos_in);
	void Update(Graphics &gfx, float dt,int dir);
	void Border_Collide(float &x, float &y, float &vx, Graphics &gfx);
	void DrawTriangle(int r, int g, int b, Graphics &gfx);
	Vec2 GetPos() const;
	Vec2 GetVel() const;
	void SetPos(const Vec2 &pos_in);
	float GetOx() const;
	float GetOy() const;
	bool GetDes() const;
	void SetDes(bool setdes);
private:
	Vec2 pos = Vec2(400.0f, 80.0f);
	Vec2 vel = Vec2(3.0f, 0.0f);
	bool collide = false;
	bool Destroy = false;
};