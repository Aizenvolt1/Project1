#pragma once
#include "Player.h"
#include "Fire.h"
#include "Graphics.h"

class Object
{
public:
	void Init(int in_x, int in_y, int in_vx, int in_vy);
	void Object_Collide(Fire &fire);
	void Update();
	void DrawBox(int,int, int, Graphics &gfx);
	int vx = 1;
	int vy = 0;
	int x = 400;
	int y= 5;
	bool collide = false;
	bool Destroy = false;

	
};