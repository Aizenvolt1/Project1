#pragma once
#include "Player.h"
#include "Fire.h"
#include "Graphics.h"
class Object
{
public:
	void Init(float in_x, float in_y, float in_vx);
	void Object_Collide(Fire &fire);
	void Update(Graphics &gfx,float dt);
	void Border_Collide(float &x, float &y, float &vx,Graphics &gfx);
	void DrawBox(int,int, int, Graphics &gfx);
	float GetOx();
	float GetOy();
	bool GetDes();
	void SetDes(bool setdes);
private:
	float vx = 1.0f;
	float vy = 0.0f;
	float x =0.0f;
	float y= 0.0f;
	bool collide = false;
	bool Destroy = false;

	
};