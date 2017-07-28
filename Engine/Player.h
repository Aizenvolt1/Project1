#pragma once
#include "Graphics.h"
#include "Keyboard.h"
class Player
{
public:
	void DrawCross(int r, int g, int b, Graphics &gfx);
	void UpdateP(const Keyboard &kbd,Graphics &gfx);
	int GetPx();
	int GetPy();
	void SetPxy(int inx, int iny);
	void SetInhi(bool inhi);
	bool GetInhi();
private:
	int x = 400;
	int y = 550;
	int vx = 0;
	int vy = 0;
	bool inhibitV = false;
};