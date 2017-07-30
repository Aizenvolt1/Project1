#pragma once
#include "Graphics.h"

class EnemyFire
{
public:
	void EnemyInit(float in_x);
	void CreateFire(float efirey,Graphics &gfx);
	float GetEFx();
	float GetEFy();
	bool GetCF();
	void SetCF(bool cf);
	void SetEFx(float efx);
	void SetEFy(float efy);
	void UpdateEF(float dt);
private:
	float enemyfirex;
	float enemyfirey;
	float enemyfirevy = 6.0f;
	bool createfire = false;
};