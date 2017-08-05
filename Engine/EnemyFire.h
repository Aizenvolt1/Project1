#pragma once
#include "Graphics.h"
#include "Vec2.h"
class EnemyFire
{
public:
	void EnemyInit(float in_x);
	void CreateFire(int r, int g, int b,Graphics &gfx);
	Vec2 GetPos() const;
	float GetEFx() const;
	float GetEFy() const;
	bool GetCF() const;
	void SetCF(bool cf);
	void SetEFy(float efy);
	void UpdateEF(float dt);
	bool firstf = false;
private:
	Vec2 pos;
	Vec2 vel=Vec2(0.0f,6.0f);
	bool createfire = false;
};