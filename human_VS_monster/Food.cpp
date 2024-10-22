#include "Food.h"

void Food::move()
{
	count = (count + 1) % 5;

	if (count >= 3)
	{
		int r = rand() % 4;
		if (r == 0)   //w
		{
			if (x > 0)
			{
				x -= distance;
			}
		}
		else if (r == 1)   //a
		{
			if (y > 0)
			{
				y -= distance;
			}
		}
		else if (r == 2)   //s
		{
			if (x < 9)
			{
				x += distance;
			}
		}
		else   //d
		{
			if (y < 19)
			{
				y += distance;
			}
		}
	}
}

char Food::getShape()
{
	return '@';
}
