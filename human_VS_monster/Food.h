#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "GameObject.h"

using namespace std;

class Food : public GameObject
{
	int count = 0;
public:
	Food(int x, int y, int distance) : GameObject(x, y, distance) { srand(time(NULL)); }
	void move();
	char getShape();
};

