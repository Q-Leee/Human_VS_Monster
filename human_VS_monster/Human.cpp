#include "Human.h"

void Human::move()
{
	string key;

	cout << "Up(w), Left(a), Down(s), Right(d) >> ";
	cin >> key;

	if (key == "w")   //UP
	{
		if (x > 0)
		{
			x -= distance;
		}
		else
		{
			cout << "You are at the top edge of the grid!" << endl;
		}
	}
	else if (key == "a")   //LEFT
	{
		if (y > 0)
		{
			y -= distance;
		}
		else
		{
			cout << "You are at the left edge of the grid!" << endl;
		}
	}
	else if (key == "s")   //DOWN
	{
		if (x < 9)
		{
			x += distance;
		}
		else
		{
			cout << "You are at the bottom edge of the grid!" << endl;
		}
	}
	else if (key == "d")   //RIGHT
	{
		if (y < 19)
		{
			y += distance;
		}
		else
		{
			cout << "You are at the right edge of the grid!" << endl;
		}
	}
	else
	{
		cout << "Invalid key. Try again." << endl;
	}

}

char Human::getShape()
{
	return 'H';
}
