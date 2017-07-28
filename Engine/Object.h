#pragma once
#include "Player.h"
#include "Fire.h"
#include "Graphics.h"
class Object
{
public:
	void Init(int in_x, int in_y, int in_vx);
	void Object_Collide(Fire &fire);
	void Update(Graphics &gfx);
	void Border_Collide(int &x, int &y, int &vx,Graphics &gfx);
	void DrawBox(int,int, int, Graphics &gfx);
	int GetOx();
	int GetOy();
	bool GetDes();
	void SetDes(bool setdes);
private:
	int vx = 1;
	int vy = 0;
	int x =0;
	int y= 0;
	bool collide = false;
	bool Destroy = false;

	
};