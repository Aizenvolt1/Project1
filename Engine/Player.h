#pragma once
#include "Graphics.h"
class Player
{
public:
	void DrawCross(int r, int g, int b, Graphics &gfx);
	int x = 400;
	int y = 550;
	int vx = 0;
	int vy = 0;
	bool inhibitUp = false;
	bool inhibitDown = false;
	bool inhibitLeft = false;
	bool inhibitRight = false;
	bool shapeIsChanged = false;
	bool inhibitV = false;
};