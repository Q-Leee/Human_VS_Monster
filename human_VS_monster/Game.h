#pragma once
#include <iostream>
#include "GameObject.h"
#include "Human.h"
#include "Monster.h"
#include "Food.h"
#include <cstdlib>

using namespace std;

class Game
{
	Human* h = new Human(0, 0, 1);
	Monster* m = new Monster(5, 5, 2);
	Food* f = new Food(8, 3, 1);

public:
	void show();
	void game();
};

