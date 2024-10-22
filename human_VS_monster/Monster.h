#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "GameObject.h"

using namespace std;

class Monster : public GameObject
{
public:
	Monster(int x, int y, int distance) : GameObject(x, y, distance) { srand(time(NULL)); }
	void move();
	char getShape();
};

