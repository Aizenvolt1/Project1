#pragma once
#include "Player.h"
#include "Fire.h"
#include "Graphics.h"
#include "Vec2.h"
class Object
{
public:
	void Init(Vec2 &pos_in, float vx);
	void Object_Collide(Fire &fire);
	void Update(Graphics &gfx,float dt);
	void Border_Collide(float &x, float &y, float &vx,Graphics &gfx);
	void DrawBox(int,int, int, Graphics &gfx);
	Vec2 GetPos();
	float GetOx();
	float GetOy();
	bool GetDes();
	void SetDes(bool setdes);
private:
	Vec2 pos;
	Vec2 vel;
	bool collide = false;
	bool Destroy = false;

	
};