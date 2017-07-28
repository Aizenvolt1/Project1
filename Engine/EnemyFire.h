#pragma once
#include "Graphics.h"

class EnemyFire
{
public:
	void EnemyInit(int in_x);
	void CreateFire(int efirey,Graphics &gfx);
	int GetEFx();
	int GetEFy();
	bool GetCF();
	void SetCF(bool cf);
	void SetEFx(int efx);
	void SetEFy(int efy);
	void UpdateEF();
private:
	int enemyfirex;
	int enemyfirey;
	int enemyfirevy = 6;
	bool createfire = false;
};