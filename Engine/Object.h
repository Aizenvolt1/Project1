#pragma once
#include "Fire.h"
#include "Graphics.h"
#include "Vec2.h"
class Object
{
public:
	void Init(const Vec2 &pos_in, float vx);
	bool Object_Collide(Vec2 &pos_in);
	void Update(Graphics &gfx,float dt);
	void Border_Collide(float &x, float &y, float &vx,Graphics &gfx);
	void DrawTriangle(int,int, int, Graphics &gfx);
	Vec2 GetPos() const;
	Vec2 GetVel() const;
	void SetPos(const Vec2 &pos_in);
	float GetOx() const;
	float GetOy() const;
	bool GetDes() const;
	void SetDes(bool setdes);
private:
	Vec2 pos;
	Vec2 vel;
	bool collide = false;
	bool Destroy = false;

	
};