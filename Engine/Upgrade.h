#pragma once
#include "Vec2.h"
#include "Graphics.h"
#include "Object.h"

class Upgrade
{
public:
	void DrawUpgrade(int r, int g, int b, Graphics &gfx);
	void SetPos(const Vec2 &pos_in);
	Vec2 GetPos() const;
	void Border_Collide(float &x, float &y, float &vx, Graphics &gfx);
	void Update(Graphics &gfx, float dt, Object& object);
	void SetVel(const Vec2 &vel_in);
	bool GetDes() const;
	void SetDes(bool setdes);
	float GetUx() const;
	float GetUy() const;
private:
	Vec2 pos;
	Vec2 vel;
	bool upgradeDes = false;
};