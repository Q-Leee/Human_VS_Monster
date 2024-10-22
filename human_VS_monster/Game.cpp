#include "Game.h"

void Game::show()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			if (h->getX() == i && h->getY() == j)
			{
				cout << h->getShape();
			}
			else if (m->getX() == i && m->getY() == j)
			{
				cout << m->getShape();
			}
			else if (f->getX() == i && f->getY() == j)
			{
				cout << f->getShape();
			}
			else
			{
				cout << "-";
			}
		}
		cout << endl;
	}
}

void Game::game()
{
	cout << "*** Human VS Monster ***" << endl << endl;

	while (true)
	{
		system("cls");
		show();

		if (m->collide(h))
		{
			cout << "Human is Loser" << endl << endl;
			break;
		}
		else if (h->collide(f))
		{
			cout << "Human is Winner" << endl << endl;
			break;
		}
		else if (m->collide(f))
		{
			cout << "Human is Loser" << endl << endl;
			break;
		}

		h->move();
		m->move();
		f->move();
		cout << endl;
	}
}


