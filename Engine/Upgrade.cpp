#include "Upgrade.h"
#include "Graphics.h"

void Upgrade::DrawUpgrade(int r, int g, int b, Graphics & gfx)
{
	const int in_x = (int)pos.x;
	const int in_y = (int)pos.y;
	for (int j = -5; j < 5; j++)
	{
		for (int i = -5; i < 5; i++)
		{
			gfx.PutPixel(i + in_x,j + in_y,r, g, b);
		}
	}
}

void Upgrade::SetPos(const Vec2 &pos_in)
{
	pos = pos_in;
}

Vec2 Upgrade::GetPos() const
{
	return pos;
}
