#include "Monster.h"

void Monster::move()
{

	int r = rand() % 4;
	if (r == 0)   //w
	{
		if (x > 1)
		{
			x -= distance;
		}
	}
	else if (r == 1)   //a
	{
		if (y > 1)
		{
			y -= distance;
		}
	}
	else if (r == 2)   //s
	{
		if (x < 8)
		{
			x += distance;
		}
	}
	else   //d
	{
		if (y < 18)
		{
			y += distance;
		}
	}

}

char Monster::getShape()
{
	return 'M';
}
