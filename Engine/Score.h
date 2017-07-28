#pragma once
#include "Graphics.h"

class Score
{
public:
	void DrawScore(Graphics &gfx);
private:
	int x = 10;
	int y = 10;
};