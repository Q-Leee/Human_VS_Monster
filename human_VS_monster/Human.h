#pragma once
#include <iostream>
#include <string>
#include "GameObject.h"

using namespace std;

class Human : public GameObject
{
public:
	Human(int x, int y, int distance) : GameObject(x, y, distance) {}
	void move();
	char getShape();
};

