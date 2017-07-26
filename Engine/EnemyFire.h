#pragma once
#include "Graphics.h"

class EnemyFire
{
public:
	void EnemyInit(int in_x);
	void CreateFire(int efirey,Graphics &gfx);
	int enemyfirex;
	int enemyfirey;
	int enemyfirevx = 0;
	int enemyfirevy = 2;
	bool createfire = false;
};