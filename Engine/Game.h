/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.h																				  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"
#include "Player.h"
#include "Object.h"
#include "Fire.h"
#include <Random>
#include "Score.h"

class Game
{
public:
	Game(class MainWindow& wnd);
	Game(const Game&) = delete;
	Game& operator=(const Game&) = delete;
	void Go();
private:
	void ComposeFrame();
	void UpdateModel();
	void Border_Collide(int &x, int &y, int &vx, int &vy);
	void DrawTitleScreen(int x, int y);
	void DrawGameOver(int x, int y);
private:
	std::random_device rd;
	std::mt19937 rng;
	std::uniform_int_distribution<int> xDist;
	std::uniform_int_distribution<int> yDist;
	std::uniform_int_distribution<int> vDist;
	MainWindow& wnd;
	Graphics gfx;
	int r_fixed = 255;
	int g_fixed = 255;
	int b_fixed = 255;
	bool collide = false;
	bool Change_Color = false;
	Player player;
	Object object[10];
	Fire fire[2];
	Score s;
	int fcount = 0;
	int fcount1 = 0;
	bool must = false;
	bool isStarted = false;
	bool isOver = false;
	bool Replay = false;
	int DesCount = 0;
	int adder = 80;
};