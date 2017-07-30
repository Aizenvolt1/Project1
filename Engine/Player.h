#pragma once
#include "Graphics.h"
#include "Keyboard.h"
class Player
{
public:
	void DrawCross(int r, int g, int b, Graphics &gfx);
	void UpdateP(const Keyboard &kbd,Graphics &gfx,float dt);
	float GetPx();
	float GetPy();
	void SetPxy(float inx, float iny);
	void SetInhi(bool inhi);
	bool GetInhi();
private:
	float x = 400.0f;
	float y = 550.0f;
	float vx = 0.0f;
	float vy = 0.0f;
	bool inhibitV = false;
};