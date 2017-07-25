#include "Score.h"
#include "Graphics.h"
void Score::DrawScore(Graphics &gfx)
{
	for (int j = 0; j < 25; j++)
	{
		if (j == 0)
		{
			for (int i = 0; i < 25; i++)
			{
				gfx.PutPixel(i + x, y + j, 255, 0, 0);
			}
		}
		if (j > 0 && j < 13)
		{
			gfx.PutPixel(x, y + j, 255, 0, 0);
		}
		if (j == 12)
		{
			for (int i = 0; i < 25; i++)
			{
				gfx.PutPixel(i + x, y + j, 255, 0, 0);
			}
		}
		if (j >= 12 && j<=24)
		{
			gfx.PutPixel(34, y + j, 255, 0, 0);
		}
		if (j == 24)
		{
			for (int i = 0; i < 25; i++)
			{
				gfx.PutPixel(i + x, y + j, 255, 0, 0);
			}
		}
	}

}

